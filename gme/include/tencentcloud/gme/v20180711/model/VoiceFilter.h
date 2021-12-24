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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_VOICEFILTER_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_VOICEFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 过滤结果
                */
                class VoiceFilter : public AbstractModel
                {
                public:
                    VoiceFilter();
                    ~VoiceFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤类型，1：色情，2：涉毒，3：谩骂
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 过滤类型，1：色情，2：涉毒，3：谩骂
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置过滤类型，1：色情，2：涉毒，3：谩骂
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 过滤类型，1：色情，2：涉毒，3：谩骂
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取过滤命中关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Word 过滤命中关键词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWord() const;

                    /**
                     * 设置过滤命中关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Word 过滤命中关键词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     */
                    bool WordHasBeenSet() const;

                private:

                    /**
                     * 过滤类型，1：色情，2：涉毒，3：谩骂
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 过滤命中关键词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_VOICEFILTER_H_
