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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEDEVICEORGANIZATIONREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEDEVICEORGANIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * UpdateDeviceOrganization请求参数结构体
                */
                class UpdateDeviceOrganizationRequest : public AbstractModel
                {
                public:
                    UpdateDeviceOrganizationRequest();
                    ~UpdateDeviceOrganizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备 ID 数组（从获取设备列表接口ListDevices中获取）
                     * @return DeviceIds 设备 ID 数组（从获取设备列表接口ListDevices中获取）
                     * 
                     */
                    std::vector<std::string> GetDeviceIds() const;

                    /**
                     * 设置设备 ID 数组（从获取设备列表接口ListDevices中获取）
                     * @param _deviceIds 设备 ID 数组（从获取设备列表接口ListDevices中获取）
                     * 
                     */
                    void SetDeviceIds(const std::vector<std::string>& _deviceIds);

                    /**
                     * 判断参数 DeviceIds 是否已赋值
                     * @return DeviceIds 是否已赋值
                     * 
                     */
                    bool DeviceIdsHasBeenSet() const;

                    /**
                     * 获取组织 ID（从查询组织接口DescribeOrganization中获取）
                     * @return OrganizationId 组织 ID（从查询组织接口DescribeOrganization中获取）
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置组织 ID（从查询组织接口DescribeOrganization中获取）
                     * @param _organizationId 组织 ID（从查询组织接口DescribeOrganization中获取）
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                private:

                    /**
                     * 设备 ID 数组（从获取设备列表接口ListDevices中获取）
                     */
                    std::vector<std::string> m_deviceIds;
                    bool m_deviceIdsHasBeenSet;

                    /**
                     * 组织 ID（从查询组织接口DescribeOrganization中获取）
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEDEVICEORGANIZATIONREQUEST_H_
