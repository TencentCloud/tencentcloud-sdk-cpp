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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_STANDARDAUDIORESULT_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_STANDARDAUDIORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 标准化接口图像分析结果
                */
                class StandardAudioResult : public AbstractModel
                {
                public:
                    StandardAudioResult();
                    ~StandardAudioResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回的当前音频的统计信息。当进度为100时返回。
                     * @return AsrStat 返回的当前音频的统计信息。当进度为100时返回。
                     * 
                     */
                    ASRStat GetAsrStat() const;

                    /**
                     * 设置返回的当前音频的统计信息。当进度为100时返回。
                     * @param _asrStat 返回的当前音频的统计信息。当进度为100时返回。
                     * 
                     */
                    void SetAsrStat(const ASRStat& _asrStat);

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
                     * 设置返回当前音频流的详细信息，如果是流模式，返回的是对应流的详细信息，如果是 URL模式，返回的是查询的那一段seq对应的音频的详细信息。
                     * @param _texts 返回当前音频流的详细信息，如果是流模式，返回的是对应流的详细信息，如果是 URL模式，返回的是查询的那一段seq对应的音频的详细信息。
                     * 
                     */
                    void SetTexts(const std::vector<WholeTextItem>& _texts);

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
                     * 设置返回词汇库中的单词出现的详细时间信息。
                     * @param _vocabAnalysisDetailInfo 返回词汇库中的单词出现的详细时间信息。
                     * 
                     */
                    void SetVocabAnalysisDetailInfo(const std::vector<VocabDetailInfomation>& _vocabAnalysisDetailInfo);

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
                     * 设置返回词汇库中的单词出现的次数信息。
                     * @param _vocabAnalysisStatInfo 返回词汇库中的单词出现的次数信息。
                     * 
                     */
                    void SetVocabAnalysisStatInfo(const std::vector<VocabStatInfomation>& _vocabAnalysisStatInfo);

                    /**
                     * 判断参数 VocabAnalysisStatInfo 是否已赋值
                     * @return VocabAnalysisStatInfo 是否已赋值
                     * 
                     */
                    bool VocabAnalysisStatInfoHasBeenSet() const;

                    /**
                     * 获取状态描述
                     * @return Message 状态描述
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置状态描述
                     * @param _message 状态描述
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return Status 任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
                     * @param _status 任务状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取结果数量
                     * @return TotalCount 结果数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置结果数量
                     * @param _totalCount 结果数量
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

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
                     * 状态描述
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 结果数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_STANDARDAUDIORESULT_H_
