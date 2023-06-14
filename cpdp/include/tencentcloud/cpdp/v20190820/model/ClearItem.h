/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLEARITEM_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLEARITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 银行在途清算结果信息
                */
                class ClearItem : public AbstractModel
                {
                public:
                    ClearItem();
                    ~ClearItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取STRING(8)，日期（格式: 20190101）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Date STRING(8)，日期（格式: 20190101）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置STRING(8)，日期（格式: 20190101）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _date STRING(8)，日期（格式: 20190101）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取STRING(40)，子账号类型（子帐号类型。1: 普通会员子账号; 2: 挂账子账号; 3: 手续费子账号; 4: 利息子账号; 5: 平台担保子账号; 7: 在途; 8: 理财购买子帐号; 9: 理财赎回子帐号; 10: 平台子拥有结算子帐号）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAcctType STRING(40)，子账号类型（子帐号类型。1: 普通会员子账号; 2: 挂账子账号; 3: 手续费子账号; 4: 利息子账号; 5: 平台担保子账号; 7: 在途; 8: 理财购买子帐号; 9: 理财赎回子帐号; 10: 平台子拥有结算子帐号）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAcctType() const;

                    /**
                     * 设置STRING(40)，子账号类型（子帐号类型。1: 普通会员子账号; 2: 挂账子账号; 3: 手续费子账号; 4: 利息子账号; 5: 平台担保子账号; 7: 在途; 8: 理财购买子帐号; 9: 理财赎回子帐号; 10: 平台子拥有结算子帐号）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAcctType STRING(40)，子账号类型（子帐号类型。1: 普通会员子账号; 2: 挂账子账号; 3: 手续费子账号; 4: 利息子账号; 5: 平台担保子账号; 7: 在途; 8: 理财购买子帐号; 9: 理财赎回子帐号; 10: 平台子拥有结算子帐号）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAcctType(const std::string& _subAcctType);

                    /**
                     * 判断参数 SubAcctType 是否已赋值
                     * @return SubAcctType 是否已赋值
                     * 
                     */
                    bool SubAcctTypeHasBeenSet() const;

                    /**
                     * 获取STRING(3)，对账状态（0: 成功; 1: 失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReconcileStatus STRING(3)，对账状态（0: 成功; 1: 失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReconcileStatus() const;

                    /**
                     * 设置STRING(3)，对账状态（0: 成功; 1: 失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reconcileStatus STRING(3)，对账状态（0: 成功; 1: 失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReconcileStatus(const std::string& _reconcileStatus);

                    /**
                     * 判断参数 ReconcileStatus 是否已赋值
                     * @return ReconcileStatus 是否已赋值
                     * 
                     */
                    bool ReconcileStatusHasBeenSet() const;

                    /**
                     * 获取STRING(300)，对账返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReconcileReturnMsg STRING(300)，对账返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReconcileReturnMsg() const;

                    /**
                     * 设置STRING(300)，对账返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reconcileReturnMsg STRING(300)，对账返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReconcileReturnMsg(const std::string& _reconcileReturnMsg);

                    /**
                     * 判断参数 ReconcileReturnMsg 是否已赋值
                     * @return ReconcileReturnMsg 是否已赋值
                     * 
                     */
                    bool ReconcileReturnMsgHasBeenSet() const;

                    /**
                     * 获取STRING(20)，清算状态（0: 成功; 1: 失败; 2: 异常; 3: 待处理）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClearingStatus STRING(20)，清算状态（0: 成功; 1: 失败; 2: 异常; 3: 待处理）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClearingStatus() const;

                    /**
                     * 设置STRING(20)，清算状态（0: 成功; 1: 失败; 2: 异常; 3: 待处理）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clearingStatus STRING(20)，清算状态（0: 成功; 1: 失败; 2: 异常; 3: 待处理）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClearingStatus(const std::string& _clearingStatus);

                    /**
                     * 判断参数 ClearingStatus 是否已赋值
                     * @return ClearingStatus 是否已赋值
                     * 
                     */
                    bool ClearingStatusHasBeenSet() const;

                    /**
                     * 获取STRING(2)，清算返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClearingReturnMsg STRING(2)，清算返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClearingReturnMsg() const;

                    /**
                     * 设置STRING(2)，清算返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clearingReturnMsg STRING(2)，清算返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClearingReturnMsg(const std::string& _clearingReturnMsg);

                    /**
                     * 判断参数 ClearingReturnMsg 是否已赋值
                     * @return ClearingReturnMsg 是否已赋值
                     * 
                     */
                    bool ClearingReturnMsgHasBeenSet() const;

                    /**
                     * 获取STRING(300)，待清算总金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalAmt STRING(300)，待清算总金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotalAmt() const;

                    /**
                     * 设置STRING(300)，待清算总金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalAmt STRING(300)，待清算总金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalAmt(const std::string& _totalAmt);

                    /**
                     * 判断参数 TotalAmt 是否已赋值
                     * @return TotalAmt 是否已赋值
                     * 
                     */
                    bool TotalAmtHasBeenSet() const;

                private:

                    /**
                     * STRING(8)，日期（格式: 20190101）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * STRING(40)，子账号类型（子帐号类型。1: 普通会员子账号; 2: 挂账子账号; 3: 手续费子账号; 4: 利息子账号; 5: 平台担保子账号; 7: 在途; 8: 理财购买子帐号; 9: 理财赎回子帐号; 10: 平台子拥有结算子帐号）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAcctType;
                    bool m_subAcctTypeHasBeenSet;

                    /**
                     * STRING(3)，对账状态（0: 成功; 1: 失败）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reconcileStatus;
                    bool m_reconcileStatusHasBeenSet;

                    /**
                     * STRING(300)，对账返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reconcileReturnMsg;
                    bool m_reconcileReturnMsgHasBeenSet;

                    /**
                     * STRING(20)，清算状态（0: 成功; 1: 失败; 2: 异常; 3: 待处理）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clearingStatus;
                    bool m_clearingStatusHasBeenSet;

                    /**
                     * STRING(2)，清算返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clearingReturnMsg;
                    bool m_clearingReturnMsgHasBeenSet;

                    /**
                     * STRING(300)，待清算总金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalAmt;
                    bool m_totalAmtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLEARITEM_H_
