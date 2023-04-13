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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CHCHOST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CHCHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Placement.h>
#include <tencentcloud/cvm/v20170312/model/VirtualPrivateCloud.h>
#include <tencentcloud/cvm/v20170312/model/ChcDeployExtraConfig.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CHC物理服务器信息
                */
                class ChcHost : public AbstractModel
                {
                public:
                    ChcHost();
                    ~ChcHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CHC物理服务器ID。
                     * @return ChcId CHC物理服务器ID。
                     */
                    std::string GetChcId() const;

                    /**
                     * 设置CHC物理服务器ID。
                     * @param ChcId CHC物理服务器ID。
                     */
                    void SetChcId(const std::string& _chcId);

                    /**
                     * 判断参数 ChcId 是否已赋值
                     * @return ChcId 是否已赋值
                     */
                    bool ChcIdHasBeenSet() const;

                    /**
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param InstanceName 实例名称。
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取服务器序列号。
                     * @return SerialNumber 服务器序列号。
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置服务器序列号。
                     * @param SerialNumber 服务器序列号。
                     */
                    void SetSerialNumber(const std::string& _serialNumber);

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取CHC的状态<br/>
<ul>
<li>INIT: 设备已录入。还未配置带外和部署网络</li>
<li>READY: 已配置带外和部署网络</li>
<li>PREPARED: 可分配云主机</li>
<li>ONLINE: 已分配云主机</li>
<li>OPERATING: 设备操作中，如正在配置带外网络等。</li>
<li>CLEAR_NETWORK_FAILED: 清理带外和部署网络失败</li>
</ul>
                     * @return InstanceState CHC的状态<br/>
<ul>
<li>INIT: 设备已录入。还未配置带外和部署网络</li>
<li>READY: 已配置带外和部署网络</li>
<li>PREPARED: 可分配云主机</li>
<li>ONLINE: 已分配云主机</li>
<li>OPERATING: 设备操作中，如正在配置带外网络等。</li>
<li>CLEAR_NETWORK_FAILED: 清理带外和部署网络失败</li>
</ul>
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置CHC的状态<br/>
<ul>
<li>INIT: 设备已录入。还未配置带外和部署网络</li>
<li>READY: 已配置带外和部署网络</li>
<li>PREPARED: 可分配云主机</li>
<li>ONLINE: 已分配云主机</li>
<li>OPERATING: 设备操作中，如正在配置带外网络等。</li>
<li>CLEAR_NETWORK_FAILED: 清理带外和部署网络失败</li>
</ul>
                     * @param InstanceState CHC的状态<br/>
<ul>
<li>INIT: 设备已录入。还未配置带外和部署网络</li>
<li>READY: 已配置带外和部署网络</li>
<li>PREPARED: 可分配云主机</li>
<li>ONLINE: 已分配云主机</li>
<li>OPERATING: 设备操作中，如正在配置带外网络等。</li>
<li>CLEAR_NETWORK_FAILED: 清理带外和部署网络失败</li>
</ul>
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取设备类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceType 设备类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeviceType 设备类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取所属可用区
                     * @return Placement 所属可用区
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置所属可用区
                     * @param Placement 所属可用区
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取带外网络。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BmcVirtualPrivateCloud 带外网络。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VirtualPrivateCloud GetBmcVirtualPrivateCloud() const;

                    /**
                     * 设置带外网络。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BmcVirtualPrivateCloud 带外网络。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBmcVirtualPrivateCloud(const VirtualPrivateCloud& _bmcVirtualPrivateCloud);

                    /**
                     * 判断参数 BmcVirtualPrivateCloud 是否已赋值
                     * @return BmcVirtualPrivateCloud 是否已赋值
                     */
                    bool BmcVirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取带外网络Ip。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BmcIp 带外网络Ip。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBmcIp() const;

                    /**
                     * 设置带外网络Ip。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BmcIp 带外网络Ip。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBmcIp(const std::string& _bmcIp);

                    /**
                     * 判断参数 BmcIp 是否已赋值
                     * @return BmcIp 是否已赋值
                     */
                    bool BmcIpHasBeenSet() const;

                    /**
                     * 获取带外网络安全组Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BmcSecurityGroupIds 带外网络安全组Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetBmcSecurityGroupIds() const;

                    /**
                     * 设置带外网络安全组Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BmcSecurityGroupIds 带外网络安全组Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBmcSecurityGroupIds(const std::vector<std::string>& _bmcSecurityGroupIds);

                    /**
                     * 判断参数 BmcSecurityGroupIds 是否已赋值
                     * @return BmcSecurityGroupIds 是否已赋值
                     */
                    bool BmcSecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取部署网络。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployVirtualPrivateCloud 部署网络。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VirtualPrivateCloud GetDeployVirtualPrivateCloud() const;

                    /**
                     * 设置部署网络。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeployVirtualPrivateCloud 部署网络。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeployVirtualPrivateCloud(const VirtualPrivateCloud& _deployVirtualPrivateCloud);

                    /**
                     * 判断参数 DeployVirtualPrivateCloud 是否已赋值
                     * @return DeployVirtualPrivateCloud 是否已赋值
                     */
                    bool DeployVirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取部署网络Ip。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployIp 部署网络Ip。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeployIp() const;

                    /**
                     * 设置部署网络Ip。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeployIp 部署网络Ip。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeployIp(const std::string& _deployIp);

                    /**
                     * 判断参数 DeployIp 是否已赋值
                     * @return DeployIp 是否已赋值
                     */
                    bool DeployIpHasBeenSet() const;

                    /**
                     * 获取部署网络安全组Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeploySecurityGroupIds 部署网络安全组Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetDeploySecurityGroupIds() const;

                    /**
                     * 设置部署网络安全组Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeploySecurityGroupIds 部署网络安全组Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeploySecurityGroupIds(const std::vector<std::string>& _deploySecurityGroupIds);

                    /**
                     * 判断参数 DeploySecurityGroupIds 是否已赋值
                     * @return DeploySecurityGroupIds 是否已赋值
                     */
                    bool DeploySecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取关联的云主机Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CvmInstanceId 关联的云主机Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置关联的云主机Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CvmInstanceId 关联的云主机Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCvmInstanceId(const std::string& _cvmInstanceId);

                    /**
                     * 判断参数 CvmInstanceId 是否已赋值
                     * @return CvmInstanceId 是否已赋值
                     */
                    bool CvmInstanceIdHasBeenSet() const;

                    /**
                     * 获取服务器导入的时间。
                     * @return CreatedTime 服务器导入的时间。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置服务器导入的时间。
                     * @param CreatedTime 服务器导入的时间。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取机型的硬件描述，分别为CPU核数，内存容量和磁盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HardwareDescription 机型的硬件描述，分别为CPU核数，内存容量和磁盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHardwareDescription() const;

                    /**
                     * 设置机型的硬件描述，分别为CPU核数，内存容量和磁盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HardwareDescription 机型的硬件描述，分别为CPU核数，内存容量和磁盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHardwareDescription(const std::string& _hardwareDescription);

                    /**
                     * 判断参数 HardwareDescription 是否已赋值
                     * @return HardwareDescription 是否已赋值
                     */
                    bool HardwareDescriptionHasBeenSet() const;

                    /**
                     * 获取CHC物理服务器的CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CPU CHC物理服务器的CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置CHC物理服务器的CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CPU CHC物理服务器的CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取CHC物理服务器的内存大小，单位为GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory CHC物理服务器的内存大小，单位为GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置CHC物理服务器的内存大小，单位为GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Memory CHC物理服务器的内存大小，单位为GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取CHC物理服务器的磁盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Disk CHC物理服务器的磁盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDisk() const;

                    /**
                     * 设置CHC物理服务器的磁盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Disk CHC物理服务器的磁盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDisk(const std::string& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取带外网络下分配的MAC地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BmcMAC 带外网络下分配的MAC地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBmcMAC() const;

                    /**
                     * 设置带外网络下分配的MAC地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BmcMAC 带外网络下分配的MAC地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBmcMAC(const std::string& _bmcMAC);

                    /**
                     * 判断参数 BmcMAC 是否已赋值
                     * @return BmcMAC 是否已赋值
                     */
                    bool BmcMACHasBeenSet() const;

                    /**
                     * 获取部署网络下分配的MAC地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployMAC 部署网络下分配的MAC地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeployMAC() const;

                    /**
                     * 设置部署网络下分配的MAC地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeployMAC 部署网络下分配的MAC地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeployMAC(const std::string& _deployMAC);

                    /**
                     * 判断参数 DeployMAC 是否已赋值
                     * @return DeployMAC 是否已赋值
                     */
                    bool DeployMACHasBeenSet() const;

                    /**
                     * 获取设备托管类型。
HOSTING: 托管
TENANT: 租赁
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TenantType 设备托管类型。
HOSTING: 托管
TENANT: 租赁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTenantType() const;

                    /**
                     * 设置设备托管类型。
HOSTING: 托管
TENANT: 租赁
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TenantType 设备托管类型。
HOSTING: 托管
TENANT: 租赁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTenantType(const std::string& _tenantType);

                    /**
                     * 判断参数 TenantType 是否已赋值
                     * @return TenantType 是否已赋值
                     */
                    bool TenantTypeHasBeenSet() const;

                    /**
                     * 获取chc dhcp选项，用于minios调试
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployExtraConfig chc dhcp选项，用于minios调试
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ChcDeployExtraConfig GetDeployExtraConfig() const;

                    /**
                     * 设置chc dhcp选项，用于minios调试
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeployExtraConfig chc dhcp选项，用于minios调试
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeployExtraConfig(const ChcDeployExtraConfig& _deployExtraConfig);

                    /**
                     * 判断参数 DeployExtraConfig 是否已赋值
                     * @return DeployExtraConfig 是否已赋值
                     */
                    bool DeployExtraConfigHasBeenSet() const;

                private:

                    /**
                     * CHC物理服务器ID。
                     */
                    std::string m_chcId;
                    bool m_chcIdHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 服务器序列号。
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * CHC的状态<br/>
<ul>
<li>INIT: 设备已录入。还未配置带外和部署网络</li>
<li>READY: 已配置带外和部署网络</li>
<li>PREPARED: 可分配云主机</li>
<li>ONLINE: 已分配云主机</li>
<li>OPERATING: 设备操作中，如正在配置带外网络等。</li>
<li>CLEAR_NETWORK_FAILED: 清理带外和部署网络失败</li>
</ul>
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 设备类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 所属可用区
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 带外网络。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VirtualPrivateCloud m_bmcVirtualPrivateCloud;
                    bool m_bmcVirtualPrivateCloudHasBeenSet;

                    /**
                     * 带外网络Ip。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bmcIp;
                    bool m_bmcIpHasBeenSet;

                    /**
                     * 带外网络安全组Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_bmcSecurityGroupIds;
                    bool m_bmcSecurityGroupIdsHasBeenSet;

                    /**
                     * 部署网络。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VirtualPrivateCloud m_deployVirtualPrivateCloud;
                    bool m_deployVirtualPrivateCloudHasBeenSet;

                    /**
                     * 部署网络Ip。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deployIp;
                    bool m_deployIpHasBeenSet;

                    /**
                     * 部署网络安全组Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_deploySecurityGroupIds;
                    bool m_deploySecurityGroupIdsHasBeenSet;

                    /**
                     * 关联的云主机Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * 服务器导入的时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 机型的硬件描述，分别为CPU核数，内存容量和磁盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hardwareDescription;
                    bool m_hardwareDescriptionHasBeenSet;

                    /**
                     * CHC物理服务器的CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * CHC物理服务器的内存大小，单位为GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * CHC物理服务器的磁盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * 带外网络下分配的MAC地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bmcMAC;
                    bool m_bmcMACHasBeenSet;

                    /**
                     * 部署网络下分配的MAC地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deployMAC;
                    bool m_deployMACHasBeenSet;

                    /**
                     * 设备托管类型。
HOSTING: 托管
TENANT: 租赁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tenantType;
                    bool m_tenantTypeHasBeenSet;

                    /**
                     * chc dhcp选项，用于minios调试
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ChcDeployExtraConfig m_deployExtraConfig;
                    bool m_deployExtraConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CHCHOST_H_
