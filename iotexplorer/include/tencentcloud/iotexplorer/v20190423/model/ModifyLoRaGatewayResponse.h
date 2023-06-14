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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYLORAGATEWAYRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYLORAGATEWAYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/LoRaGatewayItem.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * ModifyLoRaGateway返回参数结构体
                */
                class ModifyLoRaGatewayResponse : public AbstractModel
                {
                public:
                    ModifyLoRaGatewayResponse();
                    ~ModifyLoRaGatewayResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回网关数据
                     * @return Gateway 返回网关数据
                     * 
                     */
                    LoRaGatewayItem GetGateway() const;

                    /**
                     * 判断参数 Gateway 是否已赋值
                     * @return Gateway 是否已赋值
                     * 
                     */
                    bool GatewayHasBeenSet() const;

                private:

                    /**
                     * 返回网关数据
                     */
                    LoRaGatewayItem m_gateway;
                    bool m_gatewayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYLORAGATEWAYRESPONSE_H_
