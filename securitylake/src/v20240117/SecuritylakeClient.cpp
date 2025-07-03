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

#include <tencentcloud/securitylake/v20240117/SecuritylakeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Securitylake::V20240117;
using namespace TencentCloud::Securitylake::V20240117::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-01-17";
    const string ENDPOINT = "securitylake.tencentcloudapi.com";
}

SecuritylakeClient::SecuritylakeClient(const Credential &credential, const string &region) :
    SecuritylakeClient(credential, region, ClientProfile())
{
}

SecuritylakeClient::SecuritylakeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SecuritylakeClient::DescribeSecurityAlarmTableListOutcome SecuritylakeClient::DescribeSecurityAlarmTableList(const DescribeSecurityAlarmTableListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityAlarmTableList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityAlarmTableListResponse rsp = DescribeSecurityAlarmTableListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityAlarmTableListOutcome(rsp);
        else
            return DescribeSecurityAlarmTableListOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityAlarmTableListOutcome(outcome.GetError());
    }
}

void SecuritylakeClient::DescribeSecurityAlarmTableListAsync(const DescribeSecurityAlarmTableListRequest& request, const DescribeSecurityAlarmTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityAlarmTableList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SecuritylakeClient::DescribeSecurityAlarmTableListOutcomeCallable SecuritylakeClient::DescribeSecurityAlarmTableListCallable(const DescribeSecurityAlarmTableListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityAlarmTableListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityAlarmTableList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

