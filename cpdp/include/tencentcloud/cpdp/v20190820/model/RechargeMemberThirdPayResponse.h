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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_RECHARGEMEMBERTHIRDPAYRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_RECHARGEMEMBERTHIRDPAYRESPONSE_H_

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
                * RechargeMemberThirdPay返回参数结构体
                */
                class RechargeMemberThirdPayResponse : public AbstractModel
                {
                public:
                    RechargeMemberThirdPayResponse();
                    ~RechargeMemberThirdPayResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取String(20)，返回码
                     * @return TxnReturnCode String(20)，返回码
                     * 
                     */
                    std::string GetTxnReturnCode() const;

                    /**
                     * 判断参数 TxnReturnCode 是否已赋值
                     * @return TxnReturnCode 是否已赋值
                     * 
                     */
                    bool TxnReturnCodeHasBeenSet() const;

                    /**
                     * 获取String(100)，返回信息
                     * @return TxnReturnMsg String(100)，返回信息
                     * 
                     */
                    std::string GetTxnReturnMsg() const;

                    /**
                     * 判断参数 TxnReturnMsg 是否已赋值
                     * @return TxnReturnMsg 是否已赋值
                     * 
                     */
                    bool TxnReturnMsgHasBeenSet() const;

                    /**
                     * 获取String(22)，交易流水号
                     * @return CnsmrSeqNo String(22)，交易流水号
                     * 
                     */
                    std::string GetCnsmrSeqNo() const;

                    /**
                     * 判断参数 CnsmrSeqNo 是否已赋值
                     * @return CnsmrSeqNo 是否已赋值
                     * 
                     */
                    bool CnsmrSeqNoHasBeenSet() const;

                    /**
                     * 获取STRING(52)，前置流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrontSeqNo STRING(52)，前置流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrontSeqNo() const;

                    /**
                     * 判断参数 FrontSeqNo 是否已赋值
                     * @return FrontSeqNo 是否已赋值
                     * 
                     */
                    bool FrontSeqNoHasBeenSet() const;

                    /**
                     * 获取STRING(20)，会员子账户交易前可用余额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberSubAcctPreAvailBal STRING(20)，会员子账户交易前可用余额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberSubAcctPreAvailBal() const;

                    /**
                     * 判断参数 MemberSubAcctPreAvailBal 是否已赋值
                     * @return MemberSubAcctPreAvailBal 是否已赋值
                     * 
                     */
                    bool MemberSubAcctPreAvailBalHasBeenSet() const;

                    /**
                     * 获取STRING(300)，保留域1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReservedMsgOne STRING(300)，保留域1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReservedMsgOne() const;

                    /**
                     * 判断参数 ReservedMsgOne 是否已赋值
                     * @return ReservedMsgOne 是否已赋值
                     * 
                     */
                    bool ReservedMsgOneHasBeenSet() const;

                    /**
                     * 获取STRING(300)，保留域2
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReservedMsgTwo STRING(300)，保留域2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReservedMsgTwo() const;

                    /**
                     * 判断参数 ReservedMsgTwo 是否已赋值
                     * @return ReservedMsgTwo 是否已赋值
                     * 
                     */
                    bool ReservedMsgTwoHasBeenSet() const;

                private:

                    /**
                     * String(20)，返回码
                     */
                    std::string m_txnReturnCode;
                    bool m_txnReturnCodeHasBeenSet;

                    /**
                     * String(100)，返回信息
                     */
                    std::string m_txnReturnMsg;
                    bool m_txnReturnMsgHasBeenSet;

                    /**
                     * String(22)，交易流水号
                     */
                    std::string m_cnsmrSeqNo;
                    bool m_cnsmrSeqNoHasBeenSet;

                    /**
                     * STRING(52)，前置流水号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frontSeqNo;
                    bool m_frontSeqNoHasBeenSet;

                    /**
                     * STRING(20)，会员子账户交易前可用余额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberSubAcctPreAvailBal;
                    bool m_memberSubAcctPreAvailBalHasBeenSet;

                    /**
                     * STRING(300)，保留域1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reservedMsgOne;
                    bool m_reservedMsgOneHasBeenSet;

                    /**
                     * STRING(300)，保留域2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reservedMsgTwo;
                    bool m_reservedMsgTwoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_RECHARGEMEMBERTHIRDPAYRESPONSE_H_
