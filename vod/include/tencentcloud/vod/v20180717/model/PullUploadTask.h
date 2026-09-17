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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PULLUPLOADTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PULLUPLOADTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaBasicInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 拉取上传任务信息
                */
                class PullUploadTask : public AbstractModel
                {
                public:
                    PullUploadTask();
                    ~PullUploadTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>拉取上传任务 ID。</p>
                     * @return TaskId <p>拉取上传任务 ID。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>拉取上传任务 ID。</p>
                     * @param _taskId <p>拉取上传任务 ID。</p>
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
                     * 获取<p>错误码，0 表示成功，其他值表示失败：</p><li>40000：输入参数不合法，请检查输入参数；</li><li>60000：源文件错误（如视频数据损坏），请确认源文件是否正常；</li><li>70000：内部服务错误，建议重试。</li>
                     * @return ErrCode <p>错误码，0 表示成功，其他值表示失败：</p><li>40000：输入参数不合法，请检查输入参数；</li><li>60000：源文件错误（如视频数据损坏），请确认源文件是否正常；</li><li>70000：内部服务错误，建议重试。</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>错误码，0 表示成功，其他值表示失败：</p><li>40000：输入参数不合法，请检查输入参数；</li><li>60000：源文件错误（如视频数据损坏），请确认源文件是否正常；</li><li>70000：内部服务错误，建议重试。</li>
                     * @param _errCode <p>错误码，0 表示成功，其他值表示失败：</p><li>40000：输入参数不合法，请检查输入参数；</li><li>60000：源文件错误（如视频数据损坏），请确认源文件是否正常；</li><li>70000：内部服务错误，建议重试。</li>
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
                     * 获取<p>错误信息。</p>
                     * @return Message <p>错误信息。</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>错误信息。</p>
                     * @param _message <p>错误信息。</p>
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
                     * 获取<p>拉取上传完成后生成的视频 ID。</p>
                     * @return FileId <p>拉取上传完成后生成的视频 ID。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>拉取上传完成后生成的视频 ID。</p>
                     * @param _fileId <p>拉取上传完成后生成的视频 ID。</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>拉取上传完成后生成的媒体文件基础信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaBasicInfo <p>拉取上传完成后生成的媒体文件基础信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaBasicInfo GetMediaBasicInfo() const;

                    /**
                     * 设置<p>拉取上传完成后生成的媒体文件基础信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mediaBasicInfo <p>拉取上传完成后生成的媒体文件基础信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMediaBasicInfo(const MediaBasicInfo& _mediaBasicInfo);

                    /**
                     * 判断参数 MediaBasicInfo 是否已赋值
                     * @return MediaBasicInfo 是否已赋值
                     * 
                     */
                    bool MediaBasicInfoHasBeenSet() const;

                    /**
                     * 获取<p>输出视频的元信息。</p>
                     * @return MetaData <p>输出视频的元信息。</p>
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置<p>输出视频的元信息。</p>
                     * @param _metaData <p>输出视频的元信息。</p>
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
                     * 获取<p>拉取上传完成后生成的播放地址。</p>
                     * @return FileUrl <p>拉取上传完成后生成的播放地址。</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>拉取上传完成后生成的播放地址。</p>
                     * @param _fileUrl <p>拉取上传完成后生成的播放地址。</p>
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取<p>任务类型为 Procedure 的任务 ID。若<a href="https://cloud.tencent.com/document/api/266/35575">拉取上传</a>时指定了媒体后续任务操作(Procedure)，当该任务流模板指定了 MediaProcessTask、AiAnalysisTask、AiRecognitionTask 中的一个或多个时发起该任务。</p>
                     * @return ProcedureTaskId <p>任务类型为 Procedure 的任务 ID。若<a href="https://cloud.tencent.com/document/api/266/35575">拉取上传</a>时指定了媒体后续任务操作(Procedure)，当该任务流模板指定了 MediaProcessTask、AiAnalysisTask、AiRecognitionTask 中的一个或多个时发起该任务。</p>
                     * 
                     */
                    std::string GetProcedureTaskId() const;

                    /**
                     * 设置<p>任务类型为 Procedure 的任务 ID。若<a href="https://cloud.tencent.com/document/api/266/35575">拉取上传</a>时指定了媒体后续任务操作(Procedure)，当该任务流模板指定了 MediaProcessTask、AiAnalysisTask、AiRecognitionTask 中的一个或多个时发起该任务。</p>
                     * @param _procedureTaskId <p>任务类型为 Procedure 的任务 ID。若<a href="https://cloud.tencent.com/document/api/266/35575">拉取上传</a>时指定了媒体后续任务操作(Procedure)，当该任务流模板指定了 MediaProcessTask、AiAnalysisTask、AiRecognitionTask 中的一个或多个时发起该任务。</p>
                     * 
                     */
                    void SetProcedureTaskId(const std::string& _procedureTaskId);

                    /**
                     * 判断参数 ProcedureTaskId 是否已赋值
                     * @return ProcedureTaskId 是否已赋值
                     * 
                     */
                    bool ProcedureTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务类型为 ReviewAudioVideo 的任务 ID。若<a href="https://cloud.tencent.com/document/api/266/35575">拉取上传</a>时指定了媒体后续任务操作(Procedure)，当该任务流模板指定了 ReviewAudioVideoTask 时，发起该任务。</p>
                     * @return ReviewAudioVideoTaskId <p>任务类型为 ReviewAudioVideo 的任务 ID。若<a href="https://cloud.tencent.com/document/api/266/35575">拉取上传</a>时指定了媒体后续任务操作(Procedure)，当该任务流模板指定了 ReviewAudioVideoTask 时，发起该任务。</p>
                     * 
                     */
                    std::string GetReviewAudioVideoTaskId() const;

                    /**
                     * 设置<p>任务类型为 ReviewAudioVideo 的任务 ID。若<a href="https://cloud.tencent.com/document/api/266/35575">拉取上传</a>时指定了媒体后续任务操作(Procedure)，当该任务流模板指定了 ReviewAudioVideoTask 时，发起该任务。</p>
                     * @param _reviewAudioVideoTaskId <p>任务类型为 ReviewAudioVideo 的任务 ID。若<a href="https://cloud.tencent.com/document/api/266/35575">拉取上传</a>时指定了媒体后续任务操作(Procedure)，当该任务流模板指定了 ReviewAudioVideoTask 时，发起该任务。</p>
                     * 
                     */
                    void SetReviewAudioVideoTaskId(const std::string& _reviewAudioVideoTaskId);

                    /**
                     * 判断参数 ReviewAudioVideoTaskId 是否已赋值
                     * @return ReviewAudioVideoTaskId 是否已赋值
                     * 
                     */
                    bool ReviewAudioVideoTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>来源上下文，用于透传用户请求信息，<a href="https://cloud.tencent.com/document/product/266/7831">URL 拉取视频上传完成</a>将返回该字段值，最长 1000 个字符。</p>
                     * @return SessionContext <p>来源上下文，用于透传用户请求信息，<a href="https://cloud.tencent.com/document/product/266/7831">URL 拉取视频上传完成</a>将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>来源上下文，用于透传用户请求信息，<a href="https://cloud.tencent.com/document/product/266/7831">URL 拉取视频上传完成</a>将返回该字段值，最长 1000 个字符。</p>
                     * @param _sessionContext <p>来源上下文，用于透传用户请求信息，<a href="https://cloud.tencent.com/document/product/266/7831">URL 拉取视频上传完成</a>将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取<p>用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @return SessionId <p>用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @param _sessionId <p>用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>拉取上传进度，取值范围 [0-100] 。</p>
                     * @return Progress <p>拉取上传进度，取值范围 [0-100] 。</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>拉取上传进度，取值范围 [0-100] 。</p>
                     * @param _progress <p>拉取上传进度，取值范围 [0-100] 。</p>
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * <p>拉取上传任务 ID。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务流状态，取值：</p><li>PROCESSING：处理中；</li><li>FINISH：已完成。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>错误码，0 表示成功，其他值表示失败：</p><li>40000：输入参数不合法，请检查输入参数；</li><li>60000：源文件错误（如视频数据损坏），请确认源文件是否正常；</li><li>70000：内部服务错误，建议重试。</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>错误信息。</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>拉取上传完成后生成的视频 ID。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>拉取上传完成后生成的媒体文件基础信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaBasicInfo m_mediaBasicInfo;
                    bool m_mediaBasicInfoHasBeenSet;

                    /**
                     * <p>输出视频的元信息。</p>
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * <p>拉取上传完成后生成的播放地址。</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>任务类型为 Procedure 的任务 ID。若<a href="https://cloud.tencent.com/document/api/266/35575">拉取上传</a>时指定了媒体后续任务操作(Procedure)，当该任务流模板指定了 MediaProcessTask、AiAnalysisTask、AiRecognitionTask 中的一个或多个时发起该任务。</p>
                     */
                    std::string m_procedureTaskId;
                    bool m_procedureTaskIdHasBeenSet;

                    /**
                     * <p>任务类型为 ReviewAudioVideo 的任务 ID。若<a href="https://cloud.tencent.com/document/api/266/35575">拉取上传</a>时指定了媒体后续任务操作(Procedure)，当该任务流模板指定了 ReviewAudioVideoTask 时，发起该任务。</p>
                     */
                    std::string m_reviewAudioVideoTaskId;
                    bool m_reviewAudioVideoTaskIdHasBeenSet;

                    /**
                     * <p>来源上下文，用于透传用户请求信息，<a href="https://cloud.tencent.com/document/product/266/7831">URL 拉取视频上传完成</a>将返回该字段值，最长 1000 个字符。</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>拉取上传进度，取值范围 [0-100] 。</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PULLUPLOADTASK_H_
