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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEIOTDEVICEREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEIOTDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeIotDevice请求参数结构体
                */
                class DescribeIotDeviceRequest : public AbstractModel
                {
                public:
                    DescribeIotDeviceRequest();
                    ~DescribeIotDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备id，传0值表示此参数无效
                     * @return DeviceId 设备id，传0值表示此参数无效
                     * 
                     */
                    int64_t GetDeviceId() const;

                    /**
                     * 设置设备id，传0值表示此参数无效
                     * @param _deviceId 设备id，传0值表示此参数无效
                     * 
                     */
                    void SetDeviceId(const int64_t& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取无
                     * @return ProductID 无
                     * 
                     */
                    std::string GetProductID() const;

                    /**
                     * 设置无
                     * @param _productID 无
                     * 
                     */
                    void SetProductID(const std::string& _productID);

                    /**
                     * 判断参数 ProductID 是否已赋值
                     * @return ProductID 是否已赋值
                     * 
                     */
                    bool ProductIDHasBeenSet() const;

                    /**
                     * 获取无
                     * @return DeviceName 无
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置无
                     * @param _deviceName 无
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                private:

                    /**
                     * 设备id，传0值表示此参数无效
                     */
                    int64_t m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_productID;
                    bool m_productIDHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEIOTDEVICEREQUEST_H_
