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
                     * 获取<p>创建设备所归属的项目ID</p>
                     * @return ProjectId <p>创建设备所归属的项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>创建设备所归属的项目ID</p>
                     * @param _projectId <p>创建设备所归属的项目ID</p>
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
                     * 获取<p>创建设备ID，项目内需要唯一，由小写英文字母、数字和下划线构成，长度不超过32</p>
                     * @return DeviceId <p>创建设备ID，项目内需要唯一，由小写英文字母、数字和下划线构成，长度不超过32</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>创建设备ID，项目内需要唯一，由小写英文字母、数字和下划线构成，长度不超过32</p>
                     * @param _deviceId <p>创建设备ID，项目内需要唯一，由小写英文字母、数字和下划线构成，长度不超过32</p>
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
                     * 获取<p>创建设备名称，长度小于24, 可包含中文、数字、英文字母和下划线</p>
                     * @return DeviceName <p>创建设备名称，长度小于24, 可包含中文、数字、英文字母和下划线</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>创建设备名称，长度小于24, 可包含中文、数字、英文字母和下划线</p>
                     * @param _deviceName <p>创建设备名称，长度小于24, 可包含中文、数字、英文字母和下划线</p>
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
                     * 获取<p>设备类型</p><p>枚举值：</p><ul><li>field： 现场设备（受控设备）</li><li>remote： 远端设备（操控设备）</li></ul>
                     * @return DeviceType <p>设备类型</p><p>枚举值：</p><ul><li>field： 现场设备（受控设备）</li><li>remote： 远端设备（操控设备）</li></ul>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>设备类型</p><p>枚举值：</p><ul><li>field： 现场设备（受控设备）</li><li>remote： 远端设备（操控设备）</li></ul>
                     * @param _deviceType <p>设备类型</p><p>枚举值：</p><ul><li>field： 现场设备（受控设备）</li><li>remote： 远端设备（操控设备）</li></ul>
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
                     * 获取<p>设备认证口令，由大小写英文字母和数字构成，须为16位</p>
                     * @return DeviceToken <p>设备认证口令，由大小写英文字母和数字构成，须为16位</p>
                     * 
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置<p>设备认证口令，由大小写英文字母和数字构成，须为16位</p>
                     * @param _deviceToken <p>设备认证口令，由大小写英文字母和数字构成，须为16位</p>
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
                     * <p>创建设备所归属的项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>创建设备ID，项目内需要唯一，由小写英文字母、数字和下划线构成，长度不超过32</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>创建设备名称，长度小于24, 可包含中文、数字、英文字母和下划线</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>设备类型</p><p>枚举值：</p><ul><li>field： 现场设备（受控设备）</li><li>remote： 远端设备（操控设备）</li></ul>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>设备认证口令，由大小写英文字母和数字构成，须为16位</p>
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEDEVICEREQUEST_H_
