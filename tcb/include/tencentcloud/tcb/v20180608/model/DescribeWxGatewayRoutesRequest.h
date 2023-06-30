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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXGATEWAYROUTESREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXGATEWAYROUTESREQUEST_H_

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
                * DescribeWxGatewayRoutes请求参数结构体
                */
                class DescribeWxGatewayRoutesRequest : public AbstractModel
                {
                public:
                    DescribeWxGatewayRoutesRequest();
                    ~DescribeWxGatewayRoutesRequest() = default;
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
                     * @return GatewayId 网关名称
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关名称
                     * @param _gatewayId 网关名称
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取网关路由名称
                     * @return GatewayRouteName 网关路由名称
                     * 
                     */
                    std::string GetGatewayRouteName() const;

                    /**
                     * 设置网关路由名称
                     * @param _gatewayRouteName 网关路由名称
                     * 
                     */
                    void SetGatewayRouteName(const std::string& _gatewayRouteName);

                    /**
                     * 判断参数 GatewayRouteName 是否已赋值
                     * @return GatewayRouteName 是否已赋值
                     * 
                     */
                    bool GatewayRouteNameHasBeenSet() const;

                    /**
                     * 获取网关版本名
                     * @return GatewayVersion 网关版本名
                     * 
                     */
                    std::string GetGatewayVersion() const;

                    /**
                     * 设置网关版本名
                     * @param _gatewayVersion 网关版本名
                     * 
                     */
                    void SetGatewayVersion(const std::string& _gatewayVersion);

                    /**
                     * 判断参数 GatewayVersion 是否已赋值
                     * @return GatewayVersion 是否已赋值
                     * 
                     */
                    bool GatewayVersionHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 网关名称
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 网关路由名称
                     */
                    std::string m_gatewayRouteName;
                    bool m_gatewayRouteNameHasBeenSet;

                    /**
                     * 网关版本名
                     */
                    std::string m_gatewayVersion;
                    bool m_gatewayVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXGATEWAYROUTESREQUEST_H_
