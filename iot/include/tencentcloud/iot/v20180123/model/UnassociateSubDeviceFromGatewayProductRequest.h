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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_UNASSOCIATESUBDEVICEFROMGATEWAYPRODUCTREQUEST_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_UNASSOCIATESUBDEVICEFROMGATEWAYPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * UnassociateSubDeviceFromGatewayProduct请求参数结构体
                */
                class UnassociateSubDeviceFromGatewayProductRequest : public AbstractModel
                {
                public:
                    UnassociateSubDeviceFromGatewayProductRequest();
                    ~UnassociateSubDeviceFromGatewayProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子设备产品Id
                     * @return SubDeviceProductId 子设备产品Id
                     * 
                     */
                    std::string GetSubDeviceProductId() const;

                    /**
                     * 设置子设备产品Id
                     * @param _subDeviceProductId 子设备产品Id
                     * 
                     */
                    void SetSubDeviceProductId(const std::string& _subDeviceProductId);

                    /**
                     * 判断参数 SubDeviceProductId 是否已赋值
                     * @return SubDeviceProductId 是否已赋值
                     * 
                     */
                    bool SubDeviceProductIdHasBeenSet() const;

                    /**
                     * 获取网关设备产品Id
                     * @return GatewayProductId 网关设备产品Id
                     * 
                     */
                    std::string GetGatewayProductId() const;

                    /**
                     * 设置网关设备产品Id
                     * @param _gatewayProductId 网关设备产品Id
                     * 
                     */
                    void SetGatewayProductId(const std::string& _gatewayProductId);

                    /**
                     * 判断参数 GatewayProductId 是否已赋值
                     * @return GatewayProductId 是否已赋值
                     * 
                     */
                    bool GatewayProductIdHasBeenSet() const;

                private:

                    /**
                     * 子设备产品Id
                     */
                    std::string m_subDeviceProductId;
                    bool m_subDeviceProductIdHasBeenSet;

                    /**
                     * 网关设备产品Id
                     */
                    std::string m_gatewayProductId;
                    bool m_gatewayProductIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_UNASSOCIATESUBDEVICEFROMGATEWAYPRODUCTREQUEST_H_
