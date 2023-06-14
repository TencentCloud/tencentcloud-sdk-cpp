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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_BUYDEVICESREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_BUYDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/Tag.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * BuyDevices请求参数结构体
                */
                class BuyDevicesRequest : public AbstractModel
                {
                public:
                    BuyDevicesRequest();
                    ~BuyDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区ID。通过接口[查询地域以及可用区(DescribeRegions)](https://cloud.tencent.com/document/api/386/33564)获取可用区信息
                     * @return Zone 可用区ID。通过接口[查询地域以及可用区(DescribeRegions)](https://cloud.tencent.com/document/api/386/33564)获取可用区信息
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区ID。通过接口[查询地域以及可用区(DescribeRegions)](https://cloud.tencent.com/document/api/386/33564)获取可用区信息
                     * @param _zone 可用区ID。通过接口[查询地域以及可用区(DescribeRegions)](https://cloud.tencent.com/document/api/386/33564)获取可用区信息
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
                     * 获取部署服务器的操作系统ID。通过接口[查询操作系统信息(DescribeOsInfo)](https://cloud.tencent.com/document/product/386/32902)获取操作系统信息
                     * @return OsTypeId 部署服务器的操作系统ID。通过接口[查询操作系统信息(DescribeOsInfo)](https://cloud.tencent.com/document/product/386/32902)获取操作系统信息
                     * 
                     */
                    uint64_t GetOsTypeId() const;

                    /**
                     * 设置部署服务器的操作系统ID。通过接口[查询操作系统信息(DescribeOsInfo)](https://cloud.tencent.com/document/product/386/32902)获取操作系统信息
                     * @param _osTypeId 部署服务器的操作系统ID。通过接口[查询操作系统信息(DescribeOsInfo)](https://cloud.tencent.com/document/product/386/32902)获取操作系统信息
                     * 
                     */
                    void SetOsTypeId(const uint64_t& _osTypeId);

                    /**
                     * 判断参数 OsTypeId 是否已赋值
                     * @return OsTypeId 是否已赋值
                     * 
                     */
                    bool OsTypeIdHasBeenSet() const;

                    /**
                     * 获取RAID类型ID。通过接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)获取RAID信息
                     * @return RaidId RAID类型ID。通过接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)获取RAID信息
                     * 
                     */
                    uint64_t GetRaidId() const;

                    /**
                     * 设置RAID类型ID。通过接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)获取RAID信息
                     * @param _raidId RAID类型ID。通过接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)获取RAID信息
                     * 
                     */
                    void SetRaidId(const uint64_t& _raidId);

                    /**
                     * 判断参数 RaidId 是否已赋值
                     * @return RaidId 是否已赋值
                     * 
                     */
                    bool RaidIdHasBeenSet() const;

                    /**
                     * 获取购买数量
                     * @return GoodsCount 购买数量
                     * 
                     */
                    uint64_t GetGoodsCount() const;

                    /**
                     * 设置购买数量
                     * @param _goodsCount 购买数量
                     * 
                     */
                    void SetGoodsCount(const uint64_t& _goodsCount);

                    /**
                     * 判断参数 GoodsCount 是否已赋值
                     * @return GoodsCount 是否已赋值
                     * 
                     */
                    bool GoodsCountHasBeenSet() const;

                    /**
                     * 获取购买至私有网络ID
                     * @return VpcId 购买至私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置购买至私有网络ID
                     * @param _vpcId 购买至私有网络ID
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
                     * 获取购买至子网ID
                     * @return SubnetId 购买至子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置购买至子网ID
                     * @param _subnetId 购买至子网ID
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
                     * 获取购买的机型ID。通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)获取机型信息
                     * @return DeviceClassCode 购买的机型ID。通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)获取机型信息
                     * 
                     */
                    std::string GetDeviceClassCode() const;

                    /**
                     * 设置购买的机型ID。通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)获取机型信息
                     * @param _deviceClassCode 购买的机型ID。通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)获取机型信息
                     * 
                     */
                    void SetDeviceClassCode(const std::string& _deviceClassCode);

                    /**
                     * 判断参数 DeviceClassCode 是否已赋值
                     * @return DeviceClassCode 是否已赋值
                     * 
                     */
                    bool DeviceClassCodeHasBeenSet() const;

                    /**
                     * 获取购买时长单位，取值：M(月) D(天)
                     * @return TimeUnit 购买时长单位，取值：M(月) D(天)
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置购买时长单位，取值：M(月) D(天)
                     * @param _timeUnit 购买时长单位，取值：M(月) D(天)
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取购买时长
                     * @return TimeSpan 购买时长
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置购买时长
                     * @param _timeSpan 购买时长
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取是否安装安全Agent，取值：1(安装) 0(不安装)，默认取值0
                     * @return NeedSecurityAgent 是否安装安全Agent，取值：1(安装) 0(不安装)，默认取值0
                     * 
                     */
                    uint64_t GetNeedSecurityAgent() const;

                    /**
                     * 设置是否安装安全Agent，取值：1(安装) 0(不安装)，默认取值0
                     * @param _needSecurityAgent 是否安装安全Agent，取值：1(安装) 0(不安装)，默认取值0
                     * 
                     */
                    void SetNeedSecurityAgent(const uint64_t& _needSecurityAgent);

                    /**
                     * 判断参数 NeedSecurityAgent 是否已赋值
                     * @return NeedSecurityAgent 是否已赋值
                     * 
                     */
                    bool NeedSecurityAgentHasBeenSet() const;

                    /**
                     * 获取是否安装监控Agent，取值：1(安装) 0(不安装)，默认取值0
                     * @return NeedMonitorAgent 是否安装监控Agent，取值：1(安装) 0(不安装)，默认取值0
                     * 
                     */
                    uint64_t GetNeedMonitorAgent() const;

                    /**
                     * 设置是否安装监控Agent，取值：1(安装) 0(不安装)，默认取值0
                     * @param _needMonitorAgent 是否安装监控Agent，取值：1(安装) 0(不安装)，默认取值0
                     * 
                     */
                    void SetNeedMonitorAgent(const uint64_t& _needMonitorAgent);

                    /**
                     * 判断参数 NeedMonitorAgent 是否已赋值
                     * @return NeedMonitorAgent 是否已赋值
                     * 
                     */
                    bool NeedMonitorAgentHasBeenSet() const;

                    /**
                     * 获取是否安装EMR Agent，取值：1(安装) 0(不安装)，默认取值0
                     * @return NeedEMRAgent 是否安装EMR Agent，取值：1(安装) 0(不安装)，默认取值0
                     * 
                     */
                    uint64_t GetNeedEMRAgent() const;

                    /**
                     * 设置是否安装EMR Agent，取值：1(安装) 0(不安装)，默认取值0
                     * @param _needEMRAgent 是否安装EMR Agent，取值：1(安装) 0(不安装)，默认取值0
                     * 
                     */
                    void SetNeedEMRAgent(const uint64_t& _needEMRAgent);

                    /**
                     * 判断参数 NeedEMRAgent 是否已赋值
                     * @return NeedEMRAgent 是否已赋值
                     * 
                     */
                    bool NeedEMRAgentHasBeenSet() const;

                    /**
                     * 获取是否安装EMR软件包，取值：1(安装) 0(不安装)，默认取值0
                     * @return NeedEMRSoftware 是否安装EMR软件包，取值：1(安装) 0(不安装)，默认取值0
                     * 
                     */
                    uint64_t GetNeedEMRSoftware() const;

                    /**
                     * 设置是否安装EMR软件包，取值：1(安装) 0(不安装)，默认取值0
                     * @param _needEMRSoftware 是否安装EMR软件包，取值：1(安装) 0(不安装)，默认取值0
                     * 
                     */
                    void SetNeedEMRSoftware(const uint64_t& _needEMRSoftware);

                    /**
                     * 判断参数 NeedEMRSoftware 是否已赋值
                     * @return NeedEMRSoftware 是否已赋值
                     * 
                     */
                    bool NeedEMRSoftwareHasBeenSet() const;

                    /**
                     * 获取是否分配弹性公网IP，取值：1(分配) 0(不分配)，默认取值0
                     * @return ApplyEip 是否分配弹性公网IP，取值：1(分配) 0(不分配)，默认取值0
                     * 
                     */
                    uint64_t GetApplyEip() const;

                    /**
                     * 设置是否分配弹性公网IP，取值：1(分配) 0(不分配)，默认取值0
                     * @param _applyEip 是否分配弹性公网IP，取值：1(分配) 0(不分配)，默认取值0
                     * 
                     */
                    void SetApplyEip(const uint64_t& _applyEip);

                    /**
                     * 判断参数 ApplyEip 是否已赋值
                     * @return ApplyEip 是否已赋值
                     * 
                     */
                    bool ApplyEipHasBeenSet() const;

                    /**
                     * 获取弹性公网IP计费模式，取值：Flow(按流量计费) Bandwidth(按带宽计费)，默认取值Flow
                     * @return EipPayMode 弹性公网IP计费模式，取值：Flow(按流量计费) Bandwidth(按带宽计费)，默认取值Flow
                     * 
                     */
                    std::string GetEipPayMode() const;

                    /**
                     * 设置弹性公网IP计费模式，取值：Flow(按流量计费) Bandwidth(按带宽计费)，默认取值Flow
                     * @param _eipPayMode 弹性公网IP计费模式，取值：Flow(按流量计费) Bandwidth(按带宽计费)，默认取值Flow
                     * 
                     */
                    void SetEipPayMode(const std::string& _eipPayMode);

                    /**
                     * 判断参数 EipPayMode 是否已赋值
                     * @return EipPayMode 是否已赋值
                     * 
                     */
                    bool EipPayModeHasBeenSet() const;

                    /**
                     * 获取弹性公网IP带宽限制，单位Mb
                     * @return EipBandwidth 弹性公网IP带宽限制，单位Mb
                     * 
                     */
                    uint64_t GetEipBandwidth() const;

                    /**
                     * 设置弹性公网IP带宽限制，单位Mb
                     * @param _eipBandwidth 弹性公网IP带宽限制，单位Mb
                     * 
                     */
                    void SetEipBandwidth(const uint64_t& _eipBandwidth);

                    /**
                     * 判断参数 EipBandwidth 是否已赋值
                     * @return EipBandwidth 是否已赋值
                     * 
                     */
                    bool EipBandwidthHasBeenSet() const;

                    /**
                     * 获取数据盘是否格式化，取值：1(格式化) 0(不格式化)，默认取值为1
                     * @return IsZoning 数据盘是否格式化，取值：1(格式化) 0(不格式化)，默认取值为1
                     * 
                     */
                    uint64_t GetIsZoning() const;

                    /**
                     * 设置数据盘是否格式化，取值：1(格式化) 0(不格式化)，默认取值为1
                     * @param _isZoning 数据盘是否格式化，取值：1(格式化) 0(不格式化)，默认取值为1
                     * 
                     */
                    void SetIsZoning(const uint64_t& _isZoning);

                    /**
                     * 判断参数 IsZoning 是否已赋值
                     * @return IsZoning 是否已赋值
                     * 
                     */
                    bool IsZoningHasBeenSet() const;

                    /**
                     * 获取物理机计费模式，取值：1(预付费) 2(后付费)，默认取值为1
                     * @return CpmPayMode 物理机计费模式，取值：1(预付费) 2(后付费)，默认取值为1
                     * 
                     */
                    uint64_t GetCpmPayMode() const;

                    /**
                     * 设置物理机计费模式，取值：1(预付费) 2(后付费)，默认取值为1
                     * @param _cpmPayMode 物理机计费模式，取值：1(预付费) 2(后付费)，默认取值为1
                     * 
                     */
                    void SetCpmPayMode(const uint64_t& _cpmPayMode);

                    /**
                     * 判断参数 CpmPayMode 是否已赋值
                     * @return CpmPayMode 是否已赋值
                     * 
                     */
                    bool CpmPayModeHasBeenSet() const;

                    /**
                     * 获取自定义镜像ID，取值生效时用自定义镜像部署物理机
                     * @return ImageId 自定义镜像ID，取值生效时用自定义镜像部署物理机
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置自定义镜像ID，取值生效时用自定义镜像部署物理机
                     * @param _imageId 自定义镜像ID，取值生效时用自定义镜像部署物理机
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取设置Linux root或Windows Administrator的密码
                     * @return Password 设置Linux root或Windows Administrator的密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置设置Linux root或Windows Administrator的密码
                     * @param _password 设置Linux root或Windows Administrator的密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取自动续费标志位，取值：1(自动续费) 0(不自动续费)，默认取值0
                     * @return AutoRenewFlag 自动续费标志位，取值：1(自动续费) 0(不自动续费)，默认取值0
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标志位，取值：1(自动续费) 0(不自动续费)，默认取值0
                     * @param _autoRenewFlag 自动续费标志位，取值：1(自动续费) 0(不自动续费)，默认取值0
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取系统盘根分区大小，单位为G，默认取值10G。通过接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)获取根分区信息
                     * @return SysRootSpace 系统盘根分区大小，单位为G，默认取值10G。通过接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)获取根分区信息
                     * 
                     */
                    uint64_t GetSysRootSpace() const;

                    /**
                     * 设置系统盘根分区大小，单位为G，默认取值10G。通过接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)获取根分区信息
                     * @param _sysRootSpace 系统盘根分区大小，单位为G，默认取值10G。通过接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)获取根分区信息
                     * 
                     */
                    void SetSysRootSpace(const uint64_t& _sysRootSpace);

                    /**
                     * 判断参数 SysRootSpace 是否已赋值
                     * @return SysRootSpace 是否已赋值
                     * 
                     */
                    bool SysRootSpaceHasBeenSet() const;

                    /**
                     * 获取系统盘swap分区或/boot/efi分区的大小，单位为G。若是uefi启动的机器，分区为/boot/efi，且此值是默认是2G。 普通机器为swap分区，可以不指定此分区。 机型是否是uefi启动，参见接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)
                     * @return SysSwaporuefiSpace 系统盘swap分区或/boot/efi分区的大小，单位为G。若是uefi启动的机器，分区为/boot/efi，且此值是默认是2G。 普通机器为swap分区，可以不指定此分区。 机型是否是uefi启动，参见接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)
                     * 
                     */
                    uint64_t GetSysSwaporuefiSpace() const;

                    /**
                     * 设置系统盘swap分区或/boot/efi分区的大小，单位为G。若是uefi启动的机器，分区为/boot/efi，且此值是默认是2G。 普通机器为swap分区，可以不指定此分区。 机型是否是uefi启动，参见接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)
                     * @param _sysSwaporuefiSpace 系统盘swap分区或/boot/efi分区的大小，单位为G。若是uefi启动的机器，分区为/boot/efi，且此值是默认是2G。 普通机器为swap分区，可以不指定此分区。 机型是否是uefi启动，参见接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)
                     * 
                     */
                    void SetSysSwaporuefiSpace(const uint64_t& _sysSwaporuefiSpace);

                    /**
                     * 判断参数 SysSwaporuefiSpace 是否已赋值
                     * @return SysSwaporuefiSpace 是否已赋值
                     * 
                     */
                    bool SysSwaporuefiSpaceHasBeenSet() const;

                    /**
                     * 获取/usr/local分区大小，单位为G
                     * @return SysUsrlocalSpace /usr/local分区大小，单位为G
                     * 
                     */
                    uint64_t GetSysUsrlocalSpace() const;

                    /**
                     * 设置/usr/local分区大小，单位为G
                     * @param _sysUsrlocalSpace /usr/local分区大小，单位为G
                     * 
                     */
                    void SetSysUsrlocalSpace(const uint64_t& _sysUsrlocalSpace);

                    /**
                     * 判断参数 SysUsrlocalSpace 是否已赋值
                     * @return SysUsrlocalSpace 是否已赋值
                     * 
                     */
                    bool SysUsrlocalSpaceHasBeenSet() const;

                    /**
                     * 获取/data分区大小，单位为G。如果系统盘还有剩余大小，会分配给/data分区。（特殊情况：如果剩余空间不足10G，并且没有指定/data分区，则剩余空间会分配给Root分区）
                     * @return SysDataSpace /data分区大小，单位为G。如果系统盘还有剩余大小，会分配给/data分区。（特殊情况：如果剩余空间不足10G，并且没有指定/data分区，则剩余空间会分配给Root分区）
                     * 
                     */
                    uint64_t GetSysDataSpace() const;

                    /**
                     * 设置/data分区大小，单位为G。如果系统盘还有剩余大小，会分配给/data分区。（特殊情况：如果剩余空间不足10G，并且没有指定/data分区，则剩余空间会分配给Root分区）
                     * @param _sysDataSpace /data分区大小，单位为G。如果系统盘还有剩余大小，会分配给/data分区。（特殊情况：如果剩余空间不足10G，并且没有指定/data分区，则剩余空间会分配给Root分区）
                     * 
                     */
                    void SetSysDataSpace(const uint64_t& _sysDataSpace);

                    /**
                     * 判断参数 SysDataSpace 是否已赋值
                     * @return SysDataSpace 是否已赋值
                     * 
                     */
                    bool SysDataSpaceHasBeenSet() const;

                    /**
                     * 获取是否开启超线程，取值：1(开启) 0(关闭)，默认取值1
                     * @return HyperThreading 是否开启超线程，取值：1(开启) 0(关闭)，默认取值1
                     * 
                     */
                    uint64_t GetHyperThreading() const;

                    /**
                     * 设置是否开启超线程，取值：1(开启) 0(关闭)，默认取值1
                     * @param _hyperThreading 是否开启超线程，取值：1(开启) 0(关闭)，默认取值1
                     * 
                     */
                    void SetHyperThreading(const uint64_t& _hyperThreading);

                    /**
                     * 判断参数 HyperThreading 是否已赋值
                     * @return HyperThreading 是否已赋值
                     * 
                     */
                    bool HyperThreadingHasBeenSet() const;

                    /**
                     * 获取指定的内网IP列表，不指定时自动分配
                     * @return LanIps 指定的内网IP列表，不指定时自动分配
                     * 
                     */
                    std::vector<std::string> GetLanIps() const;

                    /**
                     * 设置指定的内网IP列表，不指定时自动分配
                     * @param _lanIps 指定的内网IP列表，不指定时自动分配
                     * 
                     */
                    void SetLanIps(const std::vector<std::string>& _lanIps);

                    /**
                     * 判断参数 LanIps 是否已赋值
                     * @return LanIps 是否已赋值
                     * 
                     */
                    bool LanIpsHasBeenSet() const;

                    /**
                     * 获取设备名称列表
                     * @return Aliases 设备名称列表
                     * 
                     */
                    std::vector<std::string> GetAliases() const;

                    /**
                     * 设置设备名称列表
                     * @param _aliases 设备名称列表
                     * 
                     */
                    void SetAliases(const std::vector<std::string>& _aliases);

                    /**
                     * 判断参数 Aliases 是否已赋值
                     * @return Aliases 是否已赋值
                     * 
                     */
                    bool AliasesHasBeenSet() const;

                    /**
                     * 获取CPU型号ID，自定义机型需要传入，取值：
<br/><li>1: E5-2620v3 (6核) &#42; 2</li><li>2: E5-2680v4 (14核) &#42; 2</li><li>3: E5-2670v3 (12核) &#42; 2</li><li>4: E5-2620v4 (8核) &#42; 2</li><li>5: 4110 (8核) &#42; 2</li><li>6: 6133 (20核) &#42; 2</li><br/>
                     * @return CpuId CPU型号ID，自定义机型需要传入，取值：
<br/><li>1: E5-2620v3 (6核) &#42; 2</li><li>2: E5-2680v4 (14核) &#42; 2</li><li>3: E5-2670v3 (12核) &#42; 2</li><li>4: E5-2620v4 (8核) &#42; 2</li><li>5: 4110 (8核) &#42; 2</li><li>6: 6133 (20核) &#42; 2</li><br/>
                     * 
                     */
                    uint64_t GetCpuId() const;

                    /**
                     * 设置CPU型号ID，自定义机型需要传入，取值：
<br/><li>1: E5-2620v3 (6核) &#42; 2</li><li>2: E5-2680v4 (14核) &#42; 2</li><li>3: E5-2670v3 (12核) &#42; 2</li><li>4: E5-2620v4 (8核) &#42; 2</li><li>5: 4110 (8核) &#42; 2</li><li>6: 6133 (20核) &#42; 2</li><br/>
                     * @param _cpuId CPU型号ID，自定义机型需要传入，取值：
<br/><li>1: E5-2620v3 (6核) &#42; 2</li><li>2: E5-2680v4 (14核) &#42; 2</li><li>3: E5-2670v3 (12核) &#42; 2</li><li>4: E5-2620v4 (8核) &#42; 2</li><li>5: 4110 (8核) &#42; 2</li><li>6: 6133 (20核) &#42; 2</li><br/>
                     * 
                     */
                    void SetCpuId(const uint64_t& _cpuId);

                    /**
                     * 判断参数 CpuId 是否已赋值
                     * @return CpuId 是否已赋值
                     * 
                     */
                    bool CpuIdHasBeenSet() const;

                    /**
                     * 获取是否有RAID卡，取值：1(有) 0(无)，自定义机型需要传入
                     * @return ContainRaidCard 是否有RAID卡，取值：1(有) 0(无)，自定义机型需要传入
                     * 
                     */
                    uint64_t GetContainRaidCard() const;

                    /**
                     * 设置是否有RAID卡，取值：1(有) 0(无)，自定义机型需要传入
                     * @param _containRaidCard 是否有RAID卡，取值：1(有) 0(无)，自定义机型需要传入
                     * 
                     */
                    void SetContainRaidCard(const uint64_t& _containRaidCard);

                    /**
                     * 判断参数 ContainRaidCard 是否已赋值
                     * @return ContainRaidCard 是否已赋值
                     * 
                     */
                    bool ContainRaidCardHasBeenSet() const;

                    /**
                     * 获取内存大小，单位为G，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * @return MemSize 内存大小，单位为G，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置内存大小，单位为G，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * @param _memSize 内存大小，单位为G，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取系统盘ID，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * @return SystemDiskTypeId 系统盘ID，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * 
                     */
                    uint64_t GetSystemDiskTypeId() const;

                    /**
                     * 设置系统盘ID，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * @param _systemDiskTypeId 系统盘ID，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * 
                     */
                    void SetSystemDiskTypeId(const uint64_t& _systemDiskTypeId);

                    /**
                     * 判断参数 SystemDiskTypeId 是否已赋值
                     * @return SystemDiskTypeId 是否已赋值
                     * 
                     */
                    bool SystemDiskTypeIdHasBeenSet() const;

                    /**
                     * 获取系统盘数量，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * @return SystemDiskCount 系统盘数量，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * 
                     */
                    uint64_t GetSystemDiskCount() const;

                    /**
                     * 设置系统盘数量，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * @param _systemDiskCount 系统盘数量，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * 
                     */
                    void SetSystemDiskCount(const uint64_t& _systemDiskCount);

                    /**
                     * 判断参数 SystemDiskCount 是否已赋值
                     * @return SystemDiskCount 是否已赋值
                     * 
                     */
                    bool SystemDiskCountHasBeenSet() const;

                    /**
                     * 获取数据盘ID，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * @return DataDiskTypeId 数据盘ID，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * 
                     */
                    uint64_t GetDataDiskTypeId() const;

                    /**
                     * 设置数据盘ID，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * @param _dataDiskTypeId 数据盘ID，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * 
                     */
                    void SetDataDiskTypeId(const uint64_t& _dataDiskTypeId);

                    /**
                     * 判断参数 DataDiskTypeId 是否已赋值
                     * @return DataDiskTypeId 是否已赋值
                     * 
                     */
                    bool DataDiskTypeIdHasBeenSet() const;

                    /**
                     * 获取数据盘数量，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * @return DataDiskCount 数据盘数量，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * 
                     */
                    uint64_t GetDataDiskCount() const;

                    /**
                     * 设置数据盘数量，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * @param _dataDiskCount 数据盘数量，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     * 
                     */
                    void SetDataDiskCount(const uint64_t& _dataDiskCount);

                    /**
                     * 判断参数 DataDiskCount 是否已赋值
                     * @return DataDiskCount 是否已赋值
                     * 
                     */
                    bool DataDiskCountHasBeenSet() const;

                    /**
                     * 获取绑定的标签列表
                     * @return Tags 绑定的标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置绑定的标签列表
                     * @param _tags 绑定的标签列表
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
                     * 获取指定数据盘的文件系统格式，当前支持 EXT4和XFS选项， 默认为EXT4。 参数适用于数据盘和Linux， 且在IsZoning为1时生效
                     * @return FileSystem 指定数据盘的文件系统格式，当前支持 EXT4和XFS选项， 默认为EXT4。 参数适用于数据盘和Linux， 且在IsZoning为1时生效
                     * 
                     */
                    std::string GetFileSystem() const;

                    /**
                     * 设置指定数据盘的文件系统格式，当前支持 EXT4和XFS选项， 默认为EXT4。 参数适用于数据盘和Linux， 且在IsZoning为1时生效
                     * @param _fileSystem 指定数据盘的文件系统格式，当前支持 EXT4和XFS选项， 默认为EXT4。 参数适用于数据盘和Linux， 且在IsZoning为1时生效
                     * 
                     */
                    void SetFileSystem(const std::string& _fileSystem);

                    /**
                     * 判断参数 FileSystem 是否已赋值
                     * @return FileSystem 是否已赋值
                     * 
                     */
                    bool FileSystemHasBeenSet() const;

                    /**
                     * 获取此参数是为了防止重复发货。如果两次调用传入相同的BuySession，只会发货一次。 不要以设备别名作为BuySession，这样只会第一次购买成功。参数长度为128位，合法字符为大小字母，数字，下划线，横线。
                     * @return BuySession 此参数是为了防止重复发货。如果两次调用传入相同的BuySession，只会发货一次。 不要以设备别名作为BuySession，这样只会第一次购买成功。参数长度为128位，合法字符为大小字母，数字，下划线，横线。
                     * 
                     */
                    std::string GetBuySession() const;

                    /**
                     * 设置此参数是为了防止重复发货。如果两次调用传入相同的BuySession，只会发货一次。 不要以设备别名作为BuySession，这样只会第一次购买成功。参数长度为128位，合法字符为大小字母，数字，下划线，横线。
                     * @param _buySession 此参数是为了防止重复发货。如果两次调用传入相同的BuySession，只会发货一次。 不要以设备别名作为BuySession，这样只会第一次购买成功。参数长度为128位，合法字符为大小字母，数字，下划线，横线。
                     * 
                     */
                    void SetBuySession(const std::string& _buySession);

                    /**
                     * 判断参数 BuySession 是否已赋值
                     * @return BuySession 是否已赋值
                     * 
                     */
                    bool BuySessionHasBeenSet() const;

                    /**
                     * 获取绑定已有的安全组ID。仅在NeedSecurityAgent为1时生效
                     * @return SgId 绑定已有的安全组ID。仅在NeedSecurityAgent为1时生效
                     * 
                     */
                    std::string GetSgId() const;

                    /**
                     * 设置绑定已有的安全组ID。仅在NeedSecurityAgent为1时生效
                     * @param _sgId 绑定已有的安全组ID。仅在NeedSecurityAgent为1时生效
                     * 
                     */
                    void SetSgId(const std::string& _sgId);

                    /**
                     * 判断参数 SgId 是否已赋值
                     * @return SgId 是否已赋值
                     * 
                     */
                    bool SgIdHasBeenSet() const;

                    /**
                     * 获取安全组模板ID，由模板创建新安全组并绑定。TemplateId和SgId不能同时传入
                     * @return TemplateId 安全组模板ID，由模板创建新安全组并绑定。TemplateId和SgId不能同时传入
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置安全组模板ID，由模板创建新安全组并绑定。TemplateId和SgId不能同时传入
                     * @param _templateId 安全组模板ID，由模板创建新安全组并绑定。TemplateId和SgId不能同时传入
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 可用区ID。通过接口[查询地域以及可用区(DescribeRegions)](https://cloud.tencent.com/document/api/386/33564)获取可用区信息
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 部署服务器的操作系统ID。通过接口[查询操作系统信息(DescribeOsInfo)](https://cloud.tencent.com/document/product/386/32902)获取操作系统信息
                     */
                    uint64_t m_osTypeId;
                    bool m_osTypeIdHasBeenSet;

                    /**
                     * RAID类型ID。通过接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)获取RAID信息
                     */
                    uint64_t m_raidId;
                    bool m_raidIdHasBeenSet;

                    /**
                     * 购买数量
                     */
                    uint64_t m_goodsCount;
                    bool m_goodsCountHasBeenSet;

                    /**
                     * 购买至私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 购买至子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 购买的机型ID。通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)获取机型信息
                     */
                    std::string m_deviceClassCode;
                    bool m_deviceClassCodeHasBeenSet;

                    /**
                     * 购买时长单位，取值：M(月) D(天)
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 购买时长
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 是否安装安全Agent，取值：1(安装) 0(不安装)，默认取值0
                     */
                    uint64_t m_needSecurityAgent;
                    bool m_needSecurityAgentHasBeenSet;

                    /**
                     * 是否安装监控Agent，取值：1(安装) 0(不安装)，默认取值0
                     */
                    uint64_t m_needMonitorAgent;
                    bool m_needMonitorAgentHasBeenSet;

                    /**
                     * 是否安装EMR Agent，取值：1(安装) 0(不安装)，默认取值0
                     */
                    uint64_t m_needEMRAgent;
                    bool m_needEMRAgentHasBeenSet;

                    /**
                     * 是否安装EMR软件包，取值：1(安装) 0(不安装)，默认取值0
                     */
                    uint64_t m_needEMRSoftware;
                    bool m_needEMRSoftwareHasBeenSet;

                    /**
                     * 是否分配弹性公网IP，取值：1(分配) 0(不分配)，默认取值0
                     */
                    uint64_t m_applyEip;
                    bool m_applyEipHasBeenSet;

                    /**
                     * 弹性公网IP计费模式，取值：Flow(按流量计费) Bandwidth(按带宽计费)，默认取值Flow
                     */
                    std::string m_eipPayMode;
                    bool m_eipPayModeHasBeenSet;

                    /**
                     * 弹性公网IP带宽限制，单位Mb
                     */
                    uint64_t m_eipBandwidth;
                    bool m_eipBandwidthHasBeenSet;

                    /**
                     * 数据盘是否格式化，取值：1(格式化) 0(不格式化)，默认取值为1
                     */
                    uint64_t m_isZoning;
                    bool m_isZoningHasBeenSet;

                    /**
                     * 物理机计费模式，取值：1(预付费) 2(后付费)，默认取值为1
                     */
                    uint64_t m_cpmPayMode;
                    bool m_cpmPayModeHasBeenSet;

                    /**
                     * 自定义镜像ID，取值生效时用自定义镜像部署物理机
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 设置Linux root或Windows Administrator的密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 自动续费标志位，取值：1(自动续费) 0(不自动续费)，默认取值0
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 系统盘根分区大小，单位为G，默认取值10G。通过接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)获取根分区信息
                     */
                    uint64_t m_sysRootSpace;
                    bool m_sysRootSpaceHasBeenSet;

                    /**
                     * 系统盘swap分区或/boot/efi分区的大小，单位为G。若是uefi启动的机器，分区为/boot/efi，且此值是默认是2G。 普通机器为swap分区，可以不指定此分区。 机型是否是uefi启动，参见接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)
                     */
                    uint64_t m_sysSwaporuefiSpace;
                    bool m_sysSwaporuefiSpaceHasBeenSet;

                    /**
                     * /usr/local分区大小，单位为G
                     */
                    uint64_t m_sysUsrlocalSpace;
                    bool m_sysUsrlocalSpaceHasBeenSet;

                    /**
                     * /data分区大小，单位为G。如果系统盘还有剩余大小，会分配给/data分区。（特殊情况：如果剩余空间不足10G，并且没有指定/data分区，则剩余空间会分配给Root分区）
                     */
                    uint64_t m_sysDataSpace;
                    bool m_sysDataSpaceHasBeenSet;

                    /**
                     * 是否开启超线程，取值：1(开启) 0(关闭)，默认取值1
                     */
                    uint64_t m_hyperThreading;
                    bool m_hyperThreadingHasBeenSet;

                    /**
                     * 指定的内网IP列表，不指定时自动分配
                     */
                    std::vector<std::string> m_lanIps;
                    bool m_lanIpsHasBeenSet;

                    /**
                     * 设备名称列表
                     */
                    std::vector<std::string> m_aliases;
                    bool m_aliasesHasBeenSet;

                    /**
                     * CPU型号ID，自定义机型需要传入，取值：
<br/><li>1: E5-2620v3 (6核) &#42; 2</li><li>2: E5-2680v4 (14核) &#42; 2</li><li>3: E5-2670v3 (12核) &#42; 2</li><li>4: E5-2620v4 (8核) &#42; 2</li><li>5: 4110 (8核) &#42; 2</li><li>6: 6133 (20核) &#42; 2</li><br/>
                     */
                    uint64_t m_cpuId;
                    bool m_cpuIdHasBeenSet;

                    /**
                     * 是否有RAID卡，取值：1(有) 0(无)，自定义机型需要传入
                     */
                    uint64_t m_containRaidCard;
                    bool m_containRaidCardHasBeenSet;

                    /**
                     * 内存大小，单位为G，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 系统盘ID，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     */
                    uint64_t m_systemDiskTypeId;
                    bool m_systemDiskTypeIdHasBeenSet;

                    /**
                     * 系统盘数量，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     */
                    uint64_t m_systemDiskCount;
                    bool m_systemDiskCountHasBeenSet;

                    /**
                     * 数据盘ID，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     */
                    uint64_t m_dataDiskTypeId;
                    bool m_dataDiskTypeIdHasBeenSet;

                    /**
                     * 数据盘数量，自定义机型需要传入。取值参考接口[查询自定义机型部件信息(DescribeHardwareSpecification)](https://cloud.tencent.com/document/api/386/33565)返回值
                     */
                    uint64_t m_dataDiskCount;
                    bool m_dataDiskCountHasBeenSet;

                    /**
                     * 绑定的标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 指定数据盘的文件系统格式，当前支持 EXT4和XFS选项， 默认为EXT4。 参数适用于数据盘和Linux， 且在IsZoning为1时生效
                     */
                    std::string m_fileSystem;
                    bool m_fileSystemHasBeenSet;

                    /**
                     * 此参数是为了防止重复发货。如果两次调用传入相同的BuySession，只会发货一次。 不要以设备别名作为BuySession，这样只会第一次购买成功。参数长度为128位，合法字符为大小字母，数字，下划线，横线。
                     */
                    std::string m_buySession;
                    bool m_buySessionHasBeenSet;

                    /**
                     * 绑定已有的安全组ID。仅在NeedSecurityAgent为1时生效
                     */
                    std::string m_sgId;
                    bool m_sgIdHasBeenSet;

                    /**
                     * 安全组模板ID，由模板创建新安全组并绑定。TemplateId和SgId不能同时传入
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_BUYDEVICESREQUEST_H_
