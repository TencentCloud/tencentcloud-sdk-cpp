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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYTWESEESUBSCRIPTIONREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYTWESEESUBSCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeComprehensionConfig.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeCompHighlightConfig.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeEventIdFilterConfig.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * ModifyTWeSeeSubscription请求参数结构体
                */
                class ModifyTWeSeeSubscriptionRequest : public AbstractModel
                {
                public:
                    ModifyTWeSeeSubscriptionRequest();
                    ~ModifyTWeSeeSubscriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品 ID
                     * @return ProductId 产品 ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品 ID
                     * @param _productId 产品 ID
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
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
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
                     * 获取算法类型。可选值：

- `VID_COMP`：视频理解
                     * @return ServiceType 算法类型。可选值：

- `VID_COMP`：视频理解
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置算法类型。可选值：

- `VID_COMP`：视频理解
                     * @param _serviceType 算法类型。可选值：

- `VID_COMP`：视频理解
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
                     * 获取通道 ID
                     * @return ChannelId 通道 ID
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置通道 ID
                     * @param _channelId 通道 ID
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
                     * 获取功能开关。`true` 为开启，`false` 为关闭；不传表示不修改
                     * @return Enabled 功能开关。`true` 为开启，`false` 为关闭；不传表示不修改
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置功能开关。`true` 为开启，`false` 为关闭；不传表示不修改
                     * @param _enabled 功能开关。`true` 为开启，`false` 为关闭；不传表示不修改
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取视觉理解配置（适用于视频理解、图片理解），不传则不修改
                     * @return ComprehensionConfig 视觉理解配置（适用于视频理解、图片理解），不传则不修改
                     * 
                     */
                    SeeComprehensionConfig GetComprehensionConfig() const;

                    /**
                     * 设置视觉理解配置（适用于视频理解、图片理解），不传则不修改
                     * @param _comprehensionConfig 视觉理解配置（适用于视频理解、图片理解），不传则不修改
                     * 
                     */
                    void SetComprehensionConfig(const SeeComprehensionConfig& _comprehensionConfig);

                    /**
                     * 判断参数 ComprehensionConfig 是否已赋值
                     * @return ComprehensionConfig 是否已赋值
                     * 
                     */
                    bool ComprehensionConfigHasBeenSet() const;

                    /**
                     * 获取视频语义浓缩配置（适用于视频语义浓缩），不传则不修改
                     * @return CompHighlightConfig 视频语义浓缩配置（适用于视频语义浓缩），不传则不修改
                     * 
                     */
                    SeeCompHighlightConfig GetCompHighlightConfig() const;

                    /**
                     * 设置视频语义浓缩配置（适用于视频语义浓缩），不传则不修改
                     * @param _compHighlightConfig 视频语义浓缩配置（适用于视频语义浓缩），不传则不修改
                     * 
                     */
                    void SetCompHighlightConfig(const SeeCompHighlightConfig& _compHighlightConfig);

                    /**
                     * 判断参数 CompHighlightConfig 是否已赋值
                     * @return CompHighlightConfig 是否已赋值
                     * 
                     */
                    bool CompHighlightConfigHasBeenSet() const;

                    /**
                     * 获取云存事件 ID 过滤规则配置，不传则不修改
                     * @return EventIdFilterConfig 云存事件 ID 过滤规则配置，不传则不修改
                     * 
                     */
                    SeeEventIdFilterConfig GetEventIdFilterConfig() const;

                    /**
                     * 设置云存事件 ID 过滤规则配置，不传则不修改
                     * @param _eventIdFilterConfig 云存事件 ID 过滤规则配置，不传则不修改
                     * 
                     */
                    void SetEventIdFilterConfig(const SeeEventIdFilterConfig& _eventIdFilterConfig);

                    /**
                     * 判断参数 EventIdFilterConfig 是否已赋值
                     * @return EventIdFilterConfig 是否已赋值
                     * 
                     */
                    bool EventIdFilterConfigHasBeenSet() const;

                private:

                    /**
                     * 产品 ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 算法类型。可选值：

- `VID_COMP`：视频理解
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 通道 ID
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 功能开关。`true` 为开启，`false` 为关闭；不传表示不修改
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 视觉理解配置（适用于视频理解、图片理解），不传则不修改
                     */
                    SeeComprehensionConfig m_comprehensionConfig;
                    bool m_comprehensionConfigHasBeenSet;

                    /**
                     * 视频语义浓缩配置（适用于视频语义浓缩），不传则不修改
                     */
                    SeeCompHighlightConfig m_compHighlightConfig;
                    bool m_compHighlightConfigHasBeenSet;

                    /**
                     * 云存事件 ID 过滤规则配置，不传则不修改
                     */
                    SeeEventIdFilterConfig m_eventIdFilterConfig;
                    bool m_eventIdFilterConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYTWESEESUBSCRIPTIONREQUEST_H_
