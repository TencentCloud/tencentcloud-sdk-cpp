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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_ADDSHARDCONFIG_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_ADDSHARDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/DcnInsShardConfig.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * 升级实例 -- 新增分片类型
                */
                class AddShardConfig : public AbstractModel
                {
                public:
                    AddShardConfig();
                    ~AddShardConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>新增分片的数量</p>
                     * @return ShardCount <p>新增分片的数量</p>
                     * 
                     */
                    int64_t GetShardCount() const;

                    /**
                     * 设置<p>新增分片的数量</p>
                     * @param _shardCount <p>新增分片的数量</p>
                     * 
                     */
                    void SetShardCount(const int64_t& _shardCount);

                    /**
                     * 判断参数 ShardCount 是否已赋值
                     * @return ShardCount 是否已赋值
                     * 
                     */
                    bool ShardCountHasBeenSet() const;

                    /**
                     * 获取<p>分片内存大小，单位 GB</p>
                     * @return ShardMemory <p>分片内存大小，单位 GB</p>
                     * 
                     */
                    int64_t GetShardMemory() const;

                    /**
                     * 设置<p>分片内存大小，单位 GB</p>
                     * @param _shardMemory <p>分片内存大小，单位 GB</p>
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
                     * 获取<p>分片存储大小，单位 GB</p>
                     * @return ShardStorage <p>分片存储大小，单位 GB</p>
                     * 
                     */
                    int64_t GetShardStorage() const;

                    /**
                     * 设置<p>分片存储大小，单位 GB</p>
                     * @param _shardStorage <p>分片存储大小，单位 GB</p>
                     * 
                     */
                    void SetShardStorage(const int64_t& _shardStorage);

                    /**
                     * 判断参数 ShardStorage 是否已赋值
                     * @return ShardStorage 是否已赋值
                     * 
                     */
                    bool ShardStorageHasBeenSet() const;

                    /**
                     * 获取<p>DCN实例的规格</p>
                     * @return DcnInsShardConfigs <p>DCN实例的规格</p>
                     * 
                     */
                    std::vector<DcnInsShardConfig> GetDcnInsShardConfigs() const;

                    /**
                     * 设置<p>DCN实例的规格</p>
                     * @param _dcnInsShardConfigs <p>DCN实例的规格</p>
                     * 
                     */
                    void SetDcnInsShardConfigs(const std::vector<DcnInsShardConfig>& _dcnInsShardConfigs);

                    /**
                     * 判断参数 DcnInsShardConfigs 是否已赋值
                     * @return DcnInsShardConfigs 是否已赋值
                     * 
                     */
                    bool DcnInsShardConfigsHasBeenSet() const;

                private:

                    /**
                     * <p>新增分片的数量</p>
                     */
                    int64_t m_shardCount;
                    bool m_shardCountHasBeenSet;

                    /**
                     * <p>分片内存大小，单位 GB</p>
                     */
                    int64_t m_shardMemory;
                    bool m_shardMemoryHasBeenSet;

                    /**
                     * <p>分片存储大小，单位 GB</p>
                     */
                    int64_t m_shardStorage;
                    bool m_shardStorageHasBeenSet;

                    /**
                     * <p>DCN实例的规格</p>
                     */
                    std::vector<DcnInsShardConfig> m_dcnInsShardConfigs;
                    bool m_dcnInsShardConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_ADDSHARDCONFIG_H_
