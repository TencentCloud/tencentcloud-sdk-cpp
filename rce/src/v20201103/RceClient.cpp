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

#include <tencentcloud/rce/v20201103/RceClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Rce::V20201103;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-11-03";
    const string ENDPOINT = "rce.tencentcloudapi.com";
}

RceClient::RceClient(const Credential &credential, const string &region) :
    RceClient(credential, region, ClientProfile())
{
}

RceClient::RceClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


RceClient::CreateNameListOutcome RceClient::CreateNameList(const CreateNameListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNameList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNameListResponse rsp = CreateNameListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNameListOutcome(rsp);
        else
            return CreateNameListOutcome(o.GetError());
    }
    else
    {
        return CreateNameListOutcome(outcome.GetError());
    }
}

void RceClient::CreateNameListAsync(const CreateNameListRequest& request, const CreateNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNameListRequest&;
    using Resp = CreateNameListResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNameList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RceClient::CreateNameListOutcomeCallable RceClient::CreateNameListCallable(const CreateNameListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNameListOutcome>>();
    CreateNameListAsync(
    request,
    [prom](
        const RceClient*,
        const CreateNameListRequest&,
        CreateNameListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RceClient::DeleteNameListOutcome RceClient::DeleteNameList(const DeleteNameListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNameList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNameListResponse rsp = DeleteNameListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNameListOutcome(rsp);
        else
            return DeleteNameListOutcome(o.GetError());
    }
    else
    {
        return DeleteNameListOutcome(outcome.GetError());
    }
}

void RceClient::DeleteNameListAsync(const DeleteNameListRequest& request, const DeleteNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNameListRequest&;
    using Resp = DeleteNameListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNameList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RceClient::DeleteNameListOutcomeCallable RceClient::DeleteNameListCallable(const DeleteNameListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNameListOutcome>>();
    DeleteNameListAsync(
    request,
    [prom](
        const RceClient*,
        const DeleteNameListRequest&,
        DeleteNameListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RceClient::DeleteNameListDataOutcome RceClient::DeleteNameListData(const DeleteNameListDataRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNameListData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNameListDataResponse rsp = DeleteNameListDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNameListDataOutcome(rsp);
        else
            return DeleteNameListDataOutcome(o.GetError());
    }
    else
    {
        return DeleteNameListDataOutcome(outcome.GetError());
    }
}

void RceClient::DeleteNameListDataAsync(const DeleteNameListDataRequest& request, const DeleteNameListDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNameListDataRequest&;
    using Resp = DeleteNameListDataResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNameListData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RceClient::DeleteNameListDataOutcomeCallable RceClient::DeleteNameListDataCallable(const DeleteNameListDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNameListDataOutcome>>();
    DeleteNameListDataAsync(
    request,
    [prom](
        const RceClient*,
        const DeleteNameListDataRequest&,
        DeleteNameListDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RceClient::DescribeNameListOutcome RceClient::DescribeNameList(const DescribeNameListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNameList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNameListResponse rsp = DescribeNameListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNameListOutcome(rsp);
        else
            return DescribeNameListOutcome(o.GetError());
    }
    else
    {
        return DescribeNameListOutcome(outcome.GetError());
    }
}

void RceClient::DescribeNameListAsync(const DescribeNameListRequest& request, const DescribeNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNameListRequest&;
    using Resp = DescribeNameListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNameList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RceClient::DescribeNameListOutcomeCallable RceClient::DescribeNameListCallable(const DescribeNameListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNameListOutcome>>();
    DescribeNameListAsync(
    request,
    [prom](
        const RceClient*,
        const DescribeNameListRequest&,
        DescribeNameListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RceClient::DescribeNameListDataListOutcome RceClient::DescribeNameListDataList(const DescribeNameListDataListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNameListDataList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNameListDataListResponse rsp = DescribeNameListDataListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNameListDataListOutcome(rsp);
        else
            return DescribeNameListDataListOutcome(o.GetError());
    }
    else
    {
        return DescribeNameListDataListOutcome(outcome.GetError());
    }
}

void RceClient::DescribeNameListDataListAsync(const DescribeNameListDataListRequest& request, const DescribeNameListDataListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNameListDataListRequest&;
    using Resp = DescribeNameListDataListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNameListDataList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RceClient::DescribeNameListDataListOutcomeCallable RceClient::DescribeNameListDataListCallable(const DescribeNameListDataListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNameListDataListOutcome>>();
    DescribeNameListDataListAsync(
    request,
    [prom](
        const RceClient*,
        const DescribeNameListDataListRequest&,
        DescribeNameListDataListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RceClient::DescribeNameListDetailOutcome RceClient::DescribeNameListDetail(const DescribeNameListDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNameListDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNameListDetailResponse rsp = DescribeNameListDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNameListDetailOutcome(rsp);
        else
            return DescribeNameListDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeNameListDetailOutcome(outcome.GetError());
    }
}

void RceClient::DescribeNameListDetailAsync(const DescribeNameListDetailRequest& request, const DescribeNameListDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNameListDetailRequest&;
    using Resp = DescribeNameListDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNameListDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RceClient::DescribeNameListDetailOutcomeCallable RceClient::DescribeNameListDetailCallable(const DescribeNameListDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNameListDetailOutcome>>();
    DescribeNameListDetailAsync(
    request,
    [prom](
        const RceClient*,
        const DescribeNameListDetailRequest&,
        DescribeNameListDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RceClient::DescribeUserUsageCntOutcome RceClient::DescribeUserUsageCnt(const DescribeUserUsageCntRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserUsageCnt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserUsageCntResponse rsp = DescribeUserUsageCntResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserUsageCntOutcome(rsp);
        else
            return DescribeUserUsageCntOutcome(o.GetError());
    }
    else
    {
        return DescribeUserUsageCntOutcome(outcome.GetError());
    }
}

void RceClient::DescribeUserUsageCntAsync(const DescribeUserUsageCntRequest& request, const DescribeUserUsageCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserUsageCntRequest&;
    using Resp = DescribeUserUsageCntResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserUsageCnt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RceClient::DescribeUserUsageCntOutcomeCallable RceClient::DescribeUserUsageCntCallable(const DescribeUserUsageCntRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserUsageCntOutcome>>();
    DescribeUserUsageCntAsync(
    request,
    [prom](
        const RceClient*,
        const DescribeUserUsageCntRequest&,
        DescribeUserUsageCntOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RceClient::ImportNameListDataOutcome RceClient::ImportNameListData(const ImportNameListDataRequest &request)
{
    auto outcome = MakeRequest(request, "ImportNameListData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportNameListDataResponse rsp = ImportNameListDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportNameListDataOutcome(rsp);
        else
            return ImportNameListDataOutcome(o.GetError());
    }
    else
    {
        return ImportNameListDataOutcome(outcome.GetError());
    }
}

void RceClient::ImportNameListDataAsync(const ImportNameListDataRequest& request, const ImportNameListDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportNameListDataRequest&;
    using Resp = ImportNameListDataResponse;

    DoRequestAsync<Req, Resp>(
        "ImportNameListData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RceClient::ImportNameListDataOutcomeCallable RceClient::ImportNameListDataCallable(const ImportNameListDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportNameListDataOutcome>>();
    ImportNameListDataAsync(
    request,
    [prom](
        const RceClient*,
        const ImportNameListDataRequest&,
        ImportNameListDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RceClient::ManageMarketingRiskOutcome RceClient::ManageMarketingRisk(const ManageMarketingRiskRequest &request)
{
    auto outcome = MakeRequest(request, "ManageMarketingRisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageMarketingRiskResponse rsp = ManageMarketingRiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageMarketingRiskOutcome(rsp);
        else
            return ManageMarketingRiskOutcome(o.GetError());
    }
    else
    {
        return ManageMarketingRiskOutcome(outcome.GetError());
    }
}

void RceClient::ManageMarketingRiskAsync(const ManageMarketingRiskRequest& request, const ManageMarketingRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ManageMarketingRiskRequest&;
    using Resp = ManageMarketingRiskResponse;

    DoRequestAsync<Req, Resp>(
        "ManageMarketingRisk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RceClient::ManageMarketingRiskOutcomeCallable RceClient::ManageMarketingRiskCallable(const ManageMarketingRiskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ManageMarketingRiskOutcome>>();
    ManageMarketingRiskAsync(
    request,
    [prom](
        const RceClient*,
        const ManageMarketingRiskRequest&,
        ManageMarketingRiskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RceClient::ModifyNameListOutcome RceClient::ModifyNameList(const ModifyNameListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNameList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNameListResponse rsp = ModifyNameListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNameListOutcome(rsp);
        else
            return ModifyNameListOutcome(o.GetError());
    }
    else
    {
        return ModifyNameListOutcome(outcome.GetError());
    }
}

void RceClient::ModifyNameListAsync(const ModifyNameListRequest& request, const ModifyNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNameListRequest&;
    using Resp = ModifyNameListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNameList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RceClient::ModifyNameListOutcomeCallable RceClient::ModifyNameListCallable(const ModifyNameListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNameListOutcome>>();
    ModifyNameListAsync(
    request,
    [prom](
        const RceClient*,
        const ModifyNameListRequest&,
        ModifyNameListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RceClient::ModifyNameListDataOutcome RceClient::ModifyNameListData(const ModifyNameListDataRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNameListData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNameListDataResponse rsp = ModifyNameListDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNameListDataOutcome(rsp);
        else
            return ModifyNameListDataOutcome(o.GetError());
    }
    else
    {
        return ModifyNameListDataOutcome(outcome.GetError());
    }
}

void RceClient::ModifyNameListDataAsync(const ModifyNameListDataRequest& request, const ModifyNameListDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNameListDataRequest&;
    using Resp = ModifyNameListDataResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNameListData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RceClient::ModifyNameListDataOutcomeCallable RceClient::ModifyNameListDataCallable(const ModifyNameListDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNameListDataOutcome>>();
    ModifyNameListDataAsync(
    request,
    [prom](
        const RceClient*,
        const ModifyNameListDataRequest&,
        ModifyNameListDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

