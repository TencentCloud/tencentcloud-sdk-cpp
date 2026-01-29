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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBINSTANCEDETAILRESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBINSTANCEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/ResourceTag.h>
#include <tencentcloud/mariadb/v20170312/model/NodeInfo.h>
#include <tencentcloud/mariadb/v20170312/model/DCNReplicaConfig.h>
#include <tencentcloud/mariadb/v20170312/model/DCNReplicaStatus.h>
#include <tencentcloud/mariadb/v20170312/model/ReservedNetResource.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceDetail返回参数结构体
                */
                class DescribeDBInstanceDetailResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceDetailResponse();
                    ~DescribeDBInstanceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例Id</p>
                     * @return InstanceId <p>实例Id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>实例状态</p>
                     * @return Status <p>实例状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>实例目前运行状态描述</p>
                     * @return StatusDesc <p>实例目前运行状态描述</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取<p>内网 IP 地址</p>
                     * @return Vip <p>内网 IP 地址</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>内网端口</p>
                     * @return Vport <p>内网端口</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>是否临时实例，0为否，非0为是</p>
                     * @return IsTmp <p>是否临时实例，0为否，非0为是</p>
                     * 
                     */
                    int64_t GetIsTmp() const;

                    /**
                     * 判断参数 IsTmp 是否已赋值
                     * @return IsTmp 是否已赋值
                     * 
                     */
                    bool IsTmpHasBeenSet() const;

                    /**
                     * 获取<p>节点数，2为一主一从，3为一主二从</p>
                     * @return NodeCount <p>节点数，2为一主一从，3为一主二从</p>
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取<p>实例所在地域名称，如 ap-shanghai</p>
                     * @return Region <p>实例所在地域名称，如 ap-shanghai</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>实例所在可用区名称，如 ap-shanghai-2</p>
                     * @return Zone <p>实例所在可用区名称，如 ap-shanghai-2</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>字符串型的私有网络Id</p>
                     * @return VpcId <p>字符串型的私有网络Id</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>字符串型的私有网络子网Id</p>
                     * @return SubnetId <p>字符串型的私有网络子网Id</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>外网状态，0-未开通；1-已开通；2-关闭；3-开通中；4-关闭中</p>
                     * @return WanStatus <p>外网状态，0-未开通；1-已开通；2-关闭；3-开通中；4-关闭中</p>
                     * 
                     */
                    int64_t GetWanStatus() const;

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

                    /**
                     * 获取<p>外网访问的域名，公网可解析</p>
                     * @return WanDomain <p>外网访问的域名，公网可解析</p>
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取<p>外网 IP 地址，公网可访问</p>
                     * @return WanVip <p>外网 IP 地址，公网可访问</p>
                     * 
                     */
                    std::string GetWanVip() const;

                    /**
                     * 判断参数 WanVip 是否已赋值
                     * @return WanVip 是否已赋值
                     * 
                     */
                    bool WanVipHasBeenSet() const;

                    /**
                     * 获取<p>外网端口</p>
                     * @return WanPort <p>外网端口</p>
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     * 
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取<p>实例所属项目 Id</p>
                     * @return ProjectId <p>实例所属项目 Id</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>TDSQL 版本信息</p>
                     * @return TdsqlVersion <p>TDSQL 版本信息</p>
                     * 
                     */
                    std::string GetTdsqlVersion() const;

                    /**
                     * 判断参数 TdsqlVersion 是否已赋值
                     * @return TdsqlVersion 是否已赋值
                     * 
                     */
                    bool TdsqlVersionHasBeenSet() const;

                    /**
                     * 获取<p>实例内存大小，单位 GB</p>
                     * @return Memory <p>实例内存大小，单位 GB</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>实例存储大小，单位 GB</p>
                     * @return Storage <p>实例存储大小，单位 GB</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取<p>主可用区，如 ap-shanghai-2</p>
                     * @return MasterZone <p>主可用区，如 ap-shanghai-2</p>
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取<p>从可用区列表，如 [ap-shanghai-2]</p>
                     * @return SlaveZones <p>从可用区列表，如 [ap-shanghai-2]</p>
                     * 
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 判断参数 SlaveZones 是否已赋值
                     * @return SlaveZones 是否已赋值
                     * 
                     */
                    bool SlaveZonesHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标志：0 否，1 是</p>
                     * @return AutoRenewFlag <p>自动续费标志：0 否，1 是</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>独享集群Id，普通实例为空</p>
                     * @return ExclusterId <p>独享集群Id，普通实例为空</p>
                     * 
                     */
                    std::string GetExclusterId() const;

                    /**
                     * 判断参数 ExclusterId 是否已赋值
                     * @return ExclusterId 是否已赋值
                     * 
                     */
                    bool ExclusterIdHasBeenSet() const;

                    /**
                     * 获取<p>付费模式：prepaid 表示预付费</p>
                     * @return PayMode <p>付费模式：prepaid 表示预付费</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>实例创建时间，格式为 2006-01-02 15:04:05</p>
                     * @return CreateTime <p>实例创建时间，格式为 2006-01-02 15:04:05</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例是否支持审计</p>
                     * @return IsAuditSupported <p>实例是否支持审计</p>
                     * 
                     */
                    bool GetIsAuditSupported() const;

                    /**
                     * 判断参数 IsAuditSupported 是否已赋值
                     * @return IsAuditSupported 是否已赋值
                     * 
                     */
                    bool IsAuditSupportedHasBeenSet() const;

                    /**
                     * 获取<p>实例到期时间，格式为 2006-01-02 15:04:05</p>
                     * @return PeriodEndTime <p>实例到期时间，格式为 2006-01-02 15:04:05</p>
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     * 
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>机型信息</p>
                     * @return Machine <p>机型信息</p>
                     * 
                     */
                    std::string GetMachine() const;

                    /**
                     * 判断参数 Machine 是否已赋值
                     * @return Machine 是否已赋值
                     * 
                     */
                    bool MachineHasBeenSet() const;

                    /**
                     * 获取<p>存储空间使用率</p>
                     * @return StorageUsage <p>存储空间使用率</p>
                     * 
                     */
                    std::string GetStorageUsage() const;

                    /**
                     * 判断参数 StorageUsage 是否已赋值
                     * @return StorageUsage 是否已赋值
                     * 
                     */
                    bool StorageUsageHasBeenSet() const;

                    /**
                     * 获取<p>日志存储空间大小，单位 GB</p>
                     * @return LogStorage <p>日志存储空间大小，单位 GB</p>
                     * 
                     */
                    int64_t GetLogStorage() const;

                    /**
                     * 判断参数 LogStorage 是否已赋值
                     * @return LogStorage 是否已赋值
                     * 
                     */
                    bool LogStorageHasBeenSet() const;

                    /**
                     * 获取<p>是否支持数据加密。1-支持；0-不支持</p>
                     * @return IsEncryptSupported <p>是否支持数据加密。1-支持；0-不支持</p>
                     * 
                     */
                    int64_t GetIsEncryptSupported() const;

                    /**
                     * 判断参数 IsEncryptSupported 是否已赋值
                     * @return IsEncryptSupported 是否已赋值
                     * 
                     */
                    bool IsEncryptSupportedHasBeenSet() const;

                    /**
                     * 获取<p>内网IPv6</p>
                     * @return Vip6 <p>内网IPv6</p>
                     * 
                     */
                    std::string GetVip6() const;

                    /**
                     * 判断参数 Vip6 是否已赋值
                     * @return Vip6 是否已赋值
                     * 
                     */
                    bool Vip6HasBeenSet() const;

                    /**
                     * 获取<p>实例Cpu核数</p>
                     * @return Cpu <p>实例Cpu核数</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>产品类型ID</p>
                     * @return Pid <p>产品类型ID</p>
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取<p>最大QPS</p>
                     * @return Qps <p>最大QPS</p>
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取<p>是否支持IPv6</p>
                     * @return Ipv6Flag <p>是否支持IPv6</p>
                     * 
                     */
                    int64_t GetIpv6Flag() const;

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     * 
                     */
                    bool Ipv6FlagHasBeenSet() const;

                    /**
                     * 获取<p>外网IPv6地址，公网可访问</p>
                     * @return WanVipv6 <p>外网IPv6地址，公网可访问</p>
                     * 
                     */
                    std::string GetWanVipv6() const;

                    /**
                     * 判断参数 WanVipv6 是否已赋值
                     * @return WanVipv6 是否已赋值
                     * 
                     */
                    bool WanVipv6HasBeenSet() const;

                    /**
                     * 获取<p>外网状态，0-未开通；1-已开通；2-关闭；3-开通中；4-关闭中</p>
                     * @return WanStatusIpv6 <p>外网状态，0-未开通；1-已开通；2-关闭；3-开通中；4-关闭中</p>
                     * 
                     */
                    int64_t GetWanStatusIpv6() const;

                    /**
                     * 判断参数 WanStatusIpv6 是否已赋值
                     * @return WanStatusIpv6 是否已赋值
                     * 
                     */
                    bool WanStatusIpv6HasBeenSet() const;

                    /**
                     * 获取<p>外网IPv6端口</p>
                     * @return WanPortIpv6 <p>外网IPv6端口</p>
                     * 
                     */
                    int64_t GetWanPortIpv6() const;

                    /**
                     * 判断参数 WanPortIpv6 是否已赋值
                     * @return WanPortIpv6 是否已赋值
                     * 
                     */
                    bool WanPortIpv6HasBeenSet() const;

                    /**
                     * 获取<p>数据库引擎</p>
                     * @return DbEngine <p>数据库引擎</p>
                     * 
                     */
                    std::string GetDbEngine() const;

                    /**
                     * 判断参数 DbEngine 是否已赋值
                     * @return DbEngine 是否已赋值
                     * 
                     */
                    bool DbEngineHasBeenSet() const;

                    /**
                     * 获取<p>数据库版本</p>
                     * @return DbVersion <p>数据库版本</p>
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取<p>标签信息</p>
                     * @return ResourceTags <p>标签信息</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>DCN标志，0-无，1-主实例，2-灾备实例</p>
                     * @return DcnFlag <p>DCN标志，0-无，1-主实例，2-灾备实例</p>
                     * 
                     */
                    int64_t GetDcnFlag() const;

                    /**
                     * 判断参数 DcnFlag 是否已赋值
                     * @return DcnFlag 是否已赋值
                     * 
                     */
                    bool DcnFlagHasBeenSet() const;

                    /**
                     * 获取<p>DCN状态，0-无，1-创建中，2-同步中，3-已断开</p>
                     * @return DcnStatus <p>DCN状态，0-无，1-创建中，2-同步中，3-已断开</p>
                     * 
                     */
                    int64_t GetDcnStatus() const;

                    /**
                     * 判断参数 DcnStatus 是否已赋值
                     * @return DcnStatus 是否已赋值
                     * 
                     */
                    bool DcnStatusHasBeenSet() const;

                    /**
                     * 获取<p>DCN灾备实例数</p>
                     * @return DcnDstNum <p>DCN灾备实例数</p>
                     * 
                     */
                    int64_t GetDcnDstNum() const;

                    /**
                     * 判断参数 DcnDstNum 是否已赋值
                     * @return DcnDstNum 是否已赋值
                     * 
                     */
                    bool DcnDstNumHasBeenSet() const;

                    /**
                     * 获取<p>1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）</p>
                     * @return InstanceType <p>1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）</p>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例的各个DB节点信息</p>
                     * @return NodesInfo <p>实例的各个DB节点信息</p>
                     * 
                     */
                    std::vector<NodeInfo> GetNodesInfo() const;

                    /**
                     * 判断参数 NodesInfo 是否已赋值
                     * @return NodesInfo 是否已赋值
                     * 
                     */
                    bool NodesInfoHasBeenSet() const;

                    /**
                     * 获取<p>实例是否支持设置用户连接数限制，内核为10.1暂不支持。</p>
                     * @return IsMaxUserConnectionsSupported <p>实例是否支持设置用户连接数限制，内核为10.1暂不支持。</p>
                     * 
                     */
                    bool GetIsMaxUserConnectionsSupported() const;

                    /**
                     * 判断参数 IsMaxUserConnectionsSupported 是否已赋值
                     * @return IsMaxUserConnectionsSupported 是否已赋值
                     * 
                     */
                    bool IsMaxUserConnectionsSupportedHasBeenSet() const;

                    /**
                     * 获取<p>对外显示的数据库版本</p>
                     * @return DbVersionId <p>对外显示的数据库版本</p>
                     * 
                     */
                    std::string GetDbVersionId() const;

                    /**
                     * 判断参数 DbVersionId 是否已赋值
                     * @return DbVersionId 是否已赋值
                     * 
                     */
                    bool DbVersionIdHasBeenSet() const;

                    /**
                     * 获取<p>加密状态, 0-未开启，1-已开启</p>
                     * @return EncryptStatus <p>加密状态, 0-未开启，1-已开启</p>
                     * 
                     */
                    int64_t GetEncryptStatus() const;

                    /**
                     * 判断参数 EncryptStatus 是否已赋值
                     * @return EncryptStatus 是否已赋值
                     * 
                     */
                    bool EncryptStatusHasBeenSet() const;

                    /**
                     * 获取<p>DCN的配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicaConfig <p>DCN的配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DCNReplicaConfig GetReplicaConfig() const;

                    /**
                     * 判断参数 ReplicaConfig 是否已赋值
                     * @return ReplicaConfig 是否已赋值
                     * 
                     */
                    bool ReplicaConfigHasBeenSet() const;

                    /**
                     * 获取<p>DCN的运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicaStatus <p>DCN的运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DCNReplicaStatus GetReplicaStatus() const;

                    /**
                     * 判断参数 ReplicaStatus 是否已赋值
                     * @return ReplicaStatus 是否已赋值
                     * 
                     */
                    bool ReplicaStatusHasBeenSet() const;

                    /**
                     * 获取<p>独享集群类型，0:公有云, 1:金融围笼, 2:CDC集群</p>
                     * @return ExclusterType <p>独享集群类型，0:公有云, 1:金融围笼, 2:CDC集群</p>
                     * 
                     */
                    int64_t GetExclusterType() const;

                    /**
                     * 判断参数 ExclusterType 是否已赋值
                     * @return ExclusterType 是否已赋值
                     * 
                     */
                    bool ExclusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>VPC就近访问</p>
                     * @return RsAccessStrategy <p>VPC就近访问</p>
                     * 
                     */
                    int64_t GetRsAccessStrategy() const;

                    /**
                     * 判断参数 RsAccessStrategy 是否已赋值
                     * @return RsAccessStrategy 是否已赋值
                     * 
                     */
                    bool RsAccessStrategyHasBeenSet() const;

                    /**
                     * 获取<p>尚未回收的网络资源</p>
                     * @return ReservedNetResources <p>尚未回收的网络资源</p>
                     * 
                     */
                    std::vector<ReservedNetResource> GetReservedNetResources() const;

                    /**
                     * 判断参数 ReservedNetResources 是否已赋值
                     * @return ReservedNetResources 是否已赋值
                     * 
                     */
                    bool ReservedNetResourcesHasBeenSet() const;

                    /**
                     * 获取<p>是否支持物理复制</p>
                     * @return IsPhysicalReplicationSupported <p>是否支持物理复制</p>
                     * 
                     */
                    bool GetIsPhysicalReplicationSupported() const;

                    /**
                     * 判断参数 IsPhysicalReplicationSupported 是否已赋值
                     * @return IsPhysicalReplicationSupported 是否已赋值
                     * 
                     */
                    bool IsPhysicalReplicationSupportedHasBeenSet() const;

                    /**
                     * 获取<p>是否支持强同步DCN</p>
                     * @return IsDcnStrongSyncSupported <p>是否支持强同步DCN</p>
                     * 
                     */
                    int64_t GetIsDcnStrongSyncSupported() const;

                    /**
                     * 判断参数 IsDcnStrongSyncSupported 是否已赋值
                     * @return IsDcnStrongSyncSupported 是否已赋值
                     * 
                     */
                    bool IsDcnStrongSyncSupportedHasBeenSet() const;

                    /**
                     * 获取<p>是否支持DCN切换</p>
                     * @return IsDcnSwitchSupported <p>是否支持DCN切换</p>
                     * 
                     */
                    int64_t GetIsDcnSwitchSupported() const;

                    /**
                     * 判断参数 IsDcnSwitchSupported 是否已赋值
                     * @return IsDcnSwitchSupported 是否已赋值
                     * 
                     */
                    bool IsDcnSwitchSupportedHasBeenSet() const;

                    /**
                     * 获取<p>proxy版本号</p>
                     * @return ProxyVersion <p>proxy版本号</p>
                     * 
                     */
                    std::string GetProxyVersion() const;

                    /**
                     * 判断参数 ProxyVersion 是否已赋值
                     * @return ProxyVersion 是否已赋值
                     * 
                     */
                    bool ProxyVersionHasBeenSet() const;

                    /**
                     * 获取<p>Cpu类型，如：英特尔：Intel/AMD，海光：Hygon</p>
                     * @return CpuType <p>Cpu类型，如：英特尔：Intel/AMD，海光：Hygon</p>
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     * 
                     */
                    bool CpuTypeHasBeenSet() const;

                    /**
                     * 获取<p>删除保护标记，1: 已开启删除保护，0: 未开启删除保护</p>
                     * @return ProtectedProperty <p>删除保护标记，1: 已开启删除保护，0: 未开启删除保护</p>
                     * 
                     */
                    int64_t GetProtectedProperty() const;

                    /**
                     * 判断参数 ProtectedProperty 是否已赋值
                     * @return ProtectedProperty 是否已赋值
                     * 
                     */
                    bool ProtectedPropertyHasBeenSet() const;

                    /**
                     * 获取<p>流程Id，标志实例当前所处的异步任务</p>
                     * @return FlowId <p>流程Id，标志实例当前所处的异步任务</p>
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * <p>实例Id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例目前运行状态描述</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>内网 IP 地址</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>内网端口</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>是否临时实例，0为否，非0为是</p>
                     */
                    int64_t m_isTmp;
                    bool m_isTmpHasBeenSet;

                    /**
                     * <p>节点数，2为一主一从，3为一主二从</p>
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>实例所在地域名称，如 ap-shanghai</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>实例所在可用区名称，如 ap-shanghai-2</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>字符串型的私有网络Id</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>字符串型的私有网络子网Id</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>外网状态，0-未开通；1-已开通；2-关闭；3-开通中；4-关闭中</p>
                     */
                    int64_t m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * <p>外网访问的域名，公网可解析</p>
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * <p>外网 IP 地址，公网可访问</p>
                     */
                    std::string m_wanVip;
                    bool m_wanVipHasBeenSet;

                    /**
                     * <p>外网端口</p>
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * <p>实例所属项目 Id</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>TDSQL 版本信息</p>
                     */
                    std::string m_tdsqlVersion;
                    bool m_tdsqlVersionHasBeenSet;

                    /**
                     * <p>实例内存大小，单位 GB</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>实例存储大小，单位 GB</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>主可用区，如 ap-shanghai-2</p>
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * <p>从可用区列表，如 [ap-shanghai-2]</p>
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * <p>自动续费标志：0 否，1 是</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>独享集群Id，普通实例为空</p>
                     */
                    std::string m_exclusterId;
                    bool m_exclusterIdHasBeenSet;

                    /**
                     * <p>付费模式：prepaid 表示预付费</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>实例创建时间，格式为 2006-01-02 15:04:05</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>实例是否支持审计</p>
                     */
                    bool m_isAuditSupported;
                    bool m_isAuditSupportedHasBeenSet;

                    /**
                     * <p>实例到期时间，格式为 2006-01-02 15:04:05</p>
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * <p>机型信息</p>
                     */
                    std::string m_machine;
                    bool m_machineHasBeenSet;

                    /**
                     * <p>存储空间使用率</p>
                     */
                    std::string m_storageUsage;
                    bool m_storageUsageHasBeenSet;

                    /**
                     * <p>日志存储空间大小，单位 GB</p>
                     */
                    int64_t m_logStorage;
                    bool m_logStorageHasBeenSet;

                    /**
                     * <p>是否支持数据加密。1-支持；0-不支持</p>
                     */
                    int64_t m_isEncryptSupported;
                    bool m_isEncryptSupportedHasBeenSet;

                    /**
                     * <p>内网IPv6</p>
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * <p>实例Cpu核数</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>产品类型ID</p>
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * <p>最大QPS</p>
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * <p>是否支持IPv6</p>
                     */
                    int64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                    /**
                     * <p>外网IPv6地址，公网可访问</p>
                     */
                    std::string m_wanVipv6;
                    bool m_wanVipv6HasBeenSet;

                    /**
                     * <p>外网状态，0-未开通；1-已开通；2-关闭；3-开通中；4-关闭中</p>
                     */
                    int64_t m_wanStatusIpv6;
                    bool m_wanStatusIpv6HasBeenSet;

                    /**
                     * <p>外网IPv6端口</p>
                     */
                    int64_t m_wanPortIpv6;
                    bool m_wanPortIpv6HasBeenSet;

                    /**
                     * <p>数据库引擎</p>
                     */
                    std::string m_dbEngine;
                    bool m_dbEngineHasBeenSet;

                    /**
                     * <p>数据库版本</p>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>DCN标志，0-无，1-主实例，2-灾备实例</p>
                     */
                    int64_t m_dcnFlag;
                    bool m_dcnFlagHasBeenSet;

                    /**
                     * <p>DCN状态，0-无，1-创建中，2-同步中，3-已断开</p>
                     */
                    int64_t m_dcnStatus;
                    bool m_dcnStatusHasBeenSet;

                    /**
                     * <p>DCN灾备实例数</p>
                     */
                    int64_t m_dcnDstNum;
                    bool m_dcnDstNumHasBeenSet;

                    /**
                     * <p>1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）</p>
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>实例的各个DB节点信息</p>
                     */
                    std::vector<NodeInfo> m_nodesInfo;
                    bool m_nodesInfoHasBeenSet;

                    /**
                     * <p>实例是否支持设置用户连接数限制，内核为10.1暂不支持。</p>
                     */
                    bool m_isMaxUserConnectionsSupported;
                    bool m_isMaxUserConnectionsSupportedHasBeenSet;

                    /**
                     * <p>对外显示的数据库版本</p>
                     */
                    std::string m_dbVersionId;
                    bool m_dbVersionIdHasBeenSet;

                    /**
                     * <p>加密状态, 0-未开启，1-已开启</p>
                     */
                    int64_t m_encryptStatus;
                    bool m_encryptStatusHasBeenSet;

                    /**
                     * <p>DCN的配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DCNReplicaConfig m_replicaConfig;
                    bool m_replicaConfigHasBeenSet;

                    /**
                     * <p>DCN的运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DCNReplicaStatus m_replicaStatus;
                    bool m_replicaStatusHasBeenSet;

                    /**
                     * <p>独享集群类型，0:公有云, 1:金融围笼, 2:CDC集群</p>
                     */
                    int64_t m_exclusterType;
                    bool m_exclusterTypeHasBeenSet;

                    /**
                     * <p>VPC就近访问</p>
                     */
                    int64_t m_rsAccessStrategy;
                    bool m_rsAccessStrategyHasBeenSet;

                    /**
                     * <p>尚未回收的网络资源</p>
                     */
                    std::vector<ReservedNetResource> m_reservedNetResources;
                    bool m_reservedNetResourcesHasBeenSet;

                    /**
                     * <p>是否支持物理复制</p>
                     */
                    bool m_isPhysicalReplicationSupported;
                    bool m_isPhysicalReplicationSupportedHasBeenSet;

                    /**
                     * <p>是否支持强同步DCN</p>
                     */
                    int64_t m_isDcnStrongSyncSupported;
                    bool m_isDcnStrongSyncSupportedHasBeenSet;

                    /**
                     * <p>是否支持DCN切换</p>
                     */
                    int64_t m_isDcnSwitchSupported;
                    bool m_isDcnSwitchSupportedHasBeenSet;

                    /**
                     * <p>proxy版本号</p>
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                    /**
                     * <p>Cpu类型，如：英特尔：Intel/AMD，海光：Hygon</p>
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * <p>删除保护标记，1: 已开启删除保护，0: 未开启删除保护</p>
                     */
                    int64_t m_protectedProperty;
                    bool m_protectedPropertyHasBeenSet;

                    /**
                     * <p>流程Id，标志实例当前所处的异步任务</p>
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBINSTANCEDETAILRESPONSE_H_
