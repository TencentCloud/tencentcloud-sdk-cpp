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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_CREATEQOSREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_CREATEQOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/SrcAddressInfo.h>
#include <tencentcloud/mna/v20210119/model/DestAddressInfo.h>
#include <tencentcloud/mna/v20210119/model/DeviceInfo.h>
#include <tencentcloud/mna/v20210119/model/Capacity.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * CreateQos请求参数结构体
                */
                class CreateQosRequest : public AbstractModel
                {
                public:
                    CreateQosRequest();
                    ~CreateQosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取加速业务源地址信息，SrcIpv6和（SrcIpv4+SrcPublicIpv4）二选一，目前Ipv6不可用，全部填写以Ipv4参数为准。
                     * @return SrcAddressInfo 加速业务源地址信息，SrcIpv6和（SrcIpv4+SrcPublicIpv4）二选一，目前Ipv6不可用，全部填写以Ipv4参数为准。
                     */
                    SrcAddressInfo GetSrcAddressInfo() const;

                    /**
                     * 设置加速业务源地址信息，SrcIpv6和（SrcIpv4+SrcPublicIpv4）二选一，目前Ipv6不可用，全部填写以Ipv4参数为准。
                     * @param SrcAddressInfo 加速业务源地址信息，SrcIpv6和（SrcIpv4+SrcPublicIpv4）二选一，目前Ipv6不可用，全部填写以Ipv4参数为准。
                     */
                    void SetSrcAddressInfo(const SrcAddressInfo& _srcAddressInfo);

                    /**
                     * 判断参数 SrcAddressInfo 是否已赋值
                     * @return SrcAddressInfo 是否已赋值
                     */
                    bool SrcAddressInfoHasBeenSet() const;

                    /**
                     * 获取加速业务目标地址信息
                     * @return DestAddressInfo 加速业务目标地址信息
                     */
                    DestAddressInfo GetDestAddressInfo() const;

                    /**
                     * 设置加速业务目标地址信息
                     * @param DestAddressInfo 加速业务目标地址信息
                     */
                    void SetDestAddressInfo(const DestAddressInfo& _destAddressInfo);

                    /**
                     * 判断参数 DestAddressInfo 是否已赋值
                     * @return DestAddressInfo 是否已赋值
                     */
                    bool DestAddressInfoHasBeenSet() const;

                    /**
                     * 获取加速套餐
T100K：上/下行保障 100kbps
T200K：上/下行保障 200kbps
T400K：上/下行保障 400kbps
BD1M：下行带宽保障1Mbps
BD2M：下行带宽保障2Mbps
BD4M：下行带宽保障4Mbps
BU1M：上行带宽保障1Mbps
BU2M：上行带宽保障2Mbps
BU4M：上行带宽保障4Mbps
                     * @return QosMenu 加速套餐
T100K：上/下行保障 100kbps
T200K：上/下行保障 200kbps
T400K：上/下行保障 400kbps
BD1M：下行带宽保障1Mbps
BD2M：下行带宽保障2Mbps
BD4M：下行带宽保障4Mbps
BU1M：上行带宽保障1Mbps
BU2M：上行带宽保障2Mbps
BU4M：上行带宽保障4Mbps
                     */
                    std::string GetQosMenu() const;

                    /**
                     * 设置加速套餐
T100K：上/下行保障 100kbps
T200K：上/下行保障 200kbps
T400K：上/下行保障 400kbps
BD1M：下行带宽保障1Mbps
BD2M：下行带宽保障2Mbps
BD4M：下行带宽保障4Mbps
BU1M：上行带宽保障1Mbps
BU2M：上行带宽保障2Mbps
BU4M：上行带宽保障4Mbps
                     * @param QosMenu 加速套餐
T100K：上/下行保障 100kbps
T200K：上/下行保障 200kbps
T400K：上/下行保障 400kbps
BD1M：下行带宽保障1Mbps
BD2M：下行带宽保障2Mbps
BD4M：下行带宽保障4Mbps
BU1M：上行带宽保障1Mbps
BU2M：上行带宽保障2Mbps
BU4M：上行带宽保障4Mbps
                     */
                    void SetQosMenu(const std::string& _qosMenu);

                    /**
                     * 判断参数 QosMenu 是否已赋值
                     * @return QosMenu 是否已赋值
                     */
                    bool QosMenuHasBeenSet() const;

                    /**
                     * 获取申请加速的设备信息，包括运营商，操作系统，设备唯一标识等。
                     * @return DeviceInfo 申请加速的设备信息，包括运营商，操作系统，设备唯一标识等。
                     */
                    DeviceInfo GetDeviceInfo() const;

                    /**
                     * 设置申请加速的设备信息，包括运营商，操作系统，设备唯一标识等。
                     * @param DeviceInfo 申请加速的设备信息，包括运营商，操作系统，设备唯一标识等。
                     */
                    void SetDeviceInfo(const DeviceInfo& _deviceInfo);

                    /**
                     * 判断参数 DeviceInfo 是否已赋值
                     * @return DeviceInfo 是否已赋值
                     */
                    bool DeviceInfoHasBeenSet() const;

                    /**
                     * 获取期望加速时长（单位分钟），默认值30分钟
                     * @return Duration 期望加速时长（单位分钟），默认值30分钟
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置期望加速时长（单位分钟），默认值30分钟
                     * @param Duration 期望加速时长（单位分钟），默认值30分钟
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取接口能力扩展，如果是电信用户，必须填充CTCC Token字段
                     * @return Capacity 接口能力扩展，如果是电信用户，必须填充CTCC Token字段
                     */
                    Capacity GetCapacity() const;

                    /**
                     * 设置接口能力扩展，如果是电信用户，必须填充CTCC Token字段
                     * @param Capacity 接口能力扩展，如果是电信用户，必须填充CTCC Token字段
                     */
                    void SetCapacity(const Capacity& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     */
                    bool CapacityHasBeenSet() const;

                private:

                    /**
                     * 加速业务源地址信息，SrcIpv6和（SrcIpv4+SrcPublicIpv4）二选一，目前Ipv6不可用，全部填写以Ipv4参数为准。
                     */
                    SrcAddressInfo m_srcAddressInfo;
                    bool m_srcAddressInfoHasBeenSet;

                    /**
                     * 加速业务目标地址信息
                     */
                    DestAddressInfo m_destAddressInfo;
                    bool m_destAddressInfoHasBeenSet;

                    /**
                     * 加速套餐
T100K：上/下行保障 100kbps
T200K：上/下行保障 200kbps
T400K：上/下行保障 400kbps
BD1M：下行带宽保障1Mbps
BD2M：下行带宽保障2Mbps
BD4M：下行带宽保障4Mbps
BU1M：上行带宽保障1Mbps
BU2M：上行带宽保障2Mbps
BU4M：上行带宽保障4Mbps
                     */
                    std::string m_qosMenu;
                    bool m_qosMenuHasBeenSet;

                    /**
                     * 申请加速的设备信息，包括运营商，操作系统，设备唯一标识等。
                     */
                    DeviceInfo m_deviceInfo;
                    bool m_deviceInfoHasBeenSet;

                    /**
                     * 期望加速时长（单位分钟），默认值30分钟
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 接口能力扩展，如果是电信用户，必须填充CTCC Token字段
                     */
                    Capacity m_capacity;
                    bool m_capacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_CREATEQOSREQUEST_H_
