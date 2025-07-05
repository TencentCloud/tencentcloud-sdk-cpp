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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_GETDEVICELICENSEREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_GETDEVICELICENSEREQUEST_H_

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
                * GetDeviceLicense请求参数结构体
                */
                class GetDeviceLicenseRequest : public AbstractModel
                {
                public:
                    GetDeviceLicenseRequest();
                    ~GetDeviceLicenseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标设备所属项目ID
                     * @return ProjectId 目标设备所属项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置目标设备所属项目ID
                     * @param _projectId 目标设备所属项目ID
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
                     * 获取目标设备ID
                     * @return DeviceId 目标设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置目标设备ID
                     * @param _deviceId 目标设备ID
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
                     * 目标设备所属项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 目标设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_GETDEVICELICENSEREQUEST_H_
