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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCECLUSTERSHARD_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCECLUSTERSHARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 实例分片列表信息
                */
                class InstanceClusterShard : public AbstractModel
                {
                public:
                    InstanceClusterShard();
                    ~InstanceClusterShard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分片节点名称
                     * @return ShardName 分片节点名称
                     */
                    std::string GetShardName() const;

                    /**
                     * 设置分片节点名称
                     * @param ShardName 分片节点名称
                     */
                    void SetShardName(const std::string& _shardName);

                    /**
                     * 判断参数 ShardName 是否已赋值
                     * @return ShardName 是否已赋值
                     */
                    bool ShardNameHasBeenSet() const;

                    /**
                     * 获取分片节点Id
                     * @return ShardId 分片节点Id
                     */
                    std::string GetShardId() const;

                    /**
                     * 设置分片节点Id
                     * @param ShardId 分片节点Id
                     */
                    void SetShardId(const std::string& _shardId);

                    /**
                     * 判断参数 ShardId 是否已赋值
                     * @return ShardId 是否已赋值
                     */
                    bool ShardIdHasBeenSet() const;

                    /**
                     * 获取角色
                     * @return Role 角色
                     */
                    int64_t GetRole() const;

                    /**
                     * 设置角色
                     * @param Role 角色
                     */
                    void SetRole(const int64_t& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Key数量
                     * @return Keys Key数量
                     */
                    int64_t GetKeys() const;

                    /**
                     * 设置Key数量
                     * @param Keys Key数量
                     */
                    void SetKeys(const int64_t& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取slot信息
                     * @return Slots slot信息
                     */
                    std::string GetSlots() const;

                    /**
                     * 设置slot信息
                     * @param Slots slot信息
                     */
                    void SetSlots(const std::string& _slots);

                    /**
                     * 判断参数 Slots 是否已赋值
                     * @return Slots 是否已赋值
                     */
                    bool SlotsHasBeenSet() const;

                    /**
                     * 获取使用容量
                     * @return Storage 使用容量
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置使用容量
                     * @param Storage 使用容量
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取容量倾斜率
                     * @return StorageSlope 容量倾斜率
                     */
                    double GetStorageSlope() const;

                    /**
                     * 设置容量倾斜率
                     * @param StorageSlope 容量倾斜率
                     */
                    void SetStorageSlope(const double& _storageSlope);

                    /**
                     * 判断参数 StorageSlope 是否已赋值
                     * @return StorageSlope 是否已赋值
                     */
                    bool StorageSlopeHasBeenSet() const;

                    /**
                     * 获取实例运行时节点Id
                     * @return Runid 实例运行时节点Id
                     */
                    std::string GetRunid() const;

                    /**
                     * 设置实例运行时节点Id
                     * @param Runid 实例运行时节点Id
                     */
                    void SetRunid(const std::string& _runid);

                    /**
                     * 判断参数 Runid 是否已赋值
                     * @return Runid 是否已赋值
                     */
                    bool RunidHasBeenSet() const;

                    /**
                     * 获取服务状态：0-down；1-on
                     * @return Connected 服务状态：0-down；1-on
                     */
                    int64_t GetConnected() const;

                    /**
                     * 设置服务状态：0-down；1-on
                     * @param Connected 服务状态：0-down；1-on
                     */
                    void SetConnected(const int64_t& _connected);

                    /**
                     * 判断参数 Connected 是否已赋值
                     * @return Connected 是否已赋值
                     */
                    bool ConnectedHasBeenSet() const;

                private:

                    /**
                     * 分片节点名称
                     */
                    std::string m_shardName;
                    bool m_shardNameHasBeenSet;

                    /**
                     * 分片节点Id
                     */
                    std::string m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * 角色
                     */
                    int64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Key数量
                     */
                    int64_t m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * slot信息
                     */
                    std::string m_slots;
                    bool m_slotsHasBeenSet;

                    /**
                     * 使用容量
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 容量倾斜率
                     */
                    double m_storageSlope;
                    bool m_storageSlopeHasBeenSet;

                    /**
                     * 实例运行时节点Id
                     */
                    std::string m_runid;
                    bool m_runidHasBeenSet;

                    /**
                     * 服务状态：0-down；1-on
                     */
                    int64_t m_connected;
                    bool m_connectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCECLUSTERSHARD_H_
