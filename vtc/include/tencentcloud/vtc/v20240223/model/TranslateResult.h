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

#ifndef TENCENTCLOUD_VTC_V20240223_MODEL_TRANSLATERESULT_H_
#define TENCENTCLOUD_VTC_V20240223_MODEL_TRANSLATERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vtc
    {
        namespace V20240223
        {
            namespace Model
            {
                /**
                * 音频翻译结果。
                */
                class TranslateResult : public AbstractModel
                {
                public:
                    TranslateResult();
                    ~TranslateResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取翻译源文字。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceText 翻译源文字。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceText() const;

                    /**
                     * 设置翻译源文字。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceText 翻译源文字。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceText(const std::string& _sourceText);

                    /**
                     * 判断参数 SourceText 是否已赋值
                     * @return SourceText 是否已赋值
                     * 
                     */
                    bool SourceTextHasBeenSet() const;

                    /**
                     * 获取翻译后文字。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetText 翻译后文字。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetText() const;

                    /**
                     * 设置翻译后文字。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetText 翻译后文字。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetText(const std::string& _targetText);

                    /**
                     * 判断参数 TargetText 是否已赋值
                     * @return TargetText 是否已赋值
                     * 
                     */
                    bool TargetTextHasBeenSet() const;

                private:

                    /**
                     * 翻译源文字。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceText;
                    bool m_sourceTextHasBeenSet;

                    /**
                     * 翻译后文字。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetText;
                    bool m_targetTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VTC_V20240223_MODEL_TRANSLATERESULT_H_
