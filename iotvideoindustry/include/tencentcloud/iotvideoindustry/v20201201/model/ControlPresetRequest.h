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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CONTROLPRESETREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CONTROLPRESETREQUEST_H_

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
                * ControlPreset请求参数结构体
                */
                class ControlPresetRequest : public AbstractModel
                {
                public:
                    ControlPresetRequest();
                    ~ControlPresetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道ID
                     * @return ChannelId 通道ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道ID
                     * @param _channelId 通道ID
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
                     * 获取控制命令：
Set-设置当前位置为预置位
Del-删除指定的预置位
Call-调用指定的预置位
                     * @return Command 控制命令：
Set-设置当前位置为预置位
Del-删除指定的预置位
Call-调用指定的预置位
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置控制命令：
Set-设置当前位置为预置位
Del-删除指定的预置位
Call-调用指定的预置位
                     * @param _command 控制命令：
Set-设置当前位置为预置位
Del-删除指定的预置位
Call-调用指定的预置位
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取预置位编码 范围1-8
                     * @return PresetId 预置位编码 范围1-8
                     * 
                     */
                    int64_t GetPresetId() const;

                    /**
                     * 设置预置位编码 范围1-8
                     * @param _presetId 预置位编码 范围1-8
                     * 
                     */
                    void SetPresetId(const int64_t& _presetId);

                    /**
                     * 判断参数 PresetId 是否已赋值
                     * @return PresetId 是否已赋值
                     * 
                     */
                    bool PresetIdHasBeenSet() const;

                    /**
                     * 获取设备Id
                     * @return DeviceId 设备Id
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备Id
                     * @param _deviceId 设备Id
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                private:

                    /**
                     * 通道ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 控制命令：
Set-设置当前位置为预置位
Del-删除指定的预置位
Call-调用指定的预置位
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 预置位编码 范围1-8
                     */
                    int64_t m_presetId;
                    bool m_presetIdHasBeenSet;

                    /**
                     * 设备Id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CONTROLPRESETREQUEST_H_
