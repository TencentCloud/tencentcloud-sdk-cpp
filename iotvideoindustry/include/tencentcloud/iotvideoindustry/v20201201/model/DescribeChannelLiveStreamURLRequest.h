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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBECHANNELLIVESTREAMURLREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBECHANNELLIVESTREAMURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeChannelLiveStreamURL请求参数结构体
                */
                class DescribeChannelLiveStreamURLRequest : public AbstractModel
                {
                public:
                    DescribeChannelLiveStreamURLRequest();
                    ~DescribeChannelLiveStreamURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备唯一标识，必填参数
                     * @return DeviceId 设备唯一标识，必填参数
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备唯一标识，必填参数
                     * @param DeviceId 设备唯一标识，必填参数
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取通道唯一标识（接口升级字段为必填），必填参数
                     * @return ChannelId 通道唯一标识（接口升级字段为必填），必填参数
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道唯一标识（接口升级字段为必填），必填参数
                     * @param ChannelId 通道唯一标识（接口升级字段为必填），必填参数
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     */
                    bool ChannelIdHasBeenSet() const;

                private:

                    /**
                     * 设备唯一标识，必填参数
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 通道唯一标识（接口升级字段为必填），必填参数
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBECHANNELLIVESTREAMURLREQUEST_H_
