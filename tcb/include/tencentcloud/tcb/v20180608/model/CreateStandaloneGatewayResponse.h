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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATESTANDALONEGATEWAYRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATESTANDALONEGATEWAYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateStandaloneGateway返回参数结构体
                */
                class CreateStandaloneGatewayResponse : public AbstractModel
                {
                public:
                    CreateStandaloneGatewayResponse();
                    ~CreateStandaloneGatewayResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取网关名称
                     * @return GatewayName 网关名称
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 判断参数 GatewayName 是否已赋值
                     * @return GatewayName 是否已赋值
                     * 
                     */
                    bool GatewayNameHasBeenSet() const;

                private:

                    /**
                     * 网关名称
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATESTANDALONEGATEWAYRESPONSE_H_
