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

#include <tencentcloud/essbasic/v20210526/EssbasicClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Essbasic::V20210526;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-26";
    const string ENDPOINT = "essbasic.tencentcloudapi.com";
}

EssbasicClient::EssbasicClient(const Credential &credential, const string &region) :
    EssbasicClient(credential, region, ClientProfile())
{
}

EssbasicClient::EssbasicClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EssbasicClient::ChannelCreateFlowByFilesOutcome EssbasicClient::ChannelCreateFlowByFiles(const ChannelCreateFlowByFilesRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateFlowByFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateFlowByFilesResponse rsp = ChannelCreateFlowByFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateFlowByFilesOutcome(rsp);
        else
            return ChannelCreateFlowByFilesOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateFlowByFilesOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateFlowByFilesAsync(const ChannelCreateFlowByFilesRequest& request, const ChannelCreateFlowByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateFlowByFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateFlowByFilesOutcomeCallable EssbasicClient::ChannelCreateFlowByFilesCallable(const ChannelCreateFlowByFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateFlowByFilesOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateFlowByFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateConsoleLoginUrlOutcome EssbasicClient::CreateConsoleLoginUrl(const CreateConsoleLoginUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsoleLoginUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsoleLoginUrlResponse rsp = CreateConsoleLoginUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsoleLoginUrlOutcome(rsp);
        else
            return CreateConsoleLoginUrlOutcome(o.GetError());
    }
    else
    {
        return CreateConsoleLoginUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateConsoleLoginUrlAsync(const CreateConsoleLoginUrlRequest& request, const CreateConsoleLoginUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConsoleLoginUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateConsoleLoginUrlOutcomeCallable EssbasicClient::CreateConsoleLoginUrlCallable(const CreateConsoleLoginUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConsoleLoginUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateConsoleLoginUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateFlowsByTemplatesOutcome EssbasicClient::CreateFlowsByTemplates(const CreateFlowsByTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowsByTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowsByTemplatesResponse rsp = CreateFlowsByTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowsByTemplatesOutcome(rsp);
        else
            return CreateFlowsByTemplatesOutcome(o.GetError());
    }
    else
    {
        return CreateFlowsByTemplatesOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateFlowsByTemplatesAsync(const CreateFlowsByTemplatesRequest& request, const CreateFlowsByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowsByTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateFlowsByTemplatesOutcomeCallable EssbasicClient::CreateFlowsByTemplatesCallable(const CreateFlowsByTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowsByTemplatesOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowsByTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateSealByImageOutcome EssbasicClient::CreateSealByImage(const CreateSealByImageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSealByImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSealByImageResponse rsp = CreateSealByImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSealByImageOutcome(rsp);
        else
            return CreateSealByImageOutcome(o.GetError());
    }
    else
    {
        return CreateSealByImageOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateSealByImageAsync(const CreateSealByImageRequest& request, const CreateSealByImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSealByImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateSealByImageOutcomeCallable EssbasicClient::CreateSealByImageCallable(const CreateSealByImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSealByImageOutcome()>>(
        [this, request]()
        {
            return this->CreateSealByImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateSignUrlsOutcome EssbasicClient::CreateSignUrls(const CreateSignUrlsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSignUrls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSignUrlsResponse rsp = CreateSignUrlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSignUrlsOutcome(rsp);
        else
            return CreateSignUrlsOutcome(o.GetError());
    }
    else
    {
        return CreateSignUrlsOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateSignUrlsAsync(const CreateSignUrlsRequest& request, const CreateSignUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSignUrls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateSignUrlsOutcomeCallable EssbasicClient::CreateSignUrlsCallable(const CreateSignUrlsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSignUrlsOutcome()>>(
        [this, request]()
        {
            return this->CreateSignUrls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::DescribeFlowDetailInfoOutcome EssbasicClient::DescribeFlowDetailInfo(const DescribeFlowDetailInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowDetailInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowDetailInfoResponse rsp = DescribeFlowDetailInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowDetailInfoOutcome(rsp);
        else
            return DescribeFlowDetailInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowDetailInfoOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeFlowDetailInfoAsync(const DescribeFlowDetailInfoRequest& request, const DescribeFlowDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowDetailInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeFlowDetailInfoOutcomeCallable EssbasicClient::DescribeFlowDetailInfoCallable(const DescribeFlowDetailInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowDetailInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowDetailInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::DescribeResourceUrlsByFlowsOutcome EssbasicClient::DescribeResourceUrlsByFlows(const DescribeResourceUrlsByFlowsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceUrlsByFlows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceUrlsByFlowsResponse rsp = DescribeResourceUrlsByFlowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceUrlsByFlowsOutcome(rsp);
        else
            return DescribeResourceUrlsByFlowsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceUrlsByFlowsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeResourceUrlsByFlowsAsync(const DescribeResourceUrlsByFlowsRequest& request, const DescribeResourceUrlsByFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceUrlsByFlows(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeResourceUrlsByFlowsOutcomeCallable EssbasicClient::DescribeResourceUrlsByFlowsCallable(const DescribeResourceUrlsByFlowsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceUrlsByFlowsOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceUrlsByFlows(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::DescribeTemplatesOutcome EssbasicClient::DescribeTemplates(const DescribeTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplatesResponse rsp = DescribeTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplatesOutcome(rsp);
        else
            return DescribeTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplatesOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeTemplatesAsync(const DescribeTemplatesRequest& request, const DescribeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeTemplatesOutcomeCallable EssbasicClient::DescribeTemplatesCallable(const DescribeTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::DescribeUsageOutcome EssbasicClient::DescribeUsage(const DescribeUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsageResponse rsp = DescribeUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsageOutcome(rsp);
        else
            return DescribeUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeUsageOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeUsageAsync(const DescribeUsageRequest& request, const DescribeUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeUsageOutcomeCallable EssbasicClient::DescribeUsageCallable(const DescribeUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::GetDownloadFlowUrlOutcome EssbasicClient::GetDownloadFlowUrl(const GetDownloadFlowUrlRequest &request)
{
    auto outcome = MakeRequest(request, "GetDownloadFlowUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDownloadFlowUrlResponse rsp = GetDownloadFlowUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDownloadFlowUrlOutcome(rsp);
        else
            return GetDownloadFlowUrlOutcome(o.GetError());
    }
    else
    {
        return GetDownloadFlowUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::GetDownloadFlowUrlAsync(const GetDownloadFlowUrlRequest& request, const GetDownloadFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDownloadFlowUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::GetDownloadFlowUrlOutcomeCallable EssbasicClient::GetDownloadFlowUrlCallable(const GetDownloadFlowUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDownloadFlowUrlOutcome()>>(
        [this, request]()
        {
            return this->GetDownloadFlowUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::OperateChannelTemplateOutcome EssbasicClient::OperateChannelTemplate(const OperateChannelTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "OperateChannelTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OperateChannelTemplateResponse rsp = OperateChannelTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OperateChannelTemplateOutcome(rsp);
        else
            return OperateChannelTemplateOutcome(o.GetError());
    }
    else
    {
        return OperateChannelTemplateOutcome(outcome.GetError());
    }
}

void EssbasicClient::OperateChannelTemplateAsync(const OperateChannelTemplateRequest& request, const OperateChannelTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OperateChannelTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::OperateChannelTemplateOutcomeCallable EssbasicClient::OperateChannelTemplateCallable(const OperateChannelTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OperateChannelTemplateOutcome()>>(
        [this, request]()
        {
            return this->OperateChannelTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::PrepareFlowsOutcome EssbasicClient::PrepareFlows(const PrepareFlowsRequest &request)
{
    auto outcome = MakeRequest(request, "PrepareFlows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PrepareFlowsResponse rsp = PrepareFlowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PrepareFlowsOutcome(rsp);
        else
            return PrepareFlowsOutcome(o.GetError());
    }
    else
    {
        return PrepareFlowsOutcome(outcome.GetError());
    }
}

void EssbasicClient::PrepareFlowsAsync(const PrepareFlowsRequest& request, const PrepareFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PrepareFlows(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::PrepareFlowsOutcomeCallable EssbasicClient::PrepareFlowsCallable(const PrepareFlowsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PrepareFlowsOutcome()>>(
        [this, request]()
        {
            return this->PrepareFlows(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::SyncProxyOrganizationOutcome EssbasicClient::SyncProxyOrganization(const SyncProxyOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "SyncProxyOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncProxyOrganizationResponse rsp = SyncProxyOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncProxyOrganizationOutcome(rsp);
        else
            return SyncProxyOrganizationOutcome(o.GetError());
    }
    else
    {
        return SyncProxyOrganizationOutcome(outcome.GetError());
    }
}

void EssbasicClient::SyncProxyOrganizationAsync(const SyncProxyOrganizationRequest& request, const SyncProxyOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncProxyOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::SyncProxyOrganizationOutcomeCallable EssbasicClient::SyncProxyOrganizationCallable(const SyncProxyOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncProxyOrganizationOutcome()>>(
        [this, request]()
        {
            return this->SyncProxyOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::SyncProxyOrganizationOperatorsOutcome EssbasicClient::SyncProxyOrganizationOperators(const SyncProxyOrganizationOperatorsRequest &request)
{
    auto outcome = MakeRequest(request, "SyncProxyOrganizationOperators");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncProxyOrganizationOperatorsResponse rsp = SyncProxyOrganizationOperatorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncProxyOrganizationOperatorsOutcome(rsp);
        else
            return SyncProxyOrganizationOperatorsOutcome(o.GetError());
    }
    else
    {
        return SyncProxyOrganizationOperatorsOutcome(outcome.GetError());
    }
}

void EssbasicClient::SyncProxyOrganizationOperatorsAsync(const SyncProxyOrganizationOperatorsRequest& request, const SyncProxyOrganizationOperatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncProxyOrganizationOperators(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::SyncProxyOrganizationOperatorsOutcomeCallable EssbasicClient::SyncProxyOrganizationOperatorsCallable(const SyncProxyOrganizationOperatorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncProxyOrganizationOperatorsOutcome()>>(
        [this, request]()
        {
            return this->SyncProxyOrganizationOperators(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::UploadFilesOutcome EssbasicClient::UploadFiles(const UploadFilesRequest &request)
{
    auto outcome = MakeRequest(request, "UploadFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadFilesResponse rsp = UploadFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadFilesOutcome(rsp);
        else
            return UploadFilesOutcome(o.GetError());
    }
    else
    {
        return UploadFilesOutcome(outcome.GetError());
    }
}

void EssbasicClient::UploadFilesAsync(const UploadFilesRequest& request, const UploadFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::UploadFilesOutcomeCallable EssbasicClient::UploadFilesCallable(const UploadFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadFilesOutcome()>>(
        [this, request]()
        {
            return this->UploadFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

