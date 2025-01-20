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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEDIRECTCONNECTGATEWAYRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEDIRECTCONNECTGATEWAYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/DirectConnectGateway.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateDirectConnectGateway返回参数结构体
                */
                class CreateDirectConnectGatewayResponse : public AbstractModel
                {
                public:
                    CreateDirectConnectGatewayResponse();
                    ~CreateDirectConnectGatewayResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取专线网关对象。
                     * @return DirectConnectGateway 专线网关对象。
                     * 
                     */
                    DirectConnectGateway GetDirectConnectGateway() const;

                    /**
                     * 判断参数 DirectConnectGateway 是否已赋值
                     * @return DirectConnectGateway 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayHasBeenSet() const;

                private:

                    /**
                     * 专线网关对象。
                     */
                    DirectConnectGateway m_directConnectGateway;
                    bool m_directConnectGatewayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEDIRECTCONNECTGATEWAYRESPONSE_H_
