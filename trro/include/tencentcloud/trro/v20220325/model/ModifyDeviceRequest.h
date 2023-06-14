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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYDEVICEREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYDEVICEREQUEST_H_

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
                * ModifyDevice请求参数结构体
                */
                class ModifyDeviceRequest : public AbstractModel
                {
                public:
                    ModifyDeviceRequest();
                    ~ModifyDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要修改设备归属项目的项目ID
                     * @return ProjectId 要修改设备归属项目的项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置要修改设备归属项目的项目ID
                     * @param _projectId 要修改设备归属项目的项目ID
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
                     * 获取要修改设备的设备ID
                     * @return DeviceId 要修改设备的设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置要修改设备的设备ID
                     * @param _deviceId 要修改设备的设备ID
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
                     * 获取修改后的设备名称，不填则不修改
                     * @return DeviceName 修改后的设备名称，不填则不修改
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置修改后的设备名称，不填则不修改
                     * @param _deviceName 修改后的设备名称，不填则不修改
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
                     * 获取修改后的设备认证口令，不填则不修改
                     * @return DeviceToken 修改后的设备认证口令，不填则不修改
                     * 
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置修改后的设备认证口令，不填则不修改
                     * @param _deviceToken 修改后的设备认证口令，不填则不修改
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
                     * 要修改设备归属项目的项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 要修改设备的设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 修改后的设备名称，不填则不修改
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 修改后的设备认证口令，不填则不修改
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYDEVICEREQUEST_H_
