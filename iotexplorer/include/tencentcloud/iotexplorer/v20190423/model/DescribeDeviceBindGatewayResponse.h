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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICEBINDGATEWAYRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICEBINDGATEWAYRESPONSE_H_

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
                * DescribeDeviceBindGateway返回参数结构体
                */
                class DescribeDeviceBindGatewayResponse : public AbstractModel
                {
                public:
                    DescribeDeviceBindGatewayResponse();
                    ~DescribeDeviceBindGatewayResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取网关产品ID
                     * @return GatewayProductId 网关产品ID
                     * 
                     */
                    std::string GetGatewayProductId() const;

                    /**
                     * 判断参数 GatewayProductId 是否已赋值
                     * @return GatewayProductId 是否已赋值
                     * 
                     */
                    bool GatewayProductIdHasBeenSet() const;

                    /**
                     * 获取网关设备名
                     * @return GatewayDeviceName 网关设备名
                     * 
                     */
                    std::string GetGatewayDeviceName() const;

                    /**
                     * 判断参数 GatewayDeviceName 是否已赋值
                     * @return GatewayDeviceName 是否已赋值
                     * 
                     */
                    bool GatewayDeviceNameHasBeenSet() const;

                    /**
                     * 获取网关产品名称
                     * @return GatewayName 网关产品名称
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 判断参数 GatewayName 是否已赋值
                     * @return GatewayName 是否已赋值
                     * 
                     */
                    bool GatewayNameHasBeenSet() const;

                    /**
                     * 获取设备对应产品所属的主账号名称
                     * @return GatewayProductOwnerName 设备对应产品所属的主账号名称
                     * 
                     */
                    std::string GetGatewayProductOwnerName() const;

                    /**
                     * 判断参数 GatewayProductOwnerName 是否已赋值
                     * @return GatewayProductOwnerName 是否已赋值
                     * 
                     */
                    bool GatewayProductOwnerNameHasBeenSet() const;

                    /**
                     * 获取设备对应产品所属的主账号 UIN
                     * @return GatewayProductOwnerUin 设备对应产品所属的主账号 UIN
                     * 
                     */
                    std::string GetGatewayProductOwnerUin() const;

                    /**
                     * 判断参数 GatewayProductOwnerUin 是否已赋值
                     * @return GatewayProductOwnerUin 是否已赋值
                     * 
                     */
                    bool GatewayProductOwnerUinHasBeenSet() const;

                private:

                    /**
                     * 网关产品ID
                     */
                    std::string m_gatewayProductId;
                    bool m_gatewayProductIdHasBeenSet;

                    /**
                     * 网关设备名
                     */
                    std::string m_gatewayDeviceName;
                    bool m_gatewayDeviceNameHasBeenSet;

                    /**
                     * 网关产品名称
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * 设备对应产品所属的主账号名称
                     */
                    std::string m_gatewayProductOwnerName;
                    bool m_gatewayProductOwnerNameHasBeenSet;

                    /**
                     * 设备对应产品所属的主账号 UIN
                     */
                    std::string m_gatewayProductOwnerUin;
                    bool m_gatewayProductOwnerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICEBINDGATEWAYRESPONSE_H_
