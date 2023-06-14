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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBECONVERSATIONTASKRESPONSE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBECONVERSATIONTASKRESPONSE_H_

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
                * DescribeConversationTask返回参数结构体
                */
                class DescribeConversationTaskResponse : public AbstractModel
                {
                public:
                    DescribeConversationTaskResponse();
                    ~DescribeConversationTaskResponse() = default;
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
                     * 获取整个音频流的全部文本
                     * @return AllTexts 整个音频流的全部文本
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
                     * 获取音频任务唯一id。在URL方式时提交请求后会返回一个jobid，后续查询该url的结果时使用这个jobid进行查询。
                     * @return JobId 音频任务唯一id。在URL方式时提交请求后会返回一个jobid，后续查询该url的结果时使用这个jobid进行查询。
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取返回的当前处理进度。
                     * @return Progress 返回的当前处理进度。
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取结果总数
                     * @return TotalCount 结果总数
                     * 
                     */
                    int64_t GetTotalCount() const;

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
                     * 整个音频流的全部文本
                     */
                    std::string m_allTexts;
                    bool m_allTextsHasBeenSet;

                    /**
                     * 音频任务唯一id。在URL方式时提交请求后会返回一个jobid，后续查询该url的结果时使用这个jobid进行查询。
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 返回的当前处理进度。
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 结果总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBECONVERSATIONTASKRESPONSE_H_
