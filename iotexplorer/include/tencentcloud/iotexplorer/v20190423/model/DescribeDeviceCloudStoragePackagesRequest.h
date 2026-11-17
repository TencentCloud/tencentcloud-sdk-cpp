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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICECLOUDSTORAGEPACKAGESREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICECLOUDSTORAGEPACKAGESREQUEST_H_

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
                * DescribeDeviceCloudStoragePackages请求参数结构体
                */
                class DescribeDeviceCloudStoragePackagesRequest : public AbstractModel
                {
                public:
                    DescribeDeviceCloudStoragePackagesRequest();
                    ~DescribeDeviceCloudStoragePackagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品id</p>
                     * @return ProductId <p>产品id</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品id</p>
                     * @param _productId <p>产品id</p>
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
                     * 获取<p>设备名</p>
                     * @return DeviceName <p>设备名</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名</p>
                     * @param _deviceName <p>设备名</p>
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
                     * 获取<p>通道id</p>
                     * @return ChannelId <p>通道id</p>
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置<p>通道id</p>
                     * @param _channelId <p>通道id</p>
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
                     * 获取<p>云存类别</p><p>枚举值：</p><ul><li>video： 视频云存</li><li>image： 图片云存</li></ul>
                     * @return MediaType <p>云存类别</p><p>枚举值：</p><ul><li>video： 视频云存</li><li>image： 图片云存</li></ul>
                     * 
                     */
                    std::string GetMediaType() const;

                    /**
                     * 设置<p>云存类别</p><p>枚举值：</p><ul><li>video： 视频云存</li><li>image： 图片云存</li></ul>
                     * @param _mediaType <p>云存类别</p><p>枚举值：</p><ul><li>video： 视频云存</li><li>image： 图片云存</li></ul>
                     * 
                     */
                    void SetMediaType(const std::string& _mediaType);

                    /**
                     * 判断参数 MediaType 是否已赋值
                     * @return MediaType 是否已赋值
                     * 
                     */
                    bool MediaTypeHasBeenSet() const;

                private:

                    /**
                     * <p>产品id</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>通道id</p>
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>云存类别</p><p>枚举值：</p><ul><li>video： 视频云存</li><li>image： 图片云存</li></ul>
                     */
                    std::string m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICECLOUDSTORAGEPACKAGESREQUEST_H_
