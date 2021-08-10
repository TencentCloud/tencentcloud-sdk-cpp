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

#include <tencentcloud/waf/v20180125/WafClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Waf::V20180125;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-01-25";
    const string ENDPOINT = "waf.tencentcloudapi.com";
}

WafClient::WafClient(const Credential &credential, const string &region) :
    WafClient(credential, region, ClientProfile())
{
}

WafClient::WafClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WafClient::AddCustomRuleOutcome WafClient::AddCustomRule(const AddCustomRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddCustomRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCustomRuleResponse rsp = AddCustomRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCustomRuleOutcome(rsp);
        else
            return AddCustomRuleOutcome(o.GetError());
    }
    else
    {
        return AddCustomRuleOutcome(outcome.GetError());
    }
}

void WafClient::AddCustomRuleAsync(const AddCustomRuleRequest& request, const AddCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCustomRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::AddCustomRuleOutcomeCallable WafClient::AddCustomRuleCallable(const AddCustomRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCustomRuleOutcome()>>(
        [this, request]()
        {
            return this->AddCustomRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::CreateAccessExportOutcome WafClient::CreateAccessExport(const CreateAccessExportRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccessExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccessExportResponse rsp = CreateAccessExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccessExportOutcome(rsp);
        else
            return CreateAccessExportOutcome(o.GetError());
    }
    else
    {
        return CreateAccessExportOutcome(outcome.GetError());
    }
}

void WafClient::CreateAccessExportAsync(const CreateAccessExportRequest& request, const CreateAccessExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccessExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::CreateAccessExportOutcomeCallable WafClient::CreateAccessExportCallable(const CreateAccessExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccessExportOutcome()>>(
        [this, request]()
        {
            return this->CreateAccessExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::CreateAttackDownloadTaskOutcome WafClient::CreateAttackDownloadTask(const CreateAttackDownloadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAttackDownloadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAttackDownloadTaskResponse rsp = CreateAttackDownloadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAttackDownloadTaskOutcome(rsp);
        else
            return CreateAttackDownloadTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAttackDownloadTaskOutcome(outcome.GetError());
    }
}

void WafClient::CreateAttackDownloadTaskAsync(const CreateAttackDownloadTaskRequest& request, const CreateAttackDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAttackDownloadTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::CreateAttackDownloadTaskOutcomeCallable WafClient::CreateAttackDownloadTaskCallable(const CreateAttackDownloadTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAttackDownloadTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAttackDownloadTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DeleteAccessExportOutcome WafClient::DeleteAccessExport(const DeleteAccessExportRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccessExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccessExportResponse rsp = DeleteAccessExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccessExportOutcome(rsp);
        else
            return DeleteAccessExportOutcome(o.GetError());
    }
    else
    {
        return DeleteAccessExportOutcome(outcome.GetError());
    }
}

void WafClient::DeleteAccessExportAsync(const DeleteAccessExportRequest& request, const DeleteAccessExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccessExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteAccessExportOutcomeCallable WafClient::DeleteAccessExportCallable(const DeleteAccessExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAccessExportOutcome()>>(
        [this, request]()
        {
            return this->DeleteAccessExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DeleteAttackDownloadRecordOutcome WafClient::DeleteAttackDownloadRecord(const DeleteAttackDownloadRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAttackDownloadRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAttackDownloadRecordResponse rsp = DeleteAttackDownloadRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAttackDownloadRecordOutcome(rsp);
        else
            return DeleteAttackDownloadRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteAttackDownloadRecordOutcome(outcome.GetError());
    }
}

void WafClient::DeleteAttackDownloadRecordAsync(const DeleteAttackDownloadRecordRequest& request, const DeleteAttackDownloadRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAttackDownloadRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteAttackDownloadRecordOutcomeCallable WafClient::DeleteAttackDownloadRecordCallable(const DeleteAttackDownloadRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAttackDownloadRecordOutcome()>>(
        [this, request]()
        {
            return this->DeleteAttackDownloadRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DeleteDownloadRecordOutcome WafClient::DeleteDownloadRecord(const DeleteDownloadRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDownloadRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDownloadRecordResponse rsp = DeleteDownloadRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDownloadRecordOutcome(rsp);
        else
            return DeleteDownloadRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteDownloadRecordOutcome(outcome.GetError());
    }
}

void WafClient::DeleteDownloadRecordAsync(const DeleteDownloadRecordRequest& request, const DeleteDownloadRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDownloadRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteDownloadRecordOutcomeCallable WafClient::DeleteDownloadRecordCallable(const DeleteDownloadRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDownloadRecordOutcome()>>(
        [this, request]()
        {
            return this->DeleteDownloadRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DeleteSessionOutcome WafClient::DeleteSession(const DeleteSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSessionResponse rsp = DeleteSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSessionOutcome(rsp);
        else
            return DeleteSessionOutcome(o.GetError());
    }
    else
    {
        return DeleteSessionOutcome(outcome.GetError());
    }
}

void WafClient::DeleteSessionAsync(const DeleteSessionRequest& request, const DeleteSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteSessionOutcomeCallable WafClient::DeleteSessionCallable(const DeleteSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSessionOutcome()>>(
        [this, request]()
        {
            return this->DeleteSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeAccessExportsOutcome WafClient::DescribeAccessExports(const DescribeAccessExportsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessExports");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessExportsResponse rsp = DescribeAccessExportsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessExportsOutcome(rsp);
        else
            return DescribeAccessExportsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessExportsOutcome(outcome.GetError());
    }
}

void WafClient::DescribeAccessExportsAsync(const DescribeAccessExportsRequest& request, const DescribeAccessExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessExports(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeAccessExportsOutcomeCallable WafClient::DescribeAccessExportsCallable(const DescribeAccessExportsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessExportsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessExports(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeAccessFastAnalysisOutcome WafClient::DescribeAccessFastAnalysis(const DescribeAccessFastAnalysisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessFastAnalysis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessFastAnalysisResponse rsp = DescribeAccessFastAnalysisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessFastAnalysisOutcome(rsp);
        else
            return DescribeAccessFastAnalysisOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessFastAnalysisOutcome(outcome.GetError());
    }
}

void WafClient::DescribeAccessFastAnalysisAsync(const DescribeAccessFastAnalysisRequest& request, const DescribeAccessFastAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessFastAnalysis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeAccessFastAnalysisOutcomeCallable WafClient::DescribeAccessFastAnalysisCallable(const DescribeAccessFastAnalysisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessFastAnalysisOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessFastAnalysis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeAccessIndexOutcome WafClient::DescribeAccessIndex(const DescribeAccessIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessIndexResponse rsp = DescribeAccessIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessIndexOutcome(rsp);
        else
            return DescribeAccessIndexOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessIndexOutcome(outcome.GetError());
    }
}

void WafClient::DescribeAccessIndexAsync(const DescribeAccessIndexRequest& request, const DescribeAccessIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeAccessIndexOutcomeCallable WafClient::DescribeAccessIndexCallable(const DescribeAccessIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessIndexOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeCustomRulesOutcome WafClient::DescribeCustomRules(const DescribeCustomRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomRulesResponse rsp = DescribeCustomRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomRulesOutcome(rsp);
        else
            return DescribeCustomRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomRulesOutcome(outcome.GetError());
    }
}

void WafClient::DescribeCustomRulesAsync(const DescribeCustomRulesRequest& request, const DescribeCustomRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeCustomRulesOutcomeCallable WafClient::DescribeCustomRulesCallable(const DescribeCustomRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeFlowTrendOutcome WafClient::DescribeFlowTrend(const DescribeFlowTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowTrendResponse rsp = DescribeFlowTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowTrendOutcome(rsp);
        else
            return DescribeFlowTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowTrendOutcome(outcome.GetError());
    }
}

void WafClient::DescribeFlowTrendAsync(const DescribeFlowTrendRequest& request, const DescribeFlowTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeFlowTrendOutcomeCallable WafClient::DescribeFlowTrendCallable(const DescribeFlowTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeUserClbWafRegionsOutcome WafClient::DescribeUserClbWafRegions(const DescribeUserClbWafRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserClbWafRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserClbWafRegionsResponse rsp = DescribeUserClbWafRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserClbWafRegionsOutcome(rsp);
        else
            return DescribeUserClbWafRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeUserClbWafRegionsOutcome(outcome.GetError());
    }
}

void WafClient::DescribeUserClbWafRegionsAsync(const DescribeUserClbWafRegionsRequest& request, const DescribeUserClbWafRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserClbWafRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeUserClbWafRegionsOutcomeCallable WafClient::DescribeUserClbWafRegionsCallable(const DescribeUserClbWafRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserClbWafRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserClbWafRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::ModifyAccessPeriodOutcome WafClient::ModifyAccessPeriod(const ModifyAccessPeriodRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccessPeriod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccessPeriodResponse rsp = ModifyAccessPeriodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccessPeriodOutcome(rsp);
        else
            return ModifyAccessPeriodOutcome(o.GetError());
    }
    else
    {
        return ModifyAccessPeriodOutcome(outcome.GetError());
    }
}

void WafClient::ModifyAccessPeriodAsync(const ModifyAccessPeriodRequest& request, const ModifyAccessPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccessPeriod(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyAccessPeriodOutcomeCallable WafClient::ModifyAccessPeriodCallable(const ModifyAccessPeriodRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccessPeriodOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccessPeriod(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::ModifyCustomRuleStatusOutcome WafClient::ModifyCustomRuleStatus(const ModifyCustomRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomRuleStatusResponse rsp = ModifyCustomRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomRuleStatusOutcome(rsp);
        else
            return ModifyCustomRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomRuleStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyCustomRuleStatusAsync(const ModifyCustomRuleStatusRequest& request, const ModifyCustomRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyCustomRuleStatusOutcomeCallable WafClient::ModifyCustomRuleStatusCallable(const ModifyCustomRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::SearchAccessLogOutcome WafClient::SearchAccessLog(const SearchAccessLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchAccessLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchAccessLogResponse rsp = SearchAccessLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchAccessLogOutcome(rsp);
        else
            return SearchAccessLogOutcome(o.GetError());
    }
    else
    {
        return SearchAccessLogOutcome(outcome.GetError());
    }
}

void WafClient::SearchAccessLogAsync(const SearchAccessLogRequest& request, const SearchAccessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchAccessLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::SearchAccessLogOutcomeCallable WafClient::SearchAccessLogCallable(const SearchAccessLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchAccessLogOutcome()>>(
        [this, request]()
        {
            return this->SearchAccessLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

