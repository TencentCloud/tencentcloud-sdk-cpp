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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EVALUATIONTEMPLATEINPUTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EVALUATIONTEMPLATEINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 在评测中使用的转码模板的信息
                */
                class EvaluationTemplateInputInfo : public AbstractModel
                {
                public:
                    EvaluationTemplateInputInfo();
                    ~EvaluationTemplateInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转码模板的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Definition 转码模板的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置转码模板的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _definition 转码模板的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * 转码模板的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EVALUATIONTEMPLATEINPUTINFO_H_
