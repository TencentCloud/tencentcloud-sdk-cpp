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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_BINDGROUPDEVICESREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_BINDGROUPDEVICESREQUEST_H_

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
                * BindGroupDevices请求参数结构体
                */
                class BindGroupDevicesRequest : public AbstractModel
                {
                public:
                    BindGroupDevicesRequest();
                    ~BindGroupDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组ID
                     * @return GroupId 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param _groupId 分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取设备唯一标识列表
                     * @return DeviceList 设备唯一标识列表
                     * 
                     */
                    std::vector<std::string> GetDeviceList() const;

                    /**
                     * 设置设备唯一标识列表
                     * @param _deviceList 设备唯一标识列表
                     * 
                     */
                    void SetDeviceList(const std::vector<std::string>& _deviceList);

                    /**
                     * 判断参数 DeviceList 是否已赋值
                     * @return DeviceList 是否已赋值
                     * 
                     */
                    bool DeviceListHasBeenSet() const;

                private:

                    /**
                     * 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 设备唯一标识列表
                     */
                    std::vector<std::string> m_deviceList;
                    bool m_deviceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_BINDGROUPDEVICESREQUEST_H_
