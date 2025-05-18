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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_REPAIRTASKINFO_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_REPAIRTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述维修任务的相关信息
                */
                class RepairTaskInfo : public AbstractModel
                {
                public:
                    RepairTaskInfo();
                    ~RepairTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取维修任务ID
                     * @return TaskId 维修任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置维修任务ID
                     * @param _taskId 维修任务ID
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alias 实例名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务类型ID，与任务类型中文名的对应关系如下：

- `101`：实例运行隐患
- `102`：实例运行异常
- `103`：实例硬盘异常
- `104`：实例网络连接异常
- `105`：实例运行预警
- `106`：实例硬盘预警
- `107`：实例维护升级

各任务类型的具体含义，可参考 [维修任务分类](https://cloud.tencent.com/document/product/213/67789#.E7.BB.B4.E4.BF.AE.E4.BB.BB.E5.8A.A1.E5.88.86.E7.B1.BB)。
                     * @return TaskTypeId 任务类型ID，与任务类型中文名的对应关系如下：

- `101`：实例运行隐患
- `102`：实例运行异常
- `103`：实例硬盘异常
- `104`：实例网络连接异常
- `105`：实例运行预警
- `106`：实例硬盘预警
- `107`：实例维护升级

各任务类型的具体含义，可参考 [维修任务分类](https://cloud.tencent.com/document/product/213/67789#.E7.BB.B4.E4.BF.AE.E4.BB.BB.E5.8A.A1.E5.88.86.E7.B1.BB)。
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置任务类型ID，与任务类型中文名的对应关系如下：

- `101`：实例运行隐患
- `102`：实例运行异常
- `103`：实例硬盘异常
- `104`：实例网络连接异常
- `105`：实例运行预警
- `106`：实例硬盘预警
- `107`：实例维护升级

各任务类型的具体含义，可参考 [维修任务分类](https://cloud.tencent.com/document/product/213/67789#.E7.BB.B4.E4.BF.AE.E4.BB.BB.E5.8A.A1.E5.88.86.E7.B1.BB)。
                     * @param _taskTypeId 任务类型ID，与任务类型中文名的对应关系如下：

- `101`：实例运行隐患
- `102`：实例运行异常
- `103`：实例硬盘异常
- `104`：实例网络连接异常
- `105`：实例运行预警
- `106`：实例硬盘预警
- `107`：实例维护升级

各任务类型的具体含义，可参考 [维修任务分类](https://cloud.tencent.com/document/product/213/67789#.E7.BB.B4.E4.BF.AE.E4.BB.BB.E5.8A.A1.E5.88.86.E7.B1.BB)。
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
                     * 获取任务类型中文名
                     * @return TaskTypeName 任务类型中文名
                     * 
                     */
                    std::string GetTaskTypeName() const;

                    /**
                     * 设置任务类型中文名
                     * @param _taskTypeName 任务类型中文名
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
                     * 获取任务状态ID，与任务状态中文名的对应关系如下：

- `1`：待授权
- `2`：处理中
- `3`：已结束
- `4`：已预约
- `5`：已取消
- `6`：已避免

各任务状态的具体含义，可参考 [任务状态](https://cloud.tencent.com/document/product/213/67789#.E4.BB.BB.E5.8A.A1.E7.8A.B6.E6.80.81)。
                     * @return TaskStatus 任务状态ID，与任务状态中文名的对应关系如下：

- `1`：待授权
- `2`：处理中
- `3`：已结束
- `4`：已预约
- `5`：已取消
- `6`：已避免

各任务状态的具体含义，可参考 [任务状态](https://cloud.tencent.com/document/product/213/67789#.E4.BB.BB.E5.8A.A1.E7.8A.B6.E6.80.81)。
                     * 
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 设置任务状态ID，与任务状态中文名的对应关系如下：

- `1`：待授权
- `2`：处理中
- `3`：已结束
- `4`：已预约
- `5`：已取消
- `6`：已避免

各任务状态的具体含义，可参考 [任务状态](https://cloud.tencent.com/document/product/213/67789#.E4.BB.BB.E5.8A.A1.E7.8A.B6.E6.80.81)。
                     * @param _taskStatus 任务状态ID，与任务状态中文名的对应关系如下：

- `1`：待授权
- `2`：处理中
- `3`：已结束
- `4`：已预约
- `5`：已取消
- `6`：已避免

各任务状态的具体含义，可参考 [任务状态](https://cloud.tencent.com/document/product/213/67789#.E4.BB.BB.E5.8A.A1.E7.8A.B6.E6.80.81)。
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
                     * 获取设备状态ID，与设备状态中文名的对应关系如下：

- `1`：故障中
- `2`：处理中
- `3`：正常
- `4`：已预约
- `5`：已取消
- `6`：已避免
                     * @return DeviceStatus 设备状态ID，与设备状态中文名的对应关系如下：

- `1`：故障中
- `2`：处理中
- `3`：正常
- `4`：已预约
- `5`：已取消
- `6`：已避免
                     * 
                     */
                    uint64_t GetDeviceStatus() const;

                    /**
                     * 设置设备状态ID，与设备状态中文名的对应关系如下：

- `1`：故障中
- `2`：处理中
- `3`：正常
- `4`：已预约
- `5`：已取消
- `6`：已避免
                     * @param _deviceStatus 设备状态ID，与设备状态中文名的对应关系如下：

- `1`：故障中
- `2`：处理中
- `3`：正常
- `4`：已预约
- `5`：已取消
- `6`：已避免
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
                     * 获取操作状态ID，与操作状态中文名的对应关系如下：

- `1`：未授权
- `2`：已授权
- `3`：已处理
- `4`：已预约
- `5`：已取消
- `6`：已避免
                     * @return OperateStatus 操作状态ID，与操作状态中文名的对应关系如下：

- `1`：未授权
- `2`：已授权
- `3`：已处理
- `4`：已预约
- `5`：已取消
- `6`：已避免
                     * 
                     */
                    uint64_t GetOperateStatus() const;

                    /**
                     * 设置操作状态ID，与操作状态中文名的对应关系如下：

- `1`：未授权
- `2`：已授权
- `3`：已处理
- `4`：已预约
- `5`：已取消
- `6`：已避免
                     * @param _operateStatus 操作状态ID，与操作状态中文名的对应关系如下：

- `1`：未授权
- `2`：已授权
- `3`：已处理
- `4`：已预约
- `5`：已取消
- `6`：已避免
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
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
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
                     * 获取任务授权时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthTime 任务授权时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthTime() const;

                    /**
                     * 设置任务授权时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authTime 任务授权时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskDetail 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskDetail() const;

                    /**
                     * 设置任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskDetail 任务详情
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone 可用区
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取所在私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 所在私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置所在私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId 所在私有网络ID
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
                     * 获取所在私有网络名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcName 所在私有网络名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置所在私有网络名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcName 所在私有网络名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取所在子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 所在子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置所在子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 所在子网ID
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
                     * 获取所在子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetName 所在子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置所在子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetName 所在子网名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例公网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WanIp 实例公网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置实例公网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wanIp 实例公网IP
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LanIp 实例内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置实例内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lanIp 实例内网IP
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取产品类型，支持取值：

- `CVM`：云服务器
- `CDH`：专用宿主机
- `CPM2.0`：裸金属云服务器
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Product 产品类型，支持取值：

- `CVM`：云服务器
- `CDH`：专用宿主机
- `CPM2.0`：裸金属云服务器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置产品类型，支持取值：

- `CVM`：云服务器
- `CDH`：专用宿主机
- `CPM2.0`：裸金属云服务器
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _product 产品类型，支持取值：

- `CVM`：云服务器
- `CDH`：专用宿主机
- `CPM2.0`：裸金属云服务器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取任务子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskSubType 任务子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskSubType() const;

                    /**
                     * 设置任务子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskSubType 任务子类型
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

                    /**
                     * 获取任务授权类型，当前`AuthType`和维修任务提供的授权选项的对应关系如下：

- `"1"`：仅提供【在线迁移授权】
- `"2"`：仅提供【停机授权】
- `"3"`：仅提供【在线换盘授权】
- `"4"`：提供【停机换盘授权】（默认）、【弃盘迁移授权】（可选）
- `"5"`：提供【停机授权】（默认）、【弃盘迁移授权】（可选）
- `"6"`：仅提供【在线维护授权】
- `"7"`：提供【在线维护授权】（默认）、【停机授权】（可选）
- `"8"`：仅提供【弃盘迁移授权】
                     * @return AuthType 任务授权类型，当前`AuthType`和维修任务提供的授权选项的对应关系如下：

- `"1"`：仅提供【在线迁移授权】
- `"2"`：仅提供【停机授权】
- `"3"`：仅提供【在线换盘授权】
- `"4"`：提供【停机换盘授权】（默认）、【弃盘迁移授权】（可选）
- `"5"`：提供【停机授权】（默认）、【弃盘迁移授权】（可选）
- `"6"`：仅提供【在线维护授权】
- `"7"`：提供【在线维护授权】（默认）、【停机授权】（可选）
- `"8"`：仅提供【弃盘迁移授权】
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置任务授权类型，当前`AuthType`和维修任务提供的授权选项的对应关系如下：

- `"1"`：仅提供【在线迁移授权】
- `"2"`：仅提供【停机授权】
- `"3"`：仅提供【在线换盘授权】
- `"4"`：提供【停机换盘授权】（默认）、【弃盘迁移授权】（可选）
- `"5"`：提供【停机授权】（默认）、【弃盘迁移授权】（可选）
- `"6"`：仅提供【在线维护授权】
- `"7"`：提供【在线维护授权】（默认）、【停机授权】（可选）
- `"8"`：仅提供【弃盘迁移授权】
                     * @param _authType 任务授权类型，当前`AuthType`和维修任务提供的授权选项的对应关系如下：

- `"1"`：仅提供【在线迁移授权】
- `"2"`：仅提供【停机授权】
- `"3"`：仅提供【在线换盘授权】
- `"4"`：提供【停机换盘授权】（默认）、【弃盘迁移授权】（可选）
- `"5"`：提供【停机授权】（默认）、【弃盘迁移授权】（可选）
- `"6"`：仅提供【在线维护授权】
- `"7"`：提供【在线维护授权】（默认）、【停机授权】（可选）
- `"8"`：仅提供【弃盘迁移授权】
                     * 
                     */
                    void SetAuthType(const uint64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取授权渠道，支持取值：

- `Waiting_auth`：待授权
- `Customer_auth`：客户操作授权
- `System_mandatory_auth`：系统默认授权
- `Pre_policy_auth`：预置策略授权
                     * @return AuthSource 授权渠道，支持取值：

- `Waiting_auth`：待授权
- `Customer_auth`：客户操作授权
- `System_mandatory_auth`：系统默认授权
- `Pre_policy_auth`：预置策略授权
                     * 
                     */
                    std::string GetAuthSource() const;

                    /**
                     * 设置授权渠道，支持取值：

- `Waiting_auth`：待授权
- `Customer_auth`：客户操作授权
- `System_mandatory_auth`：系统默认授权
- `Pre_policy_auth`：预置策略授权
                     * @param _authSource 授权渠道，支持取值：

- `Waiting_auth`：待授权
- `Customer_auth`：客户操作授权
- `System_mandatory_auth`：系统默认授权
- `Pre_policy_auth`：预置策略授权
                     * 
                     */
                    void SetAuthSource(const std::string& _authSource);

                    /**
                     * 判断参数 AuthSource 是否已赋值
                     * @return AuthSource 是否已赋值
                     * 
                     */
                    bool AuthSourceHasBeenSet() const;

                private:

                    /**
                     * 维修任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 任务类型ID，与任务类型中文名的对应关系如下：

- `101`：实例运行隐患
- `102`：实例运行异常
- `103`：实例硬盘异常
- `104`：实例网络连接异常
- `105`：实例运行预警
- `106`：实例硬盘预警
- `107`：实例维护升级

各任务类型的具体含义，可参考 [维修任务分类](https://cloud.tencent.com/document/product/213/67789#.E7.BB.B4.E4.BF.AE.E4.BB.BB.E5.8A.A1.E5.88.86.E7.B1.BB)。
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * 任务类型中文名
                     */
                    std::string m_taskTypeName;
                    bool m_taskTypeNameHasBeenSet;

                    /**
                     * 任务状态ID，与任务状态中文名的对应关系如下：

- `1`：待授权
- `2`：处理中
- `3`：已结束
- `4`：已预约
- `5`：已取消
- `6`：已避免

各任务状态的具体含义，可参考 [任务状态](https://cloud.tencent.com/document/product/213/67789#.E4.BB.BB.E5.8A.A1.E7.8A.B6.E6.80.81)。
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 设备状态ID，与设备状态中文名的对应关系如下：

- `1`：故障中
- `2`：处理中
- `3`：正常
- `4`：已预约
- `5`：已取消
- `6`：已避免
                     */
                    uint64_t m_deviceStatus;
                    bool m_deviceStatusHasBeenSet;

                    /**
                     * 操作状态ID，与操作状态中文名的对应关系如下：

- `1`：未授权
- `2`：已授权
- `3`：已处理
- `4`：已预约
- `5`：已取消
- `6`：已避免
                     */
                    uint64_t m_operateStatus;
                    bool m_operateStatusHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务授权时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authTime;
                    bool m_authTimeHasBeenSet;

                    /**
                     * 任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskDetail;
                    bool m_taskDetailHasBeenSet;

                    /**
                     * 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 所在私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 所在私有网络名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 所在子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 所在子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 实例公网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 实例内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                    /**
                     * 产品类型，支持取值：

- `CVM`：云服务器
- `CDH`：专用宿主机
- `CPM2.0`：裸金属云服务器
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 任务子类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskSubType;
                    bool m_taskSubTypeHasBeenSet;

                    /**
                     * 任务授权类型，当前`AuthType`和维修任务提供的授权选项的对应关系如下：

- `"1"`：仅提供【在线迁移授权】
- `"2"`：仅提供【停机授权】
- `"3"`：仅提供【在线换盘授权】
- `"4"`：提供【停机换盘授权】（默认）、【弃盘迁移授权】（可选）
- `"5"`：提供【停机授权】（默认）、【弃盘迁移授权】（可选）
- `"6"`：仅提供【在线维护授权】
- `"7"`：提供【在线维护授权】（默认）、【停机授权】（可选）
- `"8"`：仅提供【弃盘迁移授权】
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 授权渠道，支持取值：

- `Waiting_auth`：待授权
- `Customer_auth`：客户操作授权
- `System_mandatory_auth`：系统默认授权
- `Pre_policy_auth`：预置策略授权
                     */
                    std::string m_authSource;
                    bool m_authSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_REPAIRTASKINFO_H_
