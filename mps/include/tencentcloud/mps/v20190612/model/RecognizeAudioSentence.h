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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RECOGNIZEAUDIOSENTENCE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RECOGNIZEAUDIOSENTENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WordResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 识别音频单句结果
                */
                class RecognizeAudioSentence : public AbstractModel
                {
                public:
                    RecognizeAudioSentence();
                    ~RecognizeAudioSentence() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取在音频中的起始时间，单位秒
                     * @return Start 在音频中的起始时间，单位秒
                     * 
                     */
                    double GetStart() const;

                    /**
                     * 设置在音频中的起始时间，单位秒
                     * @param _start 在音频中的起始时间，单位秒
                     * 
                     */
                    void SetStart(const double& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取在音频中的截止时间，单位秒
                     * @return End 在音频中的截止时间，单位秒
                     * 
                     */
                    double GetEnd() const;

                    /**
                     * 设置在音频中的截止时间，单位秒
                     * @param _end 在音频中的截止时间，单位秒
                     * 
                     */
                    void SetEnd(const double& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                    /**
                     * 获取音频识别结果
                     * @return Text 音频识别结果
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置音频识别结果
                     * @param _text 音频识别结果
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
                     * 获取字词时间戳结果
                     * @return WordsInfo 字词时间戳结果
                     * 
                     */
                    std::vector<WordResult> GetWordsInfo() const;

                    /**
                     * 设置字词时间戳结果
                     * @param _wordsInfo 字词时间戳结果
                     * 
                     */
                    void SetWordsInfo(const std::vector<WordResult>& _wordsInfo);

                    /**
                     * 判断参数 WordsInfo 是否已赋值
                     * @return WordsInfo 是否已赋值
                     * 
                     */
                    bool WordsInfoHasBeenSet() const;

                private:

                    /**
                     * 在音频中的起始时间，单位秒
                     */
                    double m_start;
                    bool m_startHasBeenSet;

                    /**
                     * 在音频中的截止时间，单位秒
                     */
                    double m_end;
                    bool m_endHasBeenSet;

                    /**
                     * 音频识别结果
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 字词时间戳结果
                     */
                    std::vector<WordResult> m_wordsInfo;
                    bool m_wordsInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RECOGNIZEAUDIOSENTENCE_H_
