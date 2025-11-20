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

#include <tencentcloud/mmps/v20200710/MmpsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mmps::V20200710;
using namespace TencentCloud::Mmps::V20200710::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-07-10";
    const string ENDPOINT = "mmps.tencentcloudapi.com";
}

MmpsClient::MmpsClient(const Credential &credential, const string &region) :
    MmpsClient(credential, region, ClientProfile())
{
}

MmpsClient::MmpsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MmpsClient::CreateAppScanTaskOutcome MmpsClient::CreateAppScanTask(const CreateAppScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAppScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppScanTaskResponse rsp = CreateAppScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppScanTaskOutcome(rsp);
        else
            return CreateAppScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAppScanTaskOutcome(outcome.GetError());
    }
}

void MmpsClient::CreateAppScanTaskAsync(const CreateAppScanTaskRequest& request, const CreateAppScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAppScanTaskRequest&;
    using Resp = CreateAppScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAppScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MmpsClient::CreateAppScanTaskOutcomeCallable MmpsClient::CreateAppScanTaskCallable(const CreateAppScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAppScanTaskOutcome>>();
    CreateAppScanTaskAsync(
    request,
    [prom](
        const MmpsClient*,
        const CreateAppScanTaskRequest&,
        CreateAppScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MmpsClient::CreateAppScanTaskRepeatOutcome MmpsClient::CreateAppScanTaskRepeat(const CreateAppScanTaskRepeatRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAppScanTaskRepeat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppScanTaskRepeatResponse rsp = CreateAppScanTaskRepeatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppScanTaskRepeatOutcome(rsp);
        else
            return CreateAppScanTaskRepeatOutcome(o.GetError());
    }
    else
    {
        return CreateAppScanTaskRepeatOutcome(outcome.GetError());
    }
}

void MmpsClient::CreateAppScanTaskRepeatAsync(const CreateAppScanTaskRepeatRequest& request, const CreateAppScanTaskRepeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAppScanTaskRepeatRequest&;
    using Resp = CreateAppScanTaskRepeatResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAppScanTaskRepeat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MmpsClient::CreateAppScanTaskRepeatOutcomeCallable MmpsClient::CreateAppScanTaskRepeatCallable(const CreateAppScanTaskRepeatRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAppScanTaskRepeatOutcome>>();
    CreateAppScanTaskRepeatAsync(
    request,
    [prom](
        const MmpsClient*,
        const CreateAppScanTaskRepeatRequest&,
        CreateAppScanTaskRepeatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MmpsClient::CreateFlySecMiniAppProfessionalScanTaskOutcome MmpsClient::CreateFlySecMiniAppProfessionalScanTask(const CreateFlySecMiniAppProfessionalScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlySecMiniAppProfessionalScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlySecMiniAppProfessionalScanTaskResponse rsp = CreateFlySecMiniAppProfessionalScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlySecMiniAppProfessionalScanTaskOutcome(rsp);
        else
            return CreateFlySecMiniAppProfessionalScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateFlySecMiniAppProfessionalScanTaskOutcome(outcome.GetError());
    }
}

void MmpsClient::CreateFlySecMiniAppProfessionalScanTaskAsync(const CreateFlySecMiniAppProfessionalScanTaskRequest& request, const CreateFlySecMiniAppProfessionalScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlySecMiniAppProfessionalScanTaskRequest&;
    using Resp = CreateFlySecMiniAppProfessionalScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlySecMiniAppProfessionalScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MmpsClient::CreateFlySecMiniAppProfessionalScanTaskOutcomeCallable MmpsClient::CreateFlySecMiniAppProfessionalScanTaskCallable(const CreateFlySecMiniAppProfessionalScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlySecMiniAppProfessionalScanTaskOutcome>>();
    CreateFlySecMiniAppProfessionalScanTaskAsync(
    request,
    [prom](
        const MmpsClient*,
        const CreateFlySecMiniAppProfessionalScanTaskRequest&,
        CreateFlySecMiniAppProfessionalScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MmpsClient::CreateFlySecMiniAppScanTaskOutcome MmpsClient::CreateFlySecMiniAppScanTask(const CreateFlySecMiniAppScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlySecMiniAppScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlySecMiniAppScanTaskResponse rsp = CreateFlySecMiniAppScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlySecMiniAppScanTaskOutcome(rsp);
        else
            return CreateFlySecMiniAppScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateFlySecMiniAppScanTaskOutcome(outcome.GetError());
    }
}

void MmpsClient::CreateFlySecMiniAppScanTaskAsync(const CreateFlySecMiniAppScanTaskRequest& request, const CreateFlySecMiniAppScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlySecMiniAppScanTaskRequest&;
    using Resp = CreateFlySecMiniAppScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlySecMiniAppScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MmpsClient::CreateFlySecMiniAppScanTaskOutcomeCallable MmpsClient::CreateFlySecMiniAppScanTaskCallable(const CreateFlySecMiniAppScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlySecMiniAppScanTaskOutcome>>();
    CreateFlySecMiniAppScanTaskAsync(
    request,
    [prom](
        const MmpsClient*,
        const CreateFlySecMiniAppScanTaskRequest&,
        CreateFlySecMiniAppScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MmpsClient::CreateFlySecMiniAppScanTaskRepeatOutcome MmpsClient::CreateFlySecMiniAppScanTaskRepeat(const CreateFlySecMiniAppScanTaskRepeatRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlySecMiniAppScanTaskRepeat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlySecMiniAppScanTaskRepeatResponse rsp = CreateFlySecMiniAppScanTaskRepeatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlySecMiniAppScanTaskRepeatOutcome(rsp);
        else
            return CreateFlySecMiniAppScanTaskRepeatOutcome(o.GetError());
    }
    else
    {
        return CreateFlySecMiniAppScanTaskRepeatOutcome(outcome.GetError());
    }
}

void MmpsClient::CreateFlySecMiniAppScanTaskRepeatAsync(const CreateFlySecMiniAppScanTaskRepeatRequest& request, const CreateFlySecMiniAppScanTaskRepeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlySecMiniAppScanTaskRepeatRequest&;
    using Resp = CreateFlySecMiniAppScanTaskRepeatResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlySecMiniAppScanTaskRepeat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MmpsClient::CreateFlySecMiniAppScanTaskRepeatOutcomeCallable MmpsClient::CreateFlySecMiniAppScanTaskRepeatCallable(const CreateFlySecMiniAppScanTaskRepeatRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlySecMiniAppScanTaskRepeatOutcome>>();
    CreateFlySecMiniAppScanTaskRepeatAsync(
    request,
    [prom](
        const MmpsClient*,
        const CreateFlySecMiniAppScanTaskRepeatRequest&,
        CreateFlySecMiniAppScanTaskRepeatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MmpsClient::DescribeBasicDiagnosisResourceUsageInfoOutcome MmpsClient::DescribeBasicDiagnosisResourceUsageInfo(const DescribeBasicDiagnosisResourceUsageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBasicDiagnosisResourceUsageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBasicDiagnosisResourceUsageInfoResponse rsp = DescribeBasicDiagnosisResourceUsageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBasicDiagnosisResourceUsageInfoOutcome(rsp);
        else
            return DescribeBasicDiagnosisResourceUsageInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeBasicDiagnosisResourceUsageInfoOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeBasicDiagnosisResourceUsageInfoAsync(const DescribeBasicDiagnosisResourceUsageInfoRequest& request, const DescribeBasicDiagnosisResourceUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBasicDiagnosisResourceUsageInfoRequest&;
    using Resp = DescribeBasicDiagnosisResourceUsageInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBasicDiagnosisResourceUsageInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MmpsClient::DescribeBasicDiagnosisResourceUsageInfoOutcomeCallable MmpsClient::DescribeBasicDiagnosisResourceUsageInfoCallable(const DescribeBasicDiagnosisResourceUsageInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBasicDiagnosisResourceUsageInfoOutcome>>();
    DescribeBasicDiagnosisResourceUsageInfoAsync(
    request,
    [prom](
        const MmpsClient*,
        const DescribeBasicDiagnosisResourceUsageInfoRequest&,
        DescribeBasicDiagnosisResourceUsageInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MmpsClient::DescribeFlySecMiniAppReportUrlOutcome MmpsClient::DescribeFlySecMiniAppReportUrl(const DescribeFlySecMiniAppReportUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlySecMiniAppReportUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlySecMiniAppReportUrlResponse rsp = DescribeFlySecMiniAppReportUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlySecMiniAppReportUrlOutcome(rsp);
        else
            return DescribeFlySecMiniAppReportUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeFlySecMiniAppReportUrlOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeFlySecMiniAppReportUrlAsync(const DescribeFlySecMiniAppReportUrlRequest& request, const DescribeFlySecMiniAppReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlySecMiniAppReportUrlRequest&;
    using Resp = DescribeFlySecMiniAppReportUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlySecMiniAppReportUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MmpsClient::DescribeFlySecMiniAppReportUrlOutcomeCallable MmpsClient::DescribeFlySecMiniAppReportUrlCallable(const DescribeFlySecMiniAppReportUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlySecMiniAppReportUrlOutcome>>();
    DescribeFlySecMiniAppReportUrlAsync(
    request,
    [prom](
        const MmpsClient*,
        const DescribeFlySecMiniAppReportUrlRequest&,
        DescribeFlySecMiniAppReportUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MmpsClient::DescribeFlySecMiniAppScanReportListOutcome MmpsClient::DescribeFlySecMiniAppScanReportList(const DescribeFlySecMiniAppScanReportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlySecMiniAppScanReportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlySecMiniAppScanReportListResponse rsp = DescribeFlySecMiniAppScanReportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlySecMiniAppScanReportListOutcome(rsp);
        else
            return DescribeFlySecMiniAppScanReportListOutcome(o.GetError());
    }
    else
    {
        return DescribeFlySecMiniAppScanReportListOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeFlySecMiniAppScanReportListAsync(const DescribeFlySecMiniAppScanReportListRequest& request, const DescribeFlySecMiniAppScanReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlySecMiniAppScanReportListRequest&;
    using Resp = DescribeFlySecMiniAppScanReportListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlySecMiniAppScanReportList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MmpsClient::DescribeFlySecMiniAppScanReportListOutcomeCallable MmpsClient::DescribeFlySecMiniAppScanReportListCallable(const DescribeFlySecMiniAppScanReportListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlySecMiniAppScanReportListOutcome>>();
    DescribeFlySecMiniAppScanReportListAsync(
    request,
    [prom](
        const MmpsClient*,
        const DescribeFlySecMiniAppScanReportListRequest&,
        DescribeFlySecMiniAppScanReportListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MmpsClient::DescribeFlySecMiniAppScanTaskListOutcome MmpsClient::DescribeFlySecMiniAppScanTaskList(const DescribeFlySecMiniAppScanTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlySecMiniAppScanTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlySecMiniAppScanTaskListResponse rsp = DescribeFlySecMiniAppScanTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlySecMiniAppScanTaskListOutcome(rsp);
        else
            return DescribeFlySecMiniAppScanTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeFlySecMiniAppScanTaskListOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeFlySecMiniAppScanTaskListAsync(const DescribeFlySecMiniAppScanTaskListRequest& request, const DescribeFlySecMiniAppScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlySecMiniAppScanTaskListRequest&;
    using Resp = DescribeFlySecMiniAppScanTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlySecMiniAppScanTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MmpsClient::DescribeFlySecMiniAppScanTaskListOutcomeCallable MmpsClient::DescribeFlySecMiniAppScanTaskListCallable(const DescribeFlySecMiniAppScanTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlySecMiniAppScanTaskListOutcome>>();
    DescribeFlySecMiniAppScanTaskListAsync(
    request,
    [prom](
        const MmpsClient*,
        const DescribeFlySecMiniAppScanTaskListRequest&,
        DescribeFlySecMiniAppScanTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MmpsClient::DescribeFlySecMiniAppScanTaskParamOutcome MmpsClient::DescribeFlySecMiniAppScanTaskParam(const DescribeFlySecMiniAppScanTaskParamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlySecMiniAppScanTaskParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlySecMiniAppScanTaskParamResponse rsp = DescribeFlySecMiniAppScanTaskParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlySecMiniAppScanTaskParamOutcome(rsp);
        else
            return DescribeFlySecMiniAppScanTaskParamOutcome(o.GetError());
    }
    else
    {
        return DescribeFlySecMiniAppScanTaskParamOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeFlySecMiniAppScanTaskParamAsync(const DescribeFlySecMiniAppScanTaskParamRequest& request, const DescribeFlySecMiniAppScanTaskParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlySecMiniAppScanTaskParamRequest&;
    using Resp = DescribeFlySecMiniAppScanTaskParamResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlySecMiniAppScanTaskParam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MmpsClient::DescribeFlySecMiniAppScanTaskParamOutcomeCallable MmpsClient::DescribeFlySecMiniAppScanTaskParamCallable(const DescribeFlySecMiniAppScanTaskParamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlySecMiniAppScanTaskParamOutcome>>();
    DescribeFlySecMiniAppScanTaskParamAsync(
    request,
    [prom](
        const MmpsClient*,
        const DescribeFlySecMiniAppScanTaskParamRequest&,
        DescribeFlySecMiniAppScanTaskParamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MmpsClient::DescribeFlySecMiniAppScanTaskStatusOutcome MmpsClient::DescribeFlySecMiniAppScanTaskStatus(const DescribeFlySecMiniAppScanTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlySecMiniAppScanTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlySecMiniAppScanTaskStatusResponse rsp = DescribeFlySecMiniAppScanTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlySecMiniAppScanTaskStatusOutcome(rsp);
        else
            return DescribeFlySecMiniAppScanTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeFlySecMiniAppScanTaskStatusOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeFlySecMiniAppScanTaskStatusAsync(const DescribeFlySecMiniAppScanTaskStatusRequest& request, const DescribeFlySecMiniAppScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlySecMiniAppScanTaskStatusRequest&;
    using Resp = DescribeFlySecMiniAppScanTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlySecMiniAppScanTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MmpsClient::DescribeFlySecMiniAppScanTaskStatusOutcomeCallable MmpsClient::DescribeFlySecMiniAppScanTaskStatusCallable(const DescribeFlySecMiniAppScanTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlySecMiniAppScanTaskStatusOutcome>>();
    DescribeFlySecMiniAppScanTaskStatusAsync(
    request,
    [prom](
        const MmpsClient*,
        const DescribeFlySecMiniAppScanTaskStatusRequest&,
        DescribeFlySecMiniAppScanTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MmpsClient::DescribeResourceUsageInfoOutcome MmpsClient::DescribeResourceUsageInfo(const DescribeResourceUsageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceUsageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceUsageInfoResponse rsp = DescribeResourceUsageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceUsageInfoOutcome(rsp);
        else
            return DescribeResourceUsageInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceUsageInfoOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeResourceUsageInfoAsync(const DescribeResourceUsageInfoRequest& request, const DescribeResourceUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceUsageInfoRequest&;
    using Resp = DescribeResourceUsageInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceUsageInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MmpsClient::DescribeResourceUsageInfoOutcomeCallable MmpsClient::DescribeResourceUsageInfoCallable(const DescribeResourceUsageInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceUsageInfoOutcome>>();
    DescribeResourceUsageInfoAsync(
    request,
    [prom](
        const MmpsClient*,
        const DescribeResourceUsageInfoRequest&,
        DescribeResourceUsageInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MmpsClient::DescribeScanTaskListOutcome MmpsClient::DescribeScanTaskList(const DescribeScanTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanTaskListResponse rsp = DescribeScanTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanTaskListOutcome(rsp);
        else
            return DescribeScanTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeScanTaskListOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeScanTaskListAsync(const DescribeScanTaskListRequest& request, const DescribeScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanTaskListRequest&;
    using Resp = DescribeScanTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MmpsClient::DescribeScanTaskListOutcomeCallable MmpsClient::DescribeScanTaskListCallable(const DescribeScanTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanTaskListOutcome>>();
    DescribeScanTaskListAsync(
    request,
    [prom](
        const MmpsClient*,
        const DescribeScanTaskListRequest&,
        DescribeScanTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MmpsClient::DescribeScanTaskReportUrlOutcome MmpsClient::DescribeScanTaskReportUrl(const DescribeScanTaskReportUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanTaskReportUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanTaskReportUrlResponse rsp = DescribeScanTaskReportUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanTaskReportUrlOutcome(rsp);
        else
            return DescribeScanTaskReportUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeScanTaskReportUrlOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeScanTaskReportUrlAsync(const DescribeScanTaskReportUrlRequest& request, const DescribeScanTaskReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanTaskReportUrlRequest&;
    using Resp = DescribeScanTaskReportUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanTaskReportUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MmpsClient::DescribeScanTaskReportUrlOutcomeCallable MmpsClient::DescribeScanTaskReportUrlCallable(const DescribeScanTaskReportUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanTaskReportUrlOutcome>>();
    DescribeScanTaskReportUrlAsync(
    request,
    [prom](
        const MmpsClient*,
        const DescribeScanTaskReportUrlRequest&,
        DescribeScanTaskReportUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MmpsClient::DescribeScanTaskStatusOutcome MmpsClient::DescribeScanTaskStatus(const DescribeScanTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanTaskStatusResponse rsp = DescribeScanTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanTaskStatusOutcome(rsp);
        else
            return DescribeScanTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeScanTaskStatusOutcome(outcome.GetError());
    }
}

void MmpsClient::DescribeScanTaskStatusAsync(const DescribeScanTaskStatusRequest& request, const DescribeScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanTaskStatusRequest&;
    using Resp = DescribeScanTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MmpsClient::DescribeScanTaskStatusOutcomeCallable MmpsClient::DescribeScanTaskStatusCallable(const DescribeScanTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanTaskStatusOutcome>>();
    DescribeScanTaskStatusAsync(
    request,
    [prom](
        const MmpsClient*,
        const DescribeScanTaskStatusRequest&,
        DescribeScanTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

