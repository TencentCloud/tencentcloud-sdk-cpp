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
#include <tencentcloud/tke/v20220501/model/Tag.h>


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
                     * 获取<p>节点名称</p>
                     * @return MachineName <p>节点名称</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>节点名称</p>
                     * @param _machineName <p>节点名称</p>
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
                     * 获取<p>Machine 状态</p>
                     * @return MachineState <p>Machine 状态</p>
                     * 
                     */
                    std::string GetMachineState() const;

                    /**
                     * 设置<p>Machine 状态</p>
                     * @param _machineState <p>Machine 状态</p>
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
                     * 获取<p>Machine 所在可用区</p>
                     * @return Zone <p>Machine 所在可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Machine 所在可用区</p>
                     * @param _zone <p>Machine 所在可用区</p>
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
                     * 获取<p>节点计费类型。PREPAID：包年包月；POSTPAID_BY_HOUR：按量计费（默认）；</p>
                     * @return InstanceChargeType <p>节点计费类型。PREPAID：包年包月；POSTPAID_BY_HOUR：按量计费（默认）；</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>节点计费类型。PREPAID：包年包月；POSTPAID_BY_HOUR：按量计费（默认）；</p>
                     * @param _instanceChargeType <p>节点计费类型。PREPAID：包年包月；POSTPAID_BY_HOUR：按量计费（默认）；</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreatedAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdAt <p>创建时间</p>
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
                     * 获取<p>Machine 登录状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoginStatus <p>Machine 登录状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLoginStatus() const;

                    /**
                     * 设置<p>Machine 登录状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loginStatus <p>Machine 登录状态</p>
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
                     * 获取<p>是否开启缩容保护</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsProtectedFromScaleIn <p>是否开启缩容保护</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsProtectedFromScaleIn() const;

                    /**
                     * 设置<p>是否开启缩容保护</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isProtectedFromScaleIn <p>是否开启缩容保护</p>
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
                     * 获取<p>Machine 名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName <p>Machine 名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>Machine 名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName <p>Machine 名字</p>
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
                     * 获取<p>CPU核数，单位：核</p>
                     * @return CPU <p>CPU核数，单位：核</p>
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置<p>CPU核数，单位：核</p>
                     * @param _cPU <p>CPU核数，单位：核</p>
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
                     * 获取<p>GPU核数，单位：核</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GPU <p>GPU核数，单位：核</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGPU() const;

                    /**
                     * 设置<p>GPU核数，单位：核</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gPU <p>GPU核数，单位：核</p>
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
                     * 获取<p>自动续费标识</p>
                     * @return RenewFlag <p>自动续费标识</p>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费标识</p>
                     * @param _renewFlag <p>自动续费标识</p>
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
                     * 获取<p>节点计费模式</p>
                     * @return PayMode <p>节点计费模式</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>节点计费模式</p>
                     * @param _payMode <p>节点计费模式</p>
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
                     * 获取<p>节点内存容量，单位：<code>GB</code></p>
                     * @return Memory <p>节点内存容量，单位：<code>GB</code></p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>节点内存容量，单位：<code>GB</code></p>
                     * @param _memory <p>节点内存容量，单位：<code>GB</code></p>
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
                     * 获取<p>节点系统盘配置信息</p>
                     * @return SystemDisk <p>节点系统盘配置信息</p>
                     * 
                     */
                    Disk GetSystemDisk() const;

                    /**
                     * 设置<p>节点系统盘配置信息</p>
                     * @param _systemDisk <p>节点系统盘配置信息</p>
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
                     * 获取<p>公网带宽相关信息设置</p>
                     * @return InternetAccessible <p>公网带宽相关信息设置</p>
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置<p>公网带宽相关信息设置</p>
                     * @param _internetAccessible <p>公网带宽相关信息设置</p>
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
                     * 获取<p>机型所属机型族</p>
                     * @return InstanceFamily <p>机型所属机型族</p>
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置<p>机型所属机型族</p>
                     * @param _instanceFamily <p>机型所属机型族</p>
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
                     * 获取<p>节点内网 IP</p>
                     * @return LanIp <p>节点内网 IP</p>
                     * 
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置<p>节点内网 IP</p>
                     * @param _lanIp <p>节点内网 IP</p>
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
                     * 获取<p>机型</p>
                     * @return InstanceType <p>机型</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>机型</p>
                     * @param _instanceType <p>机型</p>
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
                     * 获取<p>包年包月节点计费过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredTime <p>包年包月节点计费过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置<p>包年包月节点计费过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expiredTime <p>包年包月节点计费过期时间</p>
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
                     * 获取<p>节点外网 IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WanIp <p>节点外网 IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置<p>节点外网 IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wanIp <p>节点外网 IP</p>
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
                     * 获取<p>节点密钥 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyIds <p>节点密钥 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置<p>节点密钥 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyIds <p>节点密钥 ID 列表</p>
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
                     * 获取<p>节点GPU相关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GPUParams <p>节点GPU相关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GPUParams GetGPUParams() const;

                    /**
                     * 设置<p>节点GPU相关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gPUParams <p>节点GPU相关配置</p>
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
                     * 获取<p>数据盘列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDisks <p>数据盘列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置<p>数据盘列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDisks <p>数据盘列表</p>
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
                     * 获取<p>安全组列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityGroupIDs <p>安全组列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIDs() const;

                    /**
                     * 设置<p>安全组列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityGroupIDs <p>安全组列表</p>
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
                     * 获取<p>VPC 唯一 ID</p>
                     * @return VpcId <p>VPC 唯一 ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC 唯一 ID</p>
                     * @param _vpcId <p>VPC 唯一 ID</p>
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
                     * 获取<p>子网唯一 ID</p>
                     * @return SubnetId <p>子网唯一 ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网唯一 ID</p>
                     * @param _subnetId <p>子网唯一 ID</p>
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
                     * 获取<p>OS的名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OsImage <p>OS的名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOsImage() const;

                    /**
                     * 设置<p>OS的名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _osImage <p>OS的名称</p>
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
                     * 获取<p><strong>原生节点的 Machine 类型</strong></p><ul><li>Native 表示 CXM 类型的原生节点</li><li>NativeCVM 表示 CVM 类型的原生节点</li></ul>
                     * @return MachineType <p><strong>原生节点的 Machine 类型</strong></p><ul><li>Native 表示 CXM 类型的原生节点</li><li>NativeCVM 表示 CVM 类型的原生节点</li></ul>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p><strong>原生节点的 Machine 类型</strong></p><ul><li>Native 表示 CXM 类型的原生节点</li><li>NativeCVM 表示 CVM 类型的原生节点</li></ul>
                     * @param _machineType <p><strong>原生节点的 Machine 类型</strong></p><ul><li>Native 表示 CXM 类型的原生节点</li><li>NativeCVM 表示 CVM 类型的原生节点</li></ul>
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
                     * 获取<p><strong>原生节点对应的实例 ID</strong></p><ul><li>ins-q47ofw6 表示这个实例是一个 CVM 的实例</li><li>eks-f8mvyaep 表示这个实例是一个 CXM 的实例</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId <p><strong>原生节点对应的实例 ID</strong></p><ul><li>ins-q47ofw6 表示这个实例是一个 CVM 的实例</li><li>eks-f8mvyaep 表示这个实例是一个 CXM 的实例</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p><strong>原生节点对应的实例 ID</strong></p><ul><li>ins-q47ofw6 表示这个实例是一个 CVM 的实例</li><li>eks-f8mvyaep 表示这个实例是一个 CXM 的实例</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId <p><strong>原生节点对应的实例 ID</strong></p><ul><li>ins-q47ofw6 表示这个实例是一个 CVM 的实例</li><li>eks-f8mvyaep 表示这个实例是一个 CXM 的实例</li></ul>
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

                    /**
                     * 获取<p>原生节点云标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>原生节点云标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>原生节点云标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>原生节点云标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>节点名称</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>Machine 状态</p>
                     */
                    std::string m_machineState;
                    bool m_machineStateHasBeenSet;

                    /**
                     * <p>Machine 所在可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>节点计费类型。PREPAID：包年包月；POSTPAID_BY_HOUR：按量计费（默认）；</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>Machine 登录状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loginStatus;
                    bool m_loginStatusHasBeenSet;

                    /**
                     * <p>是否开启缩容保护</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isProtectedFromScaleIn;
                    bool m_isProtectedFromScaleInHasBeenSet;

                    /**
                     * <p>Machine 名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>CPU核数，单位：核</p>
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * <p>GPU核数，单位：核</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_gPU;
                    bool m_gPUHasBeenSet;

                    /**
                     * <p>自动续费标识</p>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>节点计费模式</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>节点内存容量，单位：<code>GB</code></p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>节点系统盘配置信息</p>
                     */
                    Disk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>公网带宽相关信息设置</p>
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * <p>机型所属机型族</p>
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * <p>节点内网 IP</p>
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                    /**
                     * <p>机型</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>包年包月节点计费过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * <p>节点外网 IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * <p>节点密钥 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * <p>节点GPU相关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GPUParams m_gPUParams;
                    bool m_gPUParamsHasBeenSet;

                    /**
                     * <p>数据盘列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * <p>安全组列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_securityGroupIDs;
                    bool m_securityGroupIDsHasBeenSet;

                    /**
                     * <p>VPC 唯一 ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网唯一 ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>OS的名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_osImage;
                    bool m_osImageHasBeenSet;

                    /**
                     * <p><strong>原生节点的 Machine 类型</strong></p><ul><li>Native 表示 CXM 类型的原生节点</li><li>NativeCVM 表示 CVM 类型的原生节点</li></ul>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p><strong>原生节点对应的实例 ID</strong></p><ul><li>ins-q47ofw6 表示这个实例是一个 CVM 的实例</li><li>eks-f8mvyaep 表示这个实例是一个 CXM 的实例</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>原生节点云标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_NATIVENODEINFO_H_
