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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_BCOSBLOCKOBJ_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_BCOSBLOCKOBJ_H_

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
                * bcos区块对象
                */
                class BcosBlockObj : public AbstractModel
                {
                public:
                    BcosBlockObj();
                    ~BcosBlockObj() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取区块哈希
                     * @return BlockHash 区块哈希
                     */
                    std::string GetBlockHash() const;

                    /**
                     * 设置区块哈希
                     * @param BlockHash 区块哈希
                     */
                    void SetBlockHash(const std::string& _blockHash);

                    /**
                     * 判断参数 BlockHash 是否已赋值
                     * @return BlockHash 是否已赋值
                     */
                    bool BlockHashHasBeenSet() const;

                    /**
                     * 获取区块高度
                     * @return BlockNumber 区块高度
                     */
                    int64_t GetBlockNumber() const;

                    /**
                     * 设置区块高度
                     * @param BlockNumber 区块高度
                     */
                    void SetBlockNumber(const int64_t& _blockNumber);

                    /**
                     * 判断参数 BlockNumber 是否已赋值
                     * @return BlockNumber 是否已赋值
                     */
                    bool BlockNumberHasBeenSet() const;

                    /**
                     * 获取区块时间戳
                     * @return BlockTimestamp 区块时间戳
                     */
                    std::string GetBlockTimestamp() const;

                    /**
                     * 设置区块时间戳
                     * @param BlockTimestamp 区块时间戳
                     */
                    void SetBlockTimestamp(const std::string& _blockTimestamp);

                    /**
                     * 判断参数 BlockTimestamp 是否已赋值
                     * @return BlockTimestamp 是否已赋值
                     */
                    bool BlockTimestampHasBeenSet() const;

                    /**
                     * 获取打包节点id
                     * @return Sealer 打包节点id
                     */
                    std::string GetSealer() const;

                    /**
                     * 设置打包节点id
                     * @param Sealer 打包节点id
                     */
                    void SetSealer(const std::string& _sealer);

                    /**
                     * 判断参数 Sealer 是否已赋值
                     * @return Sealer 是否已赋值
                     */
                    bool SealerHasBeenSet() const;

                    /**
                     * 获取打包节点索引
                     * @return SealerIndex 打包节点索引
                     */
                    int64_t GetSealerIndex() const;

                    /**
                     * 设置打包节点索引
                     * @param SealerIndex 打包节点索引
                     */
                    void SetSealerIndex(const int64_t& _sealerIndex);

                    /**
                     * 判断参数 SealerIndex 是否已赋值
                     * @return SealerIndex 是否已赋值
                     */
                    bool SealerIndexHasBeenSet() const;

                    /**
                     * 获取记录保存时间
                     * @return CreateTime 记录保存时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置记录保存时间
                     * @param CreateTime 记录保存时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取交易数量
                     * @return TransCount 交易数量
                     */
                    int64_t GetTransCount() const;

                    /**
                     * 设置交易数量
                     * @param TransCount 交易数量
                     */
                    void SetTransCount(const int64_t& _transCount);

                    /**
                     * 判断参数 TransCount 是否已赋值
                     * @return TransCount 是否已赋值
                     */
                    bool TransCountHasBeenSet() const;

                    /**
                     * 获取记录修改时间
                     * @return ModifyTime 记录修改时间
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置记录修改时间
                     * @param ModifyTime 记录修改时间
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 区块哈希
                     */
                    std::string m_blockHash;
                    bool m_blockHashHasBeenSet;

                    /**
                     * 区块高度
                     */
                    int64_t m_blockNumber;
                    bool m_blockNumberHasBeenSet;

                    /**
                     * 区块时间戳
                     */
                    std::string m_blockTimestamp;
                    bool m_blockTimestampHasBeenSet;

                    /**
                     * 打包节点id
                     */
                    std::string m_sealer;
                    bool m_sealerHasBeenSet;

                    /**
                     * 打包节点索引
                     */
                    int64_t m_sealerIndex;
                    bool m_sealerIndexHasBeenSet;

                    /**
                     * 记录保存时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 交易数量
                     */
                    int64_t m_transCount;
                    bool m_transCountHasBeenSet;

                    /**
                     * 记录修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_BCOSBLOCKOBJ_H_
