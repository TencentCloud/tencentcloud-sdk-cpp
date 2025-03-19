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
                     * 获取媒体处理任务 ID。
                     * @return TaskId 媒体处理任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置媒体处理任务 ID。
                     * @param _taskId 媒体处理任务 ID。
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
                     * 获取任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     * @return Status 任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     * @param _status 任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
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
                     * 获取源异常时返回非0错误码，返回0 时请使用各个具体任务的 ErrCode。
                     * @return ErrCode 源异常时返回非0错误码，返回0 时请使用各个具体任务的 ErrCode。
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置源异常时返回非0错误码，返回0 时请使用各个具体任务的 ErrCode。
                     * @param _errCode 源异常时返回非0错误码，返回0 时请使用各个具体任务的 ErrCode。
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
                     * 获取源异常时返回对应异常Message，否则请使用各个具体任务的 Message。
                     * @return Message 源异常时返回对应异常Message，否则请使用各个具体任务的 Message。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置源异常时返回对应异常Message，否则请使用各个具体任务的 Message。
                     * @param _message 源异常时返回对应异常Message，否则请使用各个具体任务的 Message。
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
                     * 获取媒体处理的目标文件信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputInfo 媒体处理的目标文件信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置媒体处理的目标文件信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputInfo 媒体处理的目标文件信息。
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
                     * 获取原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaData 原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metaData 原始视频的元信息。
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
                     * 获取媒体处理任务的执行状态与结果。
                     * @return MediaProcessResultSet 媒体处理任务的执行状态与结果。
                     * 
                     */
                    std::vector<MediaProcessTaskResult> GetMediaProcessResultSet() const;

                    /**
                     * 设置媒体处理任务的执行状态与结果。
                     * @param _mediaProcessResultSet 媒体处理任务的执行状态与结果。
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
                     * 获取视频内容审核任务的执行状态与结果。
                     * @return AiContentReviewResultSet 视频内容审核任务的执行状态与结果。
                     * 
                     */
                    std::vector<AiContentReviewResult> GetAiContentReviewResultSet() const;

                    /**
                     * 设置视频内容审核任务的执行状态与结果。
                     * @param _aiContentReviewResultSet 视频内容审核任务的执行状态与结果。
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
                     * 获取视频内容分析任务的执行状态与结果。
                     * @return AiAnalysisResultSet 视频内容分析任务的执行状态与结果。
                     * 
                     */
                    std::vector<AiAnalysisResult> GetAiAnalysisResultSet() const;

                    /**
                     * 设置视频内容分析任务的执行状态与结果。
                     * @param _aiAnalysisResultSet 视频内容分析任务的执行状态与结果。
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
                     * 获取视频内容识别任务的执行状态与结果。
                     * @return AiRecognitionResultSet 视频内容识别任务的执行状态与结果。
                     * 
                     */
                    std::vector<AiRecognitionResult> GetAiRecognitionResultSet() const;

                    /**
                     * 设置视频内容识别任务的执行状态与结果。
                     * @param _aiRecognitionResultSet 视频内容识别任务的执行状态与结果。
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
                     * 获取媒体质检任务的执行状态与结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiQualityControlTaskResult 媒体质检任务的执行状态与结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduleQualityControlTaskResult GetAiQualityControlTaskResult() const;

                    /**
                     * 设置媒体质检任务的执行状态与结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aiQualityControlTaskResult 媒体质检任务的执行状态与结果。
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
                     * 获取智能字幕任务的执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartSubtitlesTaskResult 智能字幕任务的执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SmartSubtitlesResult> GetSmartSubtitlesTaskResult() const;

                    /**
                     * 设置智能字幕任务的执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartSubtitlesTaskResult 智能字幕任务的执行结果
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

                private:

                    /**
                     * 媒体处理任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 源异常时返回非0错误码，返回0 时请使用各个具体任务的 ErrCode。
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 源异常时返回对应异常Message，否则请使用各个具体任务的 Message。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 媒体处理的目标文件信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * 媒体处理任务的执行状态与结果。
                     */
                    std::vector<MediaProcessTaskResult> m_mediaProcessResultSet;
                    bool m_mediaProcessResultSetHasBeenSet;

                    /**
                     * 视频内容审核任务的执行状态与结果。
                     */
                    std::vector<AiContentReviewResult> m_aiContentReviewResultSet;
                    bool m_aiContentReviewResultSetHasBeenSet;

                    /**
                     * 视频内容分析任务的执行状态与结果。
                     */
                    std::vector<AiAnalysisResult> m_aiAnalysisResultSet;
                    bool m_aiAnalysisResultSetHasBeenSet;

                    /**
                     * 视频内容识别任务的执行状态与结果。
                     */
                    std::vector<AiRecognitionResult> m_aiRecognitionResultSet;
                    bool m_aiRecognitionResultSetHasBeenSet;

                    /**
                     * 媒体质检任务的执行状态与结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleQualityControlTaskResult m_aiQualityControlTaskResult;
                    bool m_aiQualityControlTaskResultHasBeenSet;

                    /**
                     * 智能字幕任务的执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SmartSubtitlesResult> m_smartSubtitlesTaskResult;
                    bool m_smartSubtitlesTaskResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTASK_H_
