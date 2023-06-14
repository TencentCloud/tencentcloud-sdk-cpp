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

#ifndef TENCENTCLOUD_ECC_V20181213_MODEL_SENTENCEITEM_H_
#define TENCENTCLOUD_ECC_V20181213_MODEL_SENTENCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            namespace Model
            {
                /**
                * 句子的相关信息
                */
                class SentenceItem : public AbstractModel
                {
                public:
                    SentenceItem();
                    ~SentenceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取英语句子
                     * @return Sentence 英语句子
                     * 
                     */
                    std::string GetSentence() const;

                    /**
                     * 设置英语句子
                     * @param _sentence 英语句子
                     * 
                     */
                    void SetSentence(const std::string& _sentence);

                    /**
                     * 判断参数 Sentence 是否已赋值
                     * @return Sentence 是否已赋值
                     * 
                     */
                    bool SentenceHasBeenSet() const;

                    /**
                     * 获取段落id
                     * @return ParaID 段落id
                     * 
                     */
                    int64_t GetParaID() const;

                    /**
                     * 设置段落id
                     * @param _paraID 段落id
                     * 
                     */
                    void SetParaID(const int64_t& _paraID);

                    /**
                     * 判断参数 ParaID 是否已赋值
                     * @return ParaID 是否已赋值
                     * 
                     */
                    bool ParaIDHasBeenSet() const;

                    /**
                     * 获取句子id
                     * @return SentenceID 句子id
                     * 
                     */
                    int64_t GetSentenceID() const;

                    /**
                     * 设置句子id
                     * @param _sentenceID 句子id
                     * 
                     */
                    void SetSentenceID(const int64_t& _sentenceID);

                    /**
                     * 判断参数 SentenceID 是否已赋值
                     * @return SentenceID 是否已赋值
                     * 
                     */
                    bool SentenceIDHasBeenSet() const;

                private:

                    /**
                     * 英语句子
                     */
                    std::string m_sentence;
                    bool m_sentenceHasBeenSet;

                    /**
                     * 段落id
                     */
                    int64_t m_paraID;
                    bool m_paraIDHasBeenSet;

                    /**
                     * 句子id
                     */
                    int64_t m_sentenceID;
                    bool m_sentenceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_MODEL_SENTENCEITEM_H_
