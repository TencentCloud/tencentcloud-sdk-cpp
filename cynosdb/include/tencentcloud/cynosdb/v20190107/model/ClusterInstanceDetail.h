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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERINSTANCEDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>
#include <tencentcloud/cynosdb/v20190107/model/AIOptimizerStatus.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceNetInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
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
                * 集群实例信息
                */
                class ClusterInstanceDetail : public AbstractModel
                {
                public:
                    ClusterInstanceDetail();
                    ~ClusterInstanceDetail() = default;
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
                     * 获取<p>引擎类型</p>
                     * @return InstanceType <p>引擎类型</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>引擎类型</p>
                     * @param _instanceType <p>引擎类型</p>
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
                     * 获取<p>实例状态</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>running： 运行中</li><li>isolating： 隔离中</li><li>isolated： 已隔离</li><li>activating： 恢复中</li><li>offlining： 下线中</li><li>offlined： 已下线</li></ul>
                     * @return Status <p>实例状态</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>running： 运行中</li><li>isolating： 隔离中</li><li>isolated： 已隔离</li><li>activating： 恢复中</li><li>offlining： 下线中</li><li>offlined： 已下线</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>实例状态</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>running： 运行中</li><li>isolating： 隔离中</li><li>isolated： 已隔离</li><li>activating： 恢复中</li><li>offlining： 下线中</li><li>offlined： 已下线</li></ul>
                     * @param _status <p>实例状态</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>running： 运行中</li><li>isolating： 隔离中</li><li>isolated： 已隔离</li><li>activating： 恢复中</li><li>offlining： 下线中</li><li>offlined： 已下线</li></ul>
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
                     * 获取<p>实例状态</p>
                     * @return InstanceStatus <p>实例状态</p>
                     * @deprecated
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>实例状态</p>
                     * @param _instanceStatus <p>实例状态</p>
                     * @deprecated
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * @deprecated
                     */
                    bool InstanceStatusHasBeenSet() const;

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
                     * 获取<p>实例状态描述</p>
                     * @return InstanceStatusDesc <p>实例状态描述</p>
                     * @deprecated
                     */
                    std::string GetInstanceStatusDesc() const;

                    /**
                     * 设置<p>实例状态描述</p>
                     * @param _instanceStatusDesc <p>实例状态描述</p>
                     * @deprecated
                     */
                    void SetInstanceStatusDesc(const std::string& _instanceStatusDesc);

                    /**
                     * 判断参数 InstanceStatusDesc 是否已赋值
                     * @return InstanceStatusDesc 是否已赋值
                     * @deprecated
                     */
                    bool InstanceStatusDescHasBeenSet() const;

                    /**
                     * 获取<p>Cpu</p><p>单位：核</p>
                     * @return Cpu <p>Cpu</p><p>单位：核</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Cpu</p><p>单位：核</p>
                     * @param _cpu <p>Cpu</p><p>单位：核</p>
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
                     * 获取<p>cpu核数</p>
                     * @return InstanceCpu <p>cpu核数</p>
                     * @deprecated
                     */
                    int64_t GetInstanceCpu() const;

                    /**
                     * 设置<p>cpu核数</p>
                     * @param _instanceCpu <p>cpu核数</p>
                     * @deprecated
                     */
                    void SetInstanceCpu(const int64_t& _instanceCpu);

                    /**
                     * 判断参数 InstanceCpu 是否已赋值
                     * @return InstanceCpu 是否已赋值
                     * @deprecated
                     */
                    bool InstanceCpuHasBeenSet() const;

                    /**
                     * 获取<p>serverless实例cpu下限</p><p>单位：核</p>
                     * @return MinCpu <p>serverless实例cpu下限</p><p>单位：核</p>
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置<p>serverless实例cpu下限</p><p>单位：核</p>
                     * @param _minCpu <p>serverless实例cpu下限</p><p>单位：核</p>
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
                     * 获取<p>serverless实例cpu上限</p><p>单位：核</p>
                     * @return MaxCpu <p>serverless实例cpu上限</p><p>单位：核</p>
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置<p>serverless实例cpu上限</p><p>单位：核</p>
                     * @param _maxCpu <p>serverless实例cpu上限</p><p>单位：核</p>
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
                     * 获取<p>内存</p><p>单位：GB</p>
                     * @return Memory <p>内存</p><p>单位：GB</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>内存</p><p>单位：GB</p>
                     * @param _memory <p>内存</p><p>单位：GB</p>
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
                     * 获取<p>内存</p>
                     * @return InstanceMemory <p>内存</p>
                     * @deprecated
                     */
                    int64_t GetInstanceMemory() const;

                    /**
                     * 设置<p>内存</p>
                     * @param _instanceMemory <p>内存</p>
                     * @deprecated
                     */
                    void SetInstanceMemory(const int64_t& _instanceMemory);

                    /**
                     * 判断参数 InstanceMemory 是否已赋值
                     * @return InstanceMemory 是否已赋值
                     * @deprecated
                     */
                    bool InstanceMemoryHasBeenSet() const;

                    /**
                     * 获取<p>硬盘</p>
                     * @return InstanceStorage <p>硬盘</p>
                     * 
                     */
                    int64_t GetInstanceStorage() const;

                    /**
                     * 设置<p>硬盘</p>
                     * @param _instanceStorage <p>硬盘</p>
                     * 
                     */
                    void SetInstanceStorage(const int64_t& _instanceStorage);

                    /**
                     * 判断参数 InstanceStorage 是否已赋值
                     * @return InstanceStorage 是否已赋值
                     * 
                     */
                    bool InstanceStorageHasBeenSet() const;

                    /**
                     * 获取<p>实例角色</p>
                     * @return InstanceRole <p>实例角色</p>
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置<p>实例角色</p>
                     * @param _instanceRole <p>实例角色</p>
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
                     * 获取<p>执行开始时间(距离0点的秒数)</p>
                     * @return MaintainStartTime <p>执行开始时间(距离0点的秒数)</p>
                     * 
                     */
                    int64_t GetMaintainStartTime() const;

                    /**
                     * 设置<p>执行开始时间(距离0点的秒数)</p>
                     * @param _maintainStartTime <p>执行开始时间(距离0点的秒数)</p>
                     * 
                     */
                    void SetMaintainStartTime(const int64_t& _maintainStartTime);

                    /**
                     * 判断参数 MaintainStartTime 是否已赋值
                     * @return MaintainStartTime 是否已赋值
                     * 
                     */
                    bool MaintainStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>持续的时间(单位：秒)</p>
                     * @return MaintainDuration <p>持续的时间(单位：秒)</p>
                     * 
                     */
                    int64_t GetMaintainDuration() const;

                    /**
                     * 设置<p>持续的时间(单位：秒)</p>
                     * @param _maintainDuration <p>持续的时间(单位：秒)</p>
                     * 
                     */
                    void SetMaintainDuration(const int64_t& _maintainDuration);

                    /**
                     * 判断参数 MaintainDuration 是否已赋值
                     * @return MaintainDuration 是否已赋值
                     * 
                     */
                    bool MaintainDurationHasBeenSet() const;

                    /**
                     * 获取<p>可以执行的时间，枚举值：[&quot;Mon&quot;,&quot;Tue&quot;,&quot;Wed&quot;,&quot;Thu&quot;,&quot;Fri&quot;, &quot;Sat&quot;, &quot;Sun&quot;]</p>
                     * @return MaintainWeekDays <p>可以执行的时间，枚举值：[&quot;Mon&quot;,&quot;Tue&quot;,&quot;Wed&quot;,&quot;Thu&quot;,&quot;Fri&quot;, &quot;Sat&quot;, &quot;Sun&quot;]</p>
                     * 
                     */
                    std::vector<std::string> GetMaintainWeekDays() const;

                    /**
                     * 设置<p>可以执行的时间，枚举值：[&quot;Mon&quot;,&quot;Tue&quot;,&quot;Wed&quot;,&quot;Thu&quot;,&quot;Fri&quot;, &quot;Sat&quot;, &quot;Sun&quot;]</p>
                     * @param _maintainWeekDays <p>可以执行的时间，枚举值：[&quot;Mon&quot;,&quot;Tue&quot;,&quot;Wed&quot;,&quot;Thu&quot;,&quot;Fri&quot;, &quot;Sat&quot;, &quot;Sun&quot;]</p>
                     * 
                     */
                    void SetMaintainWeekDays(const std::vector<std::string>& _maintainWeekDays);

                    /**
                     * 判断参数 MaintainWeekDays 是否已赋值
                     * @return MaintainWeekDays 是否已赋值
                     * 
                     */
                    bool MaintainWeekDaysHasBeenSet() const;

                    /**
                     * 获取<p>实例任务信息</p>
                     * @return InstanceTasks <p>实例任务信息</p>
                     * 
                     */
                    std::vector<ObjectTask> GetInstanceTasks() const;

                    /**
                     * 设置<p>实例任务信息</p>
                     * @param _instanceTasks <p>实例任务信息</p>
                     * 
                     */
                    void SetInstanceTasks(const std::vector<ObjectTask>& _instanceTasks);

                    /**
                     * 判断参数 InstanceTasks 是否已赋值
                     * @return InstanceTasks 是否已赋值
                     * 
                     */
                    bool InstanceTasksHasBeenSet() const;

                    /**
                     * 获取<p>实例机器类型</p><p>枚举值：</p><ul><li>common： 通用型</li><li>exclusive： 独享型</li></ul>
                     * @return DeviceType <p>实例机器类型</p><p>枚举值：</p><ul><li>common： 通用型</li><li>exclusive： 独享型</li></ul>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>实例机器类型</p><p>枚举值：</p><ul><li>common： 通用型</li><li>exclusive： 独享型</li></ul>
                     * @param _deviceType <p>实例机器类型</p><p>枚举值：</p><ul><li>common： 通用型</li><li>exclusive： 独享型</li></ul>
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
                     * 获取<p>实例机器类型</p><ol><li>common，通用型。</li><li>exclusive，独享型。</li></ol>
                     * @return InstanceDeviceType <p>实例机器类型</p><ol><li>common，通用型。</li><li>exclusive，独享型。</li></ol>
                     * @deprecated
                     */
                    std::string GetInstanceDeviceType() const;

                    /**
                     * 设置<p>实例机器类型</p><ol><li>common，通用型。</li><li>exclusive，独享型。</li></ol>
                     * @param _instanceDeviceType <p>实例机器类型</p><ol><li>common，通用型。</li><li>exclusive，独享型。</li></ol>
                     * @deprecated
                     */
                    void SetInstanceDeviceType(const std::string& _instanceDeviceType);

                    /**
                     * 判断参数 InstanceDeviceType 是否已赋值
                     * @return InstanceDeviceType 是否已赋值
                     * @deprecated
                     */
                    bool InstanceDeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例存储类型<br>说明：仅当要查询的资源为 LibraDB 时，此参数才会返回值。</p>
                     * @return InstanceStorageType <p>实例存储类型<br>说明：仅当要查询的资源为 LibraDB 时，此参数才会返回值。</p>
                     * 
                     */
                    std::string GetInstanceStorageType() const;

                    /**
                     * 设置<p>实例存储类型<br>说明：仅当要查询的资源为 LibraDB 时，此参数才会返回值。</p>
                     * @param _instanceStorageType <p>实例存储类型<br>说明：仅当要查询的资源为 LibraDB 时，此参数才会返回值。</p>
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
                     * 获取<p>数据库类型</p>
                     * @return DbMode <p>数据库类型</p>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置<p>数据库类型</p>
                     * @param _dbMode <p>数据库类型</p>
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
                     * 获取<p>节点列表<br>说明：仅当要查询的资源为 LibraDB 时，此参数才会返回值。</p>
                     * @return NodeList <p>节点列表<br>说明：仅当要查询的资源为 LibraDB 时，此参数才会返回值。</p>
                     * 
                     */
                    std::vector<std::string> GetNodeList() const;

                    /**
                     * 设置<p>节点列表<br>说明：仅当要查询的资源为 LibraDB 时，此参数才会返回值。</p>
                     * @param _nodeList <p>节点列表<br>说明：仅当要查询的资源为 LibraDB 时，此参数才会返回值。</p>
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
                     * 获取<p>serverless实例子状态</p>
                     * @return ServerlessStatus <p>serverless实例子状态</p>
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置<p>serverless实例子状态</p>
                     * @param _serverlessStatus <p>serverless实例子状态</p>
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
                     * 获取<p>AI优化器状态</p>
                     * @return AIOptimizerStatus <p>AI优化器状态</p>
                     * 
                     */
                    AIOptimizerStatus GetAIOptimizerStatus() const;

                    /**
                     * 设置<p>AI优化器状态</p>
                     * @param _aIOptimizerStatus <p>AI优化器状态</p>
                     * 
                     */
                    void SetAIOptimizerStatus(const AIOptimizerStatus& _aIOptimizerStatus);

                    /**
                     * 判断参数 AIOptimizerStatus 是否已赋值
                     * @return AIOptimizerStatus 是否已赋值
                     * 
                     */
                    bool AIOptimizerStatusHasBeenSet() const;

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
                     * 获取<p>实例所在的物理可用区</p>
                     * @return PhysicalZone <p>实例所在的物理可用区</p>
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置<p>实例所在的物理可用区</p>
                     * @param _physicalZone <p>实例所在的物理可用区</p>
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
                     * 获取<p>存储量</p><p>单位：GB</p>
                     * @return Storage <p>存储量</p><p>单位：GB</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>存储量</p><p>单位：GB</p>
                     * @param _storage <p>存储量</p><p>单位：GB</p>
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
                     * 获取<p>存储付费类型</p><p>枚举值：</p><ul><li>0： 后付费</li><li>1： 预付费</li></ul>
                     * @return StoragePayMode <p>存储付费类型</p><p>枚举值：</p><ul><li>0： 后付费</li><li>1： 预付费</li></ul>
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置<p>存储付费类型</p><p>枚举值：</p><ul><li>0： 后付费</li><li>1： 预付费</li></ul>
                     * @param _storagePayMode <p>存储付费类型</p><p>枚举值：</p><ul><li>0： 后付费</li><li>1： 预付费</li></ul>
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
                     * 获取<p>外网开启状态</p>
                     * @return WanStatus <p>外网开启状态</p>
                     * 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置<p>外网开启状态</p>
                     * @param _wanStatus <p>外网开启状态</p>
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
                     * 获取<p>实例外网域名</p>
                     * @return WanDomain <p>实例外网域名</p>
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置<p>实例外网域名</p>
                     * @param _wanDomain <p>实例外网域名</p>
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
                     * 获取<p>实例的网络信息</p>
                     * @return InstanceNetInfo <p>实例的网络信息</p>
                     * 
                     */
                    std::vector<InstanceNetInfo> GetInstanceNetInfo() const;

                    /**
                     * 设置<p>实例的网络信息</p>
                     * @param _instanceNetInfo <p>实例的网络信息</p>
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
                     * 获取<p>付费模式</p><p>枚举值：</p><ul><li>0： 后付费</li><li>1： 预付费</li></ul>
                     * @return PayMode <p>付费模式</p><p>枚举值：</p><ul><li>0： 后付费</li><li>1： 预付费</li></ul>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>付费模式</p><p>枚举值：</p><ul><li>0： 后付费</li><li>1： 预付费</li></ul>
                     * @param _payMode <p>付费模式</p><p>枚举值：</p><ul><li>0： 后付费</li><li>1： 预付费</li></ul>
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
                     * <p>引擎类型</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>实例状态</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>running： 运行中</li><li>isolating： 隔离中</li><li>isolated： 已隔离</li><li>activating： 恢复中</li><li>offlining： 下线中</li><li>offlined： 已下线</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例状态</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>实例状态中文描述</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>实例状态描述</p>
                     */
                    std::string m_instanceStatusDesc;
                    bool m_instanceStatusDescHasBeenSet;

                    /**
                     * <p>Cpu</p><p>单位：核</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>cpu核数</p>
                     */
                    int64_t m_instanceCpu;
                    bool m_instanceCpuHasBeenSet;

                    /**
                     * <p>serverless实例cpu下限</p><p>单位：核</p>
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * <p>serverless实例cpu上限</p><p>单位：核</p>
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * <p>内存</p><p>单位：GB</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>内存</p>
                     */
                    int64_t m_instanceMemory;
                    bool m_instanceMemoryHasBeenSet;

                    /**
                     * <p>硬盘</p>
                     */
                    int64_t m_instanceStorage;
                    bool m_instanceStorageHasBeenSet;

                    /**
                     * <p>实例角色</p>
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * <p>执行开始时间(距离0点的秒数)</p>
                     */
                    int64_t m_maintainStartTime;
                    bool m_maintainStartTimeHasBeenSet;

                    /**
                     * <p>持续的时间(单位：秒)</p>
                     */
                    int64_t m_maintainDuration;
                    bool m_maintainDurationHasBeenSet;

                    /**
                     * <p>可以执行的时间，枚举值：[&quot;Mon&quot;,&quot;Tue&quot;,&quot;Wed&quot;,&quot;Thu&quot;,&quot;Fri&quot;, &quot;Sat&quot;, &quot;Sun&quot;]</p>
                     */
                    std::vector<std::string> m_maintainWeekDays;
                    bool m_maintainWeekDaysHasBeenSet;

                    /**
                     * <p>实例任务信息</p>
                     */
                    std::vector<ObjectTask> m_instanceTasks;
                    bool m_instanceTasksHasBeenSet;

                    /**
                     * <p>实例机器类型</p><p>枚举值：</p><ul><li>common： 通用型</li><li>exclusive： 独享型</li></ul>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>实例机器类型</p><ol><li>common，通用型。</li><li>exclusive，独享型。</li></ol>
                     */
                    std::string m_instanceDeviceType;
                    bool m_instanceDeviceTypeHasBeenSet;

                    /**
                     * <p>实例存储类型<br>说明：仅当要查询的资源为 LibraDB 时，此参数才会返回值。</p>
                     */
                    std::string m_instanceStorageType;
                    bool m_instanceStorageTypeHasBeenSet;

                    /**
                     * <p>数据库类型</p>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>节点列表<br>说明：仅当要查询的资源为 LibraDB 时，此参数才会返回值。</p>
                     */
                    std::vector<std::string> m_nodeList;
                    bool m_nodeListHasBeenSet;

                    /**
                     * <p>serverless实例子状态</p>
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * <p>AI优化器状态</p>
                     */
                    AIOptimizerStatus m_aIOptimizerStatus;
                    bool m_aIOptimizerStatusHasBeenSet;

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
                     * <p>实例所在的物理可用区</p>
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

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
                     * <p>存储量</p><p>单位：GB</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>预付费存储Id</p>
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * <p>存储付费类型</p><p>枚举值：</p><ul><li>0： 后付费</li><li>1： 预付费</li></ul>
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>隔离时间</p>
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * <p>实例销毁时间</p>
                     */
                    std::string m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                    /**
                     * <p>销毁期限</p>
                     */
                    std::string m_destroyDeadlineText;
                    bool m_destroyDeadlineTextHasBeenSet;

                    /**
                     * <p>实例过期时间</p>
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

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
                     * <p>网络类型</p>
                     */
                    int64_t m_netType;
                    bool m_netTypeHasBeenSet;

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
                     * <p>外网开启状态</p>
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * <p>实例外网域名</p>
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * <p>实例的网络信息</p>
                     */
                    std::vector<InstanceNetInfo> m_instanceNetInfo;
                    bool m_instanceNetInfoHasBeenSet;

                    /**
                     * <p>付费模式</p><p>枚举值：</p><ul><li>0： 后付费</li><li>1： 预付费</li></ul>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

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
                     * <p>当前实例支持的能力</p>
                     */
                    InstanceAbility m_instanceAbility;
                    bool m_instanceAbilityHasBeenSet;

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

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERINSTANCEDETAIL_H_
