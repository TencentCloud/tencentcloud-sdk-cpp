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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTASK_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/MediaMetaData.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskResult.h>
#include <tencentcloud/mps/v20190612/model/AiContentReviewResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisResult.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionResult.h>
#include <tencentcloud/mps/v20190612/model/ScheduleQualityControlTaskResult.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitlesResult.h>
#include <tencentcloud/mps/v20190612/model/SmartEraseTaskResult.h>
#include <tencentcloud/mps/v20190612/model/AIDubbingTaskResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 媒体处理任务信息
                */
                class WorkflowTask : public AbstractModel
                {
                public:
                    WorkflowTask();
                    ~WorkflowTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>媒体处理任务 ID。</p>
                     * @return TaskId <p>媒体处理任务 ID。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>媒体处理任务 ID。</p>
                     * @param _taskId <p>媒体处理任务 ID。</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务流状态，取值：</p><li>PROCESSING：处理中；</li><li>FINISH：已完成。</li>
                     * @return Status <p>任务流状态，取值：</p><li>PROCESSING：处理中；</li><li>FINISH：已完成。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务流状态，取值：</p><li>PROCESSING：处理中；</li><li>FINISH：已完成。</li>
                     * @param _status <p>任务流状态，取值：</p><li>PROCESSING：处理中；</li><li>FINISH：已完成。</li>
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
                     * 获取<p>源异常时返回非0错误码，返回0 时请使用各个具体任务的 ErrCode。</p>
                     * @return ErrCode <p>源异常时返回非0错误码，返回0 时请使用各个具体任务的 ErrCode。</p>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>源异常时返回非0错误码，返回0 时请使用各个具体任务的 ErrCode。</p>
                     * @param _errCode <p>源异常时返回非0错误码，返回0 时请使用各个具体任务的 ErrCode。</p>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>源异常时返回对应异常Message，否则请使用各个具体任务的 Message。</p>
                     * @return Message <p>源异常时返回对应异常Message，否则请使用各个具体任务的 Message。</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>源异常时返回对应异常Message，否则请使用各个具体任务的 Message。</p>
                     * @param _message <p>源异常时返回对应异常Message，否则请使用各个具体任务的 Message。</p>
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
                     * 获取<p>媒体处理的目标文件信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputInfo <p>媒体处理的目标文件信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置<p>媒体处理的目标文件信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputInfo <p>媒体处理的目标文件信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取<p>原始视频的元信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaData <p>原始视频的元信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置<p>原始视频的元信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metaData <p>原始视频的元信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取<p>媒体处理任务的执行状态与结果。</p>
                     * @return MediaProcessResultSet <p>媒体处理任务的执行状态与结果。</p>
                     * 
                     */
                    std::vector<MediaProcessTaskResult> GetMediaProcessResultSet() const;

                    /**
                     * 设置<p>媒体处理任务的执行状态与结果。</p>
                     * @param _mediaProcessResultSet <p>媒体处理任务的执行状态与结果。</p>
                     * 
                     */
                    void SetMediaProcessResultSet(const std::vector<MediaProcessTaskResult>& _mediaProcessResultSet);

                    /**
                     * 判断参数 MediaProcessResultSet 是否已赋值
                     * @return MediaProcessResultSet 是否已赋值
                     * 
                     */
                    bool MediaProcessResultSetHasBeenSet() const;

                    /**
                     * 获取<p>视频内容审核任务的执行状态与结果。</p>
                     * @return AiContentReviewResultSet <p>视频内容审核任务的执行状态与结果。</p>
                     * 
                     */
                    std::vector<AiContentReviewResult> GetAiContentReviewResultSet() const;

                    /**
                     * 设置<p>视频内容审核任务的执行状态与结果。</p>
                     * @param _aiContentReviewResultSet <p>视频内容审核任务的执行状态与结果。</p>
                     * 
                     */
                    void SetAiContentReviewResultSet(const std::vector<AiContentReviewResult>& _aiContentReviewResultSet);

                    /**
                     * 判断参数 AiContentReviewResultSet 是否已赋值
                     * @return AiContentReviewResultSet 是否已赋值
                     * 
                     */
                    bool AiContentReviewResultSetHasBeenSet() const;

                    /**
                     * 获取<p>视频内容分析任务的执行状态与结果。</p>
                     * @return AiAnalysisResultSet <p>视频内容分析任务的执行状态与结果。</p>
                     * 
                     */
                    std::vector<AiAnalysisResult> GetAiAnalysisResultSet() const;

                    /**
                     * 设置<p>视频内容分析任务的执行状态与结果。</p>
                     * @param _aiAnalysisResultSet <p>视频内容分析任务的执行状态与结果。</p>
                     * 
                     */
                    void SetAiAnalysisResultSet(const std::vector<AiAnalysisResult>& _aiAnalysisResultSet);

                    /**
                     * 判断参数 AiAnalysisResultSet 是否已赋值
                     * @return AiAnalysisResultSet 是否已赋值
                     * 
                     */
                    bool AiAnalysisResultSetHasBeenSet() const;

                    /**
                     * 获取<p>视频内容识别任务的执行状态与结果。</p>
                     * @return AiRecognitionResultSet <p>视频内容识别任务的执行状态与结果。</p>
                     * 
                     */
                    std::vector<AiRecognitionResult> GetAiRecognitionResultSet() const;

                    /**
                     * 设置<p>视频内容识别任务的执行状态与结果。</p>
                     * @param _aiRecognitionResultSet <p>视频内容识别任务的执行状态与结果。</p>
                     * 
                     */
                    void SetAiRecognitionResultSet(const std::vector<AiRecognitionResult>& _aiRecognitionResultSet);

                    /**
                     * 判断参数 AiRecognitionResultSet 是否已赋值
                     * @return AiRecognitionResultSet 是否已赋值
                     * 
                     */
                    bool AiRecognitionResultSetHasBeenSet() const;

                    /**
                     * 获取<p>媒体质检任务的执行状态与结果。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiQualityControlTaskResult <p>媒体质检任务的执行状态与结果。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduleQualityControlTaskResult GetAiQualityControlTaskResult() const;

                    /**
                     * 设置<p>媒体质检任务的执行状态与结果。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aiQualityControlTaskResult <p>媒体质检任务的执行状态与结果。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAiQualityControlTaskResult(const ScheduleQualityControlTaskResult& _aiQualityControlTaskResult);

                    /**
                     * 判断参数 AiQualityControlTaskResult 是否已赋值
                     * @return AiQualityControlTaskResult 是否已赋值
                     * 
                     */
                    bool AiQualityControlTaskResultHasBeenSet() const;

                    /**
                     * 获取<p>智能字幕任务的执行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartSubtitlesTaskResult <p>智能字幕任务的执行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SmartSubtitlesResult> GetSmartSubtitlesTaskResult() const;

                    /**
                     * 设置<p>智能字幕任务的执行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartSubtitlesTaskResult <p>智能字幕任务的执行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmartSubtitlesTaskResult(const std::vector<SmartSubtitlesResult>& _smartSubtitlesTaskResult);

                    /**
                     * 判断参数 SmartSubtitlesTaskResult 是否已赋值
                     * @return SmartSubtitlesTaskResult 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskResultHasBeenSet() const;

                    /**
                     * 获取<p>智能擦除任务的执行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartEraseTaskResult <p>智能擦除任务的执行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartEraseTaskResult GetSmartEraseTaskResult() const;

                    /**
                     * 设置<p>智能擦除任务的执行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartEraseTaskResult <p>智能擦除任务的执行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmartEraseTaskResult(const SmartEraseTaskResult& _smartEraseTaskResult);

                    /**
                     * 判断参数 SmartEraseTaskResult 是否已赋值
                     * @return SmartEraseTaskResult 是否已赋值
                     * 
                     */
                    bool SmartEraseTaskResultHasBeenSet() const;

                    /**
                     * 获取<p>AI配音任务的执行结果。</p>
                     * @return AiDubbingTaskResult <p>AI配音任务的执行结果。</p>
                     * 
                     */
                    AIDubbingTaskResult GetAiDubbingTaskResult() const;

                    /**
                     * 设置<p>AI配音任务的执行结果。</p>
                     * @param _aiDubbingTaskResult <p>AI配音任务的执行结果。</p>
                     * 
                     */
                    void SetAiDubbingTaskResult(const AIDubbingTaskResult& _aiDubbingTaskResult);

                    /**
                     * 判断参数 AiDubbingTaskResult 是否已赋值
                     * @return AiDubbingTaskResult 是否已赋值
                     * 
                     */
                    bool AiDubbingTaskResultHasBeenSet() const;

                private:

                    /**
                     * <p>媒体处理任务 ID。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务流状态，取值：</p><li>PROCESSING：处理中；</li><li>FINISH：已完成。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>源异常时返回非0错误码，返回0 时请使用各个具体任务的 ErrCode。</p>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>源异常时返回对应异常Message，否则请使用各个具体任务的 Message。</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>媒体处理的目标文件信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * <p>原始视频的元信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * <p>媒体处理任务的执行状态与结果。</p>
                     */
                    std::vector<MediaProcessTaskResult> m_mediaProcessResultSet;
                    bool m_mediaProcessResultSetHasBeenSet;

                    /**
                     * <p>视频内容审核任务的执行状态与结果。</p>
                     */
                    std::vector<AiContentReviewResult> m_aiContentReviewResultSet;
                    bool m_aiContentReviewResultSetHasBeenSet;

                    /**
                     * <p>视频内容分析任务的执行状态与结果。</p>
                     */
                    std::vector<AiAnalysisResult> m_aiAnalysisResultSet;
                    bool m_aiAnalysisResultSetHasBeenSet;

                    /**
                     * <p>视频内容识别任务的执行状态与结果。</p>
                     */
                    std::vector<AiRecognitionResult> m_aiRecognitionResultSet;
                    bool m_aiRecognitionResultSetHasBeenSet;

                    /**
                     * <p>媒体质检任务的执行状态与结果。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleQualityControlTaskResult m_aiQualityControlTaskResult;
                    bool m_aiQualityControlTaskResultHasBeenSet;

                    /**
                     * <p>智能字幕任务的执行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SmartSubtitlesResult> m_smartSubtitlesTaskResult;
                    bool m_smartSubtitlesTaskResultHasBeenSet;

                    /**
                     * <p>智能擦除任务的执行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartEraseTaskResult m_smartEraseTaskResult;
                    bool m_smartEraseTaskResultHasBeenSet;

                    /**
                     * <p>AI配音任务的执行结果。</p>
                     */
                    AIDubbingTaskResult m_aiDubbingTaskResult;
                    bool m_aiDubbingTaskResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTASK_H_
