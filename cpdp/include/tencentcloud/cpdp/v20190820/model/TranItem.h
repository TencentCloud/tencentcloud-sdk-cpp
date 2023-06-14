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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_TRANITEM_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_TRANITEM_H_

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
                * 交易信息
                */
                class TranItem : public AbstractModel
                {
                public:
                    TranItem();
                    ~TranItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取STRING(50)，资金汇总账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FundSummaryAcctNo STRING(50)，资金汇总账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFundSummaryAcctNo() const;

                    /**
                     * 设置STRING(50)，资金汇总账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fundSummaryAcctNo STRING(50)，资金汇总账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFundSummaryAcctNo(const std::string& _fundSummaryAcctNo);

                    /**
                     * 判断参数 FundSummaryAcctNo 是否已赋值
                     * @return FundSummaryAcctNo 是否已赋值
                     * 
                     */
                    bool FundSummaryAcctNoHasBeenSet() const;

                    /**
                     * 获取STRING(50)，见证子账户的账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAcctNo STRING(50)，见证子账户的账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAcctNo() const;

                    /**
                     * 设置STRING(50)，见证子账户的账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAcctNo STRING(50)，见证子账户的账号
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
                     * 获取STRING(150)，会员名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberName STRING(150)，会员名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置STRING(150)，会员名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberName STRING(150)，会员名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberName(const std::string& _memberName);

                    /**
                     * 判断参数 MemberName 是否已赋值
                     * @return MemberName 是否已赋值
                     * 
                     */
                    bool MemberNameHasBeenSet() const;

                    /**
                     * 获取STRING(5)，会员证件类型（详情见“常见问题”）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberGlobalType STRING(5)，会员证件类型（详情见“常见问题”）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberGlobalType() const;

                    /**
                     * 设置STRING(5)，会员证件类型（详情见“常见问题”）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberGlobalType STRING(5)，会员证件类型（详情见“常见问题”）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberGlobalType(const std::string& _memberGlobalType);

                    /**
                     * 判断参数 MemberGlobalType 是否已赋值
                     * @return MemberGlobalType 是否已赋值
                     * 
                     */
                    bool MemberGlobalTypeHasBeenSet() const;

                    /**
                     * 获取STRING(32)，会员证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberGlobalId STRING(32)，会员证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberGlobalId() const;

                    /**
                     * 设置STRING(32)，会员证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberGlobalId STRING(32)，会员证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberGlobalId(const std::string& _memberGlobalId);

                    /**
                     * 判断参数 MemberGlobalId 是否已赋值
                     * @return MemberGlobalId 是否已赋值
                     * 
                     */
                    bool MemberGlobalIdHasBeenSet() const;

                    /**
                     * 获取STRING(50)，会员绑定账户的账号（提现的银行卡）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberAcctNo STRING(50)，会员绑定账户的账号（提现的银行卡）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberAcctNo() const;

                    /**
                     * 设置STRING(50)，会员绑定账户的账号（提现的银行卡）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberAcctNo STRING(50)，会员绑定账户的账号（提现的银行卡）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberAcctNo(const std::string& _memberAcctNo);

                    /**
                     * 判断参数 MemberAcctNo 是否已赋值
                     * @return MemberAcctNo 是否已赋值
                     * 
                     */
                    bool MemberAcctNoHasBeenSet() const;

                    /**
                     * 获取STRING(10)，会员绑定账户的本他行类型（1: 本行; 2: 他行）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BankType STRING(10)，会员绑定账户的本他行类型（1: 本行; 2: 他行）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBankType() const;

                    /**
                     * 设置STRING(10)，会员绑定账户的本他行类型（1: 本行; 2: 他行）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bankType STRING(10)，会员绑定账户的本他行类型（1: 本行; 2: 他行）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBankType(const std::string& _bankType);

                    /**
                     * 判断参数 BankType 是否已赋值
                     * @return BankType 是否已赋值
                     * 
                     */
                    bool BankTypeHasBeenSet() const;

                    /**
                     * 获取STRING(150)，会员绑定账户的开户行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AcctOpenBranchName STRING(150)，会员绑定账户的开户行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAcctOpenBranchName() const;

                    /**
                     * 设置STRING(150)，会员绑定账户的开户行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _acctOpenBranchName STRING(150)，会员绑定账户的开户行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAcctOpenBranchName(const std::string& _acctOpenBranchName);

                    /**
                     * 判断参数 AcctOpenBranchName 是否已赋值
                     * @return AcctOpenBranchName 是否已赋值
                     * 
                     */
                    bool AcctOpenBranchNameHasBeenSet() const;

                    /**
                     * 获取STRING(20)，会员绑定账户的开户行的联行号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CnapsBranchId STRING(20)，会员绑定账户的开户行的联行号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCnapsBranchId() const;

                    /**
                     * 设置STRING(20)，会员绑定账户的开户行的联行号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cnapsBranchId STRING(20)，会员绑定账户的开户行的联行号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCnapsBranchId(const std::string& _cnapsBranchId);

                    /**
                     * 判断参数 CnapsBranchId 是否已赋值
                     * @return CnapsBranchId 是否已赋值
                     * 
                     */
                    bool CnapsBranchIdHasBeenSet() const;

                    /**
                     * 获取STRING(20)，会员绑定账户的开户行的超级网银行号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EiconBankBranchId STRING(20)，会员绑定账户的开户行的超级网银行号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEiconBankBranchId() const;

                    /**
                     * 设置STRING(20)，会员绑定账户的开户行的超级网银行号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eiconBankBranchId STRING(20)，会员绑定账户的开户行的超级网银行号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEiconBankBranchId(const std::string& _eiconBankBranchId);

                    /**
                     * 判断参数 EiconBankBranchId 是否已赋值
                     * @return EiconBankBranchId 是否已赋值
                     * 
                     */
                    bool EiconBankBranchIdHasBeenSet() const;

                    /**
                     * 获取STRING(30)，会员的手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mobile STRING(30)，会员的手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置STRING(30)，会员的手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mobile STRING(30)，会员的手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                private:

                    /**
                     * STRING(50)，资金汇总账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fundSummaryAcctNo;
                    bool m_fundSummaryAcctNoHasBeenSet;

                    /**
                     * STRING(50)，见证子账户的账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAcctNo;
                    bool m_subAcctNoHasBeenSet;

                    /**
                     * STRING(32)，交易网会员代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranNetMemberCode;
                    bool m_tranNetMemberCodeHasBeenSet;

                    /**
                     * STRING(150)，会员名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                    /**
                     * STRING(5)，会员证件类型（详情见“常见问题”）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberGlobalType;
                    bool m_memberGlobalTypeHasBeenSet;

                    /**
                     * STRING(32)，会员证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberGlobalId;
                    bool m_memberGlobalIdHasBeenSet;

                    /**
                     * STRING(50)，会员绑定账户的账号（提现的银行卡）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberAcctNo;
                    bool m_memberAcctNoHasBeenSet;

                    /**
                     * STRING(10)，会员绑定账户的本他行类型（1: 本行; 2: 他行）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bankType;
                    bool m_bankTypeHasBeenSet;

                    /**
                     * STRING(150)，会员绑定账户的开户行名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_acctOpenBranchName;
                    bool m_acctOpenBranchNameHasBeenSet;

                    /**
                     * STRING(20)，会员绑定账户的开户行的联行号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cnapsBranchId;
                    bool m_cnapsBranchIdHasBeenSet;

                    /**
                     * STRING(20)，会员绑定账户的开户行的超级网银行号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eiconBankBranchId;
                    bool m_eiconBankBranchIdHasBeenSet;

                    /**
                     * STRING(30)，会员的手机号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_TRANITEM_H_
