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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEDEVICESENABLESTATEREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEDEVICESENABLESTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * UpdateDevicesEnableState请求参数结构体
                */
                class UpdateDevicesEnableStateRequest : public AbstractModel
                {
                public:
                    UpdateDevicesEnableStateRequest();
                    ~UpdateDevicesEnableStateRequest() = default;
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
                     * 获取设备名称集合
                     * @return DeviceNames 设备名称集合
                     * 
                     */
                    std::vector<std::string> GetDeviceNames() const;

                    /**
                     * 设置设备名称集合
                     * @param _deviceNames 设备名称集合
                     * 
                     */
                    void SetDeviceNames(const std::vector<std::string>& _deviceNames);

                    /**
                     * 判断参数 DeviceNames 是否已赋值
                     * @return DeviceNames 是否已赋值
                     * 
                     */
                    bool DeviceNamesHasBeenSet() const;

                    /**
                     * 获取要设置的设备状态，1为启用，0为禁用
                     * @return Status 要设置的设备状态，1为启用，0为禁用
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置要设置的设备状态，1为启用，0为禁用
                     * @param _status 要设置的设备状态，1为启用，0为禁用
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 设备所属产品id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称集合
                     */
                    std::vector<std::string> m_deviceNames;
                    bool m_deviceNamesHasBeenSet;

                    /**
                     * 要设置的设备状态，1为启用，0为禁用
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEDEVICESENABLESTATEREQUEST_H_
