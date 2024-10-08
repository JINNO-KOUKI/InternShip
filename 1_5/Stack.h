#pragma once

#include "LinkedList.h"

/// @brief		スタッククラス
/// @tparam T	スタックに格納する型
/// @detail		内部のデータ管理には、LinkedList<T>を利用しています。
template <typename T>
class Stack
{
public:

	/// @brief	デフォルトコンストラクタ
	/// @detail 現状、実装はありません。
	Stack() {}

	/// @brief	デストラクタ
	/// @detail	現状、実装はありません。
	~Stack() {}

public:

	/// @brief			スタックにデータを追加する
	/// @tparam T		格納されているデータ型
	/// @param inData	追加するデータ
	/// @return			正常終了 : TRUE, 異常終了 : FALSE
	/// @details		スタックの末尾にデータをプッシュします。\n
	///					新規メモリの確保に失敗した際に、Assertが発生します。
	inline bool Push(const T& inData);

	/// @brief			スタックのデータを取り出す
	/// @tparam T		格納されているデータ型
	/// @param outData	取り出すデータの格納先
	/// @return			正常終了 : TRUE, 異常終了 : FALSE
	/// @detail			スタックの末尾からデータをポップします。
	inline bool Pop(T& outData);

	/// @brief		格納されているデータ数を取得する
	/// @tparam T	格納されているデータ型
	/// @return		データ数
	/// @detail		現在、スタックに格納されているデータ数を取得します。
	inline unsigned int Size() const noexcept;

private:
	/// @brief データの格納に使用する双方向リスト
	LinkedList<T> _List;
};

#include "Stack.inl"