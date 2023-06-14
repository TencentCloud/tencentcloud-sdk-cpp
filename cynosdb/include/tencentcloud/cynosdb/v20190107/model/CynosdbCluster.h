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
                     * 获取集群状态， 可选值如下:
creating: 创建中
running:运行中
isolating:隔离中
isolated:已隔离
activating:解隔离中
offlining:下线中
offlined:已下线
deleting:删除中
deleted:已删除
                     * @return Status 集群状态， 可选值如下:
creating: 创建中
running:运行中
isolating:隔离中
isolated:已隔离
activating:解隔离中
offlining:下线中
offlined:已下线
deleting:删除中
deleted:已删除
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置集群状态， 可选值如下:
creating: 创建中
running:运行中
isolating:隔离中
isolated:已隔离
activating:解隔离中
offlining:下线中
offlined:已下线
deleting:删除中
deleted:已删除
                     * @param _status 集群状态， 可选值如下:
creating: 创建中
running:运行中
isolating:隔离中
isolated:已隔离
activating:解隔离中
offlining:下线中
offlined:已下线
deleting:删除中
deleted:已删除
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
                     * 获取实例数
                     * @return InstanceNum 实例数
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置实例数
                     * @param _instanceNum 实例数
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
                     * 获取用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 用户uin
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbType 引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbType 引擎类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 用户appid
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusDesc 集群状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置集群状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusDesc 集群状态描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取付费模式。0-按量计费，1-包年包月
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode 付费模式。0-按量计费，1-包年包月
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式。0-按量计费，1-包年包月
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payMode 付费模式。0-按量计费，1-包年包月
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeriodEndTime 截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _periodEndTime 截止时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群读写vip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vip 集群读写vip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置集群读写vip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vip 集群读写vip
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群读写vport
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vport 集群读写vport
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置集群读写vport
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vport 集群读写vport
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectID 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectID 项目id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId 私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取cynos内核版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CynosVersion cynos内核版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置cynos内核版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cynosVersion cynos内核版本
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取存储容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageLimit 存储容量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置存储容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageLimit 存储容量
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取续费标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewFlag 续费标志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置续费标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewFlag 续费标志
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取正在处理的任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessingTask 正在处理的任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessingTask() const;

                    /**
                     * 设置正在处理的任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processingTask 正在处理的任务
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群的任务数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks 集群的任务数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置集群的任务数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasks 集群的任务数组
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群绑定的tag数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceTags 集群绑定的tag数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置集群绑定的tag数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceTags 集群绑定的tag数组
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
                     * 获取Db类型(NORMAL, SERVERLESS)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbMode Db类型(NORMAL, SERVERLESS)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置Db类型(NORMAL, SERVERLESS)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbMode Db类型(NORMAL, SERVERLESS)
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取当Db类型为SERVERLESS时，serverless集群状态，可选值:
resume
pause
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerlessStatus 当Db类型为SERVERLESS时，serverless集群状态，可选值:
resume
pause
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置当Db类型为SERVERLESS时，serverless集群状态，可选值:
resume
pause
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverlessStatus 当Db类型为SERVERLESS时，serverless集群状态，可选值:
resume
pause
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群预付费存储值大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Storage 集群预付费存储值大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置集群预付费存储值大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storage 集群预付费存储值大小
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群存储为预付费时的存储ID，用于预付费存储变配
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageId 集群存储为预付费时的存储ID，用于预付费存储变配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置集群存储为预付费时的存储ID，用于预付费存储变配
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageId 集群存储为预付费时的存储ID，用于预付费存储变配
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群存储付费模式。0-按量计费，1-包年包月
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoragePayMode 集群存储付费模式。0-按量计费，1-包年包月
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置集群存储付费模式。0-按量计费，1-包年包月
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storagePayMode 集群存储付费模式。0-按量计费，1-包年包月
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群计算规格对应的最小存储值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinStorageSize 集群计算规格对应的最小存储值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinStorageSize() const;

                    /**
                     * 设置集群计算规格对应的最小存储值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minStorageSize 集群计算规格对应的最小存储值
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群计算规格对应的最大存储值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxStorageSize 集群计算规格对应的最大存储值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置集群计算规格对应的最大存储值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxStorageSize 集群计算规格对应的最大存储值
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetAddrs 集群网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NetAddr> GetNetAddrs() const;

                    /**
                     * 设置集群网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _netAddrs 集群网络信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取物理可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhysicalZone 物理可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置物理可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _physicalZone 物理可用区
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterZone 主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _masterZone 主可用区
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否有从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasSlaveZone 是否有从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHasSlaveZone() const;

                    /**
                     * 设置是否有从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasSlaveZone 是否有从可用区
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlaveZones 从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 设置从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slaveZones 从可用区
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
                     * 获取商业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessType 商业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置商业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessType 商业类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否冻结
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsFreeze 是否冻结
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsFreeze() const;

                    /**
                     * 设置是否冻结
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isFreeze 是否冻结
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取订单来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderSource 订单来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置订单来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderSource 订单来源
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取能力
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ability 能力
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Ability GetAbility() const;

                    /**
                     * 设置能力
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ability 能力
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例绑定资源包信息（此处只返回存储资源包，即packageType=DISK）	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePackages 实例绑定资源包信息（此处只返回存储资源包，即packageType=DISK）	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourcePackage> GetResourcePackages() const;

                    /**
                     * 设置实例绑定资源包信息（此处只返回存储资源包，即packageType=DISK）	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourcePackages 实例绑定资源包信息（此处只返回存储资源包，即packageType=DISK）	
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

                private:

                    /**
                     * 集群状态， 可选值如下:
creating: 创建中
running:运行中
isolating:隔离中
isolated:已隔离
activating:解隔离中
offlining:下线中
offlined:已下线
deleting:删除中
deleted:已删除
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 数据库版本
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 实例数
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 集群状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 付费模式。0-按量计费，1-包年包月
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * 集群读写vip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 集群读写vport
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * 私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * cynos内核版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * 存储容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 续费标志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 正在处理的任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processingTask;
                    bool m_processingTaskHasBeenSet;

                    /**
                     * 集群的任务数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 集群绑定的tag数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Db类型(NORMAL, SERVERLESS)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * 当Db类型为SERVERLESS时，serverless集群状态，可选值:
resume
pause
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * 集群预付费存储值大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 集群存储为预付费时的存储ID，用于预付费存储变配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * 集群存储付费模式。0-按量计费，1-包年包月
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * 集群计算规格对应的最小存储值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                    /**
                     * 集群计算规格对应的最大存储值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * 集群网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NetAddr> m_netAddrs;
                    bool m_netAddrsHasBeenSet;

                    /**
                     * 物理可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * 主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * 是否有从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hasSlaveZone;
                    bool m_hasSlaveZoneHasBeenSet;

                    /**
                     * 从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * 商业类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 是否冻结
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * 订单来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * 能力
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Ability m_ability;
                    bool m_abilityHasBeenSet;

                    /**
                     * 实例绑定资源包信息（此处只返回存储资源包，即packageType=DISK）	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourcePackage> m_resourcePackages;
                    bool m_resourcePackagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTER_H_
