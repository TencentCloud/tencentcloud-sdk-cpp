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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_ENVDATACPM_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_ENVDATACPM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/CpmVirtualPrivateCloud.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 黑石计算环境数据
                */
                class EnvDataCpm : public AbstractModel
                {
                public:
                    EnvDataCpm();
                    ~EnvDataCpm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取黑石可用区名称列表。如ap-guangzhou-bls-1。不是Batch可用区名称。目前仅支持一个可用区名称。
                     * @return Zones 黑石可用区名称列表。如ap-guangzhou-bls-1。不是Batch可用区名称。目前仅支持一个可用区名称。
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置黑石可用区名称列表。如ap-guangzhou-bls-1。不是Batch可用区名称。目前仅支持一个可用区名称。
                     * @param _zones 黑石可用区名称列表。如ap-guangzhou-bls-1。不是Batch可用区名称。目前仅支持一个可用区名称。
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取购买的机型ID。
                     * @return InstanceTypes 购买的机型ID。
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置购买的机型ID。
                     * @param _instanceTypes 购买的机型ID。
                     * 
                     */
                    void SetInstanceTypes(const std::vector<std::string>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     * 
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取购买时长单位，取值：m(月)。
                     * @return TimeUnit 购买时长单位，取值：m(月)。
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置购买时长单位，取值：m(月)。
                     * @param _timeUnit 购买时长单位，取值：m(月)。
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
                     * 获取购买时长。
                     * @return TimeSpan 购买时长。
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置购买时长。
                     * @param _timeSpan 购买时长。
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
                     * 获取RAID类型ID。
                     * @return RaidId RAID类型ID。
                     * 
                     */
                    int64_t GetRaidId() const;

                    /**
                     * 设置RAID类型ID。
                     * @param _raidId RAID类型ID。
                     * 
                     */
                    void SetRaidId(const int64_t& _raidId);

                    /**
                     * 判断参数 RaidId 是否已赋值
                     * @return RaidId 是否已赋值
                     * 
                     */
                    bool RaidIdHasBeenSet() const;

                    /**
                     * 获取部署服务器的操作系统ID。通过批量计算接口DescribeCpmOsInfo查询操作系统信息。
                     * @return OsTypeId 部署服务器的操作系统ID。通过批量计算接口DescribeCpmOsInfo查询操作系统信息。
                     * 
                     */
                    int64_t GetOsTypeId() const;

                    /**
                     * 设置部署服务器的操作系统ID。通过批量计算接口DescribeCpmOsInfo查询操作系统信息。
                     * @param _osTypeId 部署服务器的操作系统ID。通过批量计算接口DescribeCpmOsInfo查询操作系统信息。
                     * 
                     */
                    void SetOsTypeId(const int64_t& _osTypeId);

                    /**
                     * 判断参数 OsTypeId 是否已赋值
                     * @return OsTypeId 是否已赋值
                     * 
                     */
                    bool OsTypeIdHasBeenSet() const;

                    /**
                     * 获取黑石VPC列表，目前仅支持一个VPC。
                     * @return VirtualPrivateClouds 黑石VPC列表，目前仅支持一个VPC。
                     * 
                     */
                    std::vector<CpmVirtualPrivateCloud> GetVirtualPrivateClouds() const;

                    /**
                     * 设置黑石VPC列表，目前仅支持一个VPC。
                     * @param _virtualPrivateClouds 黑石VPC列表，目前仅支持一个VPC。
                     * 
                     */
                    void SetVirtualPrivateClouds(const std::vector<CpmVirtualPrivateCloud>& _virtualPrivateClouds);

                    /**
                     * 判断参数 VirtualPrivateClouds 是否已赋值
                     * @return VirtualPrivateClouds 是否已赋值
                     * 
                     */
                    bool VirtualPrivateCloudsHasBeenSet() const;

                    /**
                     * 获取是否安装安全Agent，取值：1(安装) 0(不安装)，默认取值0。
                     * @return NeedSecurityAgent 是否安装安全Agent，取值：1(安装) 0(不安装)，默认取值0。
                     * 
                     */
                    int64_t GetNeedSecurityAgent() const;

                    /**
                     * 设置是否安装安全Agent，取值：1(安装) 0(不安装)，默认取值0。
                     * @param _needSecurityAgent 是否安装安全Agent，取值：1(安装) 0(不安装)，默认取值0。
                     * 
                     */
                    void SetNeedSecurityAgent(const int64_t& _needSecurityAgent);

                    /**
                     * 判断参数 NeedSecurityAgent 是否已赋值
                     * @return NeedSecurityAgent 是否已赋值
                     * 
                     */
                    bool NeedSecurityAgentHasBeenSet() const;

                    /**
                     * 获取是否安装监控Agent，取值：1(安装) 0(不安装)，默认取值0。
                     * @return NeedMonitorAgent 是否安装监控Agent，取值：1(安装) 0(不安装)，默认取值0。
                     * 
                     */
                    int64_t GetNeedMonitorAgent() const;

                    /**
                     * 设置是否安装监控Agent，取值：1(安装) 0(不安装)，默认取值0。
                     * @param _needMonitorAgent 是否安装监控Agent，取值：1(安装) 0(不安装)，默认取值0。
                     * 
                     */
                    void SetNeedMonitorAgent(const int64_t& _needMonitorAgent);

                    /**
                     * 判断参数 NeedMonitorAgent 是否已赋值
                     * @return NeedMonitorAgent 是否已赋值
                     * 
                     */
                    bool NeedMonitorAgentHasBeenSet() const;

                    /**
                     * 获取自动续费标志位，取值：1(自动续费) 0(不自动续费)，默认取值0。
                     * @return AutoRenewFlag 自动续费标志位，取值：1(自动续费) 0(不自动续费)，默认取值0。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标志位，取值：1(自动续费) 0(不自动续费)，默认取值0。
                     * @param _autoRenewFlag 自动续费标志位，取值：1(自动续费) 0(不自动续费)，默认取值0。
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取数据盘是否格式化，取值：1(格式化) 0(不格式化)，默认取值为1。
                     * @return IsZoning 数据盘是否格式化，取值：1(格式化) 0(不格式化)，默认取值为1。
                     * 
                     */
                    int64_t GetIsZoning() const;

                    /**
                     * 设置数据盘是否格式化，取值：1(格式化) 0(不格式化)，默认取值为1。
                     * @param _isZoning 数据盘是否格式化，取值：1(格式化) 0(不格式化)，默认取值为1。
                     * 
                     */
                    void SetIsZoning(const int64_t& _isZoning);

                    /**
                     * 判断参数 IsZoning 是否已赋值
                     * @return IsZoning 是否已赋值
                     * 
                     */
                    bool IsZoningHasBeenSet() const;

                    /**
                     * 获取指定数据盘的文件系统格式，当前支持 ext4和xfs选项， 默认为ext4。 参数适用于数据盘和Linux， 且在IsZoning为1时生效。
                     * @return FileSystem 指定数据盘的文件系统格式，当前支持 ext4和xfs选项， 默认为ext4。 参数适用于数据盘和Linux， 且在IsZoning为1时生效。
                     * 
                     */
                    std::string GetFileSystem() const;

                    /**
                     * 设置指定数据盘的文件系统格式，当前支持 ext4和xfs选项， 默认为ext4。 参数适用于数据盘和Linux， 且在IsZoning为1时生效。
                     * @param _fileSystem 指定数据盘的文件系统格式，当前支持 ext4和xfs选项， 默认为ext4。 参数适用于数据盘和Linux， 且在IsZoning为1时生效。
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
                     * 获取设置Linux root或Windows Administrator的密码。若不设置此参数，默认情况下会随机生成密码，并以站内信方式通知到用户。
                     * @return Password 设置Linux root或Windows Administrator的密码。若不设置此参数，默认情况下会随机生成密码，并以站内信方式通知到用户。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置设置Linux root或Windows Administrator的密码。若不设置此参数，默认情况下会随机生成密码，并以站内信方式通知到用户。
                     * @param _password 设置Linux root或Windows Administrator的密码。若不设置此参数，默认情况下会随机生成密码，并以站内信方式通知到用户。
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
                     * 获取是否分配弹性公网IP，取值：1(分配) 0(不分配)，默认取值0。
                     * @return ApplyEip 是否分配弹性公网IP，取值：1(分配) 0(不分配)，默认取值0。
                     * 
                     */
                    int64_t GetApplyEip() const;

                    /**
                     * 设置是否分配弹性公网IP，取值：1(分配) 0(不分配)，默认取值0。
                     * @param _applyEip 是否分配弹性公网IP，取值：1(分配) 0(不分配)，默认取值0。
                     * 
                     */
                    void SetApplyEip(const int64_t& _applyEip);

                    /**
                     * 判断参数 ApplyEip 是否已赋值
                     * @return ApplyEip 是否已赋值
                     * 
                     */
                    bool ApplyEipHasBeenSet() const;

                    /**
                     * 获取弹性公网IP计费模式，取值：flow(按流量计费) bandwidth(按带宽计费)，默认取值flow。
                     * @return EipPayMode 弹性公网IP计费模式，取值：flow(按流量计费) bandwidth(按带宽计费)，默认取值flow。
                     * 
                     */
                    std::string GetEipPayMode() const;

                    /**
                     * 设置弹性公网IP计费模式，取值：flow(按流量计费) bandwidth(按带宽计费)，默认取值flow。
                     * @param _eipPayMode 弹性公网IP计费模式，取值：flow(按流量计费) bandwidth(按带宽计费)，默认取值flow。
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
                     * 获取弹性公网IP带宽限制，单位Mb。
                     * @return EipBandwidth 弹性公网IP带宽限制，单位Mb。
                     * 
                     */
                    int64_t GetEipBandwidth() const;

                    /**
                     * 设置弹性公网IP带宽限制，单位Mb。
                     * @param _eipBandwidth 弹性公网IP带宽限制，单位Mb。
                     * 
                     */
                    void SetEipBandwidth(const int64_t& _eipBandwidth);

                    /**
                     * 判断参数 EipBandwidth 是否已赋值
                     * @return EipBandwidth 是否已赋值
                     * 
                     */
                    bool EipBandwidthHasBeenSet() const;

                    /**
                     * 获取自定义镜像ID，取值生效时用自定义镜像部署物理机。
                     * @return ImageId 自定义镜像ID，取值生效时用自定义镜像部署物理机。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置自定义镜像ID，取值生效时用自定义镜像部署物理机。
                     * @param _imageId 自定义镜像ID，取值生效时用自定义镜像部署物理机。
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
                     * 获取系统盘根分区大小，单位为G，默认取值10G。
                     * @return SysRootSpace 系统盘根分区大小，单位为G，默认取值10G。
                     * 
                     */
                    int64_t GetSysRootSpace() const;

                    /**
                     * 设置系统盘根分区大小，单位为G，默认取值10G。
                     * @param _sysRootSpace 系统盘根分区大小，单位为G，默认取值10G。
                     * 
                     */
                    void SetSysRootSpace(const int64_t& _sysRootSpace);

                    /**
                     * 判断参数 SysRootSpace 是否已赋值
                     * @return SysRootSpace 是否已赋值
                     * 
                     */
                    bool SysRootSpaceHasBeenSet() const;

                    /**
                     * 获取/data分区大小，单位为G。如果系统盘还有剩余大小，会分配给/data分区。（特殊情况：如果剩余空间不足10G，并且没有指定/data分区，则剩余空间会分配给Root分区）。
                     * @return SysDataSpace /data分区大小，单位为G。如果系统盘还有剩余大小，会分配给/data分区。（特殊情况：如果剩余空间不足10G，并且没有指定/data分区，则剩余空间会分配给Root分区）。
                     * 
                     */
                    int64_t GetSysDataSpace() const;

                    /**
                     * 设置/data分区大小，单位为G。如果系统盘还有剩余大小，会分配给/data分区。（特殊情况：如果剩余空间不足10G，并且没有指定/data分区，则剩余空间会分配给Root分区）。
                     * @param _sysDataSpace /data分区大小，单位为G。如果系统盘还有剩余大小，会分配给/data分区。（特殊情况：如果剩余空间不足10G，并且没有指定/data分区，则剩余空间会分配给Root分区）。
                     * 
                     */
                    void SetSysDataSpace(const int64_t& _sysDataSpace);

                    /**
                     * 判断参数 SysDataSpace 是否已赋值
                     * @return SysDataSpace 是否已赋值
                     * 
                     */
                    bool SysDataSpaceHasBeenSet() const;

                    /**
                     * 获取是否开启超线程，取值：1(开启) 0(关闭)，默认取值1。
                     * @return HyperThreading 是否开启超线程，取值：1(开启) 0(关闭)，默认取值1。
                     * 
                     */
                    int64_t GetHyperThreading() const;

                    /**
                     * 设置是否开启超线程，取值：1(开启) 0(关闭)，默认取值1。
                     * @param _hyperThreading 是否开启超线程，取值：1(开启) 0(关闭)，默认取值1。
                     * 
                     */
                    void SetHyperThreading(const int64_t& _hyperThreading);

                    /**
                     * 判断参数 HyperThreading 是否已赋值
                     * @return HyperThreading 是否已赋值
                     * 
                     */
                    bool HyperThreadingHasBeenSet() const;

                    /**
                     * 获取指定的内网IP列表，不指定时自动分配。
                     * @return LanIps 指定的内网IP列表，不指定时自动分配。
                     * 
                     */
                    std::vector<std::string> GetLanIps() const;

                    /**
                     * 设置指定的内网IP列表，不指定时自动分配。
                     * @param _lanIps 指定的内网IP列表，不指定时自动分配。
                     * 
                     */
                    void SetLanIps(const std::vector<std::string>& _lanIps);

                    /**
                     * 判断参数 LanIps 是否已赋值
                     * @return LanIps 是否已赋值
                     * 
                     */
                    bool LanIpsHasBeenSet() const;

                private:

                    /**
                     * 黑石可用区名称列表。如ap-guangzhou-bls-1。不是Batch可用区名称。目前仅支持一个可用区名称。
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 购买的机型ID。
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * 购买时长单位，取值：m(月)。
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 购买时长。
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * RAID类型ID。
                     */
                    int64_t m_raidId;
                    bool m_raidIdHasBeenSet;

                    /**
                     * 部署服务器的操作系统ID。通过批量计算接口DescribeCpmOsInfo查询操作系统信息。
                     */
                    int64_t m_osTypeId;
                    bool m_osTypeIdHasBeenSet;

                    /**
                     * 黑石VPC列表，目前仅支持一个VPC。
                     */
                    std::vector<CpmVirtualPrivateCloud> m_virtualPrivateClouds;
                    bool m_virtualPrivateCloudsHasBeenSet;

                    /**
                     * 是否安装安全Agent，取值：1(安装) 0(不安装)，默认取值0。
                     */
                    int64_t m_needSecurityAgent;
                    bool m_needSecurityAgentHasBeenSet;

                    /**
                     * 是否安装监控Agent，取值：1(安装) 0(不安装)，默认取值0。
                     */
                    int64_t m_needMonitorAgent;
                    bool m_needMonitorAgentHasBeenSet;

                    /**
                     * 自动续费标志位，取值：1(自动续费) 0(不自动续费)，默认取值0。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 数据盘是否格式化，取值：1(格式化) 0(不格式化)，默认取值为1。
                     */
                    int64_t m_isZoning;
                    bool m_isZoningHasBeenSet;

                    /**
                     * 指定数据盘的文件系统格式，当前支持 ext4和xfs选项， 默认为ext4。 参数适用于数据盘和Linux， 且在IsZoning为1时生效。
                     */
                    std::string m_fileSystem;
                    bool m_fileSystemHasBeenSet;

                    /**
                     * 设置Linux root或Windows Administrator的密码。若不设置此参数，默认情况下会随机生成密码，并以站内信方式通知到用户。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 是否分配弹性公网IP，取值：1(分配) 0(不分配)，默认取值0。
                     */
                    int64_t m_applyEip;
                    bool m_applyEipHasBeenSet;

                    /**
                     * 弹性公网IP计费模式，取值：flow(按流量计费) bandwidth(按带宽计费)，默认取值flow。
                     */
                    std::string m_eipPayMode;
                    bool m_eipPayModeHasBeenSet;

                    /**
                     * 弹性公网IP带宽限制，单位Mb。
                     */
                    int64_t m_eipBandwidth;
                    bool m_eipBandwidthHasBeenSet;

                    /**
                     * 自定义镜像ID，取值生效时用自定义镜像部署物理机。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 系统盘根分区大小，单位为G，默认取值10G。
                     */
                    int64_t m_sysRootSpace;
                    bool m_sysRootSpaceHasBeenSet;

                    /**
                     * /data分区大小，单位为G。如果系统盘还有剩余大小，会分配给/data分区。（特殊情况：如果剩余空间不足10G，并且没有指定/data分区，则剩余空间会分配给Root分区）。
                     */
                    int64_t m_sysDataSpace;
                    bool m_sysDataSpaceHasBeenSet;

                    /**
                     * 是否开启超线程，取值：1(开启) 0(关闭)，默认取值1。
                     */
                    int64_t m_hyperThreading;
                    bool m_hyperThreadingHasBeenSet;

                    /**
                     * 指定的内网IP列表，不指定时自动分配。
                     */
                    std::vector<std::string> m_lanIps;
                    bool m_lanIpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_ENVDATACPM_H_
