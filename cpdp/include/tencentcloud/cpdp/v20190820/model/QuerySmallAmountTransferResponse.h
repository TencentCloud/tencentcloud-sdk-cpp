/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSMALLAMOUNTTRANSFERRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSMALLAMOUNTTRANSFERRESPONSE_H_

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
                * QuerySmallAmountTransfer返回参数结构体
                */
                class QuerySmallAmountTransferResponse : public AbstractModel
                {
                public:
                    QuerySmallAmountTransferResponse();
                    ~QuerySmallAmountTransferResponse() = default;
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
                     * 获取STRING(10)，返回状态（0: 成功; 1: 失败; 2: 待确认）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReturnStatus STRING(10)，返回状态（0: 成功; 1: 失败; 2: 待确认）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReturnStatus() const;

                    /**
                     * 判断参数 ReturnStatus 是否已赋值
                     * @return ReturnStatus 是否已赋值
                     * 
                     */
                    bool ReturnStatusHasBeenSet() const;

                    /**
                     * 获取STRING(512)，返回信息（失败返回具体信息）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReturnMsg STRING(512)，返回信息（失败返回具体信息）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                    /**
                     * 获取STRING(1027)，保留域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReservedMsg STRING(1027)，保留域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReservedMsg() const;

                    /**
                     * 判断参数 ReservedMsg 是否已赋值
                     * @return ReservedMsg 是否已赋值
                     * 
                     */
                    bool ReservedMsgHasBeenSet() const;

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
                     * STRING(10)，返回状态（0: 成功; 1: 失败; 2: 待确认）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_returnStatus;
                    bool m_returnStatusHasBeenSet;

                    /**
                     * STRING(512)，返回信息（失败返回具体信息）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * STRING(1027)，保留域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reservedMsg;
                    bool m_reservedMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSMALLAMOUNTTRANSFERRESPONSE_H_
