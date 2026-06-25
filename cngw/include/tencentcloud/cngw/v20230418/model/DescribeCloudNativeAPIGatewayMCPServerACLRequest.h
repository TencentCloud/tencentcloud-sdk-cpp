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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYMCPSERVERACLREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYMCPSERVERACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewayMCPServerACL请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayMCPServerACLRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayMCPServerACLRequest();
                    ~DescribeCloudNativeAPIGatewayMCPServerACLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关实例 ID</p>
                     * @return GatewayId <p>网关实例 ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关实例 ID</p>
                     * @param _gatewayId <p>网关实例 ID</p>
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
                     * 获取<p>MCP服务ID</p>
                     * @return ServerId <p>MCP服务ID</p>
                     * 
                     */
                    std::string GetServerId() const;

                    /**
                     * 设置<p>MCP服务ID</p>
                     * @param _serverId <p>MCP服务ID</p>
                     * 
                     */
                    void SetServerId(const std::string& _serverId);

                    /**
                     * 判断参数 ServerId 是否已赋值
                     * @return ServerId 是否已赋值
                     * 
                     */
                    bool ServerIdHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>MCP服务ID</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYMCPSERVERACLREQUEST_H_
