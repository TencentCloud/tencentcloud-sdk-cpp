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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TASKSIMPLEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TASKSIMPLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 任务概要信息
                */
                class TaskSimpleInfo : public AbstractModel
                {
                public:
                    TaskSimpleInfo();
                    ~TaskSimpleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务 ID。
                     * @return TaskId 任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 ID。
                     * @param _taskId 任务 ID。
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
                     * 获取任务状态。取值：WAITING（等待中）、PROCESSING（处理中）、FINISH（已完成）、ABORTED（已终止）。
                     * @return Status 任务状态。取值：WAITING（等待中）、PROCESSING（处理中）、FINISH（已完成）、ABORTED（已终止）。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态。取值：WAITING（等待中）、PROCESSING（处理中）、FINISH（已完成）、ABORTED（已终止）。
                     * @param _status 任务状态。取值：WAITING（等待中）、PROCESSING（处理中）、FINISH（已完成）、ABORTED（已终止）。
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
                     * 获取视频 ID。
                     * @return FileId 视频 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置视频 ID。
                     * @param _fileId 视频 ID。
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
                     * 获取任务类型，取值：
<li>Procedure：视频处理任务；</li>
<li>EditMedia：视频编辑任务；</li>
<li>ReduceMediaBitrate：降码率任务；</li>
<li>WechatDistribute：微信发布任务；</li>
<li>ReviewAudioVideo：音视频审核任务。</li>
兼容 2017 版的任务类型：
<li>Transcode：视频转码任务；</li>
<li>SnapshotByTimeOffset：视频截图任务；</li>
<li>Concat：视频拼接任务；</li>
<li>Clip：视频剪辑任务；</li>
<li>ImageSprites：截取雪碧图任务。</li>
                     * @return TaskType 任务类型，取值：
<li>Procedure：视频处理任务；</li>
<li>EditMedia：视频编辑任务；</li>
<li>ReduceMediaBitrate：降码率任务；</li>
<li>WechatDistribute：微信发布任务；</li>
<li>ReviewAudioVideo：音视频审核任务。</li>
兼容 2017 版的任务类型：
<li>Transcode：视频转码任务；</li>
<li>SnapshotByTimeOffset：视频截图任务；</li>
<li>Concat：视频拼接任务；</li>
<li>Clip：视频剪辑任务；</li>
<li>ImageSprites：截取雪碧图任务。</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型，取值：
<li>Procedure：视频处理任务；</li>
<li>EditMedia：视频编辑任务；</li>
<li>ReduceMediaBitrate：降码率任务；</li>
<li>WechatDistribute：微信发布任务；</li>
<li>ReviewAudioVideo：音视频审核任务。</li>
兼容 2017 版的任务类型：
<li>Transcode：视频转码任务；</li>
<li>SnapshotByTimeOffset：视频截图任务；</li>
<li>Concat：视频拼接任务；</li>
<li>Clip：视频剪辑任务；</li>
<li>ImageSprites：截取雪碧图任务。</li>
                     * @param _taskType 任务类型，取值：
<li>Procedure：视频处理任务；</li>
<li>EditMedia：视频编辑任务；</li>
<li>ReduceMediaBitrate：降码率任务；</li>
<li>WechatDistribute：微信发布任务；</li>
<li>ReviewAudioVideo：音视频审核任务。</li>
兼容 2017 版的任务类型：
<li>Transcode：视频转码任务；</li>
<li>SnapshotByTimeOffset：视频截图任务；</li>
<li>Concat：视频拼接任务；</li>
<li>Clip：视频剪辑任务；</li>
<li>ImageSprites：截取雪碧图任务。</li>
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
                     * 获取任务创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return CreateTime 任务创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _createTime 任务创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务开始执行时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。若任务尚未开始，该字段为空。
                     * @return BeginProcessTime 任务开始执行时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。若任务尚未开始，该字段为空。
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 设置任务开始执行时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。若任务尚未开始，该字段为空。
                     * @param _beginProcessTime 任务开始执行时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。若任务尚未开始，该字段为空。
                     * 
                     */
                    void SetBeginProcessTime(const std::string& _beginProcessTime);

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     * 
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取任务结束时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。若任务尚未完成，该字段为空。
                     * @return FinishTime 任务结束时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。若任务尚未完成，该字段为空。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置任务结束时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。若任务尚未完成，该字段为空。
                     * @param _finishTime 任务结束时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。若任务尚未完成，该字段为空。
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取用于去重的识别码，如果七天内曾有过相同的识别码的请求。
                     * @return SessionId 用于去重的识别码，如果七天内曾有过相同的识别码的请求。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置用于去重的识别码，如果七天内曾有过相同的识别码的请求。
                     * @param _sessionId 用于去重的识别码，如果七天内曾有过相同的识别码的请求。
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
                     * 获取来源上下文，用于透传用户请求信息。
                     * @return SessionContext 来源上下文，用于透传用户请求信息。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置来源上下文，用于透传用户请求信息。
                     * @param _sessionContext 来源上下文，用于透传用户请求信息。
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * 任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态。取值：WAITING（等待中）、PROCESSING（处理中）、FINISH（已完成）、ABORTED（已终止）。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 视频 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 任务类型，取值：
<li>Procedure：视频处理任务；</li>
<li>EditMedia：视频编辑任务；</li>
<li>ReduceMediaBitrate：降码率任务；</li>
<li>WechatDistribute：微信发布任务；</li>
<li>ReviewAudioVideo：音视频审核任务。</li>
兼容 2017 版的任务类型：
<li>Transcode：视频转码任务；</li>
<li>SnapshotByTimeOffset：视频截图任务；</li>
<li>Concat：视频拼接任务；</li>
<li>Clip：视频剪辑任务；</li>
<li>ImageSprites：截取雪碧图任务。</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务开始执行时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。若任务尚未开始，该字段为空。
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * 任务结束时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。若任务尚未完成，该字段为空。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 用于去重的识别码，如果七天内曾有过相同的识别码的请求。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 来源上下文，用于透传用户请求信息。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TASKSIMPLEINFO_H_
