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

#ifndef TENCENTCLOUD_SECURITYLAKE_V20240117_SECURITYLAKECLIENT_H_
#define TENCENTCLOUD_SECURITYLAKE_V20240117_SECURITYLAKECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/securitylake/v20240117/model/DescribeSecurityAlarmTableListRequest.h>
#include <tencentcloud/securitylake/v20240117/model/DescribeSecurityAlarmTableListResponse.h>


namespace TencentCloud
{
    namespace Securitylake
    {
        namespace V20240117
        {
            class SecuritylakeClient : public AbstractClient
            {
            public:
                SecuritylakeClient(const Credential &credential, const std::string &region);
                SecuritylakeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeSecurityAlarmTableListResponse> DescribeSecurityAlarmTableListOutcome;
                typedef std::future<DescribeSecurityAlarmTableListOutcome> DescribeSecurityAlarmTableListOutcomeCallable;
                typedef std::function<void(const SecuritylakeClient*, const Model::DescribeSecurityAlarmTableListRequest&, DescribeSecurityAlarmTableListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityAlarmTableListAsyncHandler;



                /**
                 *查询告警列表
                 * @param req DescribeSecurityAlarmTableListRequest
                 * @return DescribeSecurityAlarmTableListOutcome
                 */
                DescribeSecurityAlarmTableListOutcome DescribeSecurityAlarmTableList(const Model::DescribeSecurityAlarmTableListRequest &request);
                void DescribeSecurityAlarmTableListAsync(const Model::DescribeSecurityAlarmTableListRequest& request, const DescribeSecurityAlarmTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityAlarmTableListOutcomeCallable DescribeSecurityAlarmTableListCallable(const Model::DescribeSecurityAlarmTableListRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SECURITYLAKE_V20240117_SECURITYLAKECLIENT_H_
