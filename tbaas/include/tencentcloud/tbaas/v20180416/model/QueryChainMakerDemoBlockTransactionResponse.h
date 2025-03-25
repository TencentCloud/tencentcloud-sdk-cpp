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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_QUERYCHAINMAKERDEMOBLOCKTRANSACTIONRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_QUERYCHAINMAKERDEMOBLOCKTRANSACTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbaas/v20180416/model/ChainMakerTransactionResult.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * QueryChainMakerDemoBlockTransaction返回参数结构体
                */
                class QueryChainMakerDemoBlockTransactionResponse : public AbstractModel
                {
                public:
                    QueryChainMakerDemoBlockTransactionResponse();
                    ~QueryChainMakerDemoBlockTransactionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取区块交易
                     * @return Result 区块交易
                     * 
                     */
                    std::vector<ChainMakerTransactionResult> GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取区块高度
                     * @return BlockHeight 区块高度
                     * 
                     */
                    int64_t GetBlockHeight() const;

                    /**
                     * 判断参数 BlockHeight 是否已赋值
                     * @return BlockHeight 是否已赋值
                     * 
                     */
                    bool BlockHeightHasBeenSet() const;

                    /**
                     * 获取交易数量
                     * @return TxCount 交易数量
                     * 
                     */
                    int64_t GetTxCount() const;

                    /**
                     * 判断参数 TxCount 是否已赋值
                     * @return TxCount 是否已赋值
                     * 
                     */
                    bool TxCountHasBeenSet() const;

                    /**
                     * 获取区块时间戳，单位是秒
                     * @return BlockTimestamp 区块时间戳，单位是秒
                     * 
                     */
                    int64_t GetBlockTimestamp() const;

                    /**
                     * 判断参数 BlockTimestamp 是否已赋值
                     * @return BlockTimestamp 是否已赋值
                     * 
                     */
                    bool BlockTimestampHasBeenSet() const;

                private:

                    /**
                     * 区块交易
                     */
                    std::vector<ChainMakerTransactionResult> m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 区块高度
                     */
                    int64_t m_blockHeight;
                    bool m_blockHeightHasBeenSet;

                    /**
                     * 交易数量
                     */
                    int64_t m_txCount;
                    bool m_txCountHasBeenSet;

                    /**
                     * 区块时间戳，单位是秒
                     */
                    int64_t m_blockTimestamp;
                    bool m_blockTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_QUERYCHAINMAKERDEMOBLOCKTRANSACTIONRESPONSE_H_
