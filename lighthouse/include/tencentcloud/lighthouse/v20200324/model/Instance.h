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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/SystemDisk.h>
#include <tencentcloud/lighthouse/v20200324/model/InternetAccessible.h>
#include <tencentcloud/lighthouse/v20200324/model/LoginSettings.h>
#include <tencentcloud/lighthouse/v20200324/model/Tag.h>
#include <tencentcloud/lighthouse/v20200324/model/SupportIpv6Detail.h>
#include <tencentcloud/lighthouse/v20200324/model/InstanceViolationDetail.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 描述了实例信息。
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
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
                     * 获取套餐 ID。
                     * @return BundleId 套餐 ID。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置套餐 ID。
                     * @param _bundleId 套餐 ID。
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取镜像 ID。
                     * @return BlueprintId 镜像 ID。
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置镜像 ID。
                     * @param _blueprintId 镜像 ID。
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取实例的 CPU 核数，单位：核。
                     * @return CPU 实例的 CPU 核数，单位：核。
                     * 
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置实例的 CPU 核数，单位：核。
                     * @param _cPU 实例的 CPU 核数，单位：核。
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
                     * 获取实例内存容量，单位：GB 。
                     * @return Memory 实例内存容量，单位：GB 。
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存容量，单位：GB 。
                     * @param _memory 实例内存容量，单位：GB 。
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
                     * 获取实例计费模式。取值范围： 
PREPAID：表示预付费，即包年包月。
                     * @return InstanceChargeType 实例计费模式。取值范围： 
PREPAID：表示预付费，即包年包月。
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费模式。取值范围： 
PREPAID：表示预付费，即包年包月。
                     * @param _instanceChargeType 实例计费模式。取值范围： 
PREPAID：表示预付费，即包年包月。
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
                     * 获取实例系统盘信息。
                     * @return SystemDisk 实例系统盘信息。
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置实例系统盘信息。
                     * @param _systemDisk 实例系统盘信息。
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取实例主网卡的内网 IP。 
注意：此字段可能返回 空，表示取不到有效值。
                     * @return PrivateAddresses 实例主网卡的内网 IP。 
注意：此字段可能返回 空，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPrivateAddresses() const;

                    /**
                     * 设置实例主网卡的内网 IP。 
注意：此字段可能返回 空，表示取不到有效值。
                     * @param _privateAddresses 实例主网卡的内网 IP。 
注意：此字段可能返回 空，表示取不到有效值。
                     * 
                     */
                    void SetPrivateAddresses(const std::vector<std::string>& _privateAddresses);

                    /**
                     * 判断参数 PrivateAddresses 是否已赋值
                     * @return PrivateAddresses 是否已赋值
                     * 
                     */
                    bool PrivateAddressesHasBeenSet() const;

                    /**
                     * 获取实例主网卡的公网 IP。 
注意：此字段可能返回 空，表示取不到有效值。
                     * @return PublicAddresses 实例主网卡的公网 IP。 
注意：此字段可能返回 空，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPublicAddresses() const;

                    /**
                     * 设置实例主网卡的公网 IP。 
注意：此字段可能返回 空，表示取不到有效值。
                     * @param _publicAddresses 实例主网卡的公网 IP。 
注意：此字段可能返回 空，表示取不到有效值。
                     * 
                     */
                    void SetPublicAddresses(const std::vector<std::string>& _publicAddresses);

                    /**
                     * 判断参数 PublicAddresses 是否已赋值
                     * @return PublicAddresses 是否已赋值
                     * 
                     */
                    bool PublicAddressesHasBeenSet() const;

                    /**
                     * 获取实例带宽信息。
                     * @return InternetAccessible 实例带宽信息。
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置实例带宽信息。
                     * @param _internetAccessible 实例带宽信息。
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
                     * 获取自动续费标识。取值范围： 
NOTIFY_AND_MANUAL_RENEW：表示通知即将过期，但不自动续费  
NOTIFY_AND_AUTO_RENEW：表示通知即将过期，而且自动续费 DISABLE_NOTIFY_AND_MANUAL_RENEW：不自动续费，且不通知。
                     * @return RenewFlag 自动续费标识。取值范围： 
NOTIFY_AND_MANUAL_RENEW：表示通知即将过期，但不自动续费  
NOTIFY_AND_AUTO_RENEW：表示通知即将过期，而且自动续费 DISABLE_NOTIFY_AND_MANUAL_RENEW：不自动续费，且不通知。
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识。取值范围： 
NOTIFY_AND_MANUAL_RENEW：表示通知即将过期，但不自动续费  
NOTIFY_AND_AUTO_RENEW：表示通知即将过期，而且自动续费 DISABLE_NOTIFY_AND_MANUAL_RENEW：不自动续费，且不通知。
                     * @param _renewFlag 自动续费标识。取值范围： 
NOTIFY_AND_MANUAL_RENEW：表示通知即将过期，但不自动续费  
NOTIFY_AND_AUTO_RENEW：表示通知即将过期，而且自动续费 DISABLE_NOTIFY_AND_MANUAL_RENEW：不自动续费，且不通知。
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
                     * 获取实例登录设置。
                     * @return LoginSettings 实例登录设置。
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置实例登录设置。
                     * @param _loginSettings 实例登录设置。
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取实例状态。取值范围： 
<li>PENDING：表示创建中</li><li>LAUNCH_FAILED：表示创建失败</li><li>RUNNING：表示运行中</li><li>STOPPED：表示关机</li><li>STARTING：表示开机中</li><li>STOPPING：表示关机中</li><li>REBOOTING：表示重启中</li><li>SHUTDOWN：表示停止待销毁</li><li>TERMINATING：表示销毁中</li><li>DELETING：表示删除中</li><li>FREEZING：表示冻结中</li><li>ENTER_RESCUE_MODE：表示进入救援模式中</li><li>RESCUE_MODE：表示救援模式</li><li>EXIT_RESCUE_MODE：表示退出救援模式中</li>
                     * @return InstanceState 实例状态。取值范围： 
<li>PENDING：表示创建中</li><li>LAUNCH_FAILED：表示创建失败</li><li>RUNNING：表示运行中</li><li>STOPPED：表示关机</li><li>STARTING：表示开机中</li><li>STOPPING：表示关机中</li><li>REBOOTING：表示重启中</li><li>SHUTDOWN：表示停止待销毁</li><li>TERMINATING：表示销毁中</li><li>DELETING：表示删除中</li><li>FREEZING：表示冻结中</li><li>ENTER_RESCUE_MODE：表示进入救援模式中</li><li>RESCUE_MODE：表示救援模式</li><li>EXIT_RESCUE_MODE：表示退出救援模式中</li>
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置实例状态。取值范围： 
<li>PENDING：表示创建中</li><li>LAUNCH_FAILED：表示创建失败</li><li>RUNNING：表示运行中</li><li>STOPPED：表示关机</li><li>STARTING：表示开机中</li><li>STOPPING：表示关机中</li><li>REBOOTING：表示重启中</li><li>SHUTDOWN：表示停止待销毁</li><li>TERMINATING：表示销毁中</li><li>DELETING：表示删除中</li><li>FREEZING：表示冻结中</li><li>ENTER_RESCUE_MODE：表示进入救援模式中</li><li>RESCUE_MODE：表示救援模式</li><li>EXIT_RESCUE_MODE：表示退出救援模式中</li>
                     * @param _instanceState 实例状态。取值范围： 
<li>PENDING：表示创建中</li><li>LAUNCH_FAILED：表示创建失败</li><li>RUNNING：表示运行中</li><li>STOPPED：表示关机</li><li>STARTING：表示开机中</li><li>STOPPING：表示关机中</li><li>REBOOTING：表示重启中</li><li>SHUTDOWN：表示停止待销毁</li><li>TERMINATING：表示销毁中</li><li>DELETING：表示删除中</li><li>FREEZING：表示冻结中</li><li>ENTER_RESCUE_MODE：表示进入救援模式中</li><li>RESCUE_MODE：表示救援模式</li><li>EXIT_RESCUE_MODE：表示退出救援模式中</li>
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
                     * 获取实例全局唯一 ID。
                     * @return Uuid 实例全局唯一 ID。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置实例全局唯一 ID。
                     * @param _uuid 实例全局唯一 ID。
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取实例的最新操作。例：StopInstances、ResetInstance。注意：此字段可能返回 空值，表示取不到有效值。
                     * @return LatestOperation 实例的最新操作。例：StopInstances、ResetInstance。注意：此字段可能返回 空值，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置实例的最新操作。例：StopInstances、ResetInstance。注意：此字段可能返回 空值，表示取不到有效值。
                     * @param _latestOperation 实例的最新操作。例：StopInstances、ResetInstance。注意：此字段可能返回 空值，表示取不到有效值。
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
                     * 获取实例的最新操作状态。取值范围： 
SUCCESS：表示操作成功 
OPERATING：表示操作执行中 
FAILED：表示操作失败 
注意：此字段可能返回 空值，表示取不到有效值。
                     * @return LatestOperationState 实例的最新操作状态。取值范围： 
SUCCESS：表示操作成功 
OPERATING：表示操作执行中 
FAILED：表示操作失败 
注意：此字段可能返回 空值，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置实例的最新操作状态。取值范围： 
SUCCESS：表示操作成功 
OPERATING：表示操作执行中 
FAILED：表示操作失败 
注意：此字段可能返回 空值，表示取不到有效值。
                     * @param _latestOperationState 实例的最新操作状态。取值范围： 
SUCCESS：表示操作成功 
OPERATING：表示操作执行中 
FAILED：表示操作失败 
注意：此字段可能返回 空值，表示取不到有效值。
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
                     * 获取实例最新操作的唯一请求 ID。 
注意：此字段可能返回 空值，表示取不到有效值。
                     * @return LatestOperationRequestId 实例最新操作的唯一请求 ID。 
注意：此字段可能返回 空值，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestOperationRequestId() const;

                    /**
                     * 设置实例最新操作的唯一请求 ID。 
注意：此字段可能返回 空值，表示取不到有效值。
                     * @param _latestOperationRequestId 实例最新操作的唯一请求 ID。 
注意：此字段可能返回 空值，表示取不到有效值。
                     * 
                     */
                    void SetLatestOperationRequestId(const std::string& _latestOperationRequestId);

                    /**
                     * 判断参数 LatestOperationRequestId 是否已赋值
                     * @return LatestOperationRequestId 是否已赋值
                     * 
                     */
                    bool LatestOperationRequestIdHasBeenSet() const;

                    /**
                     * 获取实例最新操作的开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperationStartedTime 实例最新操作的开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestOperationStartedTime() const;

                    /**
                     * 设置实例最新操作的开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestOperationStartedTime 实例最新操作的开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestOperationStartedTime(const std::string& _latestOperationStartedTime);

                    /**
                     * 判断参数 LatestOperationStartedTime 是否已赋值
                     * @return LatestOperationStartedTime 是否已赋值
                     * 
                     */
                    bool LatestOperationStartedTimeHasBeenSet() const;

                    /**
                     * 获取隔离时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedTime 隔离时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置隔离时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isolatedTime 隔离时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取到期时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredTime 到期时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ 。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置到期时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expiredTime 到期时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ 。
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
                     * 获取操作系统平台类型，如 LINUX_UNIX、WINDOWS。
                     * @return PlatformType 操作系统平台类型，如 LINUX_UNIX、WINDOWS。
                     * 
                     */
                    std::string GetPlatformType() const;

                    /**
                     * 设置操作系统平台类型，如 LINUX_UNIX、WINDOWS。
                     * @param _platformType 操作系统平台类型，如 LINUX_UNIX、WINDOWS。
                     * 
                     */
                    void SetPlatformType(const std::string& _platformType);

                    /**
                     * 判断参数 PlatformType 是否已赋值
                     * @return PlatformType 是否已赋值
                     * 
                     */
                    bool PlatformTypeHasBeenSet() const;

                    /**
                     * 获取操作系统平台。
                     * @return Platform 操作系统平台。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置操作系统平台。
                     * @param _platform 操作系统平台。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取操作系统名称。
                     * @return OsName 操作系统名称。
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置操作系统名称。
                     * @param _osName 操作系统名称。
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取可用区。
                     * @return Zone 可用区。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区。
                     * @param _zone 可用区。
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
                     * 获取实例绑定的标签列表。
                     * @return Tags 实例绑定的标签列表。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置实例绑定的标签列表。
                     * @param _tags 实例绑定的标签列表。
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
                     * 获取实例封禁状态。取值范围：
<li>NORMAL实例正常。</li><li>NETWORK_RESTRICT：网络封禁。</li>
                     * @return InstanceRestrictState 实例封禁状态。取值范围：
<li>NORMAL实例正常。</li><li>NETWORK_RESTRICT：网络封禁。</li>
                     * 
                     */
                    std::string GetInstanceRestrictState() const;

                    /**
                     * 设置实例封禁状态。取值范围：
<li>NORMAL实例正常。</li><li>NETWORK_RESTRICT：网络封禁。</li>
                     * @param _instanceRestrictState 实例封禁状态。取值范围：
<li>NORMAL实例正常。</li><li>NETWORK_RESTRICT：网络封禁。</li>
                     * 
                     */
                    void SetInstanceRestrictState(const std::string& _instanceRestrictState);

                    /**
                     * 判断参数 InstanceRestrictState 是否已赋值
                     * @return InstanceRestrictState 是否已赋值
                     * 
                     */
                    bool InstanceRestrictStateHasBeenSet() const;

                    /**
                     * 获取描述实例是否支持IPv6。
                     * @return SupportIpv6Detail 描述实例是否支持IPv6。
                     * 
                     */
                    SupportIpv6Detail GetSupportIpv6Detail() const;

                    /**
                     * 设置描述实例是否支持IPv6。
                     * @param _supportIpv6Detail 描述实例是否支持IPv6。
                     * 
                     */
                    void SetSupportIpv6Detail(const SupportIpv6Detail& _supportIpv6Detail);

                    /**
                     * 判断参数 SupportIpv6Detail 是否已赋值
                     * @return SupportIpv6Detail 是否已赋值
                     * 
                     */
                    bool SupportIpv6DetailHasBeenSet() const;

                    /**
                     * 获取公网IPv6地址列表。
                     * @return PublicIpv6Addresses 公网IPv6地址列表。
                     * 
                     */
                    std::vector<std::string> GetPublicIpv6Addresses() const;

                    /**
                     * 设置公网IPv6地址列表。
                     * @param _publicIpv6Addresses 公网IPv6地址列表。
                     * 
                     */
                    void SetPublicIpv6Addresses(const std::vector<std::string>& _publicIpv6Addresses);

                    /**
                     * 判断参数 PublicIpv6Addresses 是否已赋值
                     * @return PublicIpv6Addresses 是否已赋值
                     * 
                     */
                    bool PublicIpv6AddressesHasBeenSet() const;

                    /**
                     * 获取创建实例后自动执行TAT命令的调用ID。
                     * @return InitInvocationId 创建实例后自动执行TAT命令的调用ID。
                     * 
                     */
                    std::string GetInitInvocationId() const;

                    /**
                     * 设置创建实例后自动执行TAT命令的调用ID。
                     * @param _initInvocationId 创建实例后自动执行TAT命令的调用ID。
                     * 
                     */
                    void SetInitInvocationId(const std::string& _initInvocationId);

                    /**
                     * 判断参数 InitInvocationId 是否已赋值
                     * @return InitInvocationId 是否已赋值
                     * 
                     */
                    bool InitInvocationIdHasBeenSet() const;

                    /**
                     * 获取实例违规详情。
                     * @return InstanceViolationDetail 实例违规详情。
                     * 
                     */
                    InstanceViolationDetail GetInstanceViolationDetail() const;

                    /**
                     * 设置实例违规详情。
                     * @param _instanceViolationDetail 实例违规详情。
                     * 
                     */
                    void SetInstanceViolationDetail(const InstanceViolationDetail& _instanceViolationDetail);

                    /**
                     * 判断参数 InstanceViolationDetail 是否已赋值
                     * @return InstanceViolationDetail 是否已赋值
                     * 
                     */
                    bool InstanceViolationDetailHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 套餐 ID。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * 镜像 ID。
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                    /**
                     * 实例的 CPU 核数，单位：核。
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 实例内存容量，单位：GB 。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例计费模式。取值范围： 
PREPAID：表示预付费，即包年包月。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 实例系统盘信息。
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 实例主网卡的内网 IP。 
注意：此字段可能返回 空，表示取不到有效值。
                     */
                    std::vector<std::string> m_privateAddresses;
                    bool m_privateAddressesHasBeenSet;

                    /**
                     * 实例主网卡的公网 IP。 
注意：此字段可能返回 空，表示取不到有效值。
                     */
                    std::vector<std::string> m_publicAddresses;
                    bool m_publicAddressesHasBeenSet;

                    /**
                     * 实例带宽信息。
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * 自动续费标识。取值范围： 
NOTIFY_AND_MANUAL_RENEW：表示通知即将过期，但不自动续费  
NOTIFY_AND_AUTO_RENEW：表示通知即将过期，而且自动续费 DISABLE_NOTIFY_AND_MANUAL_RENEW：不自动续费，且不通知。
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 实例登录设置。
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * 实例状态。取值范围： 
<li>PENDING：表示创建中</li><li>LAUNCH_FAILED：表示创建失败</li><li>RUNNING：表示运行中</li><li>STOPPED：表示关机</li><li>STARTING：表示开机中</li><li>STOPPING：表示关机中</li><li>REBOOTING：表示重启中</li><li>SHUTDOWN：表示停止待销毁</li><li>TERMINATING：表示销毁中</li><li>DELETING：表示删除中</li><li>FREEZING：表示冻结中</li><li>ENTER_RESCUE_MODE：表示进入救援模式中</li><li>RESCUE_MODE：表示救援模式</li><li>EXIT_RESCUE_MODE：表示退出救援模式中</li>
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 实例全局唯一 ID。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 实例的最新操作。例：StopInstances、ResetInstance。注意：此字段可能返回 空值，表示取不到有效值。
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * 实例的最新操作状态。取值范围： 
SUCCESS：表示操作成功 
OPERATING：表示操作执行中 
FAILED：表示操作失败 
注意：此字段可能返回 空值，表示取不到有效值。
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                    /**
                     * 实例最新操作的唯一请求 ID。 
注意：此字段可能返回 空值，表示取不到有效值。
                     */
                    std::string m_latestOperationRequestId;
                    bool m_latestOperationRequestIdHasBeenSet;

                    /**
                     * 实例最新操作的开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestOperationStartedTime;
                    bool m_latestOperationStartedTimeHasBeenSet;

                    /**
                     * 隔离时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 到期时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ 。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 操作系统平台类型，如 LINUX_UNIX、WINDOWS。
                     */
                    std::string m_platformType;
                    bool m_platformTypeHasBeenSet;

                    /**
                     * 操作系统平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 操作系统名称。
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例绑定的标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 实例封禁状态。取值范围：
<li>NORMAL实例正常。</li><li>NETWORK_RESTRICT：网络封禁。</li>
                     */
                    std::string m_instanceRestrictState;
                    bool m_instanceRestrictStateHasBeenSet;

                    /**
                     * 描述实例是否支持IPv6。
                     */
                    SupportIpv6Detail m_supportIpv6Detail;
                    bool m_supportIpv6DetailHasBeenSet;

                    /**
                     * 公网IPv6地址列表。
                     */
                    std::vector<std::string> m_publicIpv6Addresses;
                    bool m_publicIpv6AddressesHasBeenSet;

                    /**
                     * 创建实例后自动执行TAT命令的调用ID。
                     */
                    std::string m_initInvocationId;
                    bool m_initInvocationIdHasBeenSet;

                    /**
                     * 实例违规详情。
                     */
                    InstanceViolationDetail m_instanceViolationDetail;
                    bool m_instanceViolationDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCE_H_
