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

#ifndef TENCENTCLOUD_ICR_V20211014_ICRCLIENT_H_
#define TENCENTCLOUD_ICR_V20211014_ICRCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRequest.h>
#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersResponse.h>


namespace TencentCloud
{
    namespace Icr
    {
        namespace V20211014
        {
            class IcrClient : public AbstractClient
            {
            public:
                IcrClient(const Credential &credential, const std::string &region);
                IcrClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::GetIndustryV1HomeMembersResponse> GetIndustryV1HomeMembersOutcome;
                typedef std::future<GetIndustryV1HomeMembersOutcome> GetIndustryV1HomeMembersOutcomeCallable;
                typedef std::function<void(const IcrClient*, const Model::GetIndustryV1HomeMembersRequest&, GetIndustryV1HomeMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetIndustryV1HomeMembersAsyncHandler;



                /**
                 *获取成员列表接口
                 * @param req GetIndustryV1HomeMembersRequest
                 * @return GetIndustryV1HomeMembersOutcome
                 */
                GetIndustryV1HomeMembersOutcome GetIndustryV1HomeMembers(const Model::GetIndustryV1HomeMembersRequest &request);
                void GetIndustryV1HomeMembersAsync(const Model::GetIndustryV1HomeMembersRequest& request, const GetIndustryV1HomeMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetIndustryV1HomeMembersOutcomeCallable GetIndustryV1HomeMembersCallable(const Model::GetIndustryV1HomeMembersRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ICR_V20211014_ICRCLIENT_H_
