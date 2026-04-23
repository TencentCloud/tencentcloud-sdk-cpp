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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODELINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ModelParameter.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 模型信息
                */
                class ModelInfo : public AbstractModel
                {
                public:
                    ModelInfo();
                    ~ModelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelName <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelName <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>模型描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelDesc <p>模型描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelDesc() const;

                    /**
                     * 设置<p>模型描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelDesc <p>模型描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelDesc(const std::string& _modelDesc);

                    /**
                     * 判断参数 ModelDesc 是否已赋值
                     * @return ModelDesc 是否已赋值
                     * 
                     */
                    bool ModelDescHasBeenSet() const;

                    /**
                     * 获取<p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AliasName <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置<p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aliasName <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取<p>资源状态 1：资源可用；2：资源已用尽</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceStatus <p>资源状态 1：资源可用；2：资源已用尽</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetResourceStatus() const;

                    /**
                     * 设置<p>资源状态 1：资源可用；2：资源已用尽</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceStatus <p>资源状态 1：资源可用；2：资源已用尽</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceStatus(const uint64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                    /**
                     * 获取<p>提示词内容字符限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PromptWordsLimit <p>提示词内容字符限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPromptWordsLimit() const;

                    /**
                     * 设置<p>提示词内容字符限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _promptWordsLimit <p>提示词内容字符限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPromptWordsLimit(const std::string& _promptWordsLimit);

                    /**
                     * 判断参数 PromptWordsLimit 是否已赋值
                     * @return PromptWordsLimit 是否已赋值
                     * 
                     */
                    bool PromptWordsLimitHasBeenSet() const;

                    /**
                     * 获取<p>通过核心采样控制内容生成的多样性，较高的Top P值会导致生成更多样的内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopP <p>通过核心采样控制内容生成的多样性，较高的Top P值会导致生成更多样的内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelParameter GetTopP() const;

                    /**
                     * 设置<p>通过核心采样控制内容生成的多样性，较高的Top P值会导致生成更多样的内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topP <p>通过核心采样控制内容生成的多样性，较高的Top P值会导致生成更多样的内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopP(const ModelParameter& _topP);

                    /**
                     * 判断参数 TopP 是否已赋值
                     * @return TopP 是否已赋值
                     * 
                     */
                    bool TopPHasBeenSet() const;

                    /**
                     * 获取<p>温度控制随机性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Temperature <p>温度控制随机性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelParameter GetTemperature() const;

                    /**
                     * 设置<p>温度控制随机性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _temperature <p>温度控制随机性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemperature(const ModelParameter& _temperature);

                    /**
                     * 判断参数 Temperature 是否已赋值
                     * @return Temperature 是否已赋值
                     * 
                     */
                    bool TemperatureHasBeenSet() const;

                    /**
                     * 获取<p>最多能生成的token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxTokens <p>最多能生成的token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelParameter GetMaxTokens() const;

                    /**
                     * 设置<p>最多能生成的token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxTokens <p>最多能生成的token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxTokens(const ModelParameter& _maxTokens);

                    /**
                     * 判断参数 MaxTokens 是否已赋值
                     * @return MaxTokens 是否已赋值
                     * 
                     */
                    bool MaxTokensHasBeenSet() const;

                    /**
                     * 获取<p>模型来源 Hunyuan：腾讯混元大模型,Industry：腾讯云行业大模型,Experience：新模型体验,Custom自定义模型</p>
                     * @return Source <p>模型来源 Hunyuan：腾讯混元大模型,Industry：腾讯云行业大模型,Experience：新模型体验,Custom自定义模型</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>模型来源 Hunyuan：腾讯混元大模型,Industry：腾讯云行业大模型,Experience：新模型体验,Custom自定义模型</p>
                     * @param _source <p>模型来源 Hunyuan：腾讯混元大模型,Industry：腾讯云行业大模型,Experience：新模型体验,Custom自定义模型</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>模型图标</p>
                     * @return Icon <p>模型图标</p>
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置<p>模型图标</p>
                     * @param _icon <p>模型图标</p>
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取<p>是否免费</p>
                     * @return IsFree <p>是否免费</p>
                     * 
                     */
                    bool GetIsFree() const;

                    /**
                     * 设置<p>是否免费</p>
                     * @param _isFree <p>是否免费</p>
                     * 
                     */
                    void SetIsFree(const bool& _isFree);

                    /**
                     * 判断参数 IsFree 是否已赋值
                     * @return IsFree 是否已赋值
                     * 
                     */
                    bool IsFreeHasBeenSet() const;

                    /**
                     * 获取<p>模型对话框可输入的上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputLenLimit <p>模型对话框可输入的上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInputLenLimit() const;

                    /**
                     * 设置<p>模型对话框可输入的上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputLenLimit <p>模型对话框可输入的上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputLenLimit(const uint64_t& _inputLenLimit);

                    /**
                     * 判断参数 InputLenLimit 是否已赋值
                     * @return InputLenLimit 是否已赋值
                     * 
                     */
                    bool InputLenLimitHasBeenSet() const;

                    /**
                     * 获取<p>支持工作流的类型 0:模型不支持; 1: 模型支持工作流； 2： 模型支持效果不佳；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportWorkflowStatus <p>支持工作流的类型 0:模型不支持; 1: 模型支持工作流； 2： 模型支持效果不佳；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSupportWorkflowStatus() const;

                    /**
                     * 设置<p>支持工作流的类型 0:模型不支持; 1: 模型支持工作流； 2： 模型支持效果不佳；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportWorkflowStatus <p>支持工作流的类型 0:模型不支持; 1: 模型支持工作流； 2： 模型支持效果不佳；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportWorkflowStatus(const uint64_t& _supportWorkflowStatus);

                    /**
                     * 判断参数 SupportWorkflowStatus 是否已赋值
                     * @return SupportWorkflowStatus 是否已赋值
                     * 
                     */
                    bool SupportWorkflowStatusHasBeenSet() const;

                    /**
                     * 获取<p>模型类别 generate：生成模型，thought：思考模型</p>
                     * @return ModelCategory <p>模型类别 generate：生成模型，thought：思考模型</p>
                     * 
                     */
                    std::string GetModelCategory() const;

                    /**
                     * 设置<p>模型类别 generate：生成模型，thought：思考模型</p>
                     * @param _modelCategory <p>模型类别 generate：生成模型，thought：思考模型</p>
                     * 
                     */
                    void SetModelCategory(const std::string& _modelCategory);

                    /**
                     * 判断参数 ModelCategory 是否已赋值
                     * @return ModelCategory 是否已赋值
                     * 
                     */
                    bool ModelCategoryHasBeenSet() const;

                    /**
                     * 获取<p>是否默认模型</p>
                     * @return IsDefault <p>是否默认模型</p>
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置<p>是否默认模型</p>
                     * @param _isDefault <p>是否默认模型</p>
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取<p>角色提示词输入长度限制</p>
                     * @return RoleLenLimit <p>角色提示词输入长度限制</p>
                     * 
                     */
                    uint64_t GetRoleLenLimit() const;

                    /**
                     * 设置<p>角色提示词输入长度限制</p>
                     * @param _roleLenLimit <p>角色提示词输入长度限制</p>
                     * 
                     */
                    void SetRoleLenLimit(const uint64_t& _roleLenLimit);

                    /**
                     * 判断参数 RoleLenLimit 是否已赋值
                     * @return RoleLenLimit 是否已赋值
                     * 
                     */
                    bool RoleLenLimitHasBeenSet() const;

                    /**
                     * 获取<p>是否专属并发模型</p>
                     * @return IsExclusive <p>是否专属并发模型</p>
                     * 
                     */
                    bool GetIsExclusive() const;

                    /**
                     * 设置<p>是否专属并发模型</p>
                     * @param _isExclusive <p>是否专属并发模型</p>
                     * 
                     */
                    void SetIsExclusive(const bool& _isExclusive);

                    /**
                     * 判断参数 IsExclusive 是否已赋值
                     * @return IsExclusive 是否已赋值
                     * 
                     */
                    bool IsExclusiveHasBeenSet() const;

                    /**
                     * 获取<p>模型支持智能通话效果</p><p>枚举值：</p><ul><li>0： 模型不支持</li><li>1： 模型支持ai通话</li><li>2： 模型ai通话支持效果不佳</li></ul>
                     * @return SupportAiCallStatus <p>模型支持智能通话效果</p><p>枚举值：</p><ul><li>0： 模型不支持</li><li>1： 模型支持ai通话</li><li>2： 模型ai通话支持效果不佳</li></ul>
                     * 
                     */
                    uint64_t GetSupportAiCallStatus() const;

                    /**
                     * 设置<p>模型支持智能通话效果</p><p>枚举值：</p><ul><li>0： 模型不支持</li><li>1： 模型支持ai通话</li><li>2： 模型ai通话支持效果不佳</li></ul>
                     * @param _supportAiCallStatus <p>模型支持智能通话效果</p><p>枚举值：</p><ul><li>0： 模型不支持</li><li>1： 模型支持ai通话</li><li>2： 模型ai通话支持效果不佳</li></ul>
                     * 
                     */
                    void SetSupportAiCallStatus(const uint64_t& _supportAiCallStatus);

                    /**
                     * 判断参数 SupportAiCallStatus 是否已赋值
                     * @return SupportAiCallStatus 是否已赋值
                     * 
                     */
                    bool SupportAiCallStatusHasBeenSet() const;

                    /**
                     * 获取<p>专属并发数</p>
                     * @return Concurrency <p>专属并发数</p>
                     * 
                     */
                    uint64_t GetConcurrency() const;

                    /**
                     * 设置<p>专属并发数</p>
                     * @param _concurrency <p>专属并发数</p>
                     * 
                     */
                    void SetConcurrency(const uint64_t& _concurrency);

                    /**
                     * 判断参数 Concurrency 是否已赋值
                     * @return Concurrency 是否已赋值
                     * 
                     */
                    bool ConcurrencyHasBeenSet() const;

                    /**
                     * 获取<p>模型标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelTags <p>模型标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetModelTags() const;

                    /**
                     * 设置<p>模型标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelTags <p>模型标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelTags(const std::vector<std::string>& _modelTags);

                    /**
                     * 判断参数 ModelTags 是否已赋值
                     * @return ModelTags 是否已赋值
                     * 
                     */
                    bool ModelTagsHasBeenSet() const;

                    /**
                     * 获取<p>模型超参定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelParams <p>模型超参定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ModelParameter> GetModelParams() const;

                    /**
                     * 设置<p>模型超参定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelParams <p>模型超参定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelParams(const std::vector<ModelParameter>& _modelParams);

                    /**
                     * 判断参数 ModelParams 是否已赋值
                     * @return ModelParams 是否已赋值
                     * 
                     */
                    bool ModelParamsHasBeenSet() const;

                    /**
                     * 获取<p>提供商名称</p>
                     * @return ProviderName <p>提供商名称</p>
                     * 
                     */
                    std::string GetProviderName() const;

                    /**
                     * 设置<p>提供商名称</p>
                     * @param _providerName <p>提供商名称</p>
                     * 
                     */
                    void SetProviderName(const std::string& _providerName);

                    /**
                     * 判断参数 ProviderName 是否已赋值
                     * @return ProviderName 是否已赋值
                     * 
                     */
                    bool ProviderNameHasBeenSet() const;

                    /**
                     * 获取<p>提供商别名</p>
                     * @return ProviderAliasName <p>提供商别名</p>
                     * 
                     */
                    std::string GetProviderAliasName() const;

                    /**
                     * 设置<p>提供商别名</p>
                     * @param _providerAliasName <p>提供商别名</p>
                     * 
                     */
                    void SetProviderAliasName(const std::string& _providerAliasName);

                    /**
                     * 判断参数 ProviderAliasName 是否已赋值
                     * @return ProviderAliasName 是否已赋值
                     * 
                     */
                    bool ProviderAliasNameHasBeenSet() const;

                    /**
                     * 获取<p>提供商类型 Self:提供商，Custom：自定义模型提供商，Third：第三方模型提供商</p>
                     * @return ProviderType <p>提供商类型 Self:提供商，Custom：自定义模型提供商，Third：第三方模型提供商</p>
                     * 
                     */
                    std::string GetProviderType() const;

                    /**
                     * 设置<p>提供商类型 Self:提供商，Custom：自定义模型提供商，Third：第三方模型提供商</p>
                     * @param _providerType <p>提供商类型 Self:提供商，Custom：自定义模型提供商，Third：第三方模型提供商</p>
                     * 
                     */
                    void SetProviderType(const std::string& _providerType);

                    /**
                     * 判断参数 ProviderType 是否已赋值
                     * @return ProviderType 是否已赋值
                     * 
                     */
                    bool ProviderTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否关闭模型超参</p>
                     * @return IsCloseModelParams <p>是否关闭模型超参</p>
                     * 
                     */
                    bool GetIsCloseModelParams() const;

                    /**
                     * 设置<p>是否关闭模型超参</p>
                     * @param _isCloseModelParams <p>是否关闭模型超参</p>
                     * 
                     */
                    void SetIsCloseModelParams(const bool& _isCloseModelParams);

                    /**
                     * 判断参数 IsCloseModelParams 是否已赋值
                     * @return IsCloseModelParams 是否已赋值
                     * 
                     */
                    bool IsCloseModelParamsHasBeenSet() const;

                    /**
                     * 获取<p>是否支持深度思考</p>
                     * @return IsDeepThinking <p>是否支持深度思考</p>
                     * 
                     */
                    bool GetIsDeepThinking() const;

                    /**
                     * 设置<p>是否支持深度思考</p>
                     * @param _isDeepThinking <p>是否支持深度思考</p>
                     * 
                     */
                    void SetIsDeepThinking(const bool& _isDeepThinking);

                    /**
                     * 判断参数 IsDeepThinking 是否已赋值
                     * @return IsDeepThinking 是否已赋值
                     * 
                     */
                    bool IsDeepThinkingHasBeenSet() const;

                private:

                    /**
                     * <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>模型描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelDesc;
                    bool m_modelDescHasBeenSet;

                    /**
                     * <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * <p>资源状态 1：资源可用；2：资源已用尽</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                    /**
                     * <p>提示词内容字符限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_promptWordsLimit;
                    bool m_promptWordsLimitHasBeenSet;

                    /**
                     * <p>通过核心采样控制内容生成的多样性，较高的Top P值会导致生成更多样的内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelParameter m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * <p>温度控制随机性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelParameter m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * <p>最多能生成的token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelParameter m_maxTokens;
                    bool m_maxTokensHasBeenSet;

                    /**
                     * <p>模型来源 Hunyuan：腾讯混元大模型,Industry：腾讯云行业大模型,Experience：新模型体验,Custom自定义模型</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>模型图标</p>
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * <p>是否免费</p>
                     */
                    bool m_isFree;
                    bool m_isFreeHasBeenSet;

                    /**
                     * <p>模型对话框可输入的上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_inputLenLimit;
                    bool m_inputLenLimitHasBeenSet;

                    /**
                     * <p>支持工作流的类型 0:模型不支持; 1: 模型支持工作流； 2： 模型支持效果不佳；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_supportWorkflowStatus;
                    bool m_supportWorkflowStatusHasBeenSet;

                    /**
                     * <p>模型类别 generate：生成模型，thought：思考模型</p>
                     */
                    std::string m_modelCategory;
                    bool m_modelCategoryHasBeenSet;

                    /**
                     * <p>是否默认模型</p>
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>角色提示词输入长度限制</p>
                     */
                    uint64_t m_roleLenLimit;
                    bool m_roleLenLimitHasBeenSet;

                    /**
                     * <p>是否专属并发模型</p>
                     */
                    bool m_isExclusive;
                    bool m_isExclusiveHasBeenSet;

                    /**
                     * <p>模型支持智能通话效果</p><p>枚举值：</p><ul><li>0： 模型不支持</li><li>1： 模型支持ai通话</li><li>2： 模型ai通话支持效果不佳</li></ul>
                     */
                    uint64_t m_supportAiCallStatus;
                    bool m_supportAiCallStatusHasBeenSet;

                    /**
                     * <p>专属并发数</p>
                     */
                    uint64_t m_concurrency;
                    bool m_concurrencyHasBeenSet;

                    /**
                     * <p>模型标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_modelTags;
                    bool m_modelTagsHasBeenSet;

                    /**
                     * <p>模型超参定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ModelParameter> m_modelParams;
                    bool m_modelParamsHasBeenSet;

                    /**
                     * <p>提供商名称</p>
                     */
                    std::string m_providerName;
                    bool m_providerNameHasBeenSet;

                    /**
                     * <p>提供商别名</p>
                     */
                    std::string m_providerAliasName;
                    bool m_providerAliasNameHasBeenSet;

                    /**
                     * <p>提供商类型 Self:提供商，Custom：自定义模型提供商，Third：第三方模型提供商</p>
                     */
                    std::string m_providerType;
                    bool m_providerTypeHasBeenSet;

                    /**
                     * <p>是否关闭模型超参</p>
                     */
                    bool m_isCloseModelParams;
                    bool m_isCloseModelParamsHasBeenSet;

                    /**
                     * <p>是否支持深度思考</p>
                     */
                    bool m_isDeepThinking;
                    bool m_isDeepThinkingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODELINFO_H_
