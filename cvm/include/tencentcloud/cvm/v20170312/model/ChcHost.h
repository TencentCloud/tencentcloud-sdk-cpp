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
#include <tencentcloud/cvm/v20170312/model/Tag.h>


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
                     * 获取<p>CHC物理服务器ID。</p>
                     * @return ChcId <p>CHC物理服务器ID。</p>
                     * 
                     */
                    std::string GetChcId() const;

                    /**
                     * 设置<p>CHC物理服务器ID。</p>
                     * @param _chcId <p>CHC物理服务器ID。</p>
                     * 
                     */
                    void SetChcId(const std::string& _chcId);

                    /**
                     * 判断参数 ChcId 是否已赋值
                     * @return ChcId 是否已赋值
                     * 
                     */
                    bool ChcIdHasBeenSet() const;

                    /**
                     * 获取<p>实例名称。</p>
                     * @return InstanceName <p>实例名称。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称。</p>
                     * @param _instanceName <p>实例名称。</p>
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
                     * 获取<p>服务器序列号。</p>
                     * @return SerialNumber <p>服务器序列号。</p>
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置<p>服务器序列号。</p>
                     * @param _serialNumber <p>服务器序列号。</p>
                     * 
                     */
                    void SetSerialNumber(const std::string& _serialNumber);

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取<p>CHC的状态<br></p><ul><li>INIT: 设备已录入。还未配置带外和部署网络</li><li>READY: 已配置带外和部署网络</li><li>PREPARED: 可分配云主机</li><li>ONLINE: 已分配云主机</li><li>OPERATING: 设备操作中，如正在配置带外网络等。</li><li>CLEAR_NETWORK_FAILED: 清理带外和部署网络失败</li></ul>
                     * @return InstanceState <p>CHC的状态<br></p><ul><li>INIT: 设备已录入。还未配置带外和部署网络</li><li>READY: 已配置带外和部署网络</li><li>PREPARED: 可分配云主机</li><li>ONLINE: 已分配云主机</li><li>OPERATING: 设备操作中，如正在配置带外网络等。</li><li>CLEAR_NETWORK_FAILED: 清理带外和部署网络失败</li></ul>
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置<p>CHC的状态<br></p><ul><li>INIT: 设备已录入。还未配置带外和部署网络</li><li>READY: 已配置带外和部署网络</li><li>PREPARED: 可分配云主机</li><li>ONLINE: 已分配云主机</li><li>OPERATING: 设备操作中，如正在配置带外网络等。</li><li>CLEAR_NETWORK_FAILED: 清理带外和部署网络失败</li></ul>
                     * @param _instanceState <p>CHC的状态<br></p><ul><li>INIT: 设备已录入。还未配置带外和部署网络</li><li>READY: 已配置带外和部署网络</li><li>PREPARED: 可分配云主机</li><li>ONLINE: 已分配云主机</li><li>OPERATING: 设备操作中，如正在配置带外网络等。</li><li>CLEAR_NETWORK_FAILED: 清理带外和部署网络失败</li></ul>
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取<p>设备类型。</p>
                     * @return DeviceType <p>设备类型。</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>设备类型。</p>
                     * @param _deviceType <p>设备类型。</p>
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
                     * 获取<p>所属可用区。</p>
                     * @return Placement <p>所属可用区。</p>
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置<p>所属可用区。</p>
                     * @param _placement <p>所属可用区。</p>
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取<p>带外网络。</p>
                     * @return BmcVirtualPrivateCloud <p>带外网络。</p>
                     * 
                     */
                    VirtualPrivateCloud GetBmcVirtualPrivateCloud() const;

                    /**
                     * 设置<p>带外网络。</p>
                     * @param _bmcVirtualPrivateCloud <p>带外网络。</p>
                     * 
                     */
                    void SetBmcVirtualPrivateCloud(const VirtualPrivateCloud& _bmcVirtualPrivateCloud);

                    /**
                     * 判断参数 BmcVirtualPrivateCloud 是否已赋值
                     * @return BmcVirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool BmcVirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取<p>带外网络IP。</p>
                     * @return BmcIp <p>带外网络IP。</p>
                     * 
                     */
                    std::string GetBmcIp() const;

                    /**
                     * 设置<p>带外网络IP。</p>
                     * @param _bmcIp <p>带外网络IP。</p>
                     * 
                     */
                    void SetBmcIp(const std::string& _bmcIp);

                    /**
                     * 判断参数 BmcIp 是否已赋值
                     * @return BmcIp 是否已赋值
                     * 
                     */
                    bool BmcIpHasBeenSet() const;

                    /**
                     * 获取<p>带外网络安全组ID。</p>
                     * @return BmcSecurityGroupIds <p>带外网络安全组ID。</p>
                     * 
                     */
                    std::vector<std::string> GetBmcSecurityGroupIds() const;

                    /**
                     * 设置<p>带外网络安全组ID。</p>
                     * @param _bmcSecurityGroupIds <p>带外网络安全组ID。</p>
                     * 
                     */
                    void SetBmcSecurityGroupIds(const std::vector<std::string>& _bmcSecurityGroupIds);

                    /**
                     * 判断参数 BmcSecurityGroupIds 是否已赋值
                     * @return BmcSecurityGroupIds 是否已赋值
                     * 
                     */
                    bool BmcSecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>部署网络。</p>
                     * @return DeployVirtualPrivateCloud <p>部署网络。</p>
                     * 
                     */
                    VirtualPrivateCloud GetDeployVirtualPrivateCloud() const;

                    /**
                     * 设置<p>部署网络。</p>
                     * @param _deployVirtualPrivateCloud <p>部署网络。</p>
                     * 
                     */
                    void SetDeployVirtualPrivateCloud(const VirtualPrivateCloud& _deployVirtualPrivateCloud);

                    /**
                     * 判断参数 DeployVirtualPrivateCloud 是否已赋值
                     * @return DeployVirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool DeployVirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取<p>部署网络IP。</p>
                     * @return DeployIp <p>部署网络IP。</p>
                     * 
                     */
                    std::string GetDeployIp() const;

                    /**
                     * 设置<p>部署网络IP。</p>
                     * @param _deployIp <p>部署网络IP。</p>
                     * 
                     */
                    void SetDeployIp(const std::string& _deployIp);

                    /**
                     * 判断参数 DeployIp 是否已赋值
                     * @return DeployIp 是否已赋值
                     * 
                     */
                    bool DeployIpHasBeenSet() const;

                    /**
                     * 获取<p>部署网络安全组ID。</p>
                     * @return DeploySecurityGroupIds <p>部署网络安全组ID。</p>
                     * 
                     */
                    std::vector<std::string> GetDeploySecurityGroupIds() const;

                    /**
                     * 设置<p>部署网络安全组ID。</p>
                     * @param _deploySecurityGroupIds <p>部署网络安全组ID。</p>
                     * 
                     */
                    void SetDeploySecurityGroupIds(const std::vector<std::string>& _deploySecurityGroupIds);

                    /**
                     * 判断参数 DeploySecurityGroupIds 是否已赋值
                     * @return DeploySecurityGroupIds 是否已赋值
                     * 
                     */
                    bool DeploySecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>关联的云主机ID。</p>
                     * @return CvmInstanceId <p>关联的云主机ID。</p>
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置<p>关联的云主机ID。</p>
                     * @param _cvmInstanceId <p>关联的云主机ID。</p>
                     * 
                     */
                    void SetCvmInstanceId(const std::string& _cvmInstanceId);

                    /**
                     * 判断参数 CvmInstanceId 是否已赋值
                     * @return CvmInstanceId 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>服务器导入的时间。</p>
                     * @return CreatedTime <p>服务器导入的时间。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>服务器导入的时间。</p>
                     * @param _createdTime <p>服务器导入的时间。</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>机型的硬件描述，分别为CPU核数，内存容量和磁盘容量。</p>
                     * @return HardwareDescription <p>机型的硬件描述，分别为CPU核数，内存容量和磁盘容量。</p>
                     * 
                     */
                    std::string GetHardwareDescription() const;

                    /**
                     * 设置<p>机型的硬件描述，分别为CPU核数，内存容量和磁盘容量。</p>
                     * @param _hardwareDescription <p>机型的硬件描述，分别为CPU核数，内存容量和磁盘容量。</p>
                     * 
                     */
                    void SetHardwareDescription(const std::string& _hardwareDescription);

                    /**
                     * 判断参数 HardwareDescription 是否已赋值
                     * @return HardwareDescription 是否已赋值
                     * 
                     */
                    bool HardwareDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>CHC物理服务器的CPU核数。</p>
                     * @return CPU <p>CHC物理服务器的CPU核数。</p>
                     * 
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置<p>CHC物理服务器的CPU核数。</p>
                     * @param _cPU <p>CHC物理服务器的CPU核数。</p>
                     * 
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取<p>CHC物理服务器的内存大小，单位为GB。</p>
                     * @return Memory <p>CHC物理服务器的内存大小，单位为GB。</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>CHC物理服务器的内存大小，单位为GB。</p>
                     * @param _memory <p>CHC物理服务器的内存大小，单位为GB。</p>
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
                     * 获取<p>CHC物理服务器的磁盘信息。</p>
                     * @return Disk <p>CHC物理服务器的磁盘信息。</p>
                     * 
                     */
                    std::string GetDisk() const;

                    /**
                     * 设置<p>CHC物理服务器的磁盘信息。</p>
                     * @param _disk <p>CHC物理服务器的磁盘信息。</p>
                     * 
                     */
                    void SetDisk(const std::string& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取<p>带外网络下分配的MAC地址。</p>
                     * @return BmcMAC <p>带外网络下分配的MAC地址。</p>
                     * 
                     */
                    std::string GetBmcMAC() const;

                    /**
                     * 设置<p>带外网络下分配的MAC地址。</p>
                     * @param _bmcMAC <p>带外网络下分配的MAC地址。</p>
                     * 
                     */
                    void SetBmcMAC(const std::string& _bmcMAC);

                    /**
                     * 判断参数 BmcMAC 是否已赋值
                     * @return BmcMAC 是否已赋值
                     * 
                     */
                    bool BmcMACHasBeenSet() const;

                    /**
                     * 获取<p>部署网络下分配的MAC地址。</p>
                     * @return DeployMAC <p>部署网络下分配的MAC地址。</p>
                     * 
                     */
                    std::string GetDeployMAC() const;

                    /**
                     * 设置<p>部署网络下分配的MAC地址。</p>
                     * @param _deployMAC <p>部署网络下分配的MAC地址。</p>
                     * 
                     */
                    void SetDeployMAC(const std::string& _deployMAC);

                    /**
                     * 判断参数 DeployMAC 是否已赋值
                     * @return DeployMAC 是否已赋值
                     * 
                     */
                    bool DeployMACHasBeenSet() const;

                    /**
                     * 获取<p>设备托管类型。</p><p>枚举值：</p><ul><li>HOSTING： 托管类型。</li><li>TENANT： 租赁类型。</li></ul>
                     * @return TenantType <p>设备托管类型。</p><p>枚举值：</p><ul><li>HOSTING： 托管类型。</li><li>TENANT： 租赁类型。</li></ul>
                     * 
                     */
                    std::string GetTenantType() const;

                    /**
                     * 设置<p>设备托管类型。</p><p>枚举值：</p><ul><li>HOSTING： 托管类型。</li><li>TENANT： 租赁类型。</li></ul>
                     * @param _tenantType <p>设备托管类型。</p><p>枚举值：</p><ul><li>HOSTING： 托管类型。</li><li>TENANT： 租赁类型。</li></ul>
                     * 
                     */
                    void SetTenantType(const std::string& _tenantType);

                    /**
                     * 判断参数 TenantType 是否已赋值
                     * @return TenantType 是否已赋值
                     * 
                     */
                    bool TenantTypeHasBeenSet() const;

                    /**
                     * 获取<p>CHC DHCP选项，用于客户自建PXE环境。</p>
                     * @return DeployExtraConfig <p>CHC DHCP选项，用于客户自建PXE环境。</p>
                     * 
                     */
                    ChcDeployExtraConfig GetDeployExtraConfig() const;

                    /**
                     * 设置<p>CHC DHCP选项，用于客户自建PXE环境。</p>
                     * @param _deployExtraConfig <p>CHC DHCP选项，用于客户自建PXE环境。</p>
                     * 
                     */
                    void SetDeployExtraConfig(const ChcDeployExtraConfig& _deployExtraConfig);

                    /**
                     * 判断参数 DeployExtraConfig 是否已赋值
                     * @return DeployExtraConfig 是否已赋值
                     * 
                     */
                    bool DeployExtraConfigHasBeenSet() const;

                    /**
                     * 获取<p>GPU型号。</p>
                     * @return Gpu <p>GPU型号。</p>
                     * 
                     */
                    std::string GetGpu() const;

                    /**
                     * 设置<p>GPU型号。</p>
                     * @param _gpu <p>GPU型号。</p>
                     * 
                     */
                    void SetGpu(const std::string& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     * 
                     */
                    bool GpuHasBeenSet() const;

                    /**
                     * 获取<p>网卡型号。主要指RDMA网卡。</p>
                     * @return NetworkCard <p>网卡型号。主要指RDMA网卡。</p>
                     * 
                     */
                    std::string GetNetworkCard() const;

                    /**
                     * 设置<p>网卡型号。主要指RDMA网卡。</p>
                     * @param _networkCard <p>网卡型号。主要指RDMA网卡。</p>
                     * 
                     */
                    void SetNetworkCard(const std::string& _networkCard);

                    /**
                     * 判断参数 NetworkCard 是否已赋值
                     * @return NetworkCard 是否已赋值
                     * 
                     */
                    bool NetworkCardHasBeenSet() const;

                    /**
                     * 获取<p>是否是预定义机型。</p>
                     * @return IsPredefinedType <p>是否是预定义机型。</p>
                     * 
                     */
                    bool GetIsPredefinedType() const;

                    /**
                     * 设置<p>是否是预定义机型。</p>
                     * @param _isPredefinedType <p>是否是预定义机型。</p>
                     * 
                     */
                    void SetIsPredefinedType(const bool& _isPredefinedType);

                    /**
                     * 判断参数 IsPredefinedType 是否已赋值
                     * @return IsPredefinedType 是否已赋值
                     * 
                     */
                    bool IsPredefinedTypeHasBeenSet() const;

                    /**
                     * 获取<p>CHC云主机机型。</p>
                     * @return ChcInstanceType <p>CHC云主机机型。</p>
                     * 
                     */
                    std::string GetChcInstanceType() const;

                    /**
                     * 设置<p>CHC云主机机型。</p>
                     * @param _chcInstanceType <p>CHC云主机机型。</p>
                     * 
                     */
                    void SetChcInstanceType(const std::string& _chcInstanceType);

                    /**
                     * 判断参数 ChcInstanceType 是否已赋值
                     * @return ChcInstanceType 是否已赋值
                     * 
                     */
                    bool ChcInstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>CHC云主机机型簇。</p>
                     * @return ChcInstanceFamily <p>CHC云主机机型簇。</p>
                     * 
                     */
                    std::string GetChcInstanceFamily() const;

                    /**
                     * 设置<p>CHC云主机机型簇。</p>
                     * @param _chcInstanceFamily <p>CHC云主机机型簇。</p>
                     * 
                     */
                    void SetChcInstanceFamily(const std::string& _chcInstanceFamily);

                    /**
                     * 判断参数 ChcInstanceFamily 是否已赋值
                     * @return ChcInstanceFamily 是否已赋值
                     * 
                     */
                    bool ChcInstanceFamilyHasBeenSet() const;

                    /**
                     * 获取<p>CHC云主机机型簇名称。</p>
                     * @return ChcInstanceFamilyName <p>CHC云主机机型簇名称。</p>
                     * 
                     */
                    std::string GetChcInstanceFamilyName() const;

                    /**
                     * 设置<p>CHC云主机机型簇名称。</p>
                     * @param _chcInstanceFamilyName <p>CHC云主机机型簇名称。</p>
                     * 
                     */
                    void SetChcInstanceFamilyName(const std::string& _chcInstanceFamilyName);

                    /**
                     * 判断参数 ChcInstanceFamilyName 是否已赋值
                     * @return ChcInstanceFamilyName 是否已赋值
                     * 
                     */
                    bool ChcInstanceFamilyNameHasBeenSet() const;

                    /**
                     * 获取<p>转售客户的AppID。</p>
                     * @return ResaleAppId <p>转售客户的AppID。</p>
                     * 
                     */
                    std::string GetResaleAppId() const;

                    /**
                     * 设置<p>转售客户的AppID。</p>
                     * @param _resaleAppId <p>转售客户的AppID。</p>
                     * 
                     */
                    void SetResaleAppId(const std::string& _resaleAppId);

                    /**
                     * 判断参数 ResaleAppId 是否已赋值
                     * @return ResaleAppId 是否已赋值
                     * 
                     */
                    bool ResaleAppIdHasBeenSet() const;

                    /**
                     * 获取<p>转售客户的账号ID。</p>
                     * @return ResaleAccountId <p>转售客户的账号ID。</p>
                     * 
                     */
                    std::string GetResaleAccountId() const;

                    /**
                     * 设置<p>转售客户的账号ID。</p>
                     * @param _resaleAccountId <p>转售客户的账号ID。</p>
                     * 
                     */
                    void SetResaleAccountId(const std::string& _resaleAccountId);

                    /**
                     * 判断参数 ResaleAccountId 是否已赋值
                     * @return ResaleAccountId 是否已赋值
                     * 
                     */
                    bool ResaleAccountIdHasBeenSet() const;

                    /**
                     * 获取<p>售卖状态。<br></p><ul><li>NOT_FOR_SALE:不可售卖</li><li>AVAILABLE: 可售卖</li><li>SOLD: 已售卖</li></ul>
                     * @return SaleStatus <p>售卖状态。<br></p><ul><li>NOT_FOR_SALE:不可售卖</li><li>AVAILABLE: 可售卖</li><li>SOLD: 已售卖</li></ul>
                     * 
                     */
                    std::string GetSaleStatus() const;

                    /**
                     * 设置<p>售卖状态。<br></p><ul><li>NOT_FOR_SALE:不可售卖</li><li>AVAILABLE: 可售卖</li><li>SOLD: 已售卖</li></ul>
                     * @param _saleStatus <p>售卖状态。<br></p><ul><li>NOT_FOR_SALE:不可售卖</li><li>AVAILABLE: 可售卖</li><li>SOLD: 已售卖</li></ul>
                     * 
                     */
                    void SetSaleStatus(const std::string& _saleStatus);

                    /**
                     * 判断参数 SaleStatus 是否已赋值
                     * @return SaleStatus 是否已赋值
                     * 
                     */
                    bool SaleStatusHasBeenSet() const;

                    /**
                     * 获取<p>CHC物理服务器关联的标签列表。</p>
                     * @return Tags <p>CHC物理服务器关联的标签列表。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>CHC物理服务器关联的标签列表。</p>
                     * @param _tags <p>CHC物理服务器关联的标签列表。</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>最近操作。</p>
                     * @return LatestOperation <p>最近操作。</p>
                     * 
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置<p>最近操作。</p>
                     * @param _latestOperation <p>最近操作。</p>
                     * 
                     */
                    void SetLatestOperation(const std::string& _latestOperation);

                    /**
                     * 判断参数 LatestOperation 是否已赋值
                     * @return LatestOperation 是否已赋值
                     * 
                     */
                    bool LatestOperationHasBeenSet() const;

                    /**
                     * 获取<p>最近操作错误码。</p>
                     * @return LatestOperationErrorCode <p>最近操作错误码。</p>
                     * 
                     */
                    std::string GetLatestOperationErrorCode() const;

                    /**
                     * 设置<p>最近操作错误码。</p>
                     * @param _latestOperationErrorCode <p>最近操作错误码。</p>
                     * 
                     */
                    void SetLatestOperationErrorCode(const std::string& _latestOperationErrorCode);

                    /**
                     * 判断参数 LatestOperationErrorCode 是否已赋值
                     * @return LatestOperationErrorCode 是否已赋值
                     * 
                     */
                    bool LatestOperationErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>最近操作错误详情和建议项。</p>
                     * @return LatestOperationErrorMsg <p>最近操作错误详情和建议项。</p>
                     * 
                     */
                    std::string GetLatestOperationErrorMsg() const;

                    /**
                     * 设置<p>最近操作错误详情和建议项。</p>
                     * @param _latestOperationErrorMsg <p>最近操作错误详情和建议项。</p>
                     * 
                     */
                    void SetLatestOperationErrorMsg(const std::string& _latestOperationErrorMsg);

                    /**
                     * 判断参数 LatestOperationErrorMsg 是否已赋值
                     * @return LatestOperationErrorMsg 是否已赋值
                     * 
                     */
                    bool LatestOperationErrorMsgHasBeenSet() const;

                    /**
                     * 获取<p>最近操作名称。</p>
                     * @return LatestOperationName <p>最近操作名称。</p>
                     * 
                     */
                    std::string GetLatestOperationName() const;

                    /**
                     * 设置<p>最近操作名称。</p>
                     * @param _latestOperationName <p>最近操作名称。</p>
                     * 
                     */
                    void SetLatestOperationName(const std::string& _latestOperationName);

                    /**
                     * 判断参数 LatestOperationName 是否已赋值
                     * @return LatestOperationName 是否已赋值
                     * 
                     */
                    bool LatestOperationNameHasBeenSet() const;

                    /**
                     * 获取<p>最近操作状态。</p><p>枚举值：</p><ul><li>SUCCESS： 成功。</li><li>FAILED： 失败。</li></ul>
                     * @return LatestOperationState <p>最近操作状态。</p><p>枚举值：</p><ul><li>SUCCESS： 成功。</li><li>FAILED： 失败。</li></ul>
                     * 
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置<p>最近操作状态。</p><p>枚举值：</p><ul><li>SUCCESS： 成功。</li><li>FAILED： 失败。</li></ul>
                     * @param _latestOperationState <p>最近操作状态。</p><p>枚举值：</p><ul><li>SUCCESS： 成功。</li><li>FAILED： 失败。</li></ul>
                     * 
                     */
                    void SetLatestOperationState(const std::string& _latestOperationState);

                    /**
                     * 判断参数 LatestOperationState 是否已赋值
                     * @return LatestOperationState 是否已赋值
                     * 
                     */
                    bool LatestOperationStateHasBeenSet() const;

                    /**
                     * 获取<p>所在的CHC网关的ID，只有专属网关才会返回。</p>
                     * @return ChcGatewayId <p>所在的CHC网关的ID，只有专属网关才会返回。</p>
                     * 
                     */
                    std::string GetChcGatewayId() const;

                    /**
                     * 设置<p>所在的CHC网关的ID，只有专属网关才会返回。</p>
                     * @param _chcGatewayId <p>所在的CHC网关的ID，只有专属网关才会返回。</p>
                     * 
                     */
                    void SetChcGatewayId(const std::string& _chcGatewayId);

                    /**
                     * 判断参数 ChcGatewayId 是否已赋值
                     * @return ChcGatewayId 是否已赋值
                     * 
                     */
                    bool ChcGatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>所属的CDC集群ID。</p>
                     * @return DedicatedClusterId <p>所属的CDC集群ID。</p>
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置<p>所属的CDC集群ID。</p>
                     * @param _dedicatedClusterId <p>所属的CDC集群ID。</p>
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>业务网卡网络模式。</p><p>枚举值：</p><ul><li>DEPLOY： 部署网络模式</li><li>BUSINESS： 业务网络模式</li></ul>
                     * @return NetworkMode <p>业务网卡网络模式。</p><p>枚举值：</p><ul><li>DEPLOY： 部署网络模式</li><li>BUSINESS： 业务网络模式</li></ul>
                     * 
                     */
                    std::string GetNetworkMode() const;

                    /**
                     * 设置<p>业务网卡网络模式。</p><p>枚举值：</p><ul><li>DEPLOY： 部署网络模式</li><li>BUSINESS： 业务网络模式</li></ul>
                     * @param _networkMode <p>业务网卡网络模式。</p><p>枚举值：</p><ul><li>DEPLOY： 部署网络模式</li><li>BUSINESS： 业务网络模式</li></ul>
                     * 
                     */
                    void SetNetworkMode(const std::string& _networkMode);

                    /**
                     * 判断参数 NetworkMode 是否已赋值
                     * @return NetworkMode 是否已赋值
                     * 
                     */
                    bool NetworkModeHasBeenSet() const;

                private:

                    /**
                     * <p>CHC物理服务器ID。</p>
                     */
                    std::string m_chcId;
                    bool m_chcIdHasBeenSet;

                    /**
                     * <p>实例名称。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>服务器序列号。</p>
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * <p>CHC的状态<br></p><ul><li>INIT: 设备已录入。还未配置带外和部署网络</li><li>READY: 已配置带外和部署网络</li><li>PREPARED: 可分配云主机</li><li>ONLINE: 已分配云主机</li><li>OPERATING: 设备操作中，如正在配置带外网络等。</li><li>CLEAR_NETWORK_FAILED: 清理带外和部署网络失败</li></ul>
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * <p>设备类型。</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>所属可用区。</p>
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * <p>带外网络。</p>
                     */
                    VirtualPrivateCloud m_bmcVirtualPrivateCloud;
                    bool m_bmcVirtualPrivateCloudHasBeenSet;

                    /**
                     * <p>带外网络IP。</p>
                     */
                    std::string m_bmcIp;
                    bool m_bmcIpHasBeenSet;

                    /**
                     * <p>带外网络安全组ID。</p>
                     */
                    std::vector<std::string> m_bmcSecurityGroupIds;
                    bool m_bmcSecurityGroupIdsHasBeenSet;

                    /**
                     * <p>部署网络。</p>
                     */
                    VirtualPrivateCloud m_deployVirtualPrivateCloud;
                    bool m_deployVirtualPrivateCloudHasBeenSet;

                    /**
                     * <p>部署网络IP。</p>
                     */
                    std::string m_deployIp;
                    bool m_deployIpHasBeenSet;

                    /**
                     * <p>部署网络安全组ID。</p>
                     */
                    std::vector<std::string> m_deploySecurityGroupIds;
                    bool m_deploySecurityGroupIdsHasBeenSet;

                    /**
                     * <p>关联的云主机ID。</p>
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * <p>服务器导入的时间。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>机型的硬件描述，分别为CPU核数，内存容量和磁盘容量。</p>
                     */
                    std::string m_hardwareDescription;
                    bool m_hardwareDescriptionHasBeenSet;

                    /**
                     * <p>CHC物理服务器的CPU核数。</p>
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * <p>CHC物理服务器的内存大小，单位为GB。</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>CHC物理服务器的磁盘信息。</p>
                     */
                    std::string m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * <p>带外网络下分配的MAC地址。</p>
                     */
                    std::string m_bmcMAC;
                    bool m_bmcMACHasBeenSet;

                    /**
                     * <p>部署网络下分配的MAC地址。</p>
                     */
                    std::string m_deployMAC;
                    bool m_deployMACHasBeenSet;

                    /**
                     * <p>设备托管类型。</p><p>枚举值：</p><ul><li>HOSTING： 托管类型。</li><li>TENANT： 租赁类型。</li></ul>
                     */
                    std::string m_tenantType;
                    bool m_tenantTypeHasBeenSet;

                    /**
                     * <p>CHC DHCP选项，用于客户自建PXE环境。</p>
                     */
                    ChcDeployExtraConfig m_deployExtraConfig;
                    bool m_deployExtraConfigHasBeenSet;

                    /**
                     * <p>GPU型号。</p>
                     */
                    std::string m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * <p>网卡型号。主要指RDMA网卡。</p>
                     */
                    std::string m_networkCard;
                    bool m_networkCardHasBeenSet;

                    /**
                     * <p>是否是预定义机型。</p>
                     */
                    bool m_isPredefinedType;
                    bool m_isPredefinedTypeHasBeenSet;

                    /**
                     * <p>CHC云主机机型。</p>
                     */
                    std::string m_chcInstanceType;
                    bool m_chcInstanceTypeHasBeenSet;

                    /**
                     * <p>CHC云主机机型簇。</p>
                     */
                    std::string m_chcInstanceFamily;
                    bool m_chcInstanceFamilyHasBeenSet;

                    /**
                     * <p>CHC云主机机型簇名称。</p>
                     */
                    std::string m_chcInstanceFamilyName;
                    bool m_chcInstanceFamilyNameHasBeenSet;

                    /**
                     * <p>转售客户的AppID。</p>
                     */
                    std::string m_resaleAppId;
                    bool m_resaleAppIdHasBeenSet;

                    /**
                     * <p>转售客户的账号ID。</p>
                     */
                    std::string m_resaleAccountId;
                    bool m_resaleAccountIdHasBeenSet;

                    /**
                     * <p>售卖状态。<br></p><ul><li>NOT_FOR_SALE:不可售卖</li><li>AVAILABLE: 可售卖</li><li>SOLD: 已售卖</li></ul>
                     */
                    std::string m_saleStatus;
                    bool m_saleStatusHasBeenSet;

                    /**
                     * <p>CHC物理服务器关联的标签列表。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>最近操作。</p>
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * <p>最近操作错误码。</p>
                     */
                    std::string m_latestOperationErrorCode;
                    bool m_latestOperationErrorCodeHasBeenSet;

                    /**
                     * <p>最近操作错误详情和建议项。</p>
                     */
                    std::string m_latestOperationErrorMsg;
                    bool m_latestOperationErrorMsgHasBeenSet;

                    /**
                     * <p>最近操作名称。</p>
                     */
                    std::string m_latestOperationName;
                    bool m_latestOperationNameHasBeenSet;

                    /**
                     * <p>最近操作状态。</p><p>枚举值：</p><ul><li>SUCCESS： 成功。</li><li>FAILED： 失败。</li></ul>
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                    /**
                     * <p>所在的CHC网关的ID，只有专属网关才会返回。</p>
                     */
                    std::string m_chcGatewayId;
                    bool m_chcGatewayIdHasBeenSet;

                    /**
                     * <p>所属的CDC集群ID。</p>
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * <p>业务网卡网络模式。</p><p>枚举值：</p><ul><li>DEPLOY： 部署网络模式</li><li>BUSINESS： 业务网络模式</li></ul>
                     */
                    std::string m_networkMode;
                    bool m_networkModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CHCHOST_H_
