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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DELETEDEVICEREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DELETEDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * DeleteDevice请求参数结构体
                */
                class DeleteDeviceRequest : public AbstractModel
                {
                public:
                    DeleteDeviceRequest();
                    ~DeleteDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取删除设备的唯一ID
                     * @return DeviceId 删除设备的唯一ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置删除设备的唯一ID
                     * @param _deviceId 删除设备的唯一ID
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
                     * 删除设备的唯一ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DELETEDEVICEREQUEST_H_
