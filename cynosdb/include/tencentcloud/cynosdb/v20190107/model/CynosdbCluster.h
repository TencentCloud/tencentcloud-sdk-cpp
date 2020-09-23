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
                     * 获取集群状态
                     * @return Status 集群状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置集群状态
                     * @param Status 集群状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param UpdateTime 更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param Zone 可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param ClusterName 集群名称
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param Region 地域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取数据库版本
                     * @return DbVersion 数据库版本
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置数据库版本
                     * @param DbVersion 数据库版本
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取实例数
                     * @return InstanceNum 实例数
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置实例数
                     * @param InstanceNum 实例数
                     */
                    void SetInstanceNum(const int64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取用户uin
                     * @return Uin 用户uin
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
                     * @param Uin 用户uin
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取引擎类型
                     * @return DbType 引擎类型
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置引擎类型
                     * @param DbType 引擎类型
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取用户appid
                     * @return AppId 用户appid
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户appid
                     * @param AppId 用户appid
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取集群状态描述
                     * @return StatusDesc 集群状态描述
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置集群状态描述
                     * @param StatusDesc 集群状态描述
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取集群创建时间
                     * @return CreateTime 集群创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置集群创建时间
                     * @param CreateTime 集群创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取付费模式。0-按量计费，1-包年包月
                     * @return PayMode 付费模式。0-按量计费，1-包年包月
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式。0-按量计费，1-包年包月
                     * @param PayMode 付费模式。0-按量计费，1-包年包月
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取截止时间
                     * @return PeriodEndTime 截止时间
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置截止时间
                     * @param PeriodEndTime 截止时间
                     */
                    void SetPeriodEndTime(const std::string& _periodEndTime);

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取集群读写vip
                     * @return Vip 集群读写vip
                     */
                    std::string GetVip() const;

                    /**
                     * 设置集群读写vip
                     * @param Vip 集群读写vip
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取集群读写vport
                     * @return Vport 集群读写vport
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置集群读写vport
                     * @param Vport 集群读写vport
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectID 项目id
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置项目id
                     * @param ProjectID 项目id
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param VpcId 私有网络ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param SubnetId 子网ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取cynos内核版本
                     * @return CynosVersion cynos内核版本
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置cynos内核版本
                     * @param CynosVersion cynos内核版本
                     */
                    void SetCynosVersion(const std::string& _cynosVersion);

                    /**
                     * 判断参数 CynosVersion 是否已赋值
                     * @return CynosVersion 是否已赋值
                     */
                    bool CynosVersionHasBeenSet() const;

                    /**
                     * 获取存储容量
                     * @return StorageLimit 存储容量
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置存储容量
                     * @param StorageLimit 存储容量
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取续费标志
                     * @return RenewFlag 续费标志
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置续费标志
                     * @param RenewFlag 续费标志
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取正在处理的任务
                     * @return ProcessingTask 正在处理的任务
                     */
                    std::string GetProcessingTask() const;

                    /**
                     * 设置正在处理的任务
                     * @param ProcessingTask 正在处理的任务
                     */
                    void SetProcessingTask(const std::string& _processingTask);

                    /**
                     * 判断参数 ProcessingTask 是否已赋值
                     * @return ProcessingTask 是否已赋值
                     */
                    bool ProcessingTaskHasBeenSet() const;

                    /**
                     * 获取集群的任务数组
                     * @return Tasks 集群的任务数组
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置集群的任务数组
                     * @param Tasks 集群的任务数组
                     */
                    void SetTasks(const std::vector<ObjectTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取集群绑定的tag数组
                     * @return ResourceTags 集群绑定的tag数组
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置集群绑定的tag数组
                     * @param ResourceTags 集群绑定的tag数组
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                private:

                    /**
                     * 集群状态
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
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 引擎类型
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 用户appid
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 集群状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 集群创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 付费模式。0-按量计费，1-包年包月
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 截止时间
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * 集群读写vip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 集群读写vport
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 项目id
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * cynos内核版本
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * 存储容量
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 续费标志
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 正在处理的任务
                     */
                    std::string m_processingTask;
                    bool m_processingTaskHasBeenSet;

                    /**
                     * 集群的任务数组
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 集群绑定的tag数组
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTER_H_
