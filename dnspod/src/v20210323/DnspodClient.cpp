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

#include <tencentcloud/dnspod/v20210323/DnspodClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dnspod::V20210323;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-03-23";
    const string ENDPOINT = "dnspod.tencentcloudapi.com";
}

DnspodClient::DnspodClient(const Credential &credential, const string &region) :
    DnspodClient(credential, region, ClientProfile())
{
}

DnspodClient::DnspodClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DnspodClient::CheckRecordSnapshotRollbackOutcome DnspodClient::CheckRecordSnapshotRollback(const CheckRecordSnapshotRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "CheckRecordSnapshotRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckRecordSnapshotRollbackResponse rsp = CheckRecordSnapshotRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckRecordSnapshotRollbackOutcome(rsp);
        else
            return CheckRecordSnapshotRollbackOutcome(o.GetError());
    }
    else
    {
        return CheckRecordSnapshotRollbackOutcome(outcome.GetError());
    }
}

void DnspodClient::CheckRecordSnapshotRollbackAsync(const CheckRecordSnapshotRollbackRequest& request, const CheckRecordSnapshotRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckRecordSnapshotRollbackRequest&;
    using Resp = CheckRecordSnapshotRollbackResponse;

    DoRequestAsync<Req, Resp>(
        "CheckRecordSnapshotRollback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CheckRecordSnapshotRollbackOutcomeCallable DnspodClient::CheckRecordSnapshotRollbackCallable(const CheckRecordSnapshotRollbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckRecordSnapshotRollbackOutcome>>();
    CheckRecordSnapshotRollbackAsync(
    request,
    [prom](
        const DnspodClient*,
        const CheckRecordSnapshotRollbackRequest&,
        CheckRecordSnapshotRollbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CheckSnapshotRollbackOutcome DnspodClient::CheckSnapshotRollback(const CheckSnapshotRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "CheckSnapshotRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckSnapshotRollbackResponse rsp = CheckSnapshotRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckSnapshotRollbackOutcome(rsp);
        else
            return CheckSnapshotRollbackOutcome(o.GetError());
    }
    else
    {
        return CheckSnapshotRollbackOutcome(outcome.GetError());
    }
}

void DnspodClient::CheckSnapshotRollbackAsync(const CheckSnapshotRollbackRequest& request, const CheckSnapshotRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckSnapshotRollbackRequest&;
    using Resp = CheckSnapshotRollbackResponse;

    DoRequestAsync<Req, Resp>(
        "CheckSnapshotRollback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CheckSnapshotRollbackOutcomeCallable DnspodClient::CheckSnapshotRollbackCallable(const CheckSnapshotRollbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckSnapshotRollbackOutcome>>();
    CheckSnapshotRollbackAsync(
    request,
    [prom](
        const DnspodClient*,
        const CheckSnapshotRollbackRequest&,
        CheckSnapshotRollbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateDealOutcome DnspodClient::CreateDeal(const CreateDealRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDealResponse rsp = CreateDealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDealOutcome(rsp);
        else
            return CreateDealOutcome(o.GetError());
    }
    else
    {
        return CreateDealOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDealAsync(const CreateDealRequest& request, const CreateDealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDealRequest&;
    using Resp = CreateDealResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateDealOutcomeCallable DnspodClient::CreateDealCallable(const CreateDealRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDealOutcome>>();
    CreateDealAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateDealRequest&,
        CreateDealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateDomainOutcome DnspodClient::CreateDomain(const CreateDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainResponse rsp = CreateDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainOutcome(rsp);
        else
            return CreateDomainOutcome(o.GetError());
    }
    else
    {
        return CreateDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainRequest&;
    using Resp = CreateDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateDomainOutcomeCallable DnspodClient::CreateDomainCallable(const CreateDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainOutcome>>();
    CreateDomainAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateDomainRequest&,
        CreateDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateDomainAliasOutcome DnspodClient::CreateDomainAlias(const CreateDomainAliasRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainAliasResponse rsp = CreateDomainAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainAliasOutcome(rsp);
        else
            return CreateDomainAliasOutcome(o.GetError());
    }
    else
    {
        return CreateDomainAliasOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainAliasAsync(const CreateDomainAliasRequest& request, const CreateDomainAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainAliasRequest&;
    using Resp = CreateDomainAliasResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomainAlias", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateDomainAliasOutcomeCallable DnspodClient::CreateDomainAliasCallable(const CreateDomainAliasRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainAliasOutcome>>();
    CreateDomainAliasAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateDomainAliasRequest&,
        CreateDomainAliasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateDomainBatchOutcome DnspodClient::CreateDomainBatch(const CreateDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainBatchResponse rsp = CreateDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainBatchOutcome(rsp);
        else
            return CreateDomainBatchOutcome(o.GetError());
    }
    else
    {
        return CreateDomainBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainBatchAsync(const CreateDomainBatchRequest& request, const CreateDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainBatchRequest&;
    using Resp = CreateDomainBatchResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomainBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateDomainBatchOutcomeCallable DnspodClient::CreateDomainBatchCallable(const CreateDomainBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainBatchOutcome>>();
    CreateDomainBatchAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateDomainBatchRequest&,
        CreateDomainBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateDomainCustomLineOutcome DnspodClient::CreateDomainCustomLine(const CreateDomainCustomLineRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainCustomLine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainCustomLineResponse rsp = CreateDomainCustomLineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainCustomLineOutcome(rsp);
        else
            return CreateDomainCustomLineOutcome(o.GetError());
    }
    else
    {
        return CreateDomainCustomLineOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainCustomLineAsync(const CreateDomainCustomLineRequest& request, const CreateDomainCustomLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainCustomLineRequest&;
    using Resp = CreateDomainCustomLineResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomainCustomLine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateDomainCustomLineOutcomeCallable DnspodClient::CreateDomainCustomLineCallable(const CreateDomainCustomLineRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainCustomLineOutcome>>();
    CreateDomainCustomLineAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateDomainCustomLineRequest&,
        CreateDomainCustomLineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateDomainGroupOutcome DnspodClient::CreateDomainGroup(const CreateDomainGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainGroupResponse rsp = CreateDomainGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainGroupOutcome(rsp);
        else
            return CreateDomainGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDomainGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainGroupAsync(const CreateDomainGroupRequest& request, const CreateDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainGroupRequest&;
    using Resp = CreateDomainGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomainGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateDomainGroupOutcomeCallable DnspodClient::CreateDomainGroupCallable(const CreateDomainGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainGroupOutcome>>();
    CreateDomainGroupAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateDomainGroupRequest&,
        CreateDomainGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateDomainsAnalyticsFileOutcome DnspodClient::CreateDomainsAnalyticsFile(const CreateDomainsAnalyticsFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainsAnalyticsFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainsAnalyticsFileResponse rsp = CreateDomainsAnalyticsFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainsAnalyticsFileOutcome(rsp);
        else
            return CreateDomainsAnalyticsFileOutcome(o.GetError());
    }
    else
    {
        return CreateDomainsAnalyticsFileOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainsAnalyticsFileAsync(const CreateDomainsAnalyticsFileRequest& request, const CreateDomainsAnalyticsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainsAnalyticsFileRequest&;
    using Resp = CreateDomainsAnalyticsFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomainsAnalyticsFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateDomainsAnalyticsFileOutcomeCallable DnspodClient::CreateDomainsAnalyticsFileCallable(const CreateDomainsAnalyticsFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainsAnalyticsFileOutcome>>();
    CreateDomainsAnalyticsFileAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateDomainsAnalyticsFileRequest&,
        CreateDomainsAnalyticsFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateLineGroupOutcome DnspodClient::CreateLineGroup(const CreateLineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLineGroupResponse rsp = CreateLineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLineGroupOutcome(rsp);
        else
            return CreateLineGroupOutcome(o.GetError());
    }
    else
    {
        return CreateLineGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateLineGroupAsync(const CreateLineGroupRequest& request, const CreateLineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLineGroupRequest&;
    using Resp = CreateLineGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLineGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateLineGroupOutcomeCallable DnspodClient::CreateLineGroupCallable(const CreateLineGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLineGroupOutcome>>();
    CreateLineGroupAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateLineGroupRequest&,
        CreateLineGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateLineGroupCopyOutcome DnspodClient::CreateLineGroupCopy(const CreateLineGroupCopyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLineGroupCopy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLineGroupCopyResponse rsp = CreateLineGroupCopyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLineGroupCopyOutcome(rsp);
        else
            return CreateLineGroupCopyOutcome(o.GetError());
    }
    else
    {
        return CreateLineGroupCopyOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateLineGroupCopyAsync(const CreateLineGroupCopyRequest& request, const CreateLineGroupCopyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLineGroupCopyRequest&;
    using Resp = CreateLineGroupCopyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLineGroupCopy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateLineGroupCopyOutcomeCallable DnspodClient::CreateLineGroupCopyCallable(const CreateLineGroupCopyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLineGroupCopyOutcome>>();
    CreateLineGroupCopyAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateLineGroupCopyRequest&,
        CreateLineGroupCopyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateRecordOutcome DnspodClient::CreateRecord(const CreateRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordResponse rsp = CreateRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordOutcome(rsp);
        else
            return CreateRecordOutcome(o.GetError());
    }
    else
    {
        return CreateRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateRecordAsync(const CreateRecordRequest& request, const CreateRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRecordRequest&;
    using Resp = CreateRecordResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateRecordOutcomeCallable DnspodClient::CreateRecordCallable(const CreateRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRecordOutcome>>();
    CreateRecordAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateRecordRequest&,
        CreateRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateRecordBatchOutcome DnspodClient::CreateRecordBatch(const CreateRecordBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecordBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordBatchResponse rsp = CreateRecordBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordBatchOutcome(rsp);
        else
            return CreateRecordBatchOutcome(o.GetError());
    }
    else
    {
        return CreateRecordBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateRecordBatchAsync(const CreateRecordBatchRequest& request, const CreateRecordBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRecordBatchRequest&;
    using Resp = CreateRecordBatchResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRecordBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateRecordBatchOutcomeCallable DnspodClient::CreateRecordBatchCallable(const CreateRecordBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRecordBatchOutcome>>();
    CreateRecordBatchAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateRecordBatchRequest&,
        CreateRecordBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateRecordGroupOutcome DnspodClient::CreateRecordGroup(const CreateRecordGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecordGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordGroupResponse rsp = CreateRecordGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordGroupOutcome(rsp);
        else
            return CreateRecordGroupOutcome(o.GetError());
    }
    else
    {
        return CreateRecordGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateRecordGroupAsync(const CreateRecordGroupRequest& request, const CreateRecordGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRecordGroupRequest&;
    using Resp = CreateRecordGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRecordGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateRecordGroupOutcomeCallable DnspodClient::CreateRecordGroupCallable(const CreateRecordGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRecordGroupOutcome>>();
    CreateRecordGroupAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateRecordGroupRequest&,
        CreateRecordGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateSnapshotOutcome DnspodClient::CreateSnapshot(const CreateSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSnapshotResponse rsp = CreateSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSnapshotOutcome(rsp);
        else
            return CreateSnapshotOutcome(o.GetError());
    }
    else
    {
        return CreateSnapshotOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSnapshotRequest&;
    using Resp = CreateSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateSnapshotOutcomeCallable DnspodClient::CreateSnapshotCallable(const CreateSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSnapshotOutcome>>();
    CreateSnapshotAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateSnapshotRequest&,
        CreateSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateSubDomainsAnalyticsFileOutcome DnspodClient::CreateSubDomainsAnalyticsFile(const CreateSubDomainsAnalyticsFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubDomainsAnalyticsFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubDomainsAnalyticsFileResponse rsp = CreateSubDomainsAnalyticsFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubDomainsAnalyticsFileOutcome(rsp);
        else
            return CreateSubDomainsAnalyticsFileOutcome(o.GetError());
    }
    else
    {
        return CreateSubDomainsAnalyticsFileOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateSubDomainsAnalyticsFileAsync(const CreateSubDomainsAnalyticsFileRequest& request, const CreateSubDomainsAnalyticsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSubDomainsAnalyticsFileRequest&;
    using Resp = CreateSubDomainsAnalyticsFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSubDomainsAnalyticsFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateSubDomainsAnalyticsFileOutcomeCallable DnspodClient::CreateSubDomainsAnalyticsFileCallable(const CreateSubDomainsAnalyticsFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSubDomainsAnalyticsFileOutcome>>();
    CreateSubDomainsAnalyticsFileAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateSubDomainsAnalyticsFileRequest&,
        CreateSubDomainsAnalyticsFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateSubdomainValidateTXTValueOutcome DnspodClient::CreateSubdomainValidateTXTValue(const CreateSubdomainValidateTXTValueRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubdomainValidateTXTValue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubdomainValidateTXTValueResponse rsp = CreateSubdomainValidateTXTValueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubdomainValidateTXTValueOutcome(rsp);
        else
            return CreateSubdomainValidateTXTValueOutcome(o.GetError());
    }
    else
    {
        return CreateSubdomainValidateTXTValueOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateSubdomainValidateTXTValueAsync(const CreateSubdomainValidateTXTValueRequest& request, const CreateSubdomainValidateTXTValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSubdomainValidateTXTValueRequest&;
    using Resp = CreateSubdomainValidateTXTValueResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSubdomainValidateTXTValue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateSubdomainValidateTXTValueOutcomeCallable DnspodClient::CreateSubdomainValidateTXTValueCallable(const CreateSubdomainValidateTXTValueRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSubdomainValidateTXTValueOutcome>>();
    CreateSubdomainValidateTXTValueAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateSubdomainValidateTXTValueRequest&,
        CreateSubdomainValidateTXTValueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateTXTRecordOutcome DnspodClient::CreateTXTRecord(const CreateTXTRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTXTRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTXTRecordResponse rsp = CreateTXTRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTXTRecordOutcome(rsp);
        else
            return CreateTXTRecordOutcome(o.GetError());
    }
    else
    {
        return CreateTXTRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateTXTRecordAsync(const CreateTXTRecordRequest& request, const CreateTXTRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTXTRecordRequest&;
    using Resp = CreateTXTRecordResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTXTRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateTXTRecordOutcomeCallable DnspodClient::CreateTXTRecordCallable(const CreateTXTRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTXTRecordOutcome>>();
    CreateTXTRecordAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateTXTRecordRequest&,
        CreateTXTRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteDomainOutcome DnspodClient::DeleteDomain(const DeleteDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainResponse rsp = DeleteDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainOutcome(rsp);
        else
            return DeleteDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDomainRequest&;
    using Resp = DeleteDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteDomainOutcomeCallable DnspodClient::DeleteDomainCallable(const DeleteDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDomainOutcome>>();
    DeleteDomainAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteDomainRequest&,
        DeleteDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteDomainAliasOutcome DnspodClient::DeleteDomainAlias(const DeleteDomainAliasRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainAliasResponse rsp = DeleteDomainAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainAliasOutcome(rsp);
        else
            return DeleteDomainAliasOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainAliasOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteDomainAliasAsync(const DeleteDomainAliasRequest& request, const DeleteDomainAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDomainAliasRequest&;
    using Resp = DeleteDomainAliasResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDomainAlias", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteDomainAliasOutcomeCallable DnspodClient::DeleteDomainAliasCallable(const DeleteDomainAliasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDomainAliasOutcome>>();
    DeleteDomainAliasAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteDomainAliasRequest&,
        DeleteDomainAliasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteDomainBatchOutcome DnspodClient::DeleteDomainBatch(const DeleteDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainBatchResponse rsp = DeleteDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainBatchOutcome(rsp);
        else
            return DeleteDomainBatchOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteDomainBatchAsync(const DeleteDomainBatchRequest& request, const DeleteDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDomainBatchRequest&;
    using Resp = DeleteDomainBatchResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDomainBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteDomainBatchOutcomeCallable DnspodClient::DeleteDomainBatchCallable(const DeleteDomainBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDomainBatchOutcome>>();
    DeleteDomainBatchAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteDomainBatchRequest&,
        DeleteDomainBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteDomainCustomLineOutcome DnspodClient::DeleteDomainCustomLine(const DeleteDomainCustomLineRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainCustomLine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainCustomLineResponse rsp = DeleteDomainCustomLineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainCustomLineOutcome(rsp);
        else
            return DeleteDomainCustomLineOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainCustomLineOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteDomainCustomLineAsync(const DeleteDomainCustomLineRequest& request, const DeleteDomainCustomLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDomainCustomLineRequest&;
    using Resp = DeleteDomainCustomLineResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDomainCustomLine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteDomainCustomLineOutcomeCallable DnspodClient::DeleteDomainCustomLineCallable(const DeleteDomainCustomLineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDomainCustomLineOutcome>>();
    DeleteDomainCustomLineAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteDomainCustomLineRequest&,
        DeleteDomainCustomLineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteLineGroupOutcome DnspodClient::DeleteLineGroup(const DeleteLineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLineGroupResponse rsp = DeleteLineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLineGroupOutcome(rsp);
        else
            return DeleteLineGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteLineGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteLineGroupAsync(const DeleteLineGroupRequest& request, const DeleteLineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLineGroupRequest&;
    using Resp = DeleteLineGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLineGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteLineGroupOutcomeCallable DnspodClient::DeleteLineGroupCallable(const DeleteLineGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLineGroupOutcome>>();
    DeleteLineGroupAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteLineGroupRequest&,
        DeleteLineGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteRecordOutcome DnspodClient::DeleteRecord(const DeleteRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordResponse rsp = DeleteRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordOutcome(rsp);
        else
            return DeleteRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteRecordAsync(const DeleteRecordRequest& request, const DeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRecordRequest&;
    using Resp = DeleteRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteRecordOutcomeCallable DnspodClient::DeleteRecordCallable(const DeleteRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRecordOutcome>>();
    DeleteRecordAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteRecordRequest&,
        DeleteRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteRecordBatchOutcome DnspodClient::DeleteRecordBatch(const DeleteRecordBatchRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordBatchResponse rsp = DeleteRecordBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordBatchOutcome(rsp);
        else
            return DeleteRecordBatchOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteRecordBatchAsync(const DeleteRecordBatchRequest& request, const DeleteRecordBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRecordBatchRequest&;
    using Resp = DeleteRecordBatchResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRecordBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteRecordBatchOutcomeCallable DnspodClient::DeleteRecordBatchCallable(const DeleteRecordBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRecordBatchOutcome>>();
    DeleteRecordBatchAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteRecordBatchRequest&,
        DeleteRecordBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteRecordGroupOutcome DnspodClient::DeleteRecordGroup(const DeleteRecordGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordGroupResponse rsp = DeleteRecordGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordGroupOutcome(rsp);
        else
            return DeleteRecordGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteRecordGroupAsync(const DeleteRecordGroupRequest& request, const DeleteRecordGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRecordGroupRequest&;
    using Resp = DeleteRecordGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRecordGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteRecordGroupOutcomeCallable DnspodClient::DeleteRecordGroupCallable(const DeleteRecordGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRecordGroupOutcome>>();
    DeleteRecordGroupAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteRecordGroupRequest&,
        DeleteRecordGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteShareDomainOutcome DnspodClient::DeleteShareDomain(const DeleteShareDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteShareDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteShareDomainResponse rsp = DeleteShareDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteShareDomainOutcome(rsp);
        else
            return DeleteShareDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteShareDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteShareDomainAsync(const DeleteShareDomainRequest& request, const DeleteShareDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteShareDomainRequest&;
    using Resp = DeleteShareDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteShareDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteShareDomainOutcomeCallable DnspodClient::DeleteShareDomainCallable(const DeleteShareDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteShareDomainOutcome>>();
    DeleteShareDomainAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteShareDomainRequest&,
        DeleteShareDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteSnapshotOutcome DnspodClient::DeleteSnapshot(const DeleteSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSnapshotResponse rsp = DeleteSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSnapshotOutcome(rsp);
        else
            return DeleteSnapshotOutcome(o.GetError());
    }
    else
    {
        return DeleteSnapshotOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSnapshotRequest&;
    using Resp = DeleteSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteSnapshotOutcomeCallable DnspodClient::DeleteSnapshotCallable(const DeleteSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSnapshotOutcome>>();
    DeleteSnapshotAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteSnapshotRequest&,
        DeleteSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeBatchTaskOutcome DnspodClient::DescribeBatchTask(const DescribeBatchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchTaskResponse rsp = DescribeBatchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchTaskOutcome(rsp);
        else
            return DescribeBatchTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchTaskOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeBatchTaskAsync(const DescribeBatchTaskRequest& request, const DescribeBatchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBatchTaskRequest&;
    using Resp = DescribeBatchTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBatchTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeBatchTaskOutcomeCallable DnspodClient::DescribeBatchTaskCallable(const DescribeBatchTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBatchTaskOutcome>>();
    DescribeBatchTaskAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeBatchTaskRequest&,
        DescribeBatchTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainOutcome DnspodClient::DescribeDomain(const DescribeDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainResponse rsp = DescribeDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainOutcome(rsp);
        else
            return DescribeDomainOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainRequest&;
    using Resp = DescribeDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainOutcomeCallable DnspodClient::DescribeDomainCallable(const DescribeDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainOutcome>>();
    DescribeDomainAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainRequest&,
        DescribeDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainAliasListOutcome DnspodClient::DescribeDomainAliasList(const DescribeDomainAliasListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainAliasList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainAliasListResponse rsp = DescribeDomainAliasListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainAliasListOutcome(rsp);
        else
            return DescribeDomainAliasListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainAliasListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainAliasListAsync(const DescribeDomainAliasListRequest& request, const DescribeDomainAliasListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainAliasListRequest&;
    using Resp = DescribeDomainAliasListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainAliasList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainAliasListOutcomeCallable DnspodClient::DescribeDomainAliasListCallable(const DescribeDomainAliasListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainAliasListOutcome>>();
    DescribeDomainAliasListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainAliasListRequest&,
        DescribeDomainAliasListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainAnalyticsOutcome DnspodClient::DescribeDomainAnalytics(const DescribeDomainAnalyticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainAnalytics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainAnalyticsResponse rsp = DescribeDomainAnalyticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainAnalyticsOutcome(rsp);
        else
            return DescribeDomainAnalyticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainAnalyticsOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainAnalyticsAsync(const DescribeDomainAnalyticsRequest& request, const DescribeDomainAnalyticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainAnalyticsRequest&;
    using Resp = DescribeDomainAnalyticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainAnalytics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainAnalyticsOutcomeCallable DnspodClient::DescribeDomainAnalyticsCallable(const DescribeDomainAnalyticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainAnalyticsOutcome>>();
    DescribeDomainAnalyticsAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainAnalyticsRequest&,
        DescribeDomainAnalyticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainAndRecordListOutcome DnspodClient::DescribeDomainAndRecordList(const DescribeDomainAndRecordListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainAndRecordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainAndRecordListResponse rsp = DescribeDomainAndRecordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainAndRecordListOutcome(rsp);
        else
            return DescribeDomainAndRecordListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainAndRecordListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainAndRecordListAsync(const DescribeDomainAndRecordListRequest& request, const DescribeDomainAndRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainAndRecordListRequest&;
    using Resp = DescribeDomainAndRecordListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainAndRecordList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainAndRecordListOutcomeCallable DnspodClient::DescribeDomainAndRecordListCallable(const DescribeDomainAndRecordListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainAndRecordListOutcome>>();
    DescribeDomainAndRecordListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainAndRecordListRequest&,
        DescribeDomainAndRecordListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainCustomLineListOutcome DnspodClient::DescribeDomainCustomLineList(const DescribeDomainCustomLineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainCustomLineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainCustomLineListResponse rsp = DescribeDomainCustomLineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainCustomLineListOutcome(rsp);
        else
            return DescribeDomainCustomLineListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainCustomLineListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainCustomLineListAsync(const DescribeDomainCustomLineListRequest& request, const DescribeDomainCustomLineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainCustomLineListRequest&;
    using Resp = DescribeDomainCustomLineListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainCustomLineList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainCustomLineListOutcomeCallable DnspodClient::DescribeDomainCustomLineListCallable(const DescribeDomainCustomLineListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainCustomLineListOutcome>>();
    DescribeDomainCustomLineListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainCustomLineListRequest&,
        DescribeDomainCustomLineListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainFilterListOutcome DnspodClient::DescribeDomainFilterList(const DescribeDomainFilterListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainFilterList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainFilterListResponse rsp = DescribeDomainFilterListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainFilterListOutcome(rsp);
        else
            return DescribeDomainFilterListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainFilterListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainFilterListAsync(const DescribeDomainFilterListRequest& request, const DescribeDomainFilterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainFilterListRequest&;
    using Resp = DescribeDomainFilterListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainFilterList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainFilterListOutcomeCallable DnspodClient::DescribeDomainFilterListCallable(const DescribeDomainFilterListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainFilterListOutcome>>();
    DescribeDomainFilterListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainFilterListRequest&,
        DescribeDomainFilterListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainGroupListOutcome DnspodClient::DescribeDomainGroupList(const DescribeDomainGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainGroupListResponse rsp = DescribeDomainGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainGroupListOutcome(rsp);
        else
            return DescribeDomainGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainGroupListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainGroupListAsync(const DescribeDomainGroupListRequest& request, const DescribeDomainGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainGroupListRequest&;
    using Resp = DescribeDomainGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainGroupListOutcomeCallable DnspodClient::DescribeDomainGroupListCallable(const DescribeDomainGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainGroupListOutcome>>();
    DescribeDomainGroupListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainGroupListRequest&,
        DescribeDomainGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainListOutcome DnspodClient::DescribeDomainList(const DescribeDomainListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainListResponse rsp = DescribeDomainListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainListOutcome(rsp);
        else
            return DescribeDomainListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainListAsync(const DescribeDomainListRequest& request, const DescribeDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainListRequest&;
    using Resp = DescribeDomainListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainListOutcomeCallable DnspodClient::DescribeDomainListCallable(const DescribeDomainListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainListOutcome>>();
    DescribeDomainListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainListRequest&,
        DescribeDomainListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainLogListOutcome DnspodClient::DescribeDomainLogList(const DescribeDomainLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainLogListResponse rsp = DescribeDomainLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainLogListOutcome(rsp);
        else
            return DescribeDomainLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainLogListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainLogListAsync(const DescribeDomainLogListRequest& request, const DescribeDomainLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainLogListRequest&;
    using Resp = DescribeDomainLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainLogListOutcomeCallable DnspodClient::DescribeDomainLogListCallable(const DescribeDomainLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainLogListOutcome>>();
    DescribeDomainLogListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainLogListRequest&,
        DescribeDomainLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainPreviewOutcome DnspodClient::DescribeDomainPreview(const DescribeDomainPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainPreviewResponse rsp = DescribeDomainPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainPreviewOutcome(rsp);
        else
            return DescribeDomainPreviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainPreviewOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainPreviewAsync(const DescribeDomainPreviewRequest& request, const DescribeDomainPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainPreviewRequest&;
    using Resp = DescribeDomainPreviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainPreview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainPreviewOutcomeCallable DnspodClient::DescribeDomainPreviewCallable(const DescribeDomainPreviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainPreviewOutcome>>();
    DescribeDomainPreviewAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainPreviewRequest&,
        DescribeDomainPreviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainPurviewOutcome DnspodClient::DescribeDomainPurview(const DescribeDomainPurviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainPurview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainPurviewResponse rsp = DescribeDomainPurviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainPurviewOutcome(rsp);
        else
            return DescribeDomainPurviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainPurviewOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainPurviewAsync(const DescribeDomainPurviewRequest& request, const DescribeDomainPurviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainPurviewRequest&;
    using Resp = DescribeDomainPurviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainPurview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainPurviewOutcomeCallable DnspodClient::DescribeDomainPurviewCallable(const DescribeDomainPurviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainPurviewOutcome>>();
    DescribeDomainPurviewAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainPurviewRequest&,
        DescribeDomainPurviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainShareInfoOutcome DnspodClient::DescribeDomainShareInfo(const DescribeDomainShareInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainShareInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainShareInfoResponse rsp = DescribeDomainShareInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainShareInfoOutcome(rsp);
        else
            return DescribeDomainShareInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainShareInfoOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainShareInfoAsync(const DescribeDomainShareInfoRequest& request, const DescribeDomainShareInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainShareInfoRequest&;
    using Resp = DescribeDomainShareInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainShareInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainShareInfoOutcomeCallable DnspodClient::DescribeDomainShareInfoCallable(const DescribeDomainShareInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainShareInfoOutcome>>();
    DescribeDomainShareInfoAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainShareInfoRequest&,
        DescribeDomainShareInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainShareUserListOutcome DnspodClient::DescribeDomainShareUserList(const DescribeDomainShareUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainShareUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainShareUserListResponse rsp = DescribeDomainShareUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainShareUserListOutcome(rsp);
        else
            return DescribeDomainShareUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainShareUserListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainShareUserListAsync(const DescribeDomainShareUserListRequest& request, const DescribeDomainShareUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainShareUserListRequest&;
    using Resp = DescribeDomainShareUserListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainShareUserList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainShareUserListOutcomeCallable DnspodClient::DescribeDomainShareUserListCallable(const DescribeDomainShareUserListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainShareUserListOutcome>>();
    DescribeDomainShareUserListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainShareUserListRequest&,
        DescribeDomainShareUserListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainVipListOutcome DnspodClient::DescribeDomainVipList(const DescribeDomainVipListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainVipList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainVipListResponse rsp = DescribeDomainVipListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainVipListOutcome(rsp);
        else
            return DescribeDomainVipListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainVipListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainVipListAsync(const DescribeDomainVipListRequest& request, const DescribeDomainVipListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainVipListRequest&;
    using Resp = DescribeDomainVipListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainVipList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainVipListOutcomeCallable DnspodClient::DescribeDomainVipListCallable(const DescribeDomainVipListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainVipListOutcome>>();
    DescribeDomainVipListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainVipListRequest&,
        DescribeDomainVipListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainWhoisOutcome DnspodClient::DescribeDomainWhois(const DescribeDomainWhoisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainWhois");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainWhoisResponse rsp = DescribeDomainWhoisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainWhoisOutcome(rsp);
        else
            return DescribeDomainWhoisOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainWhoisOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainWhoisAsync(const DescribeDomainWhoisRequest& request, const DescribeDomainWhoisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainWhoisRequest&;
    using Resp = DescribeDomainWhoisResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainWhois", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainWhoisOutcomeCallable DnspodClient::DescribeDomainWhoisCallable(const DescribeDomainWhoisRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainWhoisOutcome>>();
    DescribeDomainWhoisAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainWhoisRequest&,
        DescribeDomainWhoisOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeFileInfoByJobIdOutcome DnspodClient::DescribeFileInfoByJobId(const DescribeFileInfoByJobIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileInfoByJobId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileInfoByJobIdResponse rsp = DescribeFileInfoByJobIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileInfoByJobIdOutcome(rsp);
        else
            return DescribeFileInfoByJobIdOutcome(o.GetError());
    }
    else
    {
        return DescribeFileInfoByJobIdOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeFileInfoByJobIdAsync(const DescribeFileInfoByJobIdRequest& request, const DescribeFileInfoByJobIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileInfoByJobIdRequest&;
    using Resp = DescribeFileInfoByJobIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileInfoByJobId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeFileInfoByJobIdOutcomeCallable DnspodClient::DescribeFileInfoByJobIdCallable(const DescribeFileInfoByJobIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileInfoByJobIdOutcome>>();
    DescribeFileInfoByJobIdAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeFileInfoByJobIdRequest&,
        DescribeFileInfoByJobIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeLineGroupListOutcome DnspodClient::DescribeLineGroupList(const DescribeLineGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLineGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLineGroupListResponse rsp = DescribeLineGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLineGroupListOutcome(rsp);
        else
            return DescribeLineGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeLineGroupListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeLineGroupListAsync(const DescribeLineGroupListRequest& request, const DescribeLineGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLineGroupListRequest&;
    using Resp = DescribeLineGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLineGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeLineGroupListOutcomeCallable DnspodClient::DescribeLineGroupListCallable(const DescribeLineGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLineGroupListOutcome>>();
    DescribeLineGroupListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeLineGroupListRequest&,
        DescribeLineGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribePackageDetailOutcome DnspodClient::DescribePackageDetail(const DescribePackageDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePackageDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePackageDetailResponse rsp = DescribePackageDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePackageDetailOutcome(rsp);
        else
            return DescribePackageDetailOutcome(o.GetError());
    }
    else
    {
        return DescribePackageDetailOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribePackageDetailAsync(const DescribePackageDetailRequest& request, const DescribePackageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePackageDetailRequest&;
    using Resp = DescribePackageDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePackageDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribePackageDetailOutcomeCallable DnspodClient::DescribePackageDetailCallable(const DescribePackageDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePackageDetailOutcome>>();
    DescribePackageDetailAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribePackageDetailRequest&,
        DescribePackageDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeRecordOutcome DnspodClient::DescribeRecord(const DescribeRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordResponse rsp = DescribeRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordOutcome(rsp);
        else
            return DescribeRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordAsync(const DescribeRecordRequest& request, const DescribeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordRequest&;
    using Resp = DescribeRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeRecordOutcomeCallable DnspodClient::DescribeRecordCallable(const DescribeRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordOutcome>>();
    DescribeRecordAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeRecordRequest&,
        DescribeRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeRecordExistExceptDefaultNSOutcome DnspodClient::DescribeRecordExistExceptDefaultNS(const DescribeRecordExistExceptDefaultNSRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordExistExceptDefaultNS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordExistExceptDefaultNSResponse rsp = DescribeRecordExistExceptDefaultNSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordExistExceptDefaultNSOutcome(rsp);
        else
            return DescribeRecordExistExceptDefaultNSOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordExistExceptDefaultNSOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordExistExceptDefaultNSAsync(const DescribeRecordExistExceptDefaultNSRequest& request, const DescribeRecordExistExceptDefaultNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordExistExceptDefaultNSRequest&;
    using Resp = DescribeRecordExistExceptDefaultNSResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordExistExceptDefaultNS", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeRecordExistExceptDefaultNSOutcomeCallable DnspodClient::DescribeRecordExistExceptDefaultNSCallable(const DescribeRecordExistExceptDefaultNSRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordExistExceptDefaultNSOutcome>>();
    DescribeRecordExistExceptDefaultNSAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeRecordExistExceptDefaultNSRequest&,
        DescribeRecordExistExceptDefaultNSOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeRecordFilterListOutcome DnspodClient::DescribeRecordFilterList(const DescribeRecordFilterListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordFilterList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordFilterListResponse rsp = DescribeRecordFilterListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordFilterListOutcome(rsp);
        else
            return DescribeRecordFilterListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordFilterListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordFilterListAsync(const DescribeRecordFilterListRequest& request, const DescribeRecordFilterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordFilterListRequest&;
    using Resp = DescribeRecordFilterListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordFilterList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeRecordFilterListOutcomeCallable DnspodClient::DescribeRecordFilterListCallable(const DescribeRecordFilterListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordFilterListOutcome>>();
    DescribeRecordFilterListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeRecordFilterListRequest&,
        DescribeRecordFilterListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeRecordGroupListOutcome DnspodClient::DescribeRecordGroupList(const DescribeRecordGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordGroupListResponse rsp = DescribeRecordGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordGroupListOutcome(rsp);
        else
            return DescribeRecordGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordGroupListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordGroupListAsync(const DescribeRecordGroupListRequest& request, const DescribeRecordGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordGroupListRequest&;
    using Resp = DescribeRecordGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeRecordGroupListOutcomeCallable DnspodClient::DescribeRecordGroupListCallable(const DescribeRecordGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordGroupListOutcome>>();
    DescribeRecordGroupListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeRecordGroupListRequest&,
        DescribeRecordGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeRecordLineCategoryListOutcome DnspodClient::DescribeRecordLineCategoryList(const DescribeRecordLineCategoryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordLineCategoryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordLineCategoryListResponse rsp = DescribeRecordLineCategoryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordLineCategoryListOutcome(rsp);
        else
            return DescribeRecordLineCategoryListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordLineCategoryListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordLineCategoryListAsync(const DescribeRecordLineCategoryListRequest& request, const DescribeRecordLineCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordLineCategoryListRequest&;
    using Resp = DescribeRecordLineCategoryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordLineCategoryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeRecordLineCategoryListOutcomeCallable DnspodClient::DescribeRecordLineCategoryListCallable(const DescribeRecordLineCategoryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordLineCategoryListOutcome>>();
    DescribeRecordLineCategoryListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeRecordLineCategoryListRequest&,
        DescribeRecordLineCategoryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeRecordLineListOutcome DnspodClient::DescribeRecordLineList(const DescribeRecordLineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordLineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordLineListResponse rsp = DescribeRecordLineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordLineListOutcome(rsp);
        else
            return DescribeRecordLineListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordLineListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordLineListAsync(const DescribeRecordLineListRequest& request, const DescribeRecordLineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordLineListRequest&;
    using Resp = DescribeRecordLineListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordLineList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeRecordLineListOutcomeCallable DnspodClient::DescribeRecordLineListCallable(const DescribeRecordLineListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordLineListOutcome>>();
    DescribeRecordLineListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeRecordLineListRequest&,
        DescribeRecordLineListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeRecordListOutcome DnspodClient::DescribeRecordList(const DescribeRecordListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordListResponse rsp = DescribeRecordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordListOutcome(rsp);
        else
            return DescribeRecordListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordListAsync(const DescribeRecordListRequest& request, const DescribeRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordListRequest&;
    using Resp = DescribeRecordListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeRecordListOutcomeCallable DnspodClient::DescribeRecordListCallable(const DescribeRecordListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordListOutcome>>();
    DescribeRecordListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeRecordListRequest&,
        DescribeRecordListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeRecordSnapshotRollbackResultOutcome DnspodClient::DescribeRecordSnapshotRollbackResult(const DescribeRecordSnapshotRollbackResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordSnapshotRollbackResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordSnapshotRollbackResultResponse rsp = DescribeRecordSnapshotRollbackResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordSnapshotRollbackResultOutcome(rsp);
        else
            return DescribeRecordSnapshotRollbackResultOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordSnapshotRollbackResultOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordSnapshotRollbackResultAsync(const DescribeRecordSnapshotRollbackResultRequest& request, const DescribeRecordSnapshotRollbackResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordSnapshotRollbackResultRequest&;
    using Resp = DescribeRecordSnapshotRollbackResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordSnapshotRollbackResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeRecordSnapshotRollbackResultOutcomeCallable DnspodClient::DescribeRecordSnapshotRollbackResultCallable(const DescribeRecordSnapshotRollbackResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordSnapshotRollbackResultOutcome>>();
    DescribeRecordSnapshotRollbackResultAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeRecordSnapshotRollbackResultRequest&,
        DescribeRecordSnapshotRollbackResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeRecordTypeOutcome DnspodClient::DescribeRecordType(const DescribeRecordTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordTypeResponse rsp = DescribeRecordTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordTypeOutcome(rsp);
        else
            return DescribeRecordTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordTypeOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordTypeAsync(const DescribeRecordTypeRequest& request, const DescribeRecordTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordTypeRequest&;
    using Resp = DescribeRecordTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeRecordTypeOutcomeCallable DnspodClient::DescribeRecordTypeCallable(const DescribeRecordTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordTypeOutcome>>();
    DescribeRecordTypeAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeRecordTypeRequest&,
        DescribeRecordTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeResolveCountOutcome DnspodClient::DescribeResolveCount(const DescribeResolveCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResolveCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResolveCountResponse rsp = DescribeResolveCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResolveCountOutcome(rsp);
        else
            return DescribeResolveCountOutcome(o.GetError());
    }
    else
    {
        return DescribeResolveCountOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeResolveCountAsync(const DescribeResolveCountRequest& request, const DescribeResolveCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResolveCountRequest&;
    using Resp = DescribeResolveCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResolveCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeResolveCountOutcomeCallable DnspodClient::DescribeResolveCountCallable(const DescribeResolveCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResolveCountOutcome>>();
    DescribeResolveCountAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeResolveCountRequest&,
        DescribeResolveCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeSnapshotConfigOutcome DnspodClient::DescribeSnapshotConfig(const DescribeSnapshotConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotConfigResponse rsp = DescribeSnapshotConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotConfigOutcome(rsp);
        else
            return DescribeSnapshotConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotConfigOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeSnapshotConfigAsync(const DescribeSnapshotConfigRequest& request, const DescribeSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotConfigRequest&;
    using Resp = DescribeSnapshotConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeSnapshotConfigOutcomeCallable DnspodClient::DescribeSnapshotConfigCallable(const DescribeSnapshotConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotConfigOutcome>>();
    DescribeSnapshotConfigAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeSnapshotConfigRequest&,
        DescribeSnapshotConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeSnapshotListOutcome DnspodClient::DescribeSnapshotList(const DescribeSnapshotListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotListResponse rsp = DescribeSnapshotListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotListOutcome(rsp);
        else
            return DescribeSnapshotListOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeSnapshotListAsync(const DescribeSnapshotListRequest& request, const DescribeSnapshotListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotListRequest&;
    using Resp = DescribeSnapshotListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeSnapshotListOutcomeCallable DnspodClient::DescribeSnapshotListCallable(const DescribeSnapshotListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotListOutcome>>();
    DescribeSnapshotListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeSnapshotListRequest&,
        DescribeSnapshotListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeSnapshotRollbackResultOutcome DnspodClient::DescribeSnapshotRollbackResult(const DescribeSnapshotRollbackResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotRollbackResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotRollbackResultResponse rsp = DescribeSnapshotRollbackResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotRollbackResultOutcome(rsp);
        else
            return DescribeSnapshotRollbackResultOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotRollbackResultOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeSnapshotRollbackResultAsync(const DescribeSnapshotRollbackResultRequest& request, const DescribeSnapshotRollbackResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotRollbackResultRequest&;
    using Resp = DescribeSnapshotRollbackResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotRollbackResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeSnapshotRollbackResultOutcomeCallable DnspodClient::DescribeSnapshotRollbackResultCallable(const DescribeSnapshotRollbackResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotRollbackResultOutcome>>();
    DescribeSnapshotRollbackResultAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeSnapshotRollbackResultRequest&,
        DescribeSnapshotRollbackResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeSnapshotRollbackTaskOutcome DnspodClient::DescribeSnapshotRollbackTask(const DescribeSnapshotRollbackTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotRollbackTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotRollbackTaskResponse rsp = DescribeSnapshotRollbackTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotRollbackTaskOutcome(rsp);
        else
            return DescribeSnapshotRollbackTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotRollbackTaskOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeSnapshotRollbackTaskAsync(const DescribeSnapshotRollbackTaskRequest& request, const DescribeSnapshotRollbackTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotRollbackTaskRequest&;
    using Resp = DescribeSnapshotRollbackTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotRollbackTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeSnapshotRollbackTaskOutcomeCallable DnspodClient::DescribeSnapshotRollbackTaskCallable(const DescribeSnapshotRollbackTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotRollbackTaskOutcome>>();
    DescribeSnapshotRollbackTaskAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeSnapshotRollbackTaskRequest&,
        DescribeSnapshotRollbackTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeSubdomainAnalyticsOutcome DnspodClient::DescribeSubdomainAnalytics(const DescribeSubdomainAnalyticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubdomainAnalytics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubdomainAnalyticsResponse rsp = DescribeSubdomainAnalyticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubdomainAnalyticsOutcome(rsp);
        else
            return DescribeSubdomainAnalyticsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubdomainAnalyticsOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeSubdomainAnalyticsAsync(const DescribeSubdomainAnalyticsRequest& request, const DescribeSubdomainAnalyticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubdomainAnalyticsRequest&;
    using Resp = DescribeSubdomainAnalyticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubdomainAnalytics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeSubdomainAnalyticsOutcomeCallable DnspodClient::DescribeSubdomainAnalyticsCallable(const DescribeSubdomainAnalyticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubdomainAnalyticsOutcome>>();
    DescribeSubdomainAnalyticsAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeSubdomainAnalyticsRequest&,
        DescribeSubdomainAnalyticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeSubdomainValidateStatusOutcome DnspodClient::DescribeSubdomainValidateStatus(const DescribeSubdomainValidateStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubdomainValidateStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubdomainValidateStatusResponse rsp = DescribeSubdomainValidateStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubdomainValidateStatusOutcome(rsp);
        else
            return DescribeSubdomainValidateStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeSubdomainValidateStatusOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeSubdomainValidateStatusAsync(const DescribeSubdomainValidateStatusRequest& request, const DescribeSubdomainValidateStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubdomainValidateStatusRequest&;
    using Resp = DescribeSubdomainValidateStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubdomainValidateStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeSubdomainValidateStatusOutcomeCallable DnspodClient::DescribeSubdomainValidateStatusCallable(const DescribeSubdomainValidateStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubdomainValidateStatusOutcome>>();
    DescribeSubdomainValidateStatusAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeSubdomainValidateStatusRequest&,
        DescribeSubdomainValidateStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeUserDetailOutcome DnspodClient::DescribeUserDetail(const DescribeUserDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserDetailResponse rsp = DescribeUserDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserDetailOutcome(rsp);
        else
            return DescribeUserDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeUserDetailOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeUserDetailAsync(const DescribeUserDetailRequest& request, const DescribeUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserDetailRequest&;
    using Resp = DescribeUserDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeUserDetailOutcomeCallable DnspodClient::DescribeUserDetailCallable(const DescribeUserDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserDetailOutcome>>();
    DescribeUserDetailAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeUserDetailRequest&,
        DescribeUserDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeVASStatisticOutcome DnspodClient::DescribeVASStatistic(const DescribeVASStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVASStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVASStatisticResponse rsp = DescribeVASStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVASStatisticOutcome(rsp);
        else
            return DescribeVASStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeVASStatisticOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeVASStatisticAsync(const DescribeVASStatisticRequest& request, const DescribeVASStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVASStatisticRequest&;
    using Resp = DescribeVASStatisticResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVASStatistic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeVASStatisticOutcomeCallable DnspodClient::DescribeVASStatisticCallable(const DescribeVASStatisticRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVASStatisticOutcome>>();
    DescribeVASStatisticAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeVASStatisticRequest&,
        DescribeVASStatisticOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeVasListOutcome DnspodClient::DescribeVasList(const DescribeVasListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVasList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVasListResponse rsp = DescribeVasListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVasListOutcome(rsp);
        else
            return DescribeVasListOutcome(o.GetError());
    }
    else
    {
        return DescribeVasListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeVasListAsync(const DescribeVasListRequest& request, const DescribeVasListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVasListRequest&;
    using Resp = DescribeVasListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVasList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeVasListOutcomeCallable DnspodClient::DescribeVasListCallable(const DescribeVasListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVasListOutcome>>();
    DescribeVasListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeVasListRequest&,
        DescribeVasListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DownloadSnapshotOutcome DnspodClient::DownloadSnapshot(const DownloadSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadSnapshotResponse rsp = DownloadSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadSnapshotOutcome(rsp);
        else
            return DownloadSnapshotOutcome(o.GetError());
    }
    else
    {
        return DownloadSnapshotOutcome(outcome.GetError());
    }
}

void DnspodClient::DownloadSnapshotAsync(const DownloadSnapshotRequest& request, const DownloadSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadSnapshotRequest&;
    using Resp = DownloadSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DownloadSnapshotOutcomeCallable DnspodClient::DownloadSnapshotCallable(const DownloadSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadSnapshotOutcome>>();
    DownloadSnapshotAsync(
    request,
    [prom](
        const DnspodClient*,
        const DownloadSnapshotRequest&,
        DownloadSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyDomainCNAMESpeedupStatusBatchOutcome DnspodClient::ModifyDomainCNAMESpeedupStatusBatch(const ModifyDomainCNAMESpeedupStatusBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainCNAMESpeedupStatusBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainCNAMESpeedupStatusBatchResponse rsp = ModifyDomainCNAMESpeedupStatusBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainCNAMESpeedupStatusBatchOutcome(rsp);
        else
            return ModifyDomainCNAMESpeedupStatusBatchOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainCNAMESpeedupStatusBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainCNAMESpeedupStatusBatchAsync(const ModifyDomainCNAMESpeedupStatusBatchRequest& request, const ModifyDomainCNAMESpeedupStatusBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainCNAMESpeedupStatusBatchRequest&;
    using Resp = ModifyDomainCNAMESpeedupStatusBatchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainCNAMESpeedupStatusBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyDomainCNAMESpeedupStatusBatchOutcomeCallable DnspodClient::ModifyDomainCNAMESpeedupStatusBatchCallable(const ModifyDomainCNAMESpeedupStatusBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainCNAMESpeedupStatusBatchOutcome>>();
    ModifyDomainCNAMESpeedupStatusBatchAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyDomainCNAMESpeedupStatusBatchRequest&,
        ModifyDomainCNAMESpeedupStatusBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyDomainCustomLineOutcome DnspodClient::ModifyDomainCustomLine(const ModifyDomainCustomLineRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainCustomLine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainCustomLineResponse rsp = ModifyDomainCustomLineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainCustomLineOutcome(rsp);
        else
            return ModifyDomainCustomLineOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainCustomLineOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainCustomLineAsync(const ModifyDomainCustomLineRequest& request, const ModifyDomainCustomLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainCustomLineRequest&;
    using Resp = ModifyDomainCustomLineResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainCustomLine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyDomainCustomLineOutcomeCallable DnspodClient::ModifyDomainCustomLineCallable(const ModifyDomainCustomLineRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainCustomLineOutcome>>();
    ModifyDomainCustomLineAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyDomainCustomLineRequest&,
        ModifyDomainCustomLineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyDomainLockOutcome DnspodClient::ModifyDomainLock(const ModifyDomainLockRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainLock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainLockResponse rsp = ModifyDomainLockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainLockOutcome(rsp);
        else
            return ModifyDomainLockOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainLockOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainLockAsync(const ModifyDomainLockRequest& request, const ModifyDomainLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainLockRequest&;
    using Resp = ModifyDomainLockResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainLock", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyDomainLockOutcomeCallable DnspodClient::ModifyDomainLockCallable(const ModifyDomainLockRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainLockOutcome>>();
    ModifyDomainLockAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyDomainLockRequest&,
        ModifyDomainLockOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyDomainOwnerOutcome DnspodClient::ModifyDomainOwner(const ModifyDomainOwnerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainOwner");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainOwnerResponse rsp = ModifyDomainOwnerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainOwnerOutcome(rsp);
        else
            return ModifyDomainOwnerOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainOwnerOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainOwnerAsync(const ModifyDomainOwnerRequest& request, const ModifyDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainOwnerRequest&;
    using Resp = ModifyDomainOwnerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainOwner", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyDomainOwnerOutcomeCallable DnspodClient::ModifyDomainOwnerCallable(const ModifyDomainOwnerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainOwnerOutcome>>();
    ModifyDomainOwnerAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyDomainOwnerRequest&,
        ModifyDomainOwnerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyDomainRecursiveStatusBatchOutcome DnspodClient::ModifyDomainRecursiveStatusBatch(const ModifyDomainRecursiveStatusBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainRecursiveStatusBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainRecursiveStatusBatchResponse rsp = ModifyDomainRecursiveStatusBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainRecursiveStatusBatchOutcome(rsp);
        else
            return ModifyDomainRecursiveStatusBatchOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainRecursiveStatusBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainRecursiveStatusBatchAsync(const ModifyDomainRecursiveStatusBatchRequest& request, const ModifyDomainRecursiveStatusBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainRecursiveStatusBatchRequest&;
    using Resp = ModifyDomainRecursiveStatusBatchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainRecursiveStatusBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyDomainRecursiveStatusBatchOutcomeCallable DnspodClient::ModifyDomainRecursiveStatusBatchCallable(const ModifyDomainRecursiveStatusBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainRecursiveStatusBatchOutcome>>();
    ModifyDomainRecursiveStatusBatchAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyDomainRecursiveStatusBatchRequest&,
        ModifyDomainRecursiveStatusBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyDomainRemarkOutcome DnspodClient::ModifyDomainRemark(const ModifyDomainRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainRemarkResponse rsp = ModifyDomainRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainRemarkOutcome(rsp);
        else
            return ModifyDomainRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainRemarkOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainRemarkAsync(const ModifyDomainRemarkRequest& request, const ModifyDomainRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainRemarkRequest&;
    using Resp = ModifyDomainRemarkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainRemark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyDomainRemarkOutcomeCallable DnspodClient::ModifyDomainRemarkCallable(const ModifyDomainRemarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainRemarkOutcome>>();
    ModifyDomainRemarkAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyDomainRemarkRequest&,
        ModifyDomainRemarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyDomainStatusOutcome DnspodClient::ModifyDomainStatus(const ModifyDomainStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainStatusResponse rsp = ModifyDomainStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainStatusOutcome(rsp);
        else
            return ModifyDomainStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainStatusOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainStatusAsync(const ModifyDomainStatusRequest& request, const ModifyDomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainStatusRequest&;
    using Resp = ModifyDomainStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyDomainStatusOutcomeCallable DnspodClient::ModifyDomainStatusCallable(const ModifyDomainStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainStatusOutcome>>();
    ModifyDomainStatusAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyDomainStatusRequest&,
        ModifyDomainStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyDomainToGroupOutcome DnspodClient::ModifyDomainToGroup(const ModifyDomainToGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainToGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainToGroupResponse rsp = ModifyDomainToGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainToGroupOutcome(rsp);
        else
            return ModifyDomainToGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainToGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainToGroupAsync(const ModifyDomainToGroupRequest& request, const ModifyDomainToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainToGroupRequest&;
    using Resp = ModifyDomainToGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainToGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyDomainToGroupOutcomeCallable DnspodClient::ModifyDomainToGroupCallable(const ModifyDomainToGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainToGroupOutcome>>();
    ModifyDomainToGroupAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyDomainToGroupRequest&,
        ModifyDomainToGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyDomainUnlockOutcome DnspodClient::ModifyDomainUnlock(const ModifyDomainUnlockRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainUnlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainUnlockResponse rsp = ModifyDomainUnlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainUnlockOutcome(rsp);
        else
            return ModifyDomainUnlockOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainUnlockOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainUnlockAsync(const ModifyDomainUnlockRequest& request, const ModifyDomainUnlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainUnlockRequest&;
    using Resp = ModifyDomainUnlockResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainUnlock", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyDomainUnlockOutcomeCallable DnspodClient::ModifyDomainUnlockCallable(const ModifyDomainUnlockRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainUnlockOutcome>>();
    ModifyDomainUnlockAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyDomainUnlockRequest&,
        ModifyDomainUnlockOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyDynamicDNSOutcome DnspodClient::ModifyDynamicDNS(const ModifyDynamicDNSRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDynamicDNS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDynamicDNSResponse rsp = ModifyDynamicDNSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDynamicDNSOutcome(rsp);
        else
            return ModifyDynamicDNSOutcome(o.GetError());
    }
    else
    {
        return ModifyDynamicDNSOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDynamicDNSAsync(const ModifyDynamicDNSRequest& request, const ModifyDynamicDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDynamicDNSRequest&;
    using Resp = ModifyDynamicDNSResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDynamicDNS", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyDynamicDNSOutcomeCallable DnspodClient::ModifyDynamicDNSCallable(const ModifyDynamicDNSRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDynamicDNSOutcome>>();
    ModifyDynamicDNSAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyDynamicDNSRequest&,
        ModifyDynamicDNSOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyLineGroupOutcome DnspodClient::ModifyLineGroup(const ModifyLineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLineGroupResponse rsp = ModifyLineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLineGroupOutcome(rsp);
        else
            return ModifyLineGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyLineGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyLineGroupAsync(const ModifyLineGroupRequest& request, const ModifyLineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLineGroupRequest&;
    using Resp = ModifyLineGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLineGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyLineGroupOutcomeCallable DnspodClient::ModifyLineGroupCallable(const ModifyLineGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLineGroupOutcome>>();
    ModifyLineGroupAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyLineGroupRequest&,
        ModifyLineGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyPackageAutoRenewOutcome DnspodClient::ModifyPackageAutoRenew(const ModifyPackageAutoRenewRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPackageAutoRenew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPackageAutoRenewResponse rsp = ModifyPackageAutoRenewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPackageAutoRenewOutcome(rsp);
        else
            return ModifyPackageAutoRenewOutcome(o.GetError());
    }
    else
    {
        return ModifyPackageAutoRenewOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyPackageAutoRenewAsync(const ModifyPackageAutoRenewRequest& request, const ModifyPackageAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPackageAutoRenewRequest&;
    using Resp = ModifyPackageAutoRenewResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPackageAutoRenew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyPackageAutoRenewOutcomeCallable DnspodClient::ModifyPackageAutoRenewCallable(const ModifyPackageAutoRenewRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPackageAutoRenewOutcome>>();
    ModifyPackageAutoRenewAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyPackageAutoRenewRequest&,
        ModifyPackageAutoRenewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyRecordOutcome DnspodClient::ModifyRecord(const ModifyRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordResponse rsp = ModifyRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordOutcome(rsp);
        else
            return ModifyRecordOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordAsync(const ModifyRecordRequest& request, const ModifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordRequest&;
    using Resp = ModifyRecordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyRecordOutcomeCallable DnspodClient::ModifyRecordCallable(const ModifyRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordOutcome>>();
    ModifyRecordAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyRecordRequest&,
        ModifyRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyRecordBatchOutcome DnspodClient::ModifyRecordBatch(const ModifyRecordBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordBatchResponse rsp = ModifyRecordBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordBatchOutcome(rsp);
        else
            return ModifyRecordBatchOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordBatchAsync(const ModifyRecordBatchRequest& request, const ModifyRecordBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordBatchRequest&;
    using Resp = ModifyRecordBatchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecordBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyRecordBatchOutcomeCallable DnspodClient::ModifyRecordBatchCallable(const ModifyRecordBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordBatchOutcome>>();
    ModifyRecordBatchAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyRecordBatchRequest&,
        ModifyRecordBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyRecordFieldsOutcome DnspodClient::ModifyRecordFields(const ModifyRecordFieldsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordFields");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordFieldsResponse rsp = ModifyRecordFieldsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordFieldsOutcome(rsp);
        else
            return ModifyRecordFieldsOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordFieldsOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordFieldsAsync(const ModifyRecordFieldsRequest& request, const ModifyRecordFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordFieldsRequest&;
    using Resp = ModifyRecordFieldsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecordFields", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyRecordFieldsOutcomeCallable DnspodClient::ModifyRecordFieldsCallable(const ModifyRecordFieldsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordFieldsOutcome>>();
    ModifyRecordFieldsAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyRecordFieldsRequest&,
        ModifyRecordFieldsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyRecordGroupOutcome DnspodClient::ModifyRecordGroup(const ModifyRecordGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordGroupResponse rsp = ModifyRecordGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordGroupOutcome(rsp);
        else
            return ModifyRecordGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordGroupAsync(const ModifyRecordGroupRequest& request, const ModifyRecordGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordGroupRequest&;
    using Resp = ModifyRecordGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecordGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyRecordGroupOutcomeCallable DnspodClient::ModifyRecordGroupCallable(const ModifyRecordGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordGroupOutcome>>();
    ModifyRecordGroupAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyRecordGroupRequest&,
        ModifyRecordGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyRecordRemarkOutcome DnspodClient::ModifyRecordRemark(const ModifyRecordRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordRemarkResponse rsp = ModifyRecordRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordRemarkOutcome(rsp);
        else
            return ModifyRecordRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordRemarkOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordRemarkAsync(const ModifyRecordRemarkRequest& request, const ModifyRecordRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordRemarkRequest&;
    using Resp = ModifyRecordRemarkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecordRemark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyRecordRemarkOutcomeCallable DnspodClient::ModifyRecordRemarkCallable(const ModifyRecordRemarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordRemarkOutcome>>();
    ModifyRecordRemarkAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyRecordRemarkRequest&,
        ModifyRecordRemarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyRecordStatusOutcome DnspodClient::ModifyRecordStatus(const ModifyRecordStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordStatusResponse rsp = ModifyRecordStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordStatusOutcome(rsp);
        else
            return ModifyRecordStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordStatusOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordStatusAsync(const ModifyRecordStatusRequest& request, const ModifyRecordStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordStatusRequest&;
    using Resp = ModifyRecordStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecordStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyRecordStatusOutcomeCallable DnspodClient::ModifyRecordStatusCallable(const ModifyRecordStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordStatusOutcome>>();
    ModifyRecordStatusAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyRecordStatusRequest&,
        ModifyRecordStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyRecordToGroupOutcome DnspodClient::ModifyRecordToGroup(const ModifyRecordToGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordToGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordToGroupResponse rsp = ModifyRecordToGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordToGroupOutcome(rsp);
        else
            return ModifyRecordToGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordToGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordToGroupAsync(const ModifyRecordToGroupRequest& request, const ModifyRecordToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordToGroupRequest&;
    using Resp = ModifyRecordToGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecordToGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyRecordToGroupOutcomeCallable DnspodClient::ModifyRecordToGroupCallable(const ModifyRecordToGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordToGroupOutcome>>();
    ModifyRecordToGroupAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyRecordToGroupRequest&,
        ModifyRecordToGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifySnapshotConfigOutcome DnspodClient::ModifySnapshotConfig(const ModifySnapshotConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySnapshotConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySnapshotConfigResponse rsp = ModifySnapshotConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySnapshotConfigOutcome(rsp);
        else
            return ModifySnapshotConfigOutcome(o.GetError());
    }
    else
    {
        return ModifySnapshotConfigOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifySnapshotConfigAsync(const ModifySnapshotConfigRequest& request, const ModifySnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySnapshotConfigRequest&;
    using Resp = ModifySnapshotConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySnapshotConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifySnapshotConfigOutcomeCallable DnspodClient::ModifySnapshotConfigCallable(const ModifySnapshotConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySnapshotConfigOutcome>>();
    ModifySnapshotConfigAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifySnapshotConfigRequest&,
        ModifySnapshotConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifySubdomainStatusOutcome DnspodClient::ModifySubdomainStatus(const ModifySubdomainStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubdomainStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubdomainStatusResponse rsp = ModifySubdomainStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubdomainStatusOutcome(rsp);
        else
            return ModifySubdomainStatusOutcome(o.GetError());
    }
    else
    {
        return ModifySubdomainStatusOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifySubdomainStatusAsync(const ModifySubdomainStatusRequest& request, const ModifySubdomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySubdomainStatusRequest&;
    using Resp = ModifySubdomainStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubdomainStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifySubdomainStatusOutcomeCallable DnspodClient::ModifySubdomainStatusCallable(const ModifySubdomainStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubdomainStatusOutcome>>();
    ModifySubdomainStatusAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifySubdomainStatusRequest&,
        ModifySubdomainStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyTXTRecordOutcome DnspodClient::ModifyTXTRecord(const ModifyTXTRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTXTRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTXTRecordResponse rsp = ModifyTXTRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTXTRecordOutcome(rsp);
        else
            return ModifyTXTRecordOutcome(o.GetError());
    }
    else
    {
        return ModifyTXTRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyTXTRecordAsync(const ModifyTXTRecordRequest& request, const ModifyTXTRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTXTRecordRequest&;
    using Resp = ModifyTXTRecordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTXTRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyTXTRecordOutcomeCallable DnspodClient::ModifyTXTRecordCallable(const ModifyTXTRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTXTRecordOutcome>>();
    ModifyTXTRecordAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyTXTRecordRequest&,
        ModifyTXTRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyVasAutoRenewStatusOutcome DnspodClient::ModifyVasAutoRenewStatus(const ModifyVasAutoRenewStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVasAutoRenewStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVasAutoRenewStatusResponse rsp = ModifyVasAutoRenewStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVasAutoRenewStatusOutcome(rsp);
        else
            return ModifyVasAutoRenewStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyVasAutoRenewStatusOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyVasAutoRenewStatusAsync(const ModifyVasAutoRenewStatusRequest& request, const ModifyVasAutoRenewStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVasAutoRenewStatusRequest&;
    using Resp = ModifyVasAutoRenewStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVasAutoRenewStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyVasAutoRenewStatusOutcomeCallable DnspodClient::ModifyVasAutoRenewStatusCallable(const ModifyVasAutoRenewStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVasAutoRenewStatusOutcome>>();
    ModifyVasAutoRenewStatusAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyVasAutoRenewStatusRequest&,
        ModifyVasAutoRenewStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::PayOrderWithBalanceOutcome DnspodClient::PayOrderWithBalance(const PayOrderWithBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "PayOrderWithBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PayOrderWithBalanceResponse rsp = PayOrderWithBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PayOrderWithBalanceOutcome(rsp);
        else
            return PayOrderWithBalanceOutcome(o.GetError());
    }
    else
    {
        return PayOrderWithBalanceOutcome(outcome.GetError());
    }
}

void DnspodClient::PayOrderWithBalanceAsync(const PayOrderWithBalanceRequest& request, const PayOrderWithBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PayOrderWithBalanceRequest&;
    using Resp = PayOrderWithBalanceResponse;

    DoRequestAsync<Req, Resp>(
        "PayOrderWithBalance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::PayOrderWithBalanceOutcomeCallable DnspodClient::PayOrderWithBalanceCallable(const PayOrderWithBalanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<PayOrderWithBalanceOutcome>>();
    PayOrderWithBalanceAsync(
    request,
    [prom](
        const DnspodClient*,
        const PayOrderWithBalanceRequest&,
        PayOrderWithBalanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::RollbackRecordSnapshotOutcome DnspodClient::RollbackRecordSnapshot(const RollbackRecordSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackRecordSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackRecordSnapshotResponse rsp = RollbackRecordSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackRecordSnapshotOutcome(rsp);
        else
            return RollbackRecordSnapshotOutcome(o.GetError());
    }
    else
    {
        return RollbackRecordSnapshotOutcome(outcome.GetError());
    }
}

void DnspodClient::RollbackRecordSnapshotAsync(const RollbackRecordSnapshotRequest& request, const RollbackRecordSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RollbackRecordSnapshotRequest&;
    using Resp = RollbackRecordSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "RollbackRecordSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::RollbackRecordSnapshotOutcomeCallable DnspodClient::RollbackRecordSnapshotCallable(const RollbackRecordSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollbackRecordSnapshotOutcome>>();
    RollbackRecordSnapshotAsync(
    request,
    [prom](
        const DnspodClient*,
        const RollbackRecordSnapshotRequest&,
        RollbackRecordSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::RollbackSnapshotOutcome DnspodClient::RollbackSnapshot(const RollbackSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackSnapshotResponse rsp = RollbackSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackSnapshotOutcome(rsp);
        else
            return RollbackSnapshotOutcome(o.GetError());
    }
    else
    {
        return RollbackSnapshotOutcome(outcome.GetError());
    }
}

void DnspodClient::RollbackSnapshotAsync(const RollbackSnapshotRequest& request, const RollbackSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RollbackSnapshotRequest&;
    using Resp = RollbackSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "RollbackSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::RollbackSnapshotOutcomeCallable DnspodClient::RollbackSnapshotCallable(const RollbackSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollbackSnapshotOutcome>>();
    RollbackSnapshotAsync(
    request,
    [prom](
        const DnspodClient*,
        const RollbackSnapshotRequest&,
        RollbackSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

