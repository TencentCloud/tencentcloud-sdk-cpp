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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODELINFO_H_
