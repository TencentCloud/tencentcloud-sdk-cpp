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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICEINFORESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeDeviceInfo返回参数结构体
                */
                class DescribeDeviceInfoResponse : public AbstractModel
                {
                public:
                    DescribeDeviceInfoResponse();
                    ~DescribeDeviceInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
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
                     * 获取设备类型，field为现场设备（被控方），remote为远端设备（操控方）
                     * @return DeviceType 设备类型，field为现场设备（被控方），remote为远端设备（操控方）
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取设备状态，offline为离线，ready为在线准备，connected为会话中
                     * @return DeviceStatus 设备状态，offline为离线，ready为在线准备，connected为会话中
                     * 
                     */
                    std::string GetDeviceStatus() const;

                    /**
                     * 判断参数 DeviceStatus 是否已赋值
                     * @return DeviceStatus 是否已赋值
                     * 
                     */
                    bool DeviceStatusHasBeenSet() const;

                    /**
                     * 获取设备状态最后更新时间
                     * @return LastReportTime 设备状态最后更新时间
                     * 
                     */
                    std::string GetLastReportTime() const;

                    /**
                     * 判断参数 LastReportTime 是否已赋值
                     * @return LastReportTime 是否已赋值
                     * 
                     */
                    bool LastReportTimeHasBeenSet() const;

                    /**
                     * 获取设备信息最后修改时间
                     * @return ModifyTime 设备信息最后修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备类型，field为现场设备（被控方），remote为远端设备（操控方）
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 设备状态，offline为离线，ready为在线准备，connected为会话中
                     */
                    std::string m_deviceStatus;
                    bool m_deviceStatusHasBeenSet;

                    /**
                     * 设备状态最后更新时间
                     */
                    std::string m_lastReportTime;
                    bool m_lastReportTimeHasBeenSet;

                    /**
                     * 设备信息最后修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICEINFORESPONSE_H_
