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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_WITHDRAWCASHMEMBERSHIPREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_WITHDRAWCASHMEMBERSHIPREQUEST_H_

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
                * WithdrawCashMembership请求参数结构体
                */
                class WithdrawCashMembershipRequest : public AbstractModel
                {
                public:
                    WithdrawCashMembershipRequest();
                    ~WithdrawCashMembershipRequest() = default;
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
                     * 获取STRING(150)，交易网名称（市场名称）
                     * @return TranWebName STRING(150)，交易网名称（市场名称）
                     * 
                     */
                    std::string GetTranWebName() const;

                    /**
                     * 设置STRING(150)，交易网名称（市场名称）
                     * @param _tranWebName STRING(150)，交易网名称（市场名称）
                     * 
                     */
                    void SetTranWebName(const std::string& _tranWebName);

                    /**
                     * 判断参数 TranWebName 是否已赋值
                     * @return TranWebName 是否已赋值
                     * 
                     */
                    bool TranWebNameHasBeenSet() const;

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
                     * 获取STRING(32)，交易网会员代码
                     * @return TranNetMemberCode STRING(32)，交易网会员代码
                     * 
                     */
                    std::string GetTranNetMemberCode() const;

                    /**
                     * 设置STRING(32)，交易网会员代码
                     * @param _tranNetMemberCode STRING(32)，交易网会员代码
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
                     * @return MemberName STRING(150)，会员名称
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置STRING(150)，会员名称
                     * @param _memberName STRING(150)，会员名称
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
                     * 获取STRING(50)，提现账号（银行卡）
                     * @return TakeCashAcctNo STRING(50)，提现账号（银行卡）
                     * 
                     */
                    std::string GetTakeCashAcctNo() const;

                    /**
                     * 设置STRING(50)，提现账号（银行卡）
                     * @param _takeCashAcctNo STRING(50)，提现账号（银行卡）
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
                     * 获取STRING(150)，出金账户名称（银行卡户名）
                     * @return OutAmtAcctName STRING(150)，出金账户名称（银行卡户名）
                     * 
                     */
                    std::string GetOutAmtAcctName() const;

                    /**
                     * 设置STRING(150)，出金账户名称（银行卡户名）
                     * @param _outAmtAcctName STRING(150)，出金账户名称（银行卡户名）
                     * 
                     */
                    void SetOutAmtAcctName(const std::string& _outAmtAcctName);

                    /**
                     * 判断参数 OutAmtAcctName 是否已赋值
                     * @return OutAmtAcctName 是否已赋值
                     * 
                     */
                    bool OutAmtAcctNameHasBeenSet() const;

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
                     * 获取STRING(20)，可提现金额
                     * @return CashAmt STRING(20)，可提现金额
                     * 
                     */
                    std::string GetCashAmt() const;

                    /**
                     * 设置STRING(20)，可提现金额
                     * @param _cashAmt STRING(20)，可提现金额
                     * 
                     */
                    void SetCashAmt(const std::string& _cashAmt);

                    /**
                     * 判断参数 CashAmt 是否已赋值
                     * @return CashAmt 是否已赋值
                     * 
                     */
                    bool CashAmtHasBeenSet() const;

                    /**
                     * 获取STRING(300)，备注（建议可送订单号，可在对账文件的备注字段获取到）
                     * @return Remark STRING(300)，备注（建议可送订单号，可在对账文件的备注字段获取到）
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置STRING(300)，备注（建议可送订单号，可在对账文件的备注字段获取到）
                     * @param _remark STRING(300)，备注（建议可送订单号，可在对账文件的备注字段获取到）
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
                     * 获取STRING(300)，网银签名
                     * @return WebSign STRING(300)，网银签名
                     * 
                     */
                    std::string GetWebSign() const;

                    /**
                     * 设置STRING(300)，网银签名
                     * @param _webSign STRING(300)，网银签名
                     * 
                     */
                    void SetWebSign(const std::string& _webSign);

                    /**
                     * 判断参数 WebSign 是否已赋值
                     * @return WebSign 是否已赋值
                     * 
                     */
                    bool WebSignHasBeenSet() const;

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
                     * STRING(150)，交易网名称（市场名称）
                     */
                    std::string m_tranWebName;
                    bool m_tranWebNameHasBeenSet;

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
                     * STRING(32)，交易网会员代码
                     */
                    std::string m_tranNetMemberCode;
                    bool m_tranNetMemberCodeHasBeenSet;

                    /**
                     * STRING(150)，会员名称
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                    /**
                     * STRING(50)，提现账号（银行卡）
                     */
                    std::string m_takeCashAcctNo;
                    bool m_takeCashAcctNoHasBeenSet;

                    /**
                     * STRING(150)，出金账户名称（银行卡户名）
                     */
                    std::string m_outAmtAcctName;
                    bool m_outAmtAcctNameHasBeenSet;

                    /**
                     * STRING(3)，币种（默认为RMB）
                     */
                    std::string m_ccy;
                    bool m_ccyHasBeenSet;

                    /**
                     * STRING(20)，可提现金额
                     */
                    std::string m_cashAmt;
                    bool m_cashAmtHasBeenSet;

                    /**
                     * STRING(300)，备注（建议可送订单号，可在对账文件的备注字段获取到）
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * STRING(1027)，保留域
                     */
                    std::string m_reservedMsg;
                    bool m_reservedMsgHasBeenSet;

                    /**
                     * STRING(300)，网银签名
                     */
                    std::string m_webSign;
                    bool m_webSignHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_WITHDRAWCASHMEMBERSHIPREQUEST_H_
