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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCEDETAILRESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/ShardBriefInfo.h>
#include <tencentcloud/dcdb/v20180411/model/ResourceTag.h>
#include <tencentcloud/dcdb/v20180411/model/ReservedNetResource.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDCDBInstanceDetail返回参数结构体
                */
                class DescribeDCDBInstanceDetailResponse : public AbstractModel
                {
                public:
                    DescribeDCDBInstanceDetailResponse();
                    ~DescribeDCDBInstanceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如dcdbt-7oaxtcb7
                     * @return InstanceId 实例ID，形如dcdbt-7oaxtcb7
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
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
                     * 获取实例状态。0-实例创建中；1-异步任务处理中；2-运行中；3-实例未初始化；-1-实例已隔离
                     * @return Status 实例状态。0-实例创建中；1-异步任务处理中；2-运行中；3-实例未初始化；-1-实例已隔离
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
                     * 获取实例目前运行状态描述
                     * @return StatusDesc 实例目前运行状态描述
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
                     * 获取实例内网IP地址
                     * @return Vip 实例内网IP地址
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
                     * 获取实例内网端口
                     * @return Vport 实例内网端口
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
                     * 获取实例节点数。值为2时表示一主一从，值为3时表示一主二从
                     * @return NodeCount 实例节点数。值为2时表示一主一从，值为3时表示一主二从
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
                     * 获取实例所在地域名称，形如ap-guangzhou
                     * @return Region 实例所在地域名称，形如ap-guangzhou
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
                     * 获取实例私有网络ID，形如vpc-r9jr0de3
                     * @return VpcId 实例私有网络ID，形如vpc-r9jr0de3
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
                     * 获取实例私有网络子网ID，形如subnet-6rqs61o2
                     * @return SubnetId 实例私有网络子网ID，形如subnet-6rqs61o2
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
                     * 获取外网状态，0-未开通；1-已开通；2-关闭；3-开通中；4-关闭中
                     * @return WanStatus 外网状态，0-未开通；1-已开通；2-关闭；3-开通中；4-关闭中
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
                     * 获取外网访问的域名，公网可解析
                     * @return WanDomain 外网访问的域名，公网可解析
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
                     * 获取外网IP地址，公网可访问
                     * @return WanVip 外网IP地址，公网可访问
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
                     * 获取外网访问端口
                     * @return WanPort 外网访问端口
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
                     * 获取实例所属项目ID
                     * @return ProjectId 实例所属项目ID
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
                     * 获取实例自动续费标志。0-正常续费；1-自动续费；2-到期不续费
                     * @return AutoRenewFlag 实例自动续费标志。0-正常续费；1-自动续费；2-到期不续费
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
                     * 获取独享集群ID
                     * @return ExclusterId 独享集群ID
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
                     * 获取付费模式。prepaid-预付费；postpaid-按量计费
                     * @return PayMode 付费模式。prepaid-预付费；postpaid-按量计费
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
                     * 获取实例创建时间，格式为 2006-01-02 15:04:05
                     * @return CreateTime 实例创建时间，格式为 2006-01-02 15:04:05
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
                     * 获取实例到期时间，格式为 2006-01-02 15:04:05
                     * @return PeriodEndTime 实例到期时间，格式为 2006-01-02 15:04:05
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
                     * 获取数据库版本信息
                     * @return DbVersion 数据库版本信息
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
                     * 获取实例是否支持审计。0-不支持；1-支持
                     * @return IsAuditSupported 实例是否支持审计。0-不支持；1-支持
                     * 
                     */
                    int64_t GetIsAuditSupported() const;

                    /**
                     * 判断参数 IsAuditSupported 是否已赋值
                     * @return IsAuditSupported 是否已赋值
                     * 
                     */
                    bool IsAuditSupportedHasBeenSet() const;

                    /**
                     * 获取实例是否支持数据加密。0-不支持；1-支持
                     * @return IsEncryptSupported 实例是否支持数据加密。0-不支持；1-支持
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
                     * 获取实例母机机器型号
                     * @return Machine 实例母机机器型号
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
                     * 获取实例内存大小，单位 GB，各个分片的内存大小的和
                     * @return Memory 实例内存大小，单位 GB，各个分片的内存大小的和
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
                     * 获取实例磁盘存储大小，单位 GB，各个分片的磁盘大小的和
                     * @return Storage 实例磁盘存储大小，单位 GB，各个分片的磁盘大小的和
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
                     * 获取实例存储空间使用率，计算方式为：各个分片已经使用的磁盘大小的和/各个分片的磁盘大小的和。
                     * @return StorageUsage 实例存储空间使用率，计算方式为：各个分片已经使用的磁盘大小的和/各个分片的磁盘大小的和。
                     * 
                     */
                    double GetStorageUsage() const;

                    /**
                     * 判断参数 StorageUsage 是否已赋值
                     * @return StorageUsage 是否已赋值
                     * 
                     */
                    bool StorageUsageHasBeenSet() const;

                    /**
                     * 获取日志存储空间大小，单位GB
                     * @return LogStorage 日志存储空间大小，单位GB
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
                     * 获取产品类型ID
                     * @return Pid 产品类型ID
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
                     * 获取主DB可用区
                     * @return MasterZone 主DB可用区
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
                     * 获取从DB可用区
                     * @return SlaveZones 从DB可用区
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
                     * 获取分片信息
                     * @return Shards 分片信息
                     * 
                     */
                    std::vector<ShardBriefInfo> GetShards() const;

                    /**
                     * 判断参数 Shards 是否已赋值
                     * @return Shards 是否已赋值
                     * 
                     */
                    bool ShardsHasBeenSet() const;

                    /**
                     * 获取内网IPv6
                     * @return Vip6 内网IPv6
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
                     * 获取实例Cpu核数
                     * @return Cpu 实例Cpu核数
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
                     * 获取实例QPS
                     * @return Qps 实例QPS
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
                     * 获取DB引擎
                     * @return DbEngine DB引擎
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
                     * 获取是否支持IPv6
                     * @return Ipv6Flag 是否支持IPv6
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
                     * 获取外网IPv6地址，公网可访问
                     * @return WanVipv6 外网IPv6地址，公网可访问
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
                     * 获取外网状态，0-未开通；1-已开通；2-关闭；3-开通中；4-关闭中
                     * @return WanStatusIpv6 外网状态，0-未开通；1-已开通；2-关闭；3-开通中；4-关闭中
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
                     * 获取外网IPv6端口
                     * @return WanPortIpv6 外网IPv6端口
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
                     * 获取标签信息
                     * @return ResourceTags 标签信息
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
                     * 获取DCN标志，0-无，1-主实例，2-灾备实例
                     * @return DcnFlag DCN标志，0-无，1-主实例，2-灾备实例
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
                     * 获取DCN状态，0-无，1-创建中，2-同步中，3-已断开
                     * @return DcnStatus DCN状态，0-无，1-创建中，2-同步中，3-已断开
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
                     * 获取DCN灾备实例数
                     * @return DcnDstNum DCN灾备实例数
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
                     * 获取1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）
                     * @return InstanceType 1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）
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
                     * 获取实例是否支持设置用户连接数限制，内核为10.1暂不支持。
                     * @return IsMaxUserConnectionsSupported 实例是否支持设置用户连接数限制，内核为10.1暂不支持。
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
                     * 获取对外显示的数据库版本
                     * @return DbVersionId 对外显示的数据库版本
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
                     * 获取加密状态, 0-未开启，1-已开启
                     * @return EncryptStatus 加密状态, 0-未开启，1-已开启
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
                     * 获取独享集群类型，0:公有云, 1:金融围笼, 2:CDC集群
                     * @return ExclusterType 独享集群类型，0:公有云, 1:金融围笼, 2:CDC集群
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
                     * 获取VPC就近访问
                     * @return RsAccessStrategy VPC就近访问
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
                     * 获取尚未回收的网络资源
                     * @return ReservedNetResources 尚未回收的网络资源
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
                     * 获取是否支持物理复制
                     * @return IsPhysicalReplicationSupported 是否支持物理复制
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
                     * 获取是否支持强同步DCN
                     * @return IsDcnStrongSyncSupported 是否支持强同步DCN
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
                     * 获取是否支持DCN切换
                     * @return IsDcnSwitchSupported 是否支持DCN切换
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
                     * 获取cpu类型，英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD	
                     * @return CpuType cpu类型，英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD	
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     * 
                     */
                    bool CpuTypeHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如dcdbt-7oaxtcb7
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例状态。0-实例创建中；1-异步任务处理中；2-运行中；3-实例未初始化；-1-实例已隔离
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例目前运行状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 实例内网IP地址
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 实例内网端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 实例节点数。值为2时表示一主一从，值为3时表示一主二从
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 实例所在地域名称，形如ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例私有网络ID，形如vpc-r9jr0de3
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 实例私有网络子网ID，形如subnet-6rqs61o2
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 外网状态，0-未开通；1-已开通；2-关闭；3-开通中；4-关闭中
                     */
                    int64_t m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * 外网访问的域名，公网可解析
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * 外网IP地址，公网可访问
                     */
                    std::string m_wanVip;
                    bool m_wanVipHasBeenSet;

                    /**
                     * 外网访问端口
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * 实例所属项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例自动续费标志。0-正常续费；1-自动续费；2-到期不续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 独享集群ID
                     */
                    std::string m_exclusterId;
                    bool m_exclusterIdHasBeenSet;

                    /**
                     * 付费模式。prepaid-预付费；postpaid-按量计费
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 实例创建时间，格式为 2006-01-02 15:04:05
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例到期时间，格式为 2006-01-02 15:04:05
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * 数据库版本信息
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * 实例是否支持审计。0-不支持；1-支持
                     */
                    int64_t m_isAuditSupported;
                    bool m_isAuditSupportedHasBeenSet;

                    /**
                     * 实例是否支持数据加密。0-不支持；1-支持
                     */
                    int64_t m_isEncryptSupported;
                    bool m_isEncryptSupportedHasBeenSet;

                    /**
                     * 实例母机机器型号
                     */
                    std::string m_machine;
                    bool m_machineHasBeenSet;

                    /**
                     * 实例内存大小，单位 GB，各个分片的内存大小的和
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例磁盘存储大小，单位 GB，各个分片的磁盘大小的和
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 实例存储空间使用率，计算方式为：各个分片已经使用的磁盘大小的和/各个分片的磁盘大小的和。
                     */
                    double m_storageUsage;
                    bool m_storageUsageHasBeenSet;

                    /**
                     * 日志存储空间大小，单位GB
                     */
                    int64_t m_logStorage;
                    bool m_logStorageHasBeenSet;

                    /**
                     * 产品类型ID
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 主DB可用区
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * 从DB可用区
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * 分片信息
                     */
                    std::vector<ShardBriefInfo> m_shards;
                    bool m_shardsHasBeenSet;

                    /**
                     * 内网IPv6
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * 实例Cpu核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 实例QPS
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * DB引擎
                     */
                    std::string m_dbEngine;
                    bool m_dbEngineHasBeenSet;

                    /**
                     * 是否支持IPv6
                     */
                    int64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                    /**
                     * 外网IPv6地址，公网可访问
                     */
                    std::string m_wanVipv6;
                    bool m_wanVipv6HasBeenSet;

                    /**
                     * 外网状态，0-未开通；1-已开通；2-关闭；3-开通中；4-关闭中
                     */
                    int64_t m_wanStatusIpv6;
                    bool m_wanStatusIpv6HasBeenSet;

                    /**
                     * 外网IPv6端口
                     */
                    int64_t m_wanPortIpv6;
                    bool m_wanPortIpv6HasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * DCN标志，0-无，1-主实例，2-灾备实例
                     */
                    int64_t m_dcnFlag;
                    bool m_dcnFlagHasBeenSet;

                    /**
                     * DCN状态，0-无，1-创建中，2-同步中，3-已断开
                     */
                    int64_t m_dcnStatus;
                    bool m_dcnStatusHasBeenSet;

                    /**
                     * DCN灾备实例数
                     */
                    int64_t m_dcnDstNum;
                    bool m_dcnDstNumHasBeenSet;

                    /**
                     * 1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例是否支持设置用户连接数限制，内核为10.1暂不支持。
                     */
                    bool m_isMaxUserConnectionsSupported;
                    bool m_isMaxUserConnectionsSupportedHasBeenSet;

                    /**
                     * 对外显示的数据库版本
                     */
                    std::string m_dbVersionId;
                    bool m_dbVersionIdHasBeenSet;

                    /**
                     * 加密状态, 0-未开启，1-已开启
                     */
                    int64_t m_encryptStatus;
                    bool m_encryptStatusHasBeenSet;

                    /**
                     * 独享集群类型，0:公有云, 1:金融围笼, 2:CDC集群
                     */
                    int64_t m_exclusterType;
                    bool m_exclusterTypeHasBeenSet;

                    /**
                     * VPC就近访问
                     */
                    int64_t m_rsAccessStrategy;
                    bool m_rsAccessStrategyHasBeenSet;

                    /**
                     * 尚未回收的网络资源
                     */
                    std::vector<ReservedNetResource> m_reservedNetResources;
                    bool m_reservedNetResourcesHasBeenSet;

                    /**
                     * 是否支持物理复制
                     */
                    bool m_isPhysicalReplicationSupported;
                    bool m_isPhysicalReplicationSupportedHasBeenSet;

                    /**
                     * 是否支持强同步DCN
                     */
                    int64_t m_isDcnStrongSyncSupported;
                    bool m_isDcnStrongSyncSupportedHasBeenSet;

                    /**
                     * 是否支持DCN切换
                     */
                    int64_t m_isDcnSwitchSupported;
                    bool m_isDcnSwitchSupportedHasBeenSet;

                    /**
                     * cpu类型，英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD	
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCEDETAILRESPONSE_H_
