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

#ifndef TENCENTCLOUD_VDB_V20230616_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_VDB_V20230616_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vdb/v20230616/model/Network.h>
#include <tencentcloud/vdb/v20230616/model/Tag.h>


namespace TencentCloud
{
    namespace Vdb
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 实例信息，用于实例列表
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例自定义名称。
                     * @return Name 实例自定义名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例自定义名称。
                     * @param _name 实例自定义名称。
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
                     * 获取用户APPID。
                     * @return AppId 用户APPID。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户APPID。
                     * @param _appId 用户APPID。
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取地域。
                     * @return Region 地域。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域。
                     * @param _region 地域。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取可用区。
                     * @return Zone 可用区。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区。
                     * @param _zone 可用区。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取产品。
                     * @return Product 产品。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置产品。
                     * @param _product 产品。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取网络信息。
                     * @return Networks 网络信息。
                     * 
                     */
                    std::vector<Network> GetNetworks() const;

                    /**
                     * 设置网络信息。
                     * @param _networks 网络信息。
                     * 
                     */
                    void SetNetworks(const std::vector<Network>& _networks);

                    /**
                     * 判断参数 Networks 是否已赋值
                     * @return Networks 是否已赋值
                     * 
                     */
                    bool NetworksHasBeenSet() const;

                    /**
                     * 获取分片信息。
                     * @return ShardNum 分片信息。
                     * 
                     */
                    uint64_t GetShardNum() const;

                    /**
                     * 设置分片信息。
                     * @param _shardNum 分片信息。
                     * 
                     */
                    void SetShardNum(const uint64_t& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取副本数。
                     * @return ReplicaNum 副本数。
                     * 
                     */
                    uint64_t GetReplicaNum() const;

                    /**
                     * 设置副本数。
                     * @param _replicaNum 副本数。
                     * 
                     */
                    void SetReplicaNum(const uint64_t& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     * 
                     */
                    bool ReplicaNumHasBeenSet() const;

                    /**
                     * 获取CPU.
                     * @return Cpu CPU.
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置CPU.
                     * @param _cpu CPU.
                     * 
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存。
                     * @return Memory 内存。
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置内存。
                     * @param _memory 内存。
                     * 
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取磁盘。
                     * @return Disk 磁盘。
                     * 
                     */
                    uint64_t GetDisk() const;

                    /**
                     * 设置磁盘。
                     * @param _disk 磁盘。
                     * 
                     */
                    void SetDisk(const uint64_t& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取健康得分。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthScore 健康得分。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    double GetHealthScore() const;

                    /**
                     * 设置健康得分。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthScore 健康得分。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetHealthScore(const double& _healthScore);

                    /**
                     * 判断参数 HealthScore 是否已赋值
                     * @return HealthScore 是否已赋值
                     * @deprecated
                     */
                    bool HealthScoreHasBeenSet() const;

                    /**
                     * 获取异常告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Warning 异常告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetWarning() const;

                    /**
                     * 设置异常告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warning 异常告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetWarning(const int64_t& _warning);

                    /**
                     * 判断参数 Warning 是否已赋值
                     * @return Warning 是否已赋值
                     * @deprecated
                     */
                    bool WarningHasBeenSet() const;

                    /**
                     * 获取所属项目。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Project 所属项目。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetProject() const;

                    /**
                     * 设置所属项目。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _project 所属项目。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetProject(const std::string& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * @deprecated
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取所属标签。
                     * @return ResourceTags 所属标签。
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置所属标签。
                     * @param _resourceTags 所属标签。
                     * 
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedAt 创建时间。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间。
                     * @param _createdAt 创建时间。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取资源状态。
                     * @return Status 资源状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置资源状态。
                     * @param _status 资源状态。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取引擎名称。
                     * @return EngineName 引擎名称。
                     * 
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置引擎名称。
                     * @param _engineName 引擎名称。
                     * 
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     * 
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取引擎版本。
                     * @return EngineVersion 引擎版本。
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置引擎版本。
                     * @param _engineVersion 引擎版本。
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取api版本
                     * @return ApiVersion api版本
                     * 
                     */
                    std::string GetApiVersion() const;

                    /**
                     * 设置api版本
                     * @param _apiVersion api版本
                     * 
                     */
                    void SetApiVersion(const std::string& _apiVersion);

                    /**
                     * 判断参数 ApiVersion 是否已赋值
                     * @return ApiVersion 是否已赋值
                     * 
                     */
                    bool ApiVersionHasBeenSet() const;

                    /**
                     * 获取计费模式。
                     * @return PayMode 计费模式。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置计费模式。
                     * @param _payMode 计费模式。
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取差异化扩展信息, json格式。
                     * @return Extend 差异化扩展信息, json格式。
                     * 
                     */
                    std::string GetExtend() const;

                    /**
                     * 设置差异化扩展信息, json格式。
                     * @param _extend 差异化扩展信息, json格式。
                     * 
                     */
                    void SetExtend(const std::string& _extend);

                    /**
                     * 判断参数 Extend 是否已赋值
                     * @return Extend 是否已赋值
                     * 
                     */
                    bool ExtendHasBeenSet() const;

                    /**
                     * 获取过期时间。
                     * @return ExpiredAt 过期时间。
                     * 
                     */
                    std::string GetExpiredAt() const;

                    /**
                     * 设置过期时间。
                     * @param _expiredAt 过期时间。
                     * 
                     */
                    void SetExpiredAt(const std::string& _expiredAt);

                    /**
                     * 判断参数 ExpiredAt 是否已赋值
                     * @return ExpiredAt 是否已赋值
                     * 
                     */
                    bool ExpiredAtHasBeenSet() const;

                    /**
                     * 获取是否不过期(永久)。
                     * @return IsNoExpired 是否不过期(永久)。
                     * 
                     */
                    bool GetIsNoExpired() const;

                    /**
                     * 设置是否不过期(永久)。
                     * @param _isNoExpired 是否不过期(永久)。
                     * 
                     */
                    void SetIsNoExpired(const bool& _isNoExpired);

                    /**
                     * 判断参数 IsNoExpired 是否已赋值
                     * @return IsNoExpired 是否已赋值
                     * 
                     */
                    bool IsNoExpiredHasBeenSet() const;

                    /**
                     * 获取外网地址。
                     * @return WanAddress 外网地址。
                     * 
                     */
                    std::string GetWanAddress() const;

                    /**
                     * 设置外网地址。
                     * @param _wanAddress 外网地址。
                     * 
                     */
                    void SetWanAddress(const std::string& _wanAddress);

                    /**
                     * 判断参数 WanAddress 是否已赋值
                     * @return WanAddress 是否已赋值
                     * 
                     */
                    bool WanAddressHasBeenSet() const;

                    /**
                     * 获取隔离时间
                     * @return IsolateAt 隔离时间
                     * 
                     */
                    std::string GetIsolateAt() const;

                    /**
                     * 设置隔离时间
                     * @param _isolateAt 隔离时间
                     * 
                     */
                    void SetIsolateAt(const std::string& _isolateAt);

                    /**
                     * 判断参数 IsolateAt 是否已赋值
                     * @return IsolateAt 是否已赋值
                     * 
                     */
                    bool IsolateAtHasBeenSet() const;

                    /**
                     * 获取是否自动续费。0: 不自动续费(可以支持特权不停服)；1:自动续费；2:到期不续费.
                     * @return AutoRenew 是否自动续费。0: 不自动续费(可以支持特权不停服)；1:自动续费；2:到期不续费.
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置是否自动续费。0: 不自动续费(可以支持特权不停服)；1:自动续费；2:到期不续费.
                     * @param _autoRenew 是否自动续费。0: 不自动续费(可以支持特权不停服)；1:自动续费；2:到期不续费.
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取任务状态：0-无任务；1-待执行任务；2-密钥更新中；3-网络变更中；4-参数变更中；5-embedding变更中；6-ai套件变更中；7-滚动升级中；8-纵向扩容中；9-纵向缩容中；10-横向扩容中；11-横向缩容中
                     * @return TaskStatus 任务状态：0-无任务；1-待执行任务；2-密钥更新中；3-网络变更中；4-参数变更中；5-embedding变更中；6-ai套件变更中；7-滚动升级中；8-纵向扩容中；9-纵向缩容中；10-横向扩容中；11-横向缩容中
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置任务状态：0-无任务；1-待执行任务；2-密钥更新中；3-网络变更中；4-参数变更中；5-embedding变更中；6-ai套件变更中；7-滚动升级中；8-纵向扩容中；9-纵向缩容中；10-横向扩容中；11-横向缩容中
                     * @param _taskStatus 任务状态：0-无任务；1-待执行任务；2-密钥更新中；3-网络变更中；4-参数变更中；5-embedding变更中；6-ai套件变更中；7-滚动升级中；8-纵向扩容中；9-纵向缩容中；10-横向扩容中；11-横向缩容中
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例自定义名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户APPID。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 地域。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 产品。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 网络信息。
                     */
                    std::vector<Network> m_networks;
                    bool m_networksHasBeenSet;

                    /**
                     * 分片信息。
                     */
                    uint64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * 副本数。
                     */
                    uint64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * CPU.
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存。
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 磁盘。
                     */
                    uint64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * 健康得分。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_healthScore;
                    bool m_healthScoreHasBeenSet;

                    /**
                     * 异常告警。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_warning;
                    bool m_warningHasBeenSet;

                    /**
                     * 所属项目。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * 所属标签。
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 资源状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 引擎名称。
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * 引擎版本。
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * api版本
                     */
                    std::string m_apiVersion;
                    bool m_apiVersionHasBeenSet;

                    /**
                     * 计费模式。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 差异化扩展信息, json格式。
                     */
                    std::string m_extend;
                    bool m_extendHasBeenSet;

                    /**
                     * 过期时间。
                     */
                    std::string m_expiredAt;
                    bool m_expiredAtHasBeenSet;

                    /**
                     * 是否不过期(永久)。
                     */
                    bool m_isNoExpired;
                    bool m_isNoExpiredHasBeenSet;

                    /**
                     * 外网地址。
                     */
                    std::string m_wanAddress;
                    bool m_wanAddressHasBeenSet;

                    /**
                     * 隔离时间
                     */
                    std::string m_isolateAt;
                    bool m_isolateAtHasBeenSet;

                    /**
                     * 是否自动续费。0: 不自动续费(可以支持特权不停服)；1:自动续费；2:到期不续费.
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 任务状态：0-无任务；1-待执行任务；2-密钥更新中；3-网络变更中；4-参数变更中；5-embedding变更中；6-ai套件变更中；7-滚动升级中；8-纵向扩容中；9-纵向缩容中；10-横向扩容中；11-横向缩容中
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_INSTANCEINFO_H_
