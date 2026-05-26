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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTER_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/NetAddr.h>
#include <tencentcloud/cynosdb/v20190107/model/Ability.h>
#include <tencentcloud/cynosdb/v20190107/model/ResourcePackage.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 集群信息
                */
                class CynosdbCluster : public AbstractModel
                {
                public:
                    CynosdbCluster();
                    ~CynosdbCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群状态， 可选值如下:<br>creating: 创建中<br>running:运行中<br>isolating:隔离中<br>isolated:已隔离<br>activating:解隔离中<br>offlining:下线中<br>offlined:已下线<br>deleting:删除中<br>deleted:已删除</p>
                     * @return Status <p>集群状态， 可选值如下:<br>creating: 创建中<br>running:运行中<br>isolating:隔离中<br>isolated:已隔离<br>activating:解隔离中<br>offlining:下线中<br>offlined:已下线<br>deleting:删除中<br>deleted:已删除</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>集群状态， 可选值如下:<br>creating: 创建中<br>running:运行中<br>isolating:隔离中<br>isolated:已隔离<br>activating:解隔离中<br>offlining:下线中<br>offlined:已下线<br>deleting:删除中<br>deleted:已删除</p>
                     * @param _status <p>集群状态， 可选值如下:<br>creating: 创建中<br>running:运行中<br>isolating:隔离中<br>isolated:已隔离<br>activating:解隔离中<br>offlining:下线中<br>offlined:已下线<br>deleting:删除中<br>deleted:已删除</p>
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
                     * 获取<p>实例数</p>
                     * @return InstanceNum <p>实例数</p>
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置<p>实例数</p>
                     * @param _instanceNum <p>实例数</p>
                     * 
                     */
                    void SetInstanceNum(const int64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取<p>用户uin</p>
                     * @return Uin <p>用户uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>用户uin</p>
                     * @param _uin <p>用户uin</p>
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
                     * 获取<p>引擎类型</p>
                     * @return DbType <p>引擎类型</p>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>引擎类型</p>
                     * @param _dbType <p>引擎类型</p>
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
                     * 获取<p>用户appid</p>
                     * @return AppId <p>用户appid</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>用户appid</p>
                     * @param _appId <p>用户appid</p>
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
                     * 获取<p>集群状态描述</p>
                     * @return StatusDesc <p>集群状态描述</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>集群状态描述</p>
                     * @param _statusDesc <p>集群状态描述</p>
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
                     * 获取<p>集群创建时间</p>
                     * @return CreateTime <p>集群创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>集群创建时间</p>
                     * @param _createTime <p>集群创建时间</p>
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
                     * 获取<p>付费模式。0-按量计费，1-包年包月</p>
                     * @return PayMode <p>付费模式。0-按量计费，1-包年包月</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>付费模式。0-按量计费，1-包年包月</p>
                     * @param _payMode <p>付费模式。0-按量计费，1-包年包月</p>
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
                     * 获取<p>截止时间</p>
                     * @return PeriodEndTime <p>截止时间</p>
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置<p>截止时间</p>
                     * @param _periodEndTime <p>截止时间</p>
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
                     * 获取<p>集群读写vip</p>
                     * @return Vip <p>集群读写vip</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>集群读写vip</p>
                     * @param _vip <p>集群读写vip</p>
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
                     * 获取<p>集群读写vport</p>
                     * @return Vport <p>集群读写vport</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>集群读写vport</p>
                     * @param _vport <p>集群读写vport</p>
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
                     * 获取<p>项目id</p>
                     * @return ProjectID <p>项目id</p>
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectID <p>项目id</p>
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取<p>私有网络ID</p>
                     * @return VpcId <p>私有网络ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络ID</p>
                     * @param _vpcId <p>私有网络ID</p>
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
                     * 获取<p>cynos内核版本</p>
                     * @return CynosVersion <p>cynos内核版本</p>
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置<p>cynos内核版本</p>
                     * @param _cynosVersion <p>cynos内核版本</p>
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
                     * 获取<p>cynos版本标签</p>
                     * @return CynosVersionTag <p>cynos版本标签</p>
                     * 
                     */
                    std::string GetCynosVersionTag() const;

                    /**
                     * 设置<p>cynos版本标签</p>
                     * @param _cynosVersionTag <p>cynos版本标签</p>
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
                     * 获取<p>存储容量</p>
                     * @return StorageLimit <p>存储容量</p>
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置<p>存储容量</p>
                     * @param _storageLimit <p>存储容量</p>
                     * 
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

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
                     * 获取<p>集群的任务数组</p>
                     * @return Tasks <p>集群的任务数组</p>
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置<p>集群的任务数组</p>
                     * @param _tasks <p>集群的任务数组</p>
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
                     * 获取<p>集群绑定的tag数组</p>
                     * @return ResourceTags <p>集群绑定的tag数组</p>
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置<p>集群绑定的tag数组</p>
                     * @param _resourceTags <p>集群绑定的tag数组</p>
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
                     * 获取<p>Db类型(NORMAL, SERVERLESS)</p>
                     * @return DbMode <p>Db类型(NORMAL, SERVERLESS)</p>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置<p>Db类型(NORMAL, SERVERLESS)</p>
                     * @param _dbMode <p>Db类型(NORMAL, SERVERLESS)</p>
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
                     * 获取<p>当Db类型为SERVERLESS时，serverless集群状态，可选值:<br>resume<br>pause</p>
                     * @return ServerlessStatus <p>当Db类型为SERVERLESS时，serverless集群状态，可选值:<br>resume<br>pause</p>
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置<p>当Db类型为SERVERLESS时，serverless集群状态，可选值:<br>resume<br>pause</p>
                     * @param _serverlessStatus <p>当Db类型为SERVERLESS时，serverless集群状态，可选值:<br>resume<br>pause</p>
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
                     * 获取<p>集群预付费存储值大小</p>
                     * @return Storage <p>集群预付费存储值大小</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>集群预付费存储值大小</p>
                     * @param _storage <p>集群预付费存储值大小</p>
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
                     * 获取<p>集群存储为预付费时的存储ID，用于预付费存储变配</p>
                     * @return StorageId <p>集群存储为预付费时的存储ID，用于预付费存储变配</p>
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置<p>集群存储为预付费时的存储ID，用于预付费存储变配</p>
                     * @param _storageId <p>集群存储为预付费时的存储ID，用于预付费存储变配</p>
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
                     * 获取<p>集群存储付费模式。0-按量计费，1-包年包月</p>
                     * @return StoragePayMode <p>集群存储付费模式。0-按量计费，1-包年包月</p>
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置<p>集群存储付费模式。0-按量计费，1-包年包月</p>
                     * @param _storagePayMode <p>集群存储付费模式。0-按量计费，1-包年包月</p>
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
                     * 获取<p>集群计算规格对应的最小存储值</p>
                     * @return MinStorageSize <p>集群计算规格对应的最小存储值</p>
                     * 
                     */
                    int64_t GetMinStorageSize() const;

                    /**
                     * 设置<p>集群计算规格对应的最小存储值</p>
                     * @param _minStorageSize <p>集群计算规格对应的最小存储值</p>
                     * 
                     */
                    void SetMinStorageSize(const int64_t& _minStorageSize);

                    /**
                     * 判断参数 MinStorageSize 是否已赋值
                     * @return MinStorageSize 是否已赋值
                     * 
                     */
                    bool MinStorageSizeHasBeenSet() const;

                    /**
                     * 获取<p>集群计算规格对应的最大存储值</p>
                     * @return MaxStorageSize <p>集群计算规格对应的最大存储值</p>
                     * 
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置<p>集群计算规格对应的最大存储值</p>
                     * @param _maxStorageSize <p>集群计算规格对应的最大存储值</p>
                     * 
                     */
                    void SetMaxStorageSize(const int64_t& _maxStorageSize);

                    /**
                     * 判断参数 MaxStorageSize 是否已赋值
                     * @return MaxStorageSize 是否已赋值
                     * 
                     */
                    bool MaxStorageSizeHasBeenSet() const;

                    /**
                     * 获取<p>集群网络信息</p>
                     * @return NetAddrs <p>集群网络信息</p>
                     * 
                     */
                    std::vector<NetAddr> GetNetAddrs() const;

                    /**
                     * 设置<p>集群网络信息</p>
                     * @param _netAddrs <p>集群网络信息</p>
                     * 
                     */
                    void SetNetAddrs(const std::vector<NetAddr>& _netAddrs);

                    /**
                     * 判断参数 NetAddrs 是否已赋值
                     * @return NetAddrs 是否已赋值
                     * 
                     */
                    bool NetAddrsHasBeenSet() const;

                    /**
                     * 获取<p>物理可用区</p>
                     * @return PhysicalZone <p>物理可用区</p>
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置<p>物理可用区</p>
                     * @param _physicalZone <p>物理可用区</p>
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
                     * 获取<p>是否有从可用区</p>
                     * @return HasSlaveZone <p>是否有从可用区</p>
                     * 
                     */
                    std::string GetHasSlaveZone() const;

                    /**
                     * 设置<p>是否有从可用区</p>
                     * @param _hasSlaveZone <p>是否有从可用区</p>
                     * 
                     */
                    void SetHasSlaveZone(const std::string& _hasSlaveZone);

                    /**
                     * 判断参数 HasSlaveZone 是否已赋值
                     * @return HasSlaveZone 是否已赋值
                     * 
                     */
                    bool HasSlaveZoneHasBeenSet() const;

                    /**
                     * 获取<p>从可用区</p>
                     * @return SlaveZones <p>从可用区</p>
                     * 
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 设置<p>从可用区</p>
                     * @param _slaveZones <p>从可用区</p>
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
                     * 获取<p>订单来源</p>
                     * @return OrderSource <p>订单来源</p>
                     * 
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置<p>订单来源</p>
                     * @param _orderSource <p>订单来源</p>
                     * 
                     */
                    void SetOrderSource(const std::string& _orderSource);

                    /**
                     * 判断参数 OrderSource 是否已赋值
                     * @return OrderSource 是否已赋值
                     * 
                     */
                    bool OrderSourceHasBeenSet() const;

                    /**
                     * 获取<p>能力</p>
                     * @return Ability <p>能力</p>
                     * 
                     */
                    Ability GetAbility() const;

                    /**
                     * 设置<p>能力</p>
                     * @param _ability <p>能力</p>
                     * 
                     */
                    void SetAbility(const Ability& _ability);

                    /**
                     * 判断参数 Ability 是否已赋值
                     * @return Ability 是否已赋值
                     * 
                     */
                    bool AbilityHasBeenSet() const;

                    /**
                     * 获取<p>实例绑定资源包信息（此处只返回存储资源包，即packageType=DISK）</p>
                     * @return ResourcePackages <p>实例绑定资源包信息（此处只返回存储资源包，即packageType=DISK）</p>
                     * 
                     */
                    std::vector<ResourcePackage> GetResourcePackages() const;

                    /**
                     * 设置<p>实例绑定资源包信息（此处只返回存储资源包，即packageType=DISK）</p>
                     * @param _resourcePackages <p>实例绑定资源包信息（此处只返回存储资源包，即packageType=DISK）</p>
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

                    /**
                     * 获取<p>集群角色。主集群- primary，从集群 - standby，如果 GdnId为空，该字段无效。</p>
                     * @return GdnRole <p>集群角色。主集群- primary，从集群 - standby，如果 GdnId为空，该字段无效。</p>
                     * 
                     */
                    std::string GetGdnRole() const;

                    /**
                     * 设置<p>集群角色。主集群- primary，从集群 - standby，如果 GdnId为空，该字段无效。</p>
                     * @param _gdnRole <p>集群角色。主集群- primary，从集群 - standby，如果 GdnId为空，该字段无效。</p>
                     * 
                     */
                    void SetGdnRole(const std::string& _gdnRole);

                    /**
                     * 判断参数 GdnRole 是否已赋值
                     * @return GdnRole 是否已赋值
                     * 
                     */
                    bool GdnRoleHasBeenSet() const;

                private:

                    /**
                     * <p>集群状态， 可选值如下:<br>creating: 创建中<br>running:运行中<br>isolating:隔离中<br>isolated:已隔离<br>activating:解隔离中<br>offlining:下线中<br>offlined:已下线<br>deleting:删除中<br>deleted:已删除</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>数据库版本</p>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>实例数</p>
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * <p>用户uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>引擎类型</p>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>用户appid</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>集群状态描述</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>集群创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>付费模式。0-按量计费，1-包年包月</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>截止时间</p>
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * <p>集群读写vip</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>集群读写vport</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>项目id</p>
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * <p>私有网络ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>cynos内核版本</p>
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * <p>cynos版本标签</p>
                     */
                    std::string m_cynosVersionTag;
                    bool m_cynosVersionTagHasBeenSet;

                    /**
                     * <p>存储容量</p>
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * <p>续费标志</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>正在处理的任务</p>
                     */
                    std::string m_processingTask;
                    bool m_processingTaskHasBeenSet;

                    /**
                     * <p>集群的任务数组</p>
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>集群绑定的tag数组</p>
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Db类型(NORMAL, SERVERLESS)</p>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>当Db类型为SERVERLESS时，serverless集群状态，可选值:<br>resume<br>pause</p>
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * <p>集群预付费存储值大小</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>集群存储为预付费时的存储ID，用于预付费存储变配</p>
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * <p>集群存储付费模式。0-按量计费，1-包年包月</p>
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * <p>集群计算规格对应的最小存储值</p>
                     */
                    int64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                    /**
                     * <p>集群计算规格对应的最大存储值</p>
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * <p>集群网络信息</p>
                     */
                    std::vector<NetAddr> m_netAddrs;
                    bool m_netAddrsHasBeenSet;

                    /**
                     * <p>物理可用区</p>
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * <p>主可用区</p>
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * <p>是否有从可用区</p>
                     */
                    std::string m_hasSlaveZone;
                    bool m_hasSlaveZoneHasBeenSet;

                    /**
                     * <p>从可用区</p>
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * <p>商业类型</p>
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * <p>是否冻结</p>
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * <p>订单来源</p>
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * <p>能力</p>
                     */
                    Ability m_ability;
                    bool m_abilityHasBeenSet;

                    /**
                     * <p>实例绑定资源包信息（此处只返回存储资源包，即packageType=DISK）</p>
                     */
                    std::vector<ResourcePackage> m_resourcePackages;
                    bool m_resourcePackagesHasBeenSet;

                    /**
                     * <p>全球数据库唯一标识</p>
                     */
                    std::string m_gdnId;
                    bool m_gdnIdHasBeenSet;

                    /**
                     * <p>集群角色。主集群- primary，从集群 - standby，如果 GdnId为空，该字段无效。</p>
                     */
                    std::string m_gdnRole;
                    bool m_gdnRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTER_H_
