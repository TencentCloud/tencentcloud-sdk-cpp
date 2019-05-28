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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMonitors(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::CreateMonitorsOutcomeCallable CwsClient::CreateMonitorsCallable(const CreateMonitorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMonitorsOutcome()>>(
        [this, request]()
        {
            return this->CreateMonitors(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSites(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::CreateSitesOutcomeCallable CwsClient::CreateSitesCallable(const CreateSitesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSitesOutcome()>>(
        [this, request]()
        {
            return this->CreateSites(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSitesScans(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::CreateSitesScansOutcomeCallable CwsClient::CreateSitesScansCallable(const CreateSitesScansRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSitesScansOutcome()>>(
        [this, request]()
        {
            return this->CreateSitesScans(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVulsMisinformation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::CreateVulsMisinformationOutcomeCallable CwsClient::CreateVulsMisinformationCallable(const CreateVulsMisinformationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVulsMisinformationOutcome()>>(
        [this, request]()
        {
            return this->CreateVulsMisinformation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVulsReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::CreateVulsReportOutcomeCallable CwsClient::CreateVulsReportCallable(const CreateVulsReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVulsReportOutcome()>>(
        [this, request]()
        {
            return this->CreateVulsReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMonitors(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::DeleteMonitorsOutcomeCallable CwsClient::DeleteMonitorsCallable(const DeleteMonitorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMonitorsOutcome()>>(
        [this, request]()
        {
            return this->DeleteMonitors(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSites(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::DeleteSitesOutcomeCallable CwsClient::DeleteSitesCallable(const DeleteSitesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSitesOutcome()>>(
        [this, request]()
        {
            return this->DeleteSites(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::DescribeConfigOutcomeCallable CwsClient::DescribeConfigCallable(const DescribeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMonitors(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::DescribeMonitorsOutcomeCallable CwsClient::DescribeMonitorsCallable(const DescribeMonitorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMonitorsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMonitors(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSiteQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::DescribeSiteQuotaOutcomeCallable CwsClient::DescribeSiteQuotaCallable(const DescribeSiteQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSiteQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeSiteQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSites(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::DescribeSitesOutcomeCallable CwsClient::DescribeSitesCallable(const DescribeSitesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSitesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSites(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSitesVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::DescribeSitesVerificationOutcomeCallable CwsClient::DescribeSitesVerificationCallable(const DescribeSitesVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSitesVerificationOutcome()>>(
        [this, request]()
        {
            return this->DescribeSitesVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVuls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::DescribeVulsOutcomeCallable CwsClient::DescribeVulsCallable(const DescribeVulsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVuls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulsNumber(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::DescribeVulsNumberOutcomeCallable CwsClient::DescribeVulsNumberCallable(const DescribeVulsNumberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulsNumberOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulsNumber(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulsNumberTimeline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::DescribeVulsNumberTimelineOutcomeCallable CwsClient::DescribeVulsNumberTimelineCallable(const DescribeVulsNumberTimelineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulsNumberTimelineOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulsNumberTimeline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConfigAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::ModifyConfigAttributeOutcomeCallable CwsClient::ModifyConfigAttributeCallable(const ModifyConfigAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConfigAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyConfigAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMonitorAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::ModifyMonitorAttributeOutcomeCallable CwsClient::ModifyMonitorAttributeCallable(const ModifyMonitorAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMonitorAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyMonitorAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySiteAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::ModifySiteAttributeOutcomeCallable CwsClient::ModifySiteAttributeCallable(const ModifySiteAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySiteAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifySiteAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifySites(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwsClient::VerifySitesOutcomeCallable CwsClient::VerifySitesCallable(const VerifySitesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifySitesOutcome()>>(
        [this, request]()
        {
            return this->VerifySites(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

