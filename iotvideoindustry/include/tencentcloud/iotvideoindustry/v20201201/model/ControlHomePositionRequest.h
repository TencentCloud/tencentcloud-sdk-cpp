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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CONTROLHOMEPOSITIONREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CONTROLHOMEPOSITIONREQUEST_H_

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
                * ControlHomePosition请求参数结构体
                */
                class ControlHomePositionRequest : public AbstractModel
                {
                public:
                    ControlHomePositionRequest();
                    ~ControlHomePositionRequest() = default;
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

                    /**
                     * 获取看守位使能 0-停用看守位 1-启用看守位
                     * @return Enable 看守位使能 0-停用看守位 1-启用看守位
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置看守位使能 0-停用看守位 1-启用看守位
                     * @param _enable 看守位使能 0-停用看守位 1-启用看守位
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取预置位编码 范围1-8，启用看守位时必填
                     * @return PresetId 预置位编码 范围1-8，启用看守位时必填
                     * 
                     */
                    int64_t GetPresetId() const;

                    /**
                     * 设置预置位编码 范围1-8，启用看守位时必填
                     * @param _presetId 预置位编码 范围1-8，启用看守位时必填
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
                     * 获取看守位自动归位时间， 启用看守位时必填
                     * @return ResetTime 看守位自动归位时间， 启用看守位时必填
                     * 
                     */
                    int64_t GetResetTime() const;

                    /**
                     * 设置看守位自动归位时间， 启用看守位时必填
                     * @param _resetTime 看守位自动归位时间， 启用看守位时必填
                     * 
                     */
                    void SetResetTime(const int64_t& _resetTime);

                    /**
                     * 判断参数 ResetTime 是否已赋值
                     * @return ResetTime 是否已赋值
                     * 
                     */
                    bool ResetTimeHasBeenSet() const;

                private:

                    /**
                     * 通道ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 设备Id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 看守位使能 0-停用看守位 1-启用看守位
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 预置位编码 范围1-8，启用看守位时必填
                     */
                    int64_t m_presetId;
                    bool m_presetIdHasBeenSet;

                    /**
                     * 看守位自动归位时间， 启用看守位时必填
                     */
                    int64_t m_resetTime;
                    bool m_resetTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CONTROLHOMEPOSITIONREQUEST_H_
