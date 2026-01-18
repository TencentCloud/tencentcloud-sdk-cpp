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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIATASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIATASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSOutputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MPS智能任务
                */
                class MPSAiMediaTask : public AbstractModel
                {
                public:
                    MPSAiMediaTask();
                    ~MPSAiMediaTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MPS智能任务的模板 ID
                     * @return Definition MPS智能任务的模板 ID
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置MPS智能任务的模板 ID
                     * @param _definition MPS智能任务的模板 ID
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取MPS智能任务输出文件集合
                     * @return OutputFile MPS智能任务输出文件集合
                     * 
                     */
                    std::vector<MPSOutputFileInfo> GetOutputFile() const;

                    /**
                     * 设置MPS智能任务输出文件集合
                     * @param _outputFile MPS智能任务输出文件集合
                     * 
                     */
                    void SetOutputFile(const std::vector<MPSOutputFileInfo>& _outputFile);

                    /**
                     * 判断参数 OutputFile 是否已赋值
                     * @return OutputFile 是否已赋值
                     * 
                     */
                    bool OutputFileHasBeenSet() const;

                    /**
                     * 获取MPS智能任务返回的结果，该字段对应 MPS 任务返回中的Output结果，以 JSON 格式返回
不同MPS任务输出结果结构不同，具体返回内容参考MPS任务输出结构体
[智能分类结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskClassificationOutput)
[智能封面结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskCoverOutput)
[智能标签结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskTagOutput)
[智能按帧标签分类结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskFrameTagOutput)
[智能高光结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskHighlightOutput)
[智能拆条结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskSegmentOutput)
[智能片头片尾结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskHeadTailOutput)
[智能摘要结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskDescriptionOutput)
[智能横转竖结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskHorizontalToVerticalOutput)
[智能译制结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskDubbingOutput)
[智能视频理解结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskVideoComprehensionOutput)
[智能字幕语音全文识别结果](https://cloud.tencent.com/document/product/862/37615#SmartSubtitleTaskAsrFullTextResultOutput)
[智能字幕翻译结果](https://cloud.tencent.com/document/product/862/37615#SmartSubtitleTaskTransTextResultOutput)
[智能字幕纯字幕文件翻译结果](https://cloud.tencent.com/document/product/862/37615#PureSubtitleTransResultOutput)
[智能字幕文字提取字幕结果](https://cloud.tencent.com/document/product/862/37615#SmartSubtitleTaskTextResultOutput)


                     * @return OutputText MPS智能任务返回的结果，该字段对应 MPS 任务返回中的Output结果，以 JSON 格式返回
不同MPS任务输出结果结构不同，具体返回内容参考MPS任务输出结构体
[智能分类结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskClassificationOutput)
[智能封面结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskCoverOutput)
[智能标签结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskTagOutput)
[智能按帧标签分类结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskFrameTagOutput)
[智能高光结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskHighlightOutput)
[智能拆条结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskSegmentOutput)
[智能片头片尾结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskHeadTailOutput)
[智能摘要结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskDescriptionOutput)
[智能横转竖结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskHorizontalToVerticalOutput)
[智能译制结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskDubbingOutput)
[智能视频理解结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskVideoComprehensionOutput)
[智能字幕语音全文识别结果](https://cloud.tencent.com/document/product/862/37615#SmartSubtitleTaskAsrFullTextResultOutput)
[智能字幕翻译结果](https://cloud.tencent.com/document/product/862/37615#SmartSubtitleTaskTransTextResultOutput)
[智能字幕纯字幕文件翻译结果](https://cloud.tencent.com/document/product/862/37615#PureSubtitleTransResultOutput)
[智能字幕文字提取字幕结果](https://cloud.tencent.com/document/product/862/37615#SmartSubtitleTaskTextResultOutput)


                     * 
                     */
                    std::string GetOutputText() const;

                    /**
                     * 设置MPS智能任务返回的结果，该字段对应 MPS 任务返回中的Output结果，以 JSON 格式返回
不同MPS任务输出结果结构不同，具体返回内容参考MPS任务输出结构体
[智能分类结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskClassificationOutput)
[智能封面结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskCoverOutput)
[智能标签结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskTagOutput)
[智能按帧标签分类结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskFrameTagOutput)
[智能高光结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskHighlightOutput)
[智能拆条结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskSegmentOutput)
[智能片头片尾结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskHeadTailOutput)
[智能摘要结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskDescriptionOutput)
[智能横转竖结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskHorizontalToVerticalOutput)
[智能译制结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskDubbingOutput)
[智能视频理解结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskVideoComprehensionOutput)
[智能字幕语音全文识别结果](https://cloud.tencent.com/document/product/862/37615#SmartSubtitleTaskAsrFullTextResultOutput)
[智能字幕翻译结果](https://cloud.tencent.com/document/product/862/37615#SmartSubtitleTaskTransTextResultOutput)
[智能字幕纯字幕文件翻译结果](https://cloud.tencent.com/document/product/862/37615#PureSubtitleTransResultOutput)
[智能字幕文字提取字幕结果](https://cloud.tencent.com/document/product/862/37615#SmartSubtitleTaskTextResultOutput)


                     * @param _outputText MPS智能任务返回的结果，该字段对应 MPS 任务返回中的Output结果，以 JSON 格式返回
不同MPS任务输出结果结构不同，具体返回内容参考MPS任务输出结构体
[智能分类结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskClassificationOutput)
[智能封面结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskCoverOutput)
[智能标签结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskTagOutput)
[智能按帧标签分类结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskFrameTagOutput)
[智能高光结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskHighlightOutput)
[智能拆条结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskSegmentOutput)
[智能片头片尾结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskHeadTailOutput)
[智能摘要结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskDescriptionOutput)
[智能横转竖结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskHorizontalToVerticalOutput)
[智能译制结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskDubbingOutput)
[智能视频理解结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskVideoComprehensionOutput)
[智能字幕语音全文识别结果](https://cloud.tencent.com/document/product/862/37615#SmartSubtitleTaskAsrFullTextResultOutput)
[智能字幕翻译结果](https://cloud.tencent.com/document/product/862/37615#SmartSubtitleTaskTransTextResultOutput)
[智能字幕纯字幕文件翻译结果](https://cloud.tencent.com/document/product/862/37615#PureSubtitleTransResultOutput)
[智能字幕文字提取字幕结果](https://cloud.tencent.com/document/product/862/37615#SmartSubtitleTaskTextResultOutput)


                     * 
                     */
                    void SetOutputText(const std::string& _outputText);

                    /**
                     * 判断参数 OutputText 是否已赋值
                     * @return OutputText 是否已赋值
                     * 
                     */
                    bool OutputTextHasBeenSet() const;

                private:

                    /**
                     * MPS智能任务的模板 ID
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * MPS智能任务输出文件集合
                     */
                    std::vector<MPSOutputFileInfo> m_outputFile;
                    bool m_outputFileHasBeenSet;

                    /**
                     * MPS智能任务返回的结果，该字段对应 MPS 任务返回中的Output结果，以 JSON 格式返回
不同MPS任务输出结果结构不同，具体返回内容参考MPS任务输出结构体
[智能分类结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskClassificationOutput)
[智能封面结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskCoverOutput)
[智能标签结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskTagOutput)
[智能按帧标签分类结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskFrameTagOutput)
[智能高光结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskHighlightOutput)
[智能拆条结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskSegmentOutput)
[智能片头片尾结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskHeadTailOutput)
[智能摘要结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskDescriptionOutput)
[智能横转竖结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskHorizontalToVerticalOutput)
[智能译制结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskDubbingOutput)
[智能视频理解结果](https://cloud.tencent.com/document/product/862/37615#AiAnalysisTaskVideoComprehensionOutput)
[智能字幕语音全文识别结果](https://cloud.tencent.com/document/product/862/37615#SmartSubtitleTaskAsrFullTextResultOutput)
[智能字幕翻译结果](https://cloud.tencent.com/document/product/862/37615#SmartSubtitleTaskTransTextResultOutput)
[智能字幕纯字幕文件翻译结果](https://cloud.tencent.com/document/product/862/37615#PureSubtitleTransResultOutput)
[智能字幕文字提取字幕结果](https://cloud.tencent.com/document/product/862/37615#SmartSubtitleTaskTextResultOutput)


                     */
                    std::string m_outputText;
                    bool m_outputTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIATASK_H_
