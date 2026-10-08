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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_RENEWTWESEESUBSCRIPTIONREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_RENEWTWESEESUBSCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * RenewTWeSeeSubscription请求参数结构体
                */
                class RenewTWeSeeSubscriptionRequest : public AbstractModel
                {
                public:
                    RenewTWeSeeSubscriptionRequest();
                    ~RenewTWeSeeSubscriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品 ID</p>
                     * @return ProductId <p>产品 ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品 ID</p>
                     * @param _productId <p>产品 ID</p>
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>设备名称</p>
                     * @return DeviceName <p>设备名称</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名称</p>
                     * @param _deviceName <p>设备名称</p>
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取<p>算法类型。可选值：</p><ul><li><code>VID_COMP</code>：视频理解</li></ul>
                     * @return ServiceType <p>算法类型。可选值：</p><ul><li><code>VID_COMP</code>：视频理解</li></ul>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>算法类型。可选值：</p><ul><li><code>VID_COMP</code>：视频理解</li></ul>
                     * @param _serviceType <p>算法类型。可选值：</p><ul><li><code>VID_COMP</code>：视频理解</li></ul>
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>续费时长，单位：月，支持 1-60</p>
                     * @return Period <p>续费时长，单位：月，支持 1-60</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>续费时长，单位：月，支持 1-60</p>
                     * @param _period <p>续费时长，单位：月，支持 1-60</p>
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>通道 ID</p>
                     * @return ChannelId <p>通道 ID</p>
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置<p>通道 ID</p>
                     * @param _channelId <p>通道 ID</p>
                     * 
                     */
                    void SetChannelId(const uint64_t& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>自定义订单 ID</p>
                     * @return CustomOrderId <p>自定义订单 ID</p>
                     * 
                     */
                    std::string GetCustomOrderId() const;

                    /**
                     * 设置<p>自定义订单 ID</p>
                     * @param _customOrderId <p>自定义订单 ID</p>
                     * 
                     */
                    void SetCustomOrderId(const std::string& _customOrderId);

                    /**
                     * 判断参数 CustomOrderId 是否已赋值
                     * @return CustomOrderId 是否已赋值
                     * 
                     */
                    bool CustomOrderIdHasBeenSet() const;

                private:

                    /**
                     * <p>产品 ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>算法类型。可选值：</p><ul><li><code>VID_COMP</code>：视频理解</li></ul>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>续费时长，单位：月，支持 1-60</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>通道 ID</p>
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>自定义订单 ID</p>
                     */
                    std::string m_customOrderId;
                    bool m_customOrderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_RENEWTWESEESUBSCRIPTIONREQUEST_H_
