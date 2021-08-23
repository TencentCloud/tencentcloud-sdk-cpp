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

#ifndef TENCENTCLOUD_TBM_V20180129_TBMCLIENT_H_
#define TENCENTCLOUD_TBM_V20180129_TBMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tbm/v20180129/model/DescribeBrandCommentCountRequest.h>
#include <tencentcloud/tbm/v20180129/model/DescribeBrandCommentCountResponse.h>
#include <tencentcloud/tbm/v20180129/model/DescribeBrandExposureRequest.h>
#include <tencentcloud/tbm/v20180129/model/DescribeBrandExposureResponse.h>
#include <tencentcloud/tbm/v20180129/model/DescribeBrandMediaReportRequest.h>
#include <tencentcloud/tbm/v20180129/model/DescribeBrandMediaReportResponse.h>
#include <tencentcloud/tbm/v20180129/model/DescribeBrandNegCommentsRequest.h>
#include <tencentcloud/tbm/v20180129/model/DescribeBrandNegCommentsResponse.h>
#include <tencentcloud/tbm/v20180129/model/DescribeBrandPosCommentsRequest.h>
#include <tencentcloud/tbm/v20180129/model/DescribeBrandPosCommentsResponse.h>
#include <tencentcloud/tbm/v20180129/model/DescribeBrandSocialOpinionRequest.h>
#include <tencentcloud/tbm/v20180129/model/DescribeBrandSocialOpinionResponse.h>
#include <tencentcloud/tbm/v20180129/model/DescribeBrandSocialReportRequest.h>
#include <tencentcloud/tbm/v20180129/model/DescribeBrandSocialReportResponse.h>
#include <tencentcloud/tbm/v20180129/model/DescribeIndustryNewsRequest.h>
#include <tencentcloud/tbm/v20180129/model/DescribeIndustryNewsResponse.h>
#include <tencentcloud/tbm/v20180129/model/DescribeUserPortraitRequest.h>
#include <tencentcloud/tbm/v20180129/model/DescribeUserPortraitResponse.h>


namespace TencentCloud
{
    namespace Tbm
    {
        namespace V20180129
        {
            class TbmClient : public AbstractClient
            {
            public:
                TbmClient(const Credential &credential, const std::string &region);
                TbmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeBrandCommentCountResponse> DescribeBrandCommentCountOutcome;
                typedef std::future<DescribeBrandCommentCountOutcome> DescribeBrandCommentCountOutcomeCallable;
                typedef std::function<void(const TbmClient*, const Model::DescribeBrandCommentCountRequest&, DescribeBrandCommentCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBrandCommentCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBrandExposureResponse> DescribeBrandExposureOutcome;
                typedef std::future<DescribeBrandExposureOutcome> DescribeBrandExposureOutcomeCallable;
                typedef std::function<void(const TbmClient*, const Model::DescribeBrandExposureRequest&, DescribeBrandExposureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBrandExposureAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBrandMediaReportResponse> DescribeBrandMediaReportOutcome;
                typedef std::future<DescribeBrandMediaReportOutcome> DescribeBrandMediaReportOutcomeCallable;
                typedef std::function<void(const TbmClient*, const Model::DescribeBrandMediaReportRequest&, DescribeBrandMediaReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBrandMediaReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBrandNegCommentsResponse> DescribeBrandNegCommentsOutcome;
                typedef std::future<DescribeBrandNegCommentsOutcome> DescribeBrandNegCommentsOutcomeCallable;
                typedef std::function<void(const TbmClient*, const Model::DescribeBrandNegCommentsRequest&, DescribeBrandNegCommentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBrandNegCommentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBrandPosCommentsResponse> DescribeBrandPosCommentsOutcome;
                typedef std::future<DescribeBrandPosCommentsOutcome> DescribeBrandPosCommentsOutcomeCallable;
                typedef std::function<void(const TbmClient*, const Model::DescribeBrandPosCommentsRequest&, DescribeBrandPosCommentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBrandPosCommentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBrandSocialOpinionResponse> DescribeBrandSocialOpinionOutcome;
                typedef std::future<DescribeBrandSocialOpinionOutcome> DescribeBrandSocialOpinionOutcomeCallable;
                typedef std::function<void(const TbmClient*, const Model::DescribeBrandSocialOpinionRequest&, DescribeBrandSocialOpinionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBrandSocialOpinionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBrandSocialReportResponse> DescribeBrandSocialReportOutcome;
                typedef std::future<DescribeBrandSocialReportOutcome> DescribeBrandSocialReportOutcomeCallable;
                typedef std::function<void(const TbmClient*, const Model::DescribeBrandSocialReportRequest&, DescribeBrandSocialReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBrandSocialReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIndustryNewsResponse> DescribeIndustryNewsOutcome;
                typedef std::future<DescribeIndustryNewsOutcome> DescribeIndustryNewsOutcomeCallable;
                typedef std::function<void(const TbmClient*, const Model::DescribeIndustryNewsRequest&, DescribeIndustryNewsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIndustryNewsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserPortraitResponse> DescribeUserPortraitOutcome;
                typedef std::future<DescribeUserPortraitOutcome> DescribeUserPortraitOutcomeCallable;
                typedef std::function<void(const TbmClient*, const Model::DescribeUserPortraitRequest&, DescribeUserPortraitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserPortraitAsyncHandler;



                /**
                 *通过分析用户在评价品牌时用词的正负面情绪评分，返回品牌好评与差评评价条数，按天输出结果。
                 * @param req DescribeBrandCommentCountRequest
                 * @return DescribeBrandCommentCountOutcome
                 */
                DescribeBrandCommentCountOutcome DescribeBrandCommentCount(const Model::DescribeBrandCommentCountRequest &request);
                void DescribeBrandCommentCountAsync(const Model::DescribeBrandCommentCountRequest& request, const DescribeBrandCommentCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBrandCommentCountOutcomeCallable DescribeBrandCommentCountCallable(const Model::DescribeBrandCommentCountRequest& request);

                /**
                 *监测品牌关键词命中文章标题或全文的文章篇数，按天输出数据。
                 * @param req DescribeBrandExposureRequest
                 * @return DescribeBrandExposureOutcome
                 */
                DescribeBrandExposureOutcome DescribeBrandExposure(const Model::DescribeBrandExposureRequest &request);
                void DescribeBrandExposureAsync(const Model::DescribeBrandExposureRequest& request, const DescribeBrandExposureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBrandExposureOutcomeCallable DescribeBrandExposureCallable(const Model::DescribeBrandExposureRequest& request);

                /**
                 *监测品牌关键词出现在媒体网站（新闻媒体、网络门户、政府网站、微信公众号、天天快报等）发布资讯标题和正文中的报道数。按天输出结果。
                 * @param req DescribeBrandMediaReportRequest
                 * @return DescribeBrandMediaReportOutcome
                 */
                DescribeBrandMediaReportOutcome DescribeBrandMediaReport(const Model::DescribeBrandMediaReportRequest &request);
                void DescribeBrandMediaReportAsync(const Model::DescribeBrandMediaReportRequest& request, const DescribeBrandMediaReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBrandMediaReportOutcomeCallable DescribeBrandMediaReportCallable(const Model::DescribeBrandMediaReportRequest& request);

                /**
                 *通过分析用户在评价品牌时用词的正负面情绪评分，返回品牌热门差评观点列表。
                 * @param req DescribeBrandNegCommentsRequest
                 * @return DescribeBrandNegCommentsOutcome
                 */
                DescribeBrandNegCommentsOutcome DescribeBrandNegComments(const Model::DescribeBrandNegCommentsRequest &request);
                void DescribeBrandNegCommentsAsync(const Model::DescribeBrandNegCommentsRequest& request, const DescribeBrandNegCommentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBrandNegCommentsOutcomeCallable DescribeBrandNegCommentsCallable(const Model::DescribeBrandNegCommentsRequest& request);

                /**
                 *通过分析用户在评价品牌时用词的正负面情绪评分，返回品牌热门好评观点列表。
                 * @param req DescribeBrandPosCommentsRequest
                 * @return DescribeBrandPosCommentsOutcome
                 */
                DescribeBrandPosCommentsOutcome DescribeBrandPosComments(const Model::DescribeBrandPosCommentsRequest &request);
                void DescribeBrandPosCommentsAsync(const Model::DescribeBrandPosCommentsRequest& request, const DescribeBrandPosCommentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBrandPosCommentsOutcomeCallable DescribeBrandPosCommentsCallable(const Model::DescribeBrandPosCommentsRequest& request);

                /**
                 *检测品牌关键词出现在微博、QQ兴趣部落、论坛、博客等个人公开贡献资讯中的内容，每天聚合近30天热度最高的观点列表。
                 * @param req DescribeBrandSocialOpinionRequest
                 * @return DescribeBrandSocialOpinionOutcome
                 */
                DescribeBrandSocialOpinionOutcome DescribeBrandSocialOpinion(const Model::DescribeBrandSocialOpinionRequest &request);
                void DescribeBrandSocialOpinionAsync(const Model::DescribeBrandSocialOpinionRequest& request, const DescribeBrandSocialOpinionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBrandSocialOpinionOutcomeCallable DescribeBrandSocialOpinionCallable(const Model::DescribeBrandSocialOpinionRequest& request);

                /**
                 *监测品牌关键词出现在微博、QQ兴趣部落、论坛、博客等个人公开贡献资讯中的条数。按天输出数据结果。
                 * @param req DescribeBrandSocialReportRequest
                 * @return DescribeBrandSocialReportOutcome
                 */
                DescribeBrandSocialReportOutcome DescribeBrandSocialReport(const Model::DescribeBrandSocialReportRequest &request);
                void DescribeBrandSocialReportAsync(const Model::DescribeBrandSocialReportRequest& request, const DescribeBrandSocialReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBrandSocialReportOutcomeCallable DescribeBrandSocialReportCallable(const Model::DescribeBrandSocialReportRequest& request);

                /**
                 *根据客户定制的行业关键词，监测关键词出现在媒体网站（新闻媒体、网络门户、政府网站、微信公众号、天天快报等）发布资讯标题和正文中的报道数，以及文章列表、来源渠道、作者、发布时间等。
                 * @param req DescribeIndustryNewsRequest
                 * @return DescribeIndustryNewsOutcome
                 */
                DescribeIndustryNewsOutcome DescribeIndustryNews(const Model::DescribeIndustryNewsRequest &request);
                void DescribeIndustryNewsAsync(const Model::DescribeIndustryNewsRequest& request, const DescribeIndustryNewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIndustryNewsOutcomeCallable DescribeIndustryNewsCallable(const Model::DescribeIndustryNewsRequest& request);

                /**
                 *通过分析洞察参与过品牌媒体互动的用户，比如公开发表品牌的新闻评论、在公开社交渠道发表过对品牌的评价观点等用户，返回用户的画像属性分布，例如性别、年龄、地域、喜爱的明星、喜爱的影视。
                 * @param req DescribeUserPortraitRequest
                 * @return DescribeUserPortraitOutcome
                 */
                DescribeUserPortraitOutcome DescribeUserPortrait(const Model::DescribeUserPortraitRequest &request);
                void DescribeUserPortraitAsync(const Model::DescribeUserPortraitRequest& request, const DescribeUserPortraitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserPortraitOutcomeCallable DescribeUserPortraitCallable(const Model::DescribeUserPortraitRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TBM_V20180129_TBMCLIENT_H_
