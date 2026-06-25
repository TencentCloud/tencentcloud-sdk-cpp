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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYMCPSERVERACLREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYMCPSERVERACLREQUEST_H_

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
                * ModifyCloudNativeAPIGatewayMCPServerACL请求参数结构体
                */
                class ModifyCloudNativeAPIGatewayMCPServerACLRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayMCPServerACLRequest();
                    ~ModifyCloudNativeAPIGatewayMCPServerACLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关实例ID</p>
                     * @return GatewayId <p>网关实例ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关实例ID</p>
                     * @param _gatewayId <p>网关实例ID</p>
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

                    /**
                     * 获取<p>ACL类型</p><p>枚举值：</p><ul><li>None： 不开启</li><li>Allow： 白名单</li><li>Deny： 黑名单</li></ul><p>默认值：None</p>
                     * @return ACLType <p>ACL类型</p><p>枚举值：</p><ul><li>None： 不开启</li><li>Allow： 白名单</li><li>Deny： 黑名单</li></ul><p>默认值：None</p>
                     * 
                     */
                    std::string GetACLType() const;

                    /**
                     * 设置<p>ACL类型</p><p>枚举值：</p><ul><li>None： 不开启</li><li>Allow： 白名单</li><li>Deny： 黑名单</li></ul><p>默认值：None</p>
                     * @param _aCLType <p>ACL类型</p><p>枚举值：</p><ul><li>None： 不开启</li><li>Allow： 白名单</li><li>Deny： 黑名单</li></ul><p>默认值：None</p>
                     * 
                     */
                    void SetACLType(const std::string& _aCLType);

                    /**
                     * 判断参数 ACLType 是否已赋值
                     * @return ACLType 是否已赋值
                     * 
                     */
                    bool ACLTypeHasBeenSet() const;

                    /**
                     * 获取<p>需要关联的消费者ID列表</p>
                     * @return ACLConsumerIds <p>需要关联的消费者ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetACLConsumerIds() const;

                    /**
                     * 设置<p>需要关联的消费者ID列表</p>
                     * @param _aCLConsumerIds <p>需要关联的消费者ID列表</p>
                     * 
                     */
                    void SetACLConsumerIds(const std::vector<std::string>& _aCLConsumerIds);

                    /**
                     * 判断参数 ACLConsumerIds 是否已赋值
                     * @return ACLConsumerIds 是否已赋值
                     * 
                     */
                    bool ACLConsumerIdsHasBeenSet() const;

                    /**
                     * 获取<p>需要关联的消费者组ID列表</p>
                     * @return ACLConsumerGroupIds <p>需要关联的消费者组ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetACLConsumerGroupIds() const;

                    /**
                     * 设置<p>需要关联的消费者组ID列表</p>
                     * @param _aCLConsumerGroupIds <p>需要关联的消费者组ID列表</p>
                     * 
                     */
                    void SetACLConsumerGroupIds(const std::vector<std::string>& _aCLConsumerGroupIds);

                    /**
                     * 判断参数 ACLConsumerGroupIds 是否已赋值
                     * @return ACLConsumerGroupIds 是否已赋值
                     * 
                     */
                    bool ACLConsumerGroupIdsHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>MCP服务ID</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                    /**
                     * <p>ACL类型</p><p>枚举值：</p><ul><li>None： 不开启</li><li>Allow： 白名单</li><li>Deny： 黑名单</li></ul><p>默认值：None</p>
                     */
                    std::string m_aCLType;
                    bool m_aCLTypeHasBeenSet;

                    /**
                     * <p>需要关联的消费者ID列表</p>
                     */
                    std::vector<std::string> m_aCLConsumerIds;
                    bool m_aCLConsumerIdsHasBeenSet;

                    /**
                     * <p>需要关联的消费者组ID列表</p>
                     */
                    std::vector<std::string> m_aCLConsumerGroupIds;
                    bool m_aCLConsumerGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYMCPSERVERACLREQUEST_H_
