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
                     * 获取<p>用户Uin</p>
                     * @return Uin <p>用户Uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>用户Uin</p>
                     * @param _uin <p>用户Uin</p>
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
                     * 获取<p>用户AppId</p>
                     * @return AppId <p>用户AppId</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>用户AppId</p>
                     * @param _appId <p>用户AppId</p>
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
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _clusterName <p>集群名称</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
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
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
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
                     * 获取<p>实例状态</p>
                     * @return Status <p>实例状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>实例状态</p>
                     * @param _status <p>实例状态</p>
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
                     * 获取<p>实例状态中文描述</p>
                     * @return StatusDesc <p>实例状态中文描述</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>实例状态中文描述</p>
                     * @param _statusDesc <p>实例状态中文描述</p>
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
                     * 获取<p>实例形态，是否为serverless实例</p>
                     * @return DbMode <p>实例形态，是否为serverless实例</p>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置<p>实例形态，是否为serverless实例</p>
                     * @param _dbMode <p>实例形态，是否为serverless实例</p>
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
                     * 获取<p>数据库类型</p>
                     * @return DbType <p>数据库类型</p>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>数据库类型</p>
                     * @param _dbType <p>数据库类型</p>
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
                     * 获取<p>Cpu，单位：核</p>
                     * @return Cpu <p>Cpu，单位：核</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Cpu，单位：核</p>
                     * @param _cpu <p>Cpu，单位：核</p>
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
                     * 获取<p>内存，单位：GB</p>
                     * @return Memory <p>内存，单位：GB</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>内存，单位：GB</p>
                     * @param _memory <p>内存，单位：GB</p>
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
                     * 获取<p>存储量，单位：GB</p>
                     * @return Storage <p>存储量，单位：GB</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>存储量，单位：GB</p>
                     * @param _storage <p>存储量，单位：GB</p>
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
                     * 获取<p>实例当前角色</p>
                     * @return InstanceRole <p>实例当前角色</p>
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置<p>实例当前角色</p>
                     * @param _instanceRole <p>实例当前角色</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>VPC网络ID</p>
                     * @return VpcId <p>VPC网络ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC网络ID</p>
                     * @param _vpcId <p>VPC网络ID</p>
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
                     * 获取<p>子网ID</p>
                     * @return SubnetId <p>子网ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网ID</p>
                     * @param _subnetId <p>子网ID</p>
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
                     * 获取<p>实例内网IP</p>
                     * @return Vip <p>实例内网IP</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>实例内网IP</p>
                     * @param _vip <p>实例内网IP</p>
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
                     * 获取<p>实例内网端口</p>
                     * @return Vport <p>实例内网端口</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>实例内网端口</p>
                     * @param _vport <p>实例内网端口</p>
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
                     * 获取<p>付费模式</p>
                     * @return PayMode <p>付费模式</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>付费模式</p>
                     * @param _payMode <p>付费模式</p>
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
                     * 获取<p>实例过期时间</p>
                     * @return PeriodEndTime <p>实例过期时间</p>
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置<p>实例过期时间</p>
                     * @param _periodEndTime <p>实例过期时间</p>
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
                     * 获取<p>销毁期限</p>
                     * @return DestroyDeadlineText <p>销毁期限</p>
                     * 
                     */
                    std::string GetDestroyDeadlineText() const;

                    /**
                     * 设置<p>销毁期限</p>
                     * @param _destroyDeadlineText <p>销毁期限</p>
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
                     * 获取<p>隔离时间</p>
                     * @return IsolateTime <p>隔离时间</p>
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置<p>隔离时间</p>
                     * @param _isolateTime <p>隔离时间</p>
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
                     * 获取<p>网络类型</p>
                     * @return NetType <p>网络类型</p>
                     * 
                     */
                    int64_t GetNetType() const;

                    /**
                     * 设置<p>网络类型</p>
                     * @param _netType <p>网络类型</p>
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
                     * 获取<p>外网域名</p>
                     * @return WanDomain <p>外网域名</p>
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置<p>外网域名</p>
                     * @param _wanDomain <p>外网域名</p>
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
                     * 获取<p>外网IP</p>
                     * @return WanIP <p>外网IP</p>
                     * 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置<p>外网IP</p>
                     * @param _wanIP <p>外网IP</p>
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
                     * 获取<p>外网状态</p>
                     * @return WanStatus <p>外网状态</p>
                     * 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置<p>外网状态</p>
                     * @param _wanStatus <p>外网状态</p>
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
                     * 获取<p>实例销毁时间</p>
                     * @return DestroyTime <p>实例销毁时间</p>
                     * 
                     */
                    std::string GetDestroyTime() const;

                    /**
                     * 设置<p>实例销毁时间</p>
                     * @param _destroyTime <p>实例销毁时间</p>
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
                     * 获取<p>Cynos内核版本</p>
                     * @return CynosVersion <p>Cynos内核版本</p>
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置<p>Cynos内核版本</p>
                     * @param _cynosVersion <p>Cynos内核版本</p>
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
                     * 获取<p>正在处理的任务</p>
                     * @return ProcessingTask <p>正在处理的任务</p>
                     * 
                     */
                    std::string GetProcessingTask() const;

                    /**
                     * 设置<p>正在处理的任务</p>
                     * @param _processingTask <p>正在处理的任务</p>
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
                     * 获取<p>续费标志</p>
                     * @return RenewFlag <p>续费标志</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>续费标志</p>
                     * @param _renewFlag <p>续费标志</p>
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
                     * 获取<p>serverless实例cpu下限</p>
                     * @return MinCpu <p>serverless实例cpu下限</p>
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置<p>serverless实例cpu下限</p>
                     * @param _minCpu <p>serverless实例cpu下限</p>
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
                     * 获取<p>serverless实例cpu上限</p>
                     * @return MaxCpu <p>serverless实例cpu上限</p>
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置<p>serverless实例cpu上限</p>
                     * @param _maxCpu <p>serverless实例cpu上限</p>
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
                     * 获取<p>serverless实例状态, 可选值：<br>resume<br>pause</p>
                     * @return ServerlessStatus <p>serverless实例状态, 可选值：<br>resume<br>pause</p>
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置<p>serverless实例状态, 可选值：<br>resume<br>pause</p>
                     * @param _serverlessStatus <p>serverless实例状态, 可选值：<br>resume<br>pause</p>
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
                     * 获取<p>预付费存储Id</p>
                     * @return StorageId <p>预付费存储Id</p>
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置<p>预付费存储Id</p>
                     * @param _storageId <p>预付费存储Id</p>
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
                     * 获取<p>存储付费类型</p>
                     * @return StoragePayMode <p>存储付费类型</p>
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置<p>存储付费类型</p>
                     * @param _storagePayMode <p>存储付费类型</p>
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
                     * 获取<p>物理区</p>
                     * @return PhysicalZone <p>物理区</p>
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置<p>物理区</p>
                     * @param _physicalZone <p>物理区</p>
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
                     * 获取<p>商业类型</p>
                     * @return BusinessType <p>商业类型</p>
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置<p>商业类型</p>
                     * @param _businessType <p>商业类型</p>
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
                     * 获取<p>任务</p>
                     * @return Tasks <p>任务</p>
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置<p>任务</p>
                     * @param _tasks <p>任务</p>
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
                     * 获取<p>是否冻结</p>
                     * @return IsFreeze <p>是否冻结</p>
                     * 
                     */
                    std::string GetIsFreeze() const;

                    /**
                     * 设置<p>是否冻结</p>
                     * @param _isFreeze <p>是否冻结</p>
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
                     * 获取<p>资源标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceTags <p>资源标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置<p>资源标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceTags <p>资源标签</p>
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
                     * 获取<p>主可用区</p>
                     * @return MasterZone <p>主可用区</p>
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置<p>主可用区</p>
                     * @param _masterZone <p>主可用区</p>
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
                     * 获取<p>备可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlaveZones <p>备可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 设置<p>备可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slaveZones <p>备可用区</p>
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
                     * 获取<p>实例网络信息</p>
                     * @return InstanceNetInfo <p>实例网络信息</p>
                     * 
                     */
                    std::vector<InstanceNetInfo> GetInstanceNetInfo() const;

                    /**
                     * 设置<p>实例网络信息</p>
                     * @param _instanceNetInfo <p>实例网络信息</p>
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
                     * 获取<p>实例绑定资源包信息（此处只返回计算资源包，即packageType=CCU）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePackages <p>实例绑定资源包信息（此处只返回计算资源包，即packageType=CCU）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourcePackage> GetResourcePackages() const;

                    /**
                     * 设置<p>实例绑定资源包信息（此处只返回计算资源包，即packageType=CCU）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourcePackages <p>实例绑定资源包信息（此处只返回计算资源包，即packageType=CCU）</p>
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
                     * 获取<p>实例索引形态,可选值【mixedRowColumn（行列混存），onlyRowIndex（仅行存）】</p>
                     * @return InstanceIndexMode <p>实例索引形态,可选值【mixedRowColumn（行列混存），onlyRowIndex（仅行存）】</p>
                     * 
                     */
                    std::string GetInstanceIndexMode() const;

                    /**
                     * 设置<p>实例索引形态,可选值【mixedRowColumn（行列混存），onlyRowIndex（仅行存）】</p>
                     * @param _instanceIndexMode <p>实例索引形态,可选值【mixedRowColumn（行列混存），onlyRowIndex（仅行存）】</p>
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
                     * 获取<p>当前实例支持的能力</p>
                     * @return InstanceAbility <p>当前实例支持的能力</p>
                     * 
                     */
                    InstanceAbility GetInstanceAbility() const;

                    /**
                     * 设置<p>当前实例支持的能力</p>
                     * @param _instanceAbility <p>当前实例支持的能力</p>
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
                     * 获取<p>实例机器类型</p><ol><li>common，通用型。</li><li>exclusive，独享型。</li></ol>
                     * @return DeviceType <p>实例机器类型</p><ol><li>common，通用型。</li><li>exclusive，独享型。</li></ol>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>实例机器类型</p><ol><li>common，通用型。</li><li>exclusive，独享型。</li></ol>
                     * @param _deviceType <p>实例机器类型</p><ol><li>common，通用型。</li><li>exclusive，独享型。</li></ol>
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
                     * 获取<p>实例存储类型</p>
                     * @return InstanceStorageType <p>实例存储类型</p>
                     * 
                     */
                    std::string GetInstanceStorageType() const;

                    /**
                     * 设置<p>实例存储类型</p>
                     * @param _instanceStorageType <p>实例存储类型</p>
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
                     * 获取<p>未知字段</p>
                     * @return CynosVersionTag <p>未知字段</p>
                     * 
                     */
                    std::string GetCynosVersionTag() const;

                    /**
                     * 设置<p>未知字段</p>
                     * @param _cynosVersionTag <p>未知字段</p>
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
                     * 获取<p>libradb 节点信息</p>
                     * @return NodeList <p>libradb 节点信息</p>
                     * 
                     */
                    std::vector<std::string> GetNodeList() const;

                    /**
                     * 设置<p>libradb 节点信息</p>
                     * @param _nodeList <p>libradb 节点信息</p>
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
                     * 获取<p>全球数据库唯一标识</p>
                     * @return GdnId <p>全球数据库唯一标识</p>
                     * 
                     */
                    std::string GetGdnId() const;

                    /**
                     * 设置<p>全球数据库唯一标识</p>
                     * @param _gdnId <p>全球数据库唯一标识</p>
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
                     * <p>用户Uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>用户AppId</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>实例状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例状态中文描述</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>实例形态，是否为serverless实例</p>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>数据库类型</p>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>数据库版本</p>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * <p>Cpu，单位：核</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存，单位：GB</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>存储量，单位：GB</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>实例类型</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>实例当前角色</p>
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>VPC网络ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>实例内网IP</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>实例内网端口</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>付费模式</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>实例过期时间</p>
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * <p>销毁期限</p>
                     */
                    std::string m_destroyDeadlineText;
                    bool m_destroyDeadlineTextHasBeenSet;

                    /**
                     * <p>隔离时间</p>
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * <p>网络类型</p>
                     */
                    int64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>外网域名</p>
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * <p>外网IP</p>
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * <p>外网端口</p>
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * <p>外网状态</p>
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * <p>实例销毁时间</p>
                     */
                    std::string m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                    /**
                     * <p>Cynos内核版本</p>
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * <p>正在处理的任务</p>
                     */
                    std::string m_processingTask;
                    bool m_processingTaskHasBeenSet;

                    /**
                     * <p>续费标志</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>serverless实例cpu下限</p>
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * <p>serverless实例cpu上限</p>
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * <p>serverless实例状态, 可选值：<br>resume<br>pause</p>
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * <p>预付费存储Id</p>
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * <p>存储付费类型</p>
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * <p>物理区</p>
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * <p>商业类型</p>
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * <p>任务</p>
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>是否冻结</p>
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * <p>资源标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>主可用区</p>
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * <p>备可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * <p>实例网络信息</p>
                     */
                    std::vector<InstanceNetInfo> m_instanceNetInfo;
                    bool m_instanceNetInfoHasBeenSet;

                    /**
                     * <p>实例绑定资源包信息（此处只返回计算资源包，即packageType=CCU）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourcePackage> m_resourcePackages;
                    bool m_resourcePackagesHasBeenSet;

                    /**
                     * <p>实例索引形态,可选值【mixedRowColumn（行列混存），onlyRowIndex（仅行存）】</p>
                     */
                    std::string m_instanceIndexMode;
                    bool m_instanceIndexModeHasBeenSet;

                    /**
                     * <p>当前实例支持的能力</p>
                     */
                    InstanceAbility m_instanceAbility;
                    bool m_instanceAbilityHasBeenSet;

                    /**
                     * <p>实例机器类型</p><ol><li>common，通用型。</li><li>exclusive，独享型。</li></ol>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>实例存储类型</p>
                     */
                    std::string m_instanceStorageType;
                    bool m_instanceStorageTypeHasBeenSet;

                    /**
                     * <p>未知字段</p>
                     */
                    std::string m_cynosVersionTag;
                    bool m_cynosVersionTagHasBeenSet;

                    /**
                     * <p>libradb 节点信息</p>
                     */
                    std::vector<std::string> m_nodeList;
                    bool m_nodeListHasBeenSet;

                    /**
                     * <p>全球数据库唯一标识</p>
                     */
                    std::string m_gdnId;
                    bool m_gdnIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBINSTANCE_H_
