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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_MODIFYMNTMBRBINDRELATEACCTBANKCODEREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_MODIFYMNTMBRBINDRELATEACCTBANKCODEREQUEST_H_

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
                * ModifyMntMbrBindRelateAcctBankCode请求参数结构体
                */
                class ModifyMntMbrBindRelateAcctBankCodeRequest : public AbstractModel
                {
                public:
                    ModifyMntMbrBindRelateAcctBankCodeRequest();
                    ~ModifyMntMbrBindRelateAcctBankCodeRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取STRING(50)，见证子账户的账号
                     * @return SubAcctNo STRING(50)，见证子账户的账号
                     * 
                     */
                    std::string GetSubAcctNo() const;

                    /**
                     * 设置STRING(50)，见证子账户的账号
                     * @param _subAcctNo STRING(50)，见证子账户的账号
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
                     * 获取STRING(50)，会员绑定账号
                     * @return MemberBindAcctNo STRING(50)，会员绑定账号
                     * 
                     */
                    std::string GetMemberBindAcctNo() const;

                    /**
                     * 设置STRING(50)，会员绑定账号
                     * @param _memberBindAcctNo STRING(50)，会员绑定账号
                     * 
                     */
                    void SetMemberBindAcctNo(const std::string& _memberBindAcctNo);

                    /**
                     * 判断参数 MemberBindAcctNo 是否已赋值
                     * @return MemberBindAcctNo 是否已赋值
                     * 
                     */
                    bool MemberBindAcctNoHasBeenSet() const;

                    /**
                     * 获取STRING(150)，开户行名称（若大小额行号不填则送超级网银号对应的银行名称，若填大小额行号则送大小额行号对应的银行名称）
                     * @return AcctOpenBranchName STRING(150)，开户行名称（若大小额行号不填则送超级网银号对应的银行名称，若填大小额行号则送大小额行号对应的银行名称）
                     * 
                     */
                    std::string GetAcctOpenBranchName() const;

                    /**
                     * 设置STRING(150)，开户行名称（若大小额行号不填则送超级网银号对应的银行名称，若填大小额行号则送大小额行号对应的银行名称）
                     * @param _acctOpenBranchName STRING(150)，开户行名称（若大小额行号不填则送超级网银号对应的银行名称，若填大小额行号则送大小额行号对应的银行名称）
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
                     * 获取STRING(20)，大小额行号（CnapsBranchId和EiconBankBranchId两者二选一必填）
                     * @return CnapsBranchId STRING(20)，大小额行号（CnapsBranchId和EiconBankBranchId两者二选一必填）
                     * 
                     */
                    std::string GetCnapsBranchId() const;

                    /**
                     * 设置STRING(20)，大小额行号（CnapsBranchId和EiconBankBranchId两者二选一必填）
                     * @param _cnapsBranchId STRING(20)，大小额行号（CnapsBranchId和EiconBankBranchId两者二选一必填）
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
                     * 获取STRING(20)，超级网银行号
                     * @return EiconBankBranchId STRING(20)，超级网银行号
                     * 
                     */
                    std::string GetEiconBankBranchId() const;

                    /**
                     * 设置STRING(20)，超级网银行号
                     * @param _eiconBankBranchId STRING(20)，超级网银行号
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
                     * String(22)，商户号（签约客户号）
                     */
                    std::string m_mrchCode;
                    bool m_mrchCodeHasBeenSet;

                    /**
                     * STRING(50)，见证子账户的账号
                     */
                    std::string m_subAcctNo;
                    bool m_subAcctNoHasBeenSet;

                    /**
                     * STRING(50)，会员绑定账号
                     */
                    std::string m_memberBindAcctNo;
                    bool m_memberBindAcctNoHasBeenSet;

                    /**
                     * STRING(150)，开户行名称（若大小额行号不填则送超级网银号对应的银行名称，若填大小额行号则送大小额行号对应的银行名称）
                     */
                    std::string m_acctOpenBranchName;
                    bool m_acctOpenBranchNameHasBeenSet;

                    /**
                     * STRING(20)，大小额行号（CnapsBranchId和EiconBankBranchId两者二选一必填）
                     */
                    std::string m_cnapsBranchId;
                    bool m_cnapsBranchIdHasBeenSet;

                    /**
                     * STRING(20)，超级网银行号
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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_MODIFYMNTMBRBINDRELATEACCTBANKCODEREQUEST_H_
