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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEDEVICERESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEDEVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * DescribeDevice返回参数结构体
                */
                class DescribeDeviceResponse : public AbstractModel
                {
                public:
                    DescribeDeviceResponse();
                    ~DescribeDeviceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备名
                     * @return DeviceName 设备名
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取设备是否在线，0不在线，1在线，2获取失败，3未激活
                     * @return Online 设备是否在线，0不在线，1在线，2获取失败，3未激活
                     * 
                     */
                    uint64_t GetOnline() const;

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     * 
                     */
                    bool OnlineHasBeenSet() const;

                    /**
                     * 获取设备最后上线时间
                     * @return LoginTime 设备最后上线时间
                     * 
                     */
                    uint64_t GetLoginTime() const;

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取设备密钥
                     * @return DevicePsk 设备密钥
                     * 
                     */
                    std::string GetDevicePsk() const;

                    /**
                     * 判断参数 DevicePsk 是否已赋值
                     * @return DevicePsk 是否已赋值
                     * 
                     */
                    bool DevicePskHasBeenSet() const;

                    /**
                     * 获取设备启用状态
                     * @return EnableState 设备启用状态
                     * 
                     */
                    uint64_t GetEnableState() const;

                    /**
                     * 判断参数 EnableState 是否已赋值
                     * @return EnableState 是否已赋值
                     * 
                     */
                    bool EnableStateHasBeenSet() const;

                    /**
                     * 获取设备过期时间
                     * @return ExpireTime 设备过期时间
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取设备的sdk日志等级，0：关闭，1：错误，2：告警，3：信息，4：调试
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogLevel 设备的sdk日志等级，0：关闭，1：错误，2：告警，3：信息，4：调试
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLogLevel() const;

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                private:

                    /**
                     * 设备名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备是否在线，0不在线，1在线，2获取失败，3未激活
                     */
                    uint64_t m_online;
                    bool m_onlineHasBeenSet;

                    /**
                     * 设备最后上线时间
                     */
                    uint64_t m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * 设备密钥
                     */
                    std::string m_devicePsk;
                    bool m_devicePskHasBeenSet;

                    /**
                     * 设备启用状态
                     */
                    uint64_t m_enableState;
                    bool m_enableStateHasBeenSet;

                    /**
                     * 设备过期时间
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 设备的sdk日志等级，0：关闭，1：错误，2：告警，3：信息，4：调试
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_logLevel;
                    bool m_logLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEDEVICERESPONSE_H_
