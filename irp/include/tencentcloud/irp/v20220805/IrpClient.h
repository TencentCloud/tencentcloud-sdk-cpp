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

#ifndef TENCENTCLOUD_IRP_V20220805_IRPCLIENT_H_
#define TENCENTCLOUD_IRP_V20220805_IRPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/irp/v20220805/model/DescribeGoodsRecommendRequest.h>
#include <tencentcloud/irp/v20220805/model/DescribeGoodsRecommendResponse.h>
#include <tencentcloud/irp/v20220805/model/FeedRecommendRequest.h>
#include <tencentcloud/irp/v20220805/model/FeedRecommendResponse.h>
#include <tencentcloud/irp/v20220805/model/ReportFeedBehaviorRequest.h>
#include <tencentcloud/irp/v20220805/model/ReportFeedBehaviorResponse.h>
#include <tencentcloud/irp/v20220805/model/ReportFeedItemRequest.h>
#include <tencentcloud/irp/v20220805/model/ReportFeedItemResponse.h>
#include <tencentcloud/irp/v20220805/model/ReportFeedUserRequest.h>
#include <tencentcloud/irp/v20220805/model/ReportFeedUserResponse.h>
#include <tencentcloud/irp/v20220805/model/ReportGoodsBehaviorRequest.h>
#include <tencentcloud/irp/v20220805/model/ReportGoodsBehaviorResponse.h>
#include <tencentcloud/irp/v20220805/model/ReportGoodsInfoRequest.h>
#include <tencentcloud/irp/v20220805/model/ReportGoodsInfoResponse.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220805
        {
            class IrpClient : public AbstractClient
            {
            public:
                IrpClient(const Credential &credential, const std::string &region);
                IrpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeGoodsRecommendResponse> DescribeGoodsRecommendOutcome;
                typedef std::future<DescribeGoodsRecommendOutcome> DescribeGoodsRecommendOutcomeCallable;
                typedef std::function<void(const IrpClient*, const Model::DescribeGoodsRecommendRequest&, DescribeGoodsRecommendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGoodsRecommendAsyncHandler;
                typedef Outcome<Core::Error, Model::FeedRecommendResponse> FeedRecommendOutcome;
                typedef std::future<FeedRecommendOutcome> FeedRecommendOutcomeCallable;
                typedef std::function<void(const IrpClient*, const Model::FeedRecommendRequest&, FeedRecommendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FeedRecommendAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportFeedBehaviorResponse> ReportFeedBehaviorOutcome;
                typedef std::future<ReportFeedBehaviorOutcome> ReportFeedBehaviorOutcomeCallable;
                typedef std::function<void(const IrpClient*, const Model::ReportFeedBehaviorRequest&, ReportFeedBehaviorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportFeedBehaviorAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportFeedItemResponse> ReportFeedItemOutcome;
                typedef std::future<ReportFeedItemOutcome> ReportFeedItemOutcomeCallable;
                typedef std::function<void(const IrpClient*, const Model::ReportFeedItemRequest&, ReportFeedItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportFeedItemAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportFeedUserResponse> ReportFeedUserOutcome;
                typedef std::future<ReportFeedUserOutcome> ReportFeedUserOutcomeCallable;
                typedef std::function<void(const IrpClient*, const Model::ReportFeedUserRequest&, ReportFeedUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportFeedUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportGoodsBehaviorResponse> ReportGoodsBehaviorOutcome;
                typedef std::future<ReportGoodsBehaviorOutcome> ReportGoodsBehaviorOutcomeCallable;
                typedef std::function<void(const IrpClient*, const Model::ReportGoodsBehaviorRequest&, ReportGoodsBehaviorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportGoodsBehaviorAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportGoodsInfoResponse> ReportGoodsInfoOutcome;
                typedef std::future<ReportGoodsInfoOutcome> ReportGoodsInfoOutcomeCallable;
                typedef std::function<void(const IrpClient*, const Model::ReportGoodsInfoRequest&, ReportGoodsInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportGoodsInfoAsyncHandler;



                /**
                 *获取电商类推荐结果
                 * @param req DescribeGoodsRecommendRequest
                 * @return DescribeGoodsRecommendOutcome
                 */
                DescribeGoodsRecommendOutcome DescribeGoodsRecommend(const Model::DescribeGoodsRecommendRequest &request);
                void DescribeGoodsRecommendAsync(const Model::DescribeGoodsRecommendRequest& request, const DescribeGoodsRecommendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGoodsRecommendOutcomeCallable DescribeGoodsRecommendCallable(const Model::DescribeGoodsRecommendRequest& request);

                /**
                 *获取信息流推荐结果
                 * @param req FeedRecommendRequest
                 * @return FeedRecommendOutcome
                 */
                FeedRecommendOutcome FeedRecommend(const Model::FeedRecommendRequest &request);
                void FeedRecommendAsync(const Model::FeedRecommendRequest& request, const FeedRecommendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FeedRecommendOutcomeCallable FeedRecommendCallable(const Model::FeedRecommendRequest& request);

                /**
                 *上报信息流场景内的行为数据，随着数据的积累，模型的效果会逐渐稳定。
                 * @param req ReportFeedBehaviorRequest
                 * @return ReportFeedBehaviorOutcome
                 */
                ReportFeedBehaviorOutcome ReportFeedBehavior(const Model::ReportFeedBehaviorRequest &request);
                void ReportFeedBehaviorAsync(const Model::ReportFeedBehaviorRequest& request, const ReportFeedBehaviorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportFeedBehaviorOutcomeCallable ReportFeedBehaviorCallable(const Model::ReportFeedBehaviorRequest& request);

                /**
                 *上报被用于推荐的信息流内容信息
                 * @param req ReportFeedItemRequest
                 * @return ReportFeedItemOutcome
                 */
                ReportFeedItemOutcome ReportFeedItem(const Model::ReportFeedItemRequest &request);
                void ReportFeedItemAsync(const Model::ReportFeedItemRequest& request, const ReportFeedItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportFeedItemOutcomeCallable ReportFeedItemCallable(const Model::ReportFeedItemRequest& request);

                /**
                 *上报信息流用户信息，请务必确认用户的唯一性，并在请求推荐结果时指定用户的唯一标识信息（UserId），否则将无法进行千人千面的推荐
                 * @param req ReportFeedUserRequest
                 * @return ReportFeedUserOutcome
                 */
                ReportFeedUserOutcome ReportFeedUser(const Model::ReportFeedUserRequest &request);
                void ReportFeedUserAsync(const Model::ReportFeedUserRequest& request, const ReportFeedUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportFeedUserOutcomeCallable ReportFeedUserCallable(const Model::ReportFeedUserRequest& request);

                /**
                 *上报电商类行为数据
                 * @param req ReportGoodsBehaviorRequest
                 * @return ReportGoodsBehaviorOutcome
                 */
                ReportGoodsBehaviorOutcome ReportGoodsBehavior(const Model::ReportGoodsBehaviorRequest &request);
                void ReportGoodsBehaviorAsync(const Model::ReportGoodsBehaviorRequest& request, const ReportGoodsBehaviorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportGoodsBehaviorOutcomeCallable ReportGoodsBehaviorCallable(const Model::ReportGoodsBehaviorRequest& request);

                /**
                 *上报电商类商品信息
                 * @param req ReportGoodsInfoRequest
                 * @return ReportGoodsInfoOutcome
                 */
                ReportGoodsInfoOutcome ReportGoodsInfo(const Model::ReportGoodsInfoRequest &request);
                void ReportGoodsInfoAsync(const Model::ReportGoodsInfoRequest& request, const ReportGoodsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportGoodsInfoOutcomeCallable ReportGoodsInfoCallable(const Model::ReportGoodsInfoRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220805_IRPCLIENT_H_
