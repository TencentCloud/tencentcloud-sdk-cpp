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
#include <tencentcloud/cms/v20190321/model/DescribeTextSampleRequest.h>
#include <tencentcloud/cms/v20190321/model/DescribeTextSampleResponse.h>
#include <tencentcloud/cms/v20190321/model/ImageModerationRequest.h>
#include <tencentcloud/cms/v20190321/model/ImageModerationResponse.h>
#include <tencentcloud/cms/v20190321/model/TextModerationRequest.h>
#include <tencentcloud/cms/v20190321/model/TextModerationResponse.h>


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
                typedef Outcome<Error, Model::DescribeTextSampleResponse> DescribeTextSampleOutcome;
                typedef std::future<DescribeTextSampleOutcome> DescribeTextSampleOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::DescribeTextSampleRequest&, DescribeTextSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTextSampleAsyncHandler;
                typedef Outcome<Error, Model::ImageModerationResponse> ImageModerationOutcome;
                typedef std::future<ImageModerationOutcome> ImageModerationOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::ImageModerationRequest&, ImageModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageModerationAsyncHandler;
                typedef Outcome<Error, Model::TextModerationResponse> TextModerationOutcome;
                typedef std::future<TextModerationOutcome> TextModerationOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::TextModerationRequest&, TextModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextModerationAsyncHandler;



                /**
                 *本文档适用于图片内容安全、视频内容安全自定义识别库的管理。
<br>
通过该接口可以将图片新增到样本库。
                 * @param req CreateFileSampleRequest
                 * @return CreateFileSampleOutcome
                 */
                CreateFileSampleOutcome CreateFileSample(const Model::CreateFileSampleRequest &request);
                void CreateFileSampleAsync(const Model::CreateFileSampleRequest& request, const CreateFileSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFileSampleOutcomeCallable CreateFileSampleCallable(const Model::CreateFileSampleRequest& request);

                /**
                 *本文档适用于文本内容安全、音频内容安全自定义识别库的管理。
<br>
通过该接口可以将文本新增到样本库。
                 * @param req CreateTextSampleRequest
                 * @return CreateTextSampleOutcome
                 */
                CreateTextSampleOutcome CreateTextSample(const Model::CreateTextSampleRequest &request);
                void CreateTextSampleAsync(const Model::CreateTextSampleRequest& request, const CreateTextSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTextSampleOutcomeCallable CreateTextSampleCallable(const Model::CreateTextSampleRequest& request);

                /**
                 *本文档适用于图片内容安全、视频内容安全自定义识别库的管理。
<br>
删除图片样本库，支持批量删除，一次提交不超过20个。
                 * @param req DeleteFileSampleRequest
                 * @return DeleteFileSampleOutcome
                 */
                DeleteFileSampleOutcome DeleteFileSample(const Model::DeleteFileSampleRequest &request);
                void DeleteFileSampleAsync(const Model::DeleteFileSampleRequest& request, const DeleteFileSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFileSampleOutcomeCallable DeleteFileSampleCallable(const Model::DeleteFileSampleRequest& request);

                /**
                 *本文档适用于文本内容安全、音频内容安全自定义识别库的管理。
<br>
删除文本样本库，暂时只支持单个删除。
                 * @param req DeleteTextSampleRequest
                 * @return DeleteTextSampleOutcome
                 */
                DeleteTextSampleOutcome DeleteTextSample(const Model::DeleteTextSampleRequest &request);
                void DeleteTextSampleAsync(const Model::DeleteTextSampleRequest& request, const DeleteTextSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTextSampleOutcomeCallable DeleteTextSampleCallable(const Model::DeleteTextSampleRequest& request);

                /**
                 *本文档适用于图片内容安全、视频内容安全自定义识别库的管理。
<br>
查询图片样本库，支持批量查询。
                 * @param req DescribeFileSampleRequest
                 * @return DescribeFileSampleOutcome
                 */
                DescribeFileSampleOutcome DescribeFileSample(const Model::DescribeFileSampleRequest &request);
                void DescribeFileSampleAsync(const Model::DescribeFileSampleRequest& request, const DescribeFileSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileSampleOutcomeCallable DescribeFileSampleCallable(const Model::DescribeFileSampleRequest& request);

                /**
                 *本文档适用于文本内容安全、音频内容安全自定义识别库的管理。
<br>
支持批量查询文本样本库。
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

            };
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_CMSCLIENT_H_
