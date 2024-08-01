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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATECLOUDSTORAGEAISERVICEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATECLOUDSTORAGEAISERVICEREQUEST_H_

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
                * CreateCloudStorageAIService请求参数结构体
                */
                class CreateCloudStorageAIServiceRequest : public AbstractModel
                {
                public:
                    CreateCloudStorageAIServiceRequest();
                    ~CreateCloudStorageAIServiceRequest() = default;
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
                     * 获取云存 AI 套餐 ID。可选值：

- `1m_low_od`：低功耗目标检测月套餐
- `1y_low_od`：低功耗目标检测年套餐
- `1m_ev_od`：事件目标检测月套餐
- `1y_ev_od`：事件目标检测年套餐
- `1m_ft_od`：全时目标检测月套餐
- `1y_ft_od`：全时目标检测年套餐
- `1m_low_hl`：低功耗视频浓缩月套餐
- `1y_low_hl`：低功耗视频浓缩年套餐
- `1m_ev_hl`：事件视频浓缩月套餐
- `1y_ev_hl`：事件视频浓缩年套餐
- `1m_ft_hl`：全时视频浓缩月套餐
- `1y_ft_hl`：全时视频浓缩年套餐
                     * @return PackageId 云存 AI 套餐 ID。可选值：

- `1m_low_od`：低功耗目标检测月套餐
- `1y_low_od`：低功耗目标检测年套餐
- `1m_ev_od`：事件目标检测月套餐
- `1y_ev_od`：事件目标检测年套餐
- `1m_ft_od`：全时目标检测月套餐
- `1y_ft_od`：全时目标检测年套餐
- `1m_low_hl`：低功耗视频浓缩月套餐
- `1y_low_hl`：低功耗视频浓缩年套餐
- `1m_ev_hl`：事件视频浓缩月套餐
- `1y_ev_hl`：事件视频浓缩年套餐
- `1m_ft_hl`：全时视频浓缩月套餐
- `1y_ft_hl`：全时视频浓缩年套餐
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置云存 AI 套餐 ID。可选值：

- `1m_low_od`：低功耗目标检测月套餐
- `1y_low_od`：低功耗目标检测年套餐
- `1m_ev_od`：事件目标检测月套餐
- `1y_ev_od`：事件目标检测年套餐
- `1m_ft_od`：全时目标检测月套餐
- `1y_ft_od`：全时目标检测年套餐
- `1m_low_hl`：低功耗视频浓缩月套餐
- `1y_low_hl`：低功耗视频浓缩年套餐
- `1m_ev_hl`：事件视频浓缩月套餐
- `1y_ev_hl`：事件视频浓缩年套餐
- `1m_ft_hl`：全时视频浓缩月套餐
- `1y_ft_hl`：全时视频浓缩年套餐
                     * @param _packageId 云存 AI 套餐 ID。可选值：

- `1m_low_od`：低功耗目标检测月套餐
- `1y_low_od`：低功耗目标检测年套餐
- `1m_ev_od`：事件目标检测月套餐
- `1y_ev_od`：事件目标检测年套餐
- `1m_ft_od`：全时目标检测月套餐
- `1y_ft_od`：全时目标检测年套餐
- `1m_low_hl`：低功耗视频浓缩月套餐
- `1y_low_hl`：低功耗视频浓缩年套餐
- `1m_ev_hl`：事件视频浓缩月套餐
- `1y_ev_hl`：事件视频浓缩年套餐
- `1m_ft_hl`：全时视频浓缩月套餐
- `1y_ft_hl`：全时视频浓缩年套餐
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

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
                     * 获取订单 ID
                     * @return OrderId 订单 ID
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单 ID
                     * @param _orderId 订单 ID
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

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
                     * 云存 AI 套餐 ID。可选值：

- `1m_low_od`：低功耗目标检测月套餐
- `1y_low_od`：低功耗目标检测年套餐
- `1m_ev_od`：事件目标检测月套餐
- `1y_ev_od`：事件目标检测年套餐
- `1m_ft_od`：全时目标检测月套餐
- `1y_ft_od`：全时目标检测年套餐
- `1m_low_hl`：低功耗视频浓缩月套餐
- `1y_low_hl`：低功耗视频浓缩年套餐
- `1m_ev_hl`：事件视频浓缩月套餐
- `1y_ev_hl`：事件视频浓缩年套餐
- `1m_ft_hl`：全时视频浓缩月套餐
- `1y_ft_hl`：全时视频浓缩年套餐
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 通道 ID
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 订单 ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATECLOUDSTORAGEAISERVICEREQUEST_H_
