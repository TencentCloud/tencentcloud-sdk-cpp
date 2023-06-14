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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIAPROCESSTASKRESULT_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIAPROCESSTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/MediaCuttingTaskResult.h>
#include <tencentcloud/ie/v20200304/model/MediaJoiningTaskResult.h>
#include <tencentcloud/ie/v20200304/model/MediaRecognitionTaskResult.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 编辑处理/任务处理结果
                */
                class MediaProcessTaskResult : public AbstractModel
                {
                public:
                    MediaProcessTaskResult();
                    ~MediaProcessTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取编辑处理任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 编辑处理任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置编辑处理任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 编辑处理任务ID。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取编辑处理任务类型，取值：
MediaEditing：视频编辑（待上线）；
MediaCutting：视频剪切；
MediaJoining：视频拼接。
MediaRecognition：媒体识别；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 编辑处理任务类型，取值：
MediaEditing：视频编辑（待上线）；
MediaCutting：视频剪切；
MediaJoining：视频拼接。
MediaRecognition：媒体识别；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置编辑处理任务类型，取值：
MediaEditing：视频编辑（待上线）；
MediaCutting：视频剪切；
MediaJoining：视频拼接。
MediaRecognition：媒体识别；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 编辑处理任务类型，取值：
MediaEditing：视频编辑（待上线）；
MediaCutting：视频剪切；
MediaJoining：视频拼接。
MediaRecognition：媒体识别；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取处理进度，范围：[0,100]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Progress 处理进度，范围：[0,100]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置处理进度，范围：[0,100]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _progress 处理进度，范围：[0,100]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取任务状态：
1100：等待中；
1200：执行中；
2000：成功；
5000：失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务状态：
1100：等待中；
1200：执行中；
2000：成功；
5000：失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态：
1100：等待中；
1200：执行中；
2000：成功；
5000：失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 任务状态：
1100：等待中；
1200：执行中；
2000：成功；
5000：失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrCode 任务错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置任务错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errCode 任务错误码。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrMsg 任务错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置任务错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errMsg 任务错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取剪切任务处理结果，当Type=MediaCutting时才有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaCuttingTaskResult 剪切任务处理结果，当Type=MediaCutting时才有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaCuttingTaskResult GetMediaCuttingTaskResult() const;

                    /**
                     * 设置剪切任务处理结果，当Type=MediaCutting时才有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mediaCuttingTaskResult 剪切任务处理结果，当Type=MediaCutting时才有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMediaCuttingTaskResult(const MediaCuttingTaskResult& _mediaCuttingTaskResult);

                    /**
                     * 判断参数 MediaCuttingTaskResult 是否已赋值
                     * @return MediaCuttingTaskResult 是否已赋值
                     * 
                     */
                    bool MediaCuttingTaskResultHasBeenSet() const;

                    /**
                     * 获取拼接任务处理结果，当Type=MediaJoining时才有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaJoiningTaskResult 拼接任务处理结果，当Type=MediaJoining时才有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaJoiningTaskResult GetMediaJoiningTaskResult() const;

                    /**
                     * 设置拼接任务处理结果，当Type=MediaJoining时才有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mediaJoiningTaskResult 拼接任务处理结果，当Type=MediaJoining时才有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMediaJoiningTaskResult(const MediaJoiningTaskResult& _mediaJoiningTaskResult);

                    /**
                     * 判断参数 MediaJoiningTaskResult 是否已赋值
                     * @return MediaJoiningTaskResult 是否已赋值
                     * 
                     */
                    bool MediaJoiningTaskResultHasBeenSet() const;

                    /**
                     * 获取媒体识别任务处理结果，当Type=MediaRecognition时才有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaRecognitionTaskResult 媒体识别任务处理结果，当Type=MediaRecognition时才有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaRecognitionTaskResult GetMediaRecognitionTaskResult() const;

                    /**
                     * 设置媒体识别任务处理结果，当Type=MediaRecognition时才有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mediaRecognitionTaskResult 媒体识别任务处理结果，当Type=MediaRecognition时才有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMediaRecognitionTaskResult(const MediaRecognitionTaskResult& _mediaRecognitionTaskResult);

                    /**
                     * 判断参数 MediaRecognitionTaskResult 是否已赋值
                     * @return MediaRecognitionTaskResult 是否已赋值
                     * 
                     */
                    bool MediaRecognitionTaskResultHasBeenSet() const;

                private:

                    /**
                     * 编辑处理任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 编辑处理任务类型，取值：
MediaEditing：视频编辑（待上线）；
MediaCutting：视频剪切；
MediaJoining：视频拼接。
MediaRecognition：媒体识别；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 处理进度，范围：[0,100]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 任务状态：
1100：等待中；
1200：执行中；
2000：成功；
5000：失败。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 任务错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 剪切任务处理结果，当Type=MediaCutting时才有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaCuttingTaskResult m_mediaCuttingTaskResult;
                    bool m_mediaCuttingTaskResultHasBeenSet;

                    /**
                     * 拼接任务处理结果，当Type=MediaJoining时才有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaJoiningTaskResult m_mediaJoiningTaskResult;
                    bool m_mediaJoiningTaskResultHasBeenSet;

                    /**
                     * 媒体识别任务处理结果，当Type=MediaRecognition时才有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaRecognitionTaskResult m_mediaRecognitionTaskResult;
                    bool m_mediaRecognitionTaskResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIAPROCESSTASKRESULT_H_
