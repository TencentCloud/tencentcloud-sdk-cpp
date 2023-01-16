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

#include <tencentcloud/ess/v20201111/EssClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ess::V20201111;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-11-11";
    const string ENDPOINT = "ess.tencentcloudapi.com";
}

EssClient::EssClient(const Credential &credential, const string &region) :
    EssClient(credential, region, ClientProfile())
{
}

EssClient::EssClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EssClient::CancelFlowOutcome EssClient::CancelFlow(const CancelFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CancelFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelFlowResponse rsp = CancelFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelFlowOutcome(rsp);
        else
            return CancelFlowOutcome(o.GetError());
    }
    else
    {
        return CancelFlowOutcome(outcome.GetError());
    }
}

void EssClient::CancelFlowAsync(const CancelFlowRequest& request, const CancelFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CancelFlowOutcomeCallable EssClient::CancelFlowCallable(const CancelFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelFlowOutcome()>>(
        [this, request]()
        {
            return this->CancelFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CancelMultiFlowSignQRCodeOutcome EssClient::CancelMultiFlowSignQRCode(const CancelMultiFlowSignQRCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CancelMultiFlowSignQRCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelMultiFlowSignQRCodeResponse rsp = CancelMultiFlowSignQRCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelMultiFlowSignQRCodeOutcome(rsp);
        else
            return CancelMultiFlowSignQRCodeOutcome(o.GetError());
    }
    else
    {
        return CancelMultiFlowSignQRCodeOutcome(outcome.GetError());
    }
}

void EssClient::CancelMultiFlowSignQRCodeAsync(const CancelMultiFlowSignQRCodeRequest& request, const CancelMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelMultiFlowSignQRCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CancelMultiFlowSignQRCodeOutcomeCallable EssClient::CancelMultiFlowSignQRCodeCallable(const CancelMultiFlowSignQRCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelMultiFlowSignQRCodeOutcome()>>(
        [this, request]()
        {
            return this->CancelMultiFlowSignQRCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateBatchCancelFlowUrlOutcome EssClient::CreateBatchCancelFlowUrl(const CreateBatchCancelFlowUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchCancelFlowUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchCancelFlowUrlResponse rsp = CreateBatchCancelFlowUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchCancelFlowUrlOutcome(rsp);
        else
            return CreateBatchCancelFlowUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchCancelFlowUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchCancelFlowUrlAsync(const CreateBatchCancelFlowUrlRequest& request, const CreateBatchCancelFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBatchCancelFlowUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateBatchCancelFlowUrlOutcomeCallable EssClient::CreateBatchCancelFlowUrlCallable(const CreateBatchCancelFlowUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBatchCancelFlowUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateBatchCancelFlowUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateConvertTaskApiOutcome EssClient::CreateConvertTaskApi(const CreateConvertTaskApiRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConvertTaskApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConvertTaskApiResponse rsp = CreateConvertTaskApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConvertTaskApiOutcome(rsp);
        else
            return CreateConvertTaskApiOutcome(o.GetError());
    }
    else
    {
        return CreateConvertTaskApiOutcome(outcome.GetError());
    }
}

void EssClient::CreateConvertTaskApiAsync(const CreateConvertTaskApiRequest& request, const CreateConvertTaskApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConvertTaskApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateConvertTaskApiOutcomeCallable EssClient::CreateConvertTaskApiCallable(const CreateConvertTaskApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConvertTaskApiOutcome()>>(
        [this, request]()
        {
            return this->CreateConvertTaskApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateDocumentOutcome EssClient::CreateDocument(const CreateDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDocumentResponse rsp = CreateDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDocumentOutcome(rsp);
        else
            return CreateDocumentOutcome(o.GetError());
    }
    else
    {
        return CreateDocumentOutcome(outcome.GetError());
    }
}

void EssClient::CreateDocumentAsync(const CreateDocumentRequest& request, const CreateDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDocument(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateDocumentOutcomeCallable EssClient::CreateDocumentCallable(const CreateDocumentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDocumentOutcome()>>(
        [this, request]()
        {
            return this->CreateDocument(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowOutcome EssClient::CreateFlow(const CreateFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowResponse rsp = CreateFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowOutcome(rsp);
        else
            return CreateFlowOutcome(o.GetError());
    }
    else
    {
        return CreateFlowOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowAsync(const CreateFlowRequest& request, const CreateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowOutcomeCallable EssClient::CreateFlowCallable(const CreateFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowOutcome()>>(
        [this, request]()
        {
            return this->CreateFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowApproversOutcome EssClient::CreateFlowApprovers(const CreateFlowApproversRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowApprovers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowApproversResponse rsp = CreateFlowApproversResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowApproversOutcome(rsp);
        else
            return CreateFlowApproversOutcome(o.GetError());
    }
    else
    {
        return CreateFlowApproversOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowApproversAsync(const CreateFlowApproversRequest& request, const CreateFlowApproversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowApprovers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowApproversOutcomeCallable EssClient::CreateFlowApproversCallable(const CreateFlowApproversRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowApproversOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowApprovers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowByFilesOutcome EssClient::CreateFlowByFiles(const CreateFlowByFilesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowByFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowByFilesResponse rsp = CreateFlowByFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowByFilesOutcome(rsp);
        else
            return CreateFlowByFilesOutcome(o.GetError());
    }
    else
    {
        return CreateFlowByFilesOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowByFilesAsync(const CreateFlowByFilesRequest& request, const CreateFlowByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowByFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowByFilesOutcomeCallable EssClient::CreateFlowByFilesCallable(const CreateFlowByFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowByFilesOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowByFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowEvidenceReportOutcome EssClient::CreateFlowEvidenceReport(const CreateFlowEvidenceReportRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowEvidenceReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowEvidenceReportResponse rsp = CreateFlowEvidenceReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowEvidenceReportOutcome(rsp);
        else
            return CreateFlowEvidenceReportOutcome(o.GetError());
    }
    else
    {
        return CreateFlowEvidenceReportOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowEvidenceReportAsync(const CreateFlowEvidenceReportRequest& request, const CreateFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowEvidenceReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowEvidenceReportOutcomeCallable EssClient::CreateFlowEvidenceReportCallable(const CreateFlowEvidenceReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowEvidenceReportOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowEvidenceReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowSignReviewOutcome EssClient::CreateFlowSignReview(const CreateFlowSignReviewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowSignReview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowSignReviewResponse rsp = CreateFlowSignReviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowSignReviewOutcome(rsp);
        else
            return CreateFlowSignReviewOutcome(o.GetError());
    }
    else
    {
        return CreateFlowSignReviewOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowSignReviewAsync(const CreateFlowSignReviewRequest& request, const CreateFlowSignReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowSignReview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowSignReviewOutcomeCallable EssClient::CreateFlowSignReviewCallable(const CreateFlowSignReviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowSignReviewOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowSignReview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowSignUrlOutcome EssClient::CreateFlowSignUrl(const CreateFlowSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowSignUrlResponse rsp = CreateFlowSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowSignUrlOutcome(rsp);
        else
            return CreateFlowSignUrlOutcome(o.GetError());
    }
    else
    {
        return CreateFlowSignUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowSignUrlAsync(const CreateFlowSignUrlRequest& request, const CreateFlowSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowSignUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowSignUrlOutcomeCallable EssClient::CreateFlowSignUrlCallable(const CreateFlowSignUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowSignUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowSignUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateIntegrationEmployeesOutcome EssClient::CreateIntegrationEmployees(const CreateIntegrationEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrationEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrationEmployeesResponse rsp = CreateIntegrationEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrationEmployeesOutcome(rsp);
        else
            return CreateIntegrationEmployeesOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrationEmployeesOutcome(outcome.GetError());
    }
}

void EssClient::CreateIntegrationEmployeesAsync(const CreateIntegrationEmployeesRequest& request, const CreateIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIntegrationEmployees(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateIntegrationEmployeesOutcomeCallable EssClient::CreateIntegrationEmployeesCallable(const CreateIntegrationEmployeesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIntegrationEmployeesOutcome()>>(
        [this, request]()
        {
            return this->CreateIntegrationEmployees(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateMultiFlowSignQRCodeOutcome EssClient::CreateMultiFlowSignQRCode(const CreateMultiFlowSignQRCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMultiFlowSignQRCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMultiFlowSignQRCodeResponse rsp = CreateMultiFlowSignQRCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMultiFlowSignQRCodeOutcome(rsp);
        else
            return CreateMultiFlowSignQRCodeOutcome(o.GetError());
    }
    else
    {
        return CreateMultiFlowSignQRCodeOutcome(outcome.GetError());
    }
}

void EssClient::CreateMultiFlowSignQRCodeAsync(const CreateMultiFlowSignQRCodeRequest& request, const CreateMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMultiFlowSignQRCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateMultiFlowSignQRCodeOutcomeCallable EssClient::CreateMultiFlowSignQRCodeCallable(const CreateMultiFlowSignQRCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMultiFlowSignQRCodeOutcome()>>(
        [this, request]()
        {
            return this->CreateMultiFlowSignQRCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreatePrepareFlowOutcome EssClient::CreatePrepareFlow(const CreatePrepareFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrepareFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrepareFlowResponse rsp = CreatePrepareFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrepareFlowOutcome(rsp);
        else
            return CreatePrepareFlowOutcome(o.GetError());
    }
    else
    {
        return CreatePrepareFlowOutcome(outcome.GetError());
    }
}

void EssClient::CreatePrepareFlowAsync(const CreatePrepareFlowRequest& request, const CreatePrepareFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrepareFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreatePrepareFlowOutcomeCallable EssClient::CreatePrepareFlowCallable(const CreatePrepareFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrepareFlowOutcome()>>(
        [this, request]()
        {
            return this->CreatePrepareFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateSchemeUrlOutcome EssClient::CreateSchemeUrl(const CreateSchemeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSchemeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSchemeUrlResponse rsp = CreateSchemeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSchemeUrlOutcome(rsp);
        else
            return CreateSchemeUrlOutcome(o.GetError());
    }
    else
    {
        return CreateSchemeUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateSchemeUrlAsync(const CreateSchemeUrlRequest& request, const CreateSchemeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSchemeUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateSchemeUrlOutcomeCallable EssClient::CreateSchemeUrlCallable(const CreateSchemeUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSchemeUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateSchemeUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DeleteIntegrationEmployeesOutcome EssClient::DeleteIntegrationEmployees(const DeleteIntegrationEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIntegrationEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIntegrationEmployeesResponse rsp = DeleteIntegrationEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIntegrationEmployeesOutcome(rsp);
        else
            return DeleteIntegrationEmployeesOutcome(o.GetError());
    }
    else
    {
        return DeleteIntegrationEmployeesOutcome(outcome.GetError());
    }
}

void EssClient::DeleteIntegrationEmployeesAsync(const DeleteIntegrationEmployeesRequest& request, const DeleteIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIntegrationEmployees(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DeleteIntegrationEmployeesOutcomeCallable EssClient::DeleteIntegrationEmployeesCallable(const DeleteIntegrationEmployeesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIntegrationEmployeesOutcome()>>(
        [this, request]()
        {
            return this->DeleteIntegrationEmployees(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeFileUrlsOutcome EssClient::DescribeFileUrls(const DescribeFileUrlsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileUrls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileUrlsResponse rsp = DescribeFileUrlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileUrlsOutcome(rsp);
        else
            return DescribeFileUrlsOutcome(o.GetError());
    }
    else
    {
        return DescribeFileUrlsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFileUrlsAsync(const DescribeFileUrlsRequest& request, const DescribeFileUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileUrls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeFileUrlsOutcomeCallable EssClient::DescribeFileUrlsCallable(const DescribeFileUrlsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileUrlsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileUrls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeFlowBriefsOutcome EssClient::DescribeFlowBriefs(const DescribeFlowBriefsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowBriefs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowBriefsResponse rsp = DescribeFlowBriefsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowBriefsOutcome(rsp);
        else
            return DescribeFlowBriefsOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowBriefsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFlowBriefsAsync(const DescribeFlowBriefsRequest& request, const DescribeFlowBriefsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowBriefs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeFlowBriefsOutcomeCallable EssClient::DescribeFlowBriefsCallable(const DescribeFlowBriefsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowBriefsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowBriefs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeFlowEvidenceReportOutcome EssClient::DescribeFlowEvidenceReport(const DescribeFlowEvidenceReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowEvidenceReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowEvidenceReportResponse rsp = DescribeFlowEvidenceReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowEvidenceReportOutcome(rsp);
        else
            return DescribeFlowEvidenceReportOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowEvidenceReportOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFlowEvidenceReportAsync(const DescribeFlowEvidenceReportRequest& request, const DescribeFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowEvidenceReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeFlowEvidenceReportOutcomeCallable EssClient::DescribeFlowEvidenceReportCallable(const DescribeFlowEvidenceReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowEvidenceReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowEvidenceReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeFlowInfoOutcome EssClient::DescribeFlowInfo(const DescribeFlowInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowInfoResponse rsp = DescribeFlowInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowInfoOutcome(rsp);
        else
            return DescribeFlowInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowInfoOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFlowInfoAsync(const DescribeFlowInfoRequest& request, const DescribeFlowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeFlowInfoOutcomeCallable EssClient::DescribeFlowInfoCallable(const DescribeFlowInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeFlowTemplatesOutcome EssClient::DescribeFlowTemplates(const DescribeFlowTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowTemplatesResponse rsp = DescribeFlowTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowTemplatesOutcome(rsp);
        else
            return DescribeFlowTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowTemplatesOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFlowTemplatesAsync(const DescribeFlowTemplatesRequest& request, const DescribeFlowTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeFlowTemplatesOutcomeCallable EssClient::DescribeFlowTemplatesCallable(const DescribeFlowTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeIntegrationEmployeesOutcome EssClient::DescribeIntegrationEmployees(const DescribeIntegrationEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationEmployeesResponse rsp = DescribeIntegrationEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationEmployeesOutcome(rsp);
        else
            return DescribeIntegrationEmployeesOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationEmployeesOutcome(outcome.GetError());
    }
}

void EssClient::DescribeIntegrationEmployeesAsync(const DescribeIntegrationEmployeesRequest& request, const DescribeIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIntegrationEmployees(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeIntegrationEmployeesOutcomeCallable EssClient::DescribeIntegrationEmployeesCallable(const DescribeIntegrationEmployeesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIntegrationEmployeesOutcome()>>(
        [this, request]()
        {
            return this->DescribeIntegrationEmployees(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeOrganizationSealsOutcome EssClient::DescribeOrganizationSeals(const DescribeOrganizationSealsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationSeals");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationSealsResponse rsp = DescribeOrganizationSealsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationSealsOutcome(rsp);
        else
            return DescribeOrganizationSealsOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationSealsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeOrganizationSealsAsync(const DescribeOrganizationSealsRequest& request, const DescribeOrganizationSealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationSeals(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeOrganizationSealsOutcomeCallable EssClient::DescribeOrganizationSealsCallable(const DescribeOrganizationSealsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationSealsOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationSeals(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeThirdPartyAuthCodeOutcome EssClient::DescribeThirdPartyAuthCode(const DescribeThirdPartyAuthCodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeThirdPartyAuthCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeThirdPartyAuthCodeResponse rsp = DescribeThirdPartyAuthCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeThirdPartyAuthCodeOutcome(rsp);
        else
            return DescribeThirdPartyAuthCodeOutcome(o.GetError());
    }
    else
    {
        return DescribeThirdPartyAuthCodeOutcome(outcome.GetError());
    }
}

void EssClient::DescribeThirdPartyAuthCodeAsync(const DescribeThirdPartyAuthCodeRequest& request, const DescribeThirdPartyAuthCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeThirdPartyAuthCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeThirdPartyAuthCodeOutcomeCallable EssClient::DescribeThirdPartyAuthCodeCallable(const DescribeThirdPartyAuthCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeThirdPartyAuthCodeOutcome()>>(
        [this, request]()
        {
            return this->DescribeThirdPartyAuthCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::GetTaskResultApiOutcome EssClient::GetTaskResultApi(const GetTaskResultApiRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskResultApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskResultApiResponse rsp = GetTaskResultApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskResultApiOutcome(rsp);
        else
            return GetTaskResultApiOutcome(o.GetError());
    }
    else
    {
        return GetTaskResultApiOutcome(outcome.GetError());
    }
}

void EssClient::GetTaskResultApiAsync(const GetTaskResultApiRequest& request, const GetTaskResultApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTaskResultApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::GetTaskResultApiOutcomeCallable EssClient::GetTaskResultApiCallable(const GetTaskResultApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTaskResultApiOutcome()>>(
        [this, request]()
        {
            return this->GetTaskResultApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::StartFlowOutcome EssClient::StartFlow(const StartFlowRequest &request)
{
    auto outcome = MakeRequest(request, "StartFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartFlowResponse rsp = StartFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartFlowOutcome(rsp);
        else
            return StartFlowOutcome(o.GetError());
    }
    else
    {
        return StartFlowOutcome(outcome.GetError());
    }
}

void EssClient::StartFlowAsync(const StartFlowRequest& request, const StartFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::StartFlowOutcomeCallable EssClient::StartFlowCallable(const StartFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartFlowOutcome()>>(
        [this, request]()
        {
            return this->StartFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::UploadFilesOutcome EssClient::UploadFiles(const UploadFilesRequest &request)
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

void EssClient::UploadFilesAsync(const UploadFilesRequest& request, const UploadFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::UploadFilesOutcomeCallable EssClient::UploadFilesCallable(const UploadFilesRequest &request)
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

EssClient::VerifyPdfOutcome EssClient::VerifyPdf(const VerifyPdfRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyPdf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyPdfResponse rsp = VerifyPdfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyPdfOutcome(rsp);
        else
            return VerifyPdfOutcome(o.GetError());
    }
    else
    {
        return VerifyPdfOutcome(outcome.GetError());
    }
}

void EssClient::VerifyPdfAsync(const VerifyPdfRequest& request, const VerifyPdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyPdf(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::VerifyPdfOutcomeCallable EssClient::VerifyPdfCallable(const VerifyPdfRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyPdfOutcome()>>(
        [this, request]()
        {
            return this->VerifyPdf(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

