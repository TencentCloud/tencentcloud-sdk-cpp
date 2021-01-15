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

#include <tencentcloud/sms/v20210111/SmsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Sms::V20210111;
using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-01-11";
    const string ENDPOINT = "sms.tencentcloudapi.com";
}

SmsClient::SmsClient(const Credential &credential, const string &region) :
    SmsClient(credential, region, ClientProfile())
{
}

SmsClient::SmsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SmsClient::DescribeSmsTemplateListOutcome SmsClient::DescribeSmsTemplateList(const DescribeSmsTemplateListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmsTemplateList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmsTemplateListResponse rsp = DescribeSmsTemplateListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmsTemplateListOutcome(rsp);
        else
            return DescribeSmsTemplateListOutcome(o.GetError());
    }
    else
    {
        return DescribeSmsTemplateListOutcome(outcome.GetError());
    }
}

void SmsClient::DescribeSmsTemplateListAsync(const DescribeSmsTemplateListRequest& request, const DescribeSmsTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSmsTemplateList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::DescribeSmsTemplateListOutcomeCallable SmsClient::DescribeSmsTemplateListCallable(const DescribeSmsTemplateListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSmsTemplateListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSmsTemplateList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

