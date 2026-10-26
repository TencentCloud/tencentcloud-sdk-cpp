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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCONSUMERLISTREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCONSUMERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewayConsumerList请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayConsumerListRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayConsumerListRequest();
                    ~DescribeCloudNativeAPIGatewayConsumerListRequest() = default;
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
                     * 获取<p>页显示条数，最大20</p>
                     * @return Limit <p>页显示条数，最大20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>页显示条数，最大20</p>
                     * @param _limit <p>页显示条数，最大20</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>起始位置</p>
                     * @return Offset <p>起始位置</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>起始位置</p>
                     * @param _offset <p>起始位置</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>资源类型</p><p>枚举值：</p><ul><li>ModelAPI： 模型API</li><li>MCPServer： MCP服务</li></ul>
                     * @return ResourceType <p>资源类型</p><p>枚举值：</p><ul><li>ModelAPI： 模型API</li><li>MCPServer： MCP服务</li></ul>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型</p><p>枚举值：</p><ul><li>ModelAPI： 模型API</li><li>MCPServer： MCP服务</li></ul>
                     * @param _resourceType <p>资源类型</p><p>枚举值：</p><ul><li>ModelAPI： 模型API</li><li>MCPServer： MCP服务</li></ul>
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
                     * 获取<p>资源ID</p>
                     * @return ResourceId <p>资源ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID</p>
                     * @param _resourceId <p>资源ID</p>
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
                     * 获取<p>消费者来源筛选：manual / sync（小写），与现有控制面校验一致。</p>
                     * @return Origin <p>消费者来源筛选：manual / sync（小写），与现有控制面校验一致。</p>
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置<p>消费者来源筛选：manual / sync（小写），与现有控制面校验一致。</p>
                     * @param _origin <p>消费者来源筛选：manual / sync（小写），与现有控制面校验一致。</p>
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取<p>目录消费者状态筛选：active / disabled / soft_deleted（小写）。</p>
                     * @return Status <p>目录消费者状态筛选：active / disabled / soft_deleted（小写）。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>目录消费者状态筛选：active / disabled / soft_deleted（小写）。</p>
                     * @param _status <p>目录消费者状态筛选：active / disabled / soft_deleted（小写）。</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>仅查询指定同步源产生的消费者。</p>
                     * @return SyncSourceId <p>仅查询指定同步源产生的消费者。</p>
                     * 
                     */
                    std::string GetSyncSourceId() const;

                    /**
                     * 设置<p>仅查询指定同步源产生的消费者。</p>
                     * @param _syncSourceId <p>仅查询指定同步源产生的消费者。</p>
                     * 
                     */
                    void SetSyncSourceId(const std::string& _syncSourceId);

                    /**
                     * 判断参数 SyncSourceId 是否已赋值
                     * @return SyncSourceId 是否已赋值
                     * 
                     */
                    bool SyncSourceIdHasBeenSet() const;

                    /**
                     * 获取<p>仅查询不属于外部同步源的消费者；不能与 SyncSourceId 同时设置。</p>
                     * @return WithoutSyncSource <p>仅查询不属于外部同步源的消费者；不能与 SyncSourceId 同时设置。</p>
                     * 
                     */
                    bool GetWithoutSyncSource() const;

                    /**
                     * 设置<p>仅查询不属于外部同步源的消费者；不能与 SyncSourceId 同时设置。</p>
                     * @param _withoutSyncSource <p>仅查询不属于外部同步源的消费者；不能与 SyncSourceId 同时设置。</p>
                     * 
                     */
                    void SetWithoutSyncSource(const bool& _withoutSyncSource);

                    /**
                     * 判断参数 WithoutSyncSource 是否已赋值
                     * @return WithoutSyncSource 是否已赋值
                     * 
                     */
                    bool WithoutSyncSourceHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例id</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>页显示条数，最大20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>起始位置</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>资源类型</p><p>枚举值：</p><ul><li>ModelAPI： 模型API</li><li>MCPServer： MCP服务</li></ul>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>资源ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>消费者来源筛选：manual / sync（小写），与现有控制面校验一致。</p>
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * <p>目录消费者状态筛选：active / disabled / soft_deleted（小写）。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>仅查询指定同步源产生的消费者。</p>
                     */
                    std::string m_syncSourceId;
                    bool m_syncSourceIdHasBeenSet;

                    /**
                     * <p>仅查询不属于外部同步源的消费者；不能与 SyncSourceId 同时设置。</p>
                     */
                    bool m_withoutSyncSource;
                    bool m_withoutSyncSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCONSUMERLISTREQUEST_H_
