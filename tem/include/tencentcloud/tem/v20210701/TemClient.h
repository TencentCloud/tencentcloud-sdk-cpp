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

#ifndef TENCENTCLOUD_TEM_V20210701_TEMCLIENT_H_
#define TENCENTCLOUD_TEM_V20210701_TEMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tem/v20210701/model/DescribeDeployApplicationDetailRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeDeployApplicationDetailResponse.h>
#include <tencentcloud/tem/v20210701/model/ResumeDeployApplicationRequest.h>
#include <tencentcloud/tem/v20210701/model/ResumeDeployApplicationResponse.h>
#include <tencentcloud/tem/v20210701/model/RevertDeployApplicationRequest.h>
#include <tencentcloud/tem/v20210701/model/RevertDeployApplicationResponse.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            class TemClient : public AbstractClient
            {
            public:
                TemClient(const Credential &credential, const std::string &region);
                TemClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::DescribeDeployApplicationDetailResponse> DescribeDeployApplicationDetailOutcome;
                typedef std::future<DescribeDeployApplicationDetailOutcome> DescribeDeployApplicationDetailOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeDeployApplicationDetailRequest&, DescribeDeployApplicationDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeployApplicationDetailAsyncHandler;
                typedef Outcome<Error, Model::ResumeDeployApplicationResponse> ResumeDeployApplicationOutcome;
                typedef std::future<ResumeDeployApplicationOutcome> ResumeDeployApplicationOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ResumeDeployApplicationRequest&, ResumeDeployApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeDeployApplicationAsyncHandler;
                typedef Outcome<Error, Model::RevertDeployApplicationResponse> RevertDeployApplicationOutcome;
                typedef std::future<RevertDeployApplicationOutcome> RevertDeployApplicationOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::RevertDeployApplicationRequest&, RevertDeployApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevertDeployApplicationAsyncHandler;



                /**
                 *获取分批发布详情
                 * @param req DescribeDeployApplicationDetailRequest
                 * @return DescribeDeployApplicationDetailOutcome
                 */
                DescribeDeployApplicationDetailOutcome DescribeDeployApplicationDetail(const Model::DescribeDeployApplicationDetailRequest &request);
                void DescribeDeployApplicationDetailAsync(const Model::DescribeDeployApplicationDetailRequest& request, const DescribeDeployApplicationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeployApplicationDetailOutcomeCallable DescribeDeployApplicationDetailCallable(const Model::DescribeDeployApplicationDetailRequest& request);

                /**
                 *开始下一批次发布
                 * @param req ResumeDeployApplicationRequest
                 * @return ResumeDeployApplicationOutcome
                 */
                ResumeDeployApplicationOutcome ResumeDeployApplication(const Model::ResumeDeployApplicationRequest &request);
                void ResumeDeployApplicationAsync(const Model::ResumeDeployApplicationRequest& request, const ResumeDeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeDeployApplicationOutcomeCallable ResumeDeployApplicationCallable(const Model::ResumeDeployApplicationRequest& request);

                /**
                 *回滚分批发布
                 * @param req RevertDeployApplicationRequest
                 * @return RevertDeployApplicationOutcome
                 */
                RevertDeployApplicationOutcome RevertDeployApplication(const Model::RevertDeployApplicationRequest &request);
                void RevertDeployApplicationAsync(const Model::RevertDeployApplicationRequest& request, const RevertDeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevertDeployApplicationOutcomeCallable RevertDeployApplicationCallable(const Model::RevertDeployApplicationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_TEMCLIENT_H_
