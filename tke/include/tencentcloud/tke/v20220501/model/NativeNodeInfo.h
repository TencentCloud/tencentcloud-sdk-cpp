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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_NATIVENODEINFO_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_NATIVENODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/Disk.h>
#include <tencentcloud/tke/v20220501/model/InternetAccessible.h>
#include <tencentcloud/tke/v20220501/model/GPUParams.h>
#include <tencentcloud/tke/v20220501/model/DataDisk.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 节点信息
                */
                class NativeNodeInfo : public AbstractModel
                {
                public:
                    NativeNodeInfo();
                    ~NativeNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点名称
                     * @return MachineName 节点名称
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置节点名称
                     * @param _machineName 节点名称
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Machine 状态
                     * @return MachineState Machine 状态
                     * 
                     */
                    std::string GetMachineState() const;

                    /**
                     * 设置Machine 状态
                     * @param _machineState Machine 状态
                     * 
                     */
                    void SetMachineState(const std::string& _machineState);

                    /**
                     * 判断参数 MachineState 是否已赋值
                     * @return MachineState 是否已赋值
                     * 
                     */
                    bool MachineStateHasBeenSet() const;

                    /**
                     * 获取Machine 所在可用区
                     * @return Zone Machine 所在可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Machine 所在可用区
                     * @param _zone Machine 所在可用区
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
                     * 获取节点计费类型。PREPAID：包年包月；POSTPAID_BY_HOUR：按量计费（默认）；
                     * @return InstanceChargeType 节点计费类型。PREPAID：包年包月；POSTPAID_BY_HOUR：按量计费（默认）；
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置节点计费类型。PREPAID：包年包月；POSTPAID_BY_HOUR：按量计费（默认）；
                     * @param _instanceChargeType 节点计费类型。PREPAID：包年包月；POSTPAID_BY_HOUR：按量计费（默认）；
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Machine 登录状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoginStatus Machine 登录状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLoginStatus() const;

                    /**
                     * 设置Machine 登录状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loginStatus Machine 登录状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoginStatus(const std::string& _loginStatus);

                    /**
                     * 判断参数 LoginStatus 是否已赋值
                     * @return LoginStatus 是否已赋值
                     * 
                     */
                    bool LoginStatusHasBeenSet() const;

                    /**
                     * 获取是否开启缩容保护
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsProtectedFromScaleIn 是否开启缩容保护
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsProtectedFromScaleIn() const;

                    /**
                     * 设置是否开启缩容保护
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isProtectedFromScaleIn 是否开启缩容保护
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsProtectedFromScaleIn(const bool& _isProtectedFromScaleIn);

                    /**
                     * 判断参数 IsProtectedFromScaleIn 是否已赋值
                     * @return IsProtectedFromScaleIn 是否已赋值
                     * 
                     */
                    bool IsProtectedFromScaleInHasBeenSet() const;

                    /**
                     * 获取Machine 名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName Machine 名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Machine 名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName Machine 名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取CPU核数，单位：核
                     * @return CPU CPU核数，单位：核
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置CPU核数，单位：核
                     * @param _cPU CPU核数，单位：核
                     * 
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取GPU核数，单位：核
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GPU GPU核数，单位：核
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGPU() const;

                    /**
                     * 设置GPU核数，单位：核
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gPU GPU核数，单位：核
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGPU(const uint64_t& _gPU);

                    /**
                     * 判断参数 GPU 是否已赋值
                     * @return GPU 是否已赋值
                     * 
                     */
                    bool GPUHasBeenSet() const;

                    /**
                     * 获取自动续费标识
                     * @return RenewFlag 自动续费标识
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识
                     * @param _renewFlag 自动续费标识
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取节点计费模式
                     * @return PayMode 节点计费模式
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置节点计费模式
                     * @param _payMode 节点计费模式
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取节点内存容量，单位：`GB`
                     * @return Memory 节点内存容量，单位：`GB`
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置节点内存容量，单位：`GB`
                     * @param _memory 节点内存容量，单位：`GB`
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取节点系统盘配置信息
                     * @return SystemDisk 节点系统盘配置信息
                     * 
                     */
                    Disk GetSystemDisk() const;

                    /**
                     * 设置节点系统盘配置信息
                     * @param _systemDisk 节点系统盘配置信息
                     * 
                     */
                    void SetSystemDisk(const Disk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取公网带宽相关信息设置
                     * @return InternetAccessible 公网带宽相关信息设置
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置公网带宽相关信息设置
                     * @param _internetAccessible 公网带宽相关信息设置
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取机型所属机型族
                     * @return InstanceFamily 机型所属机型族
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置机型所属机型族
                     * @param _instanceFamily 机型所属机型族
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取节点内网 IP
                     * @return LanIp 节点内网 IP
                     * 
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置节点内网 IP
                     * @param _lanIp 节点内网 IP
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
                     * 获取机型
                     * @return InstanceType 机型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置机型
                     * @param _instanceType 机型
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
                     * 获取包年包月节点计费过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredTime 包年包月节点计费过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置包年包月节点计费过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expiredTime 包年包月节点计费过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取节点外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WanIp 节点外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置节点外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wanIp 节点外网 IP
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
                     * 获取节点密钥 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyIds 节点密钥 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置节点密钥 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyIds 节点密钥 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                    /**
                     * 获取节点GPU相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GPUParams 节点GPU相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GPUParams GetGPUParams() const;

                    /**
                     * 设置节点GPU相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gPUParams 节点GPU相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGPUParams(const GPUParams& _gPUParams);

                    /**
                     * 判断参数 GPUParams 是否已赋值
                     * @return GPUParams 是否已赋值
                     * 
                     */
                    bool GPUParamsHasBeenSet() const;

                    /**
                     * 获取数据盘列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDisks 数据盘列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置数据盘列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDisks 数据盘列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取安全组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityGroupIDs 安全组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIDs() const;

                    /**
                     * 设置安全组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityGroupIDs 安全组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurityGroupIDs(const std::vector<std::string>& _securityGroupIDs);

                    /**
                     * 判断参数 SecurityGroupIDs 是否已赋值
                     * @return SecurityGroupIDs 是否已赋值
                     * 
                     */
                    bool SecurityGroupIDsHasBeenSet() const;

                    /**
                     * 获取VPC 唯一 ID
                     * @return VpcId VPC 唯一 ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC 唯一 ID
                     * @param _vpcId VPC 唯一 ID
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
                     * 获取子网唯一 ID
                     * @return SubnetId 子网唯一 ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网唯一 ID
                     * @param _subnetId 子网唯一 ID
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
                     * 获取OS的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OsImage OS的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOsImage() const;

                    /**
                     * 设置OS的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _osImage OS的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOsImage(const std::string& _osImage);

                    /**
                     * 判断参数 OsImage 是否已赋值
                     * @return OsImage 是否已赋值
                     * 
                     */
                    bool OsImageHasBeenSet() const;

                    /**
                     * 获取**原生节点的 Machine 类型**

- Native 表示 CXM 类型的原生节点
- NativeCVM 表示 CVM 类型的原生节点
                     * @return MachineType **原生节点的 Machine 类型**

- Native 表示 CXM 类型的原生节点
- NativeCVM 表示 CVM 类型的原生节点
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置**原生节点的 Machine 类型**

- Native 表示 CXM 类型的原生节点
- NativeCVM 表示 CVM 类型的原生节点
                     * @param _machineType **原生节点的 Machine 类型**

- Native 表示 CXM 类型的原生节点
- NativeCVM 表示 CVM 类型的原生节点
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取**原生节点对应的实例 ID**

- ins-q47ofw6 表示这个实例是一个 CVM 的实例
- eks-f8mvyaep 表示这个实例是一个 CXM 的实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId **原生节点对应的实例 ID**

- ins-q47ofw6 表示这个实例是一个 CVM 的实例
- eks-f8mvyaep 表示这个实例是一个 CXM 的实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置**原生节点对应的实例 ID**

- ins-q47ofw6 表示这个实例是一个 CVM 的实例
- eks-f8mvyaep 表示这个实例是一个 CXM 的实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId **原生节点对应的实例 ID**

- ins-q47ofw6 表示这个实例是一个 CVM 的实例
- eks-f8mvyaep 表示这个实例是一个 CXM 的实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 节点名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Machine 状态
                     */
                    std::string m_machineState;
                    bool m_machineStateHasBeenSet;

                    /**
                     * Machine 所在可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 节点计费类型。PREPAID：包年包月；POSTPAID_BY_HOUR：按量计费（默认）；
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Machine 登录状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loginStatus;
                    bool m_loginStatusHasBeenSet;

                    /**
                     * 是否开启缩容保护
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isProtectedFromScaleIn;
                    bool m_isProtectedFromScaleInHasBeenSet;

                    /**
                     * Machine 名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * CPU核数，单位：核
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * GPU核数，单位：核
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_gPU;
                    bool m_gPUHasBeenSet;

                    /**
                     * 自动续费标识
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 节点计费模式
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 节点内存容量，单位：`GB`
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 节点系统盘配置信息
                     */
                    Disk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 公网带宽相关信息设置
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * 机型所属机型族
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * 节点内网 IP
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                    /**
                     * 机型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 包年包月节点计费过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 节点外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 节点密钥 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * 节点GPU相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GPUParams m_gPUParams;
                    bool m_gPUParamsHasBeenSet;

                    /**
                     * 数据盘列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * 安全组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_securityGroupIDs;
                    bool m_securityGroupIDsHasBeenSet;

                    /**
                     * VPC 唯一 ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网唯一 ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * OS的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_osImage;
                    bool m_osImageHasBeenSet;

                    /**
                     * **原生节点的 Machine 类型**

- Native 表示 CXM 类型的原生节点
- NativeCVM 表示 CVM 类型的原生节点
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * **原生节点对应的实例 ID**

- ins-q47ofw6 表示这个实例是一个 CVM 的实例
- eks-f8mvyaep 表示这个实例是一个 CXM 的实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_NATIVENODEINFO_H_
