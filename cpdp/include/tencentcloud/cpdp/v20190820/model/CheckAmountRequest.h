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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CHECKAMOUNTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CHECKAMOUNTREQUEST_H_

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
                * CheckAmount请求参数结构体
                */
                class CheckAmountRequest : public AbstractModel
                {
                public:
                    CheckAmountRequest();
                    ~CheckAmountRequest() = default;
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
                     * 获取STRING(32)，交易网会员代码（若需要把一个待绑定账户关联到两个会员名下，此字段可上送两个会员的交易网代码，并且须用“|::|”(右侧)进行分隔）
                     * @return TranNetMemberCode STRING(32)，交易网会员代码（若需要把一个待绑定账户关联到两个会员名下，此字段可上送两个会员的交易网代码，并且须用“|::|”(右侧)进行分隔）
                     * 
                     */
                    std::string GetTranNetMemberCode() const;

                    /**
                     * 设置STRING(32)，交易网会员代码（若需要把一个待绑定账户关联到两个会员名下，此字段可上送两个会员的交易网代码，并且须用“|::|”(右侧)进行分隔）
                     * @param _tranNetMemberCode STRING(32)，交易网会员代码（若需要把一个待绑定账户关联到两个会员名下，此字段可上送两个会员的交易网代码，并且须用“|::|”(右侧)进行分隔）
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
                     * 获取STRING(50)，会员的待绑定账户的账号（即 BindRelateAcctSmallAmount接口中的“会员的待绑定账户的账号”）
                     * @return TakeCashAcctNo STRING(50)，会员的待绑定账户的账号（即 BindRelateAcctSmallAmount接口中的“会员的待绑定账户的账号”）
                     * 
                     */
                    std::string GetTakeCashAcctNo() const;

                    /**
                     * 设置STRING(50)，会员的待绑定账户的账号（即 BindRelateAcctSmallAmount接口中的“会员的待绑定账户的账号”）
                     * @param _takeCashAcctNo STRING(50)，会员的待绑定账户的账号（即 BindRelateAcctSmallAmount接口中的“会员的待绑定账户的账号”）
                     * 
                     */
                    void SetTakeCashAcctNo(const std::string& _takeCashAcctNo);

                    /**
                     * 判断参数 TakeCashAcctNo 是否已赋值
                     * @return TakeCashAcctNo 是否已赋值
                     * 
                     */
                    bool TakeCashAcctNoHasBeenSet() const;

                    /**
                     * 获取STRING(20)，鉴权验证金额（即 BindRelateAcctSmallAmount接口中的“会员的待绑定账户收到的验证金额。原小额转账鉴权方式为来账鉴权的情况下此字段须赋值为0.00）
                     * @return AuthAmt STRING(20)，鉴权验证金额（即 BindRelateAcctSmallAmount接口中的“会员的待绑定账户收到的验证金额。原小额转账鉴权方式为来账鉴权的情况下此字段须赋值为0.00）
                     * 
                     */
                    std::string GetAuthAmt() const;

                    /**
                     * 设置STRING(20)，鉴权验证金额（即 BindRelateAcctSmallAmount接口中的“会员的待绑定账户收到的验证金额。原小额转账鉴权方式为来账鉴权的情况下此字段须赋值为0.00）
                     * @param _authAmt STRING(20)，鉴权验证金额（即 BindRelateAcctSmallAmount接口中的“会员的待绑定账户收到的验证金额。原小额转账鉴权方式为来账鉴权的情况下此字段须赋值为0.00）
                     * 
                     */
                    void SetAuthAmt(const std::string& _authAmt);

                    /**
                     * 判断参数 AuthAmt 是否已赋值
                     * @return AuthAmt 是否已赋值
                     * 
                     */
                    bool AuthAmtHasBeenSet() const;

                    /**
                     * 获取STRING(3)，币种（默认为RMB）
                     * @return Ccy STRING(3)，币种（默认为RMB）
                     * 
                     */
                    std::string GetCcy() const;

                    /**
                     * 设置STRING(3)，币种（默认为RMB）
                     * @param _ccy STRING(3)，币种（默认为RMB）
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
                     * 获取STRING(1027)，原小额转账方式（1: 往账鉴权，此为默认值; 2: 来账鉴权）
                     * @return ReservedMsg STRING(1027)，原小额转账方式（1: 往账鉴权，此为默认值; 2: 来账鉴权）
                     * 
                     */
                    std::string GetReservedMsg() const;

                    /**
                     * 设置STRING(1027)，原小额转账方式（1: 往账鉴权，此为默认值; 2: 来账鉴权）
                     * @param _reservedMsg STRING(1027)，原小额转账方式（1: 往账鉴权，此为默认值; 2: 来账鉴权）
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
                     * STRING(32)，交易网会员代码（若需要把一个待绑定账户关联到两个会员名下，此字段可上送两个会员的交易网代码，并且须用“|::|”(右侧)进行分隔）
                     */
                    std::string m_tranNetMemberCode;
                    bool m_tranNetMemberCodeHasBeenSet;

                    /**
                     * STRING(50)，会员的待绑定账户的账号（即 BindRelateAcctSmallAmount接口中的“会员的待绑定账户的账号”）
                     */
                    std::string m_takeCashAcctNo;
                    bool m_takeCashAcctNoHasBeenSet;

                    /**
                     * STRING(20)，鉴权验证金额（即 BindRelateAcctSmallAmount接口中的“会员的待绑定账户收到的验证金额。原小额转账鉴权方式为来账鉴权的情况下此字段须赋值为0.00）
                     */
                    std::string m_authAmt;
                    bool m_authAmtHasBeenSet;

                    /**
                     * STRING(3)，币种（默认为RMB）
                     */
                    std::string m_ccy;
                    bool m_ccyHasBeenSet;

                    /**
                     * STRING(1027)，原小额转账方式（1: 往账鉴权，此为默认值; 2: 来账鉴权）
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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CHECKAMOUNTREQUEST_H_
