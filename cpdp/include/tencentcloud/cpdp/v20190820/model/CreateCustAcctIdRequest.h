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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATECUSTACCTIDREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATECUSTACCTIDREQUEST_H_

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
                * CreateCustAcctId请求参数结构体
                */
                class CreateCustAcctIdRequest : public AbstractModel
                {
                public:
                    CreateCustAcctIdRequest();
                    ~CreateCustAcctIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取STRING(2)，功能标志（1: 开户; 3: 销户）
                     * @return FunctionFlag STRING(2)，功能标志（1: 开户; 3: 销户）
                     * 
                     */
                    std::string GetFunctionFlag() const;

                    /**
                     * 设置STRING(2)，功能标志（1: 开户; 3: 销户）
                     * @param _functionFlag STRING(2)，功能标志（1: 开户; 3: 销户）
                     * 
                     */
                    void SetFunctionFlag(const std::string& _functionFlag);

                    /**
                     * 判断参数 FunctionFlag 是否已赋值
                     * @return FunctionFlag 是否已赋值
                     * 
                     */
                    bool FunctionFlagHasBeenSet() const;

                    /**
                     * 获取STRING(50)，资金汇总账号（即收单资金归集入账的账号）
                     * @return FundSummaryAcctNo STRING(50)，资金汇总账号（即收单资金归集入账的账号）
                     * 
                     */
                    std::string GetFundSummaryAcctNo() const;

                    /**
                     * 设置STRING(50)，资金汇总账号（即收单资金归集入账的账号）
                     * @param _fundSummaryAcctNo STRING(50)，资金汇总账号（即收单资金归集入账的账号）
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
                     * 获取STRING(32)，交易网会员代码（平台端的用户ID，需要保证唯一性，可数字字母混合，如HY_120）
                     * @return TranNetMemberCode STRING(32)，交易网会员代码（平台端的用户ID，需要保证唯一性，可数字字母混合，如HY_120）
                     * 
                     */
                    std::string GetTranNetMemberCode() const;

                    /**
                     * 设置STRING(32)，交易网会员代码（平台端的用户ID，需要保证唯一性，可数字字母混合，如HY_120）
                     * @param _tranNetMemberCode STRING(32)，交易网会员代码（平台端的用户ID，需要保证唯一性，可数字字母混合，如HY_120）
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
                     * 获取STRING(10)，会员属性（00-普通子账户(默认); SH-商户子账户）
                     * @return MemberProperty STRING(10)，会员属性（00-普通子账户(默认); SH-商户子账户）
                     * 
                     */
                    std::string GetMemberProperty() const;

                    /**
                     * 设置STRING(10)，会员属性（00-普通子账户(默认); SH-商户子账户）
                     * @param _memberProperty STRING(10)，会员属性（00-普通子账户(默认); SH-商户子账户）
                     * 
                     */
                    void SetMemberProperty(const std::string& _memberProperty);

                    /**
                     * 判断参数 MemberProperty 是否已赋值
                     * @return MemberProperty 是否已赋值
                     * 
                     */
                    bool MemberPropertyHasBeenSet() const;

                    /**
                     * 获取STRING(30)，手机号码
                     * @return Mobile STRING(30)，手机号码
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置STRING(30)，手机号码
                     * @param _mobile STRING(30)，手机号码
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
                     * 获取String(2)，是否为自营业务（0位非自营，1为自营）
                     * @return SelfBusiness String(2)，是否为自营业务（0位非自营，1为自营）
                     * 
                     */
                    bool GetSelfBusiness() const;

                    /**
                     * 设置String(2)，是否为自营业务（0位非自营，1为自营）
                     * @param _selfBusiness String(2)，是否为自营业务（0位非自营，1为自营）
                     * 
                     */
                    void SetSelfBusiness(const bool& _selfBusiness);

                    /**
                     * 判断参数 SelfBusiness 是否已赋值
                     * @return SelfBusiness 是否已赋值
                     * 
                     */
                    bool SelfBusinessHasBeenSet() const;

                    /**
                     * 获取String(64)，联系人
                     * @return ContactName String(64)，联系人
                     * 
                     */
                    std::string GetContactName() const;

                    /**
                     * 设置String(64)，联系人
                     * @param _contactName String(64)，联系人
                     * 
                     */
                    void SetContactName(const std::string& _contactName);

                    /**
                     * 判断参数 ContactName 是否已赋值
                     * @return ContactName 是否已赋值
                     * 
                     */
                    bool ContactNameHasBeenSet() const;

                    /**
                     * 获取String(64)，子账户名称
                     * @return SubAcctName String(64)，子账户名称
                     * 
                     */
                    std::string GetSubAcctName() const;

                    /**
                     * 设置String(64)，子账户名称
                     * @param _subAcctName String(64)，子账户名称
                     * 
                     */
                    void SetSubAcctName(const std::string& _subAcctName);

                    /**
                     * 判断参数 SubAcctName 是否已赋值
                     * @return SubAcctName 是否已赋值
                     * 
                     */
                    bool SubAcctNameHasBeenSet() const;

                    /**
                     * 获取String(64)，子账户简称
                     * @return SubAcctShortName String(64)，子账户简称
                     * 
                     */
                    std::string GetSubAcctShortName() const;

                    /**
                     * 设置String(64)，子账户简称
                     * @param _subAcctShortName String(64)，子账户简称
                     * 
                     */
                    void SetSubAcctShortName(const std::string& _subAcctShortName);

                    /**
                     * 判断参数 SubAcctShortName 是否已赋值
                     * @return SubAcctShortName 是否已赋值
                     * 
                     */
                    bool SubAcctShortNameHasBeenSet() const;

                    /**
                     * 获取String(4)，子账户类型（0: 个人子账户; 1: 企业子账户）
                     * @return SubAcctType String(4)，子账户类型（0: 个人子账户; 1: 企业子账户）
                     * 
                     */
                    int64_t GetSubAcctType() const;

                    /**
                     * 设置String(4)，子账户类型（0: 个人子账户; 1: 企业子账户）
                     * @param _subAcctType String(4)，子账户类型（0: 个人子账户; 1: 企业子账户）
                     * 
                     */
                    void SetSubAcctType(const int64_t& _subAcctType);

                    /**
                     * 判断参数 SubAcctType 是否已赋值
                     * @return SubAcctType 是否已赋值
                     * 
                     */
                    bool SubAcctTypeHasBeenSet() const;

                    /**
                     * 获取STRING(150)，用户昵称
                     * @return UserNickname STRING(150)，用户昵称
                     * 
                     */
                    std::string GetUserNickname() const;

                    /**
                     * 设置STRING(150)，用户昵称
                     * @param _userNickname STRING(150)，用户昵称
                     * 
                     */
                    void SetUserNickname(const std::string& _userNickname);

                    /**
                     * 判断参数 UserNickname 是否已赋值
                     * @return UserNickname 是否已赋值
                     * 
                     */
                    bool UserNicknameHasBeenSet() const;

                    /**
                     * 获取STRING(150)，邮箱
                     * @return Email STRING(150)，邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置STRING(150)，邮箱
                     * @param _email STRING(150)，邮箱
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

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
                     * STRING(2)，功能标志（1: 开户; 3: 销户）
                     */
                    std::string m_functionFlag;
                    bool m_functionFlagHasBeenSet;

                    /**
                     * STRING(50)，资金汇总账号（即收单资金归集入账的账号）
                     */
                    std::string m_fundSummaryAcctNo;
                    bool m_fundSummaryAcctNoHasBeenSet;

                    /**
                     * STRING(32)，交易网会员代码（平台端的用户ID，需要保证唯一性，可数字字母混合，如HY_120）
                     */
                    std::string m_tranNetMemberCode;
                    bool m_tranNetMemberCodeHasBeenSet;

                    /**
                     * STRING(10)，会员属性（00-普通子账户(默认); SH-商户子账户）
                     */
                    std::string m_memberProperty;
                    bool m_memberPropertyHasBeenSet;

                    /**
                     * STRING(30)，手机号码
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * String(22)，商户号（签约客户号）
                     */
                    std::string m_mrchCode;
                    bool m_mrchCodeHasBeenSet;

                    /**
                     * String(2)，是否为自营业务（0位非自营，1为自营）
                     */
                    bool m_selfBusiness;
                    bool m_selfBusinessHasBeenSet;

                    /**
                     * String(64)，联系人
                     */
                    std::string m_contactName;
                    bool m_contactNameHasBeenSet;

                    /**
                     * String(64)，子账户名称
                     */
                    std::string m_subAcctName;
                    bool m_subAcctNameHasBeenSet;

                    /**
                     * String(64)，子账户简称
                     */
                    std::string m_subAcctShortName;
                    bool m_subAcctShortNameHasBeenSet;

                    /**
                     * String(4)，子账户类型（0: 个人子账户; 1: 企业子账户）
                     */
                    int64_t m_subAcctType;
                    bool m_subAcctTypeHasBeenSet;

                    /**
                     * STRING(150)，用户昵称
                     */
                    std::string m_userNickname;
                    bool m_userNicknameHasBeenSet;

                    /**
                     * STRING(150)，邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATECUSTACCTIDREQUEST_H_
