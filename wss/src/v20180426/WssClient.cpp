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

#include <tencentcloud/wss/v20180426/WssClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Wss::V20180426;
using namespace TencentCloud::Wss::V20180426::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-26";
    const string ENDPOINT = "wss.tencentcloudapi.com";
}

WssClient::WssClient(const Credential &credential, const string &region) :
    WssClient(credential, region, ClientProfile())
{
}

WssClient::WssClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WssClient::DeleteCertOutcome WssClient::DeleteCert(const DeleteCertRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCertResponse rsp = DeleteCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCertOutcome(rsp);
        else
            return DeleteCertOutcome(o.GetError());
    }
    else
    {
        return DeleteCertOutcome(outcome.GetError());
    }
}

void WssClient::DeleteCertAsync(const DeleteCertRequest& request, const DeleteCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WssClient::DeleteCertOutcomeCallable WssClient::DeleteCertCallable(const DeleteCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCertOutcome()>>(
        [this, request]()
        {
            return this->DeleteCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WssClient::DescribeCertListOutcome WssClient::DescribeCertList(const DescribeCertListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertListResponse rsp = DescribeCertListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertListOutcome(rsp);
        else
            return DescribeCertListOutcome(o.GetError());
    }
    else
    {
        return DescribeCertListOutcome(outcome.GetError());
    }
}

void WssClient::DescribeCertListAsync(const DescribeCertListRequest& request, const DescribeCertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCertList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WssClient::DescribeCertListOutcomeCallable WssClient::DescribeCertListCallable(const DescribeCertListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCertListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCertList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WssClient::UploadCertOutcome WssClient::UploadCert(const UploadCertRequest &request)
{
    auto outcome = MakeRequest(request, "UploadCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadCertResponse rsp = UploadCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadCertOutcome(rsp);
        else
            return UploadCertOutcome(o.GetError());
    }
    else
    {
        return UploadCertOutcome(outcome.GetError());
    }
}

void WssClient::UploadCertAsync(const UploadCertRequest& request, const UploadCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WssClient::UploadCertOutcomeCallable WssClient::UploadCertCallable(const UploadCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadCertOutcome()>>(
        [this, request]()
        {
            return this->UploadCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

