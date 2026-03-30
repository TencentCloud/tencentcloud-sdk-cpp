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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_DESCRIBETASKDETAILRESPONSE_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_DESCRIBETASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/TaskLabel.h>
#include <tencentcloud/vm/v20210922/model/MediaInfo.h>
#include <tencentcloud/vm/v20210922/model/InputInfo.h>
#include <tencentcloud/vm/v20210922/model/ImageSegments.h>
#include <tencentcloud/vm/v20210922/model/AudioSegments.h>
#include <tencentcloud/vm/v20210922/model/RcbAsr.h>
#include <tencentcloud/vm/v20210922/model/SegmentCosUrlList.h>
#include <tencentcloud/vm/v20210922/model/VideoSegment.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
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
                     * 获取<p>该字段用于返回创建视频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。</p>
                     * @return TaskId <p>该字段用于返回创建视频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。</p>
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
                     * 获取<p>该字段用于返回调用视频审核接口时传入的数据ID参数，方便数据的辨别和管理。</p>
                     * @return DataId <p>该字段用于返回调用视频审核接口时传入的数据ID参数，方便数据的辨别和管理。</p>
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
                     * 获取<p>该字段用于返回调用视频审核接口时传入的BizType参数，方便数据的辨别和管理。</p>
                     * @return BizType <p>该字段用于返回调用视频审核接口时传入的BizType参数，方便数据的辨别和管理。</p>
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
                     * 获取<p>该字段用于返回调用视频审核接口时传入的TaskInput参数中的任务名称，方便任务的识别与管理。</p>
                     * @return Name <p>该字段用于返回调用视频审核接口时传入的TaskInput参数中的任务名称，方便任务的识别与管理。</p>
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
                     * 获取<p>该字段用于返回调用视频审核接口时输入的视频审核类型，取值为：<strong>VIDEO</strong>（点播视频）、<strong>LIVE_VIDEO</strong>（直播视频）和<strong>VIDEO_AIGC</strong>（AI生成检测），默认值为VIDEO。</p>
                     * @return Type <p>该字段用于返回调用视频审核接口时输入的视频审核类型，取值为：<strong>VIDEO</strong>（点播视频）、<strong>LIVE_VIDEO</strong>（直播视频）和<strong>VIDEO_AIGC</strong>（AI生成检测），默认值为VIDEO。</p>
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
                     * 获取<p>该字段用于返回输入媒体文件的详细信息，包括编解码格式、分片时长等信息。详细内容敬请参考MediaInfo数据结构的描述。</p>
                     * @return MediaInfo <p>该字段用于返回输入媒体文件的详细信息，包括编解码格式、分片时长等信息。详细内容敬请参考MediaInfo数据结构的描述。</p>
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
                     * 获取<p>在秒后重试</p>
                     * @return TryInSeconds <p>在秒后重试</p>
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
                     * 获取<p>该字段用于返回视频中截帧审核的结果，详细返回内容敬请参考ImageSegments数据结构的描述。</p>
                     * @return ImageSegments <p>该字段用于返回视频中截帧审核的结果，详细返回内容敬请参考ImageSegments数据结构的描述。</p>
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
                     * 获取<p>该字段用于返回视频中音频审核的结果，详细返回内容敬请参考AudioSegments数据结构的描述。</p>
                     * @return AudioSegments <p>该字段用于返回视频中音频审核的结果，详细返回内容敬请参考AudioSegments数据结构的描述。</p>
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
                     * 获取<p>当任务状态为Error时，返回对应错误的类型，取值：<br><strong>DECODE_ERROR</strong>: 解码失败。（输入资源中可能包含无法解码的视频）<br><strong>URL_ERROR</strong>：下载地址验证失败。<br><strong>TIMEOUT_ERROR</strong>：处理超时。<br><strong>CALLBACK_ERRORR</strong>：回调错误。<br><strong>MODERATION_ERROR</strong>：审核失败。<br><strong>URL_NOT_SUPPORTED</strong>：源文件太大或没有图片音频帧<br>任务状态非Error时默认返回为空。</p>
                     * @return ErrorType <p>当任务状态为Error时，返回对应错误的类型，取值：<br><strong>DECODE_ERROR</strong>: 解码失败。（输入资源中可能包含无法解码的视频）<br><strong>URL_ERROR</strong>：下载地址验证失败。<br><strong>TIMEOUT_ERROR</strong>：处理超时。<br><strong>CALLBACK_ERRORR</strong>：回调错误。<br><strong>MODERATION_ERROR</strong>：审核失败。<br><strong>URL_NOT_SUPPORTED</strong>：源文件太大或没有图片音频帧<br>任务状态非Error时默认返回为空。</p>
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
                     * 获取<p>该字段用于返回音频文件识别出的对应文本内容。</p>
                     * @return Asrs <p>该字段用于返回音频文件识别出的对应文本内容。</p>
                     * 
                     */
                    std::vector<RcbAsr> GetAsrs() const;

                    /**
                     * 判断参数 Asrs 是否已赋值
                     * @return Asrs 是否已赋值
                     * 
                     */
                    bool AsrsHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于返回检测结果明细数据相关的cos url</p>
                     * @return SegmentCosUrlList <p>该字段用于返回检测结果明细数据相关的cos url</p>
                     * 
                     */
                    SegmentCosUrlList GetSegmentCosUrlList() const;

                    /**
                     * 判断参数 SegmentCosUrlList 是否已赋值
                     * @return SegmentCosUrlList 是否已赋值
                     * 
                     */
                    bool SegmentCosUrlListHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于返回视频中视频切片审核的结果</p>
                     * @return VideoSegments <p>该字段用于返回视频中视频切片审核的结果</p>
                     * 
                     */
                    std::vector<VideoSegment> GetVideoSegments() const;

                    /**
                     * 判断参数 VideoSegments 是否已赋值
                     * @return VideoSegments 是否已赋值
                     * 
                     */
                    bool VideoSegmentsHasBeenSet() const;

                private:

                    /**
                     * <p>该字段用于返回创建视频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>该字段用于返回调用视频审核接口时传入的数据ID参数，方便数据的辨别和管理。</p>
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * <p>该字段用于返回调用视频审核接口时传入的BizType参数，方便数据的辨别和管理。</p>
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>该字段用于返回调用视频审核接口时传入的TaskInput参数中的任务名称，方便任务的识别与管理。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>该字段用于返回所查询内容的任务状态。<br><br>取值：<strong>FINISH</strong>（任务已完成）、<strong>PENDING</strong> （任务等待中）、<strong>RUNNING</strong> （任务进行中）、<strong>ERROR</strong> （任务出错）、<strong>CANCELLED</strong> （任务已取消）。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>该字段用于返回调用视频审核接口时输入的视频审核类型，取值为：<strong>VIDEO</strong>（点播视频）、<strong>LIVE_VIDEO</strong>（直播视频）和<strong>VIDEO_AIGC</strong>（AI生成检测），默认值为VIDEO。</p>
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
                     * <p>该字段用于返回输入媒体文件的详细信息，包括编解码格式、分片时长等信息。详细内容敬请参考MediaInfo数据结构的描述。</p>
                     */
                    MediaInfo m_mediaInfo;
                    bool m_mediaInfoHasBeenSet;

                    /**
                     * <p>该字段用于返回审核服务的媒体内容信息，主要包括传入文件类型和访问地址。</p>
                     */
                    InputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

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
                     * <p>在秒后重试</p>
                     */
                    int64_t m_tryInSeconds;
                    bool m_tryInSecondsHasBeenSet;

                    /**
                     * <p>该字段用于返回视频中截帧审核的结果，详细返回内容敬请参考ImageSegments数据结构的描述。</p>
                     */
                    std::vector<ImageSegments> m_imageSegments;
                    bool m_imageSegmentsHasBeenSet;

                    /**
                     * <p>该字段用于返回视频中音频审核的结果，详细返回内容敬请参考AudioSegments数据结构的描述。</p>
                     */
                    std::vector<AudioSegments> m_audioSegments;
                    bool m_audioSegmentsHasBeenSet;

                    /**
                     * <p>当任务状态为Error时，返回对应错误的类型，取值：<br><strong>DECODE_ERROR</strong>: 解码失败。（输入资源中可能包含无法解码的视频）<br><strong>URL_ERROR</strong>：下载地址验证失败。<br><strong>TIMEOUT_ERROR</strong>：处理超时。<br><strong>CALLBACK_ERRORR</strong>：回调错误。<br><strong>MODERATION_ERROR</strong>：审核失败。<br><strong>URL_NOT_SUPPORTED</strong>：源文件太大或没有图片音频帧<br>任务状态非Error时默认返回为空。</p>
                     */
                    std::string m_errorType;
                    bool m_errorTypeHasBeenSet;

                    /**
                     * <p>当任务状态为Error时，该字段用于返回对应错误的详细描述，任务状态非Error时默认返回为空。</p>
                     */
                    std::string m_errorDescription;
                    bool m_errorDescriptionHasBeenSet;

                    /**
                     * <p>该字段用于返回检测结果所对应的标签。如果未命中恶意，返回Normal，如果命中恶意，则返回Labels中优先级最高的标签</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>该字段用于返回音频文件识别出的对应文本内容，最大支持<strong>前1000个字符</strong>。</p>
                     */
                    std::string m_audioText;
                    bool m_audioTextHasBeenSet;

                    /**
                     * <p>该字段用于返回音频文件识别出的对应文本内容。</p>
                     */
                    std::vector<RcbAsr> m_asrs;
                    bool m_asrsHasBeenSet;

                    /**
                     * <p>该字段用于返回检测结果明细数据相关的cos url</p>
                     */
                    SegmentCosUrlList m_segmentCosUrlList;
                    bool m_segmentCosUrlListHasBeenSet;

                    /**
                     * <p>该字段用于返回视频中视频切片审核的结果</p>
                     */
                    std::vector<VideoSegment> m_videoSegments;
                    bool m_videoSegmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_DESCRIBETASKDETAILRESPONSE_H_
