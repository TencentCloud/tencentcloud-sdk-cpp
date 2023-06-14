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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_BINDRELATEACCTUNIONPAYREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_BINDRELATEACCTUNIONPAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * BindRelateAcctUnionPay请求参数结构体
                */
                class BindRelateAcctUnionPayRequest : public AbstractModel
                {
                public:
                    BindRelateAcctUnionPayRequest();
                    ~BindRelateAcctUnionPayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取STRING(32)，交易网会员代码（若需要把一个待绑定账户关联到两个会员名下，此字段可上送两个会员的交易网代码，并且须用“|::|”（右侧）进行分隔）
                     * @return TranNetMemberCode STRING(32)，交易网会员代码（若需要把一个待绑定账户关联到两个会员名下，此字段可上送两个会员的交易网代码，并且须用“|::|”（右侧）进行分隔）
                     * 
                     */
                    std::string GetTranNetMemberCode() const;

                    /**
                     * 设置STRING(32)，交易网会员代码（若需要把一个待绑定账户关联到两个会员名下，此字段可上送两个会员的交易网代码，并且须用“|::|”（右侧）进行分隔）
                     * @param _tranNetMemberCode STRING(32)，交易网会员代码（若需要把一个待绑定账户关联到两个会员名下，此字段可上送两个会员的交易网代码，并且须用“|::|”（右侧）进行分隔）
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
                     * 获取STRING(150)，见证子账户的户名（首次绑定的情况下，此字段即为待绑定的提现账户的户名。非首次绑定的情况下，须注意带绑定的提现账户的户名须与留存在后台系统的会员户名一致）
                     * @return MemberName STRING(150)，见证子账户的户名（首次绑定的情况下，此字段即为待绑定的提现账户的户名。非首次绑定的情况下，须注意带绑定的提现账户的户名须与留存在后台系统的会员户名一致）
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置STRING(150)，见证子账户的户名（首次绑定的情况下，此字段即为待绑定的提现账户的户名。非首次绑定的情况下，须注意带绑定的提现账户的户名须与留存在后台系统的会员户名一致）
                     * @param _memberName STRING(150)，见证子账户的户名（首次绑定的情况下，此字段即为待绑定的提现账户的户名。非首次绑定的情况下，须注意带绑定的提现账户的户名须与留存在后台系统的会员户名一致）
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
                     * @return MemberGlobalType STRING(5)，会员证件类型（详情见“常见问题”）
                     * 
                     */
                    std::string GetMemberGlobalType() const;

                    /**
                     * 设置STRING(5)，会员证件类型（详情见“常见问题”）
                     * @param _memberGlobalType STRING(5)，会员证件类型（详情见“常见问题”）
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
                     * @return MemberGlobalId STRING(32)，会员证件号码
                     * 
                     */
                    std::string GetMemberGlobalId() const;

                    /**
                     * 设置STRING(32)，会员证件号码
                     * @param _memberGlobalId STRING(32)，会员证件号码
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
                     * 获取STRING(50)，会员的待绑定账户的账号（提现的银行卡）
                     * @return MemberAcctNo STRING(50)，会员的待绑定账户的账号（提现的银行卡）
                     * 
                     */
                    std::string GetMemberAcctNo() const;

                    /**
                     * 设置STRING(50)，会员的待绑定账户的账号（提现的银行卡）
                     * @param _memberAcctNo STRING(50)，会员的待绑定账户的账号（提现的银行卡）
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
                     * 获取STRING(10)，会员的待绑定账户的本他行类型（1: 本行; 2: 他行）
                     * @return BankType STRING(10)，会员的待绑定账户的本他行类型（1: 本行; 2: 他行）
                     * 
                     */
                    std::string GetBankType() const;

                    /**
                     * 设置STRING(10)，会员的待绑定账户的本他行类型（1: 本行; 2: 他行）
                     * @param _bankType STRING(10)，会员的待绑定账户的本他行类型（1: 本行; 2: 他行）
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
                     * 获取STRING(150)，会员的待绑定账户的开户行名称（若大小额行号不填则送超级网银号对应的银行名称，若填大小额行号则送大小额行号对应的银行名称）
                     * @return AcctOpenBranchName STRING(150)，会员的待绑定账户的开户行名称（若大小额行号不填则送超级网银号对应的银行名称，若填大小额行号则送大小额行号对应的银行名称）
                     * 
                     */
                    std::string GetAcctOpenBranchName() const;

                    /**
                     * 设置STRING(150)，会员的待绑定账户的开户行名称（若大小额行号不填则送超级网银号对应的银行名称，若填大小额行号则送大小额行号对应的银行名称）
                     * @param _acctOpenBranchName STRING(150)，会员的待绑定账户的开户行名称（若大小额行号不填则送超级网银号对应的银行名称，若填大小额行号则送大小额行号对应的银行名称）
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
                     * 获取STRING(30)，会员的手机号（手机号须由长度为11位的数字构成）
                     * @return Mobile STRING(30)，会员的手机号（手机号须由长度为11位的数字构成）
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置STRING(30)，会员的手机号（手机号须由长度为11位的数字构成）
                     * @param _mobile STRING(30)，会员的手机号（手机号须由长度为11位的数字构成）
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取String(22)，商户号（签约客户号）
                     * @return MrchCode String(22)，商户号（签约客户号）
                     * 
                     */
                    std::string GetMrchCode() const;

                    /**
                     * 设置String(22)，商户号（签约客户号）
                     * @param _mrchCode String(22)，商户号（签约客户号）
                     * 
                     */
                    void SetMrchCode(const std::string& _mrchCode);

                    /**
                     * 判断参数 MrchCode 是否已赋值
                     * @return MrchCode 是否已赋值
                     * 
                     */
                    bool MrchCodeHasBeenSet() const;

                    /**
                     * 获取STRING(20)，会员的待绑定账户的开户行的联行号（本他行类型为他行的情况下，此字段和下一个字段至少一个不为空）
                     * @return CnapsBranchId STRING(20)，会员的待绑定账户的开户行的联行号（本他行类型为他行的情况下，此字段和下一个字段至少一个不为空）
                     * 
                     */
                    std::string GetCnapsBranchId() const;

                    /**
                     * 设置STRING(20)，会员的待绑定账户的开户行的联行号（本他行类型为他行的情况下，此字段和下一个字段至少一个不为空）
                     * @param _cnapsBranchId STRING(20)，会员的待绑定账户的开户行的联行号（本他行类型为他行的情况下，此字段和下一个字段至少一个不为空）
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
                     * 获取STRING(20)，会员的待绑定账户的开户行的超级网银行号（本他行类型为他行的情况下，此字段和上一个字段至少一个不为空）
                     * @return EiconBankBranchId STRING(20)，会员的待绑定账户的开户行的超级网银行号（本他行类型为他行的情况下，此字段和上一个字段至少一个不为空）
                     * 
                     */
                    std::string GetEiconBankBranchId() const;

                    /**
                     * 设置STRING(20)，会员的待绑定账户的开户行的超级网银行号（本他行类型为他行的情况下，此字段和上一个字段至少一个不为空）
                     * @param _eiconBankBranchId STRING(20)，会员的待绑定账户的开户行的超级网银行号（本他行类型为他行的情况下，此字段和上一个字段至少一个不为空）
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
                     * 获取STRING(1027)，保留域
                     * @return ReservedMsg STRING(1027)，保留域
                     * 
                     */
                    std::string GetReservedMsg() const;

                    /**
                     * 设置STRING(1027)，保留域
                     * @param _reservedMsg STRING(1027)，保留域
                     * 
                     */
                    void SetReservedMsg(const std::string& _reservedMsg);

                    /**
                     * 判断参数 ReservedMsg 是否已赋值
                     * @return ReservedMsg 是否已赋值
                     * 
                     */
                    bool ReservedMsgHasBeenSet() const;

                    /**
                     * 获取STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * @return Profile STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * @param _profile STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * STRING(32)，交易网会员代码（若需要把一个待绑定账户关联到两个会员名下，此字段可上送两个会员的交易网代码，并且须用“|::|”（右侧）进行分隔）
                     */
                    std::string m_tranNetMemberCode;
                    bool m_tranNetMemberCodeHasBeenSet;

                    /**
                     * STRING(150)，见证子账户的户名（首次绑定的情况下，此字段即为待绑定的提现账户的户名。非首次绑定的情况下，须注意带绑定的提现账户的户名须与留存在后台系统的会员户名一致）
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                    /**
                     * STRING(5)，会员证件类型（详情见“常见问题”）
                     */
                    std::string m_memberGlobalType;
                    bool m_memberGlobalTypeHasBeenSet;

                    /**
                     * STRING(32)，会员证件号码
                     */
                    std::string m_memberGlobalId;
                    bool m_memberGlobalIdHasBeenSet;

                    /**
                     * STRING(50)，会员的待绑定账户的账号（提现的银行卡）
                     */
                    std::string m_memberAcctNo;
                    bool m_memberAcctNoHasBeenSet;

                    /**
                     * STRING(10)，会员的待绑定账户的本他行类型（1: 本行; 2: 他行）
                     */
                    std::string m_bankType;
                    bool m_bankTypeHasBeenSet;

                    /**
                     * STRING(150)，会员的待绑定账户的开户行名称（若大小额行号不填则送超级网银号对应的银行名称，若填大小额行号则送大小额行号对应的银行名称）
                     */
                    std::string m_acctOpenBranchName;
                    bool m_acctOpenBranchNameHasBeenSet;

                    /**
                     * STRING(30)，会员的手机号（手机号须由长度为11位的数字构成）
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * String(22)，商户号（签约客户号）
                     */
                    std::string m_mrchCode;
                    bool m_mrchCodeHasBeenSet;

                    /**
                     * STRING(20)，会员的待绑定账户的开户行的联行号（本他行类型为他行的情况下，此字段和下一个字段至少一个不为空）
                     */
                    std::string m_cnapsBranchId;
                    bool m_cnapsBranchIdHasBeenSet;

                    /**
                     * STRING(20)，会员的待绑定账户的开户行的超级网银行号（本他行类型为他行的情况下，此字段和上一个字段至少一个不为空）
                     */
                    std::string m_eiconBankBranchId;
                    bool m_eiconBankBranchIdHasBeenSet;

                    /**
                     * STRING(1027)，保留域
                     */
                    std::string m_reservedMsg;
                    bool m_reservedMsgHasBeenSet;

                    /**
                     * STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_BINDRELATEACCTUNIONPAYREQUEST_H_
