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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UNBINDPRODUCTSRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UNBINDPRODUCTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * UnbindProducts返回参数结构体
                */
                class UnbindProductsResponse : public AbstractModel
                {
                public:
                    UnbindProductsResponse();
                    ~UnbindProductsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取绑定了待解绑的LoRa产品下的设备的网关设备列表
                     * @return GatewayDeviceNames 绑定了待解绑的LoRa产品下的设备的网关设备列表
                     * 
                     */
                    std::vector<std::string> GetGatewayDeviceNames() const;

                    /**
                     * 判断参数 GatewayDeviceNames 是否已赋值
                     * @return GatewayDeviceNames 是否已赋值
                     * 
                     */
                    bool GatewayDeviceNamesHasBeenSet() const;

                private:

                    /**
                     * 绑定了待解绑的LoRa产品下的设备的网关设备列表
                     */
                    std::vector<std::string> m_gatewayDeviceNames;
                    bool m_gatewayDeviceNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UNBINDPRODUCTSRESPONSE_H_
