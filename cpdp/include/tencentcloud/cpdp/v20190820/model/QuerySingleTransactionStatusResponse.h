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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLETRANSACTIONSTATUSRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLETRANSACTIONSTATUSRESPONSE_H_

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
                * QuerySingleTransactionStatus返回参数结构体
                */
                class QuerySingleTransactionStatusResponse : public AbstractModel
                {
                public:
                    QuerySingleTransactionStatusResponse();
                    ~QuerySingleTransactionStatusResponse() = default;
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
                     * 获取STRING(2)，记账标志（记账标志。1: 登记挂账; 2: 支付; 3: 提现; 4: 清分; 5: 下单预支付; 6: 确认并付款; 7: 退款; 8: 支付到平台; N: 其他）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BookingFlag STRING(2)，记账标志（记账标志。1: 登记挂账; 2: 支付; 3: 提现; 4: 清分; 5: 下单预支付; 6: 确认并付款; 7: 退款; 8: 支付到平台; N: 其他）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBookingFlag() const;

                    /**
                     * 判断参数 BookingFlag 是否已赋值
                     * @return BookingFlag 是否已赋值
                     * 
                     */
                    bool BookingFlagHasBeenSet() const;

                    /**
                     * 获取STRING(32)，交易状态（0: 成功; 1: 失败; 2: 待确认; 5: 待处理; 6: 处理中。0和1是终态，2、5、6是中间态，其中2是特指提现后待确认提现是否成功，5是银行收到交易等待处理，6是交易正在处理）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranStatus STRING(32)，交易状态（0: 成功; 1: 失败; 2: 待确认; 5: 待处理; 6: 处理中。0和1是终态，2、5、6是中间态，其中2是特指提现后待确认提现是否成功，5是银行收到交易等待处理，6是交易正在处理）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranStatus() const;

                    /**
                     * 判断参数 TranStatus 是否已赋值
                     * @return TranStatus 是否已赋值
                     * 
                     */
                    bool TranStatusHasBeenSet() const;

                    /**
                     * 获取STRING(20)，交易金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranAmt STRING(20)，交易金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranAmt() const;

                    /**
                     * 判断参数 TranAmt 是否已赋值
                     * @return TranAmt 是否已赋值
                     * 
                     */
                    bool TranAmtHasBeenSet() const;

                    /**
                     * 获取STRING(8)，交易日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranDate STRING(8)，交易日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranDate() const;

                    /**
                     * 判断参数 TranDate 是否已赋值
                     * @return TranDate 是否已赋值
                     * 
                     */
                    bool TranDateHasBeenSet() const;

                    /**
                     * 获取STRING(20)，交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranTime STRING(20)，交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranTime() const;

                    /**
                     * 判断参数 TranTime 是否已赋值
                     * @return TranTime 是否已赋值
                     * 
                     */
                    bool TranTimeHasBeenSet() const;

                    /**
                     * 获取STRING(50)，转入子账户账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InSubAcctNo STRING(50)，转入子账户账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInSubAcctNo() const;

                    /**
                     * 判断参数 InSubAcctNo 是否已赋值
                     * @return InSubAcctNo 是否已赋值
                     * 
                     */
                    bool InSubAcctNoHasBeenSet() const;

                    /**
                     * 获取STRING(50)，转出子账户账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutSubAcctNo STRING(50)，转出子账户账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutSubAcctNo() const;

                    /**
                     * 判断参数 OutSubAcctNo 是否已赋值
                     * @return OutSubAcctNo 是否已赋值
                     * 
                     */
                    bool OutSubAcctNoHasBeenSet() const;

                    /**
                     * 获取STRING(300)，失败信息（当提现失败时，返回交易失败原因）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailMsg STRING(300)，失败信息（当提现失败时，返回交易失败原因）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailMsg() const;

                    /**
                     * 判断参数 FailMsg 是否已赋值
                     * @return FailMsg 是否已赋值
                     * 
                     */
                    bool FailMsgHasBeenSet() const;

                    /**
                     * 获取STRING(50)，原前置流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldTranFrontSeqNo STRING(50)，原前置流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOldTranFrontSeqNo() const;

                    /**
                     * 判断参数 OldTranFrontSeqNo 是否已赋值
                     * @return OldTranFrontSeqNo 是否已赋值
                     * 
                     */
                    bool OldTranFrontSeqNoHasBeenSet() const;

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
                     * STRING(2)，记账标志（记账标志。1: 登记挂账; 2: 支付; 3: 提现; 4: 清分; 5: 下单预支付; 6: 确认并付款; 7: 退款; 8: 支付到平台; N: 其他）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bookingFlag;
                    bool m_bookingFlagHasBeenSet;

                    /**
                     * STRING(32)，交易状态（0: 成功; 1: 失败; 2: 待确认; 5: 待处理; 6: 处理中。0和1是终态，2、5、6是中间态，其中2是特指提现后待确认提现是否成功，5是银行收到交易等待处理，6是交易正在处理）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranStatus;
                    bool m_tranStatusHasBeenSet;

                    /**
                     * STRING(20)，交易金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranAmt;
                    bool m_tranAmtHasBeenSet;

                    /**
                     * STRING(8)，交易日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranDate;
                    bool m_tranDateHasBeenSet;

                    /**
                     * STRING(20)，交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranTime;
                    bool m_tranTimeHasBeenSet;

                    /**
                     * STRING(50)，转入子账户账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inSubAcctNo;
                    bool m_inSubAcctNoHasBeenSet;

                    /**
                     * STRING(50)，转出子账户账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outSubAcctNo;
                    bool m_outSubAcctNoHasBeenSet;

                    /**
                     * STRING(300)，失败信息（当提现失败时，返回交易失败原因）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failMsg;
                    bool m_failMsgHasBeenSet;

                    /**
                     * STRING(50)，原前置流水号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oldTranFrontSeqNo;
                    bool m_oldTranFrontSeqNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLETRANSACTIONSTATUSRESPONSE_H_
