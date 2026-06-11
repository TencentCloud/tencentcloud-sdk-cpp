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
                     * 获取<p>实例ID。</p>
                     * @return InstanceId <p>实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID。</p>
                     * @param _instanceId <p>实例ID。</p>
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
                     * 获取<p>实例自定义名称。</p>
                     * @return Name <p>实例自定义名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>实例自定义名称。</p>
                     * @param _name <p>实例自定义名称。</p>
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
                     * 获取<p>用户APPID。</p>
                     * @return AppId <p>用户APPID。</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>用户APPID。</p>
                     * @param _appId <p>用户APPID。</p>
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
                     * 获取<p>地域。</p>
                     * @return Region <p>地域。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域。</p>
                     * @param _region <p>地域。</p>
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
                     * 获取<p>可用区。</p>
                     * @return Zone <p>可用区。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区。</p>
                     * @param _zone <p>可用区。</p>
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
                     * 获取<p>产品。</p>
                     * @return Product <p>产品。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>产品。</p>
                     * @param _product <p>产品。</p>
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
                     * 获取<p>网络信息。</p>
                     * @return Networks <p>网络信息。</p>
                     * 
                     */
                    std::vector<Network> GetNetworks() const;

                    /**
                     * 设置<p>网络信息。</p>
                     * @param _networks <p>网络信息。</p>
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
                     * 获取<p>分片信息。</p>
                     * @return ShardNum <p>分片信息。</p>
                     * 
                     */
                    uint64_t GetShardNum() const;

                    /**
                     * 设置<p>分片信息。</p>
                     * @param _shardNum <p>分片信息。</p>
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
                     * 获取<p>副本数。</p>
                     * @return ReplicaNum <p>副本数。</p>
                     * 
                     */
                    uint64_t GetReplicaNum() const;

                    /**
                     * 设置<p>副本数。</p>
                     * @param _replicaNum <p>副本数。</p>
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
                     * 获取<p>CPU.</p>
                     * @return Cpu <p>CPU.</p>
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置<p>CPU.</p>
                     * @param _cpu <p>CPU.</p>
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
                     * 获取<p>内存。</p>
                     * @return Memory <p>内存。</p>
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置<p>内存。</p>
                     * @param _memory <p>内存。</p>
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
                     * 获取<p>磁盘。</p>
                     * @return Disk <p>磁盘。</p>
                     * 
                     */
                    uint64_t GetDisk() const;

                    /**
                     * 设置<p>磁盘。</p>
                     * @param _disk <p>磁盘。</p>
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
                     * 获取<p>健康得分。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthScore <p>健康得分。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    double GetHealthScore() const;

                    /**
                     * 设置<p>健康得分。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthScore <p>健康得分。</p>
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
                     * 获取<p>异常告警。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Warning <p>异常告警。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetWarning() const;

                    /**
                     * 设置<p>异常告警。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warning <p>异常告警。</p>
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
                     * 获取<p>所属项目。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Project <p>所属项目。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetProject() const;

                    /**
                     * 设置<p>所属项目。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _project <p>所属项目。</p>
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
                     * 获取<p>所属标签。</p>
                     * @return ResourceTags <p>所属标签。</p>
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置<p>所属标签。</p>
                     * @param _resourceTags <p>所属标签。</p>
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
                     * 获取<p>创建时间。</p>
                     * @return CreatedAt <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createdAt <p>创建时间。</p>
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
                     * 获取<p>资源状态。</p>
                     * @return Status <p>资源状态。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>资源状态。</p>
                     * @param _status <p>资源状态。</p>
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
                     * 获取<p>引擎名称。</p>
                     * @return EngineName <p>引擎名称。</p>
                     * 
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置<p>引擎名称。</p>
                     * @param _engineName <p>引擎名称。</p>
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
                     * 获取<p>引擎版本。</p>
                     * @return EngineVersion <p>引擎版本。</p>
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>引擎版本。</p>
                     * @param _engineVersion <p>引擎版本。</p>
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
                     * 获取<p>api版本</p>
                     * @return ApiVersion <p>api版本</p>
                     * 
                     */
                    std::string GetApiVersion() const;

                    /**
                     * 设置<p>api版本</p>
                     * @param _apiVersion <p>api版本</p>
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
                     * 获取<p>计费模式。</p>
                     * @return PayMode <p>计费模式。</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>计费模式。</p>
                     * @param _payMode <p>计费模式。</p>
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
                     * 获取<p>差异化扩展信息, json格式。</p>
                     * @return Extend <p>差异化扩展信息, json格式。</p>
                     * 
                     */
                    std::string GetExtend() const;

                    /**
                     * 设置<p>差异化扩展信息, json格式。</p>
                     * @param _extend <p>差异化扩展信息, json格式。</p>
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
                     * 获取<p>过期时间。</p>
                     * @return ExpiredAt <p>过期时间。</p>
                     * 
                     */
                    std::string GetExpiredAt() const;

                    /**
                     * 设置<p>过期时间。</p>
                     * @param _expiredAt <p>过期时间。</p>
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
                     * 获取<p>是否不过期(永久)。</p>
                     * @return IsNoExpired <p>是否不过期(永久)。</p>
                     * 
                     */
                    bool GetIsNoExpired() const;

                    /**
                     * 设置<p>是否不过期(永久)。</p>
                     * @param _isNoExpired <p>是否不过期(永久)。</p>
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
                     * 获取<p>产品版本，0-标准版，1-容量增强版</p>
                     * @return ProductType <p>产品版本，0-标准版，1-容量增强版</p>
                     * 
                     */
                    int64_t GetProductType() const;

                    /**
                     * 设置<p>产品版本，0-标准版，1-容量增强版</p>
                     * @param _productType <p>产品版本，0-标准版，1-容量增强版</p>
                     * 
                     */
                    void SetProductType(const int64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例类型</p>
                     * @return InstanceType <p>实例类型</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型</p>
                     * @param _instanceType <p>实例类型</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>节点类型</p>
                     * @return NodeType <p>节点类型</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>节点类型</p>
                     * @param _nodeType <p>节点类型</p>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>外网地址。</p>
                     * @return WanAddress <p>外网地址。</p>
                     * 
                     */
                    std::string GetWanAddress() const;

                    /**
                     * 设置<p>外网地址。</p>
                     * @param _wanAddress <p>外网地址。</p>
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
                     * 获取<p>隔离时间</p>
                     * @return IsolateAt <p>隔离时间</p>
                     * 
                     */
                    std::string GetIsolateAt() const;

                    /**
                     * 设置<p>隔离时间</p>
                     * @param _isolateAt <p>隔离时间</p>
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
                     * 获取<p>是否自动续费。0: 不自动续费(可以支持特权不停服)；1:自动续费；2:到期不续费.</p>
                     * @return AutoRenew <p>是否自动续费。0: 不自动续费(可以支持特权不停服)；1:自动续费；2:到期不续费.</p>
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置<p>是否自动续费。0: 不自动续费(可以支持特权不停服)；1:自动续费；2:到期不续费.</p>
                     * @param _autoRenew <p>是否自动续费。0: 不自动续费(可以支持特权不停服)；1:自动续费；2:到期不续费.</p>
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
                     * 获取<p>任务状态：0-无任务；1-待执行任务；2-密钥更新中；3-网络变更中；4-参数变更中；5-embedding变更中；6-ai套件变更中；7-滚动升级中；8-纵向扩容中；9-纵向缩容中；10-横向扩容中；11-横向缩容中</p>
                     * @return TaskStatus <p>任务状态：0-无任务；1-待执行任务；2-密钥更新中；3-网络变更中；4-参数变更中；5-embedding变更中；6-ai套件变更中；7-滚动升级中；8-纵向扩容中；9-纵向缩容中；10-横向扩容中；11-横向缩容中</p>
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置<p>任务状态：0-无任务；1-待执行任务；2-密钥更新中；3-网络变更中；4-参数变更中；5-embedding变更中；6-ai套件变更中；7-滚动升级中；8-纵向扩容中；9-纵向缩容中；10-横向扩容中；11-横向缩容中</p>
                     * @param _taskStatus <p>任务状态：0-无任务；1-待执行任务；2-密钥更新中；3-网络变更中；4-参数变更中；5-embedding变更中；6-ai套件变更中；7-滚动升级中；8-纵向扩容中；9-纵向缩容中；10-横向扩容中；11-横向缩容中</p>
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>绑定的安全组id</p>
                     * @return SecurityGroupIds <p>绑定的安全组id</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>绑定的安全组id</p>
                     * @param _securityGroupIds <p>绑定的安全组id</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>可升级版本号</p>
                     * @return UpgradeVersion <p>可升级版本号</p>
                     * 
                     */
                    std::string GetUpgradeVersion() const;

                    /**
                     * 设置<p>可升级版本号</p>
                     * @param _upgradeVersion <p>可升级版本号</p>
                     * 
                     */
                    void SetUpgradeVersion(const std::string& _upgradeVersion);

                    /**
                     * 判断参数 UpgradeVersion 是否已赋值
                     * @return UpgradeVersion 是否已赋值
                     * 
                     */
                    bool UpgradeVersionHasBeenSet() const;

                    /**
                     * 获取<p>是否为内部实例</p>
                     * @return IsInternal <p>是否为内部实例</p>
                     * 
                     */
                    bool GetIsInternal() const;

                    /**
                     * 设置<p>是否为内部实例</p>
                     * @param _isInternal <p>是否为内部实例</p>
                     * 
                     */
                    void SetIsInternal(const bool& _isInternal);

                    /**
                     * 判断参数 IsInternal 是否已赋值
                     * @return IsInternal 是否已赋值
                     * 
                     */
                    bool IsInternalHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例自定义名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>用户APPID。</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>地域。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>可用区。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>产品。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>网络信息。</p>
                     */
                    std::vector<Network> m_networks;
                    bool m_networksHasBeenSet;

                    /**
                     * <p>分片信息。</p>
                     */
                    uint64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * <p>副本数。</p>
                     */
                    uint64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * <p>CPU.</p>
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存。</p>
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>磁盘。</p>
                     */
                    uint64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * <p>健康得分。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_healthScore;
                    bool m_healthScoreHasBeenSet;

                    /**
                     * <p>异常告警。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_warning;
                    bool m_warningHasBeenSet;

                    /**
                     * <p>所属项目。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * <p>所属标签。</p>
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>资源状态。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>引擎名称。</p>
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * <p>引擎版本。</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>api版本</p>
                     */
                    std::string m_apiVersion;
                    bool m_apiVersionHasBeenSet;

                    /**
                     * <p>计费模式。</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>差异化扩展信息, json格式。</p>
                     */
                    std::string m_extend;
                    bool m_extendHasBeenSet;

                    /**
                     * <p>过期时间。</p>
                     */
                    std::string m_expiredAt;
                    bool m_expiredAtHasBeenSet;

                    /**
                     * <p>是否不过期(永久)。</p>
                     */
                    bool m_isNoExpired;
                    bool m_isNoExpiredHasBeenSet;

                    /**
                     * <p>产品版本，0-标准版，1-容量增强版</p>
                     */
                    int64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * <p>实例类型</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>节点类型</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>外网地址。</p>
                     */
                    std::string m_wanAddress;
                    bool m_wanAddressHasBeenSet;

                    /**
                     * <p>隔离时间</p>
                     */
                    std::string m_isolateAt;
                    bool m_isolateAtHasBeenSet;

                    /**
                     * <p>是否自动续费。0: 不自动续费(可以支持特权不停服)；1:自动续费；2:到期不续费.</p>
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>任务状态：0-无任务；1-待执行任务；2-密钥更新中；3-网络变更中；4-参数变更中；5-embedding变更中；6-ai套件变更中；7-滚动升级中；8-纵向扩容中；9-纵向缩容中；10-横向扩容中；11-横向缩容中</p>
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>绑定的安全组id</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>可升级版本号</p>
                     */
                    std::string m_upgradeVersion;
                    bool m_upgradeVersionHasBeenSet;

                    /**
                     * <p>是否为内部实例</p>
                     */
                    bool m_isInternal;
                    bool m_isInternalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_INSTANCEINFO_H_
