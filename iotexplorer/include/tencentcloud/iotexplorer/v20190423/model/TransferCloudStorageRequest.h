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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TRANSFERCLOUDSTORAGEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TRANSFERCLOUDSTORAGEREQUEST_H_

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
                * TransferCloudStorage请求参数结构体
                */
                class TransferCloudStorageRequest : public AbstractModel
                {
                public:
                    TransferCloudStorageRequest();
                    ~TransferCloudStorageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品ID</p>
                     * @return ProductId <p>产品ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品ID</p>
                     * @param _productId <p>产品ID</p>
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
                     * 获取<p>已开通云存的设备名称</p>
                     * @return DeviceName <p>已开通云存的设备名称</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>已开通云存的设备名称</p>
                     * @param _deviceName <p>已开通云存的设备名称</p>
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
                     * 获取<p>未开通云存的设备名称</p>
                     * @return ToDeviceName <p>未开通云存的设备名称</p>
                     * 
                     */
                    std::string GetToDeviceName() const;

                    /**
                     * 设置<p>未开通云存的设备名称</p>
                     * @param _toDeviceName <p>未开通云存的设备名称</p>
                     * 
                     */
                    void SetToDeviceName(const std::string& _toDeviceName);

                    /**
                     * 判断参数 ToDeviceName 是否已赋值
                     * @return ToDeviceName 是否已赋值
                     * 
                     */
                    bool ToDeviceNameHasBeenSet() const;

                    /**
                     * 获取<p>未开通云存的设备产品ID</p>
                     * @return ToProductId <p>未开通云存的设备产品ID</p>
                     * 
                     */
                    std::string GetToProductId() const;

                    /**
                     * 设置<p>未开通云存的设备产品ID</p>
                     * @param _toProductId <p>未开通云存的设备产品ID</p>
                     * 
                     */
                    void SetToProductId(const std::string& _toProductId);

                    /**
                     * 判断参数 ToProductId 是否已赋值
                     * @return ToProductId 是否已赋值
                     * 
                     */
                    bool ToProductIdHasBeenSet() const;

                    /**
                     * 获取<p>已开通云存的通道id</p>
                     * @return ChannelId <p>已开通云存的通道id</p>
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置<p>已开通云存的通道id</p>
                     * @param _channelId <p>已开通云存的通道id</p>
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
                     * 获取<p>未开通云存的通道id</p>
                     * @return ToChannelId <p>未开通云存的通道id</p>
                     * 
                     */
                    uint64_t GetToChannelId() const;

                    /**
                     * 设置<p>未开通云存的通道id</p>
                     * @param _toChannelId <p>未开通云存的通道id</p>
                     * 
                     */
                    void SetToChannelId(const uint64_t& _toChannelId);

                    /**
                     * 判断参数 ToChannelId 是否已赋值
                     * @return ToChannelId 是否已赋值
                     * 
                     */
                    bool ToChannelIdHasBeenSet() const;

                private:

                    /**
                     * <p>产品ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>已开通云存的设备名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>未开通云存的设备名称</p>
                     */
                    std::string m_toDeviceName;
                    bool m_toDeviceNameHasBeenSet;

                    /**
                     * <p>未开通云存的设备产品ID</p>
                     */
                    std::string m_toProductId;
                    bool m_toProductIdHasBeenSet;

                    /**
                     * <p>已开通云存的通道id</p>
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>未开通云存的通道id</p>
                     */
                    uint64_t m_toChannelId;
                    bool m_toChannelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TRANSFERCLOUDSTORAGEREQUEST_H_
