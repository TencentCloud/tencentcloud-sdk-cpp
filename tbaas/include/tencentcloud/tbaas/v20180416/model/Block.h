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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_BLOCK_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_BLOCK_H_

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
                * 区块对象
                */
                class Block : public AbstractModel
                {
                public:
                    Block();
                    ~Block() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取区块编号
                     * @return BlockNum 区块编号
                     * 
                     */
                    uint64_t GetBlockNum() const;

                    /**
                     * 设置区块编号
                     * @param _blockNum 区块编号
                     * 
                     */
                    void SetBlockNum(const uint64_t& _blockNum);

                    /**
                     * 判断参数 BlockNum 是否已赋值
                     * @return BlockNum 是否已赋值
                     * 
                     */
                    bool BlockNumHasBeenSet() const;

                    /**
                     * 获取区块数据Hash数值
                     * @return DataHash 区块数据Hash数值
                     * 
                     */
                    std::string GetDataHash() const;

                    /**
                     * 设置区块数据Hash数值
                     * @param _dataHash 区块数据Hash数值
                     * 
                     */
                    void SetDataHash(const std::string& _dataHash);

                    /**
                     * 判断参数 DataHash 是否已赋值
                     * @return DataHash 是否已赋值
                     * 
                     */
                    bool DataHashHasBeenSet() const;

                    /**
                     * 获取区块ID，与区块编号一致
                     * @return BlockId 区块ID，与区块编号一致
                     * 
                     */
                    uint64_t GetBlockId() const;

                    /**
                     * 设置区块ID，与区块编号一致
                     * @param _blockId 区块ID，与区块编号一致
                     * 
                     */
                    void SetBlockId(const uint64_t& _blockId);

                    /**
                     * 判断参数 BlockId 是否已赋值
                     * @return BlockId 是否已赋值
                     * 
                     */
                    bool BlockIdHasBeenSet() const;

                    /**
                     * 获取前一个区块Hash
                     * @return PreHash 前一个区块Hash
                     * 
                     */
                    std::string GetPreHash() const;

                    /**
                     * 设置前一个区块Hash
                     * @param _preHash 前一个区块Hash
                     * 
                     */
                    void SetPreHash(const std::string& _preHash);

                    /**
                     * 判断参数 PreHash 是否已赋值
                     * @return PreHash 是否已赋值
                     * 
                     */
                    bool PreHashHasBeenSet() const;

                    /**
                     * 获取区块内的交易数量
                     * @return TxCount 区块内的交易数量
                     * 
                     */
                    uint64_t GetTxCount() const;

                    /**
                     * 设置区块内的交易数量
                     * @param _txCount 区块内的交易数量
                     * 
                     */
                    void SetTxCount(const uint64_t& _txCount);

                    /**
                     * 判断参数 TxCount 是否已赋值
                     * @return TxCount 是否已赋值
                     * 
                     */
                    bool TxCountHasBeenSet() const;

                private:

                    /**
                     * 区块编号
                     */
                    uint64_t m_blockNum;
                    bool m_blockNumHasBeenSet;

                    /**
                     * 区块数据Hash数值
                     */
                    std::string m_dataHash;
                    bool m_dataHashHasBeenSet;

                    /**
                     * 区块ID，与区块编号一致
                     */
                    uint64_t m_blockId;
                    bool m_blockIdHasBeenSet;

                    /**
                     * 前一个区块Hash
                     */
                    std::string m_preHash;
                    bool m_preHashHasBeenSet;

                    /**
                     * 区块内的交易数量
                     */
                    uint64_t m_txCount;
                    bool m_txCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_BLOCK_H_
