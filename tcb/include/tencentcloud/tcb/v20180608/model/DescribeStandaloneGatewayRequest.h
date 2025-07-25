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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBESTANDALONEGATEWAYREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBESTANDALONEGATEWAYREQUEST_H_

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
                * DescribeStandaloneGateway请求参数结构体
                */
                class DescribeStandaloneGatewayRequest : public AbstractModel
                {
                public:
                    DescribeStandaloneGatewayRequest();
                    ~DescribeStandaloneGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取网关名称
                     * @return GatewayName 网关名称
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 设置网关名称
                     * @param _gatewayName 网关名称
                     * 
                     */
                    void SetGatewayName(const std::string& _gatewayName);

                    /**
                     * 判断参数 GatewayName 是否已赋值
                     * @return GatewayName 是否已赋值
                     * 
                     */
                    bool GatewayNameHasBeenSet() const;

                    /**
                     * 获取网关别名
                     * @return GatewayAlias 网关别名
                     * 
                     */
                    std::string GetGatewayAlias() const;

                    /**
                     * 设置网关别名
                     * @param _gatewayAlias 网关别名
                     * 
                     */
                    void SetGatewayAlias(const std::string& _gatewayAlias);

                    /**
                     * 判断参数 GatewayAlias 是否已赋值
                     * @return GatewayAlias 是否已赋值
                     * 
                     */
                    bool GatewayAliasHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 网关名称
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * 网关别名
                     */
                    std::string m_gatewayAlias;
                    bool m_gatewayAliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBESTANDALONEGATEWAYREQUEST_H_
