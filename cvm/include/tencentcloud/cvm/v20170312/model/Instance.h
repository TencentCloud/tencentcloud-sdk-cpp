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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Placement.h>
#include <tencentcloud/cvm/v20170312/model/SystemDisk.h>
#include <tencentcloud/cvm/v20170312/model/DataDisk.h>
#include <tencentcloud/cvm/v20170312/model/InternetAccessible.h>
#include <tencentcloud/cvm/v20170312/model/VirtualPrivateCloud.h>
#include <tencentcloud/cvm/v20170312/model/LoginSettings.h>
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
                * 描述实例的信息
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例所在的位置。
                     * @return Placement 实例所在的位置。
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置实例所在的位置。
                     * @param Placement 实例所在的位置。
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取实例`ID`。
                     * @return InstanceId 实例`ID`。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例`ID`。
                     * @param InstanceId 实例`ID`。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例机型。
                     * @return InstanceType 实例机型。
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例机型。
                     * @param InstanceType 实例机型。
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例的CPU核数，单位：核。
                     * @return CPU 实例的CPU核数，单位：核。
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置实例的CPU核数，单位：核。
                     * @param CPU 实例的CPU核数，单位：核。
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取实例内存容量，单位：`GB`。
                     * @return Memory 实例内存容量，单位：`GB`。
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存容量，单位：`GB`。
                     * @param Memory 实例内存容量，单位：`GB`。
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例业务状态。取值范围：<br><li>NORMAL：表示正常状态的实例<br><li>EXPIRED：表示过期的实例<br><li>PROTECTIVELY_ISOLATED：表示被安全隔离的实例。
                     * @return RestrictState 实例业务状态。取值范围：<br><li>NORMAL：表示正常状态的实例<br><li>EXPIRED：表示过期的实例<br><li>PROTECTIVELY_ISOLATED：表示被安全隔离的实例。
                     */
                    std::string GetRestrictState() const;

                    /**
                     * 设置实例业务状态。取值范围：<br><li>NORMAL：表示正常状态的实例<br><li>EXPIRED：表示过期的实例<br><li>PROTECTIVELY_ISOLATED：表示被安全隔离的实例。
                     * @param RestrictState 实例业务状态。取值范围：<br><li>NORMAL：表示正常状态的实例<br><li>EXPIRED：表示过期的实例<br><li>PROTECTIVELY_ISOLATED：表示被安全隔离的实例。
                     */
                    void SetRestrictState(const std::string& _restrictState);

                    /**
                     * 判断参数 RestrictState 是否已赋值
                     * @return RestrictState 是否已赋值
                     */
                    bool RestrictStateHasBeenSet() const;

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
                     * 获取实例计费模式。取值范围：<br><li>`PREPAID`：表示预付费，即包年包月<br><li>`POSTPAID_BY_HOUR`：表示后付费，即按量计费<br><li>`CDHPAID`：`CDH`付费，即只对`CDH`计费，不对`CDH`上的实例计费。<br><li>`SPOTPAID`：表示竞价实例付费。
                     * @return InstanceChargeType 实例计费模式。取值范围：<br><li>`PREPAID`：表示预付费，即包年包月<br><li>`POSTPAID_BY_HOUR`：表示后付费，即按量计费<br><li>`CDHPAID`：`CDH`付费，即只对`CDH`计费，不对`CDH`上的实例计费。<br><li>`SPOTPAID`：表示竞价实例付费。
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费模式。取值范围：<br><li>`PREPAID`：表示预付费，即包年包月<br><li>`POSTPAID_BY_HOUR`：表示后付费，即按量计费<br><li>`CDHPAID`：`CDH`付费，即只对`CDH`计费，不对`CDH`上的实例计费。<br><li>`SPOTPAID`：表示竞价实例付费。
                     * @param InstanceChargeType 实例计费模式。取值范围：<br><li>`PREPAID`：表示预付费，即包年包月<br><li>`POSTPAID_BY_HOUR`：表示后付费，即按量计费<br><li>`CDHPAID`：`CDH`付费，即只对`CDH`计费，不对`CDH`上的实例计费。<br><li>`SPOTPAID`：表示竞价实例付费。
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取实例系统盘信息。
                     * @return SystemDisk 实例系统盘信息。
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置实例系统盘信息。
                     * @param SystemDisk 实例系统盘信息。
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取实例数据盘信息。只包含随实例购买的数据盘。
                     * @return DataDisks 实例数据盘信息。只包含随实例购买的数据盘。
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置实例数据盘信息。只包含随实例购买的数据盘。
                     * @param DataDisks 实例数据盘信息。只包含随实例购买的数据盘。
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取实例主网卡的内网`IP`列表。
                     * @return PrivateIpAddresses 实例主网卡的内网`IP`列表。
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置实例主网卡的内网`IP`列表。
                     * @param PrivateIpAddresses 实例主网卡的内网`IP`列表。
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取实例主网卡的公网`IP`列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIpAddresses 实例主网卡的公网`IP`列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置实例主网卡的公网`IP`列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PublicIpAddresses 实例主网卡的公网`IP`列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取实例带宽信息。
                     * @return InternetAccessible 实例带宽信息。
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置实例带宽信息。
                     * @param InternetAccessible 实例带宽信息。
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取实例所属虚拟私有网络信息。
                     * @return VirtualPrivateCloud 实例所属虚拟私有网络信息。
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置实例所属虚拟私有网络信息。
                     * @param VirtualPrivateCloud 实例所属虚拟私有网络信息。
                     */
                    void SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取生产实例所使用的镜像`ID`。
                     * @return ImageId 生产实例所使用的镜像`ID`。
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置生产实例所使用的镜像`ID`。
                     * @param ImageId 生产实例所使用的镜像`ID`。
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取自动续费标识。取值范围：<br><li>`NOTIFY_AND_MANUAL_RENEW`：表示通知即将过期，但不自动续费<br><li>`NOTIFY_AND_AUTO_RENEW`：表示通知即将过期，而且自动续费<br><li>`DISABLE_NOTIFY_AND_MANUAL_RENEW`：表示不通知即将过期，也不自动续费。
<br><li>注意：后付费模式本项为null
                     * @return RenewFlag 自动续费标识。取值范围：<br><li>`NOTIFY_AND_MANUAL_RENEW`：表示通知即将过期，但不自动续费<br><li>`NOTIFY_AND_AUTO_RENEW`：表示通知即将过期，而且自动续费<br><li>`DISABLE_NOTIFY_AND_MANUAL_RENEW`：表示不通知即将过期，也不自动续费。
<br><li>注意：后付费模式本项为null
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识。取值范围：<br><li>`NOTIFY_AND_MANUAL_RENEW`：表示通知即将过期，但不自动续费<br><li>`NOTIFY_AND_AUTO_RENEW`：表示通知即将过期，而且自动续费<br><li>`DISABLE_NOTIFY_AND_MANUAL_RENEW`：表示不通知即将过期，也不自动续费。
<br><li>注意：后付费模式本项为null
                     * @param RenewFlag 自动续费标识。取值范围：<br><li>`NOTIFY_AND_MANUAL_RENEW`：表示通知即将过期，但不自动续费<br><li>`NOTIFY_AND_AUTO_RENEW`：表示通知即将过期，而且自动续费<br><li>`DISABLE_NOTIFY_AND_MANUAL_RENEW`：表示不通知即将过期，也不自动续费。
<br><li>注意：后付费模式本项为null
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * @return CreatedTime 创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * @param CreatedTime 创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取到期时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。注意：后付费模式本项为null
                     * @return ExpiredTime 到期时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。注意：后付费模式本项为null
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置到期时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。注意：后付费模式本项为null
                     * @param ExpiredTime 到期时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。注意：后付费模式本项为null
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取操作系统名称。
                     * @return OsName 操作系统名称。
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置操作系统名称。
                     * @param OsName 操作系统名称。
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。
                     * @return SecurityGroupIds 实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。
                     * @param SecurityGroupIds 实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取实例登录设置。目前只返回实例所关联的密钥。
                     * @return LoginSettings 实例登录设置。目前只返回实例所关联的密钥。
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置实例登录设置。目前只返回实例所关联的密钥。
                     * @param LoginSettings 实例登录设置。目前只返回实例所关联的密钥。
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取实例状态。取值范围：<br><li>PENDING：表示创建中<br></li><li>LAUNCH_FAILED：表示创建失败<br></li><li>RUNNING：表示运行中<br></li><li>STOPPED：表示关机<br></li><li>STARTING：表示开机中<br></li><li>STOPPING：表示关机中<br></li><li>REBOOTING：表示重启中<br></li><li>SHUTDOWN：表示停止待销毁<br></li><li>TERMINATING：表示销毁中。<br></li>
                     * @return InstanceState 实例状态。取值范围：<br><li>PENDING：表示创建中<br></li><li>LAUNCH_FAILED：表示创建失败<br></li><li>RUNNING：表示运行中<br></li><li>STOPPED：表示关机<br></li><li>STARTING：表示开机中<br></li><li>STOPPING：表示关机中<br></li><li>REBOOTING：表示重启中<br></li><li>SHUTDOWN：表示停止待销毁<br></li><li>TERMINATING：表示销毁中。<br></li>
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置实例状态。取值范围：<br><li>PENDING：表示创建中<br></li><li>LAUNCH_FAILED：表示创建失败<br></li><li>RUNNING：表示运行中<br></li><li>STOPPED：表示关机<br></li><li>STARTING：表示开机中<br></li><li>STOPPING：表示关机中<br></li><li>REBOOTING：表示重启中<br></li><li>SHUTDOWN：表示停止待销毁<br></li><li>TERMINATING：表示销毁中。<br></li>
                     * @param InstanceState 实例状态。取值范围：<br><li>PENDING：表示创建中<br></li><li>LAUNCH_FAILED：表示创建失败<br></li><li>RUNNING：表示运行中<br></li><li>STOPPED：表示关机<br></li><li>STARTING：表示开机中<br></li><li>STOPPING：表示关机中<br></li><li>REBOOTING：表示重启中<br></li><li>SHUTDOWN：表示停止待销毁<br></li><li>TERMINATING：表示销毁中。<br></li>
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取实例关联的标签列表。
                     * @return Tags 实例关联的标签列表。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置实例关联的标签列表。
                     * @param Tags 实例关联的标签列表。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取实例的关机计费模式。
取值范围：<br><li>KEEP_CHARGING：关机继续收费<br><li>STOP_CHARGING：关机停止收费<li>NOT_APPLICABLE：实例处于非关机状态或者不适用关机停止计费的条件<br>
                     * @return StopChargingMode 实例的关机计费模式。
取值范围：<br><li>KEEP_CHARGING：关机继续收费<br><li>STOP_CHARGING：关机停止收费<li>NOT_APPLICABLE：实例处于非关机状态或者不适用关机停止计费的条件<br>
                     */
                    std::string GetStopChargingMode() const;

                    /**
                     * 设置实例的关机计费模式。
取值范围：<br><li>KEEP_CHARGING：关机继续收费<br><li>STOP_CHARGING：关机停止收费<li>NOT_APPLICABLE：实例处于非关机状态或者不适用关机停止计费的条件<br>
                     * @param StopChargingMode 实例的关机计费模式。
取值范围：<br><li>KEEP_CHARGING：关机继续收费<br><li>STOP_CHARGING：关机停止收费<li>NOT_APPLICABLE：实例处于非关机状态或者不适用关机停止计费的条件<br>
                     */
                    void SetStopChargingMode(const std::string& _stopChargingMode);

                    /**
                     * 判断参数 StopChargingMode 是否已赋值
                     * @return StopChargingMode 是否已赋值
                     */
                    bool StopChargingModeHasBeenSet() const;

                    /**
                     * 获取实例全局唯一ID
                     * @return Uuid 实例全局唯一ID
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置实例全局唯一ID
                     * @param Uuid 实例全局唯一ID
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取实例的最新操作。例：StopInstances、ResetInstance。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperation 实例的最新操作。例：StopInstances、ResetInstance。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置实例的最新操作。例：StopInstances、ResetInstance。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LatestOperation 实例的最新操作。例：StopInstances、ResetInstance。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLatestOperation(const std::string& _latestOperation);

                    /**
                     * 判断参数 LatestOperation 是否已赋值
                     * @return LatestOperation 是否已赋值
                     */
                    bool LatestOperationHasBeenSet() const;

                    /**
                     * 获取实例的最新操作状态。取值范围：<br><li>SUCCESS：表示操作成功<br><li>OPERATING：表示操作执行中<br><li>FAILED：表示操作失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperationState 实例的最新操作状态。取值范围：<br><li>SUCCESS：表示操作成功<br><li>OPERATING：表示操作执行中<br><li>FAILED：表示操作失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置实例的最新操作状态。取值范围：<br><li>SUCCESS：表示操作成功<br><li>OPERATING：表示操作执行中<br><li>FAILED：表示操作失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LatestOperationState 实例的最新操作状态。取值范围：<br><li>SUCCESS：表示操作成功<br><li>OPERATING：表示操作执行中<br><li>FAILED：表示操作失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLatestOperationState(const std::string& _latestOperationState);

                    /**
                     * 判断参数 LatestOperationState 是否已赋值
                     * @return LatestOperationState 是否已赋值
                     */
                    bool LatestOperationStateHasBeenSet() const;

                    /**
                     * 获取实例最新操作的唯一请求 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperationRequestId 实例最新操作的唯一请求 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLatestOperationRequestId() const;

                    /**
                     * 设置实例最新操作的唯一请求 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LatestOperationRequestId 实例最新操作的唯一请求 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLatestOperationRequestId(const std::string& _latestOperationRequestId);

                    /**
                     * 判断参数 LatestOperationRequestId 是否已赋值
                     * @return LatestOperationRequestId 是否已赋值
                     */
                    bool LatestOperationRequestIdHasBeenSet() const;

                    /**
                     * 获取分散置放群组ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisasterRecoverGroupId 分散置放群组ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 设置分散置放群组ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DisasterRecoverGroupId 分散置放群组ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDisasterRecoverGroupId(const std::string& _disasterRecoverGroupId);

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取实例的IPv6地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IPv6Addresses 实例的IPv6地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetIPv6Addresses() const;

                    /**
                     * 设置实例的IPv6地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IPv6Addresses 实例的IPv6地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIPv6Addresses(const std::vector<std::string>& _iPv6Addresses);

                    /**
                     * 判断参数 IPv6Addresses 是否已赋值
                     * @return IPv6Addresses 是否已赋值
                     */
                    bool IPv6AddressesHasBeenSet() const;

                    /**
                     * 获取CAM角色名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CamRoleName CAM角色名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置CAM角色名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CamRoleName CAM角色名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     */
                    bool CamRoleNameHasBeenSet() const;

                    /**
                     * 获取高性能计算集群`ID`。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HpcClusterId 高性能计算集群`ID`。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置高性能计算集群`ID`。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HpcClusterId 高性能计算集群`ID`。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHpcClusterId(const std::string& _hpcClusterId);

                    /**
                     * 判断参数 HpcClusterId 是否已赋值
                     * @return HpcClusterId 是否已赋值
                     */
                    bool HpcClusterIdHasBeenSet() const;

                    /**
                     * 获取高性能计算集群`IP`列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RdmaIpAddresses 高性能计算集群`IP`列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetRdmaIpAddresses() const;

                    /**
                     * 设置高性能计算集群`IP`列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RdmaIpAddresses 高性能计算集群`IP`列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRdmaIpAddresses(const std::vector<std::string>& _rdmaIpAddresses);

                    /**
                     * 判断参数 RdmaIpAddresses 是否已赋值
                     * @return RdmaIpAddresses 是否已赋值
                     */
                    bool RdmaIpAddressesHasBeenSet() const;

                private:

                    /**
                     * 实例所在的位置。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 实例`ID`。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例机型。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例的CPU核数，单位：核。
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 实例内存容量，单位：`GB`。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例业务状态。取值范围：<br><li>NORMAL：表示正常状态的实例<br><li>EXPIRED：表示过期的实例<br><li>PROTECTIVELY_ISOLATED：表示被安全隔离的实例。
                     */
                    std::string m_restrictState;
                    bool m_restrictStateHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例计费模式。取值范围：<br><li>`PREPAID`：表示预付费，即包年包月<br><li>`POSTPAID_BY_HOUR`：表示后付费，即按量计费<br><li>`CDHPAID`：`CDH`付费，即只对`CDH`计费，不对`CDH`上的实例计费。<br><li>`SPOTPAID`：表示竞价实例付费。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 实例系统盘信息。
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 实例数据盘信息。只包含随实例购买的数据盘。
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * 实例主网卡的内网`IP`列表。
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 实例主网卡的公网`IP`列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * 实例带宽信息。
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * 实例所属虚拟私有网络信息。
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * 生产实例所使用的镜像`ID`。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 自动续费标识。取值范围：<br><li>`NOTIFY_AND_MANUAL_RENEW`：表示通知即将过期，但不自动续费<br><li>`NOTIFY_AND_AUTO_RENEW`：表示通知即将过期，而且自动续费<br><li>`DISABLE_NOTIFY_AND_MANUAL_RENEW`：表示不通知即将过期，也不自动续费。
<br><li>注意：后付费模式本项为null
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 到期时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。注意：后付费模式本项为null
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 操作系统名称。
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 实例登录设置。目前只返回实例所关联的密钥。
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * 实例状态。取值范围：<br><li>PENDING：表示创建中<br></li><li>LAUNCH_FAILED：表示创建失败<br></li><li>RUNNING：表示运行中<br></li><li>STOPPED：表示关机<br></li><li>STARTING：表示开机中<br></li><li>STOPPING：表示关机中<br></li><li>REBOOTING：表示重启中<br></li><li>SHUTDOWN：表示停止待销毁<br></li><li>TERMINATING：表示销毁中。<br></li>
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 实例关联的标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 实例的关机计费模式。
取值范围：<br><li>KEEP_CHARGING：关机继续收费<br><li>STOP_CHARGING：关机停止收费<li>NOT_APPLICABLE：实例处于非关机状态或者不适用关机停止计费的条件<br>
                     */
                    std::string m_stopChargingMode;
                    bool m_stopChargingModeHasBeenSet;

                    /**
                     * 实例全局唯一ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 实例的最新操作。例：StopInstances、ResetInstance。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * 实例的最新操作状态。取值范围：<br><li>SUCCESS：表示操作成功<br><li>OPERATING：表示操作执行中<br><li>FAILED：表示操作失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                    /**
                     * 实例最新操作的唯一请求 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestOperationRequestId;
                    bool m_latestOperationRequestIdHasBeenSet;

                    /**
                     * 分散置放群组ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * 实例的IPv6地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_iPv6Addresses;
                    bool m_iPv6AddressesHasBeenSet;

                    /**
                     * CAM角色名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * 高性能计算集群`ID`。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * 高性能计算集群`IP`列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_rdmaIpAddresses;
                    bool m_rdmaIpAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCE_H_
