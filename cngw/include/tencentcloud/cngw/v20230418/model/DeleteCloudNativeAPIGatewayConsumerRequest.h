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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DELETECLOUDNATIVEAPIGATEWAYCONSUMERREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DELETECLOUDNATIVEAPIGATEWAYCONSUMERREQUEST_H_

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
                * DeleteCloudNativeAPIGatewayConsumer请求参数结构体
                */
                class DeleteCloudNativeAPIGatewayConsumerRequest : public AbstractModel
                {
                public:
                    DeleteCloudNativeAPIGatewayConsumerRequest();
                    ~DeleteCloudNativeAPIGatewayConsumerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关实例id
                     * @return GatewayId 网关实例id
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关实例id
                     * @param _gatewayId 网关实例id
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
                     * 获取消费者ID<p>CustomOrganization 仅允许手工/存量消费者，拒绝目录来源、非空 SyncSourceId、Public 和只读保留对象，即使原源已删除也不借此入口清理。删除复用原依赖检查及全归属/凭证/授权清理，Legacy 原行为不变。成功响应不新增 Result。</p>
                     * @return ConsumerId 消费者ID<p>CustomOrganization 仅允许手工/存量消费者，拒绝目录来源、非空 SyncSourceId、Public 和只读保留对象，即使原源已删除也不借此入口清理。删除复用原依赖检查及全归属/凭证/授权清理，Legacy 原行为不变。成功响应不新增 Result。</p>
                     * 
                     */
                    std::string GetConsumerId() const;

                    /**
                     * 设置消费者ID<p>CustomOrganization 仅允许手工/存量消费者，拒绝目录来源、非空 SyncSourceId、Public 和只读保留对象，即使原源已删除也不借此入口清理。删除复用原依赖检查及全归属/凭证/授权清理，Legacy 原行为不变。成功响应不新增 Result。</p>
                     * @param _consumerId 消费者ID<p>CustomOrganization 仅允许手工/存量消费者，拒绝目录来源、非空 SyncSourceId、Public 和只读保留对象，即使原源已删除也不借此入口清理。删除复用原依赖检查及全归属/凭证/授权清理，Legacy 原行为不变。成功响应不新增 Result。</p>
                     * 
                     */
                    void SetConsumerId(const std::string& _consumerId);

                    /**
                     * 判断参数 ConsumerId 是否已赋值
                     * @return ConsumerId 是否已赋值
                     * 
                     */
                    bool ConsumerIdHasBeenSet() const;

                    /**
                     * 获取<p>调用业务来源，可选 Legacy 或 CustomOrganization；省略或空串按 Legacy。Legacy 保持原行为，CustomOrganization 用于自定义组织架构。该字段不替代鉴权，不改变资源归属，不覆盖 RequestSource。来源保存在操作记录请求内容中。</p>
                     * @return OperationSource <p>调用业务来源，可选 Legacy 或 CustomOrganization；省略或空串按 Legacy。Legacy 保持原行为，CustomOrganization 用于自定义组织架构。该字段不替代鉴权，不改变资源归属，不覆盖 RequestSource。来源保存在操作记录请求内容中。</p>
                     * 
                     */
                    std::string GetOperationSource() const;

                    /**
                     * 设置<p>调用业务来源，可选 Legacy 或 CustomOrganization；省略或空串按 Legacy。Legacy 保持原行为，CustomOrganization 用于自定义组织架构。该字段不替代鉴权，不改变资源归属，不覆盖 RequestSource。来源保存在操作记录请求内容中。</p>
                     * @param _operationSource <p>调用业务来源，可选 Legacy 或 CustomOrganization；省略或空串按 Legacy。Legacy 保持原行为，CustomOrganization 用于自定义组织架构。该字段不替代鉴权，不改变资源归属，不覆盖 RequestSource。来源保存在操作记录请求内容中。</p>
                     * 
                     */
                    void SetOperationSource(const std::string& _operationSource);

                    /**
                     * 判断参数 OperationSource 是否已赋值
                     * @return OperationSource 是否已赋值
                     * 
                     */
                    bool OperationSourceHasBeenSet() const;

                private:

                    /**
                     * 网关实例id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 消费者ID<p>CustomOrganization 仅允许手工/存量消费者，拒绝目录来源、非空 SyncSourceId、Public 和只读保留对象，即使原源已删除也不借此入口清理。删除复用原依赖检查及全归属/凭证/授权清理，Legacy 原行为不变。成功响应不新增 Result。</p>
                     */
                    std::string m_consumerId;
                    bool m_consumerIdHasBeenSet;

                    /**
                     * <p>调用业务来源，可选 Legacy 或 CustomOrganization；省略或空串按 Legacy。Legacy 保持原行为，CustomOrganization 用于自定义组织架构。该字段不替代鉴权，不改变资源归属，不覆盖 RequestSource。来源保存在操作记录请求内容中。</p>
                     */
                    std::string m_operationSource;
                    bool m_operationSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DELETECLOUDNATIVEAPIGATEWAYCONSUMERREQUEST_H_
