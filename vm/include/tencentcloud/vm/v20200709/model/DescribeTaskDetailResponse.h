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

#ifndef TENCENTCLOUD_VM_V20200709_MODEL_DESCRIBETASKDETAILRESPONSE_H_
#define TENCENTCLOUD_VM_V20200709_MODEL_DESCRIBETASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20200709/model/TaskLabel.h>
#include <tencentcloud/vm/v20200709/model/MediaInfo.h>
#include <tencentcloud/vm/v20200709/model/InputInfo.h>
#include <tencentcloud/vm/v20200709/model/ImageSegments.h>
#include <tencentcloud/vm/v20200709/model/AudioSegments.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20200709
        {
            namespace Model
            {
                /**
                * DescribeTaskDetail返回参数结构体
                */
                class DescribeTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeTaskDetailResponse();
                    ~DescribeTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取审核时传入的数据Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataId 审核时传入的数据Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取业务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizType 业务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取状态，可选值：
FINISH 已完成
PENDING 等待中
RUNNING 进行中
ERROR 出错
CANCELLED 已取消
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态，可选值：
FINISH 已完成
PENDING 等待中
RUNNING 进行中
ERROR 出错
CANCELLED 已取消
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取审核建议
可选：
Pass 通过
Reveiw 建议复审
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Suggestion 审核建议
可选：
Pass 通过
Reveiw 建议复审
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取审核结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 审核结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskLabel> GetLabels() const;

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取媒体解码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaInfo 媒体解码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaInfo GetMediaInfo() const;

                    /**
                     * 判断参数 MediaInfo 是否已赋值
                     * @return MediaInfo 是否已赋值
                     * 
                     */
                    bool MediaInfoHasBeenSet() const;

                    /**
                     * 获取任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputInfo 任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InputInfo GetInputInfo() const;

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取在秒后重试
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TryInSeconds 在秒后重试
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTryInSeconds() const;

                    /**
                     * 判断参数 TryInSeconds 是否已赋值
                     * @return TryInSeconds 是否已赋值
                     * 
                     */
                    bool TryInSecondsHasBeenSet() const;

                    /**
                     * 获取图片结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageSegments 图片结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ImageSegments> GetImageSegments() const;

                    /**
                     * 判断参数 ImageSegments 是否已赋值
                     * @return ImageSegments 是否已赋值
                     * 
                     */
                    bool ImageSegmentsHasBeenSet() const;

                    /**
                     * 获取音频结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioSegments 音频结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AudioSegments> GetAudioSegments() const;

                    /**
                     * 判断参数 AudioSegments 是否已赋值
                     * @return AudioSegments 是否已赋值
                     * 
                     */
                    bool AudioSegmentsHasBeenSet() const;

                    /**
                     * 获取如果返回的状态为ERROR，该字段会标记错误类型。
可选值：：
DECODE_ERROR: 解码失败。（输入资源中可能包含无法解码的视频）
URL_ERROR：下载地址验证失败。
TIMEOUT_ERROR：处理超时。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorType 如果返回的状态为ERROR，该字段会标记错误类型。
可选值：：
DECODE_ERROR: 解码失败。（输入资源中可能包含无法解码的视频）
URL_ERROR：下载地址验证失败。
TIMEOUT_ERROR：处理超时。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorType() const;

                    /**
                     * 判断参数 ErrorType 是否已赋值
                     * @return ErrorType 是否已赋值
                     * 
                     */
                    bool ErrorTypeHasBeenSet() const;

                    /**
                     * 获取审核任务错误日志。当Error不为空时，会展示该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorDescription 审核任务错误日志。当Error不为空时，会展示该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorDescription() const;

                    /**
                     * 判断参数 ErrorDescription 是否已赋值
                     * @return ErrorDescription 是否已赋值
                     * 
                     */
                    bool ErrorDescriptionHasBeenSet() const;

                private:

                    /**
                     * 任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 审核时传入的数据Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * 业务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 状态，可选值：
FINISH 已完成
PENDING 等待中
RUNNING 进行中
ERROR 出错
CANCELLED 已取消
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 审核建议
可选：
Pass 通过
Reveiw 建议复审
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 审核结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 媒体解码信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaInfo m_mediaInfo;
                    bool m_mediaInfoHasBeenSet;

                    /**
                     * 任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 在秒后重试
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tryInSeconds;
                    bool m_tryInSecondsHasBeenSet;

                    /**
                     * 图片结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ImageSegments> m_imageSegments;
                    bool m_imageSegmentsHasBeenSet;

                    /**
                     * 音频结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AudioSegments> m_audioSegments;
                    bool m_audioSegmentsHasBeenSet;

                    /**
                     * 如果返回的状态为ERROR，该字段会标记错误类型。
可选值：：
DECODE_ERROR: 解码失败。（输入资源中可能包含无法解码的视频）
URL_ERROR：下载地址验证失败。
TIMEOUT_ERROR：处理超时。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorType;
                    bool m_errorTypeHasBeenSet;

                    /**
                     * 审核任务错误日志。当Error不为空时，会展示该字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorDescription;
                    bool m_errorDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20200709_MODEL_DESCRIBETASKDETAILRESPONSE_H_
