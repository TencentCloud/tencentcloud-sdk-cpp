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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RoVipInfo.h>
#include <tencentcloud/cdb/v20170320/model/SlaveInfo.h>
#include <tencentcloud/cdb/v20170320/model/RoGroup.h>
#include <tencentcloud/cdb/v20170320/model/MasterInfo.h>
#include <tencentcloud/cdb/v20170320/model/DrInfo.h>
#include <tencentcloud/cdb/v20170320/model/TagInfoItem.h>
#include <tencentcloud/cdb/v20170320/model/ClusterInfo.h>
#include <tencentcloud/cdb/v20170320/model/AnalysisNodeInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 实例详细信息
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外网状态，可能的返回值为：0-未开通外网；1-已开通外网；2-已关闭外网
                     * @return WanStatus 外网状态，可能的返回值为：0-未开通外网；1-已开通外网；2-已关闭外网
                     * 
                     */
                    int64_t GetWanStatus() const;

                    /**
                     * 设置外网状态，可能的返回值为：0-未开通外网；1-已开通外网；2-已关闭外网
                     * @param _wanStatus 外网状态，可能的返回值为：0-未开通外网；1-已开通外网；2-已关闭外网
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
                     * 获取可用区信息
                     * @return Zone 可用区信息
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区信息
                     * @param _zone 可用区信息
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
                     * 获取初始化标志，可能的返回值为：0-未初始化；1-已初始化
                     * @return InitFlag 初始化标志，可能的返回值为：0-未初始化；1-已初始化
                     * 
                     */
                    int64_t GetInitFlag() const;

                    /**
                     * 设置初始化标志，可能的返回值为：0-未初始化；1-已初始化
                     * @param _initFlag 初始化标志，可能的返回值为：0-未初始化；1-已初始化
                     * 
                     */
                    void SetInitFlag(const int64_t& _initFlag);

                    /**
                     * 判断参数 InitFlag 是否已赋值
                     * @return InitFlag 是否已赋值
                     * 
                     */
                    bool InitFlagHasBeenSet() const;

                    /**
                     * 获取只读vip信息。单独开通只读实例访问的只读实例才有该字段
                     * @return RoVipInfo 只读vip信息。单独开通只读实例访问的只读实例才有该字段
                     * 
                     */
                    RoVipInfo GetRoVipInfo() const;

                    /**
                     * 设置只读vip信息。单独开通只读实例访问的只读实例才有该字段
                     * @param _roVipInfo 只读vip信息。单独开通只读实例访问的只读实例才有该字段
                     * 
                     */
                    void SetRoVipInfo(const RoVipInfo& _roVipInfo);

                    /**
                     * 判断参数 RoVipInfo 是否已赋值
                     * @return RoVipInfo 是否已赋值
                     * 
                     */
                    bool RoVipInfoHasBeenSet() const;

                    /**
                     * 获取内存容量，单位为 MB
                     * @return Memory 内存容量，单位为 MB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存容量，单位为 MB
                     * @param _memory 内存容量，单位为 MB
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
                     * 获取实例状态，可能的返回值：0-创建中；1-运行中；4-正在进行隔离操作；5-已隔离
                     * @return Status 实例状态，可能的返回值：0-创建中；1-运行中；4-正在进行隔离操作；5-已隔离
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态，可能的返回值：0-创建中；1-运行中；4-正在进行隔离操作；5-已隔离
                     * @param _status 实例状态，可能的返回值：0-创建中；1-运行中；4-正在进行隔离操作；5-已隔离
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
                     * 获取私有网络 ID，例如：51102
                     * @return VpcId 私有网络 ID，例如：51102
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置私有网络 ID，例如：51102
                     * @param _vpcId 私有网络 ID，例如：51102
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
                     * 获取备机信息
                     * @return SlaveInfo 备机信息
                     * 
                     */
                    SlaveInfo GetSlaveInfo() const;

                    /**
                     * 设置备机信息
                     * @param _slaveInfo 备机信息
                     * 
                     */
                    void SetSlaveInfo(const SlaveInfo& _slaveInfo);

                    /**
                     * 判断参数 SlaveInfo 是否已赋值
                     * @return SlaveInfo 是否已赋值
                     * 
                     */
                    bool SlaveInfoHasBeenSet() const;

                    /**
                     * 获取实例 ID
                     * @return InstanceId 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param _instanceId 实例 ID
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
                     * 获取硬盘容量，单位为 GB
                     * @return Volume 硬盘容量，单位为 GB
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置硬盘容量，单位为 GB
                     * @param _volume 硬盘容量，单位为 GB
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取自动续费标志，可能的返回值：0-未开通自动续费；1-已开通自动续费；2-已关闭自动续费
                     * @return AutoRenew 自动续费标志，可能的返回值：0-未开通自动续费；1-已开通自动续费；2-已关闭自动续费
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置自动续费标志，可能的返回值：0-未开通自动续费；1-已开通自动续费；2-已关闭自动续费
                     * @param _autoRenew 自动续费标志，可能的返回值：0-未开通自动续费；1-已开通自动续费；2-已关闭自动续费
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取数据复制方式。0 - 异步复制；1 - 半同步复制；2 - 强同步复制
                     * @return ProtectMode 数据复制方式。0 - 异步复制；1 - 半同步复制；2 - 强同步复制
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置数据复制方式。0 - 异步复制；1 - 半同步复制；2 - 强同步复制
                     * @param _protectMode 数据复制方式。0 - 异步复制；1 - 半同步复制；2 - 强同步复制
                     * 
                     */
                    void SetProtectMode(const int64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     * 
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取只读组详细信息
                     * @return RoGroups 只读组详细信息
                     * 
                     */
                    std::vector<RoGroup> GetRoGroups() const;

                    /**
                     * 设置只读组详细信息
                     * @param _roGroups 只读组详细信息
                     * 
                     */
                    void SetRoGroups(const std::vector<RoGroup>& _roGroups);

                    /**
                     * 判断参数 RoGroups 是否已赋值
                     * @return RoGroups 是否已赋值
                     * 
                     */
                    bool RoGroupsHasBeenSet() const;

                    /**
                     * 获取子网 ID，例如：2333
                     * @return SubnetId 子网 ID，例如：2333
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置子网 ID，例如：2333
                     * @param _subnetId 子网 ID，例如：2333
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
                     * 获取实例类型，可能的返回值：1-主实例；2-灾备实例；3-只读实例
                     * @return InstanceType 实例类型，可能的返回值：1-主实例；2-灾备实例；3-只读实例
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置实例类型，可能的返回值：1-主实例；2-灾备实例；3-只读实例
                     * @param _instanceType 实例类型，可能的返回值：1-主实例；2-灾备实例；3-只读实例
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
                     * 获取项目 ID
                     * @return ProjectId 项目 ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目 ID
                     * @param _projectId 项目 ID
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
                     * 获取地域信息
                     * @return Region 地域信息
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域信息
                     * @param _region 地域信息
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
                     * 获取实例到期时间
                     * @return DeadlineTime 实例到期时间
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置实例到期时间
                     * @param _deadlineTime 实例到期时间
                     * 
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     * 
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取可用区部署方式。可能的值为：0 - 单可用区；1 - 多可用区
                     * @return DeployMode 可用区部署方式。可能的值为：0 - 单可用区；1 - 多可用区
                     * 
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置可用区部署方式。可能的值为：0 - 单可用区；1 - 多可用区
                     * @param _deployMode 可用区部署方式。可能的值为：0 - 单可用区；1 - 多可用区
                     * 
                     */
                    void SetDeployMode(const int64_t& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取实例任务状态。0 - 没有任务 ,1 - 升级中,2 - 数据导入中,3 - 开放Slave中,4 - 外网访问开通中,5 - 批量操作执行中,6 - 回档中,7 - 外网访问关闭中,8 - 密码修改中,9 - 实例名修改中,10 - 重启中,12 - 自建迁移中,13 - 删除库表中,14 - 灾备实例创建同步中,15 - 升级待切换,16 - 升级切换中,17 - 升级切换完成
                     * @return TaskStatus 实例任务状态。0 - 没有任务 ,1 - 升级中,2 - 数据导入中,3 - 开放Slave中,4 - 外网访问开通中,5 - 批量操作执行中,6 - 回档中,7 - 外网访问关闭中,8 - 密码修改中,9 - 实例名修改中,10 - 重启中,12 - 自建迁移中,13 - 删除库表中,14 - 灾备实例创建同步中,15 - 升级待切换,16 - 升级切换中,17 - 升级切换完成
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置实例任务状态。0 - 没有任务 ,1 - 升级中,2 - 数据导入中,3 - 开放Slave中,4 - 外网访问开通中,5 - 批量操作执行中,6 - 回档中,7 - 外网访问关闭中,8 - 密码修改中,9 - 实例名修改中,10 - 重启中,12 - 自建迁移中,13 - 删除库表中,14 - 灾备实例创建同步中,15 - 升级待切换,16 - 升级切换中,17 - 升级切换完成
                     * @param _taskStatus 实例任务状态。0 - 没有任务 ,1 - 升级中,2 - 数据导入中,3 - 开放Slave中,4 - 外网访问开通中,5 - 批量操作执行中,6 - 回档中,7 - 外网访问关闭中,8 - 密码修改中,9 - 实例名修改中,10 - 重启中,12 - 自建迁移中,13 - 删除库表中,14 - 灾备实例创建同步中,15 - 升级待切换,16 - 升级切换中,17 - 升级切换完成
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取主实例详细信息
                     * @return MasterInfo 主实例详细信息
                     * 
                     */
                    MasterInfo GetMasterInfo() const;

                    /**
                     * 设置主实例详细信息
                     * @param _masterInfo 主实例详细信息
                     * 
                     */
                    void SetMasterInfo(const MasterInfo& _masterInfo);

                    /**
                     * 判断参数 MasterInfo 是否已赋值
                     * @return MasterInfo 是否已赋值
                     * 
                     */
                    bool MasterInfoHasBeenSet() const;

                    /**
                     * 获取实例类型
                     * @return DeviceType 实例类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置实例类型
                     * @param _deviceType 实例类型
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
                     * 获取内核版本
                     * @return EngineVersion 内核版本
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置内核版本
                     * @param _engineVersion 内核版本
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

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
                     * 获取灾备实例详细信息
                     * @return DrInfo 灾备实例详细信息
                     * 
                     */
                    std::vector<DrInfo> GetDrInfo() const;

                    /**
                     * 设置灾备实例详细信息
                     * @param _drInfo 灾备实例详细信息
                     * 
                     */
                    void SetDrInfo(const std::vector<DrInfo>& _drInfo);

                    /**
                     * 判断参数 DrInfo 是否已赋值
                     * @return DrInfo 是否已赋值
                     * 
                     */
                    bool DrInfoHasBeenSet() const;

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
                     * 获取外网端口号
                     * @return WanPort 外网端口号
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置外网端口号
                     * @param _wanPort 外网端口号
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
                     * 获取付费类型，可能的返回值：0-包年包月；1-按量计费
                     * @return PayType 付费类型，可能的返回值：0-包年包月；1-按量计费
                     * 
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置付费类型，可能的返回值：0-包年包月；1-按量计费
                     * @param _payType 付费类型，可能的返回值：0-包年包月；1-按量计费
                     * 
                     */
                    void SetPayType(const int64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取实例创建时间
                     * @return CreateTime 实例创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例创建时间
                     * @param _createTime 实例创建时间
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
                     * 获取实例 IP
                     * @return Vip 实例 IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置实例 IP
                     * @param _vip 实例 IP
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
                     * 获取端口号
                     * @return Vport 端口号
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置端口号
                     * @param _vport 端口号
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
                     * 获取磁盘写入是否被锁定（实例数据写入量已经超过磁盘配额）。0 -未被锁定 1 -已被锁定
                     * @return CdbError 磁盘写入是否被锁定（实例数据写入量已经超过磁盘配额）。0 -未被锁定 1 -已被锁定
                     * 
                     */
                    int64_t GetCdbError() const;

                    /**
                     * 设置磁盘写入是否被锁定（实例数据写入量已经超过磁盘配额）。0 -未被锁定 1 -已被锁定
                     * @param _cdbError 磁盘写入是否被锁定（实例数据写入量已经超过磁盘配额）。0 -未被锁定 1 -已被锁定
                     * 
                     */
                    void SetCdbError(const int64_t& _cdbError);

                    /**
                     * 判断参数 CdbError 是否已赋值
                     * @return CdbError 是否已赋值
                     * 
                     */
                    bool CdbErrorHasBeenSet() const;

                    /**
                     * 获取私有网络描述符，例如：“vpc-5v8wn9mg”
                     * @return UniqVpcId 私有网络描述符，例如：“vpc-5v8wn9mg”
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置私有网络描述符，例如：“vpc-5v8wn9mg”
                     * @param _uniqVpcId 私有网络描述符，例如：“vpc-5v8wn9mg”
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
                     * 获取子网描述符，例如：“subnet-1typ0s7d”
                     * @return UniqSubnetId 子网描述符，例如：“subnet-1typ0s7d”
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置子网描述符，例如：“subnet-1typ0s7d”
                     * @param _uniqSubnetId 子网描述符，例如：“subnet-1typ0s7d”
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
                     * 获取物理 ID
                     * @return PhysicalId 物理 ID
                     * 
                     */
                    std::string GetPhysicalId() const;

                    /**
                     * 设置物理 ID
                     * @param _physicalId 物理 ID
                     * 
                     */
                    void SetPhysicalId(const std::string& _physicalId);

                    /**
                     * 判断参数 PhysicalId 是否已赋值
                     * @return PhysicalId 是否已赋值
                     * 
                     */
                    bool PhysicalIdHasBeenSet() const;

                    /**
                     * 获取核心数
                     * @return Cpu 核心数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置核心数
                     * @param _cpu 核心数
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
                     * 获取每秒查询数量
                     * @return Qps 每秒查询数量
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置每秒查询数量
                     * @param _qps 每秒查询数量
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
                     * 获取可用区中文名称
                     * @return ZoneName 可用区中文名称
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区中文名称
                     * @param _zoneName 可用区中文名称
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取物理机型
                     * @return DeviceClass 物理机型
                     * 
                     */
                    std::string GetDeviceClass() const;

                    /**
                     * 设置物理机型
                     * @param _deviceClass 物理机型
                     * 
                     */
                    void SetDeviceClass(const std::string& _deviceClass);

                    /**
                     * 判断参数 DeviceClass 是否已赋值
                     * @return DeviceClass 是否已赋值
                     * 
                     */
                    bool DeviceClassHasBeenSet() const;

                    /**
                     * 获取置放群组 ID
                     * @return DeployGroupId 置放群组 ID
                     * 
                     */
                    std::string GetDeployGroupId() const;

                    /**
                     * 设置置放群组 ID
                     * @param _deployGroupId 置放群组 ID
                     * 
                     */
                    void SetDeployGroupId(const std::string& _deployGroupId);

                    /**
                     * 判断参数 DeployGroupId 是否已赋值
                     * @return DeployGroupId 是否已赋值
                     * 
                     */
                    bool DeployGroupIdHasBeenSet() const;

                    /**
                     * 获取可用区 ID
                     * @return ZoneId 可用区 ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区 ID
                     * @param _zoneId 可用区 ID
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
                     * 获取节点数
                     * @return InstanceNodes 节点数
                     * 
                     */
                    int64_t GetInstanceNodes() const;

                    /**
                     * 设置节点数
                     * @param _instanceNodes 节点数
                     * 
                     */
                    void SetInstanceNodes(const int64_t& _instanceNodes);

                    /**
                     * 判断参数 InstanceNodes 是否已赋值
                     * @return InstanceNodes 是否已赋值
                     * 
                     */
                    bool InstanceNodesHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return TagList 标签列表
                     * 
                     */
                    std::vector<TagInfoItem> GetTagList() const;

                    /**
                     * 设置标签列表
                     * @param _tagList 标签列表
                     * 
                     */
                    void SetTagList(const std::vector<TagInfoItem>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取引擎类型
                     * @return EngineType 引擎类型
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置引擎类型
                     * @param _engineType 引擎类型
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取最大延迟阈值
                     * @return MaxDelayTime 最大延迟阈值
                     * 
                     */
                    int64_t GetMaxDelayTime() const;

                    /**
                     * 设置最大延迟阈值
                     * @param _maxDelayTime 最大延迟阈值
                     * 
                     */
                    void SetMaxDelayTime(const int64_t& _maxDelayTime);

                    /**
                     * 判断参数 MaxDelayTime 是否已赋值
                     * @return MaxDelayTime 是否已赋值
                     * 
                     */
                    bool MaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取实例磁盘类型，仅云盘版实例才返回该值。可能的值为 CLOUD_SSD：SSD云硬盘， CLOUD_HSSD：增强型SSD云硬盘
                     * @return DiskType 实例磁盘类型，仅云盘版实例才返回该值。可能的值为 CLOUD_SSD：SSD云硬盘， CLOUD_HSSD：增强型SSD云硬盘
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置实例磁盘类型，仅云盘版实例才返回该值。可能的值为 CLOUD_SSD：SSD云硬盘， CLOUD_HSSD：增强型SSD云硬盘
                     * @param _diskType 实例磁盘类型，仅云盘版实例才返回该值。可能的值为 CLOUD_SSD：SSD云硬盘， CLOUD_HSSD：增强型SSD云硬盘
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取当前扩容的CPU核心数。
                     * @return ExpandCpu 当前扩容的CPU核心数。
                     * 
                     */
                    int64_t GetExpandCpu() const;

                    /**
                     * 设置当前扩容的CPU核心数。
                     * @param _expandCpu 当前扩容的CPU核心数。
                     * 
                     */
                    void SetExpandCpu(const int64_t& _expandCpu);

                    /**
                     * 判断参数 ExpandCpu 是否已赋值
                     * @return ExpandCpu 是否已赋值
                     * 
                     */
                    bool ExpandCpuHasBeenSet() const;

                    /**
                     * 获取实例集群版节点信息
                     * @return ClusterInfo 实例集群版节点信息
                     * 
                     */
                    std::vector<ClusterInfo> GetClusterInfo() const;

                    /**
                     * 设置实例集群版节点信息
                     * @param _clusterInfo 实例集群版节点信息
                     * 
                     */
                    void SetClusterInfo(const std::vector<ClusterInfo>& _clusterInfo);

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                    /**
                     * 获取分析引擎节点列表
                     * @return AnalysisNodeInfos 分析引擎节点列表
                     * 
                     */
                    std::vector<AnalysisNodeInfo> GetAnalysisNodeInfos() const;

                    /**
                     * 设置分析引擎节点列表
                     * @param _analysisNodeInfos 分析引擎节点列表
                     * 
                     */
                    void SetAnalysisNodeInfos(const std::vector<AnalysisNodeInfo>& _analysisNodeInfos);

                    /**
                     * 判断参数 AnalysisNodeInfos 是否已赋值
                     * @return AnalysisNodeInfos 是否已赋值
                     * 
                     */
                    bool AnalysisNodeInfosHasBeenSet() const;

                    /**
                     * 获取设备带宽，单位G。当DeviceClass不为空时此参数才有效。例：25-表示当前设备带宽为25G；10-表示当前设备带宽为10G。
                     * @return DeviceBandwidth 设备带宽，单位G。当DeviceClass不为空时此参数才有效。例：25-表示当前设备带宽为25G；10-表示当前设备带宽为10G。
                     * 
                     */
                    uint64_t GetDeviceBandwidth() const;

                    /**
                     * 设置设备带宽，单位G。当DeviceClass不为空时此参数才有效。例：25-表示当前设备带宽为25G；10-表示当前设备带宽为10G。
                     * @param _deviceBandwidth 设备带宽，单位G。当DeviceClass不为空时此参数才有效。例：25-表示当前设备带宽为25G；10-表示当前设备带宽为10G。
                     * 
                     */
                    void SetDeviceBandwidth(const uint64_t& _deviceBandwidth);

                    /**
                     * 判断参数 DeviceBandwidth 是否已赋值
                     * @return DeviceBandwidth 是否已赋值
                     * 
                     */
                    bool DeviceBandwidthHasBeenSet() const;

                private:

                    /**
                     * 外网状态，可能的返回值为：0-未开通外网；1-已开通外网；2-已关闭外网
                     */
                    int64_t m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * 可用区信息
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 初始化标志，可能的返回值为：0-未初始化；1-已初始化
                     */
                    int64_t m_initFlag;
                    bool m_initFlagHasBeenSet;

                    /**
                     * 只读vip信息。单独开通只读实例访问的只读实例才有该字段
                     */
                    RoVipInfo m_roVipInfo;
                    bool m_roVipInfoHasBeenSet;

                    /**
                     * 内存容量，单位为 MB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例状态，可能的返回值：0-创建中；1-运行中；4-正在进行隔离操作；5-已隔离
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 私有网络 ID，例如：51102
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 备机信息
                     */
                    SlaveInfo m_slaveInfo;
                    bool m_slaveInfoHasBeenSet;

                    /**
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 硬盘容量，单位为 GB
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 自动续费标志，可能的返回值：0-未开通自动续费；1-已开通自动续费；2-已关闭自动续费
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 数据复制方式。0 - 异步复制；1 - 半同步复制；2 - 强同步复制
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * 只读组详细信息
                     */
                    std::vector<RoGroup> m_roGroups;
                    bool m_roGroupsHasBeenSet;

                    /**
                     * 子网 ID，例如：2333
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例类型，可能的返回值：1-主实例；2-灾备实例；3-只读实例
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 项目 ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 地域信息
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例到期时间
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * 可用区部署方式。可能的值为：0 - 单可用区；1 - 多可用区
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 实例任务状态。0 - 没有任务 ,1 - 升级中,2 - 数据导入中,3 - 开放Slave中,4 - 外网访问开通中,5 - 批量操作执行中,6 - 回档中,7 - 外网访问关闭中,8 - 密码修改中,9 - 实例名修改中,10 - 重启中,12 - 自建迁移中,13 - 删除库表中,14 - 灾备实例创建同步中,15 - 升级待切换,16 - 升级切换中,17 - 升级切换完成
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 主实例详细信息
                     */
                    MasterInfo m_masterInfo;
                    bool m_masterInfoHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 内核版本
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 灾备实例详细信息
                     */
                    std::vector<DrInfo> m_drInfo;
                    bool m_drInfoHasBeenSet;

                    /**
                     * 外网域名
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * 外网端口号
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * 付费类型，可能的返回值：0-包年包月；1-按量计费
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例 IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 端口号
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 磁盘写入是否被锁定（实例数据写入量已经超过磁盘配额）。0 -未被锁定 1 -已被锁定
                     */
                    int64_t m_cdbError;
                    bool m_cdbErrorHasBeenSet;

                    /**
                     * 私有网络描述符，例如：“vpc-5v8wn9mg”
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 子网描述符，例如：“subnet-1typ0s7d”
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 物理 ID
                     */
                    std::string m_physicalId;
                    bool m_physicalIdHasBeenSet;

                    /**
                     * 核心数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 每秒查询数量
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 可用区中文名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 物理机型
                     */
                    std::string m_deviceClass;
                    bool m_deviceClassHasBeenSet;

                    /**
                     * 置放群组 ID
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * 可用区 ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 节点数
                     */
                    int64_t m_instanceNodes;
                    bool m_instanceNodesHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<TagInfoItem> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 引擎类型
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 最大延迟阈值
                     */
                    int64_t m_maxDelayTime;
                    bool m_maxDelayTimeHasBeenSet;

                    /**
                     * 实例磁盘类型，仅云盘版实例才返回该值。可能的值为 CLOUD_SSD：SSD云硬盘， CLOUD_HSSD：增强型SSD云硬盘
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 当前扩容的CPU核心数。
                     */
                    int64_t m_expandCpu;
                    bool m_expandCpuHasBeenSet;

                    /**
                     * 实例集群版节点信息
                     */
                    std::vector<ClusterInfo> m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * 分析引擎节点列表
                     */
                    std::vector<AnalysisNodeInfo> m_analysisNodeInfos;
                    bool m_analysisNodeInfosHasBeenSet;

                    /**
                     * 设备带宽，单位G。当DeviceClass不为空时此参数才有效。例：25-表示当前设备带宽为25G；10-表示当前设备带宽为10G。
                     */
                    uint64_t m_deviceBandwidth;
                    bool m_deviceBandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEINFO_H_
