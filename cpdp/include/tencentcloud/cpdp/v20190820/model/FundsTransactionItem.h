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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_FUNDSTRANSACTIONITEM_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_FUNDSTRANSACTIONITEM_H_

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
                * 会员资金交易明细信息
                */
                class FundsTransactionItem : public AbstractModel
                {
                public:
                    FundsTransactionItem();
                    ~FundsTransactionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资金交易类型。
__1__：提现/退款
__2__：清分/充值
                     * @return TransType 资金交易类型。
__1__：提现/退款
__2__：清分/充值
                     * 
                     */
                    std::string GetTransType() const;

                    /**
                     * 设置资金交易类型。
__1__：提现/退款
__2__：清分/充值
                     * @param _transType 资金交易类型。
__1__：提现/退款
__2__：清分/充值
                     * 
                     */
                    void SetTransType(const std::string& _transType);

                    /**
                     * 判断参数 TransType 是否已赋值
                     * @return TransType 是否已赋值
                     * 
                     */
                    bool TransTypeHasBeenSet() const;

                    /**
                     * 获取银行记账说明。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BankBookingMessage 银行记账说明。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBankBookingMessage() const;

                    /**
                     * 设置银行记账说明。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bankBookingMessage 银行记账说明。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBankBookingMessage(const std::string& _bankBookingMessage);

                    /**
                     * 判断参数 BankBookingMessage 是否已赋值
                     * @return BankBookingMessage 是否已赋值
                     * 
                     */
                    bool BankBookingMessageHasBeenSet() const;

                    /**
                     * 获取交易状态。
__0__：成功
                     * @return TranStatus 交易状态。
__0__：成功
                     * 
                     */
                    std::string GetTranStatus() const;

                    /**
                     * 设置交易状态。
__0__：成功
                     * @param _tranStatus 交易状态。
__0__：成功
                     * 
                     */
                    void SetTranStatus(const std::string& _tranStatus);

                    /**
                     * 判断参数 TranStatus 是否已赋值
                     * @return TranStatus 是否已赋值
                     * 
                     */
                    bool TranStatusHasBeenSet() const;

                    /**
                     * 获取业务方会员标识。
_平安渠道为交易网会员代码_
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransNetMemberCode 业务方会员标识。
_平安渠道为交易网会员代码_
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTransNetMemberCode() const;

                    /**
                     * 设置业务方会员标识。
_平安渠道为交易网会员代码_
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transNetMemberCode 业务方会员标识。
_平安渠道为交易网会员代码_
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransNetMemberCode(const std::string& _transNetMemberCode);

                    /**
                     * 判断参数 TransNetMemberCode 是否已赋值
                     * @return TransNetMemberCode 是否已赋值
                     * 
                     */
                    bool TransNetMemberCodeHasBeenSet() const;

                    /**
                     * 获取子账户账号。
_平安渠道为见证子账户的账号_
                     * @return SubAccountNumber 子账户账号。
_平安渠道为见证子账户的账号_
                     * 
                     */
                    std::string GetSubAccountNumber() const;

                    /**
                     * 设置子账户账号。
_平安渠道为见证子账户的账号_
                     * @param _subAccountNumber 子账户账号。
_平安渠道为见证子账户的账号_
                     * 
                     */
                    void SetSubAccountNumber(const std::string& _subAccountNumber);

                    /**
                     * 判断参数 SubAccountNumber 是否已赋值
                     * @return SubAccountNumber 是否已赋值
                     * 
                     */
                    bool SubAccountNumberHasBeenSet() const;

                    /**
                     * 获取子账户名称。
_平安渠道为见证子账户的户名_
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountName 子账户名称。
_平安渠道为见证子账户的户名_
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountName() const;

                    /**
                     * 设置子账户名称。
_平安渠道为见证子账户的户名_
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountName 子账户名称。
_平安渠道为见证子账户的户名_
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAccountName(const std::string& _subAccountName);

                    /**
                     * 判断参数 SubAccountName 是否已赋值
                     * @return SubAccountName 是否已赋值
                     * 
                     */
                    bool SubAccountNameHasBeenSet() const;

                    /**
                     * 获取交易金额。
                     * @return TransAmount 交易金额。
                     * 
                     */
                    std::string GetTransAmount() const;

                    /**
                     * 设置交易金额。
                     * @param _transAmount 交易金额。
                     * 
                     */
                    void SetTransAmount(const std::string& _transAmount);

                    /**
                     * 判断参数 TransAmount 是否已赋值
                     * @return TransAmount 是否已赋值
                     * 
                     */
                    bool TransAmountHasBeenSet() const;

                    /**
                     * 获取交易手续费。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransFee 交易手续费。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTransFee() const;

                    /**
                     * 设置交易手续费。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transFee 交易手续费。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransFee(const std::string& _transFee);

                    /**
                     * 判断参数 TransFee 是否已赋值
                     * @return TransFee 是否已赋值
                     * 
                     */
                    bool TransFeeHasBeenSet() const;

                    /**
                     * 获取交易日期，格式：yyyyMMdd。
                     * @return TransDate 交易日期，格式：yyyyMMdd。
                     * 
                     */
                    std::string GetTransDate() const;

                    /**
                     * 设置交易日期，格式：yyyyMMdd。
                     * @param _transDate 交易日期，格式：yyyyMMdd。
                     * 
                     */
                    void SetTransDate(const std::string& _transDate);

                    /**
                     * 判断参数 TransDate 是否已赋值
                     * @return TransDate 是否已赋值
                     * 
                     */
                    bool TransDateHasBeenSet() const;

                    /**
                     * 获取交易时间，格式：HHmmss。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransTime 交易时间，格式：HHmmss。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTransTime() const;

                    /**
                     * 设置交易时间，格式：HHmmss。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transTime 交易时间，格式：HHmmss。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransTime(const std::string& _transTime);

                    /**
                     * 判断参数 TransTime 是否已赋值
                     * @return TransTime 是否已赋值
                     * 
                     */
                    bool TransTimeHasBeenSet() const;

                    /**
                     * 获取银行系统流水号。
_平安渠道为见证系统流水号_
                     * @return BankSequenceNumber 银行系统流水号。
_平安渠道为见证系统流水号_
                     * 
                     */
                    std::string GetBankSequenceNumber() const;

                    /**
                     * 设置银行系统流水号。
_平安渠道为见证系统流水号_
                     * @param _bankSequenceNumber 银行系统流水号。
_平安渠道为见证系统流水号_
                     * 
                     */
                    void SetBankSequenceNumber(const std::string& _bankSequenceNumber);

                    /**
                     * 判断参数 BankSequenceNumber 是否已赋值
                     * @return BankSequenceNumber 是否已赋值
                     * 
                     */
                    bool BankSequenceNumberHasBeenSet() const;

                    /**
                     * 获取备注。
_平安渠道，如果是见证+收单的交易，返回交易订单号_
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注。
_平安渠道，如果是见证+收单的交易，返回交易订单号_
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注。
_平安渠道，如果是见证+收单的交易，返回交易订单号_
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注。
_平安渠道，如果是见证+收单的交易，返回交易订单号_
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 资金交易类型。
__1__：提现/退款
__2__：清分/充值
                     */
                    std::string m_transType;
                    bool m_transTypeHasBeenSet;

                    /**
                     * 银行记账说明。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bankBookingMessage;
                    bool m_bankBookingMessageHasBeenSet;

                    /**
                     * 交易状态。
__0__：成功
                     */
                    std::string m_tranStatus;
                    bool m_tranStatusHasBeenSet;

                    /**
                     * 业务方会员标识。
_平安渠道为交易网会员代码_
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transNetMemberCode;
                    bool m_transNetMemberCodeHasBeenSet;

                    /**
                     * 子账户账号。
_平安渠道为见证子账户的账号_
                     */
                    std::string m_subAccountNumber;
                    bool m_subAccountNumberHasBeenSet;

                    /**
                     * 子账户名称。
_平安渠道为见证子账户的户名_
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAccountName;
                    bool m_subAccountNameHasBeenSet;

                    /**
                     * 交易金额。
                     */
                    std::string m_transAmount;
                    bool m_transAmountHasBeenSet;

                    /**
                     * 交易手续费。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transFee;
                    bool m_transFeeHasBeenSet;

                    /**
                     * 交易日期，格式：yyyyMMdd。
                     */
                    std::string m_transDate;
                    bool m_transDateHasBeenSet;

                    /**
                     * 交易时间，格式：HHmmss。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transTime;
                    bool m_transTimeHasBeenSet;

                    /**
                     * 银行系统流水号。
_平安渠道为见证系统流水号_
                     */
                    std::string m_bankSequenceNumber;
                    bool m_bankSequenceNumberHasBeenSet;

                    /**
                     * 备注。
_平安渠道，如果是见证+收单的交易，返回交易订单号_
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_FUNDSTRANSACTIONITEM_H_
