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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_MEMBERTRANSACTIONITEM_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_MEMBERTRANSACTIONITEM_H_

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
                * 会员间交易明细信息
                */
                class MemberTransactionItem : public AbstractModel
                {
                public:
                    MemberTransactionItem();
                    ~MemberTransactionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取交易类型。
__1__：转出
__2__：转入
                     * @return TransType 交易类型。
__1__：转出
__2__：转入
                     * 
                     */
                    std::string GetTransType() const;

                    /**
                     * 设置交易类型。
__1__：转出
__2__：转入
                     * @param _transType 交易类型。
__1__：转出
__2__：转入
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
                     * 获取银行记账类型。
_平安渠道为：_
_1：会员支付_
_2：会员冻结_
_3：会员解冻_
_4：登记挂账_
_6：下单预支付_
_7：确认并付款_
_8：会员退款_
_22：见证+收单平台调账_
_23：见证+收单资金冻结_
_24：见证+收单资金解冻_
_25：会员间交易退款_
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BankBookingType 银行记账类型。
_平安渠道为：_
_1：会员支付_
_2：会员冻结_
_3：会员解冻_
_4：登记挂账_
_6：下单预支付_
_7：确认并付款_
_8：会员退款_
_22：见证+收单平台调账_
_23：见证+收单资金冻结_
_24：见证+收单资金解冻_
_25：会员间交易退款_
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBankBookingType() const;

                    /**
                     * 设置银行记账类型。
_平安渠道为：_
_1：会员支付_
_2：会员冻结_
_3：会员解冻_
_4：登记挂账_
_6：下单预支付_
_7：确认并付款_
_8：会员退款_
_22：见证+收单平台调账_
_23：见证+收单资金冻结_
_24：见证+收单资金解冻_
_25：会员间交易退款_
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bankBookingType 银行记账类型。
_平安渠道为：_
_1：会员支付_
_2：会员冻结_
_3：会员解冻_
_4：登记挂账_
_6：下单预支付_
_7：确认并付款_
_8：会员退款_
_22：见证+收单平台调账_
_23：见证+收单资金冻结_
_24：见证+收单资金解冻_
_25：会员间交易退款_
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBankBookingType(const std::string& _bankBookingType);

                    /**
                     * 判断参数 BankBookingType 是否已赋值
                     * @return BankBookingType 是否已赋值
                     * 
                     */
                    bool BankBookingTypeHasBeenSet() const;

                    /**
                     * 获取转入方子账户账号。
_平安渠道为转入见证子账户的账号_
                     * @return InSubAccountNumber 转入方子账户账号。
_平安渠道为转入见证子账户的账号_
                     * 
                     */
                    std::string GetInSubAccountNumber() const;

                    /**
                     * 设置转入方子账户账号。
_平安渠道为转入见证子账户的账号_
                     * @param _inSubAccountNumber 转入方子账户账号。
_平安渠道为转入见证子账户的账号_
                     * 
                     */
                    void SetInSubAccountNumber(const std::string& _inSubAccountNumber);

                    /**
                     * 判断参数 InSubAccountNumber 是否已赋值
                     * @return InSubAccountNumber 是否已赋值
                     * 
                     */
                    bool InSubAccountNumberHasBeenSet() const;

                    /**
                     * 获取转出方子账户账号。
_平安渠道为转出见证子账户的账号_
                     * @return OutSubAccountNumber 转出方子账户账号。
_平安渠道为转出见证子账户的账号_
                     * 
                     */
                    std::string GetOutSubAccountNumber() const;

                    /**
                     * 设置转出方子账户账号。
_平安渠道为转出见证子账户的账号_
                     * @param _outSubAccountNumber 转出方子账户账号。
_平安渠道为转出见证子账户的账号_
                     * 
                     */
                    void SetOutSubAccountNumber(const std::string& _outSubAccountNumber);

                    /**
                     * 判断参数 OutSubAccountNumber 是否已赋值
                     * @return OutSubAccountNumber 是否已赋值
                     * 
                     */
                    bool OutSubAccountNumberHasBeenSet() const;

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
                     * 交易类型。
__1__：转出
__2__：转入
                     */
                    std::string m_transType;
                    bool m_transTypeHasBeenSet;

                    /**
                     * 交易状态。
__0__：成功
                     */
                    std::string m_tranStatus;
                    bool m_tranStatusHasBeenSet;

                    /**
                     * 交易金额。
                     */
                    std::string m_transAmount;
                    bool m_transAmountHasBeenSet;

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
                     * 银行记账类型。
_平安渠道为：_
_1：会员支付_
_2：会员冻结_
_3：会员解冻_
_4：登记挂账_
_6：下单预支付_
_7：确认并付款_
_8：会员退款_
_22：见证+收单平台调账_
_23：见证+收单资金冻结_
_24：见证+收单资金解冻_
_25：会员间交易退款_
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bankBookingType;
                    bool m_bankBookingTypeHasBeenSet;

                    /**
                     * 转入方子账户账号。
_平安渠道为转入见证子账户的账号_
                     */
                    std::string m_inSubAccountNumber;
                    bool m_inSubAccountNumberHasBeenSet;

                    /**
                     * 转出方子账户账号。
_平安渠道为转出见证子账户的账号_
                     */
                    std::string m_outSubAccountNumber;
                    bool m_outSubAccountNumberHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_MEMBERTRANSACTIONITEM_H_
