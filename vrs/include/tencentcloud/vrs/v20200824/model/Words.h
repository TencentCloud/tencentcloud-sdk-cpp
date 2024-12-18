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

#ifndef TENCENTCLOUD_VRS_V20200824_MODEL_WORDS_H_
#define TENCENTCLOUD_VRS_V20200824_MODEL_WORDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vrs
    {
        namespace V20200824
        {
            namespace Model
            {
                /**
                * 音频检测提示信息：
1.检测字是否存在多读、 少读、 错读等
2.检测准确度和流畅度
                */
                class Words : public AbstractModel
                {
                public:
                    Words();
                    ~Words() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取准确度 (小于75则认为不合格)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PronAccuracy 准确度 (小于75则认为不合格)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetPronAccuracy() const;

                    /**
                     * 设置准确度 (小于75则认为不合格)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pronAccuracy 准确度 (小于75则认为不合格)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPronAccuracy(const double& _pronAccuracy);

                    /**
                     * 判断参数 PronAccuracy 是否已赋值
                     * @return PronAccuracy 是否已赋值
                     * 
                     */
                    bool PronAccuracyHasBeenSet() const;

                    /**
                     * 获取流畅度 (小于0.95则认为不合格)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PronFluency 流畅度 (小于0.95则认为不合格)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetPronFluency() const;

                    /**
                     * 设置流畅度 (小于0.95则认为不合格)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pronFluency 流畅度 (小于0.95则认为不合格)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPronFluency(const double& _pronFluency);

                    /**
                     * 判断参数 PronFluency 是否已赋值
                     * @return PronFluency 是否已赋值
                     * 
                     */
                    bool PronFluencyHasBeenSet() const;

                    /**
                     * 获取tag: 
0: match  匹配
1: insert   多读
2: delete  少读
3: replace 错读
4: oov  待评估字不在发音评估的词库
5: unknown 未知错误
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag tag: 
0: match  匹配
1: insert   多读
2: delete  少读
3: replace 错读
4: oov  待评估字不在发音评估的词库
5: unknown 未知错误
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTag() const;

                    /**
                     * 设置tag: 
0: match  匹配
1: insert   多读
2: delete  少读
3: replace 错读
4: oov  待评估字不在发音评估的词库
5: unknown 未知错误
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag tag: 
0: match  匹配
1: insert   多读
2: delete  少读
3: replace 错读
4: oov  待评估字不在发音评估的词库
5: unknown 未知错误
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTag(const int64_t& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Word 字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWord() const;

                    /**
                     * 设置字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _word 字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     * 
                     */
                    bool WordHasBeenSet() const;

                private:

                    /**
                     * 准确度 (小于75则认为不合格)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_pronAccuracy;
                    bool m_pronAccuracyHasBeenSet;

                    /**
                     * 流畅度 (小于0.95则认为不合格)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_pronFluency;
                    bool m_pronFluencyHasBeenSet;

                    /**
                     * tag: 
0: match  匹配
1: insert   多读
2: delete  少读
3: replace 错读
4: oov  待评估字不在发音评估的词库
5: unknown 未知错误
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_WORDS_H_
