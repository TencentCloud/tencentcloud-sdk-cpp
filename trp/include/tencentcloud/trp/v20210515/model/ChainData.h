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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_CHAINDATA_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_CHAINDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 上链数据
                */
                class ChainData : public AbstractModel
                {
                public:
                    ChainData();
                    ~ChainData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取区块hash
                     * @return BlockHash 区块hash
                     * 
                     */
                    std::string GetBlockHash() const;

                    /**
                     * 设置区块hash
                     * @param _blockHash 区块hash
                     * 
                     */
                    void SetBlockHash(const std::string& _blockHash);

                    /**
                     * 判断参数 BlockHash 是否已赋值
                     * @return BlockHash 是否已赋值
                     * 
                     */
                    bool BlockHashHasBeenSet() const;

                    /**
                     * 获取区块高度
                     * @return BlockHeight 区块高度
                     * 
                     */
                    std::string GetBlockHeight() const;

                    /**
                     * 设置区块高度
                     * @param _blockHeight 区块高度
                     * 
                     */
                    void SetBlockHeight(const std::string& _blockHeight);

                    /**
                     * 判断参数 BlockHeight 是否已赋值
                     * @return BlockHeight 是否已赋值
                     * 
                     */
                    bool BlockHeightHasBeenSet() const;

                    /**
                     * 获取区块时间
                     * @return BlockTime 区块时间
                     * 
                     */
                    std::string GetBlockTime() const;

                    /**
                     * 设置区块时间
                     * @param _blockTime 区块时间
                     * 
                     */
                    void SetBlockTime(const std::string& _blockTime);

                    /**
                     * 判断参数 BlockTime 是否已赋值
                     * @return BlockTime 是否已赋值
                     * 
                     */
                    bool BlockTimeHasBeenSet() const;

                private:

                    /**
                     * 区块hash
                     */
                    std::string m_blockHash;
                    bool m_blockHashHasBeenSet;

                    /**
                     * 区块高度
                     */
                    std::string m_blockHeight;
                    bool m_blockHeightHasBeenSet;

                    /**
                     * 区块时间
                     */
                    std::string m_blockTime;
                    bool m_blockTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_CHAINDATA_H_
