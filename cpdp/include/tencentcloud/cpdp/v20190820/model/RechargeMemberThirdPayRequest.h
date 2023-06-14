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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_RECHARGEMEMBERTHIRDPAYREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_RECHARGEMEMBERTHIRDPAYREQUEST_H_

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
                * RechargeMemberThirdPay请求参数结构体
                */
                class RechargeMemberThirdPayRequest : public AbstractModel
                {
                public:
                    RechargeMemberThirdPayRequest();
                    ~RechargeMemberThirdPayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取STRING(32)，交易网会代码
                     * @return TranNetMemberCode STRING(32)，交易网会代码
                     * 
                     */
                    std::string GetTranNetMemberCode() const;

                    /**
                     * 设置STRING(32)，交易网会代码
                     * @param _tranNetMemberCode STRING(32)，交易网会代码
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
                     * 获取STRING(20)，会员充值金额
                     * @return MemberFillAmt STRING(20)，会员充值金额
                     * 
                     */
                    std::string GetMemberFillAmt() const;

                    /**
                     * 设置STRING(20)，会员充值金额
                     * @param _memberFillAmt STRING(20)，会员充值金额
                     * 
                     */
                    void SetMemberFillAmt(const std::string& _memberFillAmt);

                    /**
                     * 判断参数 MemberFillAmt 是否已赋值
                     * @return MemberFillAmt 是否已赋值
                     * 
                     */
                    bool MemberFillAmtHasBeenSet() const;

                    /**
                     * 获取STRING(20)，手续费金额
                     * @return Commission STRING(20)，手续费金额
                     * 
                     */
                    std::string GetCommission() const;

                    /**
                     * 设置STRING(20)，手续费金额
                     * @param _commission STRING(20)，手续费金额
                     * 
                     */
                    void SetCommission(const std::string& _commission);

                    /**
                     * 判断参数 Commission 是否已赋值
                     * @return Commission 是否已赋值
                     * 
                     */
                    bool CommissionHasBeenSet() const;

                    /**
                     * 获取STRING(3)，币种。如RMB
                     * @return Ccy STRING(3)，币种。如RMB
                     * 
                     */
                    std::string GetCcy() const;

                    /**
                     * 设置STRING(3)，币种。如RMB
                     * @param _ccy STRING(3)，币种。如RMB
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
                     * 获取STRING(20)，支付渠道类型。
0001-微信
0002-支付宝
0003-京东支付
                     * @return PayChannelType STRING(20)，支付渠道类型。
0001-微信
0002-支付宝
0003-京东支付
                     * 
                     */
                    std::string GetPayChannelType() const;

                    /**
                     * 设置STRING(20)，支付渠道类型。
0001-微信
0002-支付宝
0003-京东支付
                     * @param _payChannelType STRING(20)，支付渠道类型。
0001-微信
0002-支付宝
0003-京东支付
                     * 
                     */
                    void SetPayChannelType(const std::string& _payChannelType);

                    /**
                     * 判断参数 PayChannelType 是否已赋值
                     * @return PayChannelType 是否已赋值
                     * 
                     */
                    bool PayChannelTypeHasBeenSet() const;

                    /**
                     * 获取STRING(50)，支付渠道所分配的商户号
                     * @return PayChannelAssignMerNo STRING(50)，支付渠道所分配的商户号
                     * 
                     */
                    std::string GetPayChannelAssignMerNo() const;

                    /**
                     * 设置STRING(50)，支付渠道所分配的商户号
                     * @param _payChannelAssignMerNo STRING(50)，支付渠道所分配的商户号
                     * 
                     */
                    void SetPayChannelAssignMerNo(const std::string& _payChannelAssignMerNo);

                    /**
                     * 判断参数 PayChannelAssignMerNo 是否已赋值
                     * @return PayChannelAssignMerNo 是否已赋值
                     * 
                     */
                    bool PayChannelAssignMerNoHasBeenSet() const;

                    /**
                     * 获取STRING(52)，支付渠道交易流水号
                     * @return PayChannelTranSeqNo STRING(52)，支付渠道交易流水号
                     * 
                     */
                    std::string GetPayChannelTranSeqNo() const;

                    /**
                     * 设置STRING(52)，支付渠道交易流水号
                     * @param _payChannelTranSeqNo STRING(52)，支付渠道交易流水号
                     * 
                     */
                    void SetPayChannelTranSeqNo(const std::string& _payChannelTranSeqNo);

                    /**
                     * 判断参数 PayChannelTranSeqNo 是否已赋值
                     * @return PayChannelTranSeqNo 是否已赋值
                     * 
                     */
                    bool PayChannelTranSeqNoHasBeenSet() const;

                    /**
                     * 获取STRING(52)，电商见证宝订单号
                     * @return EjzbOrderNo STRING(52)，电商见证宝订单号
                     * 
                     */
                    std::string GetEjzbOrderNo() const;

                    /**
                     * 设置STRING(52)，电商见证宝订单号
                     * @param _ejzbOrderNo STRING(52)，电商见证宝订单号
                     * 
                     */
                    void SetEjzbOrderNo(const std::string& _ejzbOrderNo);

                    /**
                     * 判断参数 EjzbOrderNo 是否已赋值
                     * @return EjzbOrderNo 是否已赋值
                     * 
                     */
                    bool EjzbOrderNoHasBeenSet() const;

                    /**
                     * 获取String(22)，商户号
                     * @return MrchCode String(22)，商户号
                     * 
                     */
                    std::string GetMrchCode() const;

                    /**
                     * 设置String(22)，商户号
                     * @param _mrchCode String(22)，商户号
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
                     * 获取STRING(500)，电商见证宝订单内容
                     * @return EjzbOrderContent STRING(500)，电商见证宝订单内容
                     * 
                     */
                    std::string GetEjzbOrderContent() const;

                    /**
                     * 设置STRING(500)，电商见证宝订单内容
                     * @param _ejzbOrderContent STRING(500)，电商见证宝订单内容
                     * 
                     */
                    void SetEjzbOrderContent(const std::string& _ejzbOrderContent);

                    /**
                     * 判断参数 EjzbOrderContent 是否已赋值
                     * @return EjzbOrderContent 是否已赋值
                     * 
                     */
                    bool EjzbOrderContentHasBeenSet() const;

                    /**
                     * 获取STRING(300)，备注
                     * @return Remark STRING(300)，备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置STRING(300)，备注
                     * @param _remark STRING(300)，备注
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
                     * 获取STRING(300)，保留域1
                     * @return ReservedMsgOne STRING(300)，保留域1
                     * 
                     */
                    std::string GetReservedMsgOne() const;

                    /**
                     * 设置STRING(300)，保留域1
                     * @param _reservedMsgOne STRING(300)，保留域1
                     * 
                     */
                    void SetReservedMsgOne(const std::string& _reservedMsgOne);

                    /**
                     * 判断参数 ReservedMsgOne 是否已赋值
                     * @return ReservedMsgOne 是否已赋值
                     * 
                     */
                    bool ReservedMsgOneHasBeenSet() const;

                    /**
                     * 获取STRING(300)，保留域2
                     * @return ReservedMsgTwo STRING(300)，保留域2
                     * 
                     */
                    std::string GetReservedMsgTwo() const;

                    /**
                     * 设置STRING(300)，保留域2
                     * @param _reservedMsgTwo STRING(300)，保留域2
                     * 
                     */
                    void SetReservedMsgTwo(const std::string& _reservedMsgTwo);

                    /**
                     * 判断参数 ReservedMsgTwo 是否已赋值
                     * @return ReservedMsgTwo 是否已赋值
                     * 
                     */
                    bool ReservedMsgTwoHasBeenSet() const;

                    /**
                     * 获取STRING(300)，保留域3
                     * @return ReservedMsgThree STRING(300)，保留域3
                     * 
                     */
                    std::string GetReservedMsgThree() const;

                    /**
                     * 设置STRING(300)，保留域3
                     * @param _reservedMsgThree STRING(300)，保留域3
                     * 
                     */
                    void SetReservedMsgThree(const std::string& _reservedMsgThree);

                    /**
                     * 判断参数 ReservedMsgThree 是否已赋值
                     * @return ReservedMsgThree 是否已赋值
                     * 
                     */
                    bool ReservedMsgThreeHasBeenSet() const;

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
                     * STRING(32)，交易网会代码
                     */
                    std::string m_tranNetMemberCode;
                    bool m_tranNetMemberCodeHasBeenSet;

                    /**
                     * STRING(20)，会员充值金额
                     */
                    std::string m_memberFillAmt;
                    bool m_memberFillAmtHasBeenSet;

                    /**
                     * STRING(20)，手续费金额
                     */
                    std::string m_commission;
                    bool m_commissionHasBeenSet;

                    /**
                     * STRING(3)，币种。如RMB
                     */
                    std::string m_ccy;
                    bool m_ccyHasBeenSet;

                    /**
                     * STRING(20)，支付渠道类型。
0001-微信
0002-支付宝
0003-京东支付
                     */
                    std::string m_payChannelType;
                    bool m_payChannelTypeHasBeenSet;

                    /**
                     * STRING(50)，支付渠道所分配的商户号
                     */
                    std::string m_payChannelAssignMerNo;
                    bool m_payChannelAssignMerNoHasBeenSet;

                    /**
                     * STRING(52)，支付渠道交易流水号
                     */
                    std::string m_payChannelTranSeqNo;
                    bool m_payChannelTranSeqNoHasBeenSet;

                    /**
                     * STRING(52)，电商见证宝订单号
                     */
                    std::string m_ejzbOrderNo;
                    bool m_ejzbOrderNoHasBeenSet;

                    /**
                     * String(22)，商户号
                     */
                    std::string m_mrchCode;
                    bool m_mrchCodeHasBeenSet;

                    /**
                     * STRING(500)，电商见证宝订单内容
                     */
                    std::string m_ejzbOrderContent;
                    bool m_ejzbOrderContentHasBeenSet;

                    /**
                     * STRING(300)，备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * STRING(300)，保留域1
                     */
                    std::string m_reservedMsgOne;
                    bool m_reservedMsgOneHasBeenSet;

                    /**
                     * STRING(300)，保留域2
                     */
                    std::string m_reservedMsgTwo;
                    bool m_reservedMsgTwoHasBeenSet;

                    /**
                     * STRING(300)，保留域3
                     */
                    std::string m_reservedMsgThree;
                    bool m_reservedMsgThreeHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_RECHARGEMEMBERTHIRDPAYREQUEST_H_
