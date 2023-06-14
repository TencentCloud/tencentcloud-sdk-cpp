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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETELORAGATEWAYREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETELORAGATEWAYREQUEST_H_

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
                * DeleteLoRaGateway请求参数结构体
                */
                class DeleteLoRaGatewayRequest : public AbstractModel
                {
                public:
                    DeleteLoRaGatewayRequest();
                    ~DeleteLoRaGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取LoRa 网关 Id
                     * @return GatewayId LoRa 网关 Id
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置LoRa 网关 Id
                     * @param _gatewayId LoRa 网关 Id
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                private:

                    /**
                     * LoRa 网关 Id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETELORAGATEWAYREQUEST_H_
