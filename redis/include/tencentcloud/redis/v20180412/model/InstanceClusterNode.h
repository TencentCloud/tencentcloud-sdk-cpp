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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCECLUSTERNODE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCECLUSTERNODE_H_

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
                * 实例节点类型
                */
                class InstanceClusterNode : public AbstractModel
                {
                public:
                    InstanceClusterNode();
                    ~InstanceClusterNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点组名称。
                     * @return Name 节点组名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点组名称。
                     * @param _name 节点组名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取实例运行时节点 ID。
                     * @return RunId 实例运行时节点 ID。
                     * 
                     */
                    std::string GetRunId() const;

                    /**
                     * 设置实例运行时节点 ID。
                     * @param _runId 实例运行时节点 ID。
                     * 
                     */
                    void SetRunId(const std::string& _runId);

                    /**
                     * 判断参数 RunId 是否已赋值
                     * @return RunId 是否已赋值
                     * 
                     */
                    bool RunIdHasBeenSet() const;

                    /**
                     * 获取集群角色。
- 0：master。
- 1：slave。
                     * @return Role 集群角色。
- 0：master。
- 1：slave。
                     * 
                     */
                    int64_t GetRole() const;

                    /**
                     * 设置集群角色。
- 0：master。
- 1：slave。
                     * @param _role 集群角色。
- 0：master。
- 1：slave。
                     * 
                     */
                    void SetRole(const int64_t& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取节点状态。
- 0：readwrite,。
- 1：read。
- 2：backup。
                     * @return Status 节点状态。
- 0：readwrite,。
- 1：read。
- 2：backup。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置节点状态。
- 0：readwrite,。
- 1：read。
- 2：backup。
                     * @param _status 节点状态。
- 0：readwrite,。
- 1：read。
- 2：backup。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取服务状态。
0-down。
1-on
                     * @return Connected 服务状态。
0-down。
1-on
                     * 
                     */
                    int64_t GetConnected() const;

                    /**
                     * 设置服务状态。
0-down。
1-on
                     * @param _connected 服务状态。
0-down。
1-on
                     * 
                     */
                    void SetConnected(const int64_t& _connected);

                    /**
                     * 判断参数 Connected 是否已赋值
                     * @return Connected 是否已赋值
                     * 
                     */
                    bool ConnectedHasBeenSet() const;

                    /**
                     * 获取节点创建时间。
                     * @return CreateTime 节点创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置节点创建时间。
                     * @param _createTime 节点创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取节点下线时间。
                     * @return DownTime 节点下线时间。
                     * 
                     */
                    std::string GetDownTime() const;

                    /**
                     * 设置节点下线时间。
                     * @param _downTime 节点下线时间。
                     * 
                     */
                    void SetDownTime(const std::string& _downTime);

                    /**
                     * 判断参数 DownTime 是否已赋值
                     * @return DownTime 是否已赋值
                     * 
                     */
                    bool DownTimeHasBeenSet() const;

                    /**
                     * 获取节点 Slot 分布区间。
                     * @return Slots 节点 Slot 分布区间。
                     * 
                     */
                    std::string GetSlots() const;

                    /**
                     * 设置节点 Slot 分布区间。
                     * @param _slots 节点 Slot 分布区间。
                     * 
                     */
                    void SetSlots(const std::string& _slots);

                    /**
                     * 判断参数 Slots 是否已赋值
                     * @return Slots 是否已赋值
                     * 
                     */
                    bool SlotsHasBeenSet() const;

                    /**
                     * 获取节点 Key分布。
                     * @return Keys 节点 Key分布。
                     * 
                     */
                    int64_t GetKeys() const;

                    /**
                     * 设置节点 Key分布。
                     * @param _keys 节点 Key分布。
                     * 
                     */
                    void SetKeys(const int64_t& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取节点 QPS。分片节点每秒执行次数。单位：次/秒。
                     * @return Qps 节点 QPS。分片节点每秒执行次数。单位：次/秒。
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置节点 QPS。分片节点每秒执行次数。单位：次/秒。
                     * @param _qps 节点 QPS。分片节点每秒执行次数。单位：次/秒。
                     * 
                     */
                    void SetQps(const int64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取节点 QPS 倾斜度。
                     * @return QpsSlope 节点 QPS 倾斜度。
                     * 
                     */
                    double GetQpsSlope() const;

                    /**
                     * 设置节点 QPS 倾斜度。
                     * @param _qpsSlope 节点 QPS 倾斜度。
                     * 
                     */
                    void SetQpsSlope(const double& _qpsSlope);

                    /**
                     * 判断参数 QpsSlope 是否已赋值
                     * @return QpsSlope 是否已赋值
                     * 
                     */
                    bool QpsSlopeHasBeenSet() const;

                    /**
                     * 获取节点存储。
                     * @return Storage 节点存储。
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置节点存储。
                     * @param _storage 节点存储。
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取节点存储倾斜度。
                     * @return StorageSlope 节点存储倾斜度。
                     * 
                     */
                    double GetStorageSlope() const;

                    /**
                     * 设置节点存储倾斜度。
                     * @param _storageSlope 节点存储倾斜度。
                     * 
                     */
                    void SetStorageSlope(const double& _storageSlope);

                    /**
                     * 判断参数 StorageSlope 是否已赋值
                     * @return StorageSlope 是否已赋值
                     * 
                     */
                    bool StorageSlopeHasBeenSet() const;

                private:

                    /**
                     * 节点组名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实例运行时节点 ID。
                     */
                    std::string m_runId;
                    bool m_runIdHasBeenSet;

                    /**
                     * 集群角色。
- 0：master。
- 1：slave。
                     */
                    int64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 节点状态。
- 0：readwrite,。
- 1：read。
- 2：backup。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 服务状态。
0-down。
1-on
                     */
                    int64_t m_connected;
                    bool m_connectedHasBeenSet;

                    /**
                     * 节点创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 节点下线时间。
                     */
                    std::string m_downTime;
                    bool m_downTimeHasBeenSet;

                    /**
                     * 节点 Slot 分布区间。
                     */
                    std::string m_slots;
                    bool m_slotsHasBeenSet;

                    /**
                     * 节点 Key分布。
                     */
                    int64_t m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * 节点 QPS。分片节点每秒执行次数。单位：次/秒。
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 节点 QPS 倾斜度。
                     */
                    double m_qpsSlope;
                    bool m_qpsSlopeHasBeenSet;

                    /**
                     * 节点存储。
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 节点存储倾斜度。
                     */
                    double m_storageSlope;
                    bool m_storageSlopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCECLUSTERNODE_H_
