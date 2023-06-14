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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_RELOADDEVICEOSREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_RELOADDEVICEOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ReloadDeviceOs请求参数结构体
                */
                class ReloadDeviceOsRequest : public AbstractModel
                {
                public:
                    ReloadDeviceOsRequest();
                    ~ReloadDeviceOsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备的唯一ID
                     * @return InstanceId 设备的唯一ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置设备的唯一ID
                     * @param _instanceId 设备的唯一ID
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
                     * 获取密码。 用户设置的linux root或Windows Administrator密码。密码校验规则: <li> Windows机器密码需12到16位，至少包括三项 `[a-z]`,`[A-Z]`,`[0-9]`和`[()`'`~!@#$%^&*-+=_`|`{}[]:;'<>,.?/]`的特殊符号, 密码不能包含Administrator(不区分大小写); <li> Linux机器密码需8到16位，至少包括两项`[a-z,A-Z]`,`[0-9]`和`[()`'`~!@#$%^&*-+=_`|`{}[]:;'<>,.?/]`的特殊符号
                     * @return Password 密码。 用户设置的linux root或Windows Administrator密码。密码校验规则: <li> Windows机器密码需12到16位，至少包括三项 `[a-z]`,`[A-Z]`,`[0-9]`和`[()`'`~!@#$%^&*-+=_`|`{}[]:;'<>,.?/]`的特殊符号, 密码不能包含Administrator(不区分大小写); <li> Linux机器密码需8到16位，至少包括两项`[a-z,A-Z]`,`[0-9]`和`[()`'`~!@#$%^&*-+=_`|`{}[]:;'<>,.?/]`的特殊符号
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码。 用户设置的linux root或Windows Administrator密码。密码校验规则: <li> Windows机器密码需12到16位，至少包括三项 `[a-z]`,`[A-Z]`,`[0-9]`和`[()`'`~!@#$%^&*-+=_`|`{}[]:;'<>,.?/]`的特殊符号, 密码不能包含Administrator(不区分大小写); <li> Linux机器密码需8到16位，至少包括两项`[a-z,A-Z]`,`[0-9]`和`[()`'`~!@#$%^&*-+=_`|`{}[]:;'<>,.?/]`的特殊符号
                     * @param _password 密码。 用户设置的linux root或Windows Administrator密码。密码校验规则: <li> Windows机器密码需12到16位，至少包括三项 `[a-z]`,`[A-Z]`,`[0-9]`和`[()`'`~!@#$%^&*-+=_`|`{}[]:;'<>,.?/]`的特殊符号, 密码不能包含Administrator(不区分大小写); <li> Linux机器密码需8到16位，至少包括两项`[a-z,A-Z]`,`[0-9]`和`[()`'`~!@#$%^&*-+=_`|`{}[]:;'<>,.?/]`的特殊符号
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
                     * 获取操作系统类型ID。通过接口[查询操作系统信息(DescribeOsInfo)](https://cloud.tencent.com/document/api/386/32902)获取操作系统信息
                     * @return OsTypeId 操作系统类型ID。通过接口[查询操作系统信息(DescribeOsInfo)](https://cloud.tencent.com/document/api/386/32902)获取操作系统信息
                     * 
                     */
                    uint64_t GetOsTypeId() const;

                    /**
                     * 设置操作系统类型ID。通过接口[查询操作系统信息(DescribeOsInfo)](https://cloud.tencent.com/document/api/386/32902)获取操作系统信息
                     * @param _osTypeId 操作系统类型ID。通过接口[查询操作系统信息(DescribeOsInfo)](https://cloud.tencent.com/document/api/386/32902)获取操作系统信息
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
                     * 获取是否格式化数据盘。0: 不格式化（默认值）；1：格式化
                     * @return IsZoning 是否格式化数据盘。0: 不格式化（默认值）；1：格式化
                     * 
                     */
                    uint64_t GetIsZoning() const;

                    /**
                     * 设置是否格式化数据盘。0: 不格式化（默认值）；1：格式化
                     * @param _isZoning 是否格式化数据盘。0: 不格式化（默认值）；1：格式化
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
                     * 获取系统盘根分区大小，默认是10G。系统盘的大小参考接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)
                     * @return SysRootSpace 系统盘根分区大小，默认是10G。系统盘的大小参考接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)
                     * 
                     */
                    uint64_t GetSysRootSpace() const;

                    /**
                     * 设置系统盘根分区大小，默认是10G。系统盘的大小参考接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)
                     * @param _sysRootSpace 系统盘根分区大小，默认是10G。系统盘的大小参考接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)
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
                     * 获取系统盘swap分区或/boot/efi分区的大小。若是uefi启动的机器，分区为/boot/efi ,且此值是默认是2G。普通机器为swap分区，可以不指定此分区。机型是否是uefi启动，参考接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)
                     * @return SysSwaporuefiSpace 系统盘swap分区或/boot/efi分区的大小。若是uefi启动的机器，分区为/boot/efi ,且此值是默认是2G。普通机器为swap分区，可以不指定此分区。机型是否是uefi启动，参考接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)
                     * 
                     */
                    uint64_t GetSysSwaporuefiSpace() const;

                    /**
                     * 设置系统盘swap分区或/boot/efi分区的大小。若是uefi启动的机器，分区为/boot/efi ,且此值是默认是2G。普通机器为swap分区，可以不指定此分区。机型是否是uefi启动，参考接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)
                     * @param _sysSwaporuefiSpace 系统盘swap分区或/boot/efi分区的大小。若是uefi启动的机器，分区为/boot/efi ,且此值是默认是2G。普通机器为swap分区，可以不指定此分区。机型是否是uefi启动，参考接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)
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
                     * 获取/usr/local分区大小
                     * @return SysUsrlocalSpace /usr/local分区大小
                     * 
                     */
                    uint64_t GetSysUsrlocalSpace() const;

                    /**
                     * 设置/usr/local分区大小
                     * @param _sysUsrlocalSpace /usr/local分区大小
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
                     * 获取重装到新的私有网络的ID。如果改变VPC子网，则要求与SubnetId同时传参，否则可不填
                     * @return VpcId 重装到新的私有网络的ID。如果改变VPC子网，则要求与SubnetId同时传参，否则可不填
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置重装到新的私有网络的ID。如果改变VPC子网，则要求与SubnetId同时传参，否则可不填
                     * @param _vpcId 重装到新的私有网络的ID。如果改变VPC子网，则要求与SubnetId同时传参，否则可不填
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
                     * 获取重装到新的子网的ID。如果改变VPC子网，则要求与VpcId同时传参，否则可不填
                     * @return SubnetId 重装到新的子网的ID。如果改变VPC子网，则要求与VpcId同时传参，否则可不填
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置重装到新的子网的ID。如果改变VPC子网，则要求与VpcId同时传参，否则可不填
                     * @param _subnetId 重装到新的子网的ID。如果改变VPC子网，则要求与VpcId同时传参，否则可不填
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
                     * 获取重装指定IP地址
                     * @return LanIp 重装指定IP地址
                     * 
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置重装指定IP地址
                     * @param _lanIp 重装指定IP地址
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
                     * 获取指定是否开启超线程。 0：关闭超线程；1：开启超线程（默认值）
                     * @return HyperThreading 指定是否开启超线程。 0：关闭超线程；1：开启超线程（默认值）
                     * 
                     */
                    uint64_t GetHyperThreading() const;

                    /**
                     * 设置指定是否开启超线程。 0：关闭超线程；1：开启超线程（默认值）
                     * @param _hyperThreading 指定是否开启超线程。 0：关闭超线程；1：开启超线程（默认值）
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
                     * 获取自定义镜像ID。传此字段则用自定义镜像重装
                     * @return ImageId 自定义镜像ID。传此字段则用自定义镜像重装
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置自定义镜像ID。传此字段则用自定义镜像重装
                     * @param _imageId 自定义镜像ID。传此字段则用自定义镜像重装
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
                     * 获取是否保留安全组配置，取值：1(保留) 0(不保留)，默认取值0
                     * @return ReserveSgConfig 是否保留安全组配置，取值：1(保留) 0(不保留)，默认取值0
                     * 
                     */
                    uint64_t GetReserveSgConfig() const;

                    /**
                     * 设置是否保留安全组配置，取值：1(保留) 0(不保留)，默认取值0
                     * @param _reserveSgConfig 是否保留安全组配置，取值：1(保留) 0(不保留)，默认取值0
                     * 
                     */
                    void SetReserveSgConfig(const uint64_t& _reserveSgConfig);

                    /**
                     * 判断参数 ReserveSgConfig 是否已赋值
                     * @return ReserveSgConfig 是否已赋值
                     * 
                     */
                    bool ReserveSgConfigHasBeenSet() const;

                    /**
                     * 获取/data分区大小，可不填。除root、swap、usr/local的剩余空间会自动分配到data分区
                     * @return SysDataSpace /data分区大小，可不填。除root、swap、usr/local的剩余空间会自动分配到data分区
                     * 
                     */
                    uint64_t GetSysDataSpace() const;

                    /**
                     * 设置/data分区大小，可不填。除root、swap、usr/local的剩余空间会自动分配到data分区
                     * @param _sysDataSpace /data分区大小，可不填。除root、swap、usr/local的剩余空间会自动分配到data分区
                     * 
                     */
                    void SetSysDataSpace(const uint64_t& _sysDataSpace);

                    /**
                     * 判断参数 SysDataSpace 是否已赋值
                     * @return SysDataSpace 是否已赋值
                     * 
                     */
                    bool SysDataSpaceHasBeenSet() const;

                private:

                    /**
                     * 设备的唯一ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 密码。 用户设置的linux root或Windows Administrator密码。密码校验规则: <li> Windows机器密码需12到16位，至少包括三项 `[a-z]`,`[A-Z]`,`[0-9]`和`[()`'`~!@#$%^&*-+=_`|`{}[]:;'<>,.?/]`的特殊符号, 密码不能包含Administrator(不区分大小写); <li> Linux机器密码需8到16位，至少包括两项`[a-z,A-Z]`,`[0-9]`和`[()`'`~!@#$%^&*-+=_`|`{}[]:;'<>,.?/]`的特殊符号
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 操作系统类型ID。通过接口[查询操作系统信息(DescribeOsInfo)](https://cloud.tencent.com/document/api/386/32902)获取操作系统信息
                     */
                    uint64_t m_osTypeId;
                    bool m_osTypeIdHasBeenSet;

                    /**
                     * RAID类型ID。通过接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)获取RAID信息
                     */
                    uint64_t m_raidId;
                    bool m_raidIdHasBeenSet;

                    /**
                     * 是否格式化数据盘。0: 不格式化（默认值）；1：格式化
                     */
                    uint64_t m_isZoning;
                    bool m_isZoningHasBeenSet;

                    /**
                     * 系统盘根分区大小，默认是10G。系统盘的大小参考接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/api/386/32910)
                     */
                    uint64_t m_sysRootSpace;
                    bool m_sysRootSpaceHasBeenSet;

                    /**
                     * 系统盘swap分区或/boot/efi分区的大小。若是uefi启动的机器，分区为/boot/efi ,且此值是默认是2G。普通机器为swap分区，可以不指定此分区。机型是否是uefi启动，参考接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/32911)
                     */
                    uint64_t m_sysSwaporuefiSpace;
                    bool m_sysSwaporuefiSpaceHasBeenSet;

                    /**
                     * /usr/local分区大小
                     */
                    uint64_t m_sysUsrlocalSpace;
                    bool m_sysUsrlocalSpaceHasBeenSet;

                    /**
                     * 重装到新的私有网络的ID。如果改变VPC子网，则要求与SubnetId同时传参，否则可不填
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 重装到新的子网的ID。如果改变VPC子网，则要求与VpcId同时传参，否则可不填
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 重装指定IP地址
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                    /**
                     * 指定是否开启超线程。 0：关闭超线程；1：开启超线程（默认值）
                     */
                    uint64_t m_hyperThreading;
                    bool m_hyperThreadingHasBeenSet;

                    /**
                     * 自定义镜像ID。传此字段则用自定义镜像重装
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 指定数据盘的文件系统格式，当前支持 EXT4和XFS选项， 默认为EXT4。 参数适用于数据盘和Linux， 且在IsZoning为1时生效
                     */
                    std::string m_fileSystem;
                    bool m_fileSystemHasBeenSet;

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
                     * 是否保留安全组配置，取值：1(保留) 0(不保留)，默认取值0
                     */
                    uint64_t m_reserveSgConfig;
                    bool m_reserveSgConfigHasBeenSet;

                    /**
                     * /data分区大小，可不填。除root、swap、usr/local的剩余空间会自动分配到data分区
                     */
                    uint64_t m_sysDataSpace;
                    bool m_sysDataSpaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_RELOADDEVICEOSREQUEST_H_
