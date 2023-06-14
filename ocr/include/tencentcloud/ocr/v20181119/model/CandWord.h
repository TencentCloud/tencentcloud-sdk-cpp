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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_CANDWORD_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_CANDWORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Words.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 候选字符集(包含候选字Character以及置信度Confidence)
                */
                class CandWord : public AbstractModel
                {
                public:
                    CandWord();
                    ~CandWord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取候选字符集的单词信息（包括单词Character和单词置信度confidence）
                     * @return CandWords 候选字符集的单词信息（包括单词Character和单词置信度confidence）
                     * 
                     */
                    std::vector<Words> GetCandWords() const;

                    /**
                     * 设置候选字符集的单词信息（包括单词Character和单词置信度confidence）
                     * @param _candWords 候选字符集的单词信息（包括单词Character和单词置信度confidence）
                     * 
                     */
                    void SetCandWords(const std::vector<Words>& _candWords);

                    /**
                     * 判断参数 CandWords 是否已赋值
                     * @return CandWords 是否已赋值
                     * 
                     */
                    bool CandWordsHasBeenSet() const;

                private:

                    /**
                     * 候选字符集的单词信息（包括单词Character和单词置信度confidence）
                     */
                    std::vector<Words> m_candWords;
                    bool m_candWordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_CANDWORD_H_
