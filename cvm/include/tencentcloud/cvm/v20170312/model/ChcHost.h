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
                     * 获取CHC物理服务器ID。
                     * @return ChcId CHC物理服务器ID。
                     * 
                     */
                    std::string GetChcId() const;

                    /**
                     * 设置CHC物理服务器ID。
                     * @param _chcId CHC物理服务器ID。
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
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
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
                     * 获取服务器序列号。
                     * @return SerialNumber 服务器序列号。
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置服务器序列号。
                     * @param _serialNumber 服务器序列号。
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
                     * 
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
                     * @param _instanceState CHC的状态<br/>
<ul>
<li>INIT: 设备已录入。还未配置带外和部署网络</li>
<li>READY: 已配置带外和部署网络</li>
<li>PREPARED: 可分配云主机</li>
<li>ONLINE: 已分配云主机</li>
<li>OPERATING: 设备操作中，如正在配置带外网络等。</li>
<li>CLEAR_NETWORK_FAILED: 清理带外和部署网络失败</li>
</ul>
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
                     * 获取设备类型。
                     * @return DeviceType 设备类型。
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型。
                     * @param _deviceType 设备类型。
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
                     * 获取所属可用区
                     * @return Placement 所属可用区
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置所属可用区
                     * @param _placement 所属可用区
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
                     * 获取带外网络。
                     * @return BmcVirtualPrivateCloud 带外网络。
                     * 
                     */
                    VirtualPrivateCloud GetBmcVirtualPrivateCloud() const;

                    /**
                     * 设置带外网络。
                     * @param _bmcVirtualPrivateCloud 带外网络。
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
                     * 获取带外网络Ip。
                     * @return BmcIp 带外网络Ip。
                     * 
                     */
                    std::string GetBmcIp() const;

                    /**
                     * 设置带外网络Ip。
                     * @param _bmcIp 带外网络Ip。
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
                     * 获取带外网络安全组Id。
                     * @return BmcSecurityGroupIds 带外网络安全组Id。
                     * 
                     */
                    std::vector<std::string> GetBmcSecurityGroupIds() const;

                    /**
                     * 设置带外网络安全组Id。
                     * @param _bmcSecurityGroupIds 带外网络安全组Id。
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
                     * 获取部署网络。
                     * @return DeployVirtualPrivateCloud 部署网络。
                     * 
                     */
                    VirtualPrivateCloud GetDeployVirtualPrivateCloud() const;

                    /**
                     * 设置部署网络。
                     * @param _deployVirtualPrivateCloud 部署网络。
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
                     * 获取部署网络Ip。
                     * @return DeployIp 部署网络Ip。
                     * 
                     */
                    std::string GetDeployIp() const;

                    /**
                     * 设置部署网络Ip。
                     * @param _deployIp 部署网络Ip。
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
                     * 获取部署网络安全组Id。
                     * @return DeploySecurityGroupIds 部署网络安全组Id。
                     * 
                     */
                    std::vector<std::string> GetDeploySecurityGroupIds() const;

                    /**
                     * 设置部署网络安全组Id。
                     * @param _deploySecurityGroupIds 部署网络安全组Id。
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
                     * 获取关联的云主机Id。
                     * @return CvmInstanceId 关联的云主机Id。
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置关联的云主机Id。
                     * @param _cvmInstanceId 关联的云主机Id。
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
                     * 获取服务器导入的时间。
                     * @return CreatedTime 服务器导入的时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置服务器导入的时间。
                     * @param _createdTime 服务器导入的时间。
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
                     * 获取机型的硬件描述，分别为CPU核数，内存容量和磁盘容量
                     * @return HardwareDescription 机型的硬件描述，分别为CPU核数，内存容量和磁盘容量
                     * 
                     */
                    std::string GetHardwareDescription() const;

                    /**
                     * 设置机型的硬件描述，分别为CPU核数，内存容量和磁盘容量
                     * @param _hardwareDescription 机型的硬件描述，分别为CPU核数，内存容量和磁盘容量
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
                     * 获取CHC物理服务器的CPU核数
                     * @return CPU CHC物理服务器的CPU核数
                     * 
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置CHC物理服务器的CPU核数
                     * @param _cPU CHC物理服务器的CPU核数
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
                     * 获取CHC物理服务器的内存大小，单位为GB
                     * @return Memory CHC物理服务器的内存大小，单位为GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置CHC物理服务器的内存大小，单位为GB
                     * @param _memory CHC物理服务器的内存大小，单位为GB
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
                     * 获取CHC物理服务器的磁盘信息
                     * @return Disk CHC物理服务器的磁盘信息
                     * 
                     */
                    std::string GetDisk() const;

                    /**
                     * 设置CHC物理服务器的磁盘信息
                     * @param _disk CHC物理服务器的磁盘信息
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
                     * 获取带外网络下分配的MAC地址
                     * @return BmcMAC 带外网络下分配的MAC地址
                     * 
                     */
                    std::string GetBmcMAC() const;

                    /**
                     * 设置带外网络下分配的MAC地址
                     * @param _bmcMAC 带外网络下分配的MAC地址
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
                     * 获取部署网络下分配的MAC地址
                     * @return DeployMAC 部署网络下分配的MAC地址
                     * 
                     */
                    std::string GetDeployMAC() const;

                    /**
                     * 设置部署网络下分配的MAC地址
                     * @param _deployMAC 部署网络下分配的MAC地址
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
                     * 获取设备托管类型。
HOSTING: 托管
TENANT: 租赁
                     * @return TenantType 设备托管类型。
HOSTING: 托管
TENANT: 租赁
                     * 
                     */
                    std::string GetTenantType() const;

                    /**
                     * 设置设备托管类型。
HOSTING: 托管
TENANT: 租赁
                     * @param _tenantType 设备托管类型。
HOSTING: 托管
TENANT: 租赁
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
                     * 获取chc dhcp选项，用于minios调试。
                     * @return DeployExtraConfig chc dhcp选项，用于minios调试。
                     * 
                     */
                    ChcDeployExtraConfig GetDeployExtraConfig() const;

                    /**
                     * 设置chc dhcp选项，用于minios调试。
                     * @param _deployExtraConfig chc dhcp选项，用于minios调试。
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
                     * 获取GPU型号。
                     * @return Gpu GPU型号。
                     * 
                     */
                    std::string GetGpu() const;

                    /**
                     * 设置GPU型号。
                     * @param _gpu GPU型号。
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
                     * 获取网卡型号。主要指RDMA网卡。
                     * @return NetworkCard 网卡型号。主要指RDMA网卡。
                     * 
                     */
                    std::string GetNetworkCard() const;

                    /**
                     * 设置网卡型号。主要指RDMA网卡。
                     * @param _networkCard 网卡型号。主要指RDMA网卡。
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
                     * 获取是否是预定义机型。
                     * @return IsPredefinedType 是否是预定义机型。
                     * 
                     */
                    bool GetIsPredefinedType() const;

                    /**
                     * 设置是否是预定义机型。
                     * @param _isPredefinedType 是否是预定义机型。
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
                     * 获取CHC云主机机型。
                     * @return ChcInstanceType CHC云主机机型。
                     * 
                     */
                    std::string GetChcInstanceType() const;

                    /**
                     * 设置CHC云主机机型。
                     * @param _chcInstanceType CHC云主机机型。
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
                     * 获取CHC云主机机型簇。
                     * @return ChcInstanceFamily CHC云主机机型簇。
                     * 
                     */
                    std::string GetChcInstanceFamily() const;

                    /**
                     * 设置CHC云主机机型簇。
                     * @param _chcInstanceFamily CHC云主机机型簇。
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
                     * 获取CHC云主机机型簇名称。
                     * @return ChcInstanceFamilyName CHC云主机机型簇名称。
                     * 
                     */
                    std::string GetChcInstanceFamilyName() const;

                    /**
                     * 设置CHC云主机机型簇名称。
                     * @param _chcInstanceFamilyName CHC云主机机型簇名称。
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
                     * 获取转售客户的AppId。
                     * @return ResaleAppId 转售客户的AppId。
                     * 
                     */
                    std::string GetResaleAppId() const;

                    /**
                     * 设置转售客户的AppId。
                     * @param _resaleAppId 转售客户的AppId。
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
                     * 获取转售客户的账号ID。
                     * @return ResaleAccountId 转售客户的账号ID。
                     * 
                     */
                    std::string GetResaleAccountId() const;

                    /**
                     * 设置转售客户的账号ID。
                     * @param _resaleAccountId 转售客户的账号ID。
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
                     * 获取售卖状态。<br/>
<ul>
<li>NOT_FOR_SALE:不可售卖</li>
<li>AVAILABLE: 可售卖</li>
<li>SOLD: 已售卖</li>
</ul>

                     * @return SaleStatus 售卖状态。<br/>
<ul>
<li>NOT_FOR_SALE:不可售卖</li>
<li>AVAILABLE: 可售卖</li>
<li>SOLD: 已售卖</li>
</ul>

                     * 
                     */
                    std::string GetSaleStatus() const;

                    /**
                     * 设置售卖状态。<br/>
<ul>
<li>NOT_FOR_SALE:不可售卖</li>
<li>AVAILABLE: 可售卖</li>
<li>SOLD: 已售卖</li>
</ul>

                     * @param _saleStatus 售卖状态。<br/>
<ul>
<li>NOT_FOR_SALE:不可售卖</li>
<li>AVAILABLE: 可售卖</li>
<li>SOLD: 已售卖</li>
</ul>

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
                     * 获取CHC物理服务器关联的标签列表。
                     * @return Tags CHC物理服务器关联的标签列表。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置CHC物理服务器关联的标签列表。
                     * @param _tags CHC物理服务器关联的标签列表。
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
                     * 获取最近操作
                     * @return LatestOperation 最近操作
                     * 
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置最近操作
                     * @param _latestOperation 最近操作
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
                     * 获取最近操作错误码
                     * @return LatestOperationErrorCode 最近操作错误码
                     * 
                     */
                    std::string GetLatestOperationErrorCode() const;

                    /**
                     * 设置最近操作错误码
                     * @param _latestOperationErrorCode 最近操作错误码
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
                     * 获取最近操作错误详情和建议项
                     * @return LatestOperationErrorMsg 最近操作错误详情和建议项
                     * 
                     */
                    std::string GetLatestOperationErrorMsg() const;

                    /**
                     * 设置最近操作错误详情和建议项
                     * @param _latestOperationErrorMsg 最近操作错误详情和建议项
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
                     * 获取最近操作名称
                     * @return LatestOperationName 最近操作名称
                     * 
                     */
                    std::string GetLatestOperationName() const;

                    /**
                     * 设置最近操作名称
                     * @param _latestOperationName 最近操作名称
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
                     * 获取最近操作状态
                     * @return LatestOperationState 最近操作状态
                     * 
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置最近操作状态
                     * @param _latestOperationState 最近操作状态
                     * 
                     */
                    void SetLatestOperationState(const std::string& _latestOperationState);

                    /**
                     * 判断参数 LatestOperationState 是否已赋值
                     * @return LatestOperationState 是否已赋值
                     * 
                     */
                    bool LatestOperationStateHasBeenSet() const;

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
                     */
                    VirtualPrivateCloud m_bmcVirtualPrivateCloud;
                    bool m_bmcVirtualPrivateCloudHasBeenSet;

                    /**
                     * 带外网络Ip。
                     */
                    std::string m_bmcIp;
                    bool m_bmcIpHasBeenSet;

                    /**
                     * 带外网络安全组Id。
                     */
                    std::vector<std::string> m_bmcSecurityGroupIds;
                    bool m_bmcSecurityGroupIdsHasBeenSet;

                    /**
                     * 部署网络。
                     */
                    VirtualPrivateCloud m_deployVirtualPrivateCloud;
                    bool m_deployVirtualPrivateCloudHasBeenSet;

                    /**
                     * 部署网络Ip。
                     */
                    std::string m_deployIp;
                    bool m_deployIpHasBeenSet;

                    /**
                     * 部署网络安全组Id。
                     */
                    std::vector<std::string> m_deploySecurityGroupIds;
                    bool m_deploySecurityGroupIdsHasBeenSet;

                    /**
                     * 关联的云主机Id。
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
                     */
                    std::string m_hardwareDescription;
                    bool m_hardwareDescriptionHasBeenSet;

                    /**
                     * CHC物理服务器的CPU核数
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * CHC物理服务器的内存大小，单位为GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * CHC物理服务器的磁盘信息
                     */
                    std::string m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * 带外网络下分配的MAC地址
                     */
                    std::string m_bmcMAC;
                    bool m_bmcMACHasBeenSet;

                    /**
                     * 部署网络下分配的MAC地址
                     */
                    std::string m_deployMAC;
                    bool m_deployMACHasBeenSet;

                    /**
                     * 设备托管类型。
HOSTING: 托管
TENANT: 租赁
                     */
                    std::string m_tenantType;
                    bool m_tenantTypeHasBeenSet;

                    /**
                     * chc dhcp选项，用于minios调试。
                     */
                    ChcDeployExtraConfig m_deployExtraConfig;
                    bool m_deployExtraConfigHasBeenSet;

                    /**
                     * GPU型号。
                     */
                    std::string m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * 网卡型号。主要指RDMA网卡。
                     */
                    std::string m_networkCard;
                    bool m_networkCardHasBeenSet;

                    /**
                     * 是否是预定义机型。
                     */
                    bool m_isPredefinedType;
                    bool m_isPredefinedTypeHasBeenSet;

                    /**
                     * CHC云主机机型。
                     */
                    std::string m_chcInstanceType;
                    bool m_chcInstanceTypeHasBeenSet;

                    /**
                     * CHC云主机机型簇。
                     */
                    std::string m_chcInstanceFamily;
                    bool m_chcInstanceFamilyHasBeenSet;

                    /**
                     * CHC云主机机型簇名称。
                     */
                    std::string m_chcInstanceFamilyName;
                    bool m_chcInstanceFamilyNameHasBeenSet;

                    /**
                     * 转售客户的AppId。
                     */
                    std::string m_resaleAppId;
                    bool m_resaleAppIdHasBeenSet;

                    /**
                     * 转售客户的账号ID。
                     */
                    std::string m_resaleAccountId;
                    bool m_resaleAccountIdHasBeenSet;

                    /**
                     * 售卖状态。<br/>
<ul>
<li>NOT_FOR_SALE:不可售卖</li>
<li>AVAILABLE: 可售卖</li>
<li>SOLD: 已售卖</li>
</ul>

                     */
                    std::string m_saleStatus;
                    bool m_saleStatusHasBeenSet;

                    /**
                     * CHC物理服务器关联的标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 最近操作
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * 最近操作错误码
                     */
                    std::string m_latestOperationErrorCode;
                    bool m_latestOperationErrorCodeHasBeenSet;

                    /**
                     * 最近操作错误详情和建议项
                     */
                    std::string m_latestOperationErrorMsg;
                    bool m_latestOperationErrorMsgHasBeenSet;

                    /**
                     * 最近操作名称
                     */
                    std::string m_latestOperationName;
                    bool m_latestOperationNameHasBeenSet;

                    /**
                     * 最近操作状态
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CHCHOST_H_
