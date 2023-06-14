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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_BINDDEVICESREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_BINDDEVICESREQUEST_H_

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
                * BindDevices请求参数结构体
                */
                class BindDevicesRequest : public AbstractModel
                {
                public:
                    BindDevicesRequest();
                    ~BindDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关设备的产品ID
                     * @return GatewayProductId 网关设备的产品ID
                     * 
                     */
                    std::string GetGatewayProductId() const;

                    /**
                     * 设置网关设备的产品ID
                     * @param _gatewayProductId 网关设备的产品ID
                     * 
                     */
                    void SetGatewayProductId(const std::string& _gatewayProductId);

                    /**
                     * 判断参数 GatewayProductId 是否已赋值
                     * @return GatewayProductId 是否已赋值
                     * 
                     */
                    bool GatewayProductIdHasBeenSet() const;

                    /**
                     * 获取网关设备的设备名
                     * @return GatewayDeviceName 网关设备的设备名
                     * 
                     */
                    std::string GetGatewayDeviceName() const;

                    /**
                     * 设置网关设备的设备名
                     * @param _gatewayDeviceName 网关设备的设备名
                     * 
                     */
                    void SetGatewayDeviceName(const std::string& _gatewayDeviceName);

                    /**
                     * 判断参数 GatewayDeviceName 是否已赋值
                     * @return GatewayDeviceName 是否已赋值
                     * 
                     */
                    bool GatewayDeviceNameHasBeenSet() const;

                    /**
                     * 获取被绑定设备的产品ID
                     * @return ProductId 被绑定设备的产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置被绑定设备的产品ID
                     * @param _productId 被绑定设备的产品ID
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
                     * 获取被绑定的多个设备名
                     * @return DeviceNames 被绑定的多个设备名
                     * 
                     */
                    std::vector<std::string> GetDeviceNames() const;

                    /**
                     * 设置被绑定的多个设备名
                     * @param _deviceNames 被绑定的多个设备名
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
                     * 获取中兴CLAA设备的绑定需要skey，普通的设备不需要
                     * @return Skey 中兴CLAA设备的绑定需要skey，普通的设备不需要
                     * 
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置中兴CLAA设备的绑定需要skey，普通的设备不需要
                     * @param _skey 中兴CLAA设备的绑定需要skey，普通的设备不需要
                     * 
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     * 
                     */
                    bool SkeyHasBeenSet() const;

                private:

                    /**
                     * 网关设备的产品ID
                     */
                    std::string m_gatewayProductId;
                    bool m_gatewayProductIdHasBeenSet;

                    /**
                     * 网关设备的设备名
                     */
                    std::string m_gatewayDeviceName;
                    bool m_gatewayDeviceNameHasBeenSet;

                    /**
                     * 被绑定设备的产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 被绑定的多个设备名
                     */
                    std::vector<std::string> m_deviceNames;
                    bool m_deviceNamesHasBeenSet;

                    /**
                     * 中兴CLAA设备的绑定需要skey，普通的设备不需要
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_BINDDEVICESREQUEST_H_
