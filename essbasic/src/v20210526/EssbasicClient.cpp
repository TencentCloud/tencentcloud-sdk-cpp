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

