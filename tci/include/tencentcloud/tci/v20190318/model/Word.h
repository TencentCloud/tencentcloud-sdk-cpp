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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_WORD_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_WORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 当前句子包含的所有单词信息
                */
                class Word : public AbstractModel
                {
                public:
                    Word();
                    ~Word() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前词的置信度
                     * @return Confidence 当前词的置信度
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置当前词的置信度
                     * @param _confidence 当前词的置信度
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取当前单词语音的起始时间点，单位为ms
                     * @return Mbtm 当前单词语音的起始时间点，单位为ms
                     * 
                     */
                    int64_t GetMbtm() const;

                    /**
                     * 设置当前单词语音的起始时间点，单位为ms
                     * @param _mbtm 当前单词语音的起始时间点，单位为ms
                     * 
                     */
                    void SetMbtm(const int64_t& _mbtm);

                    /**
                     * 判断参数 Mbtm 是否已赋值
                     * @return Mbtm 是否已赋值
                     * 
                     */
                    bool MbtmHasBeenSet() const;

                    /**
                     * 获取当前单词语音的终止时间点，单位为ms
                     * @return Metm 当前单词语音的终止时间点，单位为ms
                     * 
                     */
                    int64_t GetMetm() const;

                    /**
                     * 设置当前单词语音的终止时间点，单位为ms
                     * @param _metm 当前单词语音的终止时间点，单位为ms
                     * 
                     */
                    void SetMetm(const int64_t& _metm);

                    /**
                     * 判断参数 Metm 是否已赋值
                     * @return Metm 是否已赋值
                     * 
                     */
                    bool MetmHasBeenSet() const;

                    /**
                     * 获取当前词
                     * @return Text 当前词
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置当前词
                     * @param _text 当前词
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取当前词的字节数
                     * @return Wsize 当前词的字节数
                     * 
                     */
                    int64_t GetWsize() const;

                    /**
                     * 设置当前词的字节数
                     * @param _wsize 当前词的字节数
                     * 
                     */
                    void SetWsize(const int64_t& _wsize);

                    /**
                     * 判断参数 Wsize 是否已赋值
                     * @return Wsize 是否已赋值
                     * 
                     */
                    bool WsizeHasBeenSet() const;

                private:

                    /**
                     * 当前词的置信度
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 当前单词语音的起始时间点，单位为ms
                     */
                    int64_t m_mbtm;
                    bool m_mbtmHasBeenSet;

                    /**
                     * 当前单词语音的终止时间点，单位为ms
                     */
                    int64_t m_metm;
                    bool m_metmHasBeenSet;

                    /**
                     * 当前词
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 当前词的字节数
                     */
                    int64_t m_wsize;
                    bool m_wsizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_WORD_H_
