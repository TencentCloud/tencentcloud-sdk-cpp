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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEVODCLOUDSTORAGEDATEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEVODCLOUDSTORAGEDATEREQUEST_H_

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
                * DescribeVodCloudStorageDate请求参数结构体
                */
                class DescribeVodCloudStorageDateRequest : public AbstractModel
                {
                public:
                    DescribeVodCloudStorageDateRequest();
                    ~DescribeVodCloudStorageDateRequest() = default;
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
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>通道id</p>
                     * @param _channelId <p>通道id</p>
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>用户id</p>
                     * @return UserId <p>用户id</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户id</p>
                     * @param _userId <p>用户id</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>时区</p>
                     * @return TimeZone <p>时区</p>
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>时区</p>
                     * @param _timeZone <p>时区</p>
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

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
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>用户id</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>时区</p>
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEVODCLOUDSTORAGEDATEREQUEST_H_
