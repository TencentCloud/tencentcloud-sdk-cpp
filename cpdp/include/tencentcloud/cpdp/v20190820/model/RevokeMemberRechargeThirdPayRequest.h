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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_REVOKEMEMBERRECHARGETHIRDPAYREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_REVOKEMEMBERRECHARGETHIRDPAYREQUEST_H_

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
                * RevokeMemberRechargeThirdPay请求参数结构体
                */
                class RevokeMemberRechargeThirdPayRequest : public AbstractModel
                {
                public:
                    RevokeMemberRechargeThirdPayRequest();
                    ~RevokeMemberRechargeThirdPayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取STRING(52)，原充值的前置流水号
                     * @return OldFillFrontSeqNo STRING(52)，原充值的前置流水号
                     * 
                     */
                    std::string GetOldFillFrontSeqNo() const;

                    /**
                     * 设置STRING(52)，原充值的前置流水号
                     * @param _oldFillFrontSeqNo STRING(52)，原充值的前置流水号
                     * 
                     */
                    void SetOldFillFrontSeqNo(const std::string& _oldFillFrontSeqNo);

                    /**
                     * 判断参数 OldFillFrontSeqNo 是否已赋值
                     * @return OldFillFrontSeqNo 是否已赋值
                     * 
                     */
                    bool OldFillFrontSeqNoHasBeenSet() const;

                    /**
                     * 获取STRING(20)，原充值的支付渠道类型
                     * @return OldFillPayChannelType STRING(20)，原充值的支付渠道类型
                     * 
                     */
                    std::string GetOldFillPayChannelType() const;

                    /**
                     * 设置STRING(20)，原充值的支付渠道类型
                     * @param _oldFillPayChannelType STRING(20)，原充值的支付渠道类型
                     * 
                     */
                    void SetOldFillPayChannelType(const std::string& _oldFillPayChannelType);

                    /**
                     * 判断参数 OldFillPayChannelType 是否已赋值
                     * @return OldFillPayChannelType 是否已赋值
                     * 
                     */
                    bool OldFillPayChannelTypeHasBeenSet() const;

                    /**
                     * 获取STRING(52)，原充值的支付渠道交易流水号
                     * @return OldPayChannelTranSeqNo STRING(52)，原充值的支付渠道交易流水号
                     * 
                     */
                    std::string GetOldPayChannelTranSeqNo() const;

                    /**
                     * 设置STRING(52)，原充值的支付渠道交易流水号
                     * @param _oldPayChannelTranSeqNo STRING(52)，原充值的支付渠道交易流水号
                     * 
                     */
                    void SetOldPayChannelTranSeqNo(const std::string& _oldPayChannelTranSeqNo);

                    /**
                     * 判断参数 OldPayChannelTranSeqNo 是否已赋值
                     * @return OldPayChannelTranSeqNo 是否已赋值
                     * 
                     */
                    bool OldPayChannelTranSeqNoHasBeenSet() const;

                    /**
                     * 获取STRING(52)，原充值的电商见证宝订单号
                     * @return OldFillEjzbOrderNo STRING(52)，原充值的电商见证宝订单号
                     * 
                     */
                    std::string GetOldFillEjzbOrderNo() const;

                    /**
                     * 设置STRING(52)，原充值的电商见证宝订单号
                     * @param _oldFillEjzbOrderNo STRING(52)，原充值的电商见证宝订单号
                     * 
                     */
                    void SetOldFillEjzbOrderNo(const std::string& _oldFillEjzbOrderNo);

                    /**
                     * 判断参数 OldFillEjzbOrderNo 是否已赋值
                     * @return OldFillEjzbOrderNo 是否已赋值
                     * 
                     */
                    bool OldFillEjzbOrderNoHasBeenSet() const;

                    /**
                     * 获取STRING(20)，申请撤销的会员金额
                     * @return ApplyCancelMemberAmt STRING(20)，申请撤销的会员金额
                     * 
                     */
                    std::string GetApplyCancelMemberAmt() const;

                    /**
                     * 设置STRING(20)，申请撤销的会员金额
                     * @param _applyCancelMemberAmt STRING(20)，申请撤销的会员金额
                     * 
                     */
                    void SetApplyCancelMemberAmt(const std::string& _applyCancelMemberAmt);

                    /**
                     * 判断参数 ApplyCancelMemberAmt 是否已赋值
                     * @return ApplyCancelMemberAmt 是否已赋值
                     * 
                     */
                    bool ApplyCancelMemberAmtHasBeenSet() const;

                    /**
                     * 获取STRING(20)，申请撤销的手续费金额
                     * @return ApplyCancelCommission STRING(20)，申请撤销的手续费金额
                     * 
                     */
                    std::string GetApplyCancelCommission() const;

                    /**
                     * 设置STRING(20)，申请撤销的手续费金额
                     * @param _applyCancelCommission STRING(20)，申请撤销的手续费金额
                     * 
                     */
                    void SetApplyCancelCommission(const std::string& _applyCancelCommission);

                    /**
                     * 判断参数 ApplyCancelCommission 是否已赋值
                     * @return ApplyCancelCommission 是否已赋值
                     * 
                     */
                    bool ApplyCancelCommissionHasBeenSet() const;

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
                     * STRING(52)，原充值的前置流水号
                     */
                    std::string m_oldFillFrontSeqNo;
                    bool m_oldFillFrontSeqNoHasBeenSet;

                    /**
                     * STRING(20)，原充值的支付渠道类型
                     */
                    std::string m_oldFillPayChannelType;
                    bool m_oldFillPayChannelTypeHasBeenSet;

                    /**
                     * STRING(52)，原充值的支付渠道交易流水号
                     */
                    std::string m_oldPayChannelTranSeqNo;
                    bool m_oldPayChannelTranSeqNoHasBeenSet;

                    /**
                     * STRING(52)，原充值的电商见证宝订单号
                     */
                    std::string m_oldFillEjzbOrderNo;
                    bool m_oldFillEjzbOrderNoHasBeenSet;

                    /**
                     * STRING(20)，申请撤销的会员金额
                     */
                    std::string m_applyCancelMemberAmt;
                    bool m_applyCancelMemberAmtHasBeenSet;

                    /**
                     * STRING(20)，申请撤销的手续费金额
                     */
                    std::string m_applyCancelCommission;
                    bool m_applyCancelCommissionHasBeenSet;

                    /**
                     * String(22)，商户号
                     */
                    std::string m_mrchCode;
                    bool m_mrchCodeHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_REVOKEMEMBERRECHARGETHIRDPAYREQUEST_H_
