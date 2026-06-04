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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_FILEPARSEMODEL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_FILEPARSEMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SupportedFileType.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 文档解析模型参数
                */
                class FileParseModel : public AbstractModel
                {
                public:
                    FileParseModel();
                    ~FileParseModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型别名
                     * @return Alias 模型别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置模型别名
                     * @param _alias 模型别名
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取模型描述
                     * @return Description 模型描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置模型描述
                     * @param _description 模型描述
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
                     * 获取增强模式
                     * @return EnhancementMode 增强模式
                     * 
                     */
                    std::string GetEnhancementMode() const;

                    /**
                     * 设置增强模式
                     * @param _enhancementMode 增强模式
                     * 
                     */
                    void SetEnhancementMode(const std::string& _enhancementMode);

                    /**
                     * 判断参数 EnhancementMode 是否已赋值
                     * @return EnhancementMode 是否已赋值
                     * 
                     */
                    bool EnhancementModeHasBeenSet() const;

                    /**
                     * 获取模型唯一ID
                     * @return ModelId 模型唯一ID
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型唯一ID
                     * @param _modelId 模型唯一ID
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
                     * 获取模型类型
                     * @return ModelProviderType 模型类型
                     * 
                     */
                    std::string GetModelProviderType() const;

                    /**
                     * 设置模型类型
                     * @param _modelProviderType 模型类型
                     * 
                     */
                    void SetModelProviderType(const std::string& _modelProviderType);

                    /**
                     * 判断参数 ModelProviderType 是否已赋值
                     * @return ModelProviderType 是否已赋值
                     * 
                     */
                    bool ModelProviderTypeHasBeenSet() const;

                    /**
                     * 获取是否启用公式增强
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableFormulaEnhancement 是否启用公式增强
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableFormulaEnhancement() const;

                    /**
                     * 设置是否启用公式增强
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableFormulaEnhancement 是否启用公式增强
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableFormulaEnhancement(const bool& _enableFormulaEnhancement);

                    /**
                     * 判断参数 EnableFormulaEnhancement 是否已赋值
                     * @return EnableFormulaEnhancement 是否已赋值
                     * 
                     */
                    bool EnableFormulaEnhancementHasBeenSet() const;

                    /**
                     * 获取是否启用 LLM 增强
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableLLMEnhancement 是否启用 LLM 增强
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableLLMEnhancement() const;

                    /**
                     * 设置是否启用 LLM 增强
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableLLMEnhancement 是否启用 LLM 增强
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableLLMEnhancement(const bool& _enableLLMEnhancement);

                    /**
                     * 判断参数 EnableLLMEnhancement 是否已赋值
                     * @return EnableLLMEnhancement 是否已赋值
                     * 
                     */
                    bool EnableLLMEnhancementHasBeenSet() const;

                    /**
                     * 获取是否输出 HTML 表格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputHtmlTable 是否输出 HTML 表格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetOutputHtmlTable() const;

                    /**
                     * 设置是否输出 HTML 表格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputHtmlTable 是否输出 HTML 表格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputHtmlTable(const bool& _outputHtmlTable);

                    /**
                     * 判断参数 OutputHtmlTable 是否已赋值
                     * @return OutputHtmlTable 是否已赋值
                     * 
                     */
                    bool OutputHtmlTableHasBeenSet() const;

                    /**
                     * 获取支持的文件类型列表
                     * @return SupportedFileList 支持的文件类型列表
                     * 
                     */
                    std::vector<SupportedFileType> GetSupportedFileList() const;

                    /**
                     * 设置支持的文件类型列表
                     * @param _supportedFileList 支持的文件类型列表
                     * 
                     */
                    void SetSupportedFileList(const std::vector<SupportedFileType>& _supportedFileList);

                    /**
                     * 判断参数 SupportedFileList 是否已赋值
                     * @return SupportedFileList 是否已赋值
                     * 
                     */
                    bool SupportedFileListHasBeenSet() const;

                private:

                    /**
                     * 模型别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 模型描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 增强模式
                     */
                    std::string m_enhancementMode;
                    bool m_enhancementModeHasBeenSet;

                    /**
                     * 模型唯一ID
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 模型类型
                     */
                    std::string m_modelProviderType;
                    bool m_modelProviderTypeHasBeenSet;

                    /**
                     * 是否启用公式增强
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableFormulaEnhancement;
                    bool m_enableFormulaEnhancementHasBeenSet;

                    /**
                     * 是否启用 LLM 增强
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableLLMEnhancement;
                    bool m_enableLLMEnhancementHasBeenSet;

                    /**
                     * 是否输出 HTML 表格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_outputHtmlTable;
                    bool m_outputHtmlTableHasBeenSet;

                    /**
                     * 支持的文件类型列表
                     */
                    std::vector<SupportedFileType> m_supportedFileList;
                    bool m_supportedFileListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_FILEPARSEMODEL_H_
