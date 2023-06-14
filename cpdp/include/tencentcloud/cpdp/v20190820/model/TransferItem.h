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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSFERITEM_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSFERITEM_H_

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
                * 转账充值明细信息
                */
                class TransferItem : public AbstractModel
                {
                public:
                    TransferItem();
                    ~TransferItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取STRING(10)，入账类型（02: 会员充值; 03: 资金挂账）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InAcctType STRING(10)，入账类型（02: 会员充值; 03: 资金挂账）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInAcctType() const;

                    /**
                     * 设置STRING(10)，入账类型（02: 会员充值; 03: 资金挂账）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inAcctType STRING(10)，入账类型（02: 会员充值; 03: 资金挂账）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInAcctType(const std::string& _inAcctType);

                    /**
                     * 判断参数 InAcctType 是否已赋值
                     * @return InAcctType 是否已赋值
                     * 
                     */
                    bool InAcctTypeHasBeenSet() const;

                    /**
                     * 获取STRING(32)，交易网会员代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranNetMemberCode STRING(32)，交易网会员代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranNetMemberCode() const;

                    /**
                     * 设置STRING(32)，交易网会员代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranNetMemberCode STRING(32)，交易网会员代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranNetMemberCode(const std::string& _tranNetMemberCode);

                    /**
                     * 判断参数 TranNetMemberCode 是否已赋值
                     * @return TranNetMemberCode 是否已赋值
                     * 
                     */
                    bool TranNetMemberCodeHasBeenSet() const;

                    /**
                     * 获取STRING(50)，见证子帐户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAcctNo STRING(50)，见证子帐户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAcctNo() const;

                    /**
                     * 设置STRING(50)，见证子帐户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAcctNo STRING(50)，见证子帐户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAcctNo(const std::string& _subAcctNo);

                    /**
                     * 判断参数 SubAcctNo 是否已赋值
                     * @return SubAcctNo 是否已赋值
                     * 
                     */
                    bool SubAcctNoHasBeenSet() const;

                    /**
                     * 获取STRING(20)，入金金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranAmt STRING(20)，入金金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranAmt() const;

                    /**
                     * 设置STRING(20)，入金金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranAmt STRING(20)，入金金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranAmt(const std::string& _tranAmt);

                    /**
                     * 判断参数 TranAmt 是否已赋值
                     * @return TranAmt 是否已赋值
                     * 
                     */
                    bool TranAmtHasBeenSet() const;

                    /**
                     * 获取STRING(50)，入金账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InAcctNo STRING(50)，入金账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInAcctNo() const;

                    /**
                     * 设置STRING(50)，入金账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inAcctNo STRING(50)，入金账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInAcctNo(const std::string& _inAcctNo);

                    /**
                     * 判断参数 InAcctNo 是否已赋值
                     * @return InAcctNo 是否已赋值
                     * 
                     */
                    bool InAcctNoHasBeenSet() const;

                    /**
                     * 获取STRING(150)，入金账户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InAcctName STRING(150)，入金账户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInAcctName() const;

                    /**
                     * 设置STRING(150)，入金账户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inAcctName STRING(150)，入金账户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInAcctName(const std::string& _inAcctName);

                    /**
                     * 判断参数 InAcctName 是否已赋值
                     * @return InAcctName 是否已赋值
                     * 
                     */
                    bool InAcctNameHasBeenSet() const;

                    /**
                     * 获取STRING(3)，币种
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ccy STRING(3)，币种
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCcy() const;

                    /**
                     * 设置STRING(3)，币种
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ccy STRING(3)，币种
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCcy(const std::string& _ccy);

                    /**
                     * 判断参数 Ccy 是否已赋值
                     * @return Ccy 是否已赋值
                     * 
                     */
                    bool CcyHasBeenSet() const;

                    /**
                     * 获取STRING(8)，会计日期（即银行主机记账日期）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountingDate STRING(8)，会计日期（即银行主机记账日期）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountingDate() const;

                    /**
                     * 设置STRING(8)，会计日期（即银行主机记账日期）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountingDate STRING(8)，会计日期（即银行主机记账日期）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountingDate(const std::string& _accountingDate);

                    /**
                     * 判断参数 AccountingDate 是否已赋值
                     * @return AccountingDate 是否已赋值
                     * 
                     */
                    bool AccountingDateHasBeenSet() const;

                    /**
                     * 获取STRING(150)，银行名称（付款账户银行名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BankName STRING(150)，银行名称（付款账户银行名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBankName() const;

                    /**
                     * 设置STRING(150)，银行名称（付款账户银行名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bankName STRING(150)，银行名称（付款账户银行名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBankName(const std::string& _bankName);

                    /**
                     * 判断参数 BankName 是否已赋值
                     * @return BankName 是否已赋值
                     * 
                     */
                    bool BankNameHasBeenSet() const;

                    /**
                     * 获取STRING(300)，转账备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark STRING(300)，转账备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置STRING(300)，转账备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark STRING(300)，转账备注
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

                    /**
                     * 获取STRING(52)，见证系统流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrontSeqNo STRING(52)，见证系统流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrontSeqNo() const;

                    /**
                     * 设置STRING(52)，见证系统流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frontSeqNo STRING(52)，见证系统流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrontSeqNo(const std::string& _frontSeqNo);

                    /**
                     * 判断参数 FrontSeqNo 是否已赋值
                     * @return FrontSeqNo 是否已赋值
                     * 
                     */
                    bool FrontSeqNoHasBeenSet() const;

                private:

                    /**
                     * STRING(10)，入账类型（02: 会员充值; 03: 资金挂账）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inAcctType;
                    bool m_inAcctTypeHasBeenSet;

                    /**
                     * STRING(32)，交易网会员代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranNetMemberCode;
                    bool m_tranNetMemberCodeHasBeenSet;

                    /**
                     * STRING(50)，见证子帐户的帐号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAcctNo;
                    bool m_subAcctNoHasBeenSet;

                    /**
                     * STRING(20)，入金金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranAmt;
                    bool m_tranAmtHasBeenSet;

                    /**
                     * STRING(50)，入金账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inAcctNo;
                    bool m_inAcctNoHasBeenSet;

                    /**
                     * STRING(150)，入金账户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inAcctName;
                    bool m_inAcctNameHasBeenSet;

                    /**
                     * STRING(3)，币种
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ccy;
                    bool m_ccyHasBeenSet;

                    /**
                     * STRING(8)，会计日期（即银行主机记账日期）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountingDate;
                    bool m_accountingDateHasBeenSet;

                    /**
                     * STRING(150)，银行名称（付款账户银行名称）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bankName;
                    bool m_bankNameHasBeenSet;

                    /**
                     * STRING(300)，转账备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * STRING(52)，见证系统流水号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frontSeqNo;
                    bool m_frontSeqNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSFERITEM_H_
