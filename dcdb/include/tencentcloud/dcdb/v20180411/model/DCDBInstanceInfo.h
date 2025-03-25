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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DCDBINSTANCEINFO_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DCDBINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/ShardInfo.h>
#include <tencentcloud/dcdb/v20180411/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * 分布式数据库实例信息
                */
                class DCDBInstanceInfo : public AbstractModel
                {
                public:
                    DCDBInstanceInfo();
                    ~DCDBInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 获取应用ID
                     * @return AppId 应用ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置应用ID
                     * @param _appId 应用ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取VPC数字ID
                     * @return VpcId VPC数字ID
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置VPC数字ID
                     * @param _vpcId VPC数字ID
                     * 
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet数字ID
                     * @return SubnetId Subnet数字ID
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置Subnet数字ID
                     * @param _subnetId Subnet数字ID
                     * 
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取状态中文描述
                     * @return StatusDesc 状态中文描述
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置状态中文描述
                     * @param _statusDesc 状态中文描述
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取实例状态：0 创建中，1 流程处理中， 2 运行中，3 实例未初始化，-1 实例已隔离，4 实例初始化中，5 实例删除中，6 实例重启中，7 数据迁移中
                     * @return Status 实例状态：0 创建中，1 流程处理中， 2 运行中，3 实例未初始化，-1 实例已隔离，4 实例初始化中，5 实例删除中，6 实例重启中，7 数据迁移中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态：0 创建中，1 流程处理中， 2 运行中，3 实例未初始化，-1 实例已隔离，4 实例初始化中，5 实例删除中，6 实例重启中，7 数据迁移中
                     * @param _status 实例状态：0 创建中，1 流程处理中， 2 运行中，3 实例未初始化，-1 实例已隔离，4 实例初始化中，5 实例删除中，6 实例重启中，7 数据迁移中
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
                     * 获取内网IP
                     * @return Vip 内网IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置内网IP
                     * @param _vip 内网IP
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
                     * 获取内网端口
                     * @return Vport 内网端口
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置内网端口
                     * @param _vport 内网端口
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取自动续费标志
                     * @return AutoRenewFlag 自动续费标志
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标志
                     * @param _autoRenewFlag 自动续费标志
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取内存大小，单位 GB
                     * @return Memory 内存大小，单位 GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位 GB
                     * @param _memory 内存大小，单位 GB
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
                     * 获取存储大小，单位 GB
                     * @return Storage 存储大小，单位 GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置存储大小，单位 GB
                     * @param _storage 存储大小，单位 GB
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
                     * 获取分片个数
                     * @return ShardCount 分片个数
                     * 
                     */
                    int64_t GetShardCount() const;

                    /**
                     * 设置分片个数
                     * @param _shardCount 分片个数
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
                     * 获取到期时间
                     * @return PeriodEndTime 到期时间
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置到期时间
                     * @param _periodEndTime 到期时间
                     * 
                     */
                    void SetPeriodEndTime(const std::string& _periodEndTime);

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     * 
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取隔离时间
                     * @return IsolatedTimestamp 隔离时间
                     * 
                     */
                    std::string GetIsolatedTimestamp() const;

                    /**
                     * 设置隔离时间
                     * @param _isolatedTimestamp 隔离时间
                     * 
                     */
                    void SetIsolatedTimestamp(const std::string& _isolatedTimestamp);

                    /**
                     * 判断参数 IsolatedTimestamp 是否已赋值
                     * @return IsolatedTimestamp 是否已赋值
                     * 
                     */
                    bool IsolatedTimestampHasBeenSet() const;

                    /**
                     * 获取账号ID
                     * @return Uin 账号ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置账号ID
                     * @param _uin 账号ID
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取分片详情
                     * @return ShardDetail 分片详情
                     * 
                     */
                    std::vector<ShardInfo> GetShardDetail() const;

                    /**
                     * 设置分片详情
                     * @param _shardDetail 分片详情
                     * 
                     */
                    void SetShardDetail(const std::vector<ShardInfo>& _shardDetail);

                    /**
                     * 判断参数 ShardDetail 是否已赋值
                     * @return ShardDetail 是否已赋值
                     * 
                     */
                    bool ShardDetailHasBeenSet() const;

                    /**
                     * 获取节点数，2 为一主一从， 3 为一主二从
                     * @return NodeCount 节点数，2 为一主一从， 3 为一主二从
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置节点数，2 为一主一从， 3 为一主二从
                     * @param _nodeCount 节点数，2 为一主一从， 3 为一主二从
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取临时实例标记，0 为非临时实例
                     * @return IsTmp 临时实例标记，0 为非临时实例
                     * 
                     */
                    int64_t GetIsTmp() const;

                    /**
                     * 设置临时实例标记，0 为非临时实例
                     * @param _isTmp 临时实例标记，0 为非临时实例
                     * 
                     */
                    void SetIsTmp(const int64_t& _isTmp);

                    /**
                     * 判断参数 IsTmp 是否已赋值
                     * @return IsTmp 是否已赋值
                     * 
                     */
                    bool IsTmpHasBeenSet() const;

                    /**
                     * 获取独享集群ID，为空表示非独享集群实例
                     * @return ExclusterId 独享集群ID，为空表示非独享集群实例
                     * 
                     */
                    std::string GetExclusterId() const;

                    /**
                     * 设置独享集群ID，为空表示非独享集群实例
                     * @param _exclusterId 独享集群ID，为空表示非独享集群实例
                     * 
                     */
                    void SetExclusterId(const std::string& _exclusterId);

                    /**
                     * 判断参数 ExclusterId 是否已赋值
                     * @return ExclusterId 是否已赋值
                     * 
                     */
                    bool ExclusterIdHasBeenSet() const;

                    /**
                     * 获取字符串型的私有网络ID
                     * @return UniqueVpcId 字符串型的私有网络ID
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置字符串型的私有网络ID
                     * @param _uniqueVpcId 字符串型的私有网络ID
                     * 
                     */
                    void SetUniqueVpcId(const std::string& _uniqueVpcId);

                    /**
                     * 判断参数 UniqueVpcId 是否已赋值
                     * @return UniqueVpcId 是否已赋值
                     * 
                     */
                    bool UniqueVpcIdHasBeenSet() const;

                    /**
                     * 获取字符串型的私有网络子网ID
                     * @return UniqueSubnetId 字符串型的私有网络子网ID
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置字符串型的私有网络子网ID
                     * @param _uniqueSubnetId 字符串型的私有网络子网ID
                     * 
                     */
                    void SetUniqueSubnetId(const std::string& _uniqueSubnetId);

                    /**
                     * 判断参数 UniqueSubnetId 是否已赋值
                     * @return UniqueSubnetId 是否已赋值
                     * 
                     */
                    bool UniqueSubnetIdHasBeenSet() const;

                    /**
                     * 获取数字实例ID（过时字段，请勿依赖该值）
                     * @return Id 数字实例ID（过时字段，请勿依赖该值）
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置数字实例ID（过时字段，请勿依赖该值）
                     * @param _id 数字实例ID（过时字段，请勿依赖该值）
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取外网访问的域名，公网可解析
                     * @return WanDomain 外网访问的域名，公网可解析
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置外网访问的域名，公网可解析
                     * @param _wanDomain 外网访问的域名，公网可解析
                     * 
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取外网 IP 地址，公网可访问
                     * @return WanVip 外网 IP 地址，公网可访问
                     * 
                     */
                    std::string GetWanVip() const;

                    /**
                     * 设置外网 IP 地址，公网可访问
                     * @param _wanVip 外网 IP 地址，公网可访问
                     * 
                     */
                    void SetWanVip(const std::string& _wanVip);

                    /**
                     * 判断参数 WanVip 是否已赋值
                     * @return WanVip 是否已赋值
                     * 
                     */
                    bool WanVipHasBeenSet() const;

                    /**
                     * 获取外网端口
                     * @return WanPort 外网端口
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置外网端口
                     * @param _wanPort 外网端口
                     * 
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     * 
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取产品类型 ID（过时字段，请勿依赖该值）
                     * @return Pid 产品类型 ID（过时字段，请勿依赖该值）
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置产品类型 ID（过时字段，请勿依赖该值）
                     * @param _pid 产品类型 ID（过时字段，请勿依赖该值）
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取实例最后更新时间，格式为 2006-01-02 15:04:05
                     * @return UpdateTime 实例最后更新时间，格式为 2006-01-02 15:04:05
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置实例最后更新时间，格式为 2006-01-02 15:04:05
                     * @param _updateTime 实例最后更新时间，格式为 2006-01-02 15:04:05
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取数据库引擎
                     * @return DbEngine 数据库引擎
                     * 
                     */
                    std::string GetDbEngine() const;

                    /**
                     * 设置数据库引擎
                     * @param _dbEngine 数据库引擎
                     * 
                     */
                    void SetDbEngine(const std::string& _dbEngine);

                    /**
                     * 判断参数 DbEngine 是否已赋值
                     * @return DbEngine 是否已赋值
                     * 
                     */
                    bool DbEngineHasBeenSet() const;

                    /**
                     * 获取数据库引擎版本
                     * @return DbVersion 数据库引擎版本
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置数据库引擎版本
                     * @param _dbVersion 数据库引擎版本
                     * 
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取付费模式
                     * @return Paymode 付费模式
                     * 
                     */
                    std::string GetPaymode() const;

                    /**
                     * 设置付费模式
                     * @param _paymode 付费模式
                     * 
                     */
                    void SetPaymode(const std::string& _paymode);

                    /**
                     * 判断参数 Paymode 是否已赋值
                     * @return Paymode 是否已赋值
                     * 
                     */
                    bool PaymodeHasBeenSet() const;

                    /**
                     * 获取实例处于异步任务状态时，表示异步任务流程ID
                     * @return Locker 实例处于异步任务状态时，表示异步任务流程ID
                     * 
                     */
                    int64_t GetLocker() const;

                    /**
                     * 设置实例处于异步任务状态时，表示异步任务流程ID
                     * @param _locker 实例处于异步任务状态时，表示异步任务流程ID
                     * 
                     */
                    void SetLocker(const int64_t& _locker);

                    /**
                     * 判断参数 Locker 是否已赋值
                     * @return Locker 是否已赋值
                     * 
                     */
                    bool LockerHasBeenSet() const;

                    /**
                     * 获取外网状态，0-未开通；1-已开通；2-关闭；3-开通中
                     * @return WanStatus 外网状态，0-未开通；1-已开通；2-关闭；3-开通中
                     * 
                     */
                    int64_t GetWanStatus() const;

                    /**
                     * 设置外网状态，0-未开通；1-已开通；2-关闭；3-开通中
                     * @param _wanStatus 外网状态，0-未开通；1-已开通；2-关闭；3-开通中
                     * 
                     */
                    void SetWanStatus(const int64_t& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

                    /**
                     * 获取该实例是否支持审计。1-支持；0-不支持
                     * @return IsAuditSupported 该实例是否支持审计。1-支持；0-不支持
                     * 
                     */
                    uint64_t GetIsAuditSupported() const;

                    /**
                     * 设置该实例是否支持审计。1-支持；0-不支持
                     * @param _isAuditSupported 该实例是否支持审计。1-支持；0-不支持
                     * 
                     */
                    void SetIsAuditSupported(const uint64_t& _isAuditSupported);

                    /**
                     * 判断参数 IsAuditSupported 是否已赋值
                     * @return IsAuditSupported 是否已赋值
                     * 
                     */
                    bool IsAuditSupportedHasBeenSet() const;

                    /**
                     * 获取Cpu核数
                     * @return Cpu Cpu核数
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Cpu核数
                     * @param _cpu Cpu核数
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取实例IPv6标志
                     * @return Ipv6Flag 实例IPv6标志
                     * 
                     */
                    uint64_t GetIpv6Flag() const;

                    /**
                     * 设置实例IPv6标志
                     * @param _ipv6Flag 实例IPv6标志
                     * 
                     */
                    void SetIpv6Flag(const uint64_t& _ipv6Flag);

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     * 
                     */
                    bool Ipv6FlagHasBeenSet() const;

                    /**
                     * 获取内网IPv6
                     * @return Vipv6 内网IPv6
                     * 
                     */
                    std::string GetVipv6() const;

                    /**
                     * 设置内网IPv6
                     * @param _vipv6 内网IPv6
                     * 
                     */
                    void SetVipv6(const std::string& _vipv6);

                    /**
                     * 判断参数 Vipv6 是否已赋值
                     * @return Vipv6 是否已赋值
                     * 
                     */
                    bool Vipv6HasBeenSet() const;

                    /**
                     * 获取外网IPv6
                     * @return WanVipv6 外网IPv6
                     * 
                     */
                    std::string GetWanVipv6() const;

                    /**
                     * 设置外网IPv6
                     * @param _wanVipv6 外网IPv6
                     * 
                     */
                    void SetWanVipv6(const std::string& _wanVipv6);

                    /**
                     * 判断参数 WanVipv6 是否已赋值
                     * @return WanVipv6 是否已赋值
                     * 
                     */
                    bool WanVipv6HasBeenSet() const;

                    /**
                     * 获取外网IPv6端口
                     * @return WanPortIpv6 外网IPv6端口
                     * 
                     */
                    uint64_t GetWanPortIpv6() const;

                    /**
                     * 设置外网IPv6端口
                     * @param _wanPortIpv6 外网IPv6端口
                     * 
                     */
                    void SetWanPortIpv6(const uint64_t& _wanPortIpv6);

                    /**
                     * 判断参数 WanPortIpv6 是否已赋值
                     * @return WanPortIpv6 是否已赋值
                     * 
                     */
                    bool WanPortIpv6HasBeenSet() const;

                    /**
                     * 获取外网IPv6状态
                     * @return WanStatusIpv6 外网IPv6状态
                     * 
                     */
                    uint64_t GetWanStatusIpv6() const;

                    /**
                     * 设置外网IPv6状态
                     * @param _wanStatusIpv6 外网IPv6状态
                     * 
                     */
                    void SetWanStatusIpv6(const uint64_t& _wanStatusIpv6);

                    /**
                     * 判断参数 WanStatusIpv6 是否已赋值
                     * @return WanStatusIpv6 是否已赋值
                     * 
                     */
                    bool WanStatusIpv6HasBeenSet() const;

                    /**
                     * 获取DCN标志，0-无，1-主实例，2-灾备实例
                     * @return DcnFlag DCN标志，0-无，1-主实例，2-灾备实例
                     * 
                     */
                    int64_t GetDcnFlag() const;

                    /**
                     * 设置DCN标志，0-无，1-主实例，2-灾备实例
                     * @param _dcnFlag DCN标志，0-无，1-主实例，2-灾备实例
                     * 
                     */
                    void SetDcnFlag(const int64_t& _dcnFlag);

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
                     * 设置DCN状态，0-无，1-创建中，2-同步中，3-已断开
                     * @param _dcnStatus DCN状态，0-无，1-创建中，2-同步中，3-已断开
                     * 
                     */
                    void SetDcnStatus(const int64_t& _dcnStatus);

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
                     * 设置DCN灾备实例数
                     * @param _dcnDstNum DCN灾备实例数
                     * 
                     */
                    void SetDcnDstNum(const int64_t& _dcnDstNum);

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
                     * 设置1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）
                     * @param _instanceType 1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）
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
                     * 获取实例标签信息
                     * @return ResourceTags 实例标签信息
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置实例标签信息
                     * @param _resourceTags 实例标签信息
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取数据库引擎版本
                     * @return DbVersionId 数据库引擎版本
                     * 
                     */
                    std::string GetDbVersionId() const;

                    /**
                     * 设置数据库引擎版本
                     * @param _dbVersionId 数据库引擎版本
                     * 
                     */
                    void SetDbVersionId(const std::string& _dbVersionId);

                    /**
                     * 判断参数 DbVersionId 是否已赋值
                     * @return DbVersionId 是否已赋值
                     * 
                     */
                    bool DbVersionIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 应用ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPC数字ID
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet数字ID
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 状态中文描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 实例状态：0 创建中，1 流程处理中， 2 运行中，3 实例未初始化，-1 实例已隔离，4 实例初始化中，5 实例删除中，6 实例重启中，7 数据迁移中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 内网端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 自动续费标志
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 内存大小，单位 GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 存储大小，单位 GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 分片个数
                     */
                    int64_t m_shardCount;
                    bool m_shardCountHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * 隔离时间
                     */
                    std::string m_isolatedTimestamp;
                    bool m_isolatedTimestampHasBeenSet;

                    /**
                     * 账号ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 分片详情
                     */
                    std::vector<ShardInfo> m_shardDetail;
                    bool m_shardDetailHasBeenSet;

                    /**
                     * 节点数，2 为一主一从， 3 为一主二从
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 临时实例标记，0 为非临时实例
                     */
                    int64_t m_isTmp;
                    bool m_isTmpHasBeenSet;

                    /**
                     * 独享集群ID，为空表示非独享集群实例
                     */
                    std::string m_exclusterId;
                    bool m_exclusterIdHasBeenSet;

                    /**
                     * 字符串型的私有网络ID
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * 字符串型的私有网络子网ID
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * 数字实例ID（过时字段，请勿依赖该值）
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 外网访问的域名，公网可解析
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * 外网 IP 地址，公网可访问
                     */
                    std::string m_wanVip;
                    bool m_wanVipHasBeenSet;

                    /**
                     * 外网端口
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * 产品类型 ID（过时字段，请勿依赖该值）
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 实例最后更新时间，格式为 2006-01-02 15:04:05
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 数据库引擎
                     */
                    std::string m_dbEngine;
                    bool m_dbEngineHasBeenSet;

                    /**
                     * 数据库引擎版本
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * 付费模式
                     */
                    std::string m_paymode;
                    bool m_paymodeHasBeenSet;

                    /**
                     * 实例处于异步任务状态时，表示异步任务流程ID
                     */
                    int64_t m_locker;
                    bool m_lockerHasBeenSet;

                    /**
                     * 外网状态，0-未开通；1-已开通；2-关闭；3-开通中
                     */
                    int64_t m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * 该实例是否支持审计。1-支持；0-不支持
                     */
                    uint64_t m_isAuditSupported;
                    bool m_isAuditSupportedHasBeenSet;

                    /**
                     * Cpu核数
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 实例IPv6标志
                     */
                    uint64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                    /**
                     * 内网IPv6
                     */
                    std::string m_vipv6;
                    bool m_vipv6HasBeenSet;

                    /**
                     * 外网IPv6
                     */
                    std::string m_wanVipv6;
                    bool m_wanVipv6HasBeenSet;

                    /**
                     * 外网IPv6端口
                     */
                    uint64_t m_wanPortIpv6;
                    bool m_wanPortIpv6HasBeenSet;

                    /**
                     * 外网IPv6状态
                     */
                    uint64_t m_wanStatusIpv6;
                    bool m_wanStatusIpv6HasBeenSet;

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
                     * 实例标签信息
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 数据库引擎版本
                     */
                    std::string m_dbVersionId;
                    bool m_dbVersionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DCDBINSTANCEINFO_H_
