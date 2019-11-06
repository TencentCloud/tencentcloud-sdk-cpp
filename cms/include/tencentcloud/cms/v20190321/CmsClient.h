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

#ifndef TENCENTCLOUD_CMS_V20190321_CMSCLIENT_H_
#define TENCENTCLOUD_CMS_V20190321_CMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cms/v20190321/model/AudioModerationRequest.h>
#include <tencentcloud/cms/v20190321/model/AudioModerationResponse.h>
#include <tencentcloud/cms/v20190321/model/CreateFileSampleRequest.h>
#include <tencentcloud/cms/v20190321/model/CreateFileSampleResponse.h>
#include <tencentcloud/cms/v20190321/model/CreateTextSampleRequest.h>
#include <tencentcloud/cms/v20190321/model/CreateTextSampleResponse.h>
#include <tencentcloud/cms/v20190321/model/DeleteFileSampleRequest.h>
#include <tencentcloud/cms/v20190321/model/DeleteFileSampleResponse.h>
#include <tencentcloud/cms/v20190321/model/DeleteTextSampleRequest.h>
#include <tencentcloud/cms/v20190321/model/DeleteTextSampleResponse.h>
#include <tencentcloud/cms/v20190321/model/DescribeFileSampleRequest.h>
#include <tencentcloud/cms/v20190321/model/DescribeFileSampleResponse.h>
#include <tencentcloud/cms/v20190321/model/DescribeModerationOverviewRequest.h>
#include <tencentcloud/cms/v20190321/model/DescribeModerationOverviewResponse.h>
#include <tencentcloud/cms/v20190321/model/DescribeTextSampleRequest.h>
#include <tencentcloud/cms/v20190321/model/DescribeTextSampleResponse.h>
#include <tencentcloud/cms/v20190321/model/ImageModerationRequest.h>
#include <tencentcloud/cms/v20190321/model/ImageModerationResponse.h>
#include <tencentcloud/cms/v20190321/model/TextModerationRequest.h>
#include <tencentcloud/cms/v20190321/model/TextModerationResponse.h>
#include <tencentcloud/cms/v20190321/model/VideoModerationRequest.h>
#include <tencentcloud/cms/v20190321/model/VideoModerationResponse.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            class CmsClient : public AbstractClient
            {
            public:
                CmsClient(const Credential &credential, const std::string &region);
                CmsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AudioModerationResponse> AudioModerationOutcome;
                typedef std::future<AudioModerationOutcome> AudioModerationOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::AudioModerationRequest&, AudioModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AudioModerationAsyncHandler;
                typedef Outcome<Error, Model::CreateFileSampleResponse> CreateFileSampleOutcome;
                typedef std::future<CreateFileSampleOutcome> CreateFileSampleOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::CreateFileSampleRequest&, CreateFileSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileSampleAsyncHandler;
                typedef Outcome<Error, Model::CreateTextSampleResponse> CreateTextSampleOutcome;
                typedef std::future<CreateTextSampleOutcome> CreateTextSampleOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::CreateTextSampleRequest&, CreateTextSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTextSampleAsyncHandler;
                typedef Outcome<Error, Model::DeleteFileSampleResponse> DeleteFileSampleOutcome;
                typedef std::future<DeleteFileSampleOutcome> DeleteFileSampleOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::DeleteFileSampleRequest&, DeleteFileSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileSampleAsyncHandler;
                typedef Outcome<Error, Model::DeleteTextSampleResponse> DeleteTextSampleOutcome;
                typedef std::future<DeleteTextSampleOutcome> DeleteTextSampleOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::DeleteTextSampleRequest&, DeleteTextSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTextSampleAsyncHandler;
                typedef Outcome<Error, Model::DescribeFileSampleResponse> DescribeFileSampleOutcome;
                typedef std::future<DescribeFileSampleOutcome> DescribeFileSampleOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::DescribeFileSampleRequest&, DescribeFileSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileSampleAsyncHandler;
                typedef Outcome<Error, Model::DescribeModerationOverviewResponse> DescribeModerationOverviewOutcome;
                typedef std::future<DescribeModerationOverviewOutcome> DescribeModerationOverviewOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::DescribeModerationOverviewRequest&, DescribeModerationOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModerationOverviewAsyncHandler;
                typedef Outcome<Error, Model::DescribeTextSampleResponse> DescribeTextSampleOutcome;
                typedef std::future<DescribeTextSampleOutcome> DescribeTextSampleOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::DescribeTextSampleRequest&, DescribeTextSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTextSampleAsyncHandler;
                typedef Outcome<Error, Model::ImageModerationResponse> ImageModerationOutcome;
                typedef std::future<ImageModerationOutcome> ImageModerationOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::ImageModerationRequest&, ImageModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageModerationAsyncHandler;
                typedef Outcome<Error, Model::TextModerationResponse> TextModerationOutcome;
                typedef std::future<TextModerationOutcome> TextModerationOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::TextModerationRequest&, TextModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextModerationAsyncHandler;
                typedef Outcome<Error, Model::VideoModerationResponse> VideoModerationOutcome;
                typedef std::future<VideoModerationOutcome> VideoModerationOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::VideoModerationRequest&, VideoModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VideoModerationAsyncHandler;



                /**
                 *音频内容检测（Audio Moderation, AM）服务使用了波形分析、声纹分析等技术，能识别涉黄、涉政、涉恐等违规音频，同时支持用户配置音频黑库，打击自定义的违规内容。

<br>
接口返回值说明：调用本接口有两个返回值，一个是同步返回值，一个是识别完成后的异步回调返回值。

音频识别结果存在于异步回调返回值中，异步回调返回值明细：

参数名 | 类型 | 描述
-|-|-
SeqID | String | 请求seqId唯一标识
EvilFlag | Integer | 是否恶意：0正常，1可疑（Homology模块下：0未匹配到，1恶意，2白样本）
EvilType | Integer | 恶意类型：100正常，20001政治，20002色情，20007谩骂
Duration | Integer | 音频时长（单位：毫秒）
PornDetect | [AudioDetectData](#ADD) | 音频智能鉴黄
PolityDetect | [AudioDetectData](#ADD)| 音频涉政识别
CurseDetect | [AudioDetectData](#ADD) | 音频谩骂识别
CustomizedDetect | [AudioDetectData](#ADD) | 自定义识别
Homology | [AudioDetectData](#ADD) | 相似度识别


<span id="ADD"> AudioDetectData </span>

参数名 | 类型 | 描述
-|-|-
HitFlag | Integer | 0正常，1可疑
Score | Integer | 判断分值
EvilType | Integer | 恶意类型：100正常，20001政治，20002色情，20007谩骂
Keywords | Array of String | 关键词明细
StartTime | Array of String | 恶意开始时间（Homology、CustomizedDetect无此字段）
EndTime | Array of String | 恶意结束时间（Homology、CustomizedDetect无此字段）
SeedUrl | String | 命中的种子URL
                 * @param req AudioModerationRequest
                 * @return AudioModerationOutcome
                 */
                AudioModerationOutcome AudioModeration(const Model::AudioModerationRequest &request);
                void AudioModerationAsync(const Model::AudioModerationRequest& request, const AudioModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AudioModerationOutcomeCallable AudioModerationCallable(const Model::AudioModerationRequest& request);

                /**
                 *通过该接口可以将文件新增到样本库
                 * @param req CreateFileSampleRequest
                 * @return CreateFileSampleOutcome
                 */
                CreateFileSampleOutcome CreateFileSample(const Model::CreateFileSampleRequest &request);
                void CreateFileSampleAsync(const Model::CreateFileSampleRequest& request, const CreateFileSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFileSampleOutcomeCallable CreateFileSampleCallable(const Model::CreateFileSampleRequest& request);

                /**
                 *新增文本类型样本库
                 * @param req CreateTextSampleRequest
                 * @return CreateTextSampleOutcome
                 */
                CreateTextSampleOutcome CreateTextSample(const Model::CreateTextSampleRequest &request);
                void CreateTextSampleAsync(const Model::CreateTextSampleRequest& request, const CreateTextSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTextSampleOutcomeCallable CreateTextSampleCallable(const Model::CreateTextSampleRequest& request);

                /**
                 *删除文件样本库，支持批量删除，一次提交不超过20个
                 * @param req DeleteFileSampleRequest
                 * @return DeleteFileSampleOutcome
                 */
                DeleteFileSampleOutcome DeleteFileSample(const Model::DeleteFileSampleRequest &request);
                void DeleteFileSampleAsync(const Model::DeleteFileSampleRequest& request, const DeleteFileSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFileSampleOutcomeCallable DeleteFileSampleCallable(const Model::DeleteFileSampleRequest& request);

                /**
                 *删除文字样本库，暂时只支持单个删除
                 * @param req DeleteTextSampleRequest
                 * @return DeleteTextSampleOutcome
                 */
                DeleteTextSampleOutcome DeleteTextSample(const Model::DeleteTextSampleRequest &request);
                void DeleteTextSampleAsync(const Model::DeleteTextSampleRequest& request, const DeleteTextSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTextSampleOutcomeCallable DeleteTextSampleCallable(const Model::DeleteTextSampleRequest& request);

                /**
                 *查询文件样本库，支持批量查询
                 * @param req DescribeFileSampleRequest
                 * @return DescribeFileSampleOutcome
                 */
                DescribeFileSampleOutcome DescribeFileSample(const Model::DescribeFileSampleRequest &request);
                void DescribeFileSampleAsync(const Model::DescribeFileSampleRequest& request, const DescribeFileSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileSampleOutcomeCallable DescribeFileSampleCallable(const Model::DescribeFileSampleRequest& request);

                /**
                 *根据日期，渠道和服务类型查询识别结果概览数据
                 * @param req DescribeModerationOverviewRequest
                 * @return DescribeModerationOverviewOutcome
                 */
                DescribeModerationOverviewOutcome DescribeModerationOverview(const Model::DescribeModerationOverviewRequest &request);
                void DescribeModerationOverviewAsync(const Model::DescribeModerationOverviewRequest& request, const DescribeModerationOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModerationOverviewOutcomeCallable DescribeModerationOverviewCallable(const Model::DescribeModerationOverviewRequest& request);

                /**
                 *支持批量查询文字样本库
                 * @param req DescribeTextSampleRequest
                 * @return DescribeTextSampleOutcome
                 */
                DescribeTextSampleOutcome DescribeTextSample(const Model::DescribeTextSampleRequest &request);
                void DescribeTextSampleAsync(const Model::DescribeTextSampleRequest& request, const DescribeTextSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTextSampleOutcomeCallable DescribeTextSampleCallable(const Model::DescribeTextSampleRequest& request);

                /**
                 *图片内容检测服务（Image Moderation, IM）能自动扫描图片，识别涉黄、涉恐、涉政、涉毒等有害内容，同时支持用户配置图片黑名单，打击自定义的违规图片。
                 * @param req ImageModerationRequest
                 * @return ImageModerationOutcome
                 */
                ImageModerationOutcome ImageModeration(const Model::ImageModerationRequest &request);
                void ImageModerationAsync(const Model::ImageModerationRequest& request, const ImageModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageModerationOutcomeCallable ImageModerationCallable(const Model::ImageModerationRequest& request);

                /**
                 *文本内容检测（Text Moderation）服务使用了深度学习技术，识别涉黄、涉政、涉恐等有害内容，同时支持用户配置词库，打击自定义的违规文本。
                 * @param req TextModerationRequest
                 * @return TextModerationOutcome
                 */
                TextModerationOutcome TextModeration(const Model::TextModerationRequest &request);
                void TextModerationAsync(const Model::TextModerationRequest& request, const TextModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextModerationOutcomeCallable TextModerationCallable(const Model::TextModerationRequest& request);

                /**
                 *视频内容检测（Video Moderation, VM）服务能识别涉黄、涉政、涉恐等违规视频，同时支持用户配置视频黑库，打击自定义的违规内容。

<br>
接口返回值说明：调用本接口有两个返回值，一个是同步返回值，一个是识别完成后的异步回调返回值。

视频识别结果存在于异步回调返回值中，异步回调返回值明细：

参数名 | 类型 | 描述
-|-|-
SeqID | String | 请求seqId唯一标识
EvilFlag | Integer | 是否恶意：0正常，1可疑（Homology模块下：0未匹配到，1恶意，2白样本）
EvilType | Integer | 恶意类型：100正常，20001政治，20002色情
Duration | Integer | 视频时长（单位：秒）
PornDetect | [VideoDetectData](#VDD) | 视频智能鉴黄
PolityDetect | [VideoDetectData](#VDD) | 视频涉政识别
Homology | [VideoDetectData](#VDD) | 相似度识别


<span id="VDD">VideoDetectData</span>

参数名 | 类型 | 描述
-|-|-
HitFlag | Integer  | 0正常，1可疑
Score | Integer | 判断分值
EvilType | Integer | 恶意类型：100正常，20001政治，20002色情
Keywords | Array of String | 关键词明细
SeedUrl | String | 命中的种子URL
                 * @param req VideoModerationRequest
                 * @return VideoModerationOutcome
                 */
                VideoModerationOutcome VideoModeration(const Model::VideoModerationRequest &request);
                void VideoModerationAsync(const Model::VideoModerationRequest& request, const VideoModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VideoModerationOutcomeCallable VideoModerationCallable(const Model::VideoModerationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_CMSCLIENT_H_
