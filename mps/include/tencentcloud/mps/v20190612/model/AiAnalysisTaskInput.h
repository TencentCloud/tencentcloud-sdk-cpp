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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKINPUT_H_

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
                * AI 视频智能分析输入参数类型
                */
                class AiAnalysisTaskInput : public AbstractModel
                {
                public:
                    AiAnalysisTaskInput();
                    ~AiAnalysisTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频内容分析模板 ID。
                     * @return Definition 视频内容分析模板 ID。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置视频内容分析模板 ID。
                     * @param _definition 视频内容分析模板 ID。
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取扩展参数，其值为序列化的 json字符串。
注意：此参数为定制需求参数，参考如下：
[智能檫除](https://cloud.tencent.com/document/product/862/101530)
[智能拆条](https://cloud.tencent.com/document/product/862/112098)
[高光集锦](https://cloud.tencent.com/document/product/862/107280)
[智能横转竖](https://cloud.tencent.com/document/product/862/112112)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtendedParameter 扩展参数，其值为序列化的 json字符串。
注意：此参数为定制需求参数，参考如下：
[智能檫除](https://cloud.tencent.com/document/product/862/101530)
[智能拆条](https://cloud.tencent.com/document/product/862/112098)
[高光集锦](https://cloud.tencent.com/document/product/862/107280)
[智能横转竖](https://cloud.tencent.com/document/product/862/112112)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtendedParameter() const;

                    /**
                     * 设置扩展参数，其值为序列化的 json字符串。
注意：此参数为定制需求参数，参考如下：
[智能檫除](https://cloud.tencent.com/document/product/862/101530)
[智能拆条](https://cloud.tencent.com/document/product/862/112098)
[高光集锦](https://cloud.tencent.com/document/product/862/107280)
[智能横转竖](https://cloud.tencent.com/document/product/862/112112)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extendedParameter 扩展参数，其值为序列化的 json字符串。
注意：此参数为定制需求参数，参考如下：
[智能檫除](https://cloud.tencent.com/document/product/862/101530)
[智能拆条](https://cloud.tencent.com/document/product/862/112098)
[高光集锦](https://cloud.tencent.com/document/product/862/107280)
[智能横转竖](https://cloud.tencent.com/document/product/862/112112)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtendedParameter(const std::string& _extendedParameter);

                    /**
                     * 判断参数 ExtendedParameter 是否已赋值
                     * @return ExtendedParameter 是否已赋值
                     * 
                     */
                    bool ExtendedParameterHasBeenSet() const;

                private:

                    /**
                     * 视频内容分析模板 ID。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 扩展参数，其值为序列化的 json字符串。
注意：此参数为定制需求参数，参考如下：
[智能檫除](https://cloud.tencent.com/document/product/862/101530)
[智能拆条](https://cloud.tencent.com/document/product/862/112098)
[高光集锦](https://cloud.tencent.com/document/product/862/107280)
[智能横转竖](https://cloud.tencent.com/document/product/862/112112)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extendedParameter;
                    bool m_extendedParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKINPUT_H_
