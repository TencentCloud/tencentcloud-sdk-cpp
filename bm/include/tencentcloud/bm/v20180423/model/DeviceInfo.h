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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DEVICEINFO_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 物理机信息
                */
                class DeviceInfo : public AbstractModel
                {
                public:
                    DeviceInfo();
                    ~DeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备唯一ID
                     * @return InstanceId 设备唯一ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置设备唯一ID
                     * @param _instanceId 设备唯一ID
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
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
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
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
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
                     * 获取设备状态ID，取值：<li>1：申领设备中</li><li>2：初始化中</li><li>4：运营中</li><li>7：隔离中</li><li>8：已隔离</li><li>10：解隔离中</li><li>16：故障中</li>
                     * @return DeviceStatus 设备状态ID，取值：<li>1：申领设备中</li><li>2：初始化中</li><li>4：运营中</li><li>7：隔离中</li><li>8：已隔离</li><li>10：解隔离中</li><li>16：故障中</li>
                     * 
                     */
                    uint64_t GetDeviceStatus() const;

                    /**
                     * 设置设备状态ID，取值：<li>1：申领设备中</li><li>2：初始化中</li><li>4：运营中</li><li>7：隔离中</li><li>8：已隔离</li><li>10：解隔离中</li><li>16：故障中</li>
                     * @param _deviceStatus 设备状态ID，取值：<li>1：申领设备中</li><li>2：初始化中</li><li>4：运营中</li><li>7：隔离中</li><li>8：已隔离</li><li>10：解隔离中</li><li>16：故障中</li>
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
                     * 获取设备操作状态ID，取值：
<li>1：运行中</li><li>2：正在关机</li><li>3：已关机</li><li>5：正在开机</li><li>7：重启中</li><li>9：重装中</li><li>12：绑定EIP</li><li>13：解绑EIP</li><li>14：绑定LB</li><li>15：解绑LB</li><li>19：更换IP中</li><li>20：制作镜像中</li><li>21：制作镜像失败</li><li>23：故障待重装</li><li>24：无备件待退回</li>
                     * @return OperateStatus 设备操作状态ID，取值：
<li>1：运行中</li><li>2：正在关机</li><li>3：已关机</li><li>5：正在开机</li><li>7：重启中</li><li>9：重装中</li><li>12：绑定EIP</li><li>13：解绑EIP</li><li>14：绑定LB</li><li>15：解绑LB</li><li>19：更换IP中</li><li>20：制作镜像中</li><li>21：制作镜像失败</li><li>23：故障待重装</li><li>24：无备件待退回</li>
                     * 
                     */
                    uint64_t GetOperateStatus() const;

                    /**
                     * 设置设备操作状态ID，取值：
<li>1：运行中</li><li>2：正在关机</li><li>3：已关机</li><li>5：正在开机</li><li>7：重启中</li><li>9：重装中</li><li>12：绑定EIP</li><li>13：解绑EIP</li><li>14：绑定LB</li><li>15：解绑LB</li><li>19：更换IP中</li><li>20：制作镜像中</li><li>21：制作镜像失败</li><li>23：故障待重装</li><li>24：无备件待退回</li>
                     * @param _operateStatus 设备操作状态ID，取值：
<li>1：运行中</li><li>2：正在关机</li><li>3：已关机</li><li>5：正在开机</li><li>7：重启中</li><li>9：重装中</li><li>12：绑定EIP</li><li>13：解绑EIP</li><li>14：绑定LB</li><li>15：解绑LB</li><li>19：更换IP中</li><li>20：制作镜像中</li><li>21：制作镜像失败</li><li>23：故障待重装</li><li>24：无备件待退回</li>
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
                     * 获取操作系统ID，参考接口[查询操作系统信息(DescribeOsInfo)](https://cloud.tencent.com/document/product/386/32902)
                     * @return OsTypeId 操作系统ID，参考接口[查询操作系统信息(DescribeOsInfo)](https://cloud.tencent.com/document/product/386/32902)
                     * 
                     */
                    uint64_t GetOsTypeId() const;

                    /**
                     * 设置操作系统ID，参考接口[查询操作系统信息(DescribeOsInfo)](https://cloud.tencent.com/document/product/386/32902)
                     * @param _osTypeId 操作系统ID，参考接口[查询操作系统信息(DescribeOsInfo)](https://cloud.tencent.com/document/product/386/32902)
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
                     * 获取RAID类型ID，参考接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/product/386/32910)
                     * @return RaidId RAID类型ID，参考接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/product/386/32910)
                     * 
                     */
                    uint64_t GetRaidId() const;

                    /**
                     * 设置RAID类型ID，参考接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/product/386/32910)
                     * @param _raidId RAID类型ID，参考接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/product/386/32910)
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
                     * 获取设备别名
                     * @return Alias 设备别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置设备别名
                     * @param _alias 设备别名
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
                     * 获取用户AppId
                     * @return AppId 用户AppId
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户AppId
                     * @param _appId 用户AppId
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

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
                     * 获取外网IP
                     * @return WanIp 外网IP
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置外网IP
                     * @param _wanIp 外网IP
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
                     * 获取设备交付时间
                     * @return DeliverTime 设备交付时间
                     * 
                     */
                    std::string GetDeliverTime() const;

                    /**
                     * 设置设备交付时间
                     * @param _deliverTime 设备交付时间
                     * 
                     */
                    void SetDeliverTime(const std::string& _deliverTime);

                    /**
                     * 判断参数 DeliverTime 是否已赋值
                     * @return DeliverTime 是否已赋值
                     * 
                     */
                    bool DeliverTimeHasBeenSet() const;

                    /**
                     * 获取设备到期时间
                     * @return Deadline 设备到期时间
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置设备到期时间
                     * @param _deadline 设备到期时间
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取自动续费标识。0: 不自动续费; 1:自动续费
                     * @return AutoRenewFlag 自动续费标识。0: 不自动续费; 1:自动续费
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标识。0: 不自动续费; 1:自动续费
                     * @param _autoRenewFlag 自动续费标识。0: 不自动续费; 1:自动续费
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
                     * 获取设备类型
                     * @return DeviceClassCode 设备类型
                     * 
                     */
                    std::string GetDeviceClassCode() const;

                    /**
                     * 设置设备类型
                     * @param _deviceClassCode 设备类型
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
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
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
                     * 获取计费模式。1: 预付费; 2: 后付费; 3:预付费转后付费中
                     * @return CpmPayMode 计费模式。1: 预付费; 2: 后付费; 3:预付费转后付费中
                     * 
                     */
                    uint64_t GetCpmPayMode() const;

                    /**
                     * 设置计费模式。1: 预付费; 2: 后付费; 3:预付费转后付费中
                     * @param _cpmPayMode 计费模式。1: 预付费; 2: 后付费; 3:预付费转后付费中
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
                     * 获取带外IP
                     * @return DhcpIp 带外IP
                     * 
                     */
                    std::string GetDhcpIp() const;

                    /**
                     * 设置带外IP
                     * @param _dhcpIp 带外IP
                     * 
                     */
                    void SetDhcpIp(const std::string& _dhcpIp);

                    /**
                     * 判断参数 DhcpIp 是否已赋值
                     * @return DhcpIp 是否已赋值
                     * 
                     */
                    bool DhcpIpHasBeenSet() const;

                    /**
                     * 获取所在私有网络别名
                     * @return VpcName 所在私有网络别名
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置所在私有网络别名
                     * @param _vpcName 所在私有网络别名
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
                     * 获取所在子网别名
                     * @return SubnetName 所在子网别名
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置所在子网别名
                     * @param _subnetName 所在子网别名
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
                     * 获取所在私有网络CIDR
                     * @return VpcCidrBlock 所在私有网络CIDR
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置所在私有网络CIDR
                     * @param _vpcCidrBlock 所在私有网络CIDR
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
                     * 获取所在子网CIDR
                     * @return SubnetCidrBlock 所在子网CIDR
                     * 
                     */
                    std::string GetSubnetCidrBlock() const;

                    /**
                     * 设置所在子网CIDR
                     * @param _subnetCidrBlock 所在子网CIDR
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
                     * 获取标识是否是竞价实例。0: 普通设备; 1: 竞价实例设备
                     * @return IsLuckyDevice 标识是否是竞价实例。0: 普通设备; 1: 竞价实例设备
                     * 
                     */
                    uint64_t GetIsLuckyDevice() const;

                    /**
                     * 设置标识是否是竞价实例。0: 普通设备; 1: 竞价实例设备
                     * @param _isLuckyDevice 标识是否是竞价实例。0: 普通设备; 1: 竞价实例设备
                     * 
                     */
                    void SetIsLuckyDevice(const uint64_t& _isLuckyDevice);

                    /**
                     * 判断参数 IsLuckyDevice 是否已赋值
                     * @return IsLuckyDevice 是否已赋值
                     * 
                     */
                    bool IsLuckyDeviceHasBeenSet() const;

                    /**
                     * 获取标识机器维保状态。Maintain: 在保;  WillExpire: 即将过保; Expire: 已过保
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaintainStatus 标识机器维保状态。Maintain: 在保;  WillExpire: 即将过保; Expire: 已过保
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaintainStatus() const;

                    /**
                     * 设置标识机器维保状态。Maintain: 在保;  WillExpire: 即将过保; Expire: 已过保
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maintainStatus 标识机器维保状态。Maintain: 在保;  WillExpire: 即将过保; Expire: 已过保
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaintainStatus(const std::string& _maintainStatus);

                    /**
                     * 判断参数 MaintainStatus 是否已赋值
                     * @return MaintainStatus 是否已赋值
                     * 
                     */
                    bool MaintainStatusHasBeenSet() const;

                    /**
                     * 获取维保信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaintainMessage 维保信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaintainMessage() const;

                    /**
                     * 设置维保信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maintainMessage 维保信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaintainMessage(const std::string& _maintainMessage);

                    /**
                     * 判断参数 MaintainMessage 是否已赋值
                     * @return MaintainMessage 是否已赋值
                     * 
                     */
                    bool MaintainMessageHasBeenSet() const;

                private:

                    /**
                     * 设备唯一ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 设备状态ID，取值：<li>1：申领设备中</li><li>2：初始化中</li><li>4：运营中</li><li>7：隔离中</li><li>8：已隔离</li><li>10：解隔离中</li><li>16：故障中</li>
                     */
                    uint64_t m_deviceStatus;
                    bool m_deviceStatusHasBeenSet;

                    /**
                     * 设备操作状态ID，取值：
<li>1：运行中</li><li>2：正在关机</li><li>3：已关机</li><li>5：正在开机</li><li>7：重启中</li><li>9：重装中</li><li>12：绑定EIP</li><li>13：解绑EIP</li><li>14：绑定LB</li><li>15：解绑LB</li><li>19：更换IP中</li><li>20：制作镜像中</li><li>21：制作镜像失败</li><li>23：故障待重装</li><li>24：无备件待退回</li>
                     */
                    uint64_t m_operateStatus;
                    bool m_operateStatusHasBeenSet;

                    /**
                     * 操作系统ID，参考接口[查询操作系统信息(DescribeOsInfo)](https://cloud.tencent.com/document/product/386/32902)
                     */
                    uint64_t m_osTypeId;
                    bool m_osTypeIdHasBeenSet;

                    /**
                     * RAID类型ID，参考接口[查询机型RAID方式以及系统盘大小(DescribeDeviceClassPartition)](https://cloud.tencent.com/document/product/386/32910)
                     */
                    uint64_t m_raidId;
                    bool m_raidIdHasBeenSet;

                    /**
                     * 设备别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 用户AppId
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 外网IP
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                    /**
                     * 设备交付时间
                     */
                    std::string m_deliverTime;
                    bool m_deliverTimeHasBeenSet;

                    /**
                     * 设备到期时间
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 自动续费标识。0: 不自动续费; 1:自动续费
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 设备类型
                     */
                    std::string m_deviceClassCode;
                    bool m_deviceClassCodeHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 计费模式。1: 预付费; 2: 后付费; 3:预付费转后付费中
                     */
                    uint64_t m_cpmPayMode;
                    bool m_cpmPayModeHasBeenSet;

                    /**
                     * 带外IP
                     */
                    std::string m_dhcpIp;
                    bool m_dhcpIpHasBeenSet;

                    /**
                     * 所在私有网络别名
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 所在子网别名
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 所在私有网络CIDR
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 所在子网CIDR
                     */
                    std::string m_subnetCidrBlock;
                    bool m_subnetCidrBlockHasBeenSet;

                    /**
                     * 标识是否是竞价实例。0: 普通设备; 1: 竞价实例设备
                     */
                    uint64_t m_isLuckyDevice;
                    bool m_isLuckyDeviceHasBeenSet;

                    /**
                     * 标识机器维保状态。Maintain: 在保;  WillExpire: 即将过保; Expire: 已过保
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maintainStatus;
                    bool m_maintainStatusHasBeenSet;

                    /**
                     * 维保信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maintainMessage;
                    bool m_maintainMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DEVICEINFO_H_
