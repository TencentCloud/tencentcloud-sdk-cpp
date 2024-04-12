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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQAOUTPUT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQAOUTPUT_H_

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
                * 应用管理输出配置
                */
                class KnowledgeQaOutput : public AbstractModel
                {
                public:
                    KnowledgeQaOutput();
                    ~KnowledgeQaOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出方式 1：流式 2：非流式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Method 输出方式 1：流式 2：非流式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMethod() const;

                    /**
                     * 设置输出方式 1：流式 2：非流式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _method 输出方式 1：流式 2：非流式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMethod(const uint64_t& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取通用模型回复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UseGeneralKnowledge 通用模型回复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUseGeneralKnowledge() const;

                    /**
                     * 设置通用模型回复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _useGeneralKnowledge 通用模型回复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUseGeneralKnowledge(const bool& _useGeneralKnowledge);

                    /**
                     * 判断参数 UseGeneralKnowledge 是否已赋值
                     * @return UseGeneralKnowledge 是否已赋值
                     * 
                     */
                    bool UseGeneralKnowledgeHasBeenSet() const;

                    /**
                     * 获取未知回复语，300字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BareAnswer 未知回复语，300字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBareAnswer() const;

                    /**
                     * 设置未知回复语，300字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bareAnswer 未知回复语，300字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBareAnswer(const std::string& _bareAnswer);

                    /**
                     * 判断参数 BareAnswer 是否已赋值
                     * @return BareAnswer 是否已赋值
                     * 
                     */
                    bool BareAnswerHasBeenSet() const;

                private:

                    /**
                     * 输出方式 1：流式 2：非流式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 通用模型回复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_useGeneralKnowledge;
                    bool m_useGeneralKnowledgeHasBeenSet;

                    /**
                     * 未知回复语，300字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bareAnswer;
                    bool m_bareAnswerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQAOUTPUT_H_
