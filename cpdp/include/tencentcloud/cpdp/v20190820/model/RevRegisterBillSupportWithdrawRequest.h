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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_REVREGISTERBILLSUPPORTWITHDRAWREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_REVREGISTERBILLSUPPORTWITHDRAWREQUEST_H_

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
                * RevRegisterBillSupportWithdraw请求参数结构体
                */
                class RevRegisterBillSupportWithdrawRequest : public AbstractModel
                {
                public:
                    RevRegisterBillSupportWithdrawRequest();
                    ~RevRegisterBillSupportWithdrawRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取String(22)，商户号（签约客户号）
                     * @return MrchCode String(22)，商户号（签约客户号）
                     */
                    std::string GetMrchCode() const;

                    /**
                     * 设置String(22)，商户号（签约客户号）
                     * @param MrchCode String(22)，商户号（签约客户号）
                     */
                    void SetMrchCode(const std::string& _mrchCode);

                    /**
                     * 判断参数 MrchCode 是否已赋值
                     * @return MrchCode 是否已赋值
                     */
                    bool MrchCodeHasBeenSet() const;

                    /**
                     * 获取STRING(32)，交易网会员代码
                     * @return TranNetMemberCode STRING(32)，交易网会员代码
                     */
                    std::string GetTranNetMemberCode() const;

                    /**
                     * 设置STRING(32)，交易网会员代码
                     * @param TranNetMemberCode STRING(32)，交易网会员代码
                     */
                    void SetTranNetMemberCode(const std::string& _tranNetMemberCode);

                    /**
                     * 判断参数 TranNetMemberCode 是否已赋值
                     * @return TranNetMemberCode 是否已赋值
                     */
                    bool TranNetMemberCodeHasBeenSet() const;

                    /**
                     * 获取STRING(30)，原订单号（RegisterBillSupportWithdraw接口中的订单号）
                     * @return OldOrderNo STRING(30)，原订单号（RegisterBillSupportWithdraw接口中的订单号）
                     */
                    std::string GetOldOrderNo() const;

                    /**
                     * 设置STRING(30)，原订单号（RegisterBillSupportWithdraw接口中的订单号）
                     * @param OldOrderNo STRING(30)，原订单号（RegisterBillSupportWithdraw接口中的订单号）
                     */
                    void SetOldOrderNo(const std::string& _oldOrderNo);

                    /**
                     * 判断参数 OldOrderNo 是否已赋值
                     * @return OldOrderNo 是否已赋值
                     */
                    bool OldOrderNoHasBeenSet() const;

                    /**
                     * 获取STRING(20)，撤销金额（支持部分撤销，不能大于原订单可用金额，包含交易费用）
                     * @return CancelAmt STRING(20)，撤销金额（支持部分撤销，不能大于原订单可用金额，包含交易费用）
                     */
                    std::string GetCancelAmt() const;

                    /**
                     * 设置STRING(20)，撤销金额（支持部分撤销，不能大于原订单可用金额，包含交易费用）
                     * @param CancelAmt STRING(20)，撤销金额（支持部分撤销，不能大于原订单可用金额，包含交易费用）
                     */
                    void SetCancelAmt(const std::string& _cancelAmt);

                    /**
                     * 判断参数 CancelAmt 是否已赋值
                     * @return CancelAmt 是否已赋值
                     */
                    bool CancelAmtHasBeenSet() const;

                    /**
                     * 获取STRING(20)，交易费用（暂未使用，默认传0.0）
                     * @return TranFee STRING(20)，交易费用（暂未使用，默认传0.0）
                     */
                    std::string GetTranFee() const;

                    /**
                     * 设置STRING(20)，交易费用（暂未使用，默认传0.0）
                     * @param TranFee STRING(20)，交易费用（暂未使用，默认传0.0）
                     */
                    void SetTranFee(const std::string& _tranFee);

                    /**
                     * 判断参数 TranFee 是否已赋值
                     * @return TranFee 是否已赋值
                     */
                    bool TranFeeHasBeenSet() const;

                    /**
                     * 获取STRING(300)，备注
                     * @return Remark STRING(300)，备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置STRING(300)，备注
                     * @param Remark STRING(300)，备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取STRING(300)，保留域1
                     * @return ReservedMsgOne STRING(300)，保留域1
                     */
                    std::string GetReservedMsgOne() const;

                    /**
                     * 设置STRING(300)，保留域1
                     * @param ReservedMsgOne STRING(300)，保留域1
                     */
                    void SetReservedMsgOne(const std::string& _reservedMsgOne);

                    /**
                     * 判断参数 ReservedMsgOne 是否已赋值
                     * @return ReservedMsgOne 是否已赋值
                     */
                    bool ReservedMsgOneHasBeenSet() const;

                    /**
                     * 获取STRING(300)，保留域2
                     * @return ReservedMsgTwo STRING(300)，保留域2
                     */
                    std::string GetReservedMsgTwo() const;

                    /**
                     * 设置STRING(300)，保留域2
                     * @param ReservedMsgTwo STRING(300)，保留域2
                     */
                    void SetReservedMsgTwo(const std::string& _reservedMsgTwo);

                    /**
                     * 判断参数 ReservedMsgTwo 是否已赋值
                     * @return ReservedMsgTwo 是否已赋值
                     */
                    bool ReservedMsgTwoHasBeenSet() const;

                    /**
                     * 获取STRING(300)，保留域3
                     * @return ReservedMsgThree STRING(300)，保留域3
                     */
                    std::string GetReservedMsgThree() const;

                    /**
                     * 设置STRING(300)，保留域3
                     * @param ReservedMsgThree STRING(300)，保留域3
                     */
                    void SetReservedMsgThree(const std::string& _reservedMsgThree);

                    /**
                     * 判断参数 ReservedMsgThree 是否已赋值
                     * @return ReservedMsgThree 是否已赋值
                     */
                    bool ReservedMsgThreeHasBeenSet() const;

                private:

                    /**
                     * String(22)，商户号（签约客户号）
                     */
                    std::string m_mrchCode;
                    bool m_mrchCodeHasBeenSet;

                    /**
                     * STRING(32)，交易网会员代码
                     */
                    std::string m_tranNetMemberCode;
                    bool m_tranNetMemberCodeHasBeenSet;

                    /**
                     * STRING(30)，原订单号（RegisterBillSupportWithdraw接口中的订单号）
                     */
                    std::string m_oldOrderNo;
                    bool m_oldOrderNoHasBeenSet;

                    /**
                     * STRING(20)，撤销金额（支持部分撤销，不能大于原订单可用金额，包含交易费用）
                     */
                    std::string m_cancelAmt;
                    bool m_cancelAmtHasBeenSet;

                    /**
                     * STRING(20)，交易费用（暂未使用，默认传0.0）
                     */
                    std::string m_tranFee;
                    bool m_tranFeeHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_REVREGISTERBILLSUPPORTWITHDRAWREQUEST_H_
