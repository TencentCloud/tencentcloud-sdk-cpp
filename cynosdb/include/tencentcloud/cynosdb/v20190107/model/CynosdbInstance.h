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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceNetInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/ResourcePackage.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceAbility.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 实例信息
                */
                class CynosdbInstance : public AbstractModel
                {
                public:
                    CynosdbInstance();
                    ~CynosdbInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户Uin
                     * @return Uin 用户Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户Uin
                     * @param _uin 用户Uin
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
                     * 获取用户AppId
                     * @return AppId 用户AppId
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户AppId
                     * @param _appId 用户AppId
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
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

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
                     * 获取实例状态
                     * @return Status 实例状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态
                     * @param _status 实例状态
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
                     * 获取实例状态中文描述
                     * @return StatusDesc 实例状态中文描述
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置实例状态中文描述
                     * @param _statusDesc 实例状态中文描述
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
                     * 获取实例形态，是否为serverless实例
                     * @return DbMode 实例形态，是否为serverless实例
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置实例形态，是否为serverless实例
                     * @param _dbMode 实例形态，是否为serverless实例
                     * 
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     * 
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取数据库类型
                     * @return DbType 数据库类型
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型
                     * @param _dbType 数据库类型
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

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
                     * 获取Cpu，单位：核
                     * @return Cpu Cpu，单位：核
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Cpu，单位：核
                     * @param _cpu Cpu，单位：核
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
                     * 获取内存，单位：GB
                     * @return Memory 内存，单位：GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存，单位：GB
                     * @param _memory 内存，单位：GB
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
                     * 获取存储量，单位：GB
                     * @return Storage 存储量，单位：GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置存储量，单位：GB
                     * @param _storage 存储量，单位：GB
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
                     * 获取实例类型
                     * @return InstanceType 实例类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceType 实例类型
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
                     * 获取实例当前角色
                     * @return InstanceRole 实例当前角色
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置实例当前角色
                     * @param _instanceRole 实例当前角色
                     * 
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
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
                     * 获取VPC网络ID
                     * @return VpcId VPC网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC网络ID
                     * @param _vpcId VPC网络ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取实例内网IP
                     * @return Vip 实例内网IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置实例内网IP
                     * @param _vip 实例内网IP
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
                     * 获取实例内网端口
                     * @return Vport 实例内网端口
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置实例内网端口
                     * @param _vport 实例内网端口
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
                     * 获取付费模式
                     * @return PayMode 付费模式
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式
                     * @param _payMode 付费模式
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
                     * 获取实例过期时间
                     * @return PeriodEndTime 实例过期时间
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置实例过期时间
                     * @param _periodEndTime 实例过期时间
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
                     * 获取销毁期限
                     * @return DestroyDeadlineText 销毁期限
                     * 
                     */
                    std::string GetDestroyDeadlineText() const;

                    /**
                     * 设置销毁期限
                     * @param _destroyDeadlineText 销毁期限
                     * 
                     */
                    void SetDestroyDeadlineText(const std::string& _destroyDeadlineText);

                    /**
                     * 判断参数 DestroyDeadlineText 是否已赋值
                     * @return DestroyDeadlineText 是否已赋值
                     * 
                     */
                    bool DestroyDeadlineTextHasBeenSet() const;

                    /**
                     * 获取隔离时间
                     * @return IsolateTime 隔离时间
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置隔离时间
                     * @param _isolateTime 隔离时间
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取网络类型
                     * @return NetType 网络类型
                     * 
                     */
                    int64_t GetNetType() const;

                    /**
                     * 设置网络类型
                     * @param _netType 网络类型
                     * 
                     */
                    void SetNetType(const int64_t& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取外网域名
                     * @return WanDomain 外网域名
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置外网域名
                     * @param _wanDomain 外网域名
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
                     * 获取外网IP
                     * @return WanIP 外网IP
                     * 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置外网IP
                     * @param _wanIP 外网IP
                     * 
                     */
                    void SetWanIP(const std::string& _wanIP);

                    /**
                     * 判断参数 WanIP 是否已赋值
                     * @return WanIP 是否已赋值
                     * 
                     */
                    bool WanIPHasBeenSet() const;

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
                     * 获取外网状态
                     * @return WanStatus 外网状态
                     * 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置外网状态
                     * @param _wanStatus 外网状态
                     * 
                     */
                    void SetWanStatus(const std::string& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

                    /**
                     * 获取实例销毁时间
                     * @return DestroyTime 实例销毁时间
                     * 
                     */
                    std::string GetDestroyTime() const;

                    /**
                     * 设置实例销毁时间
                     * @param _destroyTime 实例销毁时间
                     * 
                     */
                    void SetDestroyTime(const std::string& _destroyTime);

                    /**
                     * 判断参数 DestroyTime 是否已赋值
                     * @return DestroyTime 是否已赋值
                     * 
                     */
                    bool DestroyTimeHasBeenSet() const;

                    /**
                     * 获取Cynos内核版本
                     * @return CynosVersion Cynos内核版本
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置Cynos内核版本
                     * @param _cynosVersion Cynos内核版本
                     * 
                     */
                    void SetCynosVersion(const std::string& _cynosVersion);

                    /**
                     * 判断参数 CynosVersion 是否已赋值
                     * @return CynosVersion 是否已赋值
                     * 
                     */
                    bool CynosVersionHasBeenSet() const;

                    /**
                     * 获取正在处理的任务
                     * @return ProcessingTask 正在处理的任务
                     * 
                     */
                    std::string GetProcessingTask() const;

                    /**
                     * 设置正在处理的任务
                     * @param _processingTask 正在处理的任务
                     * 
                     */
                    void SetProcessingTask(const std::string& _processingTask);

                    /**
                     * 判断参数 ProcessingTask 是否已赋值
                     * @return ProcessingTask 是否已赋值
                     * 
                     */
                    bool ProcessingTaskHasBeenSet() const;

                    /**
                     * 获取续费标志
                     * @return RenewFlag 续费标志
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置续费标志
                     * @param _renewFlag 续费标志
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取serverless实例cpu下限
                     * @return MinCpu serverless实例cpu下限
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置serverless实例cpu下限
                     * @param _minCpu serverless实例cpu下限
                     * 
                     */
                    void SetMinCpu(const double& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     * 
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取serverless实例cpu上限
                     * @return MaxCpu serverless实例cpu上限
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置serverless实例cpu上限
                     * @param _maxCpu serverless实例cpu上限
                     * 
                     */
                    void SetMaxCpu(const double& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
                     * 
                     */
                    bool MaxCpuHasBeenSet() const;

                    /**
                     * 获取serverless实例状态, 可选值：
resume
pause
                     * @return ServerlessStatus serverless实例状态, 可选值：
resume
pause
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置serverless实例状态, 可选值：
resume
pause
                     * @param _serverlessStatus serverless实例状态, 可选值：
resume
pause
                     * 
                     */
                    void SetServerlessStatus(const std::string& _serverlessStatus);

                    /**
                     * 判断参数 ServerlessStatus 是否已赋值
                     * @return ServerlessStatus 是否已赋值
                     * 
                     */
                    bool ServerlessStatusHasBeenSet() const;

                    /**
                     * 获取预付费存储Id
                     * @return StorageId 预付费存储Id
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置预付费存储Id
                     * @param _storageId 预付费存储Id
                     * 
                     */
                    void SetStorageId(const std::string& _storageId);

                    /**
                     * 判断参数 StorageId 是否已赋值
                     * @return StorageId 是否已赋值
                     * 
                     */
                    bool StorageIdHasBeenSet() const;

                    /**
                     * 获取存储付费类型
                     * @return StoragePayMode 存储付费类型
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置存储付费类型
                     * @param _storagePayMode 存储付费类型
                     * 
                     */
                    void SetStoragePayMode(const int64_t& _storagePayMode);

                    /**
                     * 判断参数 StoragePayMode 是否已赋值
                     * @return StoragePayMode 是否已赋值
                     * 
                     */
                    bool StoragePayModeHasBeenSet() const;

                    /**
                     * 获取物理区
                     * @return PhysicalZone 物理区
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置物理区
                     * @param _physicalZone 物理区
                     * 
                     */
                    void SetPhysicalZone(const std::string& _physicalZone);

                    /**
                     * 判断参数 PhysicalZone 是否已赋值
                     * @return PhysicalZone 是否已赋值
                     * 
                     */
                    bool PhysicalZoneHasBeenSet() const;

                    /**
                     * 获取商业类型
                     * @return BusinessType 商业类型
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置商业类型
                     * @param _businessType 商业类型
                     * 
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取任务
                     * @return Tasks 任务
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置任务
                     * @param _tasks 任务
                     * 
                     */
                    void SetTasks(const std::vector<ObjectTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取是否冻结
                     * @return IsFreeze 是否冻结
                     * 
                     */
                    std::string GetIsFreeze() const;

                    /**
                     * 设置是否冻结
                     * @param _isFreeze 是否冻结
                     * 
                     */
                    void SetIsFreeze(const std::string& _isFreeze);

                    /**
                     * 判断参数 IsFreeze 是否已赋值
                     * @return IsFreeze 是否已赋值
                     * 
                     */
                    bool IsFreezeHasBeenSet() const;

                    /**
                     * 获取资源标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceTags 资源标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置资源标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceTags 资源标签
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
                     * 获取主可用区
                     * @return MasterZone 主可用区
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置主可用区
                     * @param _masterZone 主可用区
                     * 
                     */
                    void SetMasterZone(const std::string& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取备可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlaveZones 备可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 设置备可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slaveZones 备可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSlaveZones(const std::vector<std::string>& _slaveZones);

                    /**
                     * 判断参数 SlaveZones 是否已赋值
                     * @return SlaveZones 是否已赋值
                     * 
                     */
                    bool SlaveZonesHasBeenSet() const;

                    /**
                     * 获取实例网络信息
                     * @return InstanceNetInfo 实例网络信息
                     * 
                     */
                    std::vector<InstanceNetInfo> GetInstanceNetInfo() const;

                    /**
                     * 设置实例网络信息
                     * @param _instanceNetInfo 实例网络信息
                     * 
                     */
                    void SetInstanceNetInfo(const std::vector<InstanceNetInfo>& _instanceNetInfo);

                    /**
                     * 判断参数 InstanceNetInfo 是否已赋值
                     * @return InstanceNetInfo 是否已赋值
                     * 
                     */
                    bool InstanceNetInfoHasBeenSet() const;

                    /**
                     * 获取实例绑定资源包信息（此处只返回计算资源包，即packageType=CCU）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePackages 实例绑定资源包信息（此处只返回计算资源包，即packageType=CCU）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourcePackage> GetResourcePackages() const;

                    /**
                     * 设置实例绑定资源包信息（此处只返回计算资源包，即packageType=CCU）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourcePackages 实例绑定资源包信息（此处只返回计算资源包，即packageType=CCU）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourcePackages(const std::vector<ResourcePackage>& _resourcePackages);

                    /**
                     * 判断参数 ResourcePackages 是否已赋值
                     * @return ResourcePackages 是否已赋值
                     * 
                     */
                    bool ResourcePackagesHasBeenSet() const;

                    /**
                     * 获取实例索引形态,可选值【mixedRowColumn（行列混存），onlyRowIndex（仅行存）】
                     * @return InstanceIndexMode 实例索引形态,可选值【mixedRowColumn（行列混存），onlyRowIndex（仅行存）】
                     * 
                     */
                    std::string GetInstanceIndexMode() const;

                    /**
                     * 设置实例索引形态,可选值【mixedRowColumn（行列混存），onlyRowIndex（仅行存）】
                     * @param _instanceIndexMode 实例索引形态,可选值【mixedRowColumn（行列混存），onlyRowIndex（仅行存）】
                     * 
                     */
                    void SetInstanceIndexMode(const std::string& _instanceIndexMode);

                    /**
                     * 判断参数 InstanceIndexMode 是否已赋值
                     * @return InstanceIndexMode 是否已赋值
                     * 
                     */
                    bool InstanceIndexModeHasBeenSet() const;

                    /**
                     * 获取当前实例支持的能力
                     * @return InstanceAbility 当前实例支持的能力
                     * 
                     */
                    InstanceAbility GetInstanceAbility() const;

                    /**
                     * 设置当前实例支持的能力
                     * @param _instanceAbility 当前实例支持的能力
                     * 
                     */
                    void SetInstanceAbility(const InstanceAbility& _instanceAbility);

                    /**
                     * 判断参数 InstanceAbility 是否已赋值
                     * @return InstanceAbility 是否已赋值
                     * 
                     */
                    bool InstanceAbilityHasBeenSet() const;

                    /**
                     * 获取实例机器类型
                     * @return DeviceType 实例机器类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置实例机器类型
                     * @param _deviceType 实例机器类型
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取实例存储类型
                     * @return InstanceStorageType 实例存储类型
                     * 
                     */
                    std::string GetInstanceStorageType() const;

                    /**
                     * 设置实例存储类型
                     * @param _instanceStorageType 实例存储类型
                     * 
                     */
                    void SetInstanceStorageType(const std::string& _instanceStorageType);

                    /**
                     * 判断参数 InstanceStorageType 是否已赋值
                     * @return InstanceStorageType 是否已赋值
                     * 
                     */
                    bool InstanceStorageTypeHasBeenSet() const;

                    /**
                     * 获取未知字段
                     * @return CynosVersionTag 未知字段
                     * 
                     */
                    std::string GetCynosVersionTag() const;

                    /**
                     * 设置未知字段
                     * @param _cynosVersionTag 未知字段
                     * 
                     */
                    void SetCynosVersionTag(const std::string& _cynosVersionTag);

                    /**
                     * 判断参数 CynosVersionTag 是否已赋值
                     * @return CynosVersionTag 是否已赋值
                     * 
                     */
                    bool CynosVersionTagHasBeenSet() const;

                    /**
                     * 获取libradb 节点信息
                     * @return NodeList libradb 节点信息
                     * 
                     */
                    std::vector<std::string> GetNodeList() const;

                    /**
                     * 设置libradb 节点信息
                     * @param _nodeList libradb 节点信息
                     * 
                     */
                    void SetNodeList(const std::vector<std::string>& _nodeList);

                    /**
                     * 判断参数 NodeList 是否已赋值
                     * @return NodeList 是否已赋值
                     * 
                     */
                    bool NodeListHasBeenSet() const;

                    /**
                     * 获取全球数据库唯一标识
                     * @return GdnId 全球数据库唯一标识
                     * 
                     */
                    std::string GetGdnId() const;

                    /**
                     * 设置全球数据库唯一标识
                     * @param _gdnId 全球数据库唯一标识
                     * 
                     */
                    void SetGdnId(const std::string& _gdnId);

                    /**
                     * 判断参数 GdnId 是否已赋值
                     * @return GdnId 是否已赋值
                     * 
                     */
                    bool GdnIdHasBeenSet() const;

                private:

                    /**
                     * 用户Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 用户AppId
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

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
                     * 实例状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例状态中文描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 实例形态，是否为serverless实例
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * 数据库类型
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 数据库版本
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * Cpu，单位：核
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存，单位：GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 存储量，单位：GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例当前角色
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * VPC网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例内网IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 实例内网端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 付费模式
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 实例过期时间
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * 销毁期限
                     */
                    std::string m_destroyDeadlineText;
                    bool m_destroyDeadlineTextHasBeenSet;

                    /**
                     * 隔离时间
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * 网络类型
                     */
                    int64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 外网域名
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * 外网IP
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * 外网端口
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * 外网状态
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * 实例销毁时间
                     */
                    std::string m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                    /**
                     * Cynos内核版本
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * 正在处理的任务
                     */
                    std::string m_processingTask;
                    bool m_processingTaskHasBeenSet;

                    /**
                     * 续费标志
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * serverless实例cpu下限
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * serverless实例cpu上限
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * serverless实例状态, 可选值：
resume
pause
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * 预付费存储Id
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * 存储付费类型
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * 物理区
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * 商业类型
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 任务
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 是否冻结
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * 资源标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 主可用区
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * 备可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * 实例网络信息
                     */
                    std::vector<InstanceNetInfo> m_instanceNetInfo;
                    bool m_instanceNetInfoHasBeenSet;

                    /**
                     * 实例绑定资源包信息（此处只返回计算资源包，即packageType=CCU）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourcePackage> m_resourcePackages;
                    bool m_resourcePackagesHasBeenSet;

                    /**
                     * 实例索引形态,可选值【mixedRowColumn（行列混存），onlyRowIndex（仅行存）】
                     */
                    std::string m_instanceIndexMode;
                    bool m_instanceIndexModeHasBeenSet;

                    /**
                     * 当前实例支持的能力
                     */
                    InstanceAbility m_instanceAbility;
                    bool m_instanceAbilityHasBeenSet;

                    /**
                     * 实例机器类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 实例存储类型
                     */
                    std::string m_instanceStorageType;
                    bool m_instanceStorageTypeHasBeenSet;

                    /**
                     * 未知字段
                     */
                    std::string m_cynosVersionTag;
                    bool m_cynosVersionTagHasBeenSet;

                    /**
                     * libradb 节点信息
                     */
                    std::vector<std::string> m_nodeList;
                    bool m_nodeListHasBeenSet;

                    /**
                     * 全球数据库唯一标识
                     */
                    std::string m_gdnId;
                    bool m_gdnIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCE_H_
