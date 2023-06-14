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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEDEVICEREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEDEVICEREQUEST_H_

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
                * CreateDevice请求参数结构体
                */
                class CreateDeviceRequest : public AbstractModel
                {
                public:
                    CreateDeviceRequest();
                    ~CreateDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取创建设备所归属的项目ID
                     * @return ProjectId 创建设备所归属的项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置创建设备所归属的项目ID
                     * @param _projectId 创建设备所归属的项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取创建设备ID，项目内需要唯一，由小写英文字母、数字和下划线构成，长度不超过18
                     * @return DeviceId 创建设备ID，项目内需要唯一，由小写英文字母、数字和下划线构成，长度不超过18
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置创建设备ID，项目内需要唯一，由小写英文字母、数字和下划线构成，长度不超过18
                     * @param _deviceId 创建设备ID，项目内需要唯一，由小写英文字母、数字和下划线构成，长度不超过18
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
                     * 获取创建设备名称，长度小于24, 可包含中文、数字、英文字母和下划线
                     * @return DeviceName 创建设备名称，长度小于24, 可包含中文、数字、英文字母和下划线
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置创建设备名称，长度小于24, 可包含中文、数字、英文字母和下划线
                     * @param _deviceName 创建设备名称，长度小于24, 可包含中文、数字、英文字母和下划线
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
                     * 获取设备类型，field为现场设备（受控设备），remote为远端设备（操控设备），不填默认为field
                     * @return DeviceType 设备类型，field为现场设备（受控设备），remote为远端设备（操控设备），不填默认为field
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型，field为现场设备（受控设备），remote为远端设备（操控设备），不填默认为field
                     * @param _deviceType 设备类型，field为现场设备（受控设备），remote为远端设备（操控设备），不填默认为field
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
                     * 获取设备认证口令，由大小写英文字母和数字构成，须为16位
                     * @return DeviceToken 设备认证口令，由大小写英文字母和数字构成，须为16位
                     * 
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置设备认证口令，由大小写英文字母和数字构成，须为16位
                     * @param _deviceToken 设备认证口令，由大小写英文字母和数字构成，须为16位
                     * 
                     */
                    void SetDeviceToken(const std::string& _deviceToken);

                    /**
                     * 判断参数 DeviceToken 是否已赋值
                     * @return DeviceToken 是否已赋值
                     * 
                     */
                    bool DeviceTokenHasBeenSet() const;

                private:

                    /**
                     * 创建设备所归属的项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 创建设备ID，项目内需要唯一，由小写英文字母、数字和下划线构成，长度不超过18
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 创建设备名称，长度小于24, 可包含中文、数字、英文字母和下划线
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备类型，field为现场设备（受控设备），remote为远端设备（操控设备），不填默认为field
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 设备认证口令，由大小写英文字母和数字构成，须为16位
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEDEVICEREQUEST_H_
