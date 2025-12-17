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

#include <tencentcloud/igtm/v20231024/IgtmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Igtm::V20231024;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-10-24";
    const string ENDPOINT = "igtm.tencentcloudapi.com";
}

IgtmClient::IgtmClient(const Credential &credential, const string &region) :
    IgtmClient(credential, region, ClientProfile())
{
}

IgtmClient::IgtmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IgtmClient::CreateAddressPoolOutcome IgtmClient::CreateAddressPool(const CreateAddressPoolRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAddressPool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAddressPoolResponse rsp = CreateAddressPoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAddressPoolOutcome(rsp);
        else
            return CreateAddressPoolOutcome(o.GetError());
    }
    else
    {
        return CreateAddressPoolOutcome(outcome.GetError());
    }
}

void IgtmClient::CreateAddressPoolAsync(const CreateAddressPoolRequest& request, const CreateAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAddressPoolRequest&;
    using Resp = CreateAddressPoolResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAddressPool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::CreateAddressPoolOutcomeCallable IgtmClient::CreateAddressPoolCallable(const CreateAddressPoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAddressPoolOutcome>>();
    CreateAddressPoolAsync(
    request,
    [prom](
        const IgtmClient*,
        const CreateAddressPoolRequest&,
        CreateAddressPoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::CreateInstanceOutcome IgtmClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void IgtmClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceRequest&;
    using Resp = CreateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::CreateInstanceOutcomeCallable IgtmClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceOutcome>>();
    CreateInstanceAsync(
    request,
    [prom](
        const IgtmClient*,
        const CreateInstanceRequest&,
        CreateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::CreateMonitorOutcome IgtmClient::CreateMonitor(const CreateMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMonitorResponse rsp = CreateMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMonitorOutcome(rsp);
        else
            return CreateMonitorOutcome(o.GetError());
    }
    else
    {
        return CreateMonitorOutcome(outcome.GetError());
    }
}

void IgtmClient::CreateMonitorAsync(const CreateMonitorRequest& request, const CreateMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMonitorRequest&;
    using Resp = CreateMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::CreateMonitorOutcomeCallable IgtmClient::CreateMonitorCallable(const CreateMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMonitorOutcome>>();
    CreateMonitorAsync(
    request,
    [prom](
        const IgtmClient*,
        const CreateMonitorRequest&,
        CreateMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::CreatePackageAndPayOutcome IgtmClient::CreatePackageAndPay(const CreatePackageAndPayRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePackageAndPay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePackageAndPayResponse rsp = CreatePackageAndPayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePackageAndPayOutcome(rsp);
        else
            return CreatePackageAndPayOutcome(o.GetError());
    }
    else
    {
        return CreatePackageAndPayOutcome(outcome.GetError());
    }
}

void IgtmClient::CreatePackageAndPayAsync(const CreatePackageAndPayRequest& request, const CreatePackageAndPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePackageAndPayRequest&;
    using Resp = CreatePackageAndPayResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePackageAndPay", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::CreatePackageAndPayOutcomeCallable IgtmClient::CreatePackageAndPayCallable(const CreatePackageAndPayRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePackageAndPayOutcome>>();
    CreatePackageAndPayAsync(
    request,
    [prom](
        const IgtmClient*,
        const CreatePackageAndPayRequest&,
        CreatePackageAndPayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::CreateStrategyOutcome IgtmClient::CreateStrategy(const CreateStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStrategyResponse rsp = CreateStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStrategyOutcome(rsp);
        else
            return CreateStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateStrategyOutcome(outcome.GetError());
    }
}

void IgtmClient::CreateStrategyAsync(const CreateStrategyRequest& request, const CreateStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStrategyRequest&;
    using Resp = CreateStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::CreateStrategyOutcomeCallable IgtmClient::CreateStrategyCallable(const CreateStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStrategyOutcome>>();
    CreateStrategyAsync(
    request,
    [prom](
        const IgtmClient*,
        const CreateStrategyRequest&,
        CreateStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DeleteAddressPoolOutcome IgtmClient::DeleteAddressPool(const DeleteAddressPoolRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAddressPool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAddressPoolResponse rsp = DeleteAddressPoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAddressPoolOutcome(rsp);
        else
            return DeleteAddressPoolOutcome(o.GetError());
    }
    else
    {
        return DeleteAddressPoolOutcome(outcome.GetError());
    }
}

void IgtmClient::DeleteAddressPoolAsync(const DeleteAddressPoolRequest& request, const DeleteAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAddressPoolRequest&;
    using Resp = DeleteAddressPoolResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAddressPool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DeleteAddressPoolOutcomeCallable IgtmClient::DeleteAddressPoolCallable(const DeleteAddressPoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAddressPoolOutcome>>();
    DeleteAddressPoolAsync(
    request,
    [prom](
        const IgtmClient*,
        const DeleteAddressPoolRequest&,
        DeleteAddressPoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DeleteMonitorOutcome IgtmClient::DeleteMonitor(const DeleteMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMonitorResponse rsp = DeleteMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMonitorOutcome(rsp);
        else
            return DeleteMonitorOutcome(o.GetError());
    }
    else
    {
        return DeleteMonitorOutcome(outcome.GetError());
    }
}

void IgtmClient::DeleteMonitorAsync(const DeleteMonitorRequest& request, const DeleteMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMonitorRequest&;
    using Resp = DeleteMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DeleteMonitorOutcomeCallable IgtmClient::DeleteMonitorCallable(const DeleteMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMonitorOutcome>>();
    DeleteMonitorAsync(
    request,
    [prom](
        const IgtmClient*,
        const DeleteMonitorRequest&,
        DeleteMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DeleteStrategyOutcome IgtmClient::DeleteStrategy(const DeleteStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStrategyResponse rsp = DeleteStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStrategyOutcome(rsp);
        else
            return DeleteStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteStrategyOutcome(outcome.GetError());
    }
}

void IgtmClient::DeleteStrategyAsync(const DeleteStrategyRequest& request, const DeleteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStrategyRequest&;
    using Resp = DeleteStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DeleteStrategyOutcomeCallable IgtmClient::DeleteStrategyCallable(const DeleteStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStrategyOutcome>>();
    DeleteStrategyAsync(
    request,
    [prom](
        const IgtmClient*,
        const DeleteStrategyRequest&,
        DeleteStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DescribeAddressLocationOutcome IgtmClient::DescribeAddressLocation(const DescribeAddressLocationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddressLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressLocationResponse rsp = DescribeAddressLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressLocationOutcome(rsp);
        else
            return DescribeAddressLocationOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressLocationOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeAddressLocationAsync(const DescribeAddressLocationRequest& request, const DescribeAddressLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAddressLocationRequest&;
    using Resp = DescribeAddressLocationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAddressLocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DescribeAddressLocationOutcomeCallable IgtmClient::DescribeAddressLocationCallable(const DescribeAddressLocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAddressLocationOutcome>>();
    DescribeAddressLocationAsync(
    request,
    [prom](
        const IgtmClient*,
        const DescribeAddressLocationRequest&,
        DescribeAddressLocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DescribeAddressPoolDetailOutcome IgtmClient::DescribeAddressPoolDetail(const DescribeAddressPoolDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddressPoolDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressPoolDetailResponse rsp = DescribeAddressPoolDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressPoolDetailOutcome(rsp);
        else
            return DescribeAddressPoolDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressPoolDetailOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeAddressPoolDetailAsync(const DescribeAddressPoolDetailRequest& request, const DescribeAddressPoolDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAddressPoolDetailRequest&;
    using Resp = DescribeAddressPoolDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAddressPoolDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DescribeAddressPoolDetailOutcomeCallable IgtmClient::DescribeAddressPoolDetailCallable(const DescribeAddressPoolDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAddressPoolDetailOutcome>>();
    DescribeAddressPoolDetailAsync(
    request,
    [prom](
        const IgtmClient*,
        const DescribeAddressPoolDetailRequest&,
        DescribeAddressPoolDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DescribeAddressPoolListOutcome IgtmClient::DescribeAddressPoolList(const DescribeAddressPoolListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddressPoolList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressPoolListResponse rsp = DescribeAddressPoolListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressPoolListOutcome(rsp);
        else
            return DescribeAddressPoolListOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressPoolListOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeAddressPoolListAsync(const DescribeAddressPoolListRequest& request, const DescribeAddressPoolListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAddressPoolListRequest&;
    using Resp = DescribeAddressPoolListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAddressPoolList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DescribeAddressPoolListOutcomeCallable IgtmClient::DescribeAddressPoolListCallable(const DescribeAddressPoolListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAddressPoolListOutcome>>();
    DescribeAddressPoolListAsync(
    request,
    [prom](
        const IgtmClient*,
        const DescribeAddressPoolListRequest&,
        DescribeAddressPoolListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DescribeDetectPackageDetailOutcome IgtmClient::DescribeDetectPackageDetail(const DescribeDetectPackageDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDetectPackageDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDetectPackageDetailResponse rsp = DescribeDetectPackageDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDetectPackageDetailOutcome(rsp);
        else
            return DescribeDetectPackageDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDetectPackageDetailOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeDetectPackageDetailAsync(const DescribeDetectPackageDetailRequest& request, const DescribeDetectPackageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDetectPackageDetailRequest&;
    using Resp = DescribeDetectPackageDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDetectPackageDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DescribeDetectPackageDetailOutcomeCallable IgtmClient::DescribeDetectPackageDetailCallable(const DescribeDetectPackageDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDetectPackageDetailOutcome>>();
    DescribeDetectPackageDetailAsync(
    request,
    [prom](
        const IgtmClient*,
        const DescribeDetectPackageDetailRequest&,
        DescribeDetectPackageDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DescribeDetectTaskPackageListOutcome IgtmClient::DescribeDetectTaskPackageList(const DescribeDetectTaskPackageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDetectTaskPackageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDetectTaskPackageListResponse rsp = DescribeDetectTaskPackageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDetectTaskPackageListOutcome(rsp);
        else
            return DescribeDetectTaskPackageListOutcome(o.GetError());
    }
    else
    {
        return DescribeDetectTaskPackageListOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeDetectTaskPackageListAsync(const DescribeDetectTaskPackageListRequest& request, const DescribeDetectTaskPackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDetectTaskPackageListRequest&;
    using Resp = DescribeDetectTaskPackageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDetectTaskPackageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DescribeDetectTaskPackageListOutcomeCallable IgtmClient::DescribeDetectTaskPackageListCallable(const DescribeDetectTaskPackageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDetectTaskPackageListOutcome>>();
    DescribeDetectTaskPackageListAsync(
    request,
    [prom](
        const IgtmClient*,
        const DescribeDetectTaskPackageListRequest&,
        DescribeDetectTaskPackageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DescribeDetectorsOutcome IgtmClient::DescribeDetectors(const DescribeDetectorsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDetectors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDetectorsResponse rsp = DescribeDetectorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDetectorsOutcome(rsp);
        else
            return DescribeDetectorsOutcome(o.GetError());
    }
    else
    {
        return DescribeDetectorsOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeDetectorsAsync(const DescribeDetectorsRequest& request, const DescribeDetectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDetectorsRequest&;
    using Resp = DescribeDetectorsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDetectors", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DescribeDetectorsOutcomeCallable IgtmClient::DescribeDetectorsCallable(const DescribeDetectorsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDetectorsOutcome>>();
    DescribeDetectorsAsync(
    request,
    [prom](
        const IgtmClient*,
        const DescribeDetectorsRequest&,
        DescribeDetectorsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DescribeDnsLineListOutcome IgtmClient::DescribeDnsLineList(const DescribeDnsLineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDnsLineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDnsLineListResponse rsp = DescribeDnsLineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDnsLineListOutcome(rsp);
        else
            return DescribeDnsLineListOutcome(o.GetError());
    }
    else
    {
        return DescribeDnsLineListOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeDnsLineListAsync(const DescribeDnsLineListRequest& request, const DescribeDnsLineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDnsLineListRequest&;
    using Resp = DescribeDnsLineListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDnsLineList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DescribeDnsLineListOutcomeCallable IgtmClient::DescribeDnsLineListCallable(const DescribeDnsLineListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDnsLineListOutcome>>();
    DescribeDnsLineListAsync(
    request,
    [prom](
        const IgtmClient*,
        const DescribeDnsLineListRequest&,
        DescribeDnsLineListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DescribeInstanceDetailOutcome IgtmClient::DescribeInstanceDetail(const DescribeInstanceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceDetailResponse rsp = DescribeInstanceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceDetailOutcome(rsp);
        else
            return DescribeInstanceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceDetailOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeInstanceDetailAsync(const DescribeInstanceDetailRequest& request, const DescribeInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceDetailRequest&;
    using Resp = DescribeInstanceDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DescribeInstanceDetailOutcomeCallable IgtmClient::DescribeInstanceDetailCallable(const DescribeInstanceDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceDetailOutcome>>();
    DescribeInstanceDetailAsync(
    request,
    [prom](
        const IgtmClient*,
        const DescribeInstanceDetailRequest&,
        DescribeInstanceDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DescribeInstanceListOutcome IgtmClient::DescribeInstanceList(const DescribeInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceListResponse rsp = DescribeInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceListOutcome(rsp);
        else
            return DescribeInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceListOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeInstanceListAsync(const DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceListRequest&;
    using Resp = DescribeInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DescribeInstanceListOutcomeCallable IgtmClient::DescribeInstanceListCallable(const DescribeInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceListOutcome>>();
    DescribeInstanceListAsync(
    request,
    [prom](
        const IgtmClient*,
        const DescribeInstanceListRequest&,
        DescribeInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DescribeInstancePackageListOutcome IgtmClient::DescribeInstancePackageList(const DescribeInstancePackageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancePackageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancePackageListResponse rsp = DescribeInstancePackageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancePackageListOutcome(rsp);
        else
            return DescribeInstancePackageListOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancePackageListOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeInstancePackageListAsync(const DescribeInstancePackageListRequest& request, const DescribeInstancePackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancePackageListRequest&;
    using Resp = DescribeInstancePackageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancePackageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DescribeInstancePackageListOutcomeCallable IgtmClient::DescribeInstancePackageListCallable(const DescribeInstancePackageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancePackageListOutcome>>();
    DescribeInstancePackageListAsync(
    request,
    [prom](
        const IgtmClient*,
        const DescribeInstancePackageListRequest&,
        DescribeInstancePackageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DescribeMonitorDetailOutcome IgtmClient::DescribeMonitorDetail(const DescribeMonitorDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMonitorDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMonitorDetailResponse rsp = DescribeMonitorDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMonitorDetailOutcome(rsp);
        else
            return DescribeMonitorDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMonitorDetailOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeMonitorDetailAsync(const DescribeMonitorDetailRequest& request, const DescribeMonitorDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMonitorDetailRequest&;
    using Resp = DescribeMonitorDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMonitorDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DescribeMonitorDetailOutcomeCallable IgtmClient::DescribeMonitorDetailCallable(const DescribeMonitorDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMonitorDetailOutcome>>();
    DescribeMonitorDetailAsync(
    request,
    [prom](
        const IgtmClient*,
        const DescribeMonitorDetailRequest&,
        DescribeMonitorDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DescribeMonitorsOutcome IgtmClient::DescribeMonitors(const DescribeMonitorsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMonitors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMonitorsResponse rsp = DescribeMonitorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMonitorsOutcome(rsp);
        else
            return DescribeMonitorsOutcome(o.GetError());
    }
    else
    {
        return DescribeMonitorsOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeMonitorsAsync(const DescribeMonitorsRequest& request, const DescribeMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMonitorsRequest&;
    using Resp = DescribeMonitorsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMonitors", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DescribeMonitorsOutcomeCallable IgtmClient::DescribeMonitorsCallable(const DescribeMonitorsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMonitorsOutcome>>();
    DescribeMonitorsAsync(
    request,
    [prom](
        const IgtmClient*,
        const DescribeMonitorsRequest&,
        DescribeMonitorsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DescribeQuotasOutcome IgtmClient::DescribeQuotas(const DescribeQuotasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQuotas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQuotasResponse rsp = DescribeQuotasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQuotasOutcome(rsp);
        else
            return DescribeQuotasOutcome(o.GetError());
    }
    else
    {
        return DescribeQuotasOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeQuotasAsync(const DescribeQuotasRequest& request, const DescribeQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQuotasRequest&;
    using Resp = DescribeQuotasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQuotas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DescribeQuotasOutcomeCallable IgtmClient::DescribeQuotasCallable(const DescribeQuotasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQuotasOutcome>>();
    DescribeQuotasAsync(
    request,
    [prom](
        const IgtmClient*,
        const DescribeQuotasRequest&,
        DescribeQuotasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DescribeStrategyDetailOutcome IgtmClient::DescribeStrategyDetail(const DescribeStrategyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStrategyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStrategyDetailResponse rsp = DescribeStrategyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStrategyDetailOutcome(rsp);
        else
            return DescribeStrategyDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeStrategyDetailOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeStrategyDetailAsync(const DescribeStrategyDetailRequest& request, const DescribeStrategyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStrategyDetailRequest&;
    using Resp = DescribeStrategyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStrategyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DescribeStrategyDetailOutcomeCallable IgtmClient::DescribeStrategyDetailCallable(const DescribeStrategyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStrategyDetailOutcome>>();
    DescribeStrategyDetailAsync(
    request,
    [prom](
        const IgtmClient*,
        const DescribeStrategyDetailRequest&,
        DescribeStrategyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::DescribeStrategyListOutcome IgtmClient::DescribeStrategyList(const DescribeStrategyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStrategyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStrategyListResponse rsp = DescribeStrategyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStrategyListOutcome(rsp);
        else
            return DescribeStrategyListOutcome(o.GetError());
    }
    else
    {
        return DescribeStrategyListOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeStrategyListAsync(const DescribeStrategyListRequest& request, const DescribeStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStrategyListRequest&;
    using Resp = DescribeStrategyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStrategyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::DescribeStrategyListOutcomeCallable IgtmClient::DescribeStrategyListCallable(const DescribeStrategyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStrategyListOutcome>>();
    DescribeStrategyListAsync(
    request,
    [prom](
        const IgtmClient*,
        const DescribeStrategyListRequest&,
        DescribeStrategyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::ModifyAddressPoolOutcome IgtmClient::ModifyAddressPool(const ModifyAddressPoolRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressPool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressPoolResponse rsp = ModifyAddressPoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressPoolOutcome(rsp);
        else
            return ModifyAddressPoolOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressPoolOutcome(outcome.GetError());
    }
}

void IgtmClient::ModifyAddressPoolAsync(const ModifyAddressPoolRequest& request, const ModifyAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAddressPoolRequest&;
    using Resp = ModifyAddressPoolResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAddressPool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::ModifyAddressPoolOutcomeCallable IgtmClient::ModifyAddressPoolCallable(const ModifyAddressPoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAddressPoolOutcome>>();
    ModifyAddressPoolAsync(
    request,
    [prom](
        const IgtmClient*,
        const ModifyAddressPoolRequest&,
        ModifyAddressPoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::ModifyInstanceConfigOutcome IgtmClient::ModifyInstanceConfig(const ModifyInstanceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceConfigResponse rsp = ModifyInstanceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceConfigOutcome(rsp);
        else
            return ModifyInstanceConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceConfigOutcome(outcome.GetError());
    }
}

void IgtmClient::ModifyInstanceConfigAsync(const ModifyInstanceConfigRequest& request, const ModifyInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceConfigRequest&;
    using Resp = ModifyInstanceConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::ModifyInstanceConfigOutcomeCallable IgtmClient::ModifyInstanceConfigCallable(const ModifyInstanceConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceConfigOutcome>>();
    ModifyInstanceConfigAsync(
    request,
    [prom](
        const IgtmClient*,
        const ModifyInstanceConfigRequest&,
        ModifyInstanceConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::ModifyMonitorOutcome IgtmClient::ModifyMonitor(const ModifyMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMonitorResponse rsp = ModifyMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMonitorOutcome(rsp);
        else
            return ModifyMonitorOutcome(o.GetError());
    }
    else
    {
        return ModifyMonitorOutcome(outcome.GetError());
    }
}

void IgtmClient::ModifyMonitorAsync(const ModifyMonitorRequest& request, const ModifyMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMonitorRequest&;
    using Resp = ModifyMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::ModifyMonitorOutcomeCallable IgtmClient::ModifyMonitorCallable(const ModifyMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMonitorOutcome>>();
    ModifyMonitorAsync(
    request,
    [prom](
        const IgtmClient*,
        const ModifyMonitorRequest&,
        ModifyMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::ModifyPackageAutoRenewOutcome IgtmClient::ModifyPackageAutoRenew(const ModifyPackageAutoRenewRequest &request)
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

void IgtmClient::ModifyPackageAutoRenewAsync(const ModifyPackageAutoRenewRequest& request, const ModifyPackageAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IgtmClient::ModifyPackageAutoRenewOutcomeCallable IgtmClient::ModifyPackageAutoRenewCallable(const ModifyPackageAutoRenewRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPackageAutoRenewOutcome>>();
    ModifyPackageAutoRenewAsync(
    request,
    [prom](
        const IgtmClient*,
        const ModifyPackageAutoRenewRequest&,
        ModifyPackageAutoRenewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgtmClient::ModifyStrategyOutcome IgtmClient::ModifyStrategy(const ModifyStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStrategyResponse rsp = ModifyStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStrategyOutcome(rsp);
        else
            return ModifyStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyStrategyOutcome(outcome.GetError());
    }
}

void IgtmClient::ModifyStrategyAsync(const ModifyStrategyRequest& request, const ModifyStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStrategyRequest&;
    using Resp = ModifyStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgtmClient::ModifyStrategyOutcomeCallable IgtmClient::ModifyStrategyCallable(const ModifyStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStrategyOutcome>>();
    ModifyStrategyAsync(
    request,
    [prom](
        const IgtmClient*,
        const ModifyStrategyRequest&,
        ModifyStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

