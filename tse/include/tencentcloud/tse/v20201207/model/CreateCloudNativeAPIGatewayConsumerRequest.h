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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCONSUMERREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCONSUMERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/AutoSecretKey.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateCloudNativeAPIGatewayConsumer请求参数结构体
                */
                class CreateCloudNativeAPIGatewayConsumerRequest : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewayConsumerRequest();
                    ~CreateCloudNativeAPIGatewayConsumerRequest() = default;
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
                     * 获取<p>消费者名称，最长 60 字符。同一网关下唯一。</p>
                     * @return Name <p>消费者名称，最长 60 字符。同一网关下唯一。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>消费者名称，最长 60 字符。同一网关下唯一。</p>
                     * @param _name <p>消费者名称，最长 60 字符。同一网关下唯一。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>消费者优先级，默认medium</p><p>枚举值：</p><ul><li>Low： 低优先级</li><li>Medium： 中优先级</li><li>High： 高优先级</li></ul>
                     * @return Priority <p>消费者优先级，默认medium</p><p>枚举值：</p><ul><li>Low： 低优先级</li><li>Medium： 中优先级</li><li>High： 高优先级</li></ul>
                     * 
                     */
                    std::string GetPriority() const;

                    /**
                     * 设置<p>消费者优先级，默认medium</p><p>枚举值：</p><ul><li>Low： 低优先级</li><li>Medium： 中优先级</li><li>High： 高优先级</li></ul>
                     * @param _priority <p>消费者优先级，默认medium</p><p>枚举值：</p><ul><li>Low： 低优先级</li><li>Medium： 中优先级</li><li>High： 高优先级</li></ul>
                     * 
                     */
                    void SetPriority(const std::string& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取<p>消费者描述。最长 200 字符。</p>
                     * @return Description <p>消费者描述。最长 200 字符。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>消费者描述。最长 200 字符。</p>
                     * @param _description <p>消费者描述。最长 200 字符。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>密钥关联方式，三选一枚举。不传时兼容老逻辑（等价于 None 或 Existing，取决于是否传 SecretKeyId）。</p><p>枚举值：</p><ul><li>Existing： 选择已有密钥</li><li>AutoGenerate： 自动生成并关联密钥</li><li>None： 暂不关联密钥</li></ul><p>默认值：None</p>
                     * @return SecretBindType <p>密钥关联方式，三选一枚举。不传时兼容老逻辑（等价于 None 或 Existing，取决于是否传 SecretKeyId）。</p><p>枚举值：</p><ul><li>Existing： 选择已有密钥</li><li>AutoGenerate： 自动生成并关联密钥</li><li>None： 暂不关联密钥</li></ul><p>默认值：None</p>
                     * 
                     */
                    std::string GetSecretBindType() const;

                    /**
                     * 设置<p>密钥关联方式，三选一枚举。不传时兼容老逻辑（等价于 None 或 Existing，取决于是否传 SecretKeyId）。</p><p>枚举值：</p><ul><li>Existing： 选择已有密钥</li><li>AutoGenerate： 自动生成并关联密钥</li><li>None： 暂不关联密钥</li></ul><p>默认值：None</p>
                     * @param _secretBindType <p>密钥关联方式，三选一枚举。不传时兼容老逻辑（等价于 None 或 Existing，取决于是否传 SecretKeyId）。</p><p>枚举值：</p><ul><li>Existing： 选择已有密钥</li><li>AutoGenerate： 自动生成并关联密钥</li><li>None： 暂不关联密钥</li></ul><p>默认值：None</p>
                     * 
                     */
                    void SetSecretBindType(const std::string& _secretBindType);

                    /**
                     * 判断参数 SecretBindType 是否已赋值
                     * @return SecretBindType 是否已赋值
                     * 
                     */
                    bool SecretBindTypeHasBeenSet() const;

                    /**
                     * 获取<p>自动生成密钥的参数体。仅当 SecretBindType=&quot;AutoGenerate&quot; 时必填，其他分支禁止携带，否则返回 InvalidParameterValue.CreateError。</p>
                     * @return AutoSecretKey <p>自动生成密钥的参数体。仅当 SecretBindType=&quot;AutoGenerate&quot; 时必填，其他分支禁止携带，否则返回 InvalidParameterValue.CreateError。</p>
                     * 
                     */
                    AutoSecretKey GetAutoSecretKey() const;

                    /**
                     * 设置<p>自动生成密钥的参数体。仅当 SecretBindType=&quot;AutoGenerate&quot; 时必填，其他分支禁止携带，否则返回 InvalidParameterValue.CreateError。</p>
                     * @param _autoSecretKey <p>自动生成密钥的参数体。仅当 SecretBindType=&quot;AutoGenerate&quot; 时必填，其他分支禁止携带，否则返回 InvalidParameterValue.CreateError。</p>
                     * 
                     */
                    void SetAutoSecretKey(const AutoSecretKey& _autoSecretKey);

                    /**
                     * 判断参数 AutoSecretKey 是否已赋值
                     * @return AutoSecretKey 是否已赋值
                     * 
                     */
                    bool AutoSecretKeyHasBeenSet() const;

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

                    /**
                     * 获取<p>仅 CustomOrganization 使用 Active 或 Disabled，默认 Active。Legacy 不新增状态行为。</p>
                     * @return Status <p>仅 CustomOrganization 使用 Active 或 Disabled，默认 Active。Legacy 不新增状态行为。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>仅 CustomOrganization 使用 Active 或 Disabled，默认 Active。Legacy 不新增状态行为。</p>
                     * @param _status <p>仅 CustomOrganization 使用 Active 或 Disabled，默认 Active。Legacy 不新增状态行为。</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例id</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>消费者名称，最长 60 字符。同一网关下唯一。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>消费者优先级，默认medium</p><p>枚举值：</p><ul><li>Low： 低优先级</li><li>Medium： 中优先级</li><li>High： 高优先级</li></ul>
                     */
                    std::string m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>消费者描述。最长 200 字符。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>密钥关联方式，三选一枚举。不传时兼容老逻辑（等价于 None 或 Existing，取决于是否传 SecretKeyId）。</p><p>枚举值：</p><ul><li>Existing： 选择已有密钥</li><li>AutoGenerate： 自动生成并关联密钥</li><li>None： 暂不关联密钥</li></ul><p>默认值：None</p>
                     */
                    std::string m_secretBindType;
                    bool m_secretBindTypeHasBeenSet;

                    /**
                     * <p>自动生成密钥的参数体。仅当 SecretBindType=&quot;AutoGenerate&quot; 时必填，其他分支禁止携带，否则返回 InvalidParameterValue.CreateError。</p>
                     */
                    AutoSecretKey m_autoSecretKey;
                    bool m_autoSecretKeyHasBeenSet;

                    /**
                     * <p>调用业务来源，可选 Legacy 或 CustomOrganization；省略或空串按 Legacy。Legacy 保持原行为，CustomOrganization 用于自定义组织架构。该字段不替代鉴权，不改变资源归属，不覆盖 RequestSource。来源保存在操作记录请求内容中。</p>
                     */
                    std::string m_operationSource;
                    bool m_operationSourceHasBeenSet;

                    /**
                     * <p>仅 CustomOrganization 使用 Active 或 Disabled，默认 Active。Legacy 不新增状态行为。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCONSUMERREQUEST_H_
