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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESOURCEPOOLPACK_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESOURCEPOOLPACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/ResourceCount.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 实例资源池
                */
                class ResourcePoolPack : public AbstractModel
                {
                public:
                    ResourcePoolPack();
                    ~ResourcePoolPack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例资源池ID。形如：rpp-rn99mzt2。
                     * @return DedicatedResourcePackId 实例资源池ID。形如：rpp-rn99mzt2。
                     * 
                     */
                    std::string GetDedicatedResourcePackId() const;

                    /**
                     * 设置实例资源池ID。形如：rpp-rn99mzt2。
                     * @param _dedicatedResourcePackId 实例资源池ID。形如：rpp-rn99mzt2。
                     * 
                     */
                    void SetDedicatedResourcePackId(const std::string& _dedicatedResourcePackId);

                    /**
                     * 判断参数 DedicatedResourcePackId 是否已赋值
                     * @return DedicatedResourcePackId 是否已赋值
                     * 
                     */
                    bool DedicatedResourcePackIdHasBeenSet() const;

                    /**
                     * 获取实例资源池的名称。
                     * @return DedicatedResourcePackName 实例资源池的名称。
                     * 
                     */
                    std::string GetDedicatedResourcePackName() const;

                    /**
                     * 设置实例资源池的名称。
                     * @param _dedicatedResourcePackName 实例资源池的名称。
                     * 
                     */
                    void SetDedicatedResourcePackName(const std::string& _dedicatedResourcePackName);

                    /**
                     * 判断参数 DedicatedResourcePackName 是否已赋值
                     * @return DedicatedResourcePackName 是否已赋值
                     * 
                     */
                    bool DedicatedResourcePackNameHasBeenSet() const;

                    /**
                     * 获取实例资源池预扣包所在可用区。形如：ap-guangzhou-6。
返回项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a>
                     * @return Zone 实例资源池预扣包所在可用区。形如：ap-guangzhou-6。
返回项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例资源池预扣包所在可用区。形如：ap-guangzhou-6。
返回项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a>
                     * @param _zone 实例资源池预扣包所在可用区。形如：ap-guangzhou-6。
返回项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a>
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
                     * 获取实例资源池预扣包的规格，仅支持半整机/整机规格。形如：SA9.96XLARGE1152（SA9半整机）。
                     * @return InstanceType 实例资源池预扣包的规格，仅支持半整机/整机规格。形如：SA9.96XLARGE1152（SA9半整机）。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例资源池预扣包的规格，仅支持半整机/整机规格。形如：SA9.96XLARGE1152（SA9半整机）。
                     * @param _instanceType 实例资源池预扣包的规格，仅支持半整机/整机规格。形如：SA9.96XLARGE1152（SA9半整机）。
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
                     * 获取实例资源池预扣包的实例类型。形如：SA9。
                     * @return InstanceFamily 实例资源池预扣包的实例类型。形如：SA9。
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置实例资源池预扣包的实例类型。形如：SA9。
                     * @param _instanceFamily 实例资源池预扣包的实例类型。形如：SA9。
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
                     * 获取实例资源池类型。
返回项：EXCLUSIVE (独享) | SHARED (共享)。
                     * @return ResourcePoolPackType 实例资源池类型。
返回项：EXCLUSIVE (独享) | SHARED (共享)。
                     * 
                     */
                    std::string GetResourcePoolPackType() const;

                    /**
                     * 设置实例资源池类型。
返回项：EXCLUSIVE (独享) | SHARED (共享)。
                     * @param _resourcePoolPackType 实例资源池类型。
返回项：EXCLUSIVE (独享) | SHARED (共享)。
                     * 
                     */
                    void SetResourcePoolPackType(const std::string& _resourcePoolPackType);

                    /**
                     * 判断参数 ResourcePoolPackType 是否已赋值
                     * @return ResourcePoolPackType 是否已赋值
                     * 
                     */
                    bool ResourcePoolPackTypeHasBeenSet() const;

                    /**
                     * 获取实例资源池状态。
返回项：CREATING (创建中) | ACTIVE (运行中) | FAILED (创建失败) | RETIRED (已过期)。
                     * @return Status 实例资源池状态。
返回项：CREATING (创建中) | ACTIVE (运行中) | FAILED (创建失败) | RETIRED (已过期)。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例资源池状态。
返回项：CREATING (创建中) | ACTIVE (运行中) | FAILED (创建失败) | RETIRED (已过期)。
                     * @param _status 实例资源池状态。
返回项：CREATING (创建中) | ACTIVE (运行中) | FAILED (创建失败) | RETIRED (已过期)。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例资源池总容量。
                     * @return TotalCapacity 实例资源池总容量。
                     * 
                     */
                    ResourceCount GetTotalCapacity() const;

                    /**
                     * 设置实例资源池总容量。
                     * @param _totalCapacity 实例资源池总容量。
                     * 
                     */
                    void SetTotalCapacity(const ResourceCount& _totalCapacity);

                    /**
                     * 判断参数 TotalCapacity 是否已赋值
                     * @return TotalCapacity 是否已赋值
                     * 
                     */
                    bool TotalCapacityHasBeenSet() const;

                    /**
                     * 获取实例资源池剩余容量。
                     * @return AvailableCapacity 实例资源池剩余容量。
                     * 
                     */
                    ResourceCount GetAvailableCapacity() const;

                    /**
                     * 设置实例资源池剩余容量。
                     * @param _availableCapacity 实例资源池剩余容量。
                     * 
                     */
                    void SetAvailableCapacity(const ResourceCount& _availableCapacity);

                    /**
                     * 判断参数 AvailableCapacity 是否已赋值
                     * @return AvailableCapacity 是否已赋值
                     * 
                     */
                    bool AvailableCapacityHasBeenSet() const;

                    /**
                     * 获取底层物理机IP（已加密）。
                     * @return HostIp 底层物理机IP（已加密）。
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置底层物理机IP（已加密）。
                     * @param _hostIp 底层物理机IP（已加密）。
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取机架ID（已加密）。
                     * @return RackId 机架ID（已加密）。
                     * 
                     */
                    std::string GetRackId() const;

                    /**
                     * 设置机架ID（已加密）。
                     * @param _rackId 机架ID（已加密）。
                     * 
                     */
                    void SetRackId(const std::string& _rackId);

                    /**
                     * 判断参数 RackId 是否已赋值
                     * @return RackId 是否已赋值
                     * 
                     */
                    bool RackIdHasBeenSet() const;

                    /**
                     * 获取交换机ID（已加密）。
                     * @return SwitchId 交换机ID（已加密）。
                     * 
                     */
                    std::string GetSwitchId() const;

                    /**
                     * 设置交换机ID（已加密）。
                     * @param _switchId 交换机ID（已加密）。
                     * 
                     */
                    void SetSwitchId(const std::string& _switchId);

                    /**
                     * 判断参数 SwitchId 是否已赋值
                     * @return SwitchId 是否已赋值
                     * 
                     */
                    bool SwitchIdHasBeenSet() const;

                    /**
                     * 获取自动放置开关状态。开启则在不指定实例资源池创建实例时，系统会在开启了该能力的实例资源池里寻找合适的池子创建实例。关闭则在不指定实例资源池创建实例时，系统不会在该池子里创建实例，只有在指定实例资源池创建实例时，指定了该池子的ID，才允许在池子内创建实例。
                     * @return AutoPlacement 自动放置开关状态。开启则在不指定实例资源池创建实例时，系统会在开启了该能力的实例资源池里寻找合适的池子创建实例。关闭则在不指定实例资源池创建实例时，系统不会在该池子里创建实例，只有在指定实例资源池创建实例时，指定了该池子的ID，才允许在池子内创建实例。
                     * 
                     */
                    bool GetAutoPlacement() const;

                    /**
                     * 设置自动放置开关状态。开启则在不指定实例资源池创建实例时，系统会在开启了该能力的实例资源池里寻找合适的池子创建实例。关闭则在不指定实例资源池创建实例时，系统不会在该池子里创建实例，只有在指定实例资源池创建实例时，指定了该池子的ID，才允许在池子内创建实例。
                     * @param _autoPlacement 自动放置开关状态。开启则在不指定实例资源池创建实例时，系统会在开启了该能力的实例资源池里寻找合适的池子创建实例。关闭则在不指定实例资源池创建实例时，系统不会在该池子里创建实例，只有在指定实例资源池创建实例时，指定了该池子的ID，才允许在池子内创建实例。
                     * 
                     */
                    void SetAutoPlacement(const bool& _autoPlacement);

                    /**
                     * 判断参数 AutoPlacement 是否已赋值
                     * @return AutoPlacement 是否已赋值
                     * 
                     */
                    bool AutoPlacementHasBeenSet() const;

                    /**
                     * 获取自动续费标识。
返回项：NOTIFY_AND_AUTO_RENEW (通知且自动续费) | NOTIFY_AND_MANUAL_RENEW (通知不自动续费) | DISABLE_NOTIFY_AND_MANUAL_RENEW (不通知不自动续费)。
                     * @return RenewFlag 自动续费标识。
返回项：NOTIFY_AND_AUTO_RENEW (通知且自动续费) | NOTIFY_AND_MANUAL_RENEW (通知不自动续费) | DISABLE_NOTIFY_AND_MANUAL_RENEW (不通知不自动续费)。
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识。
返回项：NOTIFY_AND_AUTO_RENEW (通知且自动续费) | NOTIFY_AND_MANUAL_RENEW (通知不自动续费) | DISABLE_NOTIFY_AND_MANUAL_RENEW (不通知不自动续费)。
                     * @param _renewFlag 自动续费标识。
返回项：NOTIFY_AND_AUTO_RENEW (通知且自动续费) | NOTIFY_AND_MANUAL_RENEW (通知不自动续费) | DISABLE_NOTIFY_AND_MANUAL_RENEW (不通知不自动续费)。
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
                     * 获取实例资源池预扣包创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * @return StartTime 实例资源池预扣包创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置实例资源池预扣包创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * @param _startTime 实例资源池预扣包创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取实例资源池到期时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * @return EndTime 实例资源池到期时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置实例资源池到期时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * @param _endTime 实例资源池到期时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 实例资源池ID。形如：rpp-rn99mzt2。
                     */
                    std::string m_dedicatedResourcePackId;
                    bool m_dedicatedResourcePackIdHasBeenSet;

                    /**
                     * 实例资源池的名称。
                     */
                    std::string m_dedicatedResourcePackName;
                    bool m_dedicatedResourcePackNameHasBeenSet;

                    /**
                     * 实例资源池预扣包所在可用区。形如：ap-guangzhou-6。
返回项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例资源池预扣包的规格，仅支持半整机/整机规格。形如：SA9.96XLARGE1152（SA9半整机）。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例资源池预扣包的实例类型。形如：SA9。
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * 实例资源池类型。
返回项：EXCLUSIVE (独享) | SHARED (共享)。
                     */
                    std::string m_resourcePoolPackType;
                    bool m_resourcePoolPackTypeHasBeenSet;

                    /**
                     * 实例资源池状态。
返回项：CREATING (创建中) | ACTIVE (运行中) | FAILED (创建失败) | RETIRED (已过期)。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例资源池总容量。
                     */
                    ResourceCount m_totalCapacity;
                    bool m_totalCapacityHasBeenSet;

                    /**
                     * 实例资源池剩余容量。
                     */
                    ResourceCount m_availableCapacity;
                    bool m_availableCapacityHasBeenSet;

                    /**
                     * 底层物理机IP（已加密）。
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 机架ID（已加密）。
                     */
                    std::string m_rackId;
                    bool m_rackIdHasBeenSet;

                    /**
                     * 交换机ID（已加密）。
                     */
                    std::string m_switchId;
                    bool m_switchIdHasBeenSet;

                    /**
                     * 自动放置开关状态。开启则在不指定实例资源池创建实例时，系统会在开启了该能力的实例资源池里寻找合适的池子创建实例。关闭则在不指定实例资源池创建实例时，系统不会在该池子里创建实例，只有在指定实例资源池创建实例时，指定了该池子的ID，才允许在池子内创建实例。
                     */
                    bool m_autoPlacement;
                    bool m_autoPlacementHasBeenSet;

                    /**
                     * 自动续费标识。
返回项：NOTIFY_AND_AUTO_RENEW (通知且自动续费) | NOTIFY_AND_MANUAL_RENEW (通知不自动续费) | DISABLE_NOTIFY_AND_MANUAL_RENEW (不通知不自动续费)。
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 实例资源池预扣包创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 实例资源池到期时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESOURCEPOOLPACK_H_
