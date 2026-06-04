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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPMODELCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPMODELCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AIOptimizeModel.h>
#include <tencentcloud/adp/v20260520/model/FileParseModel.h>
#include <tencentcloud/adp/v20260520/model/GenerateModel.h>
#include <tencentcloud/adp/v20260520/model/MultiModalQAModel.h>
#include <tencentcloud/adp/v20260520/model/MultiModalUnderstandingModel.h>
#include <tencentcloud/adp/v20260520/model/PromptRewriteModel.h>
#include <tencentcloud/adp/v20260520/model/ThinkModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 模型配置
                */
                class AppModelConfig : public AbstractModel
                {
                public:
                    AppModelConfig();
                    ~AppModelConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AI一键优化模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiOptimizeModel AI一键优化模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AIOptimizeModel GetAiOptimizeModel() const;

                    /**
                     * 设置AI一键优化模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aiOptimizeModel AI一键优化模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAiOptimizeModel(const AIOptimizeModel& _aiOptimizeModel);

                    /**
                     * 判断参数 AiOptimizeModel 是否已赋值
                     * @return AiOptimizeModel 是否已赋值
                     * 
                     */
                    bool AiOptimizeModelHasBeenSet() const;

                    /**
                     * 获取实时文件解析模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileParseModel 实时文件解析模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FileParseModel GetFileParseModel() const;

                    /**
                     * 设置实时文件解析模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileParseModel 实时文件解析模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileParseModel(const FileParseModel& _fileParseModel);

                    /**
                     * 判断参数 FileParseModel 是否已赋值
                     * @return FileParseModel 是否已赋值
                     * 
                     */
                    bool FileParseModelHasBeenSet() const;

                    /**
                     * 获取生成模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GenerateModel 生成模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GenerateModel GetGenerateModel() const;

                    /**
                     * 设置生成模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _generateModel 生成模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGenerateModel(const GenerateModel& _generateModel);

                    /**
                     * 判断参数 GenerateModel 是否已赋值
                     * @return GenerateModel 是否已赋值
                     * 
                     */
                    bool GenerateModelHasBeenSet() const;

                    /**
                     * 获取多模态问答模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiModalQaModel 多模态问答模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MultiModalQAModel GetMultiModalQaModel() const;

                    /**
                     * 设置多模态问答模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _multiModalQaModel 多模态问答模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMultiModalQaModel(const MultiModalQAModel& _multiModalQaModel);

                    /**
                     * 判断参数 MultiModalQaModel 是否已赋值
                     * @return MultiModalQaModel 是否已赋值
                     * 
                     */
                    bool MultiModalQaModelHasBeenSet() const;

                    /**
                     * 获取多模态理解模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiModalUnderstandingModel 多模态理解模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MultiModalUnderstandingModel GetMultiModalUnderstandingModel() const;

                    /**
                     * 设置多模态理解模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _multiModalUnderstandingModel 多模态理解模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMultiModalUnderstandingModel(const MultiModalUnderstandingModel& _multiModalUnderstandingModel);

                    /**
                     * 判断参数 MultiModalUnderstandingModel 是否已赋值
                     * @return MultiModalUnderstandingModel 是否已赋值
                     * 
                     */
                    bool MultiModalUnderstandingModelHasBeenSet() const;

                    /**
                     * 获取Prompt改写模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PromptRewriteModel Prompt改写模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PromptRewriteModel GetPromptRewriteModel() const;

                    /**
                     * 设置Prompt改写模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _promptRewriteModel Prompt改写模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPromptRewriteModel(const PromptRewriteModel& _promptRewriteModel);

                    /**
                     * 判断参数 PromptRewriteModel 是否已赋值
                     * @return PromptRewriteModel 是否已赋值
                     * 
                     */
                    bool PromptRewriteModelHasBeenSet() const;

                    /**
                     * 获取思考模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThinkModel 思考模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ThinkModel GetThinkModel() const;

                    /**
                     * 设置思考模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _thinkModel 思考模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThinkModel(const ThinkModel& _thinkModel);

                    /**
                     * 判断参数 ThinkModel 是否已赋值
                     * @return ThinkModel 是否已赋值
                     * 
                     */
                    bool ThinkModelHasBeenSet() const;

                private:

                    /**
                     * AI一键优化模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AIOptimizeModel m_aiOptimizeModel;
                    bool m_aiOptimizeModelHasBeenSet;

                    /**
                     * 实时文件解析模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileParseModel m_fileParseModel;
                    bool m_fileParseModelHasBeenSet;

                    /**
                     * 生成模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GenerateModel m_generateModel;
                    bool m_generateModelHasBeenSet;

                    /**
                     * 多模态问答模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MultiModalQAModel m_multiModalQaModel;
                    bool m_multiModalQaModelHasBeenSet;

                    /**
                     * 多模态理解模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MultiModalUnderstandingModel m_multiModalUnderstandingModel;
                    bool m_multiModalUnderstandingModelHasBeenSet;

                    /**
                     * Prompt改写模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PromptRewriteModel m_promptRewriteModel;
                    bool m_promptRewriteModelHasBeenSet;

                    /**
                     * 思考模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ThinkModel m_thinkModel;
                    bool m_thinkModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPMODELCONFIG_H_
