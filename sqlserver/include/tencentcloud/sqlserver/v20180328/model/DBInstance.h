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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBINSTANCE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ResourceTag.h>
#include <tencentcloud/sqlserver/v20180328/model/SlaveZones.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 实例详细信息
                */
                class DBInstance : public AbstractModel
                {
                public:
                    DBInstance();
                    ~DBInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * @return Name <p>实例名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _name <p>实例名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>实例所在项目ID</p>
                     * @return ProjectId <p>实例所在项目ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>实例所在项目ID</p>
                     * @param _projectId <p>实例所在项目ID</p>
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
                     * 获取<p>实例所在地域ID</p>
                     * @return RegionId <p>实例所在地域ID</p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>实例所在地域ID</p>
                     * @param _regionId <p>实例所在地域ID</p>
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>实例所在可用区ID</p>
                     * @return ZoneId <p>实例所在可用区ID</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>实例所在可用区ID</p>
                     * @param _zoneId <p>实例所在可用区ID</p>
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>实例所在私有网络ID，基础网络时为 0</p>
                     * @return VpcId <p>实例所在私有网络ID，基础网络时为 0</p>
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置<p>实例所在私有网络ID，基础网络时为 0</p>
                     * @param _vpcId <p>实例所在私有网络ID，基础网络时为 0</p>
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
                     * 获取<p>实例所在私有网络子网ID，基础网络时为 0</p>
                     * @return SubnetId <p>实例所在私有网络子网ID，基础网络时为 0</p>
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置<p>实例所在私有网络子网ID，基础网络时为 0</p>
                     * @param _subnetId <p>实例所在私有网络子网ID，基础网络时为 0</p>
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
                     * 获取<p>实例状态。取值范围： <li>1：申请中</li> <li>2：运行中</li> <li>3：受限运行中 (主备切换中)</li> <li>4：已隔离</li> <li>5：回收中</li> <li>6：已回收</li> <li>7：任务执行中 (实例做备份、回档等操作)</li> <li>8：已下线</li> <li>9：实例扩容中</li> <li>10：实例迁移中</li> <li>11：只读</li> <li>12：重启中</li>  <li>13：实例修改中且待切换</li> <li>14：订阅发布创建中</li> <li>15：订阅发布修改中</li> <li>16：实例修改中且切换中</li> <li>17：创建RO副本中</li></p>
                     * @return Status <p>实例状态。取值范围： <li>1：申请中</li> <li>2：运行中</li> <li>3：受限运行中 (主备切换中)</li> <li>4：已隔离</li> <li>5：回收中</li> <li>6：已回收</li> <li>7：任务执行中 (实例做备份、回档等操作)</li> <li>8：已下线</li> <li>9：实例扩容中</li> <li>10：实例迁移中</li> <li>11：只读</li> <li>12：重启中</li>  <li>13：实例修改中且待切换</li> <li>14：订阅发布创建中</li> <li>15：订阅发布修改中</li> <li>16：实例修改中且切换中</li> <li>17：创建RO副本中</li></p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>实例状态。取值范围： <li>1：申请中</li> <li>2：运行中</li> <li>3：受限运行中 (主备切换中)</li> <li>4：已隔离</li> <li>5：回收中</li> <li>6：已回收</li> <li>7：任务执行中 (实例做备份、回档等操作)</li> <li>8：已下线</li> <li>9：实例扩容中</li> <li>10：实例迁移中</li> <li>11：只读</li> <li>12：重启中</li>  <li>13：实例修改中且待切换</li> <li>14：订阅发布创建中</li> <li>15：订阅发布修改中</li> <li>16：实例修改中且切换中</li> <li>17：创建RO副本中</li></p>
                     * @param _status <p>实例状态。取值范围： <li>1：申请中</li> <li>2：运行中</li> <li>3：受限运行中 (主备切换中)</li> <li>4：已隔离</li> <li>5：回收中</li> <li>6：已回收</li> <li>7：任务执行中 (实例做备份、回档等操作)</li> <li>8：已下线</li> <li>9：实例扩容中</li> <li>10：实例迁移中</li> <li>11：只读</li> <li>12：重启中</li>  <li>13：实例修改中且待切换</li> <li>14：订阅发布创建中</li> <li>15：订阅发布修改中</li> <li>16：实例修改中且切换中</li> <li>17：创建RO副本中</li></p>
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
                     * 获取<p>实例访问IP</p>
                     * @return Vip <p>实例访问IP</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>实例访问IP</p>
                     * @param _vip <p>实例访问IP</p>
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
                     * 获取<p>实例访问端口</p>
                     * @return Vport <p>实例访问端口</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>实例访问端口</p>
                     * @param _vport <p>实例访问端口</p>
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
                     * 获取<p>实例创建时间</p>
                     * @return CreateTime <p>实例创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>实例创建时间</p>
                     * @param _createTime <p>实例创建时间</p>
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
                     * 获取<p>实例更新时间</p>
                     * @return UpdateTime <p>实例更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>实例更新时间</p>
                     * @param _updateTime <p>实例更新时间</p>
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
                     * 获取<p>实例计费开始时间</p>
                     * @return StartTime <p>实例计费开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>实例计费开始时间</p>
                     * @param _startTime <p>实例计费开始时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例计费结束时间</p>
                     * @return EndTime <p>实例计费结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>实例计费结束时间</p>
                     * @param _endTime <p>实例计费结束时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例隔离时间</p>
                     * @return IsolateTime <p>实例隔离时间</p>
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置<p>实例隔离时间</p>
                     * @param _isolateTime <p>实例隔离时间</p>
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
                     * 获取<p>实例内存大小，单位G</p>
                     * @return Memory <p>实例内存大小，单位G</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>实例内存大小，单位G</p>
                     * @param _memory <p>实例内存大小，单位G</p>
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
                     * 获取<p>实例已经使用存储空间大小，单位G</p>
                     * @return UsedStorage <p>实例已经使用存储空间大小，单位G</p>
                     * 
                     */
                    int64_t GetUsedStorage() const;

                    /**
                     * 设置<p>实例已经使用存储空间大小，单位G</p>
                     * @param _usedStorage <p>实例已经使用存储空间大小，单位G</p>
                     * 
                     */
                    void SetUsedStorage(const int64_t& _usedStorage);

                    /**
                     * 判断参数 UsedStorage 是否已赋值
                     * @return UsedStorage 是否已赋值
                     * 
                     */
                    bool UsedStorageHasBeenSet() const;

                    /**
                     * 获取<p>实例存储空间大小，单位G</p>
                     * @return Storage <p>实例存储空间大小，单位G</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>实例存储空间大小，单位G</p>
                     * @param _storage <p>实例存储空间大小，单位G</p>
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
                     * 获取<p>实例版本</p>
                     * @return VersionName <p>实例版本</p>
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置<p>实例版本</p>
                     * @param _versionName <p>实例版本</p>
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取<p>实例续费标记，0-正常续费，1-自动续费，2-到期不续费</p>
                     * @return RenewFlag <p>实例续费标记，0-正常续费，1-自动续费，2-到期不续费</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>实例续费标记，0-正常续费，1-自动续费，2-到期不续费</p>
                     * @param _renewFlag <p>实例续费标记，0-正常续费，1-自动续费，2-到期不续费</p>
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
                     * 获取<p>实例高可用， 1-双机高可用，2-单机，3-跨可用区，4-集群跨可用区，5-集群，6-多节点集群，7-多节点集群跨可用区，9-自研机房</p>
                     * @return Model <p>实例高可用， 1-双机高可用，2-单机，3-跨可用区，4-集群跨可用区，5-集群，6-多节点集群，7-多节点集群跨可用区，9-自研机房</p>
                     * 
                     */
                    int64_t GetModel() const;

                    /**
                     * 设置<p>实例高可用， 1-双机高可用，2-单机，3-跨可用区，4-集群跨可用区，5-集群，6-多节点集群，7-多节点集群跨可用区，9-自研机房</p>
                     * @param _model <p>实例高可用， 1-双机高可用，2-单机，3-跨可用区，4-集群跨可用区，5-集群，6-多节点集群，7-多节点集群跨可用区，9-自研机房</p>
                     * 
                     */
                    void SetModel(const int64_t& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>实例所在地域名称，如 ap-guangzhou</p>
                     * @return Region <p>实例所在地域名称，如 ap-guangzhou</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>实例所在地域名称，如 ap-guangzhou</p>
                     * @param _region <p>实例所在地域名称，如 ap-guangzhou</p>
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
                     * 获取<p>实例所在可用区名称，如 ap-guangzhou-1</p>
                     * @return Zone <p>实例所在可用区名称，如 ap-guangzhou-1</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>实例所在可用区名称，如 ap-guangzhou-1</p>
                     * @param _zone <p>实例所在可用区名称，如 ap-guangzhou-1</p>
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
                     * 获取<p>备份时间点</p>
                     * @return BackupTime <p>备份时间点</p>
                     * 
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置<p>备份时间点</p>
                     * @param _backupTime <p>备份时间点</p>
                     * 
                     */
                    void SetBackupTime(const std::string& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例付费模式， 0-按量计费，1-包年包月</p>
                     * @return PayMode <p>实例付费模式， 0-按量计费，1-包年包月</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>实例付费模式， 0-按量计费，1-包年包月</p>
                     * @param _payMode <p>实例付费模式， 0-按量计费，1-包年包月</p>
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
                     * 获取<p>实例唯一UID</p>
                     * @return Uid <p>实例唯一UID</p>
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置<p>实例唯一UID</p>
                     * @param _uid <p>实例唯一UID</p>
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取<p>实例cpu核心数</p>
                     * @return Cpu <p>实例cpu核心数</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>实例cpu核心数</p>
                     * @param _cpu <p>实例cpu核心数</p>
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
                     * 获取<p>实例版本代号</p>
                     * @return Version <p>实例版本代号</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>实例版本代号</p>
                     * @param _version <p>实例版本代号</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>实例类型代号：&quot;TS85&quot;-物理机，本地SSD硬盘；&quot;Z3&quot;-物理机早期版本，本地SSD硬盘；&quot;CLOUD_BASIC&quot;-虚拟机，普通云硬盘；&quot;CLOUD_PREMIUM&quot;-虚拟机，高性能云硬盘；&quot;CLOUD_SSD&quot;-虚拟机，云SSD硬盘；&quot;CLOUD_HSSD&quot;-虚拟机，增强型SSD云硬盘；&quot;CLOUD_TSSD&quot;-虚拟机，极速型SSD云硬盘；&quot;CLOUD_BSSD&quot;-虚拟机，通用型SSD云硬盘</p>
                     * @return Type <p>实例类型代号：&quot;TS85&quot;-物理机，本地SSD硬盘；&quot;Z3&quot;-物理机早期版本，本地SSD硬盘；&quot;CLOUD_BASIC&quot;-虚拟机，普通云硬盘；&quot;CLOUD_PREMIUM&quot;-虚拟机，高性能云硬盘；&quot;CLOUD_SSD&quot;-虚拟机，云SSD硬盘；&quot;CLOUD_HSSD&quot;-虚拟机，增强型SSD云硬盘；&quot;CLOUD_TSSD&quot;-虚拟机，极速型SSD云硬盘；&quot;CLOUD_BSSD&quot;-虚拟机，通用型SSD云硬盘</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>实例类型代号：&quot;TS85&quot;-物理机，本地SSD硬盘；&quot;Z3&quot;-物理机早期版本，本地SSD硬盘；&quot;CLOUD_BASIC&quot;-虚拟机，普通云硬盘；&quot;CLOUD_PREMIUM&quot;-虚拟机，高性能云硬盘；&quot;CLOUD_SSD&quot;-虚拟机，云SSD硬盘；&quot;CLOUD_HSSD&quot;-虚拟机，增强型SSD云硬盘；&quot;CLOUD_TSSD&quot;-虚拟机，极速型SSD云硬盘；&quot;CLOUD_BSSD&quot;-虚拟机，通用型SSD云硬盘</p>
                     * @param _type <p>实例类型代号：&quot;TS85&quot;-物理机，本地SSD硬盘；&quot;Z3&quot;-物理机早期版本，本地SSD硬盘；&quot;CLOUD_BASIC&quot;-虚拟机，普通云硬盘；&quot;CLOUD_PREMIUM&quot;-虚拟机，高性能云硬盘；&quot;CLOUD_SSD&quot;-虚拟机，云SSD硬盘；&quot;CLOUD_HSSD&quot;-虚拟机，增强型SSD云硬盘；&quot;CLOUD_TSSD&quot;-虚拟机，极速型SSD云硬盘；&quot;CLOUD_BSSD&quot;-虚拟机，通用型SSD云硬盘</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>计费ID</p>
                     * @return Pid <p>计费ID</p>
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置<p>计费ID</p>
                     * @param _pid <p>计费ID</p>
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
                     * 获取<p>实例所属VPC的唯一字符串ID，格式如：vpc-xxx，基础网络时为空字符串</p>
                     * @return UniqVpcId <p>实例所属VPC的唯一字符串ID，格式如：vpc-xxx，基础网络时为空字符串</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>实例所属VPC的唯一字符串ID，格式如：vpc-xxx，基础网络时为空字符串</p>
                     * @param _uniqVpcId <p>实例所属VPC的唯一字符串ID，格式如：vpc-xxx，基础网络时为空字符串</p>
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>实例所属子网的唯一字符串ID，格式如： subnet-xxx，基础网络时为空字符串</p>
                     * @return UniqSubnetId <p>实例所属子网的唯一字符串ID，格式如： subnet-xxx，基础网络时为空字符串</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>实例所属子网的唯一字符串ID，格式如： subnet-xxx，基础网络时为空字符串</p>
                     * @param _uniqSubnetId <p>实例所属子网的唯一字符串ID，格式如： subnet-xxx，基础网络时为空字符串</p>
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>实例隔离操作</p>
                     * @return IsolateOperator <p>实例隔离操作</p>
                     * 
                     */
                    std::string GetIsolateOperator() const;

                    /**
                     * 设置<p>实例隔离操作</p>
                     * @param _isolateOperator <p>实例隔离操作</p>
                     * 
                     */
                    void SetIsolateOperator(const std::string& _isolateOperator);

                    /**
                     * 判断参数 IsolateOperator 是否已赋值
                     * @return IsolateOperator 是否已赋值
                     * 
                     */
                    bool IsolateOperatorHasBeenSet() const;

                    /**
                     * 获取<p>发布订阅标识，SUB-订阅实例，PUB-发布实例，空值-没有发布订阅的普通实例</p>
                     * @return SubFlag <p>发布订阅标识，SUB-订阅实例，PUB-发布实例，空值-没有发布订阅的普通实例</p>
                     * 
                     */
                    std::string GetSubFlag() const;

                    /**
                     * 设置<p>发布订阅标识，SUB-订阅实例，PUB-发布实例，空值-没有发布订阅的普通实例</p>
                     * @param _subFlag <p>发布订阅标识，SUB-订阅实例，PUB-发布实例，空值-没有发布订阅的普通实例</p>
                     * 
                     */
                    void SetSubFlag(const std::string& _subFlag);

                    /**
                     * 判断参数 SubFlag 是否已赋值
                     * @return SubFlag 是否已赋值
                     * 
                     */
                    bool SubFlagHasBeenSet() const;

                    /**
                     * 获取<p>只读标识，RO-只读实例，MASTER-有RO实例的主实例，空值-没有只读组的非RO实例</p>
                     * @return ROFlag <p>只读标识，RO-只读实例，MASTER-有RO实例的主实例，空值-没有只读组的非RO实例</p>
                     * 
                     */
                    std::string GetROFlag() const;

                    /**
                     * 设置<p>只读标识，RO-只读实例，MASTER-有RO实例的主实例，空值-没有只读组的非RO实例</p>
                     * @param _rOFlag <p>只读标识，RO-只读实例，MASTER-有RO实例的主实例，空值-没有只读组的非RO实例</p>
                     * 
                     */
                    void SetROFlag(const std::string& _rOFlag);

                    /**
                     * 判断参数 ROFlag 是否已赋值
                     * @return ROFlag 是否已赋值
                     * 
                     */
                    bool ROFlagHasBeenSet() const;

                    /**
                     * 获取<p>容灾类型，MIRROR-镜像，ALWAYSON-AlwaysOn, SINGLE-单例</p>
                     * @return HAFlag <p>容灾类型，MIRROR-镜像，ALWAYSON-AlwaysOn, SINGLE-单例</p>
                     * 
                     */
                    std::string GetHAFlag() const;

                    /**
                     * 设置<p>容灾类型，MIRROR-镜像，ALWAYSON-AlwaysOn, SINGLE-单例</p>
                     * @param _hAFlag <p>容灾类型，MIRROR-镜像，ALWAYSON-AlwaysOn, SINGLE-单例</p>
                     * 
                     */
                    void SetHAFlag(const std::string& _hAFlag);

                    /**
                     * 判断参数 HAFlag 是否已赋值
                     * @return HAFlag 是否已赋值
                     * 
                     */
                    bool HAFlagHasBeenSet() const;

                    /**
                     * 获取<p>实例绑定的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceTags <p>实例绑定的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>实例绑定的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceTags <p>实例绑定的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>备份模式，master_pkg-主节点打包备份(默认) ；master_no_pkg-主节点不打包备份；slave_pkg-从节点打包备份(always on集群有效)；slave_no_pkg-从节点不打包备份(always on集群有效)；只读副本对该值无效。</p>
                     * @return BackupModel <p>备份模式，master_pkg-主节点打包备份(默认) ；master_no_pkg-主节点不打包备份；slave_pkg-从节点打包备份(always on集群有效)；slave_no_pkg-从节点不打包备份(always on集群有效)；只读副本对该值无效。</p>
                     * 
                     */
                    std::string GetBackupModel() const;

                    /**
                     * 设置<p>备份模式，master_pkg-主节点打包备份(默认) ；master_no_pkg-主节点不打包备份；slave_pkg-从节点打包备份(always on集群有效)；slave_no_pkg-从节点不打包备份(always on集群有效)；只读副本对该值无效。</p>
                     * @param _backupModel <p>备份模式，master_pkg-主节点打包备份(默认) ；master_no_pkg-主节点不打包备份；slave_pkg-从节点打包备份(always on集群有效)；slave_no_pkg-从节点不打包备份(always on集群有效)；只读副本对该值无效。</p>
                     * 
                     */
                    void SetBackupModel(const std::string& _backupModel);

                    /**
                     * 判断参数 BackupModel 是否已赋值
                     * @return BackupModel 是否已赋值
                     * 
                     */
                    bool BackupModelHasBeenSet() const;

                    /**
                     * 获取<p>实例备份信息</p>
                     * @return InstanceNote <p>实例备份信息</p>
                     * 
                     */
                    std::string GetInstanceNote() const;

                    /**
                     * 设置<p>实例备份信息</p>
                     * @param _instanceNote <p>实例备份信息</p>
                     * 
                     */
                    void SetInstanceNote(const std::string& _instanceNote);

                    /**
                     * 判断参数 InstanceNote 是否已赋值
                     * @return InstanceNote 是否已赋值
                     * 
                     */
                    bool InstanceNoteHasBeenSet() const;

                    /**
                     * 获取<p>备份周期</p>
                     * @return BackupCycle <p>备份周期</p>
                     * 
                     */
                    std::vector<int64_t> GetBackupCycle() const;

                    /**
                     * 设置<p>备份周期</p>
                     * @param _backupCycle <p>备份周期</p>
                     * 
                     */
                    void SetBackupCycle(const std::vector<int64_t>& _backupCycle);

                    /**
                     * 判断参数 BackupCycle 是否已赋值
                     * @return BackupCycle 是否已赋值
                     * 
                     */
                    bool BackupCycleHasBeenSet() const;

                    /**
                     * 获取<p>备份周期类型，[daily、weekly、monthly]</p>
                     * @return BackupCycleType <p>备份周期类型，[daily、weekly、monthly]</p>
                     * 
                     */
                    std::string GetBackupCycleType() const;

                    /**
                     * 设置<p>备份周期类型，[daily、weekly、monthly]</p>
                     * @param _backupCycleType <p>备份周期类型，[daily、weekly、monthly]</p>
                     * 
                     */
                    void SetBackupCycleType(const std::string& _backupCycleType);

                    /**
                     * 判断参数 BackupCycleType 是否已赋值
                     * @return BackupCycleType 是否已赋值
                     * 
                     */
                    bool BackupCycleTypeHasBeenSet() const;

                    /**
                     * 获取<p>数据(日志)备份保留时间</p>
                     * @return BackupSaveDays <p>数据(日志)备份保留时间</p>
                     * 
                     */
                    int64_t GetBackupSaveDays() const;

                    /**
                     * 设置<p>数据(日志)备份保留时间</p>
                     * @param _backupSaveDays <p>数据(日志)备份保留时间</p>
                     * 
                     */
                    void SetBackupSaveDays(const int64_t& _backupSaveDays);

                    /**
                     * 判断参数 BackupSaveDays 是否已赋值
                     * @return BackupSaveDays 是否已赋值
                     * 
                     */
                    bool BackupSaveDaysHasBeenSet() const;

                    /**
                     * 获取<p>实例类型 HA-高可用，RO-只读实例，SI-基础版，BI-商业智能服务，cvmHA-云盘高可用，cvmRO-云盘只读实例，MultiHA-多节点，cvmMultiHA-云盘多节点</p>
                     * @return InstanceType <p>实例类型 HA-高可用，RO-只读实例，SI-基础版，BI-商业智能服务，cvmHA-云盘高可用，cvmRO-云盘只读实例，MultiHA-多节点，cvmMultiHA-云盘多节点</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型 HA-高可用，RO-只读实例，SI-基础版，BI-商业智能服务，cvmHA-云盘高可用，cvmRO-云盘只读实例，MultiHA-多节点，cvmMultiHA-云盘多节点</p>
                     * @param _instanceType <p>实例类型 HA-高可用，RO-只读实例，SI-基础版，BI-商业智能服务，cvmHA-云盘高可用，cvmRO-云盘只读实例，MultiHA-多节点，cvmMultiHA-云盘多节点</p>
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
                     * 获取<p>跨地域备份目的地域，如果为空，则表示未开启跨地域备份</p>
                     * @return CrossRegions <p>跨地域备份目的地域，如果为空，则表示未开启跨地域备份</p>
                     * 
                     */
                    std::vector<std::string> GetCrossRegions() const;

                    /**
                     * 设置<p>跨地域备份目的地域，如果为空，则表示未开启跨地域备份</p>
                     * @param _crossRegions <p>跨地域备份目的地域，如果为空，则表示未开启跨地域备份</p>
                     * 
                     */
                    void SetCrossRegions(const std::vector<std::string>& _crossRegions);

                    /**
                     * 判断参数 CrossRegions 是否已赋值
                     * @return CrossRegions 是否已赋值
                     * 
                     */
                    bool CrossRegionsHasBeenSet() const;

                    /**
                     * 获取<p>跨地域备份状态 enable-开启，disable-关闭</p>
                     * @return CrossBackupEnabled <p>跨地域备份状态 enable-开启，disable-关闭</p>
                     * 
                     */
                    std::string GetCrossBackupEnabled() const;

                    /**
                     * 设置<p>跨地域备份状态 enable-开启，disable-关闭</p>
                     * @param _crossBackupEnabled <p>跨地域备份状态 enable-开启，disable-关闭</p>
                     * 
                     */
                    void SetCrossBackupEnabled(const std::string& _crossBackupEnabled);

                    /**
                     * 判断参数 CrossBackupEnabled 是否已赋值
                     * @return CrossBackupEnabled 是否已赋值
                     * 
                     */
                    bool CrossBackupEnabledHasBeenSet() const;

                    /**
                     * 获取<p>跨地域备份保留天数，则默认7天</p>
                     * @return CrossBackupSaveDays <p>跨地域备份保留天数，则默认7天</p>
                     * 
                     */
                    uint64_t GetCrossBackupSaveDays() const;

                    /**
                     * 设置<p>跨地域备份保留天数，则默认7天</p>
                     * @param _crossBackupSaveDays <p>跨地域备份保留天数，则默认7天</p>
                     * 
                     */
                    void SetCrossBackupSaveDays(const uint64_t& _crossBackupSaveDays);

                    /**
                     * 判断参数 CrossBackupSaveDays 是否已赋值
                     * @return CrossBackupSaveDays 是否已赋值
                     * 
                     */
                    bool CrossBackupSaveDaysHasBeenSet() const;

                    /**
                     * 获取<p>外网地址域名</p>
                     * @return DnsPodDomain <p>外网地址域名</p>
                     * 
                     */
                    std::string GetDnsPodDomain() const;

                    /**
                     * 设置<p>外网地址域名</p>
                     * @param _dnsPodDomain <p>外网地址域名</p>
                     * 
                     */
                    void SetDnsPodDomain(const std::string& _dnsPodDomain);

                    /**
                     * 判断参数 DnsPodDomain 是否已赋值
                     * @return DnsPodDomain 是否已赋值
                     * 
                     */
                    bool DnsPodDomainHasBeenSet() const;

                    /**
                     * 获取<p>外网端口号</p>
                     * @return TgwWanVPort <p>外网端口号</p>
                     * 
                     */
                    int64_t GetTgwWanVPort() const;

                    /**
                     * 设置<p>外网端口号</p>
                     * @param _tgwWanVPort <p>外网端口号</p>
                     * 
                     */
                    void SetTgwWanVPort(const int64_t& _tgwWanVPort);

                    /**
                     * 判断参数 TgwWanVPort 是否已赋值
                     * @return TgwWanVPort 是否已赋值
                     * 
                     */
                    bool TgwWanVPortHasBeenSet() const;

                    /**
                     * 获取<p>系统字符集排序规则，默认：Chinese_PRC_CI_AS</p>
                     * @return Collation <p>系统字符集排序规则，默认：Chinese_PRC_CI_AS</p>
                     * 
                     */
                    std::string GetCollation() const;

                    /**
                     * 设置<p>系统字符集排序规则，默认：Chinese_PRC_CI_AS</p>
                     * @param _collation <p>系统字符集排序规则，默认：Chinese_PRC_CI_AS</p>
                     * 
                     */
                    void SetCollation(const std::string& _collation);

                    /**
                     * 判断参数 Collation 是否已赋值
                     * @return Collation 是否已赋值
                     * 
                     */
                    bool CollationHasBeenSet() const;

                    /**
                     * 获取<p>系统时区，默认：China Standard Time</p>
                     * @return TimeZone <p>系统时区，默认：China Standard Time</p>
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>系统时区，默认：China Standard Time</p>
                     * @param _timeZone <p>系统时区，默认：China Standard Time</p>
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>是否跨AZ</p>
                     * @return IsDrZone <p>是否跨AZ</p>
                     * 
                     */
                    bool GetIsDrZone() const;

                    /**
                     * 设置<p>是否跨AZ</p>
                     * @param _isDrZone <p>是否跨AZ</p>
                     * 
                     */
                    void SetIsDrZone(const bool& _isDrZone);

                    /**
                     * 判断参数 IsDrZone 是否已赋值
                     * @return IsDrZone 是否已赋值
                     * 
                     */
                    bool IsDrZoneHasBeenSet() const;

                    /**
                     * 获取<p>双节点实例备可用区信息</p>
                     * @return SlaveZones <p>双节点实例备可用区信息</p>
                     * 
                     */
                    SlaveZones GetSlaveZones() const;

                    /**
                     * 设置<p>双节点实例备可用区信息</p>
                     * @param _slaveZones <p>双节点实例备可用区信息</p>
                     * 
                     */
                    void SetSlaveZones(const SlaveZones& _slaveZones);

                    /**
                     * 判断参数 SlaveZones 是否已赋值
                     * @return SlaveZones 是否已赋值
                     * 
                     */
                    bool SlaveZonesHasBeenSet() const;

                    /**
                     * 获取<p>架构标识，SINGLE-单节点 DOUBLE-双节点</p>
                     * @return Architecture <p>架构标识，SINGLE-单节点 DOUBLE-双节点</p>
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置<p>架构标识，SINGLE-单节点 DOUBLE-双节点</p>
                     * @param _architecture <p>架构标识，SINGLE-单节点 DOUBLE-双节点</p>
                     * 
                     */
                    void SetArchitecture(const std::string& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取<p>类型标识，EXCLUSIVE-独享型，SHARED-共享型</p>
                     * @return Style <p>类型标识，EXCLUSIVE-独享型，SHARED-共享型</p>
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置<p>类型标识，EXCLUSIVE-独享型，SHARED-共享型</p>
                     * @param _style <p>类型标识，EXCLUSIVE-独享型，SHARED-共享型</p>
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取<p>多节点实例备可用区信息</p>
                     * @return MultiSlaveZones <p>多节点实例备可用区信息</p>
                     * 
                     */
                    std::vector<SlaveZones> GetMultiSlaveZones() const;

                    /**
                     * 设置<p>多节点实例备可用区信息</p>
                     * @param _multiSlaveZones <p>多节点实例备可用区信息</p>
                     * 
                     */
                    void SetMultiSlaveZones(const std::vector<SlaveZones>& _multiSlaveZones);

                    /**
                     * 判断参数 MultiSlaveZones 是否已赋值
                     * @return MultiSlaveZones 是否已赋值
                     * 
                     */
                    bool MultiSlaveZonesHasBeenSet() const;

                    /**
                     * 获取<p>额外IO吞吐量</p><p>单位：MB/s</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThroughputPerformance <p>额外IO吞吐量</p><p>单位：MB/s</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetThroughputPerformance() const;

                    /**
                     * 设置<p>额外IO吞吐量</p><p>单位：MB/s</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _throughputPerformance <p>额外IO吞吐量</p><p>单位：MB/s</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThroughputPerformance(const int64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     * 
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>实例所在项目ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>实例所在地域ID</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>实例所在可用区ID</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>实例所在私有网络ID，基础网络时为 0</p>
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>实例所在私有网络子网ID，基础网络时为 0</p>
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>实例状态。取值范围： <li>1：申请中</li> <li>2：运行中</li> <li>3：受限运行中 (主备切换中)</li> <li>4：已隔离</li> <li>5：回收中</li> <li>6：已回收</li> <li>7：任务执行中 (实例做备份、回档等操作)</li> <li>8：已下线</li> <li>9：实例扩容中</li> <li>10：实例迁移中</li> <li>11：只读</li> <li>12：重启中</li>  <li>13：实例修改中且待切换</li> <li>14：订阅发布创建中</li> <li>15：订阅发布修改中</li> <li>16：实例修改中且切换中</li> <li>17：创建RO副本中</li></p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例访问IP</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>实例访问端口</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>实例创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>实例更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>实例计费开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>实例计费结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>实例隔离时间</p>
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * <p>实例内存大小，单位G</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>实例已经使用存储空间大小，单位G</p>
                     */
                    int64_t m_usedStorage;
                    bool m_usedStorageHasBeenSet;

                    /**
                     * <p>实例存储空间大小，单位G</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>实例版本</p>
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * <p>实例续费标记，0-正常续费，1-自动续费，2-到期不续费</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>实例高可用， 1-双机高可用，2-单机，3-跨可用区，4-集群跨可用区，5-集群，6-多节点集群，7-多节点集群跨可用区，9-自研机房</p>
                     */
                    int64_t m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>实例所在地域名称，如 ap-guangzhou</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>实例所在可用区名称，如 ap-guangzhou-1</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>备份时间点</p>
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * <p>实例付费模式， 0-按量计费，1-包年包月</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>实例唯一UID</p>
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * <p>实例cpu核心数</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>实例版本代号</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>实例类型代号：&quot;TS85&quot;-物理机，本地SSD硬盘；&quot;Z3&quot;-物理机早期版本，本地SSD硬盘；&quot;CLOUD_BASIC&quot;-虚拟机，普通云硬盘；&quot;CLOUD_PREMIUM&quot;-虚拟机，高性能云硬盘；&quot;CLOUD_SSD&quot;-虚拟机，云SSD硬盘；&quot;CLOUD_HSSD&quot;-虚拟机，增强型SSD云硬盘；&quot;CLOUD_TSSD&quot;-虚拟机，极速型SSD云硬盘；&quot;CLOUD_BSSD&quot;-虚拟机，通用型SSD云硬盘</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>计费ID</p>
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * <p>实例所属VPC的唯一字符串ID，格式如：vpc-xxx，基础网络时为空字符串</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>实例所属子网的唯一字符串ID，格式如： subnet-xxx，基础网络时为空字符串</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>实例隔离操作</p>
                     */
                    std::string m_isolateOperator;
                    bool m_isolateOperatorHasBeenSet;

                    /**
                     * <p>发布订阅标识，SUB-订阅实例，PUB-发布实例，空值-没有发布订阅的普通实例</p>
                     */
                    std::string m_subFlag;
                    bool m_subFlagHasBeenSet;

                    /**
                     * <p>只读标识，RO-只读实例，MASTER-有RO实例的主实例，空值-没有只读组的非RO实例</p>
                     */
                    std::string m_rOFlag;
                    bool m_rOFlagHasBeenSet;

                    /**
                     * <p>容灾类型，MIRROR-镜像，ALWAYSON-AlwaysOn, SINGLE-单例</p>
                     */
                    std::string m_hAFlag;
                    bool m_hAFlagHasBeenSet;

                    /**
                     * <p>实例绑定的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>备份模式，master_pkg-主节点打包备份(默认) ；master_no_pkg-主节点不打包备份；slave_pkg-从节点打包备份(always on集群有效)；slave_no_pkg-从节点不打包备份(always on集群有效)；只读副本对该值无效。</p>
                     */
                    std::string m_backupModel;
                    bool m_backupModelHasBeenSet;

                    /**
                     * <p>实例备份信息</p>
                     */
                    std::string m_instanceNote;
                    bool m_instanceNoteHasBeenSet;

                    /**
                     * <p>备份周期</p>
                     */
                    std::vector<int64_t> m_backupCycle;
                    bool m_backupCycleHasBeenSet;

                    /**
                     * <p>备份周期类型，[daily、weekly、monthly]</p>
                     */
                    std::string m_backupCycleType;
                    bool m_backupCycleTypeHasBeenSet;

                    /**
                     * <p>数据(日志)备份保留时间</p>
                     */
                    int64_t m_backupSaveDays;
                    bool m_backupSaveDaysHasBeenSet;

                    /**
                     * <p>实例类型 HA-高可用，RO-只读实例，SI-基础版，BI-商业智能服务，cvmHA-云盘高可用，cvmRO-云盘只读实例，MultiHA-多节点，cvmMultiHA-云盘多节点</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>跨地域备份目的地域，如果为空，则表示未开启跨地域备份</p>
                     */
                    std::vector<std::string> m_crossRegions;
                    bool m_crossRegionsHasBeenSet;

                    /**
                     * <p>跨地域备份状态 enable-开启，disable-关闭</p>
                     */
                    std::string m_crossBackupEnabled;
                    bool m_crossBackupEnabledHasBeenSet;

                    /**
                     * <p>跨地域备份保留天数，则默认7天</p>
                     */
                    uint64_t m_crossBackupSaveDays;
                    bool m_crossBackupSaveDaysHasBeenSet;

                    /**
                     * <p>外网地址域名</p>
                     */
                    std::string m_dnsPodDomain;
                    bool m_dnsPodDomainHasBeenSet;

                    /**
                     * <p>外网端口号</p>
                     */
                    int64_t m_tgwWanVPort;
                    bool m_tgwWanVPortHasBeenSet;

                    /**
                     * <p>系统字符集排序规则，默认：Chinese_PRC_CI_AS</p>
                     */
                    std::string m_collation;
                    bool m_collationHasBeenSet;

                    /**
                     * <p>系统时区，默认：China Standard Time</p>
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>是否跨AZ</p>
                     */
                    bool m_isDrZone;
                    bool m_isDrZoneHasBeenSet;

                    /**
                     * <p>双节点实例备可用区信息</p>
                     */
                    SlaveZones m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * <p>架构标识，SINGLE-单节点 DOUBLE-双节点</p>
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * <p>类型标识，EXCLUSIVE-独享型，SHARED-共享型</p>
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * <p>多节点实例备可用区信息</p>
                     */
                    std::vector<SlaveZones> m_multiSlaveZones;
                    bool m_multiSlaveZonesHasBeenSet;

                    /**
                     * <p>额外IO吞吐量</p><p>单位：MB/s</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBINSTANCE_H_
