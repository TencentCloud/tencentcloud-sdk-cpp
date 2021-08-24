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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_CHAINMAKERTRANSACTIONRESULT_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_CHAINMAKERTRANSACTIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 长安链交易查询结果
                */
                class ChainMakerTransactionResult : public AbstractModel
                {
                public:
                    ChainMakerTransactionResult();
                    ~ChainMakerTransactionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取交易结果码
                     * @return Code 交易结果码
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置交易结果码
                     * @param Code 交易结果码
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取交易结果码含义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeMessage 交易结果码含义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCodeMessage() const;

                    /**
                     * 设置交易结果码含义
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CodeMessage 交易结果码含义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCodeMessage(const std::string& _codeMessage);

                    /**
                     * 判断参数 CodeMessage 是否已赋值
                     * @return CodeMessage 是否已赋值
                     */
                    bool CodeMessageHasBeenSet() const;

                    /**
                     * 获取交易ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TxId 交易ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTxId() const;

                    /**
                     * 设置交易ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TxId 交易ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTxId(const std::string& _txId);

                    /**
                     * 判断参数 TxId 是否已赋值
                     * @return TxId 是否已赋值
                     */
                    bool TxIdHasBeenSet() const;

                    /**
                     * 获取Gas使用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GasUsed Gas使用量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetGasUsed() const;

                    /**
                     * 设置Gas使用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GasUsed Gas使用量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGasUsed(const int64_t& _gasUsed);

                    /**
                     * 判断参数 GasUsed 是否已赋值
                     * @return GasUsed 是否已赋值
                     */
                    bool GasUsedHasBeenSet() const;

                    /**
                     * 获取区块高度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockHeight 区块高度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetBlockHeight() const;

                    /**
                     * 设置区块高度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BlockHeight 区块高度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBlockHeight(const int64_t& _blockHeight);

                    /**
                     * 判断参数 BlockHeight 是否已赋值
                     * @return BlockHeight 是否已赋值
                     */
                    bool BlockHeightHasBeenSet() const;

                    /**
                     * 获取合约执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractEvent 合约执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetContractEvent() const;

                    /**
                     * 设置合约执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ContractEvent 合约执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContractEvent(const std::string& _contractEvent);

                    /**
                     * 判断参数 ContractEvent 是否已赋值
                     * @return ContractEvent 是否已赋值
                     */
                    bool ContractEventHasBeenSet() const;

                    /**
                     * 获取合约返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 合约返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置合约返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Message 合约返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp 交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Timestamp 交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * 交易结果码
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 交易结果码含义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeMessage;
                    bool m_codeMessageHasBeenSet;

                    /**
                     * 交易ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_txId;
                    bool m_txIdHasBeenSet;

                    /**
                     * Gas使用量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_gasUsed;
                    bool m_gasUsedHasBeenSet;

                    /**
                     * 区块高度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockHeight;
                    bool m_blockHeightHasBeenSet;

                    /**
                     * 合约执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractEvent;
                    bool m_contractEventHasBeenSet;

                    /**
                     * 合约返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 交易时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_CHAINMAKERTRANSACTIONRESULT_H_
