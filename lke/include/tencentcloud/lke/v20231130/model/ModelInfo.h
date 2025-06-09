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
                     * 获取模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelName 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelName 模型名称
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
                     * 获取模型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelDesc 模型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelDesc() const;

                    /**
                     * 设置模型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelDesc 模型描述
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
                     * 获取模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AliasName 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aliasName 模型名称
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
                     * 获取资源状态 1：资源可用；2：资源已用尽
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceStatus 资源状态 1：资源可用；2：资源已用尽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetResourceStatus() const;

                    /**
                     * 设置资源状态 1：资源可用；2：资源已用尽
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceStatus 资源状态 1：资源可用；2：资源已用尽
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
                     * 获取提示词内容字符限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PromptWordsLimit 提示词内容字符限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPromptWordsLimit() const;

                    /**
                     * 设置提示词内容字符限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _promptWordsLimit 提示词内容字符限制
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
                     * 获取通过核心采样控制内容生成的多样性，较高的Top P值会导致生成更多样的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopP 通过核心采样控制内容生成的多样性，较高的Top P值会导致生成更多样的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelParameter GetTopP() const;

                    /**
                     * 设置通过核心采样控制内容生成的多样性，较高的Top P值会导致生成更多样的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topP 通过核心采样控制内容生成的多样性，较高的Top P值会导致生成更多样的内容
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
                     * 获取温度控制随机性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Temperature 温度控制随机性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelParameter GetTemperature() const;

                    /**
                     * 设置温度控制随机性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _temperature 温度控制随机性
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
                     * 获取最多能生成的token数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxTokens 最多能生成的token数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelParameter GetMaxTokens() const;

                    /**
                     * 设置最多能生成的token数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxTokens 最多能生成的token数量
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
                     * 获取模型来源 Hunyuan：腾讯混元大模型,Industry：腾讯云行业大模型,Experience：新模型体验,Custom自定义模型
                     * @return Source 模型来源 Hunyuan：腾讯混元大模型,Industry：腾讯云行业大模型,Experience：新模型体验,Custom自定义模型
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置模型来源 Hunyuan：腾讯混元大模型,Industry：腾讯云行业大模型,Experience：新模型体验,Custom自定义模型
                     * @param _source 模型来源 Hunyuan：腾讯混元大模型,Industry：腾讯云行业大模型,Experience：新模型体验,Custom自定义模型
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
                     * 获取模型图标
                     * @return Icon 模型图标
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置模型图标
                     * @param _icon 模型图标
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
                     * 获取是否免费
                     * @return IsFree 是否免费
                     * 
                     */
                    bool GetIsFree() const;

                    /**
                     * 设置是否免费
                     * @param _isFree 是否免费
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
                     * 获取模型对话框可输入的上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputLenLimit 模型对话框可输入的上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInputLenLimit() const;

                    /**
                     * 设置模型对话框可输入的上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputLenLimit 模型对话框可输入的上限
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
                     * 获取支持工作流的类型 0:模型不支持; 1: 模型支持工作流； 2： 模型支持效果不佳；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportWorkflowStatus 支持工作流的类型 0:模型不支持; 1: 模型支持工作流； 2： 模型支持效果不佳；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSupportWorkflowStatus() const;

                    /**
                     * 设置支持工作流的类型 0:模型不支持; 1: 模型支持工作流； 2： 模型支持效果不佳；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportWorkflowStatus 支持工作流的类型 0:模型不支持; 1: 模型支持工作流； 2： 模型支持效果不佳；
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
                     * 获取模型类别 generate：生成模型，thought：思考模型
                     * @return ModelCategory 模型类别 generate：生成模型，thought：思考模型
                     * 
                     */
                    std::string GetModelCategory() const;

                    /**
                     * 设置模型类别 generate：生成模型，thought：思考模型
                     * @param _modelCategory 模型类别 generate：生成模型，thought：思考模型
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
                     * 获取是否默认模型
                     * @return IsDefault 是否默认模型
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否默认模型
                     * @param _isDefault 是否默认模型
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
                     * 获取角色提示词输入长度限制
                     * @return RoleLenLimit 角色提示词输入长度限制
                     * 
                     */
                    uint64_t GetRoleLenLimit() const;

                    /**
                     * 设置角色提示词输入长度限制
                     * @param _roleLenLimit 角色提示词输入长度限制
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
                     * 获取是否专属并发模型
                     * @return IsExclusive 是否专属并发模型
                     * 
                     */
                    bool GetIsExclusive() const;

                    /**
                     * 设置是否专属并发模型
                     * @param _isExclusive 是否专属并发模型
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
                     * 获取模型支持智能通话效果
                     * @return SupportAiCallStatus 模型支持智能通话效果
                     * 
                     */
                    uint64_t GetSupportAiCallStatus() const;

                    /**
                     * 设置模型支持智能通话效果
                     * @param _supportAiCallStatus 模型支持智能通话效果
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
                     * 获取专属并发数
                     * @return Concurrency 专属并发数
                     * 
                     */
                    uint64_t GetConcurrency() const;

                    /**
                     * 设置专属并发数
                     * @param _concurrency 专属并发数
                     * 
                     */
                    void SetConcurrency(const uint64_t& _concurrency);

                    /**
                     * 判断参数 Concurrency 是否已赋值
                     * @return Concurrency 是否已赋值
                     * 
                     */
                    bool ConcurrencyHasBeenSet() const;

                private:

                    /**
                     * 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 模型描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelDesc;
                    bool m_modelDescHasBeenSet;

                    /**
                     * 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * 资源状态 1：资源可用；2：资源已用尽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                    /**
                     * 提示词内容字符限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_promptWordsLimit;
                    bool m_promptWordsLimitHasBeenSet;

                    /**
                     * 通过核心采样控制内容生成的多样性，较高的Top P值会导致生成更多样的内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelParameter m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * 温度控制随机性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelParameter m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * 最多能生成的token数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelParameter m_maxTokens;
                    bool m_maxTokensHasBeenSet;

                    /**
                     * 模型来源 Hunyuan：腾讯混元大模型,Industry：腾讯云行业大模型,Experience：新模型体验,Custom自定义模型
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 模型图标
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * 是否免费
                     */
                    bool m_isFree;
                    bool m_isFreeHasBeenSet;

                    /**
                     * 模型对话框可输入的上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_inputLenLimit;
                    bool m_inputLenLimitHasBeenSet;

                    /**
                     * 支持工作流的类型 0:模型不支持; 1: 模型支持工作流； 2： 模型支持效果不佳；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_supportWorkflowStatus;
                    bool m_supportWorkflowStatusHasBeenSet;

                    /**
                     * 模型类别 generate：生成模型，thought：思考模型
                     */
                    std::string m_modelCategory;
                    bool m_modelCategoryHasBeenSet;

                    /**
                     * 是否默认模型
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 角色提示词输入长度限制
                     */
                    uint64_t m_roleLenLimit;
                    bool m_roleLenLimitHasBeenSet;

                    /**
                     * 是否专属并发模型
                     */
                    bool m_isExclusive;
                    bool m_isExclusiveHasBeenSet;

                    /**
                     * 模型支持智能通话效果
                     */
                    uint64_t m_supportAiCallStatus;
                    bool m_supportAiCallStatusHasBeenSet;

                    /**
                     * 专属并发数
                     */
                    uint64_t m_concurrency;
                    bool m_concurrencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODELINFO_H_
