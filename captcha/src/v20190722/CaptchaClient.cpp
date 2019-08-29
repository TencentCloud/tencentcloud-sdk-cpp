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

#include <tencentcloud/captcha/v20190722/CaptchaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Captcha::V20190722;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-22";
    const string ENDPOINT = "captcha.tencentcloudapi.com";
}

CaptchaClient::CaptchaClient(const Credential &credential, const string &region) :
    CaptchaClient(credential, region, ClientProfile())
{
}

CaptchaClient::CaptchaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CaptchaClient::DescribeCaptchaResultOutcome CaptchaClient::DescribeCaptchaResult(const DescribeCaptchaResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaResultResponse rsp = DescribeCaptchaResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaResultOutcome(rsp);
        else
            return DescribeCaptchaResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaResultOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaResultAsync(const DescribeCaptchaResultRequest& request, const DescribeCaptchaResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaptchaResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::DescribeCaptchaResultOutcomeCallable CaptchaClient::DescribeCaptchaResultCallable(const DescribeCaptchaResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaptchaResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaptchaResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

