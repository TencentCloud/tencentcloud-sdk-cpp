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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEDEVICEPSKREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEDEVICEPSKREQUEST_H_

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
                * UpdateDevicePSK请求参数结构体
                */
                class UpdateDevicePSKRequest : public AbstractModel
                {
                public:
                    UpdateDevicePSKRequest();
                    ~UpdateDevicePSKRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品名
                     * @return ProductId 产品名
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品名
                     * @param ProductId 产品名
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取设备名
                     * @return DeviceName 设备名
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名
                     * @param DeviceName 设备名
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取设备的psk
                     * @return Psk 设备的psk
                     */
                    std::string GetPsk() const;

                    /**
                     * 设置设备的psk
                     * @param Psk 设备的psk
                     */
                    void SetPsk(const std::string& _psk);

                    /**
                     * 判断参数 Psk 是否已赋值
                     * @return Psk 是否已赋值
                     */
                    bool PskHasBeenSet() const;

                private:

                    /**
                     * 产品名
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备的psk
                     */
                    std::string m_psk;
                    bool m_pskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEDEVICEPSKREQUEST_H_
