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


EssbasicClient::ArchiveDynamicFlowOutcome EssbasicClient::ArchiveDynamicFlow(const ArchiveDynamicFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ArchiveDynamicFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ArchiveDynamicFlowResponse rsp = ArchiveDynamicFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ArchiveDynamicFlowOutcome(rsp);
        else
            return ArchiveDynamicFlowOutcome(o.GetError());
    }
    else
    {
        return ArchiveDynamicFlowOutcome(outcome.GetError());
    }
}

void EssbasicClient::ArchiveDynamicFlowAsync(const ArchiveDynamicFlowRequest& request, const ArchiveDynamicFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ArchiveDynamicFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ArchiveDynamicFlowOutcomeCallable EssbasicClient::ArchiveDynamicFlowCallable(const ArchiveDynamicFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ArchiveDynamicFlowOutcome()>>(
        [this, request]()
        {
            return this->ArchiveDynamicFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelBatchCancelFlowsOutcome EssbasicClient::ChannelBatchCancelFlows(const ChannelBatchCancelFlowsRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelBatchCancelFlows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelBatchCancelFlowsResponse rsp = ChannelBatchCancelFlowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelBatchCancelFlowsOutcome(rsp);
        else
            return ChannelBatchCancelFlowsOutcome(o.GetError());
    }
    else
    {
        return ChannelBatchCancelFlowsOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelBatchCancelFlowsAsync(const ChannelBatchCancelFlowsRequest& request, const ChannelBatchCancelFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelBatchCancelFlows(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelBatchCancelFlowsOutcomeCallable EssbasicClient::ChannelBatchCancelFlowsCallable(const ChannelBatchCancelFlowsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelBatchCancelFlowsOutcome()>>(
        [this, request]()
        {
            return this->ChannelBatchCancelFlows(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCancelFlowOutcome EssbasicClient::ChannelCancelFlow(const ChannelCancelFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCancelFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCancelFlowResponse rsp = ChannelCancelFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCancelFlowOutcome(rsp);
        else
            return ChannelCancelFlowOutcome(o.GetError());
    }
    else
    {
        return ChannelCancelFlowOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCancelFlowAsync(const ChannelCancelFlowRequest& request, const ChannelCancelFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCancelFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCancelFlowOutcomeCallable EssbasicClient::ChannelCancelFlowCallable(const ChannelCancelFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCancelFlowOutcome()>>(
        [this, request]()
        {
            return this->ChannelCancelFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCancelMultiFlowSignQRCodeOutcome EssbasicClient::ChannelCancelMultiFlowSignQRCode(const ChannelCancelMultiFlowSignQRCodeRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCancelMultiFlowSignQRCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCancelMultiFlowSignQRCodeResponse rsp = ChannelCancelMultiFlowSignQRCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCancelMultiFlowSignQRCodeOutcome(rsp);
        else
            return ChannelCancelMultiFlowSignQRCodeOutcome(o.GetError());
    }
    else
    {
        return ChannelCancelMultiFlowSignQRCodeOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCancelMultiFlowSignQRCodeAsync(const ChannelCancelMultiFlowSignQRCodeRequest& request, const ChannelCancelMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCancelMultiFlowSignQRCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCancelMultiFlowSignQRCodeOutcomeCallable EssbasicClient::ChannelCancelMultiFlowSignQRCodeCallable(const ChannelCancelMultiFlowSignQRCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCancelMultiFlowSignQRCodeOutcome()>>(
        [this, request]()
        {
            return this->ChannelCancelMultiFlowSignQRCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCancelUserAutoSignEnableUrlOutcome EssbasicClient::ChannelCancelUserAutoSignEnableUrl(const ChannelCancelUserAutoSignEnableUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCancelUserAutoSignEnableUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCancelUserAutoSignEnableUrlResponse rsp = ChannelCancelUserAutoSignEnableUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCancelUserAutoSignEnableUrlOutcome(rsp);
        else
            return ChannelCancelUserAutoSignEnableUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCancelUserAutoSignEnableUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCancelUserAutoSignEnableUrlAsync(const ChannelCancelUserAutoSignEnableUrlRequest& request, const ChannelCancelUserAutoSignEnableUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCancelUserAutoSignEnableUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCancelUserAutoSignEnableUrlOutcomeCallable EssbasicClient::ChannelCancelUserAutoSignEnableUrlCallable(const ChannelCancelUserAutoSignEnableUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCancelUserAutoSignEnableUrlOutcome()>>(
        [this, request]()
        {
            return this->ChannelCancelUserAutoSignEnableUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateBatchCancelFlowUrlOutcome EssbasicClient::ChannelCreateBatchCancelFlowUrl(const ChannelCreateBatchCancelFlowUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateBatchCancelFlowUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateBatchCancelFlowUrlResponse rsp = ChannelCreateBatchCancelFlowUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateBatchCancelFlowUrlOutcome(rsp);
        else
            return ChannelCreateBatchCancelFlowUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateBatchCancelFlowUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateBatchCancelFlowUrlAsync(const ChannelCreateBatchCancelFlowUrlRequest& request, const ChannelCreateBatchCancelFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateBatchCancelFlowUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateBatchCancelFlowUrlOutcomeCallable EssbasicClient::ChannelCreateBatchCancelFlowUrlCallable(const ChannelCreateBatchCancelFlowUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateBatchCancelFlowUrlOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateBatchCancelFlowUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateBatchQuickSignUrlOutcome EssbasicClient::ChannelCreateBatchQuickSignUrl(const ChannelCreateBatchQuickSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateBatchQuickSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateBatchQuickSignUrlResponse rsp = ChannelCreateBatchQuickSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateBatchQuickSignUrlOutcome(rsp);
        else
            return ChannelCreateBatchQuickSignUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateBatchQuickSignUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateBatchQuickSignUrlAsync(const ChannelCreateBatchQuickSignUrlRequest& request, const ChannelCreateBatchQuickSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateBatchQuickSignUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateBatchQuickSignUrlOutcomeCallable EssbasicClient::ChannelCreateBatchQuickSignUrlCallable(const ChannelCreateBatchQuickSignUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateBatchQuickSignUrlOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateBatchQuickSignUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateBatchSignUrlOutcome EssbasicClient::ChannelCreateBatchSignUrl(const ChannelCreateBatchSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateBatchSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateBatchSignUrlResponse rsp = ChannelCreateBatchSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateBatchSignUrlOutcome(rsp);
        else
            return ChannelCreateBatchSignUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateBatchSignUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateBatchSignUrlAsync(const ChannelCreateBatchSignUrlRequest& request, const ChannelCreateBatchSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateBatchSignUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateBatchSignUrlOutcomeCallable EssbasicClient::ChannelCreateBatchSignUrlCallable(const ChannelCreateBatchSignUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateBatchSignUrlOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateBatchSignUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateBoundFlowsOutcome EssbasicClient::ChannelCreateBoundFlows(const ChannelCreateBoundFlowsRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateBoundFlows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateBoundFlowsResponse rsp = ChannelCreateBoundFlowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateBoundFlowsOutcome(rsp);
        else
            return ChannelCreateBoundFlowsOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateBoundFlowsOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateBoundFlowsAsync(const ChannelCreateBoundFlowsRequest& request, const ChannelCreateBoundFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateBoundFlows(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateBoundFlowsOutcomeCallable EssbasicClient::ChannelCreateBoundFlowsCallable(const ChannelCreateBoundFlowsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateBoundFlowsOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateBoundFlows(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateConvertTaskApiOutcome EssbasicClient::ChannelCreateConvertTaskApi(const ChannelCreateConvertTaskApiRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateConvertTaskApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateConvertTaskApiResponse rsp = ChannelCreateConvertTaskApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateConvertTaskApiOutcome(rsp);
        else
            return ChannelCreateConvertTaskApiOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateConvertTaskApiOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateConvertTaskApiAsync(const ChannelCreateConvertTaskApiRequest& request, const ChannelCreateConvertTaskApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateConvertTaskApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateConvertTaskApiOutcomeCallable EssbasicClient::ChannelCreateConvertTaskApiCallable(const ChannelCreateConvertTaskApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateConvertTaskApiOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateConvertTaskApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateDynamicFlowApproverOutcome EssbasicClient::ChannelCreateDynamicFlowApprover(const ChannelCreateDynamicFlowApproverRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateDynamicFlowApprover");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateDynamicFlowApproverResponse rsp = ChannelCreateDynamicFlowApproverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateDynamicFlowApproverOutcome(rsp);
        else
            return ChannelCreateDynamicFlowApproverOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateDynamicFlowApproverOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateDynamicFlowApproverAsync(const ChannelCreateDynamicFlowApproverRequest& request, const ChannelCreateDynamicFlowApproverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateDynamicFlowApprover(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateDynamicFlowApproverOutcomeCallable EssbasicClient::ChannelCreateDynamicFlowApproverCallable(const ChannelCreateDynamicFlowApproverRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateDynamicFlowApproverOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateDynamicFlowApprover(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateEmbedWebUrlOutcome EssbasicClient::ChannelCreateEmbedWebUrl(const ChannelCreateEmbedWebUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateEmbedWebUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateEmbedWebUrlResponse rsp = ChannelCreateEmbedWebUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateEmbedWebUrlOutcome(rsp);
        else
            return ChannelCreateEmbedWebUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateEmbedWebUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateEmbedWebUrlAsync(const ChannelCreateEmbedWebUrlRequest& request, const ChannelCreateEmbedWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateEmbedWebUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateEmbedWebUrlOutcomeCallable EssbasicClient::ChannelCreateEmbedWebUrlCallable(const ChannelCreateEmbedWebUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateEmbedWebUrlOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateEmbedWebUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateFlowApproversOutcome EssbasicClient::ChannelCreateFlowApprovers(const ChannelCreateFlowApproversRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateFlowApprovers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateFlowApproversResponse rsp = ChannelCreateFlowApproversResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateFlowApproversOutcome(rsp);
        else
            return ChannelCreateFlowApproversOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateFlowApproversOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateFlowApproversAsync(const ChannelCreateFlowApproversRequest& request, const ChannelCreateFlowApproversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateFlowApprovers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateFlowApproversOutcomeCallable EssbasicClient::ChannelCreateFlowApproversCallable(const ChannelCreateFlowApproversRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateFlowApproversOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateFlowApprovers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

EssbasicClient::ChannelCreateFlowGroupByFilesOutcome EssbasicClient::ChannelCreateFlowGroupByFiles(const ChannelCreateFlowGroupByFilesRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateFlowGroupByFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateFlowGroupByFilesResponse rsp = ChannelCreateFlowGroupByFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateFlowGroupByFilesOutcome(rsp);
        else
            return ChannelCreateFlowGroupByFilesOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateFlowGroupByFilesOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateFlowGroupByFilesAsync(const ChannelCreateFlowGroupByFilesRequest& request, const ChannelCreateFlowGroupByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateFlowGroupByFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateFlowGroupByFilesOutcomeCallable EssbasicClient::ChannelCreateFlowGroupByFilesCallable(const ChannelCreateFlowGroupByFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateFlowGroupByFilesOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateFlowGroupByFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateFlowGroupByTemplatesOutcome EssbasicClient::ChannelCreateFlowGroupByTemplates(const ChannelCreateFlowGroupByTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateFlowGroupByTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateFlowGroupByTemplatesResponse rsp = ChannelCreateFlowGroupByTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateFlowGroupByTemplatesOutcome(rsp);
        else
            return ChannelCreateFlowGroupByTemplatesOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateFlowGroupByTemplatesOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateFlowGroupByTemplatesAsync(const ChannelCreateFlowGroupByTemplatesRequest& request, const ChannelCreateFlowGroupByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateFlowGroupByTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateFlowGroupByTemplatesOutcomeCallable EssbasicClient::ChannelCreateFlowGroupByTemplatesCallable(const ChannelCreateFlowGroupByTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateFlowGroupByTemplatesOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateFlowGroupByTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateFlowRemindsOutcome EssbasicClient::ChannelCreateFlowReminds(const ChannelCreateFlowRemindsRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateFlowReminds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateFlowRemindsResponse rsp = ChannelCreateFlowRemindsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateFlowRemindsOutcome(rsp);
        else
            return ChannelCreateFlowRemindsOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateFlowRemindsOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateFlowRemindsAsync(const ChannelCreateFlowRemindsRequest& request, const ChannelCreateFlowRemindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateFlowReminds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateFlowRemindsOutcomeCallable EssbasicClient::ChannelCreateFlowRemindsCallable(const ChannelCreateFlowRemindsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateFlowRemindsOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateFlowReminds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateFlowSignReviewOutcome EssbasicClient::ChannelCreateFlowSignReview(const ChannelCreateFlowSignReviewRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateFlowSignReview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateFlowSignReviewResponse rsp = ChannelCreateFlowSignReviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateFlowSignReviewOutcome(rsp);
        else
            return ChannelCreateFlowSignReviewOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateFlowSignReviewOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateFlowSignReviewAsync(const ChannelCreateFlowSignReviewRequest& request, const ChannelCreateFlowSignReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateFlowSignReview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateFlowSignReviewOutcomeCallable EssbasicClient::ChannelCreateFlowSignReviewCallable(const ChannelCreateFlowSignReviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateFlowSignReviewOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateFlowSignReview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateFlowSignUrlOutcome EssbasicClient::ChannelCreateFlowSignUrl(const ChannelCreateFlowSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateFlowSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateFlowSignUrlResponse rsp = ChannelCreateFlowSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateFlowSignUrlOutcome(rsp);
        else
            return ChannelCreateFlowSignUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateFlowSignUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateFlowSignUrlAsync(const ChannelCreateFlowSignUrlRequest& request, const ChannelCreateFlowSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateFlowSignUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateFlowSignUrlOutcomeCallable EssbasicClient::ChannelCreateFlowSignUrlCallable(const ChannelCreateFlowSignUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateFlowSignUrlOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateFlowSignUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateMultiFlowSignQRCodeOutcome EssbasicClient::ChannelCreateMultiFlowSignQRCode(const ChannelCreateMultiFlowSignQRCodeRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateMultiFlowSignQRCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateMultiFlowSignQRCodeResponse rsp = ChannelCreateMultiFlowSignQRCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateMultiFlowSignQRCodeOutcome(rsp);
        else
            return ChannelCreateMultiFlowSignQRCodeOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateMultiFlowSignQRCodeOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateMultiFlowSignQRCodeAsync(const ChannelCreateMultiFlowSignQRCodeRequest& request, const ChannelCreateMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateMultiFlowSignQRCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateMultiFlowSignQRCodeOutcomeCallable EssbasicClient::ChannelCreateMultiFlowSignQRCodeCallable(const ChannelCreateMultiFlowSignQRCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateMultiFlowSignQRCodeOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateMultiFlowSignQRCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateOrganizationBatchSignUrlOutcome EssbasicClient::ChannelCreateOrganizationBatchSignUrl(const ChannelCreateOrganizationBatchSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateOrganizationBatchSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateOrganizationBatchSignUrlResponse rsp = ChannelCreateOrganizationBatchSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateOrganizationBatchSignUrlOutcome(rsp);
        else
            return ChannelCreateOrganizationBatchSignUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateOrganizationBatchSignUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateOrganizationBatchSignUrlAsync(const ChannelCreateOrganizationBatchSignUrlRequest& request, const ChannelCreateOrganizationBatchSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateOrganizationBatchSignUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateOrganizationBatchSignUrlOutcomeCallable EssbasicClient::ChannelCreateOrganizationBatchSignUrlCallable(const ChannelCreateOrganizationBatchSignUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateOrganizationBatchSignUrlOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateOrganizationBatchSignUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateOrganizationModifyQrCodeOutcome EssbasicClient::ChannelCreateOrganizationModifyQrCode(const ChannelCreateOrganizationModifyQrCodeRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateOrganizationModifyQrCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateOrganizationModifyQrCodeResponse rsp = ChannelCreateOrganizationModifyQrCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateOrganizationModifyQrCodeOutcome(rsp);
        else
            return ChannelCreateOrganizationModifyQrCodeOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateOrganizationModifyQrCodeOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateOrganizationModifyQrCodeAsync(const ChannelCreateOrganizationModifyQrCodeRequest& request, const ChannelCreateOrganizationModifyQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateOrganizationModifyQrCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateOrganizationModifyQrCodeOutcomeCallable EssbasicClient::ChannelCreateOrganizationModifyQrCodeCallable(const ChannelCreateOrganizationModifyQrCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateOrganizationModifyQrCodeOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateOrganizationModifyQrCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreatePrepareFlowOutcome EssbasicClient::ChannelCreatePrepareFlow(const ChannelCreatePrepareFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreatePrepareFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreatePrepareFlowResponse rsp = ChannelCreatePrepareFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreatePrepareFlowOutcome(rsp);
        else
            return ChannelCreatePrepareFlowOutcome(o.GetError());
    }
    else
    {
        return ChannelCreatePrepareFlowOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreatePrepareFlowAsync(const ChannelCreatePrepareFlowRequest& request, const ChannelCreatePrepareFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreatePrepareFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreatePrepareFlowOutcomeCallable EssbasicClient::ChannelCreatePrepareFlowCallable(const ChannelCreatePrepareFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreatePrepareFlowOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreatePrepareFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreatePrepareFlowGroupOutcome EssbasicClient::ChannelCreatePrepareFlowGroup(const ChannelCreatePrepareFlowGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreatePrepareFlowGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreatePrepareFlowGroupResponse rsp = ChannelCreatePrepareFlowGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreatePrepareFlowGroupOutcome(rsp);
        else
            return ChannelCreatePrepareFlowGroupOutcome(o.GetError());
    }
    else
    {
        return ChannelCreatePrepareFlowGroupOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreatePrepareFlowGroupAsync(const ChannelCreatePrepareFlowGroupRequest& request, const ChannelCreatePrepareFlowGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreatePrepareFlowGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreatePrepareFlowGroupOutcomeCallable EssbasicClient::ChannelCreatePrepareFlowGroupCallable(const ChannelCreatePrepareFlowGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreatePrepareFlowGroupOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreatePrepareFlowGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreatePreparedPersonalEsignOutcome EssbasicClient::ChannelCreatePreparedPersonalEsign(const ChannelCreatePreparedPersonalEsignRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreatePreparedPersonalEsign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreatePreparedPersonalEsignResponse rsp = ChannelCreatePreparedPersonalEsignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreatePreparedPersonalEsignOutcome(rsp);
        else
            return ChannelCreatePreparedPersonalEsignOutcome(o.GetError());
    }
    else
    {
        return ChannelCreatePreparedPersonalEsignOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreatePreparedPersonalEsignAsync(const ChannelCreatePreparedPersonalEsignRequest& request, const ChannelCreatePreparedPersonalEsignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreatePreparedPersonalEsign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreatePreparedPersonalEsignOutcomeCallable EssbasicClient::ChannelCreatePreparedPersonalEsignCallable(const ChannelCreatePreparedPersonalEsignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreatePreparedPersonalEsignOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreatePreparedPersonalEsign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateReleaseFlowOutcome EssbasicClient::ChannelCreateReleaseFlow(const ChannelCreateReleaseFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateReleaseFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateReleaseFlowResponse rsp = ChannelCreateReleaseFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateReleaseFlowOutcome(rsp);
        else
            return ChannelCreateReleaseFlowOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateReleaseFlowOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateReleaseFlowAsync(const ChannelCreateReleaseFlowRequest& request, const ChannelCreateReleaseFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateReleaseFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateReleaseFlowOutcomeCallable EssbasicClient::ChannelCreateReleaseFlowCallable(const ChannelCreateReleaseFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateReleaseFlowOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateReleaseFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateRoleOutcome EssbasicClient::ChannelCreateRole(const ChannelCreateRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateRoleResponse rsp = ChannelCreateRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateRoleOutcome(rsp);
        else
            return ChannelCreateRoleOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateRoleOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateRoleAsync(const ChannelCreateRoleRequest& request, const ChannelCreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateRoleOutcomeCallable EssbasicClient::ChannelCreateRoleCallable(const ChannelCreateRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateRoleOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateSealPolicyOutcome EssbasicClient::ChannelCreateSealPolicy(const ChannelCreateSealPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateSealPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateSealPolicyResponse rsp = ChannelCreateSealPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateSealPolicyOutcome(rsp);
        else
            return ChannelCreateSealPolicyOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateSealPolicyOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateSealPolicyAsync(const ChannelCreateSealPolicyRequest& request, const ChannelCreateSealPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateSealPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateSealPolicyOutcomeCallable EssbasicClient::ChannelCreateSealPolicyCallable(const ChannelCreateSealPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateSealPolicyOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateSealPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateUserAutoSignEnableUrlOutcome EssbasicClient::ChannelCreateUserAutoSignEnableUrl(const ChannelCreateUserAutoSignEnableUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateUserAutoSignEnableUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateUserAutoSignEnableUrlResponse rsp = ChannelCreateUserAutoSignEnableUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateUserAutoSignEnableUrlOutcome(rsp);
        else
            return ChannelCreateUserAutoSignEnableUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateUserAutoSignEnableUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateUserAutoSignEnableUrlAsync(const ChannelCreateUserAutoSignEnableUrlRequest& request, const ChannelCreateUserAutoSignEnableUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateUserAutoSignEnableUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateUserAutoSignEnableUrlOutcomeCallable EssbasicClient::ChannelCreateUserAutoSignEnableUrlCallable(const ChannelCreateUserAutoSignEnableUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateUserAutoSignEnableUrlOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateUserAutoSignEnableUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateUserAutoSignSealUrlOutcome EssbasicClient::ChannelCreateUserAutoSignSealUrl(const ChannelCreateUserAutoSignSealUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateUserAutoSignSealUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateUserAutoSignSealUrlResponse rsp = ChannelCreateUserAutoSignSealUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateUserAutoSignSealUrlOutcome(rsp);
        else
            return ChannelCreateUserAutoSignSealUrlOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateUserAutoSignSealUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateUserAutoSignSealUrlAsync(const ChannelCreateUserAutoSignSealUrlRequest& request, const ChannelCreateUserAutoSignSealUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateUserAutoSignSealUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateUserAutoSignSealUrlOutcomeCallable EssbasicClient::ChannelCreateUserAutoSignSealUrlCallable(const ChannelCreateUserAutoSignSealUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateUserAutoSignSealUrlOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateUserAutoSignSealUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateUserRolesOutcome EssbasicClient::ChannelCreateUserRoles(const ChannelCreateUserRolesRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateUserRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateUserRolesResponse rsp = ChannelCreateUserRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateUserRolesOutcome(rsp);
        else
            return ChannelCreateUserRolesOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateUserRolesOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateUserRolesAsync(const ChannelCreateUserRolesRequest& request, const ChannelCreateUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateUserRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateUserRolesOutcomeCallable EssbasicClient::ChannelCreateUserRolesCallable(const ChannelCreateUserRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateUserRolesOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateUserRoles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelCreateWebThemeConfigOutcome EssbasicClient::ChannelCreateWebThemeConfig(const ChannelCreateWebThemeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelCreateWebThemeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelCreateWebThemeConfigResponse rsp = ChannelCreateWebThemeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelCreateWebThemeConfigOutcome(rsp);
        else
            return ChannelCreateWebThemeConfigOutcome(o.GetError());
    }
    else
    {
        return ChannelCreateWebThemeConfigOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelCreateWebThemeConfigAsync(const ChannelCreateWebThemeConfigRequest& request, const ChannelCreateWebThemeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelCreateWebThemeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelCreateWebThemeConfigOutcomeCallable EssbasicClient::ChannelCreateWebThemeConfigCallable(const ChannelCreateWebThemeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelCreateWebThemeConfigOutcome()>>(
        [this, request]()
        {
            return this->ChannelCreateWebThemeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelDeleteRoleOutcome EssbasicClient::ChannelDeleteRole(const ChannelDeleteRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDeleteRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDeleteRoleResponse rsp = ChannelDeleteRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDeleteRoleOutcome(rsp);
        else
            return ChannelDeleteRoleOutcome(o.GetError());
    }
    else
    {
        return ChannelDeleteRoleOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDeleteRoleAsync(const ChannelDeleteRoleRequest& request, const ChannelDeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelDeleteRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelDeleteRoleOutcomeCallable EssbasicClient::ChannelDeleteRoleCallable(const ChannelDeleteRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelDeleteRoleOutcome()>>(
        [this, request]()
        {
            return this->ChannelDeleteRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelDeleteRoleUsersOutcome EssbasicClient::ChannelDeleteRoleUsers(const ChannelDeleteRoleUsersRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDeleteRoleUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDeleteRoleUsersResponse rsp = ChannelDeleteRoleUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDeleteRoleUsersOutcome(rsp);
        else
            return ChannelDeleteRoleUsersOutcome(o.GetError());
    }
    else
    {
        return ChannelDeleteRoleUsersOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDeleteRoleUsersAsync(const ChannelDeleteRoleUsersRequest& request, const ChannelDeleteRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelDeleteRoleUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelDeleteRoleUsersOutcomeCallable EssbasicClient::ChannelDeleteRoleUsersCallable(const ChannelDeleteRoleUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelDeleteRoleUsersOutcome()>>(
        [this, request]()
        {
            return this->ChannelDeleteRoleUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelDeleteSealPoliciesOutcome EssbasicClient::ChannelDeleteSealPolicies(const ChannelDeleteSealPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDeleteSealPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDeleteSealPoliciesResponse rsp = ChannelDeleteSealPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDeleteSealPoliciesOutcome(rsp);
        else
            return ChannelDeleteSealPoliciesOutcome(o.GetError());
    }
    else
    {
        return ChannelDeleteSealPoliciesOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDeleteSealPoliciesAsync(const ChannelDeleteSealPoliciesRequest& request, const ChannelDeleteSealPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelDeleteSealPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelDeleteSealPoliciesOutcomeCallable EssbasicClient::ChannelDeleteSealPoliciesCallable(const ChannelDeleteSealPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelDeleteSealPoliciesOutcome()>>(
        [this, request]()
        {
            return this->ChannelDeleteSealPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelDescribeAccountBillDetailOutcome EssbasicClient::ChannelDescribeAccountBillDetail(const ChannelDescribeAccountBillDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeAccountBillDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeAccountBillDetailResponse rsp = ChannelDescribeAccountBillDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeAccountBillDetailOutcome(rsp);
        else
            return ChannelDescribeAccountBillDetailOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeAccountBillDetailOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeAccountBillDetailAsync(const ChannelDescribeAccountBillDetailRequest& request, const ChannelDescribeAccountBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelDescribeAccountBillDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelDescribeAccountBillDetailOutcomeCallable EssbasicClient::ChannelDescribeAccountBillDetailCallable(const ChannelDescribeAccountBillDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelDescribeAccountBillDetailOutcome()>>(
        [this, request]()
        {
            return this->ChannelDescribeAccountBillDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelDescribeBillUsageDetailOutcome EssbasicClient::ChannelDescribeBillUsageDetail(const ChannelDescribeBillUsageDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeBillUsageDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeBillUsageDetailResponse rsp = ChannelDescribeBillUsageDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeBillUsageDetailOutcome(rsp);
        else
            return ChannelDescribeBillUsageDetailOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeBillUsageDetailOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeBillUsageDetailAsync(const ChannelDescribeBillUsageDetailRequest& request, const ChannelDescribeBillUsageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelDescribeBillUsageDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelDescribeBillUsageDetailOutcomeCallable EssbasicClient::ChannelDescribeBillUsageDetailCallable(const ChannelDescribeBillUsageDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelDescribeBillUsageDetailOutcome()>>(
        [this, request]()
        {
            return this->ChannelDescribeBillUsageDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelDescribeEmployeesOutcome EssbasicClient::ChannelDescribeEmployees(const ChannelDescribeEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeEmployeesResponse rsp = ChannelDescribeEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeEmployeesOutcome(rsp);
        else
            return ChannelDescribeEmployeesOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeEmployeesOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeEmployeesAsync(const ChannelDescribeEmployeesRequest& request, const ChannelDescribeEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelDescribeEmployees(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelDescribeEmployeesOutcomeCallable EssbasicClient::ChannelDescribeEmployeesCallable(const ChannelDescribeEmployeesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelDescribeEmployeesOutcome()>>(
        [this, request]()
        {
            return this->ChannelDescribeEmployees(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelDescribeFlowComponentsOutcome EssbasicClient::ChannelDescribeFlowComponents(const ChannelDescribeFlowComponentsRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeFlowComponents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeFlowComponentsResponse rsp = ChannelDescribeFlowComponentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeFlowComponentsOutcome(rsp);
        else
            return ChannelDescribeFlowComponentsOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeFlowComponentsOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeFlowComponentsAsync(const ChannelDescribeFlowComponentsRequest& request, const ChannelDescribeFlowComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelDescribeFlowComponents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelDescribeFlowComponentsOutcomeCallable EssbasicClient::ChannelDescribeFlowComponentsCallable(const ChannelDescribeFlowComponentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelDescribeFlowComponentsOutcome()>>(
        [this, request]()
        {
            return this->ChannelDescribeFlowComponents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelDescribeOrganizationSealsOutcome EssbasicClient::ChannelDescribeOrganizationSeals(const ChannelDescribeOrganizationSealsRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeOrganizationSeals");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeOrganizationSealsResponse rsp = ChannelDescribeOrganizationSealsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeOrganizationSealsOutcome(rsp);
        else
            return ChannelDescribeOrganizationSealsOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeOrganizationSealsOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeOrganizationSealsAsync(const ChannelDescribeOrganizationSealsRequest& request, const ChannelDescribeOrganizationSealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelDescribeOrganizationSeals(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelDescribeOrganizationSealsOutcomeCallable EssbasicClient::ChannelDescribeOrganizationSealsCallable(const ChannelDescribeOrganizationSealsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelDescribeOrganizationSealsOutcome()>>(
        [this, request]()
        {
            return this->ChannelDescribeOrganizationSeals(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelDescribeRolesOutcome EssbasicClient::ChannelDescribeRoles(const ChannelDescribeRolesRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeRolesResponse rsp = ChannelDescribeRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeRolesOutcome(rsp);
        else
            return ChannelDescribeRolesOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeRolesOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeRolesAsync(const ChannelDescribeRolesRequest& request, const ChannelDescribeRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelDescribeRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelDescribeRolesOutcomeCallable EssbasicClient::ChannelDescribeRolesCallable(const ChannelDescribeRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelDescribeRolesOutcome()>>(
        [this, request]()
        {
            return this->ChannelDescribeRoles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelDescribeSignFaceVideoOutcome EssbasicClient::ChannelDescribeSignFaceVideo(const ChannelDescribeSignFaceVideoRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeSignFaceVideo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeSignFaceVideoResponse rsp = ChannelDescribeSignFaceVideoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeSignFaceVideoOutcome(rsp);
        else
            return ChannelDescribeSignFaceVideoOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeSignFaceVideoOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeSignFaceVideoAsync(const ChannelDescribeSignFaceVideoRequest& request, const ChannelDescribeSignFaceVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelDescribeSignFaceVideo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelDescribeSignFaceVideoOutcomeCallable EssbasicClient::ChannelDescribeSignFaceVideoCallable(const ChannelDescribeSignFaceVideoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelDescribeSignFaceVideoOutcome()>>(
        [this, request]()
        {
            return this->ChannelDescribeSignFaceVideo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelDescribeUserAutoSignStatusOutcome EssbasicClient::ChannelDescribeUserAutoSignStatus(const ChannelDescribeUserAutoSignStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDescribeUserAutoSignStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDescribeUserAutoSignStatusResponse rsp = ChannelDescribeUserAutoSignStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDescribeUserAutoSignStatusOutcome(rsp);
        else
            return ChannelDescribeUserAutoSignStatusOutcome(o.GetError());
    }
    else
    {
        return ChannelDescribeUserAutoSignStatusOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDescribeUserAutoSignStatusAsync(const ChannelDescribeUserAutoSignStatusRequest& request, const ChannelDescribeUserAutoSignStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelDescribeUserAutoSignStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelDescribeUserAutoSignStatusOutcomeCallable EssbasicClient::ChannelDescribeUserAutoSignStatusCallable(const ChannelDescribeUserAutoSignStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelDescribeUserAutoSignStatusOutcome()>>(
        [this, request]()
        {
            return this->ChannelDescribeUserAutoSignStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelDisableUserAutoSignOutcome EssbasicClient::ChannelDisableUserAutoSign(const ChannelDisableUserAutoSignRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelDisableUserAutoSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelDisableUserAutoSignResponse rsp = ChannelDisableUserAutoSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelDisableUserAutoSignOutcome(rsp);
        else
            return ChannelDisableUserAutoSignOutcome(o.GetError());
    }
    else
    {
        return ChannelDisableUserAutoSignOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelDisableUserAutoSignAsync(const ChannelDisableUserAutoSignRequest& request, const ChannelDisableUserAutoSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelDisableUserAutoSign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelDisableUserAutoSignOutcomeCallable EssbasicClient::ChannelDisableUserAutoSignCallable(const ChannelDisableUserAutoSignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelDisableUserAutoSignOutcome()>>(
        [this, request]()
        {
            return this->ChannelDisableUserAutoSign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelGetTaskResultApiOutcome EssbasicClient::ChannelGetTaskResultApi(const ChannelGetTaskResultApiRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelGetTaskResultApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelGetTaskResultApiResponse rsp = ChannelGetTaskResultApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelGetTaskResultApiOutcome(rsp);
        else
            return ChannelGetTaskResultApiOutcome(o.GetError());
    }
    else
    {
        return ChannelGetTaskResultApiOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelGetTaskResultApiAsync(const ChannelGetTaskResultApiRequest& request, const ChannelGetTaskResultApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelGetTaskResultApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelGetTaskResultApiOutcomeCallable EssbasicClient::ChannelGetTaskResultApiCallable(const ChannelGetTaskResultApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelGetTaskResultApiOutcome()>>(
        [this, request]()
        {
            return this->ChannelGetTaskResultApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelModifyRoleOutcome EssbasicClient::ChannelModifyRole(const ChannelModifyRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelModifyRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelModifyRoleResponse rsp = ChannelModifyRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelModifyRoleOutcome(rsp);
        else
            return ChannelModifyRoleOutcome(o.GetError());
    }
    else
    {
        return ChannelModifyRoleOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelModifyRoleAsync(const ChannelModifyRoleRequest& request, const ChannelModifyRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelModifyRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelModifyRoleOutcomeCallable EssbasicClient::ChannelModifyRoleCallable(const ChannelModifyRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelModifyRoleOutcome()>>(
        [this, request]()
        {
            return this->ChannelModifyRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelRenewAutoSignLicenseOutcome EssbasicClient::ChannelRenewAutoSignLicense(const ChannelRenewAutoSignLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelRenewAutoSignLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelRenewAutoSignLicenseResponse rsp = ChannelRenewAutoSignLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelRenewAutoSignLicenseOutcome(rsp);
        else
            return ChannelRenewAutoSignLicenseOutcome(o.GetError());
    }
    else
    {
        return ChannelRenewAutoSignLicenseOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelRenewAutoSignLicenseAsync(const ChannelRenewAutoSignLicenseRequest& request, const ChannelRenewAutoSignLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelRenewAutoSignLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelRenewAutoSignLicenseOutcomeCallable EssbasicClient::ChannelRenewAutoSignLicenseCallable(const ChannelRenewAutoSignLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelRenewAutoSignLicenseOutcome()>>(
        [this, request]()
        {
            return this->ChannelRenewAutoSignLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelUpdateSealStatusOutcome EssbasicClient::ChannelUpdateSealStatus(const ChannelUpdateSealStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelUpdateSealStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelUpdateSealStatusResponse rsp = ChannelUpdateSealStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelUpdateSealStatusOutcome(rsp);
        else
            return ChannelUpdateSealStatusOutcome(o.GetError());
    }
    else
    {
        return ChannelUpdateSealStatusOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelUpdateSealStatusAsync(const ChannelUpdateSealStatusRequest& request, const ChannelUpdateSealStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelUpdateSealStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelUpdateSealStatusOutcomeCallable EssbasicClient::ChannelUpdateSealStatusCallable(const ChannelUpdateSealStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelUpdateSealStatusOutcome()>>(
        [this, request]()
        {
            return this->ChannelUpdateSealStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ChannelVerifyPdfOutcome EssbasicClient::ChannelVerifyPdf(const ChannelVerifyPdfRequest &request)
{
    auto outcome = MakeRequest(request, "ChannelVerifyPdf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChannelVerifyPdfResponse rsp = ChannelVerifyPdfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChannelVerifyPdfOutcome(rsp);
        else
            return ChannelVerifyPdfOutcome(o.GetError());
    }
    else
    {
        return ChannelVerifyPdfOutcome(outcome.GetError());
    }
}

void EssbasicClient::ChannelVerifyPdfAsync(const ChannelVerifyPdfRequest& request, const ChannelVerifyPdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChannelVerifyPdf(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ChannelVerifyPdfOutcomeCallable EssbasicClient::ChannelVerifyPdfCallable(const ChannelVerifyPdfRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChannelVerifyPdfOutcome()>>(
        [this, request]()
        {
            return this->ChannelVerifyPdf(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateBatchInitOrganizationUrlOutcome EssbasicClient::CreateBatchInitOrganizationUrl(const CreateBatchInitOrganizationUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchInitOrganizationUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchInitOrganizationUrlResponse rsp = CreateBatchInitOrganizationUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchInitOrganizationUrlOutcome(rsp);
        else
            return CreateBatchInitOrganizationUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchInitOrganizationUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateBatchInitOrganizationUrlAsync(const CreateBatchInitOrganizationUrlRequest& request, const CreateBatchInitOrganizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBatchInitOrganizationUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateBatchInitOrganizationUrlOutcomeCallable EssbasicClient::CreateBatchInitOrganizationUrlCallable(const CreateBatchInitOrganizationUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBatchInitOrganizationUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateBatchInitOrganizationUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateBatchOrganizationAuthorizationUrlOutcome EssbasicClient::CreateBatchOrganizationAuthorizationUrl(const CreateBatchOrganizationAuthorizationUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchOrganizationAuthorizationUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchOrganizationAuthorizationUrlResponse rsp = CreateBatchOrganizationAuthorizationUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchOrganizationAuthorizationUrlOutcome(rsp);
        else
            return CreateBatchOrganizationAuthorizationUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchOrganizationAuthorizationUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateBatchOrganizationAuthorizationUrlAsync(const CreateBatchOrganizationAuthorizationUrlRequest& request, const CreateBatchOrganizationAuthorizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBatchOrganizationAuthorizationUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateBatchOrganizationAuthorizationUrlOutcomeCallable EssbasicClient::CreateBatchOrganizationAuthorizationUrlCallable(const CreateBatchOrganizationAuthorizationUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBatchOrganizationAuthorizationUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateBatchOrganizationAuthorizationUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateBatchOrganizationRegistrationTasksOutcome EssbasicClient::CreateBatchOrganizationRegistrationTasks(const CreateBatchOrganizationRegistrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchOrganizationRegistrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchOrganizationRegistrationTasksResponse rsp = CreateBatchOrganizationRegistrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchOrganizationRegistrationTasksOutcome(rsp);
        else
            return CreateBatchOrganizationRegistrationTasksOutcome(o.GetError());
    }
    else
    {
        return CreateBatchOrganizationRegistrationTasksOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateBatchOrganizationRegistrationTasksAsync(const CreateBatchOrganizationRegistrationTasksRequest& request, const CreateBatchOrganizationRegistrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBatchOrganizationRegistrationTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateBatchOrganizationRegistrationTasksOutcomeCallable EssbasicClient::CreateBatchOrganizationRegistrationTasksCallable(const CreateBatchOrganizationRegistrationTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBatchOrganizationRegistrationTasksOutcome()>>(
        [this, request]()
        {
            return this->CreateBatchOrganizationRegistrationTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateChannelFlowEvidenceReportOutcome EssbasicClient::CreateChannelFlowEvidenceReport(const CreateChannelFlowEvidenceReportRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChannelFlowEvidenceReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChannelFlowEvidenceReportResponse rsp = CreateChannelFlowEvidenceReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChannelFlowEvidenceReportOutcome(rsp);
        else
            return CreateChannelFlowEvidenceReportOutcome(o.GetError());
    }
    else
    {
        return CreateChannelFlowEvidenceReportOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateChannelFlowEvidenceReportAsync(const CreateChannelFlowEvidenceReportRequest& request, const CreateChannelFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateChannelFlowEvidenceReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateChannelFlowEvidenceReportOutcomeCallable EssbasicClient::CreateChannelFlowEvidenceReportCallable(const CreateChannelFlowEvidenceReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateChannelFlowEvidenceReportOutcome()>>(
        [this, request]()
        {
            return this->CreateChannelFlowEvidenceReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateChannelOrganizationInfoChangeUrlOutcome EssbasicClient::CreateChannelOrganizationInfoChangeUrl(const CreateChannelOrganizationInfoChangeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChannelOrganizationInfoChangeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChannelOrganizationInfoChangeUrlResponse rsp = CreateChannelOrganizationInfoChangeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChannelOrganizationInfoChangeUrlOutcome(rsp);
        else
            return CreateChannelOrganizationInfoChangeUrlOutcome(o.GetError());
    }
    else
    {
        return CreateChannelOrganizationInfoChangeUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateChannelOrganizationInfoChangeUrlAsync(const CreateChannelOrganizationInfoChangeUrlRequest& request, const CreateChannelOrganizationInfoChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateChannelOrganizationInfoChangeUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateChannelOrganizationInfoChangeUrlOutcomeCallable EssbasicClient::CreateChannelOrganizationInfoChangeUrlCallable(const CreateChannelOrganizationInfoChangeUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateChannelOrganizationInfoChangeUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateChannelOrganizationInfoChangeUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateChannelSubOrganizationActiveOutcome EssbasicClient::CreateChannelSubOrganizationActive(const CreateChannelSubOrganizationActiveRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChannelSubOrganizationActive");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChannelSubOrganizationActiveResponse rsp = CreateChannelSubOrganizationActiveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChannelSubOrganizationActiveOutcome(rsp);
        else
            return CreateChannelSubOrganizationActiveOutcome(o.GetError());
    }
    else
    {
        return CreateChannelSubOrganizationActiveOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateChannelSubOrganizationActiveAsync(const CreateChannelSubOrganizationActiveRequest& request, const CreateChannelSubOrganizationActiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateChannelSubOrganizationActive(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateChannelSubOrganizationActiveOutcomeCallable EssbasicClient::CreateChannelSubOrganizationActiveCallable(const CreateChannelSubOrganizationActiveRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateChannelSubOrganizationActiveOutcome()>>(
        [this, request]()
        {
            return this->CreateChannelSubOrganizationActive(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateCloseOrganizationUrlOutcome EssbasicClient::CreateCloseOrganizationUrl(const CreateCloseOrganizationUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloseOrganizationUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloseOrganizationUrlResponse rsp = CreateCloseOrganizationUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloseOrganizationUrlOutcome(rsp);
        else
            return CreateCloseOrganizationUrlOutcome(o.GetError());
    }
    else
    {
        return CreateCloseOrganizationUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateCloseOrganizationUrlAsync(const CreateCloseOrganizationUrlRequest& request, const CreateCloseOrganizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloseOrganizationUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateCloseOrganizationUrlOutcomeCallable EssbasicClient::CreateCloseOrganizationUrlCallable(const CreateCloseOrganizationUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloseOrganizationUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateCloseOrganizationUrl(request);
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

EssbasicClient::CreateEmployeeChangeUrlOutcome EssbasicClient::CreateEmployeeChangeUrl(const CreateEmployeeChangeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmployeeChangeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmployeeChangeUrlResponse rsp = CreateEmployeeChangeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmployeeChangeUrlOutcome(rsp);
        else
            return CreateEmployeeChangeUrlOutcome(o.GetError());
    }
    else
    {
        return CreateEmployeeChangeUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateEmployeeChangeUrlAsync(const CreateEmployeeChangeUrlRequest& request, const CreateEmployeeChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEmployeeChangeUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateEmployeeChangeUrlOutcomeCallable EssbasicClient::CreateEmployeeChangeUrlCallable(const CreateEmployeeChangeUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEmployeeChangeUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateEmployeeChangeUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateEmployeeQualificationSealQrCodeOutcome EssbasicClient::CreateEmployeeQualificationSealQrCode(const CreateEmployeeQualificationSealQrCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmployeeQualificationSealQrCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmployeeQualificationSealQrCodeResponse rsp = CreateEmployeeQualificationSealQrCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmployeeQualificationSealQrCodeOutcome(rsp);
        else
            return CreateEmployeeQualificationSealQrCodeOutcome(o.GetError());
    }
    else
    {
        return CreateEmployeeQualificationSealQrCodeOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateEmployeeQualificationSealQrCodeAsync(const CreateEmployeeQualificationSealQrCodeRequest& request, const CreateEmployeeQualificationSealQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEmployeeQualificationSealQrCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateEmployeeQualificationSealQrCodeOutcomeCallable EssbasicClient::CreateEmployeeQualificationSealQrCodeCallable(const CreateEmployeeQualificationSealQrCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEmployeeQualificationSealQrCodeOutcome()>>(
        [this, request]()
        {
            return this->CreateEmployeeQualificationSealQrCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateFlowBlockchainEvidenceUrlOutcome EssbasicClient::CreateFlowBlockchainEvidenceUrl(const CreateFlowBlockchainEvidenceUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowBlockchainEvidenceUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowBlockchainEvidenceUrlResponse rsp = CreateFlowBlockchainEvidenceUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowBlockchainEvidenceUrlOutcome(rsp);
        else
            return CreateFlowBlockchainEvidenceUrlOutcome(o.GetError());
    }
    else
    {
        return CreateFlowBlockchainEvidenceUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateFlowBlockchainEvidenceUrlAsync(const CreateFlowBlockchainEvidenceUrlRequest& request, const CreateFlowBlockchainEvidenceUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowBlockchainEvidenceUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateFlowBlockchainEvidenceUrlOutcomeCallable EssbasicClient::CreateFlowBlockchainEvidenceUrlCallable(const CreateFlowBlockchainEvidenceUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowBlockchainEvidenceUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowBlockchainEvidenceUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateFlowForwardsOutcome EssbasicClient::CreateFlowForwards(const CreateFlowForwardsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowForwards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowForwardsResponse rsp = CreateFlowForwardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowForwardsOutcome(rsp);
        else
            return CreateFlowForwardsOutcome(o.GetError());
    }
    else
    {
        return CreateFlowForwardsOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateFlowForwardsAsync(const CreateFlowForwardsRequest& request, const CreateFlowForwardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowForwards(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateFlowForwardsOutcomeCallable EssbasicClient::CreateFlowForwardsCallable(const CreateFlowForwardsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowForwardsOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowForwards(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateFlowGroupSignReviewOutcome EssbasicClient::CreateFlowGroupSignReview(const CreateFlowGroupSignReviewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowGroupSignReview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowGroupSignReviewResponse rsp = CreateFlowGroupSignReviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowGroupSignReviewOutcome(rsp);
        else
            return CreateFlowGroupSignReviewOutcome(o.GetError());
    }
    else
    {
        return CreateFlowGroupSignReviewOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateFlowGroupSignReviewAsync(const CreateFlowGroupSignReviewRequest& request, const CreateFlowGroupSignReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowGroupSignReview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateFlowGroupSignReviewOutcomeCallable EssbasicClient::CreateFlowGroupSignReviewCallable(const CreateFlowGroupSignReviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowGroupSignReviewOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowGroupSignReview(request);
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

EssbasicClient::CreateLegalSealQrCodeOutcome EssbasicClient::CreateLegalSealQrCode(const CreateLegalSealQrCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLegalSealQrCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLegalSealQrCodeResponse rsp = CreateLegalSealQrCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLegalSealQrCodeOutcome(rsp);
        else
            return CreateLegalSealQrCodeOutcome(o.GetError());
    }
    else
    {
        return CreateLegalSealQrCodeOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateLegalSealQrCodeAsync(const CreateLegalSealQrCodeRequest& request, const CreateLegalSealQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLegalSealQrCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateLegalSealQrCodeOutcomeCallable EssbasicClient::CreateLegalSealQrCodeCallable(const CreateLegalSealQrCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLegalSealQrCodeOutcome()>>(
        [this, request]()
        {
            return this->CreateLegalSealQrCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateModifyAdminAuthorizationUrlOutcome EssbasicClient::CreateModifyAdminAuthorizationUrl(const CreateModifyAdminAuthorizationUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModifyAdminAuthorizationUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModifyAdminAuthorizationUrlResponse rsp = CreateModifyAdminAuthorizationUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModifyAdminAuthorizationUrlOutcome(rsp);
        else
            return CreateModifyAdminAuthorizationUrlOutcome(o.GetError());
    }
    else
    {
        return CreateModifyAdminAuthorizationUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateModifyAdminAuthorizationUrlAsync(const CreateModifyAdminAuthorizationUrlRequest& request, const CreateModifyAdminAuthorizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateModifyAdminAuthorizationUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateModifyAdminAuthorizationUrlOutcomeCallable EssbasicClient::CreateModifyAdminAuthorizationUrlCallable(const CreateModifyAdminAuthorizationUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateModifyAdminAuthorizationUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateModifyAdminAuthorizationUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateOrganizationAuthFileOutcome EssbasicClient::CreateOrganizationAuthFile(const CreateOrganizationAuthFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationAuthFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationAuthFileResponse rsp = CreateOrganizationAuthFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationAuthFileOutcome(rsp);
        else
            return CreateOrganizationAuthFileOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationAuthFileOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateOrganizationAuthFileAsync(const CreateOrganizationAuthFileRequest& request, const CreateOrganizationAuthFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrganizationAuthFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateOrganizationAuthFileOutcomeCallable EssbasicClient::CreateOrganizationAuthFileCallable(const CreateOrganizationAuthFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrganizationAuthFileOutcome()>>(
        [this, request]()
        {
            return this->CreateOrganizationAuthFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreatePartnerAutoSignAuthUrlOutcome EssbasicClient::CreatePartnerAutoSignAuthUrl(const CreatePartnerAutoSignAuthUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePartnerAutoSignAuthUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePartnerAutoSignAuthUrlResponse rsp = CreatePartnerAutoSignAuthUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePartnerAutoSignAuthUrlOutcome(rsp);
        else
            return CreatePartnerAutoSignAuthUrlOutcome(o.GetError());
    }
    else
    {
        return CreatePartnerAutoSignAuthUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreatePartnerAutoSignAuthUrlAsync(const CreatePartnerAutoSignAuthUrlRequest& request, const CreatePartnerAutoSignAuthUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePartnerAutoSignAuthUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreatePartnerAutoSignAuthUrlOutcomeCallable EssbasicClient::CreatePartnerAutoSignAuthUrlCallable(const CreatePartnerAutoSignAuthUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePartnerAutoSignAuthUrlOutcome()>>(
        [this, request]()
        {
            return this->CreatePartnerAutoSignAuthUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreatePersonAuthCertificateImageOutcome EssbasicClient::CreatePersonAuthCertificateImage(const CreatePersonAuthCertificateImageRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePersonAuthCertificateImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePersonAuthCertificateImageResponse rsp = CreatePersonAuthCertificateImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePersonAuthCertificateImageOutcome(rsp);
        else
            return CreatePersonAuthCertificateImageOutcome(o.GetError());
    }
    else
    {
        return CreatePersonAuthCertificateImageOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreatePersonAuthCertificateImageAsync(const CreatePersonAuthCertificateImageRequest& request, const CreatePersonAuthCertificateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePersonAuthCertificateImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreatePersonAuthCertificateImageOutcomeCallable EssbasicClient::CreatePersonAuthCertificateImageCallable(const CreatePersonAuthCertificateImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePersonAuthCertificateImageOutcome()>>(
        [this, request]()
        {
            return this->CreatePersonAuthCertificateImage(request);
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

EssbasicClient::DeleteOrganizationAuthorizationsOutcome EssbasicClient::DeleteOrganizationAuthorizations(const DeleteOrganizationAuthorizationsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrganizationAuthorizations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrganizationAuthorizationsResponse rsp = DeleteOrganizationAuthorizationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrganizationAuthorizationsOutcome(rsp);
        else
            return DeleteOrganizationAuthorizationsOutcome(o.GetError());
    }
    else
    {
        return DeleteOrganizationAuthorizationsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DeleteOrganizationAuthorizationsAsync(const DeleteOrganizationAuthorizationsRequest& request, const DeleteOrganizationAuthorizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOrganizationAuthorizations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DeleteOrganizationAuthorizationsOutcomeCallable EssbasicClient::DeleteOrganizationAuthorizationsCallable(const DeleteOrganizationAuthorizationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOrganizationAuthorizationsOutcome()>>(
        [this, request]()
        {
            return this->DeleteOrganizationAuthorizations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::DescribeBatchOrganizationRegistrationTasksOutcome EssbasicClient::DescribeBatchOrganizationRegistrationTasks(const DescribeBatchOrganizationRegistrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchOrganizationRegistrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchOrganizationRegistrationTasksResponse rsp = DescribeBatchOrganizationRegistrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchOrganizationRegistrationTasksOutcome(rsp);
        else
            return DescribeBatchOrganizationRegistrationTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchOrganizationRegistrationTasksOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeBatchOrganizationRegistrationTasksAsync(const DescribeBatchOrganizationRegistrationTasksRequest& request, const DescribeBatchOrganizationRegistrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchOrganizationRegistrationTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeBatchOrganizationRegistrationTasksOutcomeCallable EssbasicClient::DescribeBatchOrganizationRegistrationTasksCallable(const DescribeBatchOrganizationRegistrationTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchOrganizationRegistrationTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchOrganizationRegistrationTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::DescribeBatchOrganizationRegistrationUrlsOutcome EssbasicClient::DescribeBatchOrganizationRegistrationUrls(const DescribeBatchOrganizationRegistrationUrlsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchOrganizationRegistrationUrls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchOrganizationRegistrationUrlsResponse rsp = DescribeBatchOrganizationRegistrationUrlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchOrganizationRegistrationUrlsOutcome(rsp);
        else
            return DescribeBatchOrganizationRegistrationUrlsOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchOrganizationRegistrationUrlsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeBatchOrganizationRegistrationUrlsAsync(const DescribeBatchOrganizationRegistrationUrlsRequest& request, const DescribeBatchOrganizationRegistrationUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchOrganizationRegistrationUrls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeBatchOrganizationRegistrationUrlsOutcomeCallable EssbasicClient::DescribeBatchOrganizationRegistrationUrlsCallable(const DescribeBatchOrganizationRegistrationUrlsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchOrganizationRegistrationUrlsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchOrganizationRegistrationUrls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::DescribeCancelFlowsTaskOutcome EssbasicClient::DescribeCancelFlowsTask(const DescribeCancelFlowsTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCancelFlowsTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCancelFlowsTaskResponse rsp = DescribeCancelFlowsTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCancelFlowsTaskOutcome(rsp);
        else
            return DescribeCancelFlowsTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeCancelFlowsTaskOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeCancelFlowsTaskAsync(const DescribeCancelFlowsTaskRequest& request, const DescribeCancelFlowsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCancelFlowsTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeCancelFlowsTaskOutcomeCallable EssbasicClient::DescribeCancelFlowsTaskCallable(const DescribeCancelFlowsTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCancelFlowsTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeCancelFlowsTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::DescribeChannelFlowEvidenceReportOutcome EssbasicClient::DescribeChannelFlowEvidenceReport(const DescribeChannelFlowEvidenceReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChannelFlowEvidenceReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChannelFlowEvidenceReportResponse rsp = DescribeChannelFlowEvidenceReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChannelFlowEvidenceReportOutcome(rsp);
        else
            return DescribeChannelFlowEvidenceReportOutcome(o.GetError());
    }
    else
    {
        return DescribeChannelFlowEvidenceReportOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeChannelFlowEvidenceReportAsync(const DescribeChannelFlowEvidenceReportRequest& request, const DescribeChannelFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChannelFlowEvidenceReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeChannelFlowEvidenceReportOutcomeCallable EssbasicClient::DescribeChannelFlowEvidenceReportCallable(const DescribeChannelFlowEvidenceReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChannelFlowEvidenceReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeChannelFlowEvidenceReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::DescribeChannelOrganizationsOutcome EssbasicClient::DescribeChannelOrganizations(const DescribeChannelOrganizationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChannelOrganizations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChannelOrganizationsResponse rsp = DescribeChannelOrganizationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChannelOrganizationsOutcome(rsp);
        else
            return DescribeChannelOrganizationsOutcome(o.GetError());
    }
    else
    {
        return DescribeChannelOrganizationsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeChannelOrganizationsAsync(const DescribeChannelOrganizationsRequest& request, const DescribeChannelOrganizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChannelOrganizations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeChannelOrganizationsOutcomeCallable EssbasicClient::DescribeChannelOrganizationsCallable(const DescribeChannelOrganizationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChannelOrganizationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeChannelOrganizations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::DescribeChannelSealPolicyWorkflowUrlOutcome EssbasicClient::DescribeChannelSealPolicyWorkflowUrl(const DescribeChannelSealPolicyWorkflowUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChannelSealPolicyWorkflowUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChannelSealPolicyWorkflowUrlResponse rsp = DescribeChannelSealPolicyWorkflowUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChannelSealPolicyWorkflowUrlOutcome(rsp);
        else
            return DescribeChannelSealPolicyWorkflowUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeChannelSealPolicyWorkflowUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeChannelSealPolicyWorkflowUrlAsync(const DescribeChannelSealPolicyWorkflowUrlRequest& request, const DescribeChannelSealPolicyWorkflowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChannelSealPolicyWorkflowUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeChannelSealPolicyWorkflowUrlOutcomeCallable EssbasicClient::DescribeChannelSealPolicyWorkflowUrlCallable(const DescribeChannelSealPolicyWorkflowUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChannelSealPolicyWorkflowUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeChannelSealPolicyWorkflowUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::DescribeExtendedServiceAuthDetailOutcome EssbasicClient::DescribeExtendedServiceAuthDetail(const DescribeExtendedServiceAuthDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtendedServiceAuthDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtendedServiceAuthDetailResponse rsp = DescribeExtendedServiceAuthDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtendedServiceAuthDetailOutcome(rsp);
        else
            return DescribeExtendedServiceAuthDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeExtendedServiceAuthDetailOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeExtendedServiceAuthDetailAsync(const DescribeExtendedServiceAuthDetailRequest& request, const DescribeExtendedServiceAuthDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExtendedServiceAuthDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeExtendedServiceAuthDetailOutcomeCallable EssbasicClient::DescribeExtendedServiceAuthDetailCallable(const DescribeExtendedServiceAuthDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExtendedServiceAuthDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeExtendedServiceAuthDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::DescribeExtendedServiceAuthInfoOutcome EssbasicClient::DescribeExtendedServiceAuthInfo(const DescribeExtendedServiceAuthInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtendedServiceAuthInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtendedServiceAuthInfoResponse rsp = DescribeExtendedServiceAuthInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtendedServiceAuthInfoOutcome(rsp);
        else
            return DescribeExtendedServiceAuthInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeExtendedServiceAuthInfoOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeExtendedServiceAuthInfoAsync(const DescribeExtendedServiceAuthInfoRequest& request, const DescribeExtendedServiceAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExtendedServiceAuthInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeExtendedServiceAuthInfoOutcomeCallable EssbasicClient::DescribeExtendedServiceAuthInfoCallable(const DescribeExtendedServiceAuthInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExtendedServiceAuthInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeExtendedServiceAuthInfo(request);
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

EssbasicClient::DescribeUserFlowTypeOutcome EssbasicClient::DescribeUserFlowType(const DescribeUserFlowTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserFlowType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserFlowTypeResponse rsp = DescribeUserFlowTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserFlowTypeOutcome(rsp);
        else
            return DescribeUserFlowTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeUserFlowTypeOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeUserFlowTypeAsync(const DescribeUserFlowTypeRequest& request, const DescribeUserFlowTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserFlowType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeUserFlowTypeOutcomeCallable EssbasicClient::DescribeUserFlowTypeCallable(const DescribeUserFlowTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserFlowTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserFlowType(request);
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

EssbasicClient::ModifyExtendedServiceOutcome EssbasicClient::ModifyExtendedService(const ModifyExtendedServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyExtendedService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyExtendedServiceResponse rsp = ModifyExtendedServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyExtendedServiceOutcome(rsp);
        else
            return ModifyExtendedServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyExtendedServiceOutcome(outcome.GetError());
    }
}

void EssbasicClient::ModifyExtendedServiceAsync(const ModifyExtendedServiceRequest& request, const ModifyExtendedServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyExtendedService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ModifyExtendedServiceOutcomeCallable EssbasicClient::ModifyExtendedServiceCallable(const ModifyExtendedServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyExtendedServiceOutcome()>>(
        [this, request]()
        {
            return this->ModifyExtendedService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ModifyFlowDeadlineOutcome EssbasicClient::ModifyFlowDeadline(const ModifyFlowDeadlineRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFlowDeadline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFlowDeadlineResponse rsp = ModifyFlowDeadlineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFlowDeadlineOutcome(rsp);
        else
            return ModifyFlowDeadlineOutcome(o.GetError());
    }
    else
    {
        return ModifyFlowDeadlineOutcome(outcome.GetError());
    }
}

void EssbasicClient::ModifyFlowDeadlineAsync(const ModifyFlowDeadlineRequest& request, const ModifyFlowDeadlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFlowDeadline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ModifyFlowDeadlineOutcomeCallable EssbasicClient::ModifyFlowDeadlineCallable(const ModifyFlowDeadlineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFlowDeadlineOutcome()>>(
        [this, request]()
        {
            return this->ModifyFlowDeadline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::ModifyPartnerAutoSignAuthUrlOutcome EssbasicClient::ModifyPartnerAutoSignAuthUrl(const ModifyPartnerAutoSignAuthUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPartnerAutoSignAuthUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPartnerAutoSignAuthUrlResponse rsp = ModifyPartnerAutoSignAuthUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPartnerAutoSignAuthUrlOutcome(rsp);
        else
            return ModifyPartnerAutoSignAuthUrlOutcome(o.GetError());
    }
    else
    {
        return ModifyPartnerAutoSignAuthUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::ModifyPartnerAutoSignAuthUrlAsync(const ModifyPartnerAutoSignAuthUrlRequest& request, const ModifyPartnerAutoSignAuthUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPartnerAutoSignAuthUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ModifyPartnerAutoSignAuthUrlOutcomeCallable EssbasicClient::ModifyPartnerAutoSignAuthUrlCallable(const ModifyPartnerAutoSignAuthUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPartnerAutoSignAuthUrlOutcome()>>(
        [this, request]()
        {
            return this->ModifyPartnerAutoSignAuthUrl(request);
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

EssbasicClient::OperateTemplateOutcome EssbasicClient::OperateTemplate(const OperateTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "OperateTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OperateTemplateResponse rsp = OperateTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OperateTemplateOutcome(rsp);
        else
            return OperateTemplateOutcome(o.GetError());
    }
    else
    {
        return OperateTemplateOutcome(outcome.GetError());
    }
}

void EssbasicClient::OperateTemplateAsync(const OperateTemplateRequest& request, const OperateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OperateTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::OperateTemplateOutcomeCallable EssbasicClient::OperateTemplateCallable(const OperateTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OperateTemplateOutcome()>>(
        [this, request]()
        {
            return this->OperateTemplate(request);
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

