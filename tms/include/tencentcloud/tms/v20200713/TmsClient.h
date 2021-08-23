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

#ifndef TENCENTCLOUD_TMS_V20200713_TMSCLIENT_H_
#define TENCENTCLOUD_TMS_V20200713_TMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tms/v20200713/model/AccountTipoffAccessRequest.h>
#include <tencentcloud/tms/v20200713/model/AccountTipoffAccessResponse.h>
#include <tencentcloud/tms/v20200713/model/DescribeTextLibRequest.h>
#include <tencentcloud/tms/v20200713/model/DescribeTextLibResponse.h>
#include <tencentcloud/tms/v20200713/model/DescribeTextStatRequest.h>
#include <tencentcloud/tms/v20200713/model/DescribeTextStatResponse.h>
#include <tencentcloud/tms/v20200713/model/TextModerationRequest.h>
#include <tencentcloud/tms/v20200713/model/TextModerationResponse.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20200713
        {
            class TmsClient : public AbstractClient
            {
            public:
                TmsClient(const Credential &credential, const std::string &region);
                TmsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AccountTipoffAccessResponse> AccountTipoffAccessOutcome;
                typedef std::future<AccountTipoffAccessOutcome> AccountTipoffAccessOutcomeCallable;
                typedef std::function<void(const TmsClient*, const Model::AccountTipoffAccessRequest&, AccountTipoffAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AccountTipoffAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTextLibResponse> DescribeTextLibOutcome;
                typedef std::future<DescribeTextLibOutcome> DescribeTextLibOutcomeCallable;
                typedef std::function<void(const TmsClient*, const Model::DescribeTextLibRequest&, DescribeTextLibOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTextLibAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTextStatResponse> DescribeTextStatOutcome;
                typedef std::future<DescribeTextStatOutcome> DescribeTextStatOutcomeCallable;
                typedef std::function<void(const TmsClient*, const Model::DescribeTextStatRequest&, DescribeTextStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTextStatAsyncHandler;
                typedef Outcome<Core::Error, Model::TextModerationResponse> TextModerationOutcome;
                typedef std::future<TextModerationOutcome> TextModerationOutcomeCallable;
                typedef std::function<void(const TmsClient*, const Model::TextModerationRequest&, TextModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextModerationAsyncHandler;



                /**
                 *举报恶意账号
                 * @param req AccountTipoffAccessRequest
                 * @return AccountTipoffAccessOutcome
                 */
                AccountTipoffAccessOutcome AccountTipoffAccess(const Model::AccountTipoffAccessRequest &request);
                void AccountTipoffAccessAsync(const Model::AccountTipoffAccessRequest& request, const AccountTipoffAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AccountTipoffAccessOutcomeCallable AccountTipoffAccessCallable(const Model::AccountTipoffAccessRequest& request);

                /**
                 *控制台获取用户词库列表
                 * @param req DescribeTextLibRequest
                 * @return DescribeTextLibOutcome
                 */
                DescribeTextLibOutcome DescribeTextLib(const Model::DescribeTextLibRequest &request);
                void DescribeTextLibAsync(const Model::DescribeTextLibRequest& request, const DescribeTextLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTextLibOutcomeCallable DescribeTextLibCallable(const Model::DescribeTextLibRequest& request);

                /**
                 *控制台识别统计
                 * @param req DescribeTextStatRequest
                 * @return DescribeTextStatOutcome
                 */
                DescribeTextStatOutcome DescribeTextStat(const Model::DescribeTextStatRequest &request);
                void DescribeTextStatAsync(const Model::DescribeTextStatRequest& request, const DescribeTextStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTextStatOutcomeCallable DescribeTextStatCallable(const Model::DescribeTextStatRequest& request);

                /**
                 *文本内容检测（Text Moderation）服务使用了深度学习技术，识别可能令人反感、不安全或不适宜的文本内容，同时支持用户配置词库黑白名单，打击自定义识别类型的图片。
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

#endif // !TENCENTCLOUD_TMS_V20200713_TMSCLIENT_H_
