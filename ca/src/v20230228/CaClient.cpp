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
    using Req = const CreateVerifyReportRequest&;
    using Resp = CreateVerifyReportResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVerifyReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaClient::CreateVerifyReportOutcomeCallable CaClient::CreateVerifyReportCallable(const CreateVerifyReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVerifyReportOutcome>>();
    CreateVerifyReportAsync(
    request,
    [prom](
        const CaClient*,
        const CreateVerifyReportRequest&,
        CreateVerifyReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeVerifyReportRequest&;
    using Resp = DescribeVerifyReportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVerifyReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaClient::DescribeVerifyReportOutcomeCallable CaClient::DescribeVerifyReportCallable(const DescribeVerifyReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVerifyReportOutcome>>();
    DescribeVerifyReportAsync(
    request,
    [prom](
        const CaClient*,
        const DescribeVerifyReportRequest&,
        DescribeVerifyReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UploadFileRequest&;
    using Resp = UploadFileResponse;

    DoRequestAsync<Req, Resp>(
        "UploadFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaClient::UploadFileOutcomeCallable CaClient::UploadFileCallable(const UploadFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadFileOutcome>>();
    UploadFileAsync(
    request,
    [prom](
        const CaClient*,
        const UploadFileRequest&,
        UploadFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

