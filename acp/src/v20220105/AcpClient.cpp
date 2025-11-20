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

#include <tencentcloud/acp/v20220105/AcpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Acp::V20220105;
using namespace TencentCloud::Acp::V20220105::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-01-05";
    const string ENDPOINT = "acp.tencentcloudapi.com";
}

AcpClient::AcpClient(const Credential &credential, const string &region) :
    AcpClient(credential, region, ClientProfile())
{
}

AcpClient::AcpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AcpClient::CreateAppScanTaskOutcome AcpClient::CreateAppScanTask(const CreateAppScanTaskRequest &request)
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

void AcpClient::CreateAppScanTaskAsync(const CreateAppScanTaskRequest& request, const CreateAppScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AcpClient::CreateAppScanTaskOutcomeCallable AcpClient::CreateAppScanTaskCallable(const CreateAppScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAppScanTaskOutcome>>();
    CreateAppScanTaskAsync(
    request,
    [prom](
        const AcpClient*,
        const CreateAppScanTaskRequest&,
        CreateAppScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AcpClient::CreateAppScanTaskRepeatOutcome AcpClient::CreateAppScanTaskRepeat(const CreateAppScanTaskRepeatRequest &request)
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

void AcpClient::CreateAppScanTaskRepeatAsync(const CreateAppScanTaskRepeatRequest& request, const CreateAppScanTaskRepeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AcpClient::CreateAppScanTaskRepeatOutcomeCallable AcpClient::CreateAppScanTaskRepeatCallable(const CreateAppScanTaskRepeatRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAppScanTaskRepeatOutcome>>();
    CreateAppScanTaskRepeatAsync(
    request,
    [prom](
        const AcpClient*,
        const CreateAppScanTaskRepeatRequest&,
        CreateAppScanTaskRepeatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AcpClient::DescribeChannelTaskReportUrlOutcome AcpClient::DescribeChannelTaskReportUrl(const DescribeChannelTaskReportUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChannelTaskReportUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChannelTaskReportUrlResponse rsp = DescribeChannelTaskReportUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChannelTaskReportUrlOutcome(rsp);
        else
            return DescribeChannelTaskReportUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeChannelTaskReportUrlOutcome(outcome.GetError());
    }
}

void AcpClient::DescribeChannelTaskReportUrlAsync(const DescribeChannelTaskReportUrlRequest& request, const DescribeChannelTaskReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChannelTaskReportUrlRequest&;
    using Resp = DescribeChannelTaskReportUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChannelTaskReportUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AcpClient::DescribeChannelTaskReportUrlOutcomeCallable AcpClient::DescribeChannelTaskReportUrlCallable(const DescribeChannelTaskReportUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChannelTaskReportUrlOutcome>>();
    DescribeChannelTaskReportUrlAsync(
    request,
    [prom](
        const AcpClient*,
        const DescribeChannelTaskReportUrlRequest&,
        DescribeChannelTaskReportUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AcpClient::DescribeFileTicketOutcome AcpClient::DescribeFileTicket(const DescribeFileTicketRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileTicket");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileTicketResponse rsp = DescribeFileTicketResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileTicketOutcome(rsp);
        else
            return DescribeFileTicketOutcome(o.GetError());
    }
    else
    {
        return DescribeFileTicketOutcome(outcome.GetError());
    }
}

void AcpClient::DescribeFileTicketAsync(const DescribeFileTicketRequest& request, const DescribeFileTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileTicketRequest&;
    using Resp = DescribeFileTicketResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileTicket", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AcpClient::DescribeFileTicketOutcomeCallable AcpClient::DescribeFileTicketCallable(const DescribeFileTicketRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileTicketOutcome>>();
    DescribeFileTicketAsync(
    request,
    [prom](
        const AcpClient*,
        const DescribeFileTicketRequest&,
        DescribeFileTicketOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AcpClient::DescribeResourceUsageInfoOutcome AcpClient::DescribeResourceUsageInfo(const DescribeResourceUsageInfoRequest &request)
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

void AcpClient::DescribeResourceUsageInfoAsync(const DescribeResourceUsageInfoRequest& request, const DescribeResourceUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AcpClient::DescribeResourceUsageInfoOutcomeCallable AcpClient::DescribeResourceUsageInfoCallable(const DescribeResourceUsageInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceUsageInfoOutcome>>();
    DescribeResourceUsageInfoAsync(
    request,
    [prom](
        const AcpClient*,
        const DescribeResourceUsageInfoRequest&,
        DescribeResourceUsageInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AcpClient::DescribeScanTaskListOutcome AcpClient::DescribeScanTaskList(const DescribeScanTaskListRequest &request)
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

void AcpClient::DescribeScanTaskListAsync(const DescribeScanTaskListRequest& request, const DescribeScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AcpClient::DescribeScanTaskListOutcomeCallable AcpClient::DescribeScanTaskListCallable(const DescribeScanTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanTaskListOutcome>>();
    DescribeScanTaskListAsync(
    request,
    [prom](
        const AcpClient*,
        const DescribeScanTaskListRequest&,
        DescribeScanTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AcpClient::DescribeScanTaskReportUrlOutcome AcpClient::DescribeScanTaskReportUrl(const DescribeScanTaskReportUrlRequest &request)
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

void AcpClient::DescribeScanTaskReportUrlAsync(const DescribeScanTaskReportUrlRequest& request, const DescribeScanTaskReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AcpClient::DescribeScanTaskReportUrlOutcomeCallable AcpClient::DescribeScanTaskReportUrlCallable(const DescribeScanTaskReportUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanTaskReportUrlOutcome>>();
    DescribeScanTaskReportUrlAsync(
    request,
    [prom](
        const AcpClient*,
        const DescribeScanTaskReportUrlRequest&,
        DescribeScanTaskReportUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AcpClient::DescribeScanTaskStatusOutcome AcpClient::DescribeScanTaskStatus(const DescribeScanTaskStatusRequest &request)
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

void AcpClient::DescribeScanTaskStatusAsync(const DescribeScanTaskStatusRequest& request, const DescribeScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AcpClient::DescribeScanTaskStatusOutcomeCallable AcpClient::DescribeScanTaskStatusCallable(const DescribeScanTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanTaskStatusOutcome>>();
    DescribeScanTaskStatusAsync(
    request,
    [prom](
        const AcpClient*,
        const DescribeScanTaskStatusRequest&,
        DescribeScanTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

