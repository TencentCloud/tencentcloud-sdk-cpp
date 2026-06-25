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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_REMOVECLOUDNATIVEAPIGATEWAYCONSUMERGROUPAUTHREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_REMOVECLOUDNATIVEAPIGATEWAYCONSUMERGROUPAUTHREQUEST_H_

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
                * RemoveCloudNativeAPIGatewayConsumerGroupAuth请求参数结构体
                */
                class RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest : public AbstractModel
                {
                public:
                    RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest();
                    ~RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关实例id</p>
                     * @return GatewayId <p>网关实例id</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关实例id</p>
                     * @param _gatewayId <p>网关实例id</p>
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
                     * 获取<p>授权资源类型。</p><p>枚举值：</p><ul><li>ModelAPI：模型 API</li><li>MCPServer：MCP Server</li></ul>
                     * @return ResourceType <p>授权资源类型。</p><p>枚举值：</p><ul><li>ModelAPI：模型 API</li><li>MCPServer：MCP Server</li></ul>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>授权资源类型。</p><p>枚举值：</p><ul><li>ModelAPI：模型 API</li><li>MCPServer：MCP Server</li></ul>
                     * @param _resourceType <p>授权资源类型。</p><p>枚举值：</p><ul><li>ModelAPI：模型 API</li><li>MCPServer：MCP Server</li></ul>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>对应资源的 ID。</p><ul><li>ResourceType=ModelAPI 时是模型 API ID</li><li>ResourceType=MCPServer 时是 MCP Server ID</li></ul>
                     * @return ResourceId <p>对应资源的 ID。</p><ul><li>ResourceType=ModelAPI 时是模型 API ID</li><li>ResourceType=MCPServer 时是 MCP Server ID</li></ul>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>对应资源的 ID。</p><ul><li>ResourceType=ModelAPI 时是模型 API ID</li><li>ResourceType=MCPServer 时是 MCP Server ID</li></ul>
                     * @param _resourceId <p>对应资源的 ID。</p><ul><li>ResourceType=ModelAPI 时是模型 API ID</li><li>ResourceType=MCPServer 时是 MCP Server ID</li></ul>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>消费者组 ID 列表（每个 ID 以 cg- 开头），长度 1-10。</p>
                     * @return ConsumerGroupIds <p>消费者组 ID 列表（每个 ID 以 cg- 开头），长度 1-10。</p>
                     * 
                     */
                    std::vector<std::string> GetConsumerGroupIds() const;

                    /**
                     * 设置<p>消费者组 ID 列表（每个 ID 以 cg- 开头），长度 1-10。</p>
                     * @param _consumerGroupIds <p>消费者组 ID 列表（每个 ID 以 cg- 开头），长度 1-10。</p>
                     * 
                     */
                    void SetConsumerGroupIds(const std::vector<std::string>& _consumerGroupIds);

                    /**
                     * 判断参数 ConsumerGroupIds 是否已赋值
                     * @return ConsumerGroupIds 是否已赋值
                     * 
                     */
                    bool ConsumerGroupIdsHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例id</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>授权资源类型。</p><p>枚举值：</p><ul><li>ModelAPI：模型 API</li><li>MCPServer：MCP Server</li></ul>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>对应资源的 ID。</p><ul><li>ResourceType=ModelAPI 时是模型 API ID</li><li>ResourceType=MCPServer 时是 MCP Server ID</li></ul>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>消费者组 ID 列表（每个 ID 以 cg- 开头），长度 1-10。</p>
                     */
                    std::vector<std::string> m_consumerGroupIds;
                    bool m_consumerGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_REMOVECLOUDNATIVEAPIGATEWAYCONSUMERGROUPAUTHREQUEST_H_
