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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例ID。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 实例自定义名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例自定义名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 实例自定义名称。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 用户APPID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户APPID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 用户APPID。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone 可用区。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Product 产品。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置产品。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _product 产品。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Networks 网络信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Network> GetNetworks() const;

                    /**
                     * 设置网络信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networks 网络信息。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShardNum 分片信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetShardNum() const;

                    /**
                     * 设置分片信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shardNum 分片信息。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicaNum 副本数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReplicaNum() const;

                    /**
                     * 设置副本数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicaNum 副本数。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu CPU.
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置CPU.
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu CPU.
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 内存。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置内存。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory 内存。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Disk 磁盘。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDisk() const;

                    /**
                     * 设置磁盘。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _disk 磁盘。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 
                     */
                    double GetHealthScore() const;

                    /**
                     * 设置健康得分。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthScore 健康得分。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthScore(const double& _healthScore);

                    /**
                     * 判断参数 HealthScore 是否已赋值
                     * @return HealthScore 是否已赋值
                     * 
                     */
                    bool HealthScoreHasBeenSet() const;

                    /**
                     * 获取异常告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Warning 异常告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWarning() const;

                    /**
                     * 设置异常告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warning 异常告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarning(const int64_t& _warning);

                    /**
                     * 判断参数 Warning 是否已赋值
                     * @return Warning 是否已赋值
                     * 
                     */
                    bool WarningHasBeenSet() const;

                    /**
                     * 获取所属项目。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Project 所属项目。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProject() const;

                    /**
                     * 设置所属项目。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _project 所属项目。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProject(const std::string& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取所属标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceTags 所属标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置所属标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceTags 所属标签。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 资源状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置资源状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 资源状态。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineName 引擎名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置引擎名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineName 引擎名称。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineVersion 引擎版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置引擎版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineVersion 引擎版本。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取计费模式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode 计费模式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置计费模式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payMode 计费模式。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extend 差异化扩展信息, json格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtend() const;

                    /**
                     * 设置差异化扩展信息, json格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extend 差异化扩展信息, json格式。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredAt 过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpiredAt() const;

                    /**
                     * 设置过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expiredAt 过期时间。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNoExpired 是否不过期(永久)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsNoExpired() const;

                    /**
                     * 设置是否不过期(永久)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isNoExpired 是否不过期(永久)。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WanAddress 外网地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWanAddress() const;

                    /**
                     * 设置外网地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wanAddress 外网地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWanAddress(const std::string& _wanAddress);

                    /**
                     * 判断参数 WanAddress 是否已赋值
                     * @return WanAddress 是否已赋值
                     * 
                     */
                    bool WanAddressHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例自定义名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户APPID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 地域。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 产品。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 网络信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Network> m_networks;
                    bool m_networksHasBeenSet;

                    /**
                     * 分片信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * 副本数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * CPU.
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 磁盘。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 资源状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 引擎名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * 引擎版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 计费模式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 差异化扩展信息, json格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extend;
                    bool m_extendHasBeenSet;

                    /**
                     * 过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expiredAt;
                    bool m_expiredAtHasBeenSet;

                    /**
                     * 是否不过期(永久)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isNoExpired;
                    bool m_isNoExpiredHasBeenSet;

                    /**
                     * 外网地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wanAddress;
                    bool m_wanAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_INSTANCEINFO_H_
