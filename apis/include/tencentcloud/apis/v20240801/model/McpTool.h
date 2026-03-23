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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_MCPTOOL_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_MCPTOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/McpInputOutSchema.h>
#include <tencentcloud/apis/v20240801/model/McpToolAnnotation.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * mcp工具
                */
                class McpTool : public AbstractModel
                {
                public:
                    McpTool();
                    ~McpTool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名称
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
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取入参参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputSchema 入参参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    McpInputOutSchema GetInputSchema() const;

                    /**
                     * 设置入参参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputSchema 入参参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputSchema(const McpInputOutSchema& _inputSchema);

                    /**
                     * 判断参数 InputSchema 是否已赋值
                     * @return InputSchema 是否已赋值
                     * 
                     */
                    bool InputSchemaHasBeenSet() const;

                    /**
                     * 获取注释
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Annotations 注释
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    McpToolAnnotation GetAnnotations() const;

                    /**
                     * 设置注释
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _annotations 注释
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnnotations(const McpToolAnnotation& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     * 
                     */
                    bool AnnotationsHasBeenSet() const;

                    /**
                     * 获取出参参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputSchema 出参参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    McpInputOutSchema GetOutputSchema() const;

                    /**
                     * 设置出参参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputSchema 出参参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputSchema(const McpInputOutSchema& _outputSchema);

                    /**
                     * 判断参数 OutputSchema 是否已赋值
                     * @return OutputSchema 是否已赋值
                     * 
                     */
                    bool OutputSchemaHasBeenSet() const;

                private:

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 入参参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    McpInputOutSchema m_inputSchema;
                    bool m_inputSchemaHasBeenSet;

                    /**
                     * 注释
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    McpToolAnnotation m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * 出参参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    McpInputOutSchema m_outputSchema;
                    bool m_outputSchemaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_MCPTOOL_H_
