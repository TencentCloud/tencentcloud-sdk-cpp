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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_TRANSMITAUDIOSTREAMRESPONSE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_TRANSMITAUDIOSTREAMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/ASRStat.h>
#include <tencentcloud/tci/v20190318/model/WholeTextItem.h>
#include <tencentcloud/tci/v20190318/model/VocabDetailInfomation.h>
#include <tencentcloud/tci/v20190318/model/VocabStatInfomation.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * TransmitAudioStream返回参数结构体
                */
                class TransmitAudioStreamResponse : public AbstractModel
                {
                public:
                    TransmitAudioStreamResponse();
                    ~TransmitAudioStreamResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的当前音频的统计信息。当进度为100时返回。
                     * @return AsrStat 返回的当前音频的统计信息。当进度为100时返回。
                     * 
                     */
                    ASRStat GetAsrStat() const;

                    /**
                     * 判断参数 AsrStat 是否已赋值
                     * @return AsrStat 是否已赋值
                     * 
                     */
                    bool AsrStatHasBeenSet() const;

                    /**
                     * 获取返回当前音频流的详细信息，如果是流模式，返回的是对应流的详细信息，如果是 URL模式，返回的是查询的那一段seq对应的音频的详细信息。
                     * @return Texts 返回当前音频流的详细信息，如果是流模式，返回的是对应流的详细信息，如果是 URL模式，返回的是查询的那一段seq对应的音频的详细信息。
                     * 
                     */
                    std::vector<WholeTextItem> GetTexts() const;

                    /**
                     * 判断参数 Texts 是否已赋值
                     * @return Texts 是否已赋值
                     * 
                     */
                    bool TextsHasBeenSet() const;

                    /**
                     * 获取返回词汇库中的单词出现的详细时间信息。
                     * @return VocabAnalysisDetailInfo 返回词汇库中的单词出现的详细时间信息。
                     * 
                     */
                    std::vector<VocabDetailInfomation> GetVocabAnalysisDetailInfo() const;

                    /**
                     * 判断参数 VocabAnalysisDetailInfo 是否已赋值
                     * @return VocabAnalysisDetailInfo 是否已赋值
                     * 
                     */
                    bool VocabAnalysisDetailInfoHasBeenSet() const;

                    /**
                     * 获取返回词汇库中的单词出现的次数信息。
                     * @return VocabAnalysisStatInfo 返回词汇库中的单词出现的次数信息。
                     * 
                     */
                    std::vector<VocabStatInfomation> GetVocabAnalysisStatInfo() const;

                    /**
                     * 判断参数 VocabAnalysisStatInfo 是否已赋值
                     * @return VocabAnalysisStatInfo 是否已赋值
                     * 
                     */
                    bool VocabAnalysisStatInfoHasBeenSet() const;

                    /**
                     * 获取音频全部文本。
                     * @return AllTexts 音频全部文本。
                     * 
                     */
                    std::string GetAllTexts() const;

                    /**
                     * 判断参数 AllTexts 是否已赋值
                     * @return AllTexts 是否已赋值
                     * 
                     */
                    bool AllTextsHasBeenSet() const;

                    /**
                     * 获取临时保存的音频链接
                     * @return AudioUrl 临时保存的音频链接
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                private:

                    /**
                     * 返回的当前音频的统计信息。当进度为100时返回。
                     */
                    ASRStat m_asrStat;
                    bool m_asrStatHasBeenSet;

                    /**
                     * 返回当前音频流的详细信息，如果是流模式，返回的是对应流的详细信息，如果是 URL模式，返回的是查询的那一段seq对应的音频的详细信息。
                     */
                    std::vector<WholeTextItem> m_texts;
                    bool m_textsHasBeenSet;

                    /**
                     * 返回词汇库中的单词出现的详细时间信息。
                     */
                    std::vector<VocabDetailInfomation> m_vocabAnalysisDetailInfo;
                    bool m_vocabAnalysisDetailInfoHasBeenSet;

                    /**
                     * 返回词汇库中的单词出现的次数信息。
                     */
                    std::vector<VocabStatInfomation> m_vocabAnalysisStatInfo;
                    bool m_vocabAnalysisStatInfoHasBeenSet;

                    /**
                     * 音频全部文本。
                     */
                    std::string m_allTexts;
                    bool m_allTextsHasBeenSet;

                    /**
                     * 临时保存的音频链接
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_TRANSMITAUDIOSTREAMRESPONSE_H_
