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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ROINSTANCEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ROINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * RO实例的详细信息
                */
                class RoInstanceInfo : public AbstractModel
                {
                public:
                    RoInstanceInfo();
                    ~RoInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RO组对应的主实例的ID
                     * @return MasterInstanceId RO组对应的主实例的ID
                     * 
                     */
                    std::string GetMasterInstanceId() const;

                    /**
                     * 设置RO组对应的主实例的ID
                     * @param _masterInstanceId RO组对应的主实例的ID
                     * 
                     */
                    void SetMasterInstanceId(const std::string& _masterInstanceId);

                    /**
                     * 判断参数 MasterInstanceId 是否已赋值
                     * @return MasterInstanceId 是否已赋值
                     * 
                     */
                    bool MasterInstanceIdHasBeenSet() const;

                    /**
                     * 获取RO实例在RO组内的状态，可能的值：online-在线，offline-下线
                     * @return RoStatus RO实例在RO组内的状态，可能的值：online-在线，offline-下线
                     * 
                     */
                    std::string GetRoStatus() const;

                    /**
                     * 设置RO实例在RO组内的状态，可能的值：online-在线，offline-下线
                     * @param _roStatus RO实例在RO组内的状态，可能的值：online-在线，offline-下线
                     * 
                     */
                    void SetRoStatus(const std::string& _roStatus);

                    /**
                     * 判断参数 RoStatus 是否已赋值
                     * @return RoStatus 是否已赋值
                     * 
                     */
                    bool RoStatusHasBeenSet() const;

                    /**
                     * 获取RO实例在RO组内上一次下线的时间
                     * @return OfflineTime RO实例在RO组内上一次下线的时间
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置RO实例在RO组内上一次下线的时间
                     * @param _offlineTime RO实例在RO组内上一次下线的时间
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取RO实例在RO组内的权重
                     * @return Weight RO实例在RO组内的权重
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置RO实例在RO组内的权重
                     * @param _weight RO实例在RO组内的权重
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取RO实例所在区域名称，如ap-shanghai
                     * @return Region RO实例所在区域名称，如ap-shanghai
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置RO实例所在区域名称，如ap-shanghai
                     * @param _region RO实例所在区域名称，如ap-shanghai
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
                     * 获取RO可用区的正式名称，如ap-shanghai-1
                     * @return Zone RO可用区的正式名称，如ap-shanghai-1
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置RO可用区的正式名称，如ap-shanghai-1
                     * @param _zone RO可用区的正式名称，如ap-shanghai-1
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
                     * 获取RO实例ID，格式如：cdbro-c1nl9rpv
                     * @return InstanceId RO实例ID，格式如：cdbro-c1nl9rpv
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置RO实例ID，格式如：cdbro-c1nl9rpv
                     * @param _instanceId RO实例ID，格式如：cdbro-c1nl9rpv
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
                     * 获取RO实例状态，可能返回值：0-创建中，1-运行中，3-异地RO（仅在使用DescribeDBInstances查询主实例信息时，返回值中异地RO的状态恒等于3，其他场景下无此值），4-删除中
                     * @return Status RO实例状态，可能返回值：0-创建中，1-运行中，3-异地RO（仅在使用DescribeDBInstances查询主实例信息时，返回值中异地RO的状态恒等于3，其他场景下无此值），4-删除中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置RO实例状态，可能返回值：0-创建中，1-运行中，3-异地RO（仅在使用DescribeDBInstances查询主实例信息时，返回值中异地RO的状态恒等于3，其他场景下无此值），4-删除中
                     * @param _status RO实例状态，可能返回值：0-创建中，1-运行中，3-异地RO（仅在使用DescribeDBInstances查询主实例信息时，返回值中异地RO的状态恒等于3，其他场景下无此值），4-删除中
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
                     * 获取实例类型，可能返回值：1-主实例，2-灾备实例，3-只读实例
                     * @return InstanceType 实例类型，可能返回值：1-主实例，2-灾备实例，3-只读实例
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置实例类型，可能返回值：1-主实例，2-灾备实例，3-只读实例
                     * @param _instanceType 实例类型，可能返回值：1-主实例，2-灾备实例，3-只读实例
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
                     * 获取RO实例名称
                     * @return InstanceName RO实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置RO实例名称
                     * @param _instanceName RO实例名称
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
                     * 获取按量计费状态，可能的取值：1-正常，2-欠费
                     * @return HourFeeStatus 按量计费状态，可能的取值：1-正常，2-欠费
                     * 
                     */
                    int64_t GetHourFeeStatus() const;

                    /**
                     * 设置按量计费状态，可能的取值：1-正常，2-欠费
                     * @param _hourFeeStatus 按量计费状态，可能的取值：1-正常，2-欠费
                     * 
                     */
                    void SetHourFeeStatus(const int64_t& _hourFeeStatus);

                    /**
                     * 判断参数 HourFeeStatus 是否已赋值
                     * @return HourFeeStatus 是否已赋值
                     * 
                     */
                    bool HourFeeStatusHasBeenSet() const;

                    /**
                     * 获取RO实例任务状态，可能返回值：<br>0-没有任务<br>1-升级中<br>2-数据导入中<br>3-开放Slave中<br>4-外网访问开通中<br>5-批量操作执行中<br>6-回档中<br>7-外网访问关闭中<br>8-密码修改中<br>9-实例名修改中<br>10-重启中<br>12-自建迁移中<br>13-删除库表中<br>14-灾备实例创建同步中
                     * @return TaskStatus RO实例任务状态，可能返回值：<br>0-没有任务<br>1-升级中<br>2-数据导入中<br>3-开放Slave中<br>4-外网访问开通中<br>5-批量操作执行中<br>6-回档中<br>7-外网访问关闭中<br>8-密码修改中<br>9-实例名修改中<br>10-重启中<br>12-自建迁移中<br>13-删除库表中<br>14-灾备实例创建同步中
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置RO实例任务状态，可能返回值：<br>0-没有任务<br>1-升级中<br>2-数据导入中<br>3-开放Slave中<br>4-外网访问开通中<br>5-批量操作执行中<br>6-回档中<br>7-外网访问关闭中<br>8-密码修改中<br>9-实例名修改中<br>10-重启中<br>12-自建迁移中<br>13-删除库表中<br>14-灾备实例创建同步中
                     * @param _taskStatus RO实例任务状态，可能返回值：<br>0-没有任务<br>1-升级中<br>2-数据导入中<br>3-开放Slave中<br>4-外网访问开通中<br>5-批量操作执行中<br>6-回档中<br>7-外网访问关闭中<br>8-密码修改中<br>9-实例名修改中<br>10-重启中<br>12-自建迁移中<br>13-删除库表中<br>14-灾备实例创建同步中
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
                     * 获取RO实例内存大小，单位：MB
                     * @return Memory RO实例内存大小，单位：MB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置RO实例内存大小，单位：MB
                     * @param _memory RO实例内存大小，单位：MB
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
                     * 获取RO实例硬盘大小，单位：GB
                     * @return Volume RO实例硬盘大小，单位：GB
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置RO实例硬盘大小，单位：GB
                     * @param _volume RO实例硬盘大小，单位：GB
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
                     * 获取每次查询数量
                     * @return Qps 每次查询数量
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置每次查询数量
                     * @param _qps 每次查询数量
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
                     * 获取RO实例的内网IP地址
                     * @return Vip RO实例的内网IP地址
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置RO实例的内网IP地址
                     * @param _vip RO实例的内网IP地址
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
                     * 获取RO实例访问端口
                     * @return Vport RO实例访问端口
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置RO实例访问端口
                     * @param _vport RO实例访问端口
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
                     * 获取RO实例所在私有网络ID
                     * @return VpcId RO实例所在私有网络ID
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置RO实例所在私有网络ID
                     * @param _vpcId RO实例所在私有网络ID
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
                     * 获取RO实例所在私有网络子网ID
                     * @return SubnetId RO实例所在私有网络子网ID
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置RO实例所在私有网络子网ID
                     * @param _subnetId RO实例所在私有网络子网ID
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
                     * 获取RO实例规格描述，目前可取值 CUSTOM
                     * @return DeviceType RO实例规格描述，目前可取值 CUSTOM
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置RO实例规格描述，目前可取值 CUSTOM
                     * @param _deviceType RO实例规格描述，目前可取值 CUSTOM
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
                     * 获取RO实例数据库引擎版本，可能返回值：5.1、5.5、5.6、5.7、8.0
                     * @return EngineVersion RO实例数据库引擎版本，可能返回值：5.1、5.5、5.6、5.7、8.0
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置RO实例数据库引擎版本，可能返回值：5.1、5.5、5.6、5.7、8.0
                     * @param _engineVersion RO实例数据库引擎版本，可能返回值：5.1、5.5、5.6、5.7、8.0
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
                     * 获取RO实例到期时间，时间格式：yyyy-mm-dd hh:mm:ss，如实例为按量计费模式，则此字段值为0000-00-00 00:00:00
                     * @return DeadlineTime RO实例到期时间，时间格式：yyyy-mm-dd hh:mm:ss，如实例为按量计费模式，则此字段值为0000-00-00 00:00:00
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置RO实例到期时间，时间格式：yyyy-mm-dd hh:mm:ss，如实例为按量计费模式，则此字段值为0000-00-00 00:00:00
                     * @param _deadlineTime RO实例到期时间，时间格式：yyyy-mm-dd hh:mm:ss，如实例为按量计费模式，则此字段值为0000-00-00 00:00:00
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
                     * 获取RO实例计费类型，可能返回值：0-包年包月，1-按量计费，2-后付费月结
                     * @return PayType RO实例计费类型，可能返回值：0-包年包月，1-按量计费，2-后付费月结
                     * 
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置RO实例计费类型，可能返回值：0-包年包月，1-按量计费，2-后付费月结
                     * @param _payType RO实例计费类型，可能返回值：0-包年包月，1-按量计费，2-后付费月结
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
                     * 获取RO延迟复制状态。
                     * @return ReplicationStatus RO延迟复制状态。
                     * 
                     */
                    std::string GetReplicationStatus() const;

                    /**
                     * 设置RO延迟复制状态。
                     * @param _replicationStatus RO延迟复制状态。
                     * 
                     */
                    void SetReplicationStatus(const std::string& _replicationStatus);

                    /**
                     * 判断参数 ReplicationStatus 是否已赋值
                     * @return ReplicationStatus 是否已赋值
                     * 
                     */
                    bool ReplicationStatusHasBeenSet() const;

                private:

                    /**
                     * RO组对应的主实例的ID
                     */
                    std::string m_masterInstanceId;
                    bool m_masterInstanceIdHasBeenSet;

                    /**
                     * RO实例在RO组内的状态，可能的值：online-在线，offline-下线
                     */
                    std::string m_roStatus;
                    bool m_roStatusHasBeenSet;

                    /**
                     * RO实例在RO组内上一次下线的时间
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * RO实例在RO组内的权重
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * RO实例所在区域名称，如ap-shanghai
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * RO可用区的正式名称，如ap-shanghai-1
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * RO实例ID，格式如：cdbro-c1nl9rpv
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * RO实例状态，可能返回值：0-创建中，1-运行中，3-异地RO（仅在使用DescribeDBInstances查询主实例信息时，返回值中异地RO的状态恒等于3，其他场景下无此值），4-删除中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例类型，可能返回值：1-主实例，2-灾备实例，3-只读实例
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * RO实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 按量计费状态，可能的取值：1-正常，2-欠费
                     */
                    int64_t m_hourFeeStatus;
                    bool m_hourFeeStatusHasBeenSet;

                    /**
                     * RO实例任务状态，可能返回值：<br>0-没有任务<br>1-升级中<br>2-数据导入中<br>3-开放Slave中<br>4-外网访问开通中<br>5-批量操作执行中<br>6-回档中<br>7-外网访问关闭中<br>8-密码修改中<br>9-实例名修改中<br>10-重启中<br>12-自建迁移中<br>13-删除库表中<br>14-灾备实例创建同步中
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * RO实例内存大小，单位：MB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * RO实例硬盘大小，单位：GB
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 每次查询数量
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * RO实例的内网IP地址
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * RO实例访问端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * RO实例所在私有网络ID
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * RO实例所在私有网络子网ID
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * RO实例规格描述，目前可取值 CUSTOM
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * RO实例数据库引擎版本，可能返回值：5.1、5.5、5.6、5.7、8.0
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * RO实例到期时间，时间格式：yyyy-mm-dd hh:mm:ss，如实例为按量计费模式，则此字段值为0000-00-00 00:00:00
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * RO实例计费类型，可能返回值：0-包年包月，1-按量计费，2-后付费月结
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * RO延迟复制状态。
                     */
                    std::string m_replicationStatus;
                    bool m_replicationStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROINSTANCEINFO_H_
