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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20191016/model/InstanceConfs.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * 查询实例列表，返回实例的相关信息的对象。
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
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例所属地域。
                     * @return Region 实例所属地域。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所属地域。
                     * @param _region 实例所属地域。
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
                     * 获取健康得分。
                     * @return HealthScore 健康得分。
                     * 
                     */
                    int64_t GetHealthScore() const;

                    /**
                     * 设置健康得分。
                     * @param _healthScore 健康得分。
                     * 
                     */
                    void SetHealthScore(const int64_t& _healthScore);

                    /**
                     * 判断参数 HealthScore 是否已赋值
                     * @return HealthScore 是否已赋值
                     * 
                     */
                    bool HealthScoreHasBeenSet() const;

                    /**
                     * 获取所属产品。
                     * @return Product 所属产品。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置所属产品。
                     * @param _product 所属产品。
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
                     * 获取异常事件数量。
                     * @return EventCount 异常事件数量。
                     * 
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置异常事件数量。
                     * @param _eventCount 异常事件数量。
                     * 
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取实例类型：1:MASTER；2:DR，3：RO，4:SDR。
                     * @return InstanceType 实例类型：1:MASTER；2:DR，3：RO，4:SDR。
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置实例类型：1:MASTER；2:DR，3：RO，4:SDR。
                     * @param _instanceType 实例类型：1:MASTER；2:DR，3：RO，4:SDR。
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取核心数。
                     * @return Cpu 核心数。
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置核心数。
                     * @param _cpu 核心数。
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存，单位MB。
                     * @return Memory 内存，单位MB。
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存，单位MB。
                     * @param _memory 内存，单位MB。
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取硬盘存储，单位GB。
                     * @return Volume 硬盘存储，单位GB。
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置硬盘存储，单位GB。
                     * @param _volume 硬盘存储，单位GB。
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取数据库版本。
                     * @return EngineVersion 数据库版本。
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置数据库版本。
                     * @param _engineVersion 数据库版本。
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
                     * 获取内网地址。
                     * @return Vip 内网地址。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置内网地址。
                     * @param _vip 内网地址。
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取内网端口。
                     * @return Vport 内网端口。
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置内网端口。
                     * @param _vport 内网端口。
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取接入来源。
                     * @return Source 接入来源。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置接入来源。
                     * @param _source 接入来源。
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取分组ID。
                     * @return GroupId 分组ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID。
                     * @param _groupId 分组ID。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取分组组名。
                     * @return GroupName 分组组名。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组组名。
                     * @param _groupName 分组组名。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取实例状态：0：发货中；1：运行正常；4：销毁中；5：隔离中。
                     * @return Status 实例状态：0：发货中；1：运行正常；4：销毁中；5：隔离中。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态：0：发货中；1：运行正常；4：销毁中；5：隔离中。
                     * @param _status 实例状态：0：发货中；1：运行正常；4：销毁中；5：隔离中。
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
                     * 获取子网统一ID。
                     * @return UniqSubnetId 子网统一ID。
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置子网统一ID。
                     * @param _uniqSubnetId 子网统一ID。
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取cdb类型。
                     * @return DeployMode cdb类型。
                     * 
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置cdb类型。
                     * @param _deployMode cdb类型。
                     * 
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取cdb实例初始化标志：0：未初始化；1：已初始化。
                     * @return InitFlag cdb实例初始化标志：0：未初始化；1：已初始化。
                     * 
                     */
                    int64_t GetInitFlag() const;

                    /**
                     * 设置cdb实例初始化标志：0：未初始化；1：已初始化。
                     * @param _initFlag cdb实例初始化标志：0：未初始化；1：已初始化。
                     * 
                     */
                    void SetInitFlag(const int64_t& _initFlag);

                    /**
                     * 判断参数 InitFlag 是否已赋值
                     * @return InitFlag 是否已赋值
                     * 
                     */
                    bool InitFlagHasBeenSet() const;

                    /**
                     * 获取任务状态。
                     * @return TaskStatus 任务状态。
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置任务状态。
                     * @param _taskStatus 任务状态。
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
                     * 获取私有网络统一ID。
                     * @return UniqVpcId 私有网络统一ID。
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置私有网络统一ID。
                     * @param _uniqVpcId 私有网络统一ID。
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取实例巡检/概览的状态。
                     * @return InstanceConf 实例巡检/概览的状态。
                     * 
                     */
                    InstanceConfs GetInstanceConf() const;

                    /**
                     * 设置实例巡检/概览的状态。
                     * @param _instanceConf 实例巡检/概览的状态。
                     * 
                     */
                    void SetInstanceConf(const InstanceConfs& _instanceConf);

                    /**
                     * 判断参数 InstanceConf 是否已赋值
                     * @return InstanceConf 是否已赋值
                     * 
                     */
                    bool InstanceConfHasBeenSet() const;

                    /**
                     * 获取资源到期时间。
                     * @return DeadlineTime 资源到期时间。
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置资源到期时间。
                     * @param _deadlineTime 资源到期时间。
                     * 
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     * 
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取是否是DBbrain支持的实例。
                     * @return IsSupported 是否是DBbrain支持的实例。
                     * 
                     */
                    bool GetIsSupported() const;

                    /**
                     * 设置是否是DBbrain支持的实例。
                     * @param _isSupported 是否是DBbrain支持的实例。
                     * 
                     */
                    void SetIsSupported(const bool& _isSupported);

                    /**
                     * 判断参数 IsSupported 是否已赋值
                     * @return IsSupported 是否已赋值
                     * 
                     */
                    bool IsSupportedHasBeenSet() const;

                    /**
                     * 获取实例安全审计日志开启状态：ON： 安全审计开启；OFF： 未开启安全审计。
                     * @return SecAuditStatus 实例安全审计日志开启状态：ON： 安全审计开启；OFF： 未开启安全审计。
                     * 
                     */
                    std::string GetSecAuditStatus() const;

                    /**
                     * 设置实例安全审计日志开启状态：ON： 安全审计开启；OFF： 未开启安全审计。
                     * @param _secAuditStatus 实例安全审计日志开启状态：ON： 安全审计开启；OFF： 未开启安全审计。
                     * 
                     */
                    void SetSecAuditStatus(const std::string& _secAuditStatus);

                    /**
                     * 判断参数 SecAuditStatus 是否已赋值
                     * @return SecAuditStatus 是否已赋值
                     * 
                     */
                    bool SecAuditStatusHasBeenSet() const;

                    /**
                     * 获取实例审计日志开启状态，ALL_AUDIT： 开启全审计；RULE_AUDIT： 开启规则审计；UNBOUND： 未开启审计。
                     * @return AuditPolicyStatus 实例审计日志开启状态，ALL_AUDIT： 开启全审计；RULE_AUDIT： 开启规则审计；UNBOUND： 未开启审计。
                     * 
                     */
                    std::string GetAuditPolicyStatus() const;

                    /**
                     * 设置实例审计日志开启状态，ALL_AUDIT： 开启全审计；RULE_AUDIT： 开启规则审计；UNBOUND： 未开启审计。
                     * @param _auditPolicyStatus 实例审计日志开启状态，ALL_AUDIT： 开启全审计；RULE_AUDIT： 开启规则审计；UNBOUND： 未开启审计。
                     * 
                     */
                    void SetAuditPolicyStatus(const std::string& _auditPolicyStatus);

                    /**
                     * 判断参数 AuditPolicyStatus 是否已赋值
                     * @return AuditPolicyStatus 是否已赋值
                     * 
                     */
                    bool AuditPolicyStatusHasBeenSet() const;

                    /**
                     * 获取实例审计日志运行状态：normal： 运行中； paused： 欠费暂停。
                     * @return AuditRunningStatus 实例审计日志运行状态：normal： 运行中； paused： 欠费暂停。
                     * 
                     */
                    std::string GetAuditRunningStatus() const;

                    /**
                     * 设置实例审计日志运行状态：normal： 运行中； paused： 欠费暂停。
                     * @param _auditRunningStatus 实例审计日志运行状态：normal： 运行中； paused： 欠费暂停。
                     * 
                     */
                    void SetAuditRunningStatus(const std::string& _auditRunningStatus);

                    /**
                     * 判断参数 AuditRunningStatus 是否已赋值
                     * @return AuditRunningStatus 是否已赋值
                     * 
                     */
                    bool AuditRunningStatusHasBeenSet() const;

                    /**
                     * 获取内网vip。
                     * @return InternalVip 内网vip。
                     * 
                     */
                    std::string GetInternalVip() const;

                    /**
                     * 设置内网vip。
                     * @param _internalVip 内网vip。
                     * 
                     */
                    void SetInternalVip(const std::string& _internalVip);

                    /**
                     * 判断参数 InternalVip 是否已赋值
                     * @return InternalVip 是否已赋值
                     * 
                     */
                    bool InternalVipHasBeenSet() const;

                    /**
                     * 获取内网port。
                     * @return InternalVport 内网port。
                     * 
                     */
                    int64_t GetInternalVport() const;

                    /**
                     * 设置内网port。
                     * @param _internalVport 内网port。
                     * 
                     */
                    void SetInternalVport(const int64_t& _internalVport);

                    /**
                     * 判断参数 InternalVport 是否已赋值
                     * @return InternalVport 是否已赋值
                     * 
                     */
                    bool InternalVportHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取所属集群ID（仅对集群数据库产品该字段非空，如TDSQL-C）。
                     * @return ClusterId 所属集群ID（仅对集群数据库产品该字段非空，如TDSQL-C）。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置所属集群ID（仅对集群数据库产品该字段非空，如TDSQL-C）。
                     * @param _clusterId 所属集群ID（仅对集群数据库产品该字段非空，如TDSQL-C）。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取所属集群名称（仅对集群数据库产品该字段非空，如TDSQL-C）。
                     * @return ClusterName 所属集群名称（仅对集群数据库产品该字段非空，如TDSQL-C）。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置所属集群名称（仅对集群数据库产品该字段非空，如TDSQL-C）。
                     * @param _clusterName 所属集群名称（仅对集群数据库产品该字段非空，如TDSQL-C）。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例所属地域。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 健康得分。
                     */
                    int64_t m_healthScore;
                    bool m_healthScoreHasBeenSet;

                    /**
                     * 所属产品。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 异常事件数量。
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * 实例类型：1:MASTER；2:DR，3：RO，4:SDR。
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 核心数。
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存，单位MB。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 硬盘存储，单位GB。
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 数据库版本。
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 内网地址。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 内网端口。
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 接入来源。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 分组ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分组组名。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 实例状态：0：发货中；1：运行正常；4：销毁中；5：隔离中。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 子网统一ID。
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * cdb类型。
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * cdb实例初始化标志：0：未初始化；1：已初始化。
                     */
                    int64_t m_initFlag;
                    bool m_initFlagHasBeenSet;

                    /**
                     * 任务状态。
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 私有网络统一ID。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 实例巡检/概览的状态。
                     */
                    InstanceConfs m_instanceConf;
                    bool m_instanceConfHasBeenSet;

                    /**
                     * 资源到期时间。
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * 是否是DBbrain支持的实例。
                     */
                    bool m_isSupported;
                    bool m_isSupportedHasBeenSet;

                    /**
                     * 实例安全审计日志开启状态：ON： 安全审计开启；OFF： 未开启安全审计。
                     */
                    std::string m_secAuditStatus;
                    bool m_secAuditStatusHasBeenSet;

                    /**
                     * 实例审计日志开启状态，ALL_AUDIT： 开启全审计；RULE_AUDIT： 开启规则审计；UNBOUND： 未开启审计。
                     */
                    std::string m_auditPolicyStatus;
                    bool m_auditPolicyStatusHasBeenSet;

                    /**
                     * 实例审计日志运行状态：normal： 运行中； paused： 欠费暂停。
                     */
                    std::string m_auditRunningStatus;
                    bool m_auditRunningStatusHasBeenSet;

                    /**
                     * 内网vip。
                     */
                    std::string m_internalVip;
                    bool m_internalVipHasBeenSet;

                    /**
                     * 内网port。
                     */
                    int64_t m_internalVport;
                    bool m_internalVportHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 所属集群ID（仅对集群数据库产品该字段非空，如TDSQL-C）。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 所属集群名称（仅对集群数据库产品该字段非空，如TDSQL-C）。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_INSTANCEINFO_H_
