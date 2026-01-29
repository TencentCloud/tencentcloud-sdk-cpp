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
                     * 获取<p>实例 ID，唯一标识一个 TDSQL 实例</p>
                     * @return InstanceId <p>实例 ID，唯一标识一个 TDSQL 实例</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，唯一标识一个 TDSQL 实例</p>
                     * @param _instanceId <p>实例 ID，唯一标识一个 TDSQL 实例</p>
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
                     * 获取<p>实例名称，用户可修改</p>
                     * @return InstanceName <p>实例名称，用户可修改</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称，用户可修改</p>
                     * @param _instanceName <p>实例名称，用户可修改</p>
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
                     * 获取<p>实例所属应用 ID</p>
                     * @return AppId <p>实例所属应用 ID</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>实例所属应用 ID</p>
                     * @param _appId <p>实例所属应用 ID</p>
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
                     * 获取<p>实例所属项目 ID</p>
                     * @return ProjectId <p>实例所属项目 ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>实例所属项目 ID</p>
                     * @param _projectId <p>实例所属项目 ID</p>
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
                     * 获取<p>实例所在地域名称，如 ap-shanghai</p>
                     * @return Region <p>实例所在地域名称，如 ap-shanghai</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>实例所在地域名称，如 ap-shanghai</p>
                     * @param _region <p>实例所在地域名称，如 ap-shanghai</p>
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
                     * 获取<p>实例所在可用区名称，如 ap-shanghai-2</p>
                     * @return Zone <p>实例所在可用区名称，如 ap-shanghai-2</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>实例所在可用区名称，如 ap-shanghai-2</p>
                     * @param _zone <p>实例所在可用区名称，如 ap-shanghai-2</p>
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
                     * 获取<p>私有网络 ID，基础网络时为 0</p>
                     * @return VpcId <p>私有网络 ID，基础网络时为 0</p>
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置<p>私有网络 ID，基础网络时为 0</p>
                     * @param _vpcId <p>私有网络 ID，基础网络时为 0</p>
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
                     * 获取<p>子网 ID，基础网络时为 0</p>
                     * @return SubnetId <p>子网 ID，基础网络时为 0</p>
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置<p>子网 ID，基础网络时为 0</p>
                     * @param _subnetId <p>子网 ID，基础网络时为 0</p>
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
                     * 获取<p>实例状态：0 创建中，1 流程处理中， 2 运行中，3 实例未初始化，-1 实例已隔离，4 实例初始化中，5 实例删除中，6 实例重启中，7 数据迁移中</p>
                     * @return Status <p>实例状态：0 创建中，1 流程处理中， 2 运行中，3 实例未初始化，-1 实例已隔离，4 实例初始化中，5 实例删除中，6 实例重启中，7 数据迁移中</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>实例状态：0 创建中，1 流程处理中， 2 运行中，3 实例未初始化，-1 实例已隔离，4 实例初始化中，5 实例删除中，6 实例重启中，7 数据迁移中</p>
                     * @param _status <p>实例状态：0 创建中，1 流程处理中， 2 运行中，3 实例未初始化，-1 实例已隔离，4 实例初始化中，5 实例删除中，6 实例重启中，7 数据迁移中</p>
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
                     * 获取<p>内网 IP 地址</p>
                     * @return Vip <p>内网 IP 地址</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>内网 IP 地址</p>
                     * @param _vip <p>内网 IP 地址</p>
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
                     * 获取<p>内网端口</p>
                     * @return Vport <p>内网端口</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>内网端口</p>
                     * @param _vport <p>内网端口</p>
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
                     * 获取<p>外网访问的域名，公网可解析</p>
                     * @return WanDomain <p>外网访问的域名，公网可解析</p>
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置<p>外网访问的域名，公网可解析</p>
                     * @param _wanDomain <p>外网访问的域名，公网可解析</p>
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
                     * 获取<p>外网 IP 地址，公网可访问</p>
                     * @return WanVip <p>外网 IP 地址，公网可访问</p>
                     * 
                     */
                    std::string GetWanVip() const;

                    /**
                     * 设置<p>外网 IP 地址，公网可访问</p>
                     * @param _wanVip <p>外网 IP 地址，公网可访问</p>
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
                     * 获取<p>外网端口</p>
                     * @return WanPort <p>外网端口</p>
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置<p>外网端口</p>
                     * @param _wanPort <p>外网端口</p>
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
                     * 获取<p>实例创建时间，格式为 2006-01-02 15:04:05</p>
                     * @return CreateTime <p>实例创建时间，格式为 2006-01-02 15:04:05</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>实例创建时间，格式为 2006-01-02 15:04:05</p>
                     * @param _createTime <p>实例创建时间，格式为 2006-01-02 15:04:05</p>
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
                     * 获取<p>实例最后更新时间，格式为 2006-01-02 15:04:05</p>
                     * @return UpdateTime <p>实例最后更新时间，格式为 2006-01-02 15:04:05</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>实例最后更新时间，格式为 2006-01-02 15:04:05</p>
                     * @param _updateTime <p>实例最后更新时间，格式为 2006-01-02 15:04:05</p>
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
                     * 获取<p>自动续费标志：0 否，1 是</p>
                     * @return AutoRenewFlag <p>自动续费标志：0 否，1 是</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费标志：0 否，1 是</p>
                     * @param _autoRenewFlag <p>自动续费标志：0 否，1 是</p>
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
                     * 获取<p>实例到期时间，格式为 2006-01-02 15:04:05</p>
                     * @return PeriodEndTime <p>实例到期时间，格式为 2006-01-02 15:04:05</p>
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置<p>实例到期时间，格式为 2006-01-02 15:04:05</p>
                     * @param _periodEndTime <p>实例到期时间，格式为 2006-01-02 15:04:05</p>
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
                     * 获取<p>实例所属账号</p>
                     * @return Uin <p>实例所属账号</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>实例所属账号</p>
                     * @param _uin <p>实例所属账号</p>
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
                     * 获取<p>TDSQL 版本信息</p>
                     * @return TdsqlVersion <p>TDSQL 版本信息</p>
                     * 
                     */
                    std::string GetTdsqlVersion() const;

                    /**
                     * 设置<p>TDSQL 版本信息</p>
                     * @param _tdsqlVersion <p>TDSQL 版本信息</p>
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
                     * 获取<p>实例内存大小，单位 GB</p>
                     * @return Memory <p>实例内存大小，单位 GB</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>实例内存大小，单位 GB</p>
                     * @param _memory <p>实例内存大小，单位 GB</p>
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
                     * 获取<p>实例存储大小，单位 GB</p>
                     * @return Storage <p>实例存储大小，单位 GB</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>实例存储大小，单位 GB</p>
                     * @param _storage <p>实例存储大小，单位 GB</p>
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
                     * 获取<p>字符串型的私有网络ID</p>
                     * @return UniqueVpcId <p>字符串型的私有网络ID</p>
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置<p>字符串型的私有网络ID</p>
                     * @param _uniqueVpcId <p>字符串型的私有网络ID</p>
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
                     * 获取<p>字符串型的私有网络子网ID</p>
                     * @return UniqueSubnetId <p>字符串型的私有网络子网ID</p>
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置<p>字符串型的私有网络子网ID</p>
                     * @param _uniqueSubnetId <p>字符串型的私有网络子网ID</p>
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
                     * 获取<p>原始实例ID（过时字段，请勿依赖该值）</p>
                     * @return OriginSerialId <p>原始实例ID（过时字段，请勿依赖该值）</p>
                     * 
                     */
                    std::string GetOriginSerialId() const;

                    /**
                     * 设置<p>原始实例ID（过时字段，请勿依赖该值）</p>
                     * @param _originSerialId <p>原始实例ID（过时字段，请勿依赖该值）</p>
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
                     * 获取<p>节点数，2为一主一从，3为一主二从</p>
                     * @return NodeCount <p>节点数，2为一主一从，3为一主二从</p>
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置<p>节点数，2为一主一从，3为一主二从</p>
                     * @param _nodeCount <p>节点数，2为一主一从，3为一主二从</p>
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
                     * 获取<p>是否临时实例，0为否，非0为是</p>
                     * @return IsTmp <p>是否临时实例，0为否，非0为是</p>
                     * 
                     */
                    uint64_t GetIsTmp() const;

                    /**
                     * 设置<p>是否临时实例，0为否，非0为是</p>
                     * @param _isTmp <p>是否临时实例，0为否，非0为是</p>
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
                     * 获取<p>独享集群ID，为空表示为普通实例</p>
                     * @return ExclusterId <p>独享集群ID，为空表示为普通实例</p>
                     * 
                     */
                    std::string GetExclusterId() const;

                    /**
                     * 设置<p>独享集群ID，为空表示为普通实例</p>
                     * @param _exclusterId <p>独享集群ID，为空表示为普通实例</p>
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
                     * 获取<p>数字实例ID（过时字段，请勿依赖该值）</p>
                     * @return Id <p>数字实例ID（过时字段，请勿依赖该值）</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>数字实例ID（过时字段，请勿依赖该值）</p>
                     * @param _id <p>数字实例ID（过时字段，请勿依赖该值）</p>
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
                     * 获取<p>产品类型 ID</p>
                     * @return Pid <p>产品类型 ID</p>
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置<p>产品类型 ID</p>
                     * @param _pid <p>产品类型 ID</p>
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
                     * 获取<p>最大 Qps 值</p>
                     * @return Qps <p>最大 Qps 值</p>
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置<p>最大 Qps 值</p>
                     * @param _qps <p>最大 Qps 值</p>
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
                     * 获取<p>付费模式</p>
                     * @return Paymode <p>付费模式</p>
                     * 
                     */
                    std::string GetPaymode() const;

                    /**
                     * 设置<p>付费模式</p>
                     * @param _paymode <p>付费模式</p>
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
                     * 获取<p>实例处于异步任务时的异步任务流程ID</p>
                     * @return Locker <p>实例处于异步任务时的异步任务流程ID</p>
                     * 
                     */
                    int64_t GetLocker() const;

                    /**
                     * 设置<p>实例处于异步任务时的异步任务流程ID</p>
                     * @param _locker <p>实例处于异步任务时的异步任务流程ID</p>
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
                     * 获取<p>实例目前运行状态描述</p>
                     * @return StatusDesc <p>实例目前运行状态描述</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>实例目前运行状态描述</p>
                     * @param _statusDesc <p>实例目前运行状态描述</p>
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
                     * 获取<p>外网状态，0-未开通；1-已开通；2-关闭；3-开通中</p>
                     * @return WanStatus <p>外网状态，0-未开通；1-已开通；2-关闭；3-开通中</p>
                     * 
                     */
                    int64_t GetWanStatus() const;

                    /**
                     * 设置<p>外网状态，0-未开通；1-已开通；2-关闭；3-开通中</p>
                     * @param _wanStatus <p>外网状态，0-未开通；1-已开通；2-关闭；3-开通中</p>
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
                     * 获取<p>该实例是否支持审计。1-支持；0-不支持</p>
                     * @return IsAuditSupported <p>该实例是否支持审计。1-支持；0-不支持</p>
                     * 
                     */
                    uint64_t GetIsAuditSupported() const;

                    /**
                     * 设置<p>该实例是否支持审计。1-支持；0-不支持</p>
                     * @param _isAuditSupported <p>该实例是否支持审计。1-支持；0-不支持</p>
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
                     * 获取<p>机器型号</p>
                     * @return Machine <p>机器型号</p>
                     * 
                     */
                    std::string GetMachine() const;

                    /**
                     * 设置<p>机器型号</p>
                     * @param _machine <p>机器型号</p>
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
                     * 获取<p>是否支持数据加密。1-支持；0-不支持</p>
                     * @return IsEncryptSupported <p>是否支持数据加密。1-支持；0-不支持</p>
                     * 
                     */
                    int64_t GetIsEncryptSupported() const;

                    /**
                     * 设置<p>是否支持数据加密。1-支持；0-不支持</p>
                     * @param _isEncryptSupported <p>是否支持数据加密。1-支持；0-不支持</p>
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
                     * 获取<p>实例CPU核数</p>
                     * @return Cpu <p>实例CPU核数</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>实例CPU核数</p>
                     * @param _cpu <p>实例CPU核数</p>
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
                     * 获取<p>实例IPv6标志</p>
                     * @return Ipv6Flag <p>实例IPv6标志</p>
                     * 
                     */
                    uint64_t GetIpv6Flag() const;

                    /**
                     * 设置<p>实例IPv6标志</p>
                     * @param _ipv6Flag <p>实例IPv6标志</p>
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
                     * 获取<p>内网IPv6</p>
                     * @return Vipv6 <p>内网IPv6</p>
                     * 
                     */
                    std::string GetVipv6() const;

                    /**
                     * 设置<p>内网IPv6</p>
                     * @param _vipv6 <p>内网IPv6</p>
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
                     * 获取<p>外网IPv6</p>
                     * @return WanVipv6 <p>外网IPv6</p>
                     * 
                     */
                    std::string GetWanVipv6() const;

                    /**
                     * 设置<p>外网IPv6</p>
                     * @param _wanVipv6 <p>外网IPv6</p>
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
                     * 获取<p>外网IPv6端口</p>
                     * @return WanPortIpv6 <p>外网IPv6端口</p>
                     * 
                     */
                    uint64_t GetWanPortIpv6() const;

                    /**
                     * 设置<p>外网IPv6端口</p>
                     * @param _wanPortIpv6 <p>外网IPv6端口</p>
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
                     * 获取<p>外网IPv6状态</p>
                     * @return WanStatusIpv6 <p>外网IPv6状态</p>
                     * 
                     */
                    uint64_t GetWanStatusIpv6() const;

                    /**
                     * 设置<p>外网IPv6状态</p>
                     * @param _wanStatusIpv6 <p>外网IPv6状态</p>
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
                     * 获取<p>数据库引擎</p>
                     * @return DbEngine <p>数据库引擎</p>
                     * 
                     */
                    std::string GetDbEngine() const;

                    /**
                     * 设置<p>数据库引擎</p>
                     * @param _dbEngine <p>数据库引擎</p>
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
                     * 获取<p>数据库版本</p>
                     * @return DbVersion <p>数据库版本</p>
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置<p>数据库版本</p>
                     * @param _dbVersion <p>数据库版本</p>
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
                     * 获取<p>DCN标志，0-无，1-主实例，2-灾备实例</p>
                     * @return DcnFlag <p>DCN标志，0-无，1-主实例，2-灾备实例</p>
                     * 
                     */
                    int64_t GetDcnFlag() const;

                    /**
                     * 设置<p>DCN标志，0-无，1-主实例，2-灾备实例</p>
                     * @param _dcnFlag <p>DCN标志，0-无，1-主实例，2-灾备实例</p>
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
                     * 获取<p>DCN状态，0-无，1-创建中，2-同步中，3-已断开</p>
                     * @return DcnStatus <p>DCN状态，0-无，1-创建中，2-同步中，3-已断开</p>
                     * 
                     */
                    int64_t GetDcnStatus() const;

                    /**
                     * 设置<p>DCN状态，0-无，1-创建中，2-同步中，3-已断开</p>
                     * @param _dcnStatus <p>DCN状态，0-无，1-创建中，2-同步中，3-已断开</p>
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
                     * 获取<p>DCN灾备实例数</p>
                     * @return DcnDstNum <p>DCN灾备实例数</p>
                     * 
                     */
                    int64_t GetDcnDstNum() const;

                    /**
                     * 设置<p>DCN灾备实例数</p>
                     * @param _dcnDstNum <p>DCN灾备实例数</p>
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
                     * 获取<p>1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）</p>
                     * @return InstanceType <p>1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）</p>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置<p>1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）</p>
                     * @param _instanceType <p>1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）</p>
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
                     * 获取<p>实例标签信息</p>
                     * @return ResourceTags <p>实例标签信息</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>实例标签信息</p>
                     * @param _resourceTags <p>实例标签信息</p>
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
                     * 获取<p>数据库版本</p>
                     * @return DbVersionId <p>数据库版本</p>
                     * 
                     */
                    std::string GetDbVersionId() const;

                    /**
                     * 设置<p>数据库版本</p>
                     * @param _dbVersionId <p>数据库版本</p>
                     * 
                     */
                    void SetDbVersionId(const std::string& _dbVersionId);

                    /**
                     * 判断参数 DbVersionId 是否已赋值
                     * @return DbVersionId 是否已赋值
                     * 
                     */
                    bool DbVersionIdHasBeenSet() const;

                    /**
                     * 获取<p>实例删除保护标签，1: 已开启删除保护，0: 未开启删除保护</p>
                     * @return ProtectedProperty <p>实例删除保护标签，1: 已开启删除保护，0: 未开启删除保护</p>
                     * 
                     */
                    int64_t GetProtectedProperty() const;

                    /**
                     * 设置<p>实例删除保护标签，1: 已开启删除保护，0: 未开启删除保护</p>
                     * @param _protectedProperty <p>实例删除保护标签，1: 已开启删除保护，0: 未开启删除保护</p>
                     * 
                     */
                    void SetProtectedProperty(const int64_t& _protectedProperty);

                    /**
                     * 判断参数 ProtectedProperty 是否已赋值
                     * @return ProtectedProperty 是否已赋值
                     * 
                     */
                    bool ProtectedPropertyHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，唯一标识一个 TDSQL 实例</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称，用户可修改</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例所属应用 ID</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>实例所属项目 ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

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
                     * <p>私有网络 ID，基础网络时为 0</p>
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网 ID，基础网络时为 0</p>
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>实例状态：0 创建中，1 流程处理中， 2 运行中，3 实例未初始化，-1 实例已隔离，4 实例初始化中，5 实例删除中，6 实例重启中，7 数据迁移中</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

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
                     * <p>实例创建时间，格式为 2006-01-02 15:04:05</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>实例最后更新时间，格式为 2006-01-02 15:04:05</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>自动续费标志：0 否，1 是</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>实例到期时间，格式为 2006-01-02 15:04:05</p>
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * <p>实例所属账号</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

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
                     * <p>字符串型的私有网络ID</p>
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * <p>字符串型的私有网络子网ID</p>
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * <p>原始实例ID（过时字段，请勿依赖该值）</p>
                     */
                    std::string m_originSerialId;
                    bool m_originSerialIdHasBeenSet;

                    /**
                     * <p>节点数，2为一主一从，3为一主二从</p>
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>是否临时实例，0为否，非0为是</p>
                     */
                    uint64_t m_isTmp;
                    bool m_isTmpHasBeenSet;

                    /**
                     * <p>独享集群ID，为空表示为普通实例</p>
                     */
                    std::string m_exclusterId;
                    bool m_exclusterIdHasBeenSet;

                    /**
                     * <p>数字实例ID（过时字段，请勿依赖该值）</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>产品类型 ID</p>
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * <p>最大 Qps 值</p>
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * <p>付费模式</p>
                     */
                    std::string m_paymode;
                    bool m_paymodeHasBeenSet;

                    /**
                     * <p>实例处于异步任务时的异步任务流程ID</p>
                     */
                    int64_t m_locker;
                    bool m_lockerHasBeenSet;

                    /**
                     * <p>实例目前运行状态描述</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>外网状态，0-未开通；1-已开通；2-关闭；3-开通中</p>
                     */
                    int64_t m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * <p>该实例是否支持审计。1-支持；0-不支持</p>
                     */
                    uint64_t m_isAuditSupported;
                    bool m_isAuditSupportedHasBeenSet;

                    /**
                     * <p>机器型号</p>
                     */
                    std::string m_machine;
                    bool m_machineHasBeenSet;

                    /**
                     * <p>是否支持数据加密。1-支持；0-不支持</p>
                     */
                    int64_t m_isEncryptSupported;
                    bool m_isEncryptSupportedHasBeenSet;

                    /**
                     * <p>实例CPU核数</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>实例IPv6标志</p>
                     */
                    uint64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                    /**
                     * <p>内网IPv6</p>
                     */
                    std::string m_vipv6;
                    bool m_vipv6HasBeenSet;

                    /**
                     * <p>外网IPv6</p>
                     */
                    std::string m_wanVipv6;
                    bool m_wanVipv6HasBeenSet;

                    /**
                     * <p>外网IPv6端口</p>
                     */
                    uint64_t m_wanPortIpv6;
                    bool m_wanPortIpv6HasBeenSet;

                    /**
                     * <p>外网IPv6状态</p>
                     */
                    uint64_t m_wanStatusIpv6;
                    bool m_wanStatusIpv6HasBeenSet;

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
                     * <p>实例标签信息</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>数据库版本</p>
                     */
                    std::string m_dbVersionId;
                    bool m_dbVersionIdHasBeenSet;

                    /**
                     * <p>实例删除保护标签，1: 已开启删除保护，0: 未开启删除保护</p>
                     */
                    int64_t m_protectedProperty;
                    bool m_protectedPropertyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DBINSTANCE_H_
