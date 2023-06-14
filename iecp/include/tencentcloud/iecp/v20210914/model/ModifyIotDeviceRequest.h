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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYIOTDEVICEREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYIOTDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * ModifyIotDevice请求参数结构体
                */
                class ModifyIotDeviceRequest : public AbstractModel
                {
                public:
                    ModifyIotDeviceRequest();
                    ~ModifyIotDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备id
                     * @return DeviceId 设备id
                     * 
                     */
                    int64_t GetDeviceId() const;

                    /**
                     * 设置设备id
                     * @param _deviceId 设备id
                     * 
                     */
                    void SetDeviceId(const int64_t& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取设备是否开启
                     * @return Disabled 设备是否开启
                     * 
                     */
                    bool GetDisabled() const;

                    /**
                     * 设置设备是否开启
                     * @param _disabled 设备是否开启
                     * 
                     */
                    void SetDisabled(const bool& _disabled);

                    /**
                     * 判断参数 Disabled 是否已赋值
                     * @return Disabled 是否已赋值
                     * 
                     */
                    bool DisabledHasBeenSet() const;

                    /**
                     * 获取日志设置
                     * @return LogSetting 日志设置
                     * 
                     */
                    int64_t GetLogSetting() const;

                    /**
                     * 设置日志设置
                     * @param _logSetting 日志设置
                     * 
                     */
                    void SetLogSetting(const int64_t& _logSetting);

                    /**
                     * 判断参数 LogSetting 是否已赋值
                     * @return LogSetting 是否已赋值
                     * 
                     */
                    bool LogSettingHasBeenSet() const;

                    /**
                     * 获取日志级别
                     * @return LogLevel 日志级别
                     * 
                     */
                    int64_t GetLogLevel() const;

                    /**
                     * 设置日志级别
                     * @param _logLevel 日志级别
                     * 
                     */
                    void SetLogLevel(const int64_t& _logLevel);

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                private:

                    /**
                     * 设备id
                     */
                    int64_t m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 设备是否开启
                     */
                    bool m_disabled;
                    bool m_disabledHasBeenSet;

                    /**
                     * 日志设置
                     */
                    int64_t m_logSetting;
                    bool m_logSettingHasBeenSet;

                    /**
                     * 日志级别
                     */
                    int64_t m_logLevel;
                    bool m_logLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYIOTDEVICEREQUEST_H_
