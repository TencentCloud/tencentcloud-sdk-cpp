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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DEVICEINFO_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 设备信息
                */
                class DeviceInfo : public AbstractModel
                {
                public:
                    DeviceInfo();
                    ~DeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备ID
                     * @return DeviceId 设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID
                     * @param _deviceId 设备ID
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
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
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
                     * 获取设备状态，offline为离线，ready为在线准备，connected为会话中
                     * @return DeviceStatus 设备状态，offline为离线，ready为在线准备，connected为会话中
                     * 
                     */
                    std::string GetDeviceStatus() const;

                    /**
                     * 设置设备状态，offline为离线，ready为在线准备，connected为会话中
                     * @param _deviceStatus 设备状态，offline为离线，ready为在线准备，connected为会话中
                     * 
                     */
                    void SetDeviceStatus(const std::string& _deviceStatus);

                    /**
                     * 判断参数 DeviceStatus 是否已赋值
                     * @return DeviceStatus 是否已赋值
                     * 
                     */
                    bool DeviceStatusHasBeenSet() const;

                    /**
                     * 获取设备类型，field为现场设备（受控方），remote为远端设备（操控方）
                     * @return DeviceType 设备类型，field为现场设备（受控方），remote为远端设备（操控方）
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型，field为现场设备（受控方），remote为远端设备（操控方）
                     * @param _deviceType 设备类型，field为现场设备（受控方），remote为远端设备（操控方）
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取设备信息最近修改时间
                     * @return ModifyTime 设备信息最近修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置设备信息最近修改时间
                     * @param _modifyTime 设备信息最近修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取设备状态最近更新时间
                     * @return LastReportTime 设备状态最近更新时间
                     * 
                     */
                    std::string GetLastReportTime() const;

                    /**
                     * 设置设备状态最近更新时间
                     * @param _lastReportTime 设备状态最近更新时间
                     * 
                     */
                    void SetLastReportTime(const std::string& _lastReportTime);

                    /**
                     * 判断参数 LastReportTime 是否已赋值
                     * @return LastReportTime 是否已赋值
                     * 
                     */
                    bool LastReportTimeHasBeenSet() const;

                    /**
                     * 获取设备所属项目Id
                     * @return ProjectId 设备所属项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置设备所属项目Id
                     * @param _projectId 设备所属项目Id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备状态，offline为离线，ready为在线准备，connected为会话中
                     */
                    std::string m_deviceStatus;
                    bool m_deviceStatusHasBeenSet;

                    /**
                     * 设备类型，field为现场设备（受控方），remote为远端设备（操控方）
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 设备信息最近修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 设备状态最近更新时间
                     */
                    std::string m_lastReportTime;
                    bool m_lastReportTimeHasBeenSet;

                    /**
                     * 设备所属项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DEVICEINFO_H_
