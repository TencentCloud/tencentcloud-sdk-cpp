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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_UPDATEDEVICEAVAILABLESTATEREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_UPDATEDEVICEAVAILABLESTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * UpdateDeviceAvailableState请求参数结构体
                */
                class UpdateDeviceAvailableStateRequest : public AbstractModel
                {
                public:
                    UpdateDeviceAvailableStateRequest();
                    ~UpdateDeviceAvailableStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备所属产品id
                     * @return ProductId 设备所属产品id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置设备所属产品id
                     * @param _productId 设备所属产品id
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

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
                     * 获取要设置的设备状态，1为启用，0为禁用
                     * @return EnableState 要设置的设备状态，1为启用，0为禁用
                     * 
                     */
                    uint64_t GetEnableState() const;

                    /**
                     * 设置要设置的设备状态，1为启用，0为禁用
                     * @param _enableState 要设置的设备状态，1为启用，0为禁用
                     * 
                     */
                    void SetEnableState(const uint64_t& _enableState);

                    /**
                     * 判断参数 EnableState 是否已赋值
                     * @return EnableState 是否已赋值
                     * 
                     */
                    bool EnableStateHasBeenSet() const;

                private:

                    /**
                     * 设备所属产品id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 要设置的设备状态，1为启用，0为禁用
                     */
                    uint64_t m_enableState;
                    bool m_enableStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_UPDATEDEVICEAVAILABLESTATEREQUEST_H_
