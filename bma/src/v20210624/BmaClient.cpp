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

#include <tencentcloud/bma/v20210624/BmaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bma::V20210624;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-06-24";
    const string ENDPOINT = "bma.tencentcloudapi.com";
}

BmaClient::BmaClient(const Credential &credential, const string &region) :
    BmaClient(credential, region, ClientProfile())
{
}

BmaClient::BmaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BmaClient::CreateBPFakeURLOutcome BmaClient::CreateBPFakeURL(const CreateBPFakeURLRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPFakeURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPFakeURLResponse rsp = CreateBPFakeURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPFakeURLOutcome(rsp);
        else
            return CreateBPFakeURLOutcome(o.GetError());
    }
    else
    {
        return CreateBPFakeURLOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPFakeURLAsync(const CreateBPFakeURLRequest& request, const CreateBPFakeURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBPFakeURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateBPFakeURLOutcomeCallable BmaClient::CreateBPFakeURLCallable(const CreateBPFakeURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBPFakeURLOutcome()>>(
        [this, request]()
        {
            return this->CreateBPFakeURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateBPFalseTicketOutcome BmaClient::CreateBPFalseTicket(const CreateBPFalseTicketRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPFalseTicket");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPFalseTicketResponse rsp = CreateBPFalseTicketResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPFalseTicketOutcome(rsp);
        else
            return CreateBPFalseTicketOutcome(o.GetError());
    }
    else
    {
        return CreateBPFalseTicketOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPFalseTicketAsync(const CreateBPFalseTicketRequest& request, const CreateBPFalseTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBPFalseTicket(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateBPFalseTicketOutcomeCallable BmaClient::CreateBPFalseTicketCallable(const CreateBPFalseTicketRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBPFalseTicketOutcome()>>(
        [this, request]()
        {
            return this->CreateBPFalseTicket(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateBPOfflineAttachmentOutcome BmaClient::CreateBPOfflineAttachment(const CreateBPOfflineAttachmentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPOfflineAttachment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPOfflineAttachmentResponse rsp = CreateBPOfflineAttachmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPOfflineAttachmentOutcome(rsp);
        else
            return CreateBPOfflineAttachmentOutcome(o.GetError());
    }
    else
    {
        return CreateBPOfflineAttachmentOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPOfflineAttachmentAsync(const CreateBPOfflineAttachmentRequest& request, const CreateBPOfflineAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBPOfflineAttachment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateBPOfflineAttachmentOutcomeCallable BmaClient::CreateBPOfflineAttachmentCallable(const CreateBPOfflineAttachmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBPOfflineAttachmentOutcome()>>(
        [this, request]()
        {
            return this->CreateBPOfflineAttachment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateBPOfflineTicketOutcome BmaClient::CreateBPOfflineTicket(const CreateBPOfflineTicketRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPOfflineTicket");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPOfflineTicketResponse rsp = CreateBPOfflineTicketResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPOfflineTicketOutcome(rsp);
        else
            return CreateBPOfflineTicketOutcome(o.GetError());
    }
    else
    {
        return CreateBPOfflineTicketOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPOfflineTicketAsync(const CreateBPOfflineTicketRequest& request, const CreateBPOfflineTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBPOfflineTicket(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateBPOfflineTicketOutcomeCallable BmaClient::CreateBPOfflineTicketCallable(const CreateBPOfflineTicketRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBPOfflineTicketOutcome()>>(
        [this, request]()
        {
            return this->CreateBPOfflineTicket(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateBPProtectURLsOutcome BmaClient::CreateBPProtectURLs(const CreateBPProtectURLsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPProtectURLs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPProtectURLsResponse rsp = CreateBPProtectURLsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPProtectURLsOutcome(rsp);
        else
            return CreateBPProtectURLsOutcome(o.GetError());
    }
    else
    {
        return CreateBPProtectURLsOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPProtectURLsAsync(const CreateBPProtectURLsRequest& request, const CreateBPProtectURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBPProtectURLs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateBPProtectURLsOutcomeCallable BmaClient::CreateBPProtectURLsCallable(const CreateBPProtectURLsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBPProtectURLsOutcome()>>(
        [this, request]()
        {
            return this->CreateBPProtectURLs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateCRBlockOutcome BmaClient::CreateCRBlock(const CreateCRBlockRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRBlockResponse rsp = CreateCRBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRBlockOutcome(rsp);
        else
            return CreateCRBlockOutcome(o.GetError());
    }
    else
    {
        return CreateCRBlockOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRBlockAsync(const CreateCRBlockRequest& request, const CreateCRBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCRBlock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateCRBlockOutcomeCallable BmaClient::CreateCRBlockCallable(const CreateCRBlockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCRBlockOutcome()>>(
        [this, request]()
        {
            return this->CreateCRBlock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateCRCompanyVerifyOutcome BmaClient::CreateCRCompanyVerify(const CreateCRCompanyVerifyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRCompanyVerify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRCompanyVerifyResponse rsp = CreateCRCompanyVerifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRCompanyVerifyOutcome(rsp);
        else
            return CreateCRCompanyVerifyOutcome(o.GetError());
    }
    else
    {
        return CreateCRCompanyVerifyOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRCompanyVerifyAsync(const CreateCRCompanyVerifyRequest& request, const CreateCRCompanyVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCRCompanyVerify(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateCRCompanyVerifyOutcomeCallable BmaClient::CreateCRCompanyVerifyCallable(const CreateCRCompanyVerifyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCRCompanyVerifyOutcome()>>(
        [this, request]()
        {
            return this->CreateCRCompanyVerify(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateCRDesktopCodeOutcome BmaClient::CreateCRDesktopCode(const CreateCRDesktopCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRDesktopCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRDesktopCodeResponse rsp = CreateCRDesktopCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRDesktopCodeOutcome(rsp);
        else
            return CreateCRDesktopCodeOutcome(o.GetError());
    }
    else
    {
        return CreateCRDesktopCodeOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRDesktopCodeAsync(const CreateCRDesktopCodeRequest& request, const CreateCRDesktopCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCRDesktopCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateCRDesktopCodeOutcomeCallable BmaClient::CreateCRDesktopCodeCallable(const CreateCRDesktopCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCRDesktopCodeOutcome()>>(
        [this, request]()
        {
            return this->CreateCRDesktopCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateCRRightOutcome BmaClient::CreateCRRight(const CreateCRRightRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRRight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRRightResponse rsp = CreateCRRightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRRightOutcome(rsp);
        else
            return CreateCRRightOutcome(o.GetError());
    }
    else
    {
        return CreateCRRightOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRRightAsync(const CreateCRRightRequest& request, const CreateCRRightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCRRight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateCRRightOutcomeCallable BmaClient::CreateCRRightCallable(const CreateCRRightRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCRRightOutcome()>>(
        [this, request]()
        {
            return this->CreateCRRight(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateCRRightFileOutcome BmaClient::CreateCRRightFile(const CreateCRRightFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRRightFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRRightFileResponse rsp = CreateCRRightFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRRightFileOutcome(rsp);
        else
            return CreateCRRightFileOutcome(o.GetError());
    }
    else
    {
        return CreateCRRightFileOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRRightFileAsync(const CreateCRRightFileRequest& request, const CreateCRRightFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCRRightFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateCRRightFileOutcomeCallable BmaClient::CreateCRRightFileCallable(const CreateCRRightFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCRRightFileOutcome()>>(
        [this, request]()
        {
            return this->CreateCRRightFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateCRTortOutcome BmaClient::CreateCRTort(const CreateCRTortRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRTort");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRTortResponse rsp = CreateCRTortResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRTortOutcome(rsp);
        else
            return CreateCRTortOutcome(o.GetError());
    }
    else
    {
        return CreateCRTortOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRTortAsync(const CreateCRTortRequest& request, const CreateCRTortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCRTort(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateCRTortOutcomeCallable BmaClient::CreateCRTortCallable(const CreateCRTortRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCRTortOutcome()>>(
        [this, request]()
        {
            return this->CreateCRTort(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateCRUserVerifyOutcome BmaClient::CreateCRUserVerify(const CreateCRUserVerifyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRUserVerify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRUserVerifyResponse rsp = CreateCRUserVerifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRUserVerifyOutcome(rsp);
        else
            return CreateCRUserVerifyOutcome(o.GetError());
    }
    else
    {
        return CreateCRUserVerifyOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRUserVerifyAsync(const CreateCRUserVerifyRequest& request, const CreateCRUserVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCRUserVerify(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateCRUserVerifyOutcomeCallable BmaClient::CreateCRUserVerifyCallable(const CreateCRUserVerifyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCRUserVerifyOutcome()>>(
        [this, request]()
        {
            return this->CreateCRUserVerify(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateCRWorkOutcome BmaClient::CreateCRWork(const CreateCRWorkRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRWork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRWorkResponse rsp = CreateCRWorkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRWorkOutcome(rsp);
        else
            return CreateCRWorkOutcome(o.GetError());
    }
    else
    {
        return CreateCRWorkOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRWorkAsync(const CreateCRWorkRequest& request, const CreateCRWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCRWork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateCRWorkOutcomeCallable BmaClient::CreateCRWorkCallable(const CreateCRWorkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCRWorkOutcome()>>(
        [this, request]()
        {
            return this->CreateCRWork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeBPCompanyInfoOutcome BmaClient::DescribeBPCompanyInfo(const DescribeBPCompanyInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPCompanyInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPCompanyInfoResponse rsp = DescribeBPCompanyInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPCompanyInfoOutcome(rsp);
        else
            return DescribeBPCompanyInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeBPCompanyInfoOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPCompanyInfoAsync(const DescribeBPCompanyInfoRequest& request, const DescribeBPCompanyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBPCompanyInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeBPCompanyInfoOutcomeCallable BmaClient::DescribeBPCompanyInfoCallable(const DescribeBPCompanyInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBPCompanyInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeBPCompanyInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeBPFakeURLsOutcome BmaClient::DescribeBPFakeURLs(const DescribeBPFakeURLsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPFakeURLs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPFakeURLsResponse rsp = DescribeBPFakeURLsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPFakeURLsOutcome(rsp);
        else
            return DescribeBPFakeURLsOutcome(o.GetError());
    }
    else
    {
        return DescribeBPFakeURLsOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPFakeURLsAsync(const DescribeBPFakeURLsRequest& request, const DescribeBPFakeURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBPFakeURLs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeBPFakeURLsOutcomeCallable BmaClient::DescribeBPFakeURLsCallable(const DescribeBPFakeURLsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBPFakeURLsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBPFakeURLs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeBPProtectURLsOutcome BmaClient::DescribeBPProtectURLs(const DescribeBPProtectURLsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPProtectURLs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPProtectURLsResponse rsp = DescribeBPProtectURLsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPProtectURLsOutcome(rsp);
        else
            return DescribeBPProtectURLsOutcome(o.GetError());
    }
    else
    {
        return DescribeBPProtectURLsOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPProtectURLsAsync(const DescribeBPProtectURLsRequest& request, const DescribeBPProtectURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBPProtectURLs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeBPProtectURLsOutcomeCallable BmaClient::DescribeBPProtectURLsCallable(const DescribeBPProtectURLsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBPProtectURLsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBPProtectURLs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeBPReportFakeURLsOutcome BmaClient::DescribeBPReportFakeURLs(const DescribeBPReportFakeURLsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPReportFakeURLs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPReportFakeURLsResponse rsp = DescribeBPReportFakeURLsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPReportFakeURLsOutcome(rsp);
        else
            return DescribeBPReportFakeURLsOutcome(o.GetError());
    }
    else
    {
        return DescribeBPReportFakeURLsOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPReportFakeURLsAsync(const DescribeBPReportFakeURLsRequest& request, const DescribeBPReportFakeURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBPReportFakeURLs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeBPReportFakeURLsOutcomeCallable BmaClient::DescribeBPReportFakeURLsCallable(const DescribeBPReportFakeURLsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBPReportFakeURLsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBPReportFakeURLs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeCRMonitorDetailOutcome BmaClient::DescribeCRMonitorDetail(const DescribeCRMonitorDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCRMonitorDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCRMonitorDetailResponse rsp = DescribeCRMonitorDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCRMonitorDetailOutcome(rsp);
        else
            return DescribeCRMonitorDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCRMonitorDetailOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeCRMonitorDetailAsync(const DescribeCRMonitorDetailRequest& request, const DescribeCRMonitorDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCRMonitorDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeCRMonitorDetailOutcomeCallable BmaClient::DescribeCRMonitorDetailCallable(const DescribeCRMonitorDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCRMonitorDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCRMonitorDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeCRMonitorsOutcome BmaClient::DescribeCRMonitors(const DescribeCRMonitorsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCRMonitors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCRMonitorsResponse rsp = DescribeCRMonitorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCRMonitorsOutcome(rsp);
        else
            return DescribeCRMonitorsOutcome(o.GetError());
    }
    else
    {
        return DescribeCRMonitorsOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeCRMonitorsAsync(const DescribeCRMonitorsRequest& request, const DescribeCRMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCRMonitors(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeCRMonitorsOutcomeCallable BmaClient::DescribeCRMonitorsCallable(const DescribeCRMonitorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCRMonitorsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCRMonitors(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeCRObtainDetailOutcome BmaClient::DescribeCRObtainDetail(const DescribeCRObtainDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCRObtainDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCRObtainDetailResponse rsp = DescribeCRObtainDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCRObtainDetailOutcome(rsp);
        else
            return DescribeCRObtainDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCRObtainDetailOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeCRObtainDetailAsync(const DescribeCRObtainDetailRequest& request, const DescribeCRObtainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCRObtainDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeCRObtainDetailOutcomeCallable BmaClient::DescribeCRObtainDetailCallable(const DescribeCRObtainDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCRObtainDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCRObtainDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeCRWorkInfoOutcome BmaClient::DescribeCRWorkInfo(const DescribeCRWorkInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCRWorkInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCRWorkInfoResponse rsp = DescribeCRWorkInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCRWorkInfoOutcome(rsp);
        else
            return DescribeCRWorkInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCRWorkInfoOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeCRWorkInfoAsync(const DescribeCRWorkInfoRequest& request, const DescribeCRWorkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCRWorkInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeCRWorkInfoOutcomeCallable BmaClient::DescribeCRWorkInfoCallable(const DescribeCRWorkInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCRWorkInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCRWorkInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::ModifyBPOfflineAttachmentOutcome BmaClient::ModifyBPOfflineAttachment(const ModifyBPOfflineAttachmentRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBPOfflineAttachment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBPOfflineAttachmentResponse rsp = ModifyBPOfflineAttachmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBPOfflineAttachmentOutcome(rsp);
        else
            return ModifyBPOfflineAttachmentOutcome(o.GetError());
    }
    else
    {
        return ModifyBPOfflineAttachmentOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyBPOfflineAttachmentAsync(const ModifyBPOfflineAttachmentRequest& request, const ModifyBPOfflineAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBPOfflineAttachment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::ModifyBPOfflineAttachmentOutcomeCallable BmaClient::ModifyBPOfflineAttachmentCallable(const ModifyBPOfflineAttachmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBPOfflineAttachmentOutcome()>>(
        [this, request]()
        {
            return this->ModifyBPOfflineAttachment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::ModifyCRBlockStatusOutcome BmaClient::ModifyCRBlockStatus(const ModifyCRBlockStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCRBlockStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCRBlockStatusResponse rsp = ModifyCRBlockStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCRBlockStatusOutcome(rsp);
        else
            return ModifyCRBlockStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCRBlockStatusOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyCRBlockStatusAsync(const ModifyCRBlockStatusRequest& request, const ModifyCRBlockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCRBlockStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::ModifyCRBlockStatusOutcomeCallable BmaClient::ModifyCRBlockStatusCallable(const ModifyCRBlockStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCRBlockStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyCRBlockStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::ModifyCRMonitorOutcome BmaClient::ModifyCRMonitor(const ModifyCRMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCRMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCRMonitorResponse rsp = ModifyCRMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCRMonitorOutcome(rsp);
        else
            return ModifyCRMonitorOutcome(o.GetError());
    }
    else
    {
        return ModifyCRMonitorOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyCRMonitorAsync(const ModifyCRMonitorRequest& request, const ModifyCRMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCRMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::ModifyCRMonitorOutcomeCallable BmaClient::ModifyCRMonitorCallable(const ModifyCRMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCRMonitorOutcome()>>(
        [this, request]()
        {
            return this->ModifyCRMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::ModifyCRObtainStatusOutcome BmaClient::ModifyCRObtainStatus(const ModifyCRObtainStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCRObtainStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCRObtainStatusResponse rsp = ModifyCRObtainStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCRObtainStatusOutcome(rsp);
        else
            return ModifyCRObtainStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCRObtainStatusOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyCRObtainStatusAsync(const ModifyCRObtainStatusRequest& request, const ModifyCRObtainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCRObtainStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::ModifyCRObtainStatusOutcomeCallable BmaClient::ModifyCRObtainStatusCallable(const ModifyCRObtainStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCRObtainStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyCRObtainStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::ModifyCRRightStatusOutcome BmaClient::ModifyCRRightStatus(const ModifyCRRightStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCRRightStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCRRightStatusResponse rsp = ModifyCRRightStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCRRightStatusOutcome(rsp);
        else
            return ModifyCRRightStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCRRightStatusOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyCRRightStatusAsync(const ModifyCRRightStatusRequest& request, const ModifyCRRightStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCRRightStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::ModifyCRRightStatusOutcomeCallable BmaClient::ModifyCRRightStatusCallable(const ModifyCRRightStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCRRightStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyCRRightStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::ModifyCRWhiteListOutcome BmaClient::ModifyCRWhiteList(const ModifyCRWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCRWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCRWhiteListResponse rsp = ModifyCRWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCRWhiteListOutcome(rsp);
        else
            return ModifyCRWhiteListOutcome(o.GetError());
    }
    else
    {
        return ModifyCRWhiteListOutcome(outcome.GetError());
    }
}

void BmaClient::ModifyCRWhiteListAsync(const ModifyCRWhiteListRequest& request, const ModifyCRWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCRWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::ModifyCRWhiteListOutcomeCallable BmaClient::ModifyCRWhiteListCallable(const ModifyCRWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCRWhiteListOutcome()>>(
        [this, request]()
        {
            return this->ModifyCRWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::UpdateCRWorkOutcome BmaClient::UpdateCRWork(const UpdateCRWorkRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCRWork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCRWorkResponse rsp = UpdateCRWorkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCRWorkOutcome(rsp);
        else
            return UpdateCRWorkOutcome(o.GetError());
    }
    else
    {
        return UpdateCRWorkOutcome(outcome.GetError());
    }
}

void BmaClient::UpdateCRWorkAsync(const UpdateCRWorkRequest& request, const UpdateCRWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCRWork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::UpdateCRWorkOutcomeCallable BmaClient::UpdateCRWorkCallable(const UpdateCRWorkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCRWorkOutcome()>>(
        [this, request]()
        {
            return this->UpdateCRWork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

