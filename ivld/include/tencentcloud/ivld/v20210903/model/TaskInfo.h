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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_TASKINFO_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_TASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/MediaPreknownInfo.h>
#include <tencentcloud/ivld/v20210903/model/AudioMetadata.h>
#include <tencentcloud/ivld/v20210903/model/ImageMetadata.h>
#include <tencentcloud/ivld/v20210903/model/TextMetadata.h>
#include <tencentcloud/ivld/v20210903/model/MediaMetadata.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 任务信息

TaskStatus定义如下:

| TaskStatus名称 | TaskStatus取值 | TaskStatus描述 |
|---|---|---|
| TASK_STATUS_INVALID | 0 | 非法的任务状态 |
| TASK_STATUS_WAITING | 1 | 排队中 |
| TASK_STATUS_ANALYSING | 2 | 任务分析中 |
| TASK_STATUS_ANALYSED | 3 | 任务分析完成 |
| TASK_STATUS_SNAPSHOT_CREATING | 4 | 任务结果快照生成中 |
| TASK_STATUS_SNAPSHOT_CREATED | 5 | 任务结果快照生成完成 |
| TASK_STATUS_RESULT_UPLOADING | 6 | 任务结果快照上传中 |
| TASK_STATUS_RESULT_UPLOADED | 7 | 任务结果快照上传完成 |
| TASK_STATUS_SUCCESS | 8 | 任务执行完成 |
| TASK_STATUS_FAILED | 9 | 任务执行失败 |
                */
                class TaskInfo : public AbstractModel
                {
                public:
                    TaskInfo();
                    ~TaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskId <p>任务ID</p>
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
                     * 获取<p>描述任务名称，指定后可根据名称筛选</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName <p>描述任务名称，指定后可根据名称筛选</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>描述任务名称，指定后可根据名称筛选</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName <p>描述任务名称，指定后可根据名称筛选</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>媒资文件ID</p>
                     * @return MediaId <p>媒资文件ID</p>
                     * 
                     */
                    std::string GetMediaId() const;

                    /**
                     * 设置<p>媒资文件ID</p>
                     * @param _mediaId <p>媒资文件ID</p>
                     * 
                     */
                    void SetMediaId(const std::string& _mediaId);

                    /**
                     * 判断参数 MediaId 是否已赋值
                     * @return MediaId 是否已赋值
                     * 
                     */
                    bool MediaIdHasBeenSet() const;

                    /**
                     * 获取<p>任务执行状态</p>
                     * @return TaskStatus <p>任务执行状态</p>
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置<p>任务执行状态</p>
                     * @param _taskStatus <p>任务执行状态</p>
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>任务进度，范围为[0，100]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskProgress <p>任务进度，范围为[0，100]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTaskProgress() const;

                    /**
                     * 设置<p>任务进度，范围为[0，100]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskProgress <p>任务进度，范围为[0，100]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskProgress(const double& _taskProgress);

                    /**
                     * 判断参数 TaskProgress 是否已赋值
                     * @return TaskProgress 是否已赋值
                     * 
                     */
                    bool TaskProgressHasBeenSet() const;

                    /**
                     * 获取<p>任务执行时间</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTimeCost <p>任务执行时间</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskTimeCost() const;

                    /**
                     * 设置<p>任务执行时间</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTimeCost <p>任务执行时间</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTimeCost(const int64_t& _taskTimeCost);

                    /**
                     * 判断参数 TaskTimeCost 是否已赋值
                     * @return TaskTimeCost 是否已赋值
                     * 
                     */
                    bool TaskTimeCostHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间</p>
                     * @return TaskCreateTime <p>任务创建时间</p>
                     * 
                     */
                    std::string GetTaskCreateTime() const;

                    /**
                     * 设置<p>任务创建时间</p>
                     * @param _taskCreateTime <p>任务创建时间</p>
                     * 
                     */
                    void SetTaskCreateTime(const std::string& _taskCreateTime);

                    /**
                     * 判断参数 TaskCreateTime 是否已赋值
                     * @return TaskCreateTime 是否已赋值
                     * 
                     */
                    bool TaskCreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务开始执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskStartTime <p>任务开始执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskStartTime() const;

                    /**
                     * 设置<p>任务开始执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskStartTime <p>任务开始执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskStartTime(const std::string& _taskStartTime);

                    /**
                     * 判断参数 TaskStartTime 是否已赋值
                     * @return TaskStartTime 是否已赋值
                     * 
                     */
                    bool TaskStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedReason <p>任务失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置<p>任务失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failedReason <p>任务失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailedReason(const std::string& _failedReason);

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取<p>任务执行时指定的先验知识</p>
                     * @return MediaPreknownInfo <p>任务执行时指定的先验知识</p>
                     * 
                     */
                    MediaPreknownInfo GetMediaPreknownInfo() const;

                    /**
                     * 设置<p>任务执行时指定的先验知识</p>
                     * @param _mediaPreknownInfo <p>任务执行时指定的先验知识</p>
                     * 
                     */
                    void SetMediaPreknownInfo(const MediaPreknownInfo& _mediaPreknownInfo);

                    /**
                     * 判断参数 MediaPreknownInfo 是否已赋值
                     * @return MediaPreknownInfo 是否已赋值
                     * 
                     */
                    bool MediaPreknownInfoHasBeenSet() const;

                    /**
                     * 获取<p>媒资文件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaName <p>媒资文件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置<p>媒资文件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mediaName <p>媒资文件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     * 
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取<p>媒资自定义标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label <p>媒资自定义标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>媒资自定义标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label <p>媒资自定义标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>任务分析完成后的后调地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallbackURL <p>任务分析完成后的后调地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallbackURL() const;

                    /**
                     * 设置<p>任务分析完成后的后调地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callbackURL <p>任务分析完成后的后调地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCallbackURL(const std::string& _callbackURL);

                    /**
                     * 判断参数 CallbackURL 是否已赋值
                     * @return CallbackURL 是否已赋值
                     * 
                     */
                    bool CallbackURLHasBeenSet() const;

                    /**
                     * 获取<p>任务对应的媒资文件元信息，仅在MediaType为Audio时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioMetadata <p>任务对应的媒资文件元信息，仅在MediaType为Audio时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AudioMetadata GetAudioMetadata() const;

                    /**
                     * 设置<p>任务对应的媒资文件元信息，仅在MediaType为Audio时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioMetadata <p>任务对应的媒资文件元信息，仅在MediaType为Audio时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioMetadata(const AudioMetadata& _audioMetadata);

                    /**
                     * 判断参数 AudioMetadata 是否已赋值
                     * @return AudioMetadata 是否已赋值
                     * 
                     */
                    bool AudioMetadataHasBeenSet() const;

                    /**
                     * 获取<p>任务对应的媒资文件元信息，仅在MediaType为Audio时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageMetadata <p>任务对应的媒资文件元信息，仅在MediaType为Audio时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageMetadata GetImageMetadata() const;

                    /**
                     * 设置<p>任务对应的媒资文件元信息，仅在MediaType为Audio时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageMetadata <p>任务对应的媒资文件元信息，仅在MediaType为Audio时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageMetadata(const ImageMetadata& _imageMetadata);

                    /**
                     * 判断参数 ImageMetadata 是否已赋值
                     * @return ImageMetadata 是否已赋值
                     * 
                     */
                    bool ImageMetadataHasBeenSet() const;

                    /**
                     * 获取<p>任务对应的媒资文件元信息，仅在MediaType为Text时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextMetadata <p>任务对应的媒资文件元信息，仅在MediaType为Text时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TextMetadata GetTextMetadata() const;

                    /**
                     * 设置<p>任务对应的媒资文件元信息，仅在MediaType为Text时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textMetadata <p>任务对应的媒资文件元信息，仅在MediaType为Text时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextMetadata(const TextMetadata& _textMetadata);

                    /**
                     * 判断参数 TextMetadata 是否已赋值
                     * @return TextMetadata 是否已赋值
                     * 
                     */
                    bool TextMetadataHasBeenSet() const;

                    /**
                     * 获取<p>任务对应的媒资文件元信息，仅在MediaType为Video时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metadata <p>任务对应的媒资文件元信息，仅在MediaType为Video时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaMetadata GetMetadata() const;

                    /**
                     * 设置<p>任务对应的媒资文件元信息，仅在MediaType为Video时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metadata <p>任务对应的媒资文件元信息，仅在MediaType为Video时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetadata(const MediaMetadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>描述任务名称，指定后可根据名称筛选</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>媒资文件ID</p>
                     */
                    std::string m_mediaId;
                    bool m_mediaIdHasBeenSet;

                    /**
                     * <p>任务执行状态</p>
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>任务进度，范围为[0，100]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_taskProgress;
                    bool m_taskProgressHasBeenSet;

                    /**
                     * <p>任务执行时间</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskTimeCost;
                    bool m_taskTimeCostHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    std::string m_taskCreateTime;
                    bool m_taskCreateTimeHasBeenSet;

                    /**
                     * <p>任务开始执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskStartTime;
                    bool m_taskStartTimeHasBeenSet;

                    /**
                     * <p>任务失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * <p>任务执行时指定的先验知识</p>
                     */
                    MediaPreknownInfo m_mediaPreknownInfo;
                    bool m_mediaPreknownInfoHasBeenSet;

                    /**
                     * <p>媒资文件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * <p>媒资自定义标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>任务分析完成后的后调地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callbackURL;
                    bool m_callbackURLHasBeenSet;

                    /**
                     * <p>任务对应的媒资文件元信息，仅在MediaType为Audio时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AudioMetadata m_audioMetadata;
                    bool m_audioMetadataHasBeenSet;

                    /**
                     * <p>任务对应的媒资文件元信息，仅在MediaType为Audio时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageMetadata m_imageMetadata;
                    bool m_imageMetadataHasBeenSet;

                    /**
                     * <p>任务对应的媒资文件元信息，仅在MediaType为Text时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TextMetadata m_textMetadata;
                    bool m_textMetadataHasBeenSet;

                    /**
                     * <p>任务对应的媒资文件元信息，仅在MediaType为Video时有效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaMetadata m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_TASKINFO_H_
