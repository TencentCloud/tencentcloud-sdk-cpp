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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_WORDS_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_WORDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 识别出来的单词信息包括单词（包括单词Character和单词置信度confidence）
                */
                class Words : public AbstractModel
                {
                public:
                    Words();
                    ~Words() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取置信度 0 ~100
                     * @return Confidence 置信度 0 ~100
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置置信度 0 ~100
                     * @param _confidence 置信度 0 ~100
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取候选字Character
                     * @return Character 候选字Character
                     * 
                     */
                    std::string GetCharacter() const;

                    /**
                     * 设置候选字Character
                     * @param _character 候选字Character
                     * 
                     */
                    void SetCharacter(const std::string& _character);

                    /**
                     * 判断参数 Character 是否已赋值
                     * @return Character 是否已赋值
                     * 
                     */
                    bool CharacterHasBeenSet() const;

                private:

                    /**
                     * 置信度 0 ~100
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 候选字Character
                     */
                    std::string m_character;
                    bool m_characterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_WORDS_H_
