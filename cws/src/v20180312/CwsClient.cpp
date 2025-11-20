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

#include <tencentcloud/cws/v20180312/CwsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cws::V20180312;
using namespace TencentCloud::Cws::V20180312::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-12";
    const string ENDPOINT = "cws.tencentcloudapi.com";
}

CwsClient::CwsClient(const Credential &credential, const string &region) :
    CwsClient(credential, region, ClientProfile())
{
}

CwsClient::CwsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CwsClient::CreateMonitorsOutcome CwsClient::CreateMonitors(const CreateMonitorsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMonitors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMonitorsResponse rsp = CreateMonitorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMonitorsOutcome(rsp);
        else
            return CreateMonitorsOutcome(o.GetError());
    }
    else
    {
        return CreateMonitorsOutcome(outcome.GetError());
    }
}

void CwsClient::CreateMonitorsAsync(const CreateMonitorsRequest& request, const CreateMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMonitorsRequest&;
    using Resp = CreateMonitorsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMonitors", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::CreateMonitorsOutcomeCallable CwsClient::CreateMonitorsCallable(const CreateMonitorsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMonitorsOutcome>>();
    CreateMonitorsAsync(
    request,
    [prom](
        const CwsClient*,
        const CreateMonitorsRequest&,
        CreateMonitorsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::CreateSitesOutcome CwsClient::CreateSites(const CreateSitesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSites");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSitesResponse rsp = CreateSitesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSitesOutcome(rsp);
        else
            return CreateSitesOutcome(o.GetError());
    }
    else
    {
        return CreateSitesOutcome(outcome.GetError());
    }
}

void CwsClient::CreateSitesAsync(const CreateSitesRequest& request, const CreateSitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSitesRequest&;
    using Resp = CreateSitesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSites", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::CreateSitesOutcomeCallable CwsClient::CreateSitesCallable(const CreateSitesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSitesOutcome>>();
    CreateSitesAsync(
    request,
    [prom](
        const CwsClient*,
        const CreateSitesRequest&,
        CreateSitesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::CreateSitesScansOutcome CwsClient::CreateSitesScans(const CreateSitesScansRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSitesScans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSitesScansResponse rsp = CreateSitesScansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSitesScansOutcome(rsp);
        else
            return CreateSitesScansOutcome(o.GetError());
    }
    else
    {
        return CreateSitesScansOutcome(outcome.GetError());
    }
}

void CwsClient::CreateSitesScansAsync(const CreateSitesScansRequest& request, const CreateSitesScansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSitesScansRequest&;
    using Resp = CreateSitesScansResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSitesScans", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::CreateSitesScansOutcomeCallable CwsClient::CreateSitesScansCallable(const CreateSitesScansRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSitesScansOutcome>>();
    CreateSitesScansAsync(
    request,
    [prom](
        const CwsClient*,
        const CreateSitesScansRequest&,
        CreateSitesScansOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::CreateVulsMisinformationOutcome CwsClient::CreateVulsMisinformation(const CreateVulsMisinformationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVulsMisinformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVulsMisinformationResponse rsp = CreateVulsMisinformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVulsMisinformationOutcome(rsp);
        else
            return CreateVulsMisinformationOutcome(o.GetError());
    }
    else
    {
        return CreateVulsMisinformationOutcome(outcome.GetError());
    }
}

void CwsClient::CreateVulsMisinformationAsync(const CreateVulsMisinformationRequest& request, const CreateVulsMisinformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVulsMisinformationRequest&;
    using Resp = CreateVulsMisinformationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVulsMisinformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::CreateVulsMisinformationOutcomeCallable CwsClient::CreateVulsMisinformationCallable(const CreateVulsMisinformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVulsMisinformationOutcome>>();
    CreateVulsMisinformationAsync(
    request,
    [prom](
        const CwsClient*,
        const CreateVulsMisinformationRequest&,
        CreateVulsMisinformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::CreateVulsReportOutcome CwsClient::CreateVulsReport(const CreateVulsReportRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVulsReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVulsReportResponse rsp = CreateVulsReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVulsReportOutcome(rsp);
        else
            return CreateVulsReportOutcome(o.GetError());
    }
    else
    {
        return CreateVulsReportOutcome(outcome.GetError());
    }
}

void CwsClient::CreateVulsReportAsync(const CreateVulsReportRequest& request, const CreateVulsReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVulsReportRequest&;
    using Resp = CreateVulsReportResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVulsReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::CreateVulsReportOutcomeCallable CwsClient::CreateVulsReportCallable(const CreateVulsReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVulsReportOutcome>>();
    CreateVulsReportAsync(
    request,
    [prom](
        const CwsClient*,
        const CreateVulsReportRequest&,
        CreateVulsReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::DeleteMonitorsOutcome CwsClient::DeleteMonitors(const DeleteMonitorsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMonitors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMonitorsResponse rsp = DeleteMonitorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMonitorsOutcome(rsp);
        else
            return DeleteMonitorsOutcome(o.GetError());
    }
    else
    {
        return DeleteMonitorsOutcome(outcome.GetError());
    }
}

void CwsClient::DeleteMonitorsAsync(const DeleteMonitorsRequest& request, const DeleteMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMonitorsRequest&;
    using Resp = DeleteMonitorsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMonitors", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::DeleteMonitorsOutcomeCallable CwsClient::DeleteMonitorsCallable(const DeleteMonitorsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMonitorsOutcome>>();
    DeleteMonitorsAsync(
    request,
    [prom](
        const CwsClient*,
        const DeleteMonitorsRequest&,
        DeleteMonitorsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::DeleteSitesOutcome CwsClient::DeleteSites(const DeleteSitesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSites");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSitesResponse rsp = DeleteSitesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSitesOutcome(rsp);
        else
            return DeleteSitesOutcome(o.GetError());
    }
    else
    {
        return DeleteSitesOutcome(outcome.GetError());
    }
}

void CwsClient::DeleteSitesAsync(const DeleteSitesRequest& request, const DeleteSitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSitesRequest&;
    using Resp = DeleteSitesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSites", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::DeleteSitesOutcomeCallable CwsClient::DeleteSitesCallable(const DeleteSitesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSitesOutcome>>();
    DeleteSitesAsync(
    request,
    [prom](
        const CwsClient*,
        const DeleteSitesRequest&,
        DeleteSitesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::DescribeConfigOutcome CwsClient::DescribeConfig(const DescribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigResponse rsp = DescribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigOutcome(rsp);
        else
            return DescribeConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigOutcome(outcome.GetError());
    }
}

void CwsClient::DescribeConfigAsync(const DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigRequest&;
    using Resp = DescribeConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::DescribeConfigOutcomeCallable CwsClient::DescribeConfigCallable(const DescribeConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigOutcome>>();
    DescribeConfigAsync(
    request,
    [prom](
        const CwsClient*,
        const DescribeConfigRequest&,
        DescribeConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::DescribeMonitorsOutcome CwsClient::DescribeMonitors(const DescribeMonitorsRequest &request)
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

void CwsClient::DescribeMonitorsAsync(const DescribeMonitorsRequest& request, const DescribeMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CwsClient::DescribeMonitorsOutcomeCallable CwsClient::DescribeMonitorsCallable(const DescribeMonitorsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMonitorsOutcome>>();
    DescribeMonitorsAsync(
    request,
    [prom](
        const CwsClient*,
        const DescribeMonitorsRequest&,
        DescribeMonitorsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::DescribeSiteQuotaOutcome CwsClient::DescribeSiteQuota(const DescribeSiteQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSiteQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSiteQuotaResponse rsp = DescribeSiteQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSiteQuotaOutcome(rsp);
        else
            return DescribeSiteQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeSiteQuotaOutcome(outcome.GetError());
    }
}

void CwsClient::DescribeSiteQuotaAsync(const DescribeSiteQuotaRequest& request, const DescribeSiteQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSiteQuotaRequest&;
    using Resp = DescribeSiteQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSiteQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::DescribeSiteQuotaOutcomeCallable CwsClient::DescribeSiteQuotaCallable(const DescribeSiteQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSiteQuotaOutcome>>();
    DescribeSiteQuotaAsync(
    request,
    [prom](
        const CwsClient*,
        const DescribeSiteQuotaRequest&,
        DescribeSiteQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::DescribeSitesOutcome CwsClient::DescribeSites(const DescribeSitesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSites");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSitesResponse rsp = DescribeSitesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSitesOutcome(rsp);
        else
            return DescribeSitesOutcome(o.GetError());
    }
    else
    {
        return DescribeSitesOutcome(outcome.GetError());
    }
}

void CwsClient::DescribeSitesAsync(const DescribeSitesRequest& request, const DescribeSitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSitesRequest&;
    using Resp = DescribeSitesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSites", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::DescribeSitesOutcomeCallable CwsClient::DescribeSitesCallable(const DescribeSitesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSitesOutcome>>();
    DescribeSitesAsync(
    request,
    [prom](
        const CwsClient*,
        const DescribeSitesRequest&,
        DescribeSitesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::DescribeSitesVerificationOutcome CwsClient::DescribeSitesVerification(const DescribeSitesVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSitesVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSitesVerificationResponse rsp = DescribeSitesVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSitesVerificationOutcome(rsp);
        else
            return DescribeSitesVerificationOutcome(o.GetError());
    }
    else
    {
        return DescribeSitesVerificationOutcome(outcome.GetError());
    }
}

void CwsClient::DescribeSitesVerificationAsync(const DescribeSitesVerificationRequest& request, const DescribeSitesVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSitesVerificationRequest&;
    using Resp = DescribeSitesVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSitesVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::DescribeSitesVerificationOutcomeCallable CwsClient::DescribeSitesVerificationCallable(const DescribeSitesVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSitesVerificationOutcome>>();
    DescribeSitesVerificationAsync(
    request,
    [prom](
        const CwsClient*,
        const DescribeSitesVerificationRequest&,
        DescribeSitesVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::DescribeVulsOutcome CwsClient::DescribeVuls(const DescribeVulsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVuls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulsResponse rsp = DescribeVulsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulsOutcome(rsp);
        else
            return DescribeVulsOutcome(o.GetError());
    }
    else
    {
        return DescribeVulsOutcome(outcome.GetError());
    }
}

void CwsClient::DescribeVulsAsync(const DescribeVulsRequest& request, const DescribeVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulsRequest&;
    using Resp = DescribeVulsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVuls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::DescribeVulsOutcomeCallable CwsClient::DescribeVulsCallable(const DescribeVulsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulsOutcome>>();
    DescribeVulsAsync(
    request,
    [prom](
        const CwsClient*,
        const DescribeVulsRequest&,
        DescribeVulsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::DescribeVulsNumberOutcome CwsClient::DescribeVulsNumber(const DescribeVulsNumberRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulsNumber");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulsNumberResponse rsp = DescribeVulsNumberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulsNumberOutcome(rsp);
        else
            return DescribeVulsNumberOutcome(o.GetError());
    }
    else
    {
        return DescribeVulsNumberOutcome(outcome.GetError());
    }
}

void CwsClient::DescribeVulsNumberAsync(const DescribeVulsNumberRequest& request, const DescribeVulsNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulsNumberRequest&;
    using Resp = DescribeVulsNumberResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulsNumber", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::DescribeVulsNumberOutcomeCallable CwsClient::DescribeVulsNumberCallable(const DescribeVulsNumberRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulsNumberOutcome>>();
    DescribeVulsNumberAsync(
    request,
    [prom](
        const CwsClient*,
        const DescribeVulsNumberRequest&,
        DescribeVulsNumberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::DescribeVulsNumberTimelineOutcome CwsClient::DescribeVulsNumberTimeline(const DescribeVulsNumberTimelineRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulsNumberTimeline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulsNumberTimelineResponse rsp = DescribeVulsNumberTimelineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulsNumberTimelineOutcome(rsp);
        else
            return DescribeVulsNumberTimelineOutcome(o.GetError());
    }
    else
    {
        return DescribeVulsNumberTimelineOutcome(outcome.GetError());
    }
}

void CwsClient::DescribeVulsNumberTimelineAsync(const DescribeVulsNumberTimelineRequest& request, const DescribeVulsNumberTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulsNumberTimelineRequest&;
    using Resp = DescribeVulsNumberTimelineResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulsNumberTimeline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::DescribeVulsNumberTimelineOutcomeCallable CwsClient::DescribeVulsNumberTimelineCallable(const DescribeVulsNumberTimelineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulsNumberTimelineOutcome>>();
    DescribeVulsNumberTimelineAsync(
    request,
    [prom](
        const CwsClient*,
        const DescribeVulsNumberTimelineRequest&,
        DescribeVulsNumberTimelineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::ModifyConfigAttributeOutcome CwsClient::ModifyConfigAttribute(const ModifyConfigAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConfigAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConfigAttributeResponse rsp = ModifyConfigAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConfigAttributeOutcome(rsp);
        else
            return ModifyConfigAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyConfigAttributeOutcome(outcome.GetError());
    }
}

void CwsClient::ModifyConfigAttributeAsync(const ModifyConfigAttributeRequest& request, const ModifyConfigAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConfigAttributeRequest&;
    using Resp = ModifyConfigAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConfigAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::ModifyConfigAttributeOutcomeCallable CwsClient::ModifyConfigAttributeCallable(const ModifyConfigAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConfigAttributeOutcome>>();
    ModifyConfigAttributeAsync(
    request,
    [prom](
        const CwsClient*,
        const ModifyConfigAttributeRequest&,
        ModifyConfigAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::ModifyMonitorAttributeOutcome CwsClient::ModifyMonitorAttribute(const ModifyMonitorAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMonitorAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMonitorAttributeResponse rsp = ModifyMonitorAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMonitorAttributeOutcome(rsp);
        else
            return ModifyMonitorAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyMonitorAttributeOutcome(outcome.GetError());
    }
}

void CwsClient::ModifyMonitorAttributeAsync(const ModifyMonitorAttributeRequest& request, const ModifyMonitorAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMonitorAttributeRequest&;
    using Resp = ModifyMonitorAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMonitorAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::ModifyMonitorAttributeOutcomeCallable CwsClient::ModifyMonitorAttributeCallable(const ModifyMonitorAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMonitorAttributeOutcome>>();
    ModifyMonitorAttributeAsync(
    request,
    [prom](
        const CwsClient*,
        const ModifyMonitorAttributeRequest&,
        ModifyMonitorAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::ModifySiteAttributeOutcome CwsClient::ModifySiteAttribute(const ModifySiteAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySiteAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySiteAttributeResponse rsp = ModifySiteAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySiteAttributeOutcome(rsp);
        else
            return ModifySiteAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifySiteAttributeOutcome(outcome.GetError());
    }
}

void CwsClient::ModifySiteAttributeAsync(const ModifySiteAttributeRequest& request, const ModifySiteAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySiteAttributeRequest&;
    using Resp = ModifySiteAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySiteAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::ModifySiteAttributeOutcomeCallable CwsClient::ModifySiteAttributeCallable(const ModifySiteAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySiteAttributeOutcome>>();
    ModifySiteAttributeAsync(
    request,
    [prom](
        const CwsClient*,
        const ModifySiteAttributeRequest&,
        ModifySiteAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwsClient::VerifySitesOutcome CwsClient::VerifySites(const VerifySitesRequest &request)
{
    auto outcome = MakeRequest(request, "VerifySites");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifySitesResponse rsp = VerifySitesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifySitesOutcome(rsp);
        else
            return VerifySitesOutcome(o.GetError());
    }
    else
    {
        return VerifySitesOutcome(outcome.GetError());
    }
}

void CwsClient::VerifySitesAsync(const VerifySitesRequest& request, const VerifySitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifySitesRequest&;
    using Resp = VerifySitesResponse;

    DoRequestAsync<Req, Resp>(
        "VerifySites", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwsClient::VerifySitesOutcomeCallable CwsClient::VerifySitesCallable(const VerifySitesRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifySitesOutcome>>();
    VerifySitesAsync(
    request,
    [prom](
        const CwsClient*,
        const VerifySitesRequest&,
        VerifySitesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

