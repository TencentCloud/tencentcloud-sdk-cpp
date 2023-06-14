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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_TASKINFO_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_TASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 维护平台维修任务信息
                */
                class TaskInfo : public AbstractModel
                {
                public:
                    TaskInfo();
                    ~TaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取主机id
                     * @return InstanceId 主机id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置主机id
                     * @param _instanceId 主机id
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
                     * 获取主机别名
                     * @return Alias 主机别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置主机别名
                     * @param _alias 主机别名
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取故障类型id
                     * @return TaskTypeId 故障类型id
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置故障类型id
                     * @param _taskTypeId 故障类型id
                     * 
                     */
                    void SetTaskTypeId(const uint64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取任务状态id
                     * @return TaskStatus 任务状态id
                     * 
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 设置任务状态id
                     * @param _taskStatus 任务状态id
                     * 
                     */
                    void SetTaskStatus(const uint64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

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
                     * 获取授权时间
                     * @return AuthTime 授权时间
                     * 
                     */
                    std::string GetAuthTime() const;

                    /**
                     * 设置授权时间
                     * @param _authTime 授权时间
                     * 
                     */
                    void SetAuthTime(const std::string& _authTime);

                    /**
                     * 判断参数 AuthTime 是否已赋值
                     * @return AuthTime 是否已赋值
                     * 
                     */
                    bool AuthTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取任务详情
                     * @return TaskDetail 任务详情
                     * 
                     */
                    std::string GetTaskDetail() const;

                    /**
                     * 设置任务详情
                     * @param _taskDetail 任务详情
                     * 
                     */
                    void SetTaskDetail(const std::string& _taskDetail);

                    /**
                     * 判断参数 TaskDetail 是否已赋值
                     * @return TaskDetail 是否已赋值
                     * 
                     */
                    bool TaskDetailHasBeenSet() const;

                    /**
                     * 获取设备状态
                     * @return DeviceStatus 设备状态
                     * 
                     */
                    uint64_t GetDeviceStatus() const;

                    /**
                     * 设置设备状态
                     * @param _deviceStatus 设备状态
                     * 
                     */
                    void SetDeviceStatus(const uint64_t& _deviceStatus);

                    /**
                     * 判断参数 DeviceStatus 是否已赋值
                     * @return DeviceStatus 是否已赋值
                     * 
                     */
                    bool DeviceStatusHasBeenSet() const;

                    /**
                     * 获取设备操作状态
                     * @return OperateStatus 设备操作状态
                     * 
                     */
                    uint64_t GetOperateStatus() const;

                    /**
                     * 设置设备操作状态
                     * @param _operateStatus 设备操作状态
                     * 
                     */
                    void SetOperateStatus(const uint64_t& _operateStatus);

                    /**
                     * 判断参数 OperateStatus 是否已赋值
                     * @return OperateStatus 是否已赋值
                     * 
                     */
                    bool OperateStatusHasBeenSet() const;

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
                     * 获取所属网络
                     * @return VpcId 所属网络
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置所属网络
                     * @param _vpcId 所属网络
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
                     * 获取所在子网
                     * @return SubnetId 所在子网
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置所在子网
                     * @param _subnetId 所在子网
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
                     * 获取子网名
                     * @return SubnetName 子网名
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名
                     * @param _subnetName 子网名
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取VPC名
                     * @return VpcName VPC名
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC名
                     * @param _vpcName VPC名
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取VpcCidrBlock
                     * @return VpcCidrBlock VpcCidrBlock
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置VpcCidrBlock
                     * @param _vpcCidrBlock VpcCidrBlock
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取SubnetCidrBlock
                     * @return SubnetCidrBlock SubnetCidrBlock
                     * 
                     */
                    std::string GetSubnetCidrBlock() const;

                    /**
                     * 设置SubnetCidrBlock
                     * @param _subnetCidrBlock SubnetCidrBlock
                     * 
                     */
                    void SetSubnetCidrBlock(const std::string& _subnetCidrBlock);

                    /**
                     * 判断参数 SubnetCidrBlock 是否已赋值
                     * @return SubnetCidrBlock 是否已赋值
                     * 
                     */
                    bool SubnetCidrBlockHasBeenSet() const;

                    /**
                     * 获取公网ip
                     * @return WanIp 公网ip
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置公网ip
                     * @param _wanIp 公网ip
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取内网IP
                     * @return LanIp 内网IP
                     * 
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置内网IP
                     * @param _lanIp 内网IP
                     * 
                     */
                    void SetLanIp(const std::string& _lanIp);

                    /**
                     * 判断参数 LanIp 是否已赋值
                     * @return LanIp 是否已赋值
                     * 
                     */
                    bool LanIpHasBeenSet() const;

                    /**
                     * 获取管理IP
                     * @return MgtIp 管理IP
                     * 
                     */
                    std::string GetMgtIp() const;

                    /**
                     * 设置管理IP
                     * @param _mgtIp 管理IP
                     * 
                     */
                    void SetMgtIp(const std::string& _mgtIp);

                    /**
                     * 判断参数 MgtIp 是否已赋值
                     * @return MgtIp 是否已赋值
                     * 
                     */
                    bool MgtIpHasBeenSet() const;

                    /**
                     * 获取故障类中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeName 故障类中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskTypeName() const;

                    /**
                     * 设置故障类中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeName 故障类中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypeName(const std::string& _taskTypeName);

                    /**
                     * 判断参数 TaskTypeName 是否已赋值
                     * @return TaskTypeName 是否已赋值
                     * 
                     */
                    bool TaskTypeNameHasBeenSet() const;

                    /**
                     * 获取故障类型，取值：unconfirmed (不明确故障)；redundancy (有冗余故障)；nonredundancy (无冗余故障)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskSubType 故障类型，取值：unconfirmed (不明确故障)；redundancy (有冗余故障)；nonredundancy (无冗余故障)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskSubType() const;

                    /**
                     * 设置故障类型，取值：unconfirmed (不明确故障)；redundancy (有冗余故障)；nonredundancy (无冗余故障)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskSubType 故障类型，取值：unconfirmed (不明确故障)；redundancy (有冗余故障)；nonredundancy (无冗余故障)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskSubType(const std::string& _taskSubType);

                    /**
                     * 判断参数 TaskSubType 是否已赋值
                     * @return TaskSubType 是否已赋值
                     * 
                     */
                    bool TaskSubTypeHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 主机id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主机别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 故障类型id
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * 任务状态id
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 授权时间
                     */
                    std::string m_authTime;
                    bool m_authTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务详情
                     */
                    std::string m_taskDetail;
                    bool m_taskDetailHasBeenSet;

                    /**
                     * 设备状态
                     */
                    uint64_t m_deviceStatus;
                    bool m_deviceStatusHasBeenSet;

                    /**
                     * 设备操作状态
                     */
                    uint64_t m_operateStatus;
                    bool m_operateStatusHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 所属网络
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 所在子网
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网名
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * VPC名
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * VpcCidrBlock
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * SubnetCidrBlock
                     */
                    std::string m_subnetCidrBlock;
                    bool m_subnetCidrBlockHasBeenSet;

                    /**
                     * 公网ip
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                    /**
                     * 管理IP
                     */
                    std::string m_mgtIp;
                    bool m_mgtIpHasBeenSet;

                    /**
                     * 故障类中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTypeName;
                    bool m_taskTypeNameHasBeenSet;

                    /**
                     * 故障类型，取值：unconfirmed (不明确故障)；redundancy (有冗余故障)；nonredundancy (无冗余故障)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskSubType;
                    bool m_taskSubTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_TASKINFO_H_
