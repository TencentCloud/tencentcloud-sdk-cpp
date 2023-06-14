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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMEMBERTRANSACTIONREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMEMBERTRANSACTIONREQUEST_H_

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
                * QueryMemberTransaction请求参数结构体
                */
                class QueryMemberTransactionRequest : public AbstractModel
                {
                public:
                    QueryMemberTransactionRequest();
                    ~QueryMemberTransactionRequest() = default;
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
                     * 获取STRING(2)，功能标志（1: 下单预支付; 2: 确认并付款; 3: 退款; 6: 直接支付T+1; 9: 直接支付T+0）
                     * @return FunctionFlag STRING(2)，功能标志（1: 下单预支付; 2: 确认并付款; 3: 退款; 6: 直接支付T+1; 9: 直接支付T+0）
                     * 
                     */
                    std::string GetFunctionFlag() const;

                    /**
                     * 设置STRING(2)，功能标志（1: 下单预支付; 2: 确认并付款; 3: 退款; 6: 直接支付T+1; 9: 直接支付T+0）
                     * @param _functionFlag STRING(2)，功能标志（1: 下单预支付; 2: 确认并付款; 3: 退款; 6: 直接支付T+1; 9: 直接支付T+0）
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
                     * 获取STRING(50)，转出方的见证子账户的账号（付款方）
                     * @return OutSubAcctNo STRING(50)，转出方的见证子账户的账号（付款方）
                     * 
                     */
                    std::string GetOutSubAcctNo() const;

                    /**
                     * 设置STRING(50)，转出方的见证子账户的账号（付款方）
                     * @param _outSubAcctNo STRING(50)，转出方的见证子账户的账号（付款方）
                     * 
                     */
                    void SetOutSubAcctNo(const std::string& _outSubAcctNo);

                    /**
                     * 判断参数 OutSubAcctNo 是否已赋值
                     * @return OutSubAcctNo 是否已赋值
                     * 
                     */
                    bool OutSubAcctNoHasBeenSet() const;

                    /**
                     * 获取STRING(32)，转出方的交易网会员代码
                     * @return OutMemberCode STRING(32)，转出方的交易网会员代码
                     * 
                     */
                    std::string GetOutMemberCode() const;

                    /**
                     * 设置STRING(32)，转出方的交易网会员代码
                     * @param _outMemberCode STRING(32)，转出方的交易网会员代码
                     * 
                     */
                    void SetOutMemberCode(const std::string& _outMemberCode);

                    /**
                     * 判断参数 OutMemberCode 是否已赋值
                     * @return OutMemberCode 是否已赋值
                     * 
                     */
                    bool OutMemberCodeHasBeenSet() const;

                    /**
                     * 获取STRING(150)，转出方的见证子账户的户名（户名是绑卡时上送的账户名称，如果未绑卡，就送OpenCustAcctId接口上送的用户昵称UserNickname）
                     * @return OutSubAcctName STRING(150)，转出方的见证子账户的户名（户名是绑卡时上送的账户名称，如果未绑卡，就送OpenCustAcctId接口上送的用户昵称UserNickname）
                     * 
                     */
                    std::string GetOutSubAcctName() const;

                    /**
                     * 设置STRING(150)，转出方的见证子账户的户名（户名是绑卡时上送的账户名称，如果未绑卡，就送OpenCustAcctId接口上送的用户昵称UserNickname）
                     * @param _outSubAcctName STRING(150)，转出方的见证子账户的户名（户名是绑卡时上送的账户名称，如果未绑卡，就送OpenCustAcctId接口上送的用户昵称UserNickname）
                     * 
                     */
                    void SetOutSubAcctName(const std::string& _outSubAcctName);

                    /**
                     * 判断参数 OutSubAcctName 是否已赋值
                     * @return OutSubAcctName 是否已赋值
                     * 
                     */
                    bool OutSubAcctNameHasBeenSet() const;

                    /**
                     * 获取STRING(50)，转入方的见证子账户的账号（收款方）
                     * @return InSubAcctNo STRING(50)，转入方的见证子账户的账号（收款方）
                     * 
                     */
                    std::string GetInSubAcctNo() const;

                    /**
                     * 设置STRING(50)，转入方的见证子账户的账号（收款方）
                     * @param _inSubAcctNo STRING(50)，转入方的见证子账户的账号（收款方）
                     * 
                     */
                    void SetInSubAcctNo(const std::string& _inSubAcctNo);

                    /**
                     * 判断参数 InSubAcctNo 是否已赋值
                     * @return InSubAcctNo 是否已赋值
                     * 
                     */
                    bool InSubAcctNoHasBeenSet() const;

                    /**
                     * 获取STRING(32)，转入方的交易网会员代码
                     * @return InMemberCode STRING(32)，转入方的交易网会员代码
                     * 
                     */
                    std::string GetInMemberCode() const;

                    /**
                     * 设置STRING(32)，转入方的交易网会员代码
                     * @param _inMemberCode STRING(32)，转入方的交易网会员代码
                     * 
                     */
                    void SetInMemberCode(const std::string& _inMemberCode);

                    /**
                     * 判断参数 InMemberCode 是否已赋值
                     * @return InMemberCode 是否已赋值
                     * 
                     */
                    bool InMemberCodeHasBeenSet() const;

                    /**
                     * 获取STRING(150)，转入方的见证子账户的户名（户名是绑卡时上送的账户名称，如果未绑卡，就送OpenCustAcctId接口上送的用户昵称UserNickname）
                     * @return InSubAcctName STRING(150)，转入方的见证子账户的户名（户名是绑卡时上送的账户名称，如果未绑卡，就送OpenCustAcctId接口上送的用户昵称UserNickname）
                     * 
                     */
                    std::string GetInSubAcctName() const;

                    /**
                     * 设置STRING(150)，转入方的见证子账户的户名（户名是绑卡时上送的账户名称，如果未绑卡，就送OpenCustAcctId接口上送的用户昵称UserNickname）
                     * @param _inSubAcctName STRING(150)，转入方的见证子账户的户名（户名是绑卡时上送的账户名称，如果未绑卡，就送OpenCustAcctId接口上送的用户昵称UserNickname）
                     * 
                     */
                    void SetInSubAcctName(const std::string& _inSubAcctName);

                    /**
                     * 判断参数 InSubAcctName 是否已赋值
                     * @return InSubAcctName 是否已赋值
                     * 
                     */
                    bool InSubAcctNameHasBeenSet() const;

                    /**
                     * 获取STRING(20)，交易金额
                     * @return TranAmt STRING(20)，交易金额
                     * 
                     */
                    std::string GetTranAmt() const;

                    /**
                     * 设置STRING(20)，交易金额
                     * @param _tranAmt STRING(20)，交易金额
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
                     * 获取STRING(20)，交易费用（平台收取交易费用）
                     * @return TranFee STRING(20)，交易费用（平台收取交易费用）
                     * 
                     */
                    std::string GetTranFee() const;

                    /**
                     * 设置STRING(20)，交易费用（平台收取交易费用）
                     * @param _tranFee STRING(20)，交易费用（平台收取交易费用）
                     * 
                     */
                    void SetTranFee(const std::string& _tranFee);

                    /**
                     * 判断参数 TranFee 是否已赋值
                     * @return TranFee 是否已赋值
                     * 
                     */
                    bool TranFeeHasBeenSet() const;

                    /**
                     * 获取STRING(20)，交易类型（01: 普通交易）
                     * @return TranType STRING(20)，交易类型（01: 普通交易）
                     * 
                     */
                    std::string GetTranType() const;

                    /**
                     * 设置STRING(20)，交易类型（01: 普通交易）
                     * @param _tranType STRING(20)，交易类型（01: 普通交易）
                     * 
                     */
                    void SetTranType(const std::string& _tranType);

                    /**
                     * 判断参数 TranType 是否已赋值
                     * @return TranType 是否已赋值
                     * 
                     */
                    bool TranTypeHasBeenSet() const;

                    /**
                     * 获取STRING(3)，币种（默认: RMB）
                     * @return Ccy STRING(3)，币种（默认: RMB）
                     * 
                     */
                    std::string GetCcy() const;

                    /**
                     * 设置STRING(3)，币种（默认: RMB）
                     * @param _ccy STRING(3)，币种（默认: RMB）
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
                     * 获取STRING(50)，订单号（功能标志为1,2,3时必输）
                     * @return OrderNo STRING(50)，订单号（功能标志为1,2,3时必输）
                     * 
                     */
                    std::string GetOrderNo() const;

                    /**
                     * 设置STRING(50)，订单号（功能标志为1,2,3时必输）
                     * @param _orderNo STRING(50)，订单号（功能标志为1,2,3时必输）
                     * 
                     */
                    void SetOrderNo(const std::string& _orderNo);

                    /**
                     * 判断参数 OrderNo 是否已赋值
                     * @return OrderNo 是否已赋值
                     * 
                     */
                    bool OrderNoHasBeenSet() const;

                    /**
                     * 获取STRING(500)，订单内容
                     * @return OrderContent STRING(500)，订单内容
                     * 
                     */
                    std::string GetOrderContent() const;

                    /**
                     * 设置STRING(500)，订单内容
                     * @param _orderContent STRING(500)，订单内容
                     * 
                     */
                    void SetOrderContent(const std::string& _orderContent);

                    /**
                     * 判断参数 OrderContent 是否已赋值
                     * @return OrderContent 是否已赋值
                     * 
                     */
                    bool OrderContentHasBeenSet() const;

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
                     * 获取STRING(1027)，保留域（若需短信验证码则此项必输短信指令号）
                     * @return ReservedMsg STRING(1027)，保留域（若需短信验证码则此项必输短信指令号）
                     * 
                     */
                    std::string GetReservedMsg() const;

                    /**
                     * 设置STRING(1027)，保留域（若需短信验证码则此项必输短信指令号）
                     * @param _reservedMsg STRING(1027)，保留域（若需短信验证码则此项必输短信指令号）
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
                     * 获取STRING(300)，网银签名（若需短信验证码则此项必输）
                     * @return WebSign STRING(300)，网银签名（若需短信验证码则此项必输）
                     * 
                     */
                    std::string GetWebSign() const;

                    /**
                     * 设置STRING(300)，网银签名（若需短信验证码则此项必输）
                     * @param _webSign STRING(300)，网银签名（若需短信验证码则此项必输）
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
                     * STRING(2)，功能标志（1: 下单预支付; 2: 确认并付款; 3: 退款; 6: 直接支付T+1; 9: 直接支付T+0）
                     */
                    std::string m_functionFlag;
                    bool m_functionFlagHasBeenSet;

                    /**
                     * STRING(50)，转出方的见证子账户的账号（付款方）
                     */
                    std::string m_outSubAcctNo;
                    bool m_outSubAcctNoHasBeenSet;

                    /**
                     * STRING(32)，转出方的交易网会员代码
                     */
                    std::string m_outMemberCode;
                    bool m_outMemberCodeHasBeenSet;

                    /**
                     * STRING(150)，转出方的见证子账户的户名（户名是绑卡时上送的账户名称，如果未绑卡，就送OpenCustAcctId接口上送的用户昵称UserNickname）
                     */
                    std::string m_outSubAcctName;
                    bool m_outSubAcctNameHasBeenSet;

                    /**
                     * STRING(50)，转入方的见证子账户的账号（收款方）
                     */
                    std::string m_inSubAcctNo;
                    bool m_inSubAcctNoHasBeenSet;

                    /**
                     * STRING(32)，转入方的交易网会员代码
                     */
                    std::string m_inMemberCode;
                    bool m_inMemberCodeHasBeenSet;

                    /**
                     * STRING(150)，转入方的见证子账户的户名（户名是绑卡时上送的账户名称，如果未绑卡，就送OpenCustAcctId接口上送的用户昵称UserNickname）
                     */
                    std::string m_inSubAcctName;
                    bool m_inSubAcctNameHasBeenSet;

                    /**
                     * STRING(20)，交易金额
                     */
                    std::string m_tranAmt;
                    bool m_tranAmtHasBeenSet;

                    /**
                     * STRING(20)，交易费用（平台收取交易费用）
                     */
                    std::string m_tranFee;
                    bool m_tranFeeHasBeenSet;

                    /**
                     * STRING(20)，交易类型（01: 普通交易）
                     */
                    std::string m_tranType;
                    bool m_tranTypeHasBeenSet;

                    /**
                     * STRING(3)，币种（默认: RMB）
                     */
                    std::string m_ccy;
                    bool m_ccyHasBeenSet;

                    /**
                     * STRING(50)，订单号（功能标志为1,2,3时必输）
                     */
                    std::string m_orderNo;
                    bool m_orderNoHasBeenSet;

                    /**
                     * STRING(500)，订单内容
                     */
                    std::string m_orderContent;
                    bool m_orderContentHasBeenSet;

                    /**
                     * STRING(300)，备注（建议可送订单号，可在对账文件的备注字段获取到）
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * STRING(1027)，保留域（若需短信验证码则此项必输短信指令号）
                     */
                    std::string m_reservedMsg;
                    bool m_reservedMsgHasBeenSet;

                    /**
                     * STRING(300)，网银签名（若需短信验证码则此项必输）
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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMEMBERTRANSACTIONREQUEST_H_
