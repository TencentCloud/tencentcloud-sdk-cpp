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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBECURRENTDEVICEDATARESPONSE_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBECURRENTDEVICEDATARESPONSE_H_

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
                * DescribeCurrentDeviceData返回参数结构体
                */
                class DescribeCurrentDeviceDataResponse : public AbstractModel
                {
                public:
                    DescribeCurrentDeviceDataResponse();
                    ~DescribeCurrentDeviceDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取通道数
                     * @return Channels 通道数
                     * 
                     */
                    int64_t GetChannels() const;

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                    /**
                     * 获取设备数
                     * @return Devices 设备数
                     * 
                     */
                    int64_t GetDevices() const;

                    /**
                     * 判断参数 Devices 是否已赋值
                     * @return Devices 是否已赋值
                     * 
                     */
                    bool DevicesHasBeenSet() const;

                    /**
                     * 获取在线通道数
                     * @return OnlineChannels 在线通道数
                     * 
                     */
                    int64_t GetOnlineChannels() const;

                    /**
                     * 判断参数 OnlineChannels 是否已赋值
                     * @return OnlineChannels 是否已赋值
                     * 
                     */
                    bool OnlineChannelsHasBeenSet() const;

                    /**
                     * 获取在线设备数
                     * @return OnlineDevices 在线设备数
                     * 
                     */
                    int64_t GetOnlineDevices() const;

                    /**
                     * 判断参数 OnlineDevices 是否已赋值
                     * @return OnlineDevices 是否已赋值
                     * 
                     */
                    bool OnlineDevicesHasBeenSet() const;

                    /**
                     * 获取正在录制通道数
                     * @return RecordingChannels 正在录制通道数
                     * 
                     */
                    int64_t GetRecordingChannels() const;

                    /**
                     * 判断参数 RecordingChannels 是否已赋值
                     * @return RecordingChannels 是否已赋值
                     * 
                     */
                    bool RecordingChannelsHasBeenSet() const;

                private:

                    /**
                     * 通道数
                     */
                    int64_t m_channels;
                    bool m_channelsHasBeenSet;

                    /**
                     * 设备数
                     */
                    int64_t m_devices;
                    bool m_devicesHasBeenSet;

                    /**
                     * 在线通道数
                     */
                    int64_t m_onlineChannels;
                    bool m_onlineChannelsHasBeenSet;

                    /**
                     * 在线设备数
                     */
                    int64_t m_onlineDevices;
                    bool m_onlineDevicesHasBeenSet;

                    /**
                     * 正在录制通道数
                     */
                    int64_t m_recordingChannels;
                    bool m_recordingChannelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBECURRENTDEVICEDATARESPONSE_H_
