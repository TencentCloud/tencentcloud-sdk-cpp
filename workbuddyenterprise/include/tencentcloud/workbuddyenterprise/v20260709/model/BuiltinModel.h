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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_BUILTINMODEL_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_BUILTINMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 内置模型信息
                */
                class BuiltinModel : public AbstractModel
                {
                public:
                    BuiltinModel();
                    ~BuiltinModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型唯一标识
                     * @return ModelId 模型唯一标识
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型唯一标识
                     * @param _modelId 模型唯一标识
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 模型名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取供应商，如 TENCENT、OPENAI、ANTHROPIC、DEEPSEEK 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vendor 供应商，如 TENCENT、OPENAI、ANTHROPIC、DEEPSEEK 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置供应商，如 TENCENT、OPENAI、ANTHROPIC、DEEPSEEK 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vendor 供应商，如 TENCENT、OPENAI、ANTHROPIC、DEEPSEEK 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVendor(const std::string& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取最大输出 Token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxOutputTokens 最大输出 Token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxOutputTokens() const;

                    /**
                     * 设置最大输出 Token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxOutputTokens 最大输出 Token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxOutputTokens(const int64_t& _maxOutputTokens);

                    /**
                     * 判断参数 MaxOutputTokens 是否已赋值
                     * @return MaxOutputTokens 是否已赋值
                     * 
                     */
                    bool MaxOutputTokensHasBeenSet() const;

                    /**
                     * 获取最大输入 Token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxInputTokens 最大输入 Token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxInputTokens() const;

                    /**
                     * 设置最大输入 Token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxInputTokens 最大输入 Token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxInputTokens(const int64_t& _maxInputTokens);

                    /**
                     * 判断参数 MaxInputTokens 是否已赋值
                     * @return MaxInputTokens 是否已赋值
                     * 
                     */
                    bool MaxInputTokensHasBeenSet() const;

                    /**
                     * 获取是否支持函数调用（Tool Call）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportsToolCall 是否支持函数调用（Tool Call）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportsToolCall() const;

                    /**
                     * 设置是否支持函数调用（Tool Call）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportsToolCall 是否支持函数调用（Tool Call）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportsToolCall(const bool& _supportsToolCall);

                    /**
                     * 判断参数 SupportsToolCall 是否已赋值
                     * @return SupportsToolCall 是否已赋值
                     * 
                     */
                    bool SupportsToolCallHasBeenSet() const;

                    /**
                     * 获取是否支持视觉（图片输入）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportsImages 是否支持视觉（图片输入）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportsImages() const;

                    /**
                     * 设置是否支持视觉（图片输入）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportsImages 是否支持视觉（图片输入）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportsImages(const bool& _supportsImages);

                    /**
                     * 判断参数 SupportsImages 是否已赋值
                     * @return SupportsImages 是否已赋值
                     * 
                     */
                    bool SupportsImagesHasBeenSet() const;

                    /**
                     * 获取模型中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DescriptionZh 模型中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescriptionZh() const;

                    /**
                     * 设置模型中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _descriptionZh 模型中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescriptionZh(const std::string& _descriptionZh);

                    /**
                     * 判断参数 DescriptionZh 是否已赋值
                     * @return DescriptionZh 是否已赋值
                     * 
                     */
                    bool DescriptionZhHasBeenSet() const;

                    /**
                     * 获取模型英文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DescriptionEn 模型英文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescriptionEn() const;

                    /**
                     * 设置模型英文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _descriptionEn 模型英文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescriptionEn(const std::string& _descriptionEn);

                    /**
                     * 判断参数 DescriptionEn 是否已赋值
                     * @return DescriptionEn 是否已赋值
                     * 
                     */
                    bool DescriptionEnHasBeenSet() const;

                    /**
                     * 获取模型标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 模型标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置模型标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 模型标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取支持的客户端列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Clients 支持的客户端列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetClients() const;

                    /**
                     * 设置支持的客户端列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clients 支持的客户端列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClients(const std::vector<std::string>& _clients);

                    /**
                     * 判断参数 Clients 是否已赋值
                     * @return Clients 是否已赋值
                     * 
                     */
                    bool ClientsHasBeenSet() const;

                    /**
                     * 获取服务接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceEndpoint 服务接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceEndpoint() const;

                    /**
                     * 设置服务接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceEndpoint 服务接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceEndpoint(const std::string& _serviceEndpoint);

                    /**
                     * 判断参数 ServiceEndpoint 是否已赋值
                     * @return ServiceEndpoint 是否已赋值
                     * 
                     */
                    bool ServiceEndpointHasBeenSet() const;

                    /**
                     * 获取状态：ENABLED（已启用）/ DISABLED（已停用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态：ENABLED（已启用）/ DISABLED（已停用）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态：ENABLED（已启用）/ DISABLED（已停用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态：ENABLED（已启用）/ DISABLED（已停用）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取本企业内绑定该模型的 Agent 数（过滤软删除 Agent/版本与调试 Agent）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentCount 本企业内绑定该模型的 Agent 数（过滤软删除 Agent/版本与调试 Agent）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAgentCount() const;

                    /**
                     * 设置本企业内绑定该模型的 Agent 数（过滤软删除 Agent/版本与调试 Agent）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentCount 本企业内绑定该模型的 Agent 数（过滤软删除 Agent/版本与调试 Agent）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentCount(const int64_t& _agentCount);

                    /**
                     * 判断参数 AgentCount 是否已赋值
                     * @return AgentCount 是否已赋值
                     * 
                     */
                    bool AgentCountHasBeenSet() const;

                private:

                    /**
                     * 模型唯一标识
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 供应商，如 TENCENT、OPENAI、ANTHROPIC、DEEPSEEK 等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * 最大输出 Token 数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxOutputTokens;
                    bool m_maxOutputTokensHasBeenSet;

                    /**
                     * 最大输入 Token 数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxInputTokens;
                    bool m_maxInputTokensHasBeenSet;

                    /**
                     * 是否支持函数调用（Tool Call）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportsToolCall;
                    bool m_supportsToolCallHasBeenSet;

                    /**
                     * 是否支持视觉（图片输入）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportsImages;
                    bool m_supportsImagesHasBeenSet;

                    /**
                     * 模型中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_descriptionZh;
                    bool m_descriptionZhHasBeenSet;

                    /**
                     * 模型英文描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_descriptionEn;
                    bool m_descriptionEnHasBeenSet;

                    /**
                     * 模型标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 支持的客户端列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_clients;
                    bool m_clientsHasBeenSet;

                    /**
                     * 服务接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceEndpoint;
                    bool m_serviceEndpointHasBeenSet;

                    /**
                     * 状态：ENABLED（已启用）/ DISABLED（已停用）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 本企业内绑定该模型的 Agent 数（过滤软删除 Agent/版本与调试 Agent）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_agentCount;
                    bool m_agentCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_BUILTINMODEL_H_
