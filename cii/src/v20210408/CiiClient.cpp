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

#include <tencentcloud/cii/v20210408/CiiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cii::V20210408;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-04-08";
    const string ENDPOINT = "cii.tencentcloudapi.com";
}

CiiClient::CiiClient(const Credential &credential, const string &region) :
    CiiClient(credential, region, ClientProfile())
{
}

CiiClient::CiiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CiiClient::AddSubStructureTasksOutcome CiiClient::AddSubStructureTasks(const AddSubStructureTasksRequest &request)
{
    auto outcome = MakeRequest(request, "AddSubStructureTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddSubStructureTasksResponse rsp = AddSubStructureTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddSubStructureTasksOutcome(rsp);
        else
            return AddSubStructureTasksOutcome(o.GetError());
    }
    else
    {
        return AddSubStructureTasksOutcome(outcome.GetError());
    }
}

void CiiClient::AddSubStructureTasksAsync(const AddSubStructureTasksRequest& request, const AddSubStructureTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddSubStructureTasksRequest&;
    using Resp = AddSubStructureTasksResponse;

    DoRequestAsync<Req, Resp>(
        "AddSubStructureTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::AddSubStructureTasksOutcomeCallable CiiClient::AddSubStructureTasksCallable(const AddSubStructureTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddSubStructureTasksOutcome>>();
    AddSubStructureTasksAsync(
    request,
    [prom](
        const CiiClient*,
        const AddSubStructureTasksRequest&,
        AddSubStructureTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CiiClient::CreateAutoClassifyStructureTaskOutcome CiiClient::CreateAutoClassifyStructureTask(const CreateAutoClassifyStructureTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAutoClassifyStructureTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAutoClassifyStructureTaskResponse rsp = CreateAutoClassifyStructureTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAutoClassifyStructureTaskOutcome(rsp);
        else
            return CreateAutoClassifyStructureTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAutoClassifyStructureTaskOutcome(outcome.GetError());
    }
}

void CiiClient::CreateAutoClassifyStructureTaskAsync(const CreateAutoClassifyStructureTaskRequest& request, const CreateAutoClassifyStructureTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAutoClassifyStructureTaskRequest&;
    using Resp = CreateAutoClassifyStructureTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAutoClassifyStructureTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::CreateAutoClassifyStructureTaskOutcomeCallable CiiClient::CreateAutoClassifyStructureTaskCallable(const CreateAutoClassifyStructureTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAutoClassifyStructureTaskOutcome>>();
    CreateAutoClassifyStructureTaskAsync(
    request,
    [prom](
        const CiiClient*,
        const CreateAutoClassifyStructureTaskRequest&,
        CreateAutoClassifyStructureTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CiiClient::CreateStructureTaskOutcome CiiClient::CreateStructureTask(const CreateStructureTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStructureTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStructureTaskResponse rsp = CreateStructureTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStructureTaskOutcome(rsp);
        else
            return CreateStructureTaskOutcome(o.GetError());
    }
    else
    {
        return CreateStructureTaskOutcome(outcome.GetError());
    }
}

void CiiClient::CreateStructureTaskAsync(const CreateStructureTaskRequest& request, const CreateStructureTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStructureTaskRequest&;
    using Resp = CreateStructureTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStructureTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::CreateStructureTaskOutcomeCallable CiiClient::CreateStructureTaskCallable(const CreateStructureTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStructureTaskOutcome>>();
    CreateStructureTaskAsync(
    request,
    [prom](
        const CiiClient*,
        const CreateStructureTaskRequest&,
        CreateStructureTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CiiClient::CreateUnderwriteTaskByIdOutcome CiiClient::CreateUnderwriteTaskById(const CreateUnderwriteTaskByIdRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUnderwriteTaskById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUnderwriteTaskByIdResponse rsp = CreateUnderwriteTaskByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUnderwriteTaskByIdOutcome(rsp);
        else
            return CreateUnderwriteTaskByIdOutcome(o.GetError());
    }
    else
    {
        return CreateUnderwriteTaskByIdOutcome(outcome.GetError());
    }
}

void CiiClient::CreateUnderwriteTaskByIdAsync(const CreateUnderwriteTaskByIdRequest& request, const CreateUnderwriteTaskByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUnderwriteTaskByIdRequest&;
    using Resp = CreateUnderwriteTaskByIdResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUnderwriteTaskById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::CreateUnderwriteTaskByIdOutcomeCallable CiiClient::CreateUnderwriteTaskByIdCallable(const CreateUnderwriteTaskByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUnderwriteTaskByIdOutcome>>();
    CreateUnderwriteTaskByIdAsync(
    request,
    [prom](
        const CiiClient*,
        const CreateUnderwriteTaskByIdRequest&,
        CreateUnderwriteTaskByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CiiClient::DescribeMachineUnderwriteOutcome CiiClient::DescribeMachineUnderwrite(const DescribeMachineUnderwriteRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineUnderwrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineUnderwriteResponse rsp = DescribeMachineUnderwriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineUnderwriteOutcome(rsp);
        else
            return DescribeMachineUnderwriteOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineUnderwriteOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeMachineUnderwriteAsync(const DescribeMachineUnderwriteRequest& request, const DescribeMachineUnderwriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineUnderwriteRequest&;
    using Resp = DescribeMachineUnderwriteResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineUnderwrite", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::DescribeMachineUnderwriteOutcomeCallable CiiClient::DescribeMachineUnderwriteCallable(const DescribeMachineUnderwriteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineUnderwriteOutcome>>();
    DescribeMachineUnderwriteAsync(
    request,
    [prom](
        const CiiClient*,
        const DescribeMachineUnderwriteRequest&,
        DescribeMachineUnderwriteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CiiClient::DescribeQualityScoreOutcome CiiClient::DescribeQualityScore(const DescribeQualityScoreRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQualityScore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQualityScoreResponse rsp = DescribeQualityScoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQualityScoreOutcome(rsp);
        else
            return DescribeQualityScoreOutcome(o.GetError());
    }
    else
    {
        return DescribeQualityScoreOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeQualityScoreAsync(const DescribeQualityScoreRequest& request, const DescribeQualityScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQualityScoreRequest&;
    using Resp = DescribeQualityScoreResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQualityScore", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::DescribeQualityScoreOutcomeCallable CiiClient::DescribeQualityScoreCallable(const DescribeQualityScoreRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQualityScoreOutcome>>();
    DescribeQualityScoreAsync(
    request,
    [prom](
        const CiiClient*,
        const DescribeQualityScoreRequest&,
        DescribeQualityScoreOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CiiClient::DescribeReportClassifyOutcome CiiClient::DescribeReportClassify(const DescribeReportClassifyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReportClassify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReportClassifyResponse rsp = DescribeReportClassifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReportClassifyOutcome(rsp);
        else
            return DescribeReportClassifyOutcome(o.GetError());
    }
    else
    {
        return DescribeReportClassifyOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeReportClassifyAsync(const DescribeReportClassifyRequest& request, const DescribeReportClassifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReportClassifyRequest&;
    using Resp = DescribeReportClassifyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReportClassify", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::DescribeReportClassifyOutcomeCallable CiiClient::DescribeReportClassifyCallable(const DescribeReportClassifyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReportClassifyOutcome>>();
    DescribeReportClassifyAsync(
    request,
    [prom](
        const CiiClient*,
        const DescribeReportClassifyRequest&,
        DescribeReportClassifyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CiiClient::DescribeStructCompareDataOutcome CiiClient::DescribeStructCompareData(const DescribeStructCompareDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStructCompareData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStructCompareDataResponse rsp = DescribeStructCompareDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStructCompareDataOutcome(rsp);
        else
            return DescribeStructCompareDataOutcome(o.GetError());
    }
    else
    {
        return DescribeStructCompareDataOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeStructCompareDataAsync(const DescribeStructCompareDataRequest& request, const DescribeStructCompareDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStructCompareDataRequest&;
    using Resp = DescribeStructCompareDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStructCompareData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::DescribeStructCompareDataOutcomeCallable CiiClient::DescribeStructCompareDataCallable(const DescribeStructCompareDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStructCompareDataOutcome>>();
    DescribeStructCompareDataAsync(
    request,
    [prom](
        const CiiClient*,
        const DescribeStructCompareDataRequest&,
        DescribeStructCompareDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CiiClient::DescribeStructureDifferenceOutcome CiiClient::DescribeStructureDifference(const DescribeStructureDifferenceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStructureDifference");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStructureDifferenceResponse rsp = DescribeStructureDifferenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStructureDifferenceOutcome(rsp);
        else
            return DescribeStructureDifferenceOutcome(o.GetError());
    }
    else
    {
        return DescribeStructureDifferenceOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeStructureDifferenceAsync(const DescribeStructureDifferenceRequest& request, const DescribeStructureDifferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStructureDifferenceRequest&;
    using Resp = DescribeStructureDifferenceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStructureDifference", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::DescribeStructureDifferenceOutcomeCallable CiiClient::DescribeStructureDifferenceCallable(const DescribeStructureDifferenceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStructureDifferenceOutcome>>();
    DescribeStructureDifferenceAsync(
    request,
    [prom](
        const CiiClient*,
        const DescribeStructureDifferenceRequest&,
        DescribeStructureDifferenceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CiiClient::DescribeStructureResultOutcome CiiClient::DescribeStructureResult(const DescribeStructureResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStructureResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStructureResultResponse rsp = DescribeStructureResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStructureResultOutcome(rsp);
        else
            return DescribeStructureResultOutcome(o.GetError());
    }
    else
    {
        return DescribeStructureResultOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeStructureResultAsync(const DescribeStructureResultRequest& request, const DescribeStructureResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStructureResultRequest&;
    using Resp = DescribeStructureResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStructureResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::DescribeStructureResultOutcomeCallable CiiClient::DescribeStructureResultCallable(const DescribeStructureResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStructureResultOutcome>>();
    DescribeStructureResultAsync(
    request,
    [prom](
        const CiiClient*,
        const DescribeStructureResultRequest&,
        DescribeStructureResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CiiClient::DescribeStructureTaskResultOutcome CiiClient::DescribeStructureTaskResult(const DescribeStructureTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStructureTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStructureTaskResultResponse rsp = DescribeStructureTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStructureTaskResultOutcome(rsp);
        else
            return DescribeStructureTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeStructureTaskResultOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeStructureTaskResultAsync(const DescribeStructureTaskResultRequest& request, const DescribeStructureTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStructureTaskResultRequest&;
    using Resp = DescribeStructureTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStructureTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::DescribeStructureTaskResultOutcomeCallable CiiClient::DescribeStructureTaskResultCallable(const DescribeStructureTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStructureTaskResultOutcome>>();
    DescribeStructureTaskResultAsync(
    request,
    [prom](
        const CiiClient*,
        const DescribeStructureTaskResultRequest&,
        DescribeStructureTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CiiClient::DescribeUnderwriteTaskOutcome CiiClient::DescribeUnderwriteTask(const DescribeUnderwriteTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnderwriteTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnderwriteTaskResponse rsp = DescribeUnderwriteTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnderwriteTaskOutcome(rsp);
        else
            return DescribeUnderwriteTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeUnderwriteTaskOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeUnderwriteTaskAsync(const DescribeUnderwriteTaskRequest& request, const DescribeUnderwriteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnderwriteTaskRequest&;
    using Resp = DescribeUnderwriteTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUnderwriteTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::DescribeUnderwriteTaskOutcomeCallable CiiClient::DescribeUnderwriteTaskCallable(const DescribeUnderwriteTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnderwriteTaskOutcome>>();
    DescribeUnderwriteTaskAsync(
    request,
    [prom](
        const CiiClient*,
        const DescribeUnderwriteTaskRequest&,
        DescribeUnderwriteTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CiiClient::UploadMedicalFileOutcome CiiClient::UploadMedicalFile(const UploadMedicalFileRequest &request)
{
    auto outcome = MakeRequest(request, "UploadMedicalFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadMedicalFileResponse rsp = UploadMedicalFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadMedicalFileOutcome(rsp);
        else
            return UploadMedicalFileOutcome(o.GetError());
    }
    else
    {
        return UploadMedicalFileOutcome(outcome.GetError());
    }
}

void CiiClient::UploadMedicalFileAsync(const UploadMedicalFileRequest& request, const UploadMedicalFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadMedicalFileRequest&;
    using Resp = UploadMedicalFileResponse;

    DoRequestAsync<Req, Resp>(
        "UploadMedicalFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiiClient::UploadMedicalFileOutcomeCallable CiiClient::UploadMedicalFileCallable(const UploadMedicalFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadMedicalFileOutcome>>();
    UploadMedicalFileAsync(
    request,
    [prom](
        const CiiClient*,
        const UploadMedicalFileRequest&,
        UploadMedicalFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

