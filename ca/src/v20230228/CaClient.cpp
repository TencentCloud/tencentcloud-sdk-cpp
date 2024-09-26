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

#include <tencentcloud/ca/v20230228/CaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ca::V20230228;
using namespace TencentCloud::Ca::V20230228::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-02-28";
    const string ENDPOINT = "ca.tencentcloudapi.com";
}

CaClient::CaClient(const Credential &credential, const string &region) :
    CaClient(credential, region, ClientProfile())
{
}

CaClient::CaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CaClient::CreateVerifyReportOutcome CaClient::CreateVerifyReport(const CreateVerifyReportRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVerifyReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVerifyReportResponse rsp = CreateVerifyReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVerifyReportOutcome(rsp);
        else
            return CreateVerifyReportOutcome(o.GetError());
    }
    else
    {
        return CreateVerifyReportOutcome(outcome.GetError());
    }
}

void CaClient::CreateVerifyReportAsync(const CreateVerifyReportRequest& request, const CreateVerifyReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVerifyReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaClient::CreateVerifyReportOutcomeCallable CaClient::CreateVerifyReportCallable(const CreateVerifyReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVerifyReportOutcome()>>(
        [this, request]()
        {
            return this->CreateVerifyReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CaClient::DescribeVerifyReportOutcome CaClient::DescribeVerifyReport(const DescribeVerifyReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVerifyReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVerifyReportResponse rsp = DescribeVerifyReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVerifyReportOutcome(rsp);
        else
            return DescribeVerifyReportOutcome(o.GetError());
    }
    else
    {
        return DescribeVerifyReportOutcome(outcome.GetError());
    }
}

void CaClient::DescribeVerifyReportAsync(const DescribeVerifyReportRequest& request, const DescribeVerifyReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVerifyReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaClient::DescribeVerifyReportOutcomeCallable CaClient::DescribeVerifyReportCallable(const DescribeVerifyReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVerifyReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeVerifyReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CaClient::UploadFileOutcome CaClient::UploadFile(const UploadFileRequest &request)
{
    auto outcome = MakeRequest(request, "UploadFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadFileResponse rsp = UploadFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadFileOutcome(rsp);
        else
            return UploadFileOutcome(o.GetError());
    }
    else
    {
        return UploadFileOutcome(outcome.GetError());
    }
}

void CaClient::UploadFileAsync(const UploadFileRequest& request, const UploadFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaClient::UploadFileOutcomeCallable CaClient::UploadFileCallable(const UploadFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadFileOutcome()>>(
        [this, request]()
        {
            return this->UploadFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

