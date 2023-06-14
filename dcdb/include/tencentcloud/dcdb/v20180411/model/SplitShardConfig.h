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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_SPLITSHARDCONFIG_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_SPLITSHARDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * 升级实例 -- 切分分片类型
                */
                class SplitShardConfig : public AbstractModel
                {
                public:
                    SplitShardConfig();
                    ~SplitShardConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分片ID数组
                     * @return ShardInstanceIds 分片ID数组
                     * 
                     */
                    std::vector<std::string> GetShardInstanceIds() const;

                    /**
                     * 设置分片ID数组
                     * @param _shardInstanceIds 分片ID数组
                     * 
                     */
                    void SetShardInstanceIds(const std::vector<std::string>& _shardInstanceIds);

                    /**
                     * 判断参数 ShardInstanceIds 是否已赋值
                     * @return ShardInstanceIds 是否已赋值
                     * 
                     */
                    bool ShardInstanceIdsHasBeenSet() const;

                    /**
                     * 获取数据切分比例，固定50%
                     * @return SplitRate 数据切分比例，固定50%
                     * 
                     */
                    int64_t GetSplitRate() const;

                    /**
                     * 设置数据切分比例，固定50%
                     * @param _splitRate 数据切分比例，固定50%
                     * 
                     */
                    void SetSplitRate(const int64_t& _splitRate);

                    /**
                     * 判断参数 SplitRate 是否已赋值
                     * @return SplitRate 是否已赋值
                     * 
                     */
                    bool SplitRateHasBeenSet() const;

                    /**
                     * 获取分片内存大小，单位 GB
                     * @return ShardMemory 分片内存大小，单位 GB
                     * 
                     */
                    int64_t GetShardMemory() const;

                    /**
                     * 设置分片内存大小，单位 GB
                     * @param _shardMemory 分片内存大小，单位 GB
                     * 
                     */
                    void SetShardMemory(const int64_t& _shardMemory);

                    /**
                     * 判断参数 ShardMemory 是否已赋值
                     * @return ShardMemory 是否已赋值
                     * 
                     */
                    bool ShardMemoryHasBeenSet() const;

                    /**
                     * 获取分片存储大小，单位 GB
                     * @return ShardStorage 分片存储大小，单位 GB
                     * 
                     */
                    int64_t GetShardStorage() const;

                    /**
                     * 设置分片存储大小，单位 GB
                     * @param _shardStorage 分片存储大小，单位 GB
                     * 
                     */
                    void SetShardStorage(const int64_t& _shardStorage);

                    /**
                     * 判断参数 ShardStorage 是否已赋值
                     * @return ShardStorage 是否已赋值
                     * 
                     */
                    bool ShardStorageHasBeenSet() const;

                private:

                    /**
                     * 分片ID数组
                     */
                    std::vector<std::string> m_shardInstanceIds;
                    bool m_shardInstanceIdsHasBeenSet;

                    /**
                     * 数据切分比例，固定50%
                     */
                    int64_t m_splitRate;
                    bool m_splitRateHasBeenSet;

                    /**
                     * 分片内存大小，单位 GB
                     */
                    int64_t m_shardMemory;
                    bool m_shardMemoryHasBeenSet;

                    /**
                     * 分片存储大小，单位 GB
                     */
                    int64_t m_shardStorage;
                    bool m_shardStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_SPLITSHARDCONFIG_H_
