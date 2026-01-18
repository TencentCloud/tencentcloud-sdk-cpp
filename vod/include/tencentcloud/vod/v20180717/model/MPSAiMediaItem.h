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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIAITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSAiMediaTask.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MPS AI媒资任务项
                */
                class MPSAiMediaItem : public AbstractModel
                {
                public:
                    MPSAiMediaItem();
                    ~MPSAiMediaItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MPS智能处理任务类型，可取值：
<li>AiAnalysis.ClassificationTask：智能分类任务。</li>
<li>AiAnalysis.CoverTask：智能封面任务。</li>
<li>AiAnalysis.TagTask：智能标签任务。</li>
<li>AiAnalysis.FrameTagTask：智能按帧标签任务。</li>
<li>AiAnalysis.HighlightTask：智能高光任务。</li>
<li>AiAnalysis.SegmentTask：智能拆条任务。</li>
<li>AiAnalysis.HeadTailTask：智能片头片尾任务。</li>
<li>AiAnalysis.DescriptionTask：智能摘要任务。</li>
<li>AiAnalysis.HorizontalToVerticalTask：智能横转竖任务。</li>
<li>AiAnalysis.DubbingTask：智能译制任务。</li>
<li>AiAnalysis.VideoRemakeTask：智能去重任务。</li>
<li>AiAnalysis.VideoComprehensionTask：视频理解任务。</li>
<li>SmartSubtitle.AsrFullTextTask：智能语音全文识别任务。</li>
<li>SmartSubtitle.TransTextTask：	翻译结果。</li>
<li>SmartSubtitle.PureSubtitleTransTask：返回纯字幕文件翻译结果。</li>
<li>SmartSubtitle.OcrFullTextTask：智能文字提取字幕任务。</li>
                     * @return TaskType MPS智能处理任务类型，可取值：
<li>AiAnalysis.ClassificationTask：智能分类任务。</li>
<li>AiAnalysis.CoverTask：智能封面任务。</li>
<li>AiAnalysis.TagTask：智能标签任务。</li>
<li>AiAnalysis.FrameTagTask：智能按帧标签任务。</li>
<li>AiAnalysis.HighlightTask：智能高光任务。</li>
<li>AiAnalysis.SegmentTask：智能拆条任务。</li>
<li>AiAnalysis.HeadTailTask：智能片头片尾任务。</li>
<li>AiAnalysis.DescriptionTask：智能摘要任务。</li>
<li>AiAnalysis.HorizontalToVerticalTask：智能横转竖任务。</li>
<li>AiAnalysis.DubbingTask：智能译制任务。</li>
<li>AiAnalysis.VideoRemakeTask：智能去重任务。</li>
<li>AiAnalysis.VideoComprehensionTask：视频理解任务。</li>
<li>SmartSubtitle.AsrFullTextTask：智能语音全文识别任务。</li>
<li>SmartSubtitle.TransTextTask：	翻译结果。</li>
<li>SmartSubtitle.PureSubtitleTransTask：返回纯字幕文件翻译结果。</li>
<li>SmartSubtitle.OcrFullTextTask：智能文字提取字幕任务。</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置MPS智能处理任务类型，可取值：
<li>AiAnalysis.ClassificationTask：智能分类任务。</li>
<li>AiAnalysis.CoverTask：智能封面任务。</li>
<li>AiAnalysis.TagTask：智能标签任务。</li>
<li>AiAnalysis.FrameTagTask：智能按帧标签任务。</li>
<li>AiAnalysis.HighlightTask：智能高光任务。</li>
<li>AiAnalysis.SegmentTask：智能拆条任务。</li>
<li>AiAnalysis.HeadTailTask：智能片头片尾任务。</li>
<li>AiAnalysis.DescriptionTask：智能摘要任务。</li>
<li>AiAnalysis.HorizontalToVerticalTask：智能横转竖任务。</li>
<li>AiAnalysis.DubbingTask：智能译制任务。</li>
<li>AiAnalysis.VideoRemakeTask：智能去重任务。</li>
<li>AiAnalysis.VideoComprehensionTask：视频理解任务。</li>
<li>SmartSubtitle.AsrFullTextTask：智能语音全文识别任务。</li>
<li>SmartSubtitle.TransTextTask：	翻译结果。</li>
<li>SmartSubtitle.PureSubtitleTransTask：返回纯字幕文件翻译结果。</li>
<li>SmartSubtitle.OcrFullTextTask：智能文字提取字幕任务。</li>
                     * @param _taskType MPS智能处理任务类型，可取值：
<li>AiAnalysis.ClassificationTask：智能分类任务。</li>
<li>AiAnalysis.CoverTask：智能封面任务。</li>
<li>AiAnalysis.TagTask：智能标签任务。</li>
<li>AiAnalysis.FrameTagTask：智能按帧标签任务。</li>
<li>AiAnalysis.HighlightTask：智能高光任务。</li>
<li>AiAnalysis.SegmentTask：智能拆条任务。</li>
<li>AiAnalysis.HeadTailTask：智能片头片尾任务。</li>
<li>AiAnalysis.DescriptionTask：智能摘要任务。</li>
<li>AiAnalysis.HorizontalToVerticalTask：智能横转竖任务。</li>
<li>AiAnalysis.DubbingTask：智能译制任务。</li>
<li>AiAnalysis.VideoRemakeTask：智能去重任务。</li>
<li>AiAnalysis.VideoComprehensionTask：视频理解任务。</li>
<li>SmartSubtitle.AsrFullTextTask：智能语音全文识别任务。</li>
<li>SmartSubtitle.TransTextTask：	翻译结果。</li>
<li>SmartSubtitle.PureSubtitleTransTask：返回纯字幕文件翻译结果。</li>
<li>SmartSubtitle.OcrFullTextTask：智能文字提取字幕任务。</li>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取MPS 智能处理任务结果集合
                     * @return AiMediaTasks MPS 智能处理任务结果集合
                     * 
                     */
                    std::vector<MPSAiMediaTask> GetAiMediaTasks() const;

                    /**
                     * 设置MPS 智能处理任务结果集合
                     * @param _aiMediaTasks MPS 智能处理任务结果集合
                     * 
                     */
                    void SetAiMediaTasks(const std::vector<MPSAiMediaTask>& _aiMediaTasks);

                    /**
                     * 判断参数 AiMediaTasks 是否已赋值
                     * @return AiMediaTasks 是否已赋值
                     * 
                     */
                    bool AiMediaTasksHasBeenSet() const;

                private:

                    /**
                     * MPS智能处理任务类型，可取值：
<li>AiAnalysis.ClassificationTask：智能分类任务。</li>
<li>AiAnalysis.CoverTask：智能封面任务。</li>
<li>AiAnalysis.TagTask：智能标签任务。</li>
<li>AiAnalysis.FrameTagTask：智能按帧标签任务。</li>
<li>AiAnalysis.HighlightTask：智能高光任务。</li>
<li>AiAnalysis.SegmentTask：智能拆条任务。</li>
<li>AiAnalysis.HeadTailTask：智能片头片尾任务。</li>
<li>AiAnalysis.DescriptionTask：智能摘要任务。</li>
<li>AiAnalysis.HorizontalToVerticalTask：智能横转竖任务。</li>
<li>AiAnalysis.DubbingTask：智能译制任务。</li>
<li>AiAnalysis.VideoRemakeTask：智能去重任务。</li>
<li>AiAnalysis.VideoComprehensionTask：视频理解任务。</li>
<li>SmartSubtitle.AsrFullTextTask：智能语音全文识别任务。</li>
<li>SmartSubtitle.TransTextTask：	翻译结果。</li>
<li>SmartSubtitle.PureSubtitleTransTask：返回纯字幕文件翻译结果。</li>
<li>SmartSubtitle.OcrFullTextTask：智能文字提取字幕任务。</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * MPS 智能处理任务结果集合
                     */
                    std::vector<MPSAiMediaTask> m_aiMediaTasks;
                    bool m_aiMediaTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIAITEM_H_
