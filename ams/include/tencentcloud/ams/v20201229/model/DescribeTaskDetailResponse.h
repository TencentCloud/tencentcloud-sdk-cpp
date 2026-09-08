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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_DESCRIBETASKDETAILRESPONSE_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_DESCRIBETASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20201229/model/TaskLabel.h>
#include <tencentcloud/ams/v20201229/model/InputInfo.h>
#include <tencentcloud/ams/v20201229/model/AudioSegments.h>
#include <tencentcloud/ams/v20201229/model/MediaInfo.h>
#include <tencentcloud/ams/v20201229/model/HitSnippetInfos.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
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
                     * 获取<p>该字段用于返回创建音频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。</p>
                     * @return TaskId <p>该字段用于返回创建音频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。</p>
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
                     * 获取<p>该字段用于返回调用音频审核接口时在Tasks参数内传入的数据ID参数，方便数据的辨别和管理。</p>
                     * @return DataId <p>该字段用于返回调用音频审核接口时在Tasks参数内传入的数据ID参数，方便数据的辨别和管理。</p>
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
                     * 获取<p>该字段用于返回调用音频审核接口时传入的BizType参数，方便数据的辨别和管理。</p>
                     * @return BizType <p>该字段用于返回调用音频审核接口时传入的BizType参数，方便数据的辨别和管理。</p>
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
                     * 获取<p>该字段用于返回调用音频审核接口时传入的TaskInput参数中的任务名称，方便任务的识别与管理。</p>
                     * @return Name <p>该字段用于返回调用音频审核接口时传入的TaskInput参数中的任务名称，方便任务的识别与管理。</p>
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
                     * 获取<p>该字段用于返回所查询内容的任务状态。<br><br>取值：<strong>FINISH</strong>（任务已完成）、<strong>PENDING</strong> （任务等待中）、<strong>RUNNING</strong> （任务进行中）、<strong>ERROR</strong> （任务出错）、<strong>CANCELLED</strong> （任务已取消）。</p>
                     * @return Status <p>该字段用于返回所查询内容的任务状态。<br><br>取值：<strong>FINISH</strong>（任务已完成）、<strong>PENDING</strong> （任务等待中）、<strong>RUNNING</strong> （任务进行中）、<strong>ERROR</strong> （任务出错）、<strong>CANCELLED</strong> （任务已取消）。</p>
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
                     * 获取<p>该字段用于返回调用音频审核接口时输入的音频审核类型，取值为：<strong>AUDIO</strong>（点播音频）和<strong>LIVE_AUDIO</strong>（直播音频），默认值为AUDIO。</p>
                     * @return Type <p>该字段用于返回调用音频审核接口时输入的音频审核类型，取值为：<strong>AUDIO</strong>（点播音频）和<strong>LIVE_AUDIO</strong>（直播音频），默认值为AUDIO。</p>
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
                     * 获取<p>该字段用于返回基于恶意标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
                     * @return Suggestion <p>该字段用于返回基于恶意标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
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
                     * 获取<p>该字段用于返回检测结果所对应的恶意标签。<br>返回值：<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告，<strong>Custom</strong>：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。</p>
                     * @return Labels <p>该字段用于返回检测结果所对应的恶意标签。<br>返回值：<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告，<strong>Custom</strong>：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。</p>
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
                     * 获取<p>该字段用于返回审核服务的媒体内容信息，主要包括传入文件类型和访问地址。</p>
                     * @return InputInfo <p>该字段用于返回审核服务的媒体内容信息，主要包括传入文件类型和访问地址。</p>
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
                     * 获取<p>该字段用于返回音频文件识别出的对应文本内容，最大支持<strong>前1000个字符</strong>。</p>
                     * @return AudioText <p>该字段用于返回音频文件识别出的对应文本内容，最大支持<strong>前1000个字符</strong>。</p>
                     * 
                     */
                    std::string GetAudioText() const;

                    /**
                     * 判断参数 AudioText 是否已赋值
                     * @return AudioText 是否已赋值
                     * 
                     */
                    bool AudioTextHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于返回音频片段的审核结果，主要包括开始时间和音频审核的相应结果。<br>具体输出内容请参见AudioSegments及AudioResult数据结构的详细描述。</p>
                     * @return AudioSegments <p>该字段用于返回音频片段的审核结果，主要包括开始时间和音频审核的相应结果。<br>具体输出内容请参见AudioSegments及AudioResult数据结构的详细描述。</p>
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
                     * 获取<p>当任务状态为Error时，该字段用于返回对应错误的类型；任务状态非Error时，默认返回为空。</p>
                     * @return ErrorType <p>当任务状态为Error时，该字段用于返回对应错误的类型；任务状态非Error时，默认返回为空。</p>
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
                     * 获取<p>当任务状态为Error时，该字段用于返回对应错误的详细描述，任务状态非Error时默认返回为空。</p>
                     * @return ErrorDescription <p>当任务状态为Error时，该字段用于返回对应错误的详细描述，任务状态非Error时默认返回为空。</p>
                     * 
                     */
                    std::string GetErrorDescription() const;

                    /**
                     * 判断参数 ErrorDescription 是否已赋值
                     * @return ErrorDescription 是否已赋值
                     * 
                     */
                    bool ErrorDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于返回被查询任务创建的时间，格式采用 ISO 8601标准。</p>
                     * @return CreatedAt <p>该字段用于返回被查询任务创建的时间，格式采用 ISO 8601标准。</p>
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
                     * 获取<p>该字段用于返回被查询任务最后更新时间，格式采用 ISO 8601标准。</p>
                     * @return UpdatedAt <p>该字段用于返回被查询任务最后更新时间，格式采用 ISO 8601标准。</p>
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
                     * 获取<p>该字段用于返回检测结果所对应的标签。如果未命中恶意，返回Normal，如果命中恶意，则返回Labels中优先级最高的标签</p>
                     * @return Label <p>该字段用于返回检测结果所对应的标签。如果未命中恶意，返回Normal，如果命中恶意，则返回Labels中优先级最高的标签</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>媒体信息</p>
                     * @return MediaInfo <p>媒体信息</p>
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
                     * 获取<p>命中信息</p>
                     * @return HitSnippetInfos <p>命中信息</p>
                     * 
                     */
                    std::vector<HitSnippetInfos> GetHitSnippetInfos() const;

                    /**
                     * 判断参数 HitSnippetInfos 是否已赋值
                     * @return HitSnippetInfos 是否已赋值
                     * 
                     */
                    bool HitSnippetInfosHasBeenSet() const;

                private:

                    /**
                     * <p>该字段用于返回创建音频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>该字段用于返回调用音频审核接口时在Tasks参数内传入的数据ID参数，方便数据的辨别和管理。</p>
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * <p>该字段用于返回调用音频审核接口时传入的BizType参数，方便数据的辨别和管理。</p>
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>该字段用于返回调用音频审核接口时传入的TaskInput参数中的任务名称，方便任务的识别与管理。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>该字段用于返回所查询内容的任务状态。<br><br>取值：<strong>FINISH</strong>（任务已完成）、<strong>PENDING</strong> （任务等待中）、<strong>RUNNING</strong> （任务进行中）、<strong>ERROR</strong> （任务出错）、<strong>CANCELLED</strong> （任务已取消）。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>该字段用于返回调用音频审核接口时输入的音频审核类型，取值为：<strong>AUDIO</strong>（点播音频）和<strong>LIVE_AUDIO</strong>（直播音频），默认值为AUDIO。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>该字段用于返回基于恶意标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>该字段用于返回检测结果所对应的恶意标签。<br>返回值：<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告，<strong>Custom</strong>：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。</p>
                     */
                    std::vector<TaskLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>该字段用于返回审核服务的媒体内容信息，主要包括传入文件类型和访问地址。</p>
                     */
                    InputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * <p>该字段用于返回音频文件识别出的对应文本内容，最大支持<strong>前1000个字符</strong>。</p>
                     */
                    std::string m_audioText;
                    bool m_audioTextHasBeenSet;

                    /**
                     * <p>该字段用于返回音频片段的审核结果，主要包括开始时间和音频审核的相应结果。<br>具体输出内容请参见AudioSegments及AudioResult数据结构的详细描述。</p>
                     */
                    std::vector<AudioSegments> m_audioSegments;
                    bool m_audioSegmentsHasBeenSet;

                    /**
                     * <p>当任务状态为Error时，该字段用于返回对应错误的类型；任务状态非Error时，默认返回为空。</p>
                     */
                    std::string m_errorType;
                    bool m_errorTypeHasBeenSet;

                    /**
                     * <p>当任务状态为Error时，该字段用于返回对应错误的详细描述，任务状态非Error时默认返回为空。</p>
                     */
                    std::string m_errorDescription;
                    bool m_errorDescriptionHasBeenSet;

                    /**
                     * <p>该字段用于返回被查询任务创建的时间，格式采用 ISO 8601标准。</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>该字段用于返回被查询任务最后更新时间，格式采用 ISO 8601标准。</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * <p>该字段用于返回检测结果所对应的标签。如果未命中恶意，返回Normal，如果命中恶意，则返回Labels中优先级最高的标签</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>媒体信息</p>
                     */
                    MediaInfo m_mediaInfo;
                    bool m_mediaInfoHasBeenSet;

                    /**
                     * <p>命中信息</p>
                     */
                    std::vector<HitSnippetInfos> m_hitSnippetInfos;
                    bool m_hitSnippetInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_DESCRIBETASKDETAILRESPONSE_H_
