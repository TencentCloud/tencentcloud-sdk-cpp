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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DBINSTANCE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DBINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述云数据库实例的详细信息。
                */
                class DBInstance : public AbstractModel
                {
                public:
                    DBInstance();
                    ~DBInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例 ID，唯一标识一个 TDSQL 实例
                     * @return InstanceId 实例 ID，唯一标识一个 TDSQL 实例
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，唯一标识一个 TDSQL 实例
                     * @param _instanceId 实例 ID，唯一标识一个 TDSQL 实例
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
                     * 获取实例名称，用户可修改
                     * @return InstanceName 实例名称，用户可修改
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称，用户可修改
                     * @param _instanceName 实例名称，用户可修改
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
                     * 获取实例所属应用 ID
                     * @return AppId 实例所属应用 ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置实例所属应用 ID
                     * @param _appId 实例所属应用 ID
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
                     * 获取实例所属项目 ID
                     * @return ProjectId 实例所属项目 ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置实例所属项目 ID
                     * @param _projectId 实例所属项目 ID
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
                     * 获取实例所在地域名称，如 ap-shanghai
                     * @return Region 实例所在地域名称，如 ap-shanghai
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所在地域名称，如 ap-shanghai
                     * @param _region 实例所在地域名称，如 ap-shanghai
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
                     * 获取实例所在可用区名称，如 ap-shanghai-1
                     * @return Zone 实例所在可用区名称，如 ap-shanghai-1
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例所在可用区名称，如 ap-shanghai-1
                     * @param _zone 实例所在可用区名称，如 ap-shanghai-1
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
                     * 获取私有网络 ID，基础网络时为 0
                     * @return VpcId 私有网络 ID，基础网络时为 0
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置私有网络 ID，基础网络时为 0
                     * @param _vpcId 私有网络 ID，基础网络时为 0
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
                     * 获取子网 ID，基础网络时为 0
                     * @return SubnetId 子网 ID，基础网络时为 0
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置子网 ID，基础网络时为 0
                     * @param _subnetId 子网 ID，基础网络时为 0
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
                     * 获取内网 IP 地址
                     * @return Vip 内网 IP 地址
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置内网 IP 地址
                     * @param _vip 内网 IP 地址
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
                     * 获取实例创建时间，格式为 2006-01-02 15:04:05
                     * @return CreateTime 实例创建时间，格式为 2006-01-02 15:04:05
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例创建时间，格式为 2006-01-02 15:04:05
                     * @param _createTime 实例创建时间，格式为 2006-01-02 15:04:05
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
                     * 获取自动续费标志：0 否，1 是
                     * @return AutoRenewFlag 自动续费标志：0 否，1 是
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标志：0 否，1 是
                     * @param _autoRenewFlag 自动续费标志：0 否，1 是
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
                     * 获取实例到期时间，格式为 2006-01-02 15:04:05
                     * @return PeriodEndTime 实例到期时间，格式为 2006-01-02 15:04:05
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置实例到期时间，格式为 2006-01-02 15:04:05
                     * @param _periodEndTime 实例到期时间，格式为 2006-01-02 15:04:05
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
                     * 获取实例所属账号
                     * @return Uin 实例所属账号
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置实例所属账号
                     * @param _uin 实例所属账号
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
                     * 获取TDSQL 版本信息
                     * @return TdsqlVersion TDSQL 版本信息
                     * 
                     */
                    std::string GetTdsqlVersion() const;

                    /**
                     * 设置TDSQL 版本信息
                     * @param _tdsqlVersion TDSQL 版本信息
                     * 
                     */
                    void SetTdsqlVersion(const std::string& _tdsqlVersion);

                    /**
                     * 判断参数 TdsqlVersion 是否已赋值
                     * @return TdsqlVersion 是否已赋值
                     * 
                     */
                    bool TdsqlVersionHasBeenSet() const;

                    /**
                     * 获取实例内存大小，单位 GB
                     * @return Memory 实例内存大小，单位 GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存大小，单位 GB
                     * @param _memory 实例内存大小，单位 GB
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
                     * 获取实例存储大小，单位 GB
                     * @return Storage 实例存储大小，单位 GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置实例存储大小，单位 GB
                     * @param _storage 实例存储大小，单位 GB
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
                     * 获取原始实例ID（过时字段，请勿依赖该值）
                     * @return OriginSerialId 原始实例ID（过时字段，请勿依赖该值）
                     * 
                     */
                    std::string GetOriginSerialId() const;

                    /**
                     * 设置原始实例ID（过时字段，请勿依赖该值）
                     * @param _originSerialId 原始实例ID（过时字段，请勿依赖该值）
                     * 
                     */
                    void SetOriginSerialId(const std::string& _originSerialId);

                    /**
                     * 判断参数 OriginSerialId 是否已赋值
                     * @return OriginSerialId 是否已赋值
                     * 
                     */
                    bool OriginSerialIdHasBeenSet() const;

                    /**
                     * 获取节点数，2为一主一从，3为一主二从
                     * @return NodeCount 节点数，2为一主一从，3为一主二从
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置节点数，2为一主一从，3为一主二从
                     * @param _nodeCount 节点数，2为一主一从，3为一主二从
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取是否临时实例，0为否，非0为是
                     * @return IsTmp 是否临时实例，0为否，非0为是
                     * 
                     */
                    uint64_t GetIsTmp() const;

                    /**
                     * 设置是否临时实例，0为否，非0为是
                     * @param _isTmp 是否临时实例，0为否，非0为是
                     * 
                     */
                    void SetIsTmp(const uint64_t& _isTmp);

                    /**
                     * 判断参数 IsTmp 是否已赋值
                     * @return IsTmp 是否已赋值
                     * 
                     */
                    bool IsTmpHasBeenSet() const;

                    /**
                     * 获取独享集群ID，为空表示为普通实例
                     * @return ExclusterId 独享集群ID，为空表示为普通实例
                     * 
                     */
                    std::string GetExclusterId() const;

                    /**
                     * 设置独享集群ID，为空表示为普通实例
                     * @param _exclusterId 独享集群ID，为空表示为普通实例
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
                     * 获取产品类型 ID
                     * @return Pid 产品类型 ID
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置产品类型 ID
                     * @param _pid 产品类型 ID
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
                     * 获取最大 Qps 值
                     * @return Qps 最大 Qps 值
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置最大 Qps 值
                     * @param _qps 最大 Qps 值
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
                     * 获取实例处于异步任务时的异步任务流程ID
                     * @return Locker 实例处于异步任务时的异步任务流程ID
                     * 
                     */
                    int64_t GetLocker() const;

                    /**
                     * 设置实例处于异步任务时的异步任务流程ID
                     * @param _locker 实例处于异步任务时的异步任务流程ID
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
                     * 获取实例目前运行状态描述
                     * @return StatusDesc 实例目前运行状态描述
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置实例目前运行状态描述
                     * @param _statusDesc 实例目前运行状态描述
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
                     * 获取机器型号
                     * @return Machine 机器型号
                     * 
                     */
                    std::string GetMachine() const;

                    /**
                     * 设置机器型号
                     * @param _machine 机器型号
                     * 
                     */
                    void SetMachine(const std::string& _machine);

                    /**
                     * 判断参数 Machine 是否已赋值
                     * @return Machine 是否已赋值
                     * 
                     */
                    bool MachineHasBeenSet() const;

                    /**
                     * 获取是否支持数据加密。1-支持；0-不支持
                     * @return IsEncryptSupported 是否支持数据加密。1-支持；0-不支持
                     * 
                     */
                    int64_t GetIsEncryptSupported() const;

                    /**
                     * 设置是否支持数据加密。1-支持；0-不支持
                     * @param _isEncryptSupported 是否支持数据加密。1-支持；0-不支持
                     * 
                     */
                    void SetIsEncryptSupported(const int64_t& _isEncryptSupported);

                    /**
                     * 判断参数 IsEncryptSupported 是否已赋值
                     * @return IsEncryptSupported 是否已赋值
                     * 
                     */
                    bool IsEncryptSupportedHasBeenSet() const;

                    /**
                     * 获取实例CPU核数
                     * @return Cpu 实例CPU核数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置实例CPU核数
                     * @param _cpu 实例CPU核数
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
                     * 获取数据库版本
                     * @return DbVersion 数据库版本
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置数据库版本
                     * @param _dbVersion 数据库版本
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
                     * 获取数据库版本
                     * @return DbVersionId 数据库版本
                     * 
                     */
                    std::string GetDbVersionId() const;

                    /**
                     * 设置数据库版本
                     * @param _dbVersionId 数据库版本
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
                     * 实例 ID，唯一标识一个 TDSQL 实例
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称，用户可修改
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例所属应用 ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 实例所属项目 ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例所在地域名称，如 ap-shanghai
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例所在可用区名称，如 ap-shanghai-1
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 私有网络 ID，基础网络时为 0
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网 ID，基础网络时为 0
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例状态：0 创建中，1 流程处理中， 2 运行中，3 实例未初始化，-1 实例已隔离，4 实例初始化中，5 实例删除中，6 实例重启中，7 数据迁移中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 内网 IP 地址
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 内网端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

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
                     * 实例创建时间，格式为 2006-01-02 15:04:05
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例最后更新时间，格式为 2006-01-02 15:04:05
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 自动续费标志：0 否，1 是
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 实例到期时间，格式为 2006-01-02 15:04:05
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * 实例所属账号
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * TDSQL 版本信息
                     */
                    std::string m_tdsqlVersion;
                    bool m_tdsqlVersionHasBeenSet;

                    /**
                     * 实例内存大小，单位 GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例存储大小，单位 GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

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
                     * 原始实例ID（过时字段，请勿依赖该值）
                     */
                    std::string m_originSerialId;
                    bool m_originSerialIdHasBeenSet;

                    /**
                     * 节点数，2为一主一从，3为一主二从
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 是否临时实例，0为否，非0为是
                     */
                    uint64_t m_isTmp;
                    bool m_isTmpHasBeenSet;

                    /**
                     * 独享集群ID，为空表示为普通实例
                     */
                    std::string m_exclusterId;
                    bool m_exclusterIdHasBeenSet;

                    /**
                     * 数字实例ID（过时字段，请勿依赖该值）
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 产品类型 ID
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 最大 Qps 值
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 付费模式
                     */
                    std::string m_paymode;
                    bool m_paymodeHasBeenSet;

                    /**
                     * 实例处于异步任务时的异步任务流程ID
                     */
                    int64_t m_locker;
                    bool m_lockerHasBeenSet;

                    /**
                     * 实例目前运行状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

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
                     * 机器型号
                     */
                    std::string m_machine;
                    bool m_machineHasBeenSet;

                    /**
                     * 是否支持数据加密。1-支持；0-不支持
                     */
                    int64_t m_isEncryptSupported;
                    bool m_isEncryptSupportedHasBeenSet;

                    /**
                     * 实例CPU核数
                     */
                    int64_t m_cpu;
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
                     * 数据库引擎
                     */
                    std::string m_dbEngine;
                    bool m_dbEngineHasBeenSet;

                    /**
                     * 数据库版本
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

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
                     * 数据库版本
                     */
                    std::string m_dbVersionId;
                    bool m_dbVersionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DBINSTANCE_H_
