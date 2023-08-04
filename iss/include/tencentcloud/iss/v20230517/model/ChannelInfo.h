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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CHANNELINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CHANNELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 通道及通道所属设备信息
                */
                class ChannelInfo : public AbstractModel
                {
                public:
                    ChannelInfo();
                    ~ChannelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通道所属的设备ID
                     * @return DeviceId 通道所属的设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置通道所属的设备ID
                     * @param _deviceId 通道所属的设备ID
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取设备通道ID，一个设备通道只允许被一个上云计划添加
                     * @return ChannelId 设备通道ID，一个设备通道只允许被一个上云计划添加
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置设备通道ID，一个设备通道只允许被一个上云计划添加
                     * @param _channelId 设备通道ID，一个设备通道只允许被一个上云计划添加
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                private:

                    /**
                     * 通道所属的设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备通道ID，一个设备通道只允许被一个上云计划添加
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CHANNELINFO_H_
