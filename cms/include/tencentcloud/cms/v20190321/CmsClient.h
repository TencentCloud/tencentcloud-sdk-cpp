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
#include <tencentcloud/cms/v20190321/model/CreateKeywordsSamplesRequest.h>
#include <tencentcloud/cms/v20190321/model/CreateKeywordsSamplesResponse.h>
#include <tencentcloud/cms/v20190321/model/DeleteLibSamplesRequest.h>
#include <tencentcloud/cms/v20190321/model/DeleteLibSamplesResponse.h>
#include <tencentcloud/cms/v20190321/model/DescribeKeywordsLibsRequest.h>
#include <tencentcloud/cms/v20190321/model/DescribeKeywordsLibsResponse.h>
#include <tencentcloud/cms/v20190321/model/DescribeLibSamplesRequest.h>
#include <tencentcloud/cms/v20190321/model/DescribeLibSamplesResponse.h>
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

                typedef Outcome<Core::Error, Model::CreateKeywordsSamplesResponse> CreateKeywordsSamplesOutcome;
                typedef std::future<CreateKeywordsSamplesOutcome> CreateKeywordsSamplesOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::CreateKeywordsSamplesRequest&, CreateKeywordsSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeywordsSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLibSamplesResponse> DeleteLibSamplesOutcome;
                typedef std::future<DeleteLibSamplesOutcome> DeleteLibSamplesOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::DeleteLibSamplesRequest&, DeleteLibSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLibSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKeywordsLibsResponse> DescribeKeywordsLibsOutcome;
                typedef std::future<DescribeKeywordsLibsOutcome> DescribeKeywordsLibsOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::DescribeKeywordsLibsRequest&, DescribeKeywordsLibsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeywordsLibsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLibSamplesResponse> DescribeLibSamplesOutcome;
                typedef std::future<DescribeLibSamplesOutcome> DescribeLibSamplesOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::DescribeLibSamplesRequest&, DescribeLibSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLibSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageModerationResponse> ImageModerationOutcome;
                typedef std::future<ImageModerationOutcome> ImageModerationOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::ImageModerationRequest&, ImageModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageModerationAsyncHandler;
                typedef Outcome<Core::Error, Model::TextModerationResponse> TextModerationOutcome;
                typedef std::future<TextModerationOutcome> TextModerationOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::TextModerationRequest&, TextModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextModerationAsyncHandler;



                /**
                 *创建关键词接口
                 * @param req CreateKeywordsSamplesRequest
                 * @return CreateKeywordsSamplesOutcome
                 */
                CreateKeywordsSamplesOutcome CreateKeywordsSamples(const Model::CreateKeywordsSamplesRequest &request);
                void CreateKeywordsSamplesAsync(const Model::CreateKeywordsSamplesRequest& request, const CreateKeywordsSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKeywordsSamplesOutcomeCallable CreateKeywordsSamplesCallable(const Model::CreateKeywordsSamplesRequest& request);

                /**
                 *删除关键词接口
                 * @param req DeleteLibSamplesRequest
                 * @return DeleteLibSamplesOutcome
                 */
                DeleteLibSamplesOutcome DeleteLibSamples(const Model::DeleteLibSamplesRequest &request);
                void DeleteLibSamplesAsync(const Model::DeleteLibSamplesRequest& request, const DeleteLibSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLibSamplesOutcomeCallable DeleteLibSamplesCallable(const Model::DeleteLibSamplesRequest& request);

                /**
                 *获取用户词库列表
                 * @param req DescribeKeywordsLibsRequest
                 * @return DescribeKeywordsLibsOutcome
                 */
                DescribeKeywordsLibsOutcome DescribeKeywordsLibs(const Model::DescribeKeywordsLibsRequest &request);
                void DescribeKeywordsLibsAsync(const Model::DescribeKeywordsLibsRequest& request, const DescribeKeywordsLibsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeywordsLibsOutcomeCallable DescribeKeywordsLibsCallable(const Model::DescribeKeywordsLibsRequest& request);

                /**
                 *获取关键词接口
                 * @param req DescribeLibSamplesRequest
                 * @return DescribeLibSamplesOutcome
                 */
                DescribeLibSamplesOutcome DescribeLibSamples(const Model::DescribeLibSamplesRequest &request);
                void DescribeLibSamplesAsync(const Model::DescribeLibSamplesRequest& request, const DescribeLibSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLibSamplesOutcomeCallable DescribeLibSamplesCallable(const Model::DescribeLibSamplesRequest& request);

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
