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

WafClient::AddDomainWhiteRuleOutcome WafClient::AddDomainWhiteRule(const AddDomainWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddDomainWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddDomainWhiteRuleResponse rsp = AddDomainWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddDomainWhiteRuleOutcome(rsp);
        else
            return AddDomainWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return AddDomainWhiteRuleOutcome(outcome.GetError());
    }
}

void WafClient::AddDomainWhiteRuleAsync(const AddDomainWhiteRuleRequest& request, const AddDomainWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddDomainWhiteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::AddDomainWhiteRuleOutcomeCallable WafClient::AddDomainWhiteRuleCallable(const AddDomainWhiteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddDomainWhiteRuleOutcome()>>(
        [this, request]()
        {
            return this->AddDomainWhiteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::AddSpartaProtectionOutcome WafClient::AddSpartaProtection(const AddSpartaProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "AddSpartaProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddSpartaProtectionResponse rsp = AddSpartaProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddSpartaProtectionOutcome(rsp);
        else
            return AddSpartaProtectionOutcome(o.GetError());
    }
    else
    {
        return AddSpartaProtectionOutcome(outcome.GetError());
    }
}

void WafClient::AddSpartaProtectionAsync(const AddSpartaProtectionRequest& request, const AddSpartaProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddSpartaProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::AddSpartaProtectionOutcomeCallable WafClient::AddSpartaProtectionCallable(const AddSpartaProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddSpartaProtectionOutcome()>>(
        [this, request]()
        {
            return this->AddSpartaProtection(request);
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

WafClient::DeleteDomainWhiteRulesOutcome WafClient::DeleteDomainWhiteRules(const DeleteDomainWhiteRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainWhiteRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainWhiteRulesResponse rsp = DeleteDomainWhiteRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainWhiteRulesOutcome(rsp);
        else
            return DeleteDomainWhiteRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainWhiteRulesOutcome(outcome.GetError());
    }
}

void WafClient::DeleteDomainWhiteRulesAsync(const DeleteDomainWhiteRulesRequest& request, const DeleteDomainWhiteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDomainWhiteRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteDomainWhiteRulesOutcomeCallable WafClient::DeleteDomainWhiteRulesCallable(const DeleteDomainWhiteRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDomainWhiteRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteDomainWhiteRules(request);
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

WafClient::DeleteIpAccessControlOutcome WafClient::DeleteIpAccessControl(const DeleteIpAccessControlRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIpAccessControl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIpAccessControlResponse rsp = DeleteIpAccessControlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIpAccessControlOutcome(rsp);
        else
            return DeleteIpAccessControlOutcome(o.GetError());
    }
    else
    {
        return DeleteIpAccessControlOutcome(outcome.GetError());
    }
}

void WafClient::DeleteIpAccessControlAsync(const DeleteIpAccessControlRequest& request, const DeleteIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIpAccessControl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteIpAccessControlOutcomeCallable WafClient::DeleteIpAccessControlCallable(const DeleteIpAccessControlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIpAccessControlOutcome()>>(
        [this, request]()
        {
            return this->DeleteIpAccessControl(request);
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

WafClient::DescribeAutoDenyIPOutcome WafClient::DescribeAutoDenyIP(const DescribeAutoDenyIPRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoDenyIP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoDenyIPResponse rsp = DescribeAutoDenyIPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoDenyIPOutcome(rsp);
        else
            return DescribeAutoDenyIPOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoDenyIPOutcome(outcome.GetError());
    }
}

void WafClient::DescribeAutoDenyIPAsync(const DescribeAutoDenyIPRequest& request, const DescribeAutoDenyIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoDenyIP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeAutoDenyIPOutcomeCallable WafClient::DescribeAutoDenyIPCallable(const DescribeAutoDenyIPRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoDenyIPOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoDenyIP(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeDomainWhiteRulesOutcome WafClient::DescribeDomainWhiteRules(const DescribeDomainWhiteRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainWhiteRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainWhiteRulesResponse rsp = DescribeDomainWhiteRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainWhiteRulesOutcome(rsp);
        else
            return DescribeDomainWhiteRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainWhiteRulesOutcome(outcome.GetError());
    }
}

void WafClient::DescribeDomainWhiteRulesAsync(const DescribeDomainWhiteRulesRequest& request, const DescribeDomainWhiteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainWhiteRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeDomainWhiteRulesOutcomeCallable WafClient::DescribeDomainWhiteRulesCallable(const DescribeDomainWhiteRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainWhiteRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainWhiteRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeDomainsOutcome WafClient::DescribeDomains(const DescribeDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainsResponse rsp = DescribeDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainsOutcome(rsp);
        else
            return DescribeDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainsOutcome(outcome.GetError());
    }
}

void WafClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeDomainsOutcomeCallable WafClient::DescribeDomainsCallable(const DescribeDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomains(request);
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

WafClient::DescribeInstancesOutcome WafClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void WafClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeInstancesOutcomeCallable WafClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeIpAccessControlOutcome WafClient::DescribeIpAccessControl(const DescribeIpAccessControlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpAccessControl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpAccessControlResponse rsp = DescribeIpAccessControlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpAccessControlOutcome(rsp);
        else
            return DescribeIpAccessControlOutcome(o.GetError());
    }
    else
    {
        return DescribeIpAccessControlOutcome(outcome.GetError());
    }
}

void WafClient::DescribeIpAccessControlAsync(const DescribeIpAccessControlRequest& request, const DescribeIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIpAccessControl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeIpAccessControlOutcomeCallable WafClient::DescribeIpAccessControlCallable(const DescribeIpAccessControlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIpAccessControlOutcome()>>(
        [this, request]()
        {
            return this->DescribeIpAccessControl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeIpHitItemsOutcome WafClient::DescribeIpHitItems(const DescribeIpHitItemsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpHitItems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpHitItemsResponse rsp = DescribeIpHitItemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpHitItemsOutcome(rsp);
        else
            return DescribeIpHitItemsOutcome(o.GetError());
    }
    else
    {
        return DescribeIpHitItemsOutcome(outcome.GetError());
    }
}

void WafClient::DescribeIpHitItemsAsync(const DescribeIpHitItemsRequest& request, const DescribeIpHitItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIpHitItems(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeIpHitItemsOutcomeCallable WafClient::DescribeIpHitItemsCallable(const DescribeIpHitItemsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIpHitItemsOutcome()>>(
        [this, request]()
        {
            return this->DescribeIpHitItems(request);
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

WafClient::DescribeWafAutoDenyRulesOutcome WafClient::DescribeWafAutoDenyRules(const DescribeWafAutoDenyRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWafAutoDenyRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWafAutoDenyRulesResponse rsp = DescribeWafAutoDenyRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWafAutoDenyRulesOutcome(rsp);
        else
            return DescribeWafAutoDenyRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeWafAutoDenyRulesOutcome(outcome.GetError());
    }
}

void WafClient::DescribeWafAutoDenyRulesAsync(const DescribeWafAutoDenyRulesRequest& request, const DescribeWafAutoDenyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWafAutoDenyRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeWafAutoDenyRulesOutcomeCallable WafClient::DescribeWafAutoDenyRulesCallable(const DescribeWafAutoDenyRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWafAutoDenyRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeWafAutoDenyRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeWafAutoDenyStatusOutcome WafClient::DescribeWafAutoDenyStatus(const DescribeWafAutoDenyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWafAutoDenyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWafAutoDenyStatusResponse rsp = DescribeWafAutoDenyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWafAutoDenyStatusOutcome(rsp);
        else
            return DescribeWafAutoDenyStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeWafAutoDenyStatusOutcome(outcome.GetError());
    }
}

void WafClient::DescribeWafAutoDenyStatusAsync(const DescribeWafAutoDenyStatusRequest& request, const DescribeWafAutoDenyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWafAutoDenyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeWafAutoDenyStatusOutcomeCallable WafClient::DescribeWafAutoDenyStatusCallable(const DescribeWafAutoDenyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWafAutoDenyStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeWafAutoDenyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeWafThreatenIntelligenceOutcome WafClient::DescribeWafThreatenIntelligence(const DescribeWafThreatenIntelligenceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWafThreatenIntelligence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWafThreatenIntelligenceResponse rsp = DescribeWafThreatenIntelligenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWafThreatenIntelligenceOutcome(rsp);
        else
            return DescribeWafThreatenIntelligenceOutcome(o.GetError());
    }
    else
    {
        return DescribeWafThreatenIntelligenceOutcome(outcome.GetError());
    }
}

void WafClient::DescribeWafThreatenIntelligenceAsync(const DescribeWafThreatenIntelligenceRequest& request, const DescribeWafThreatenIntelligenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWafThreatenIntelligence(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeWafThreatenIntelligenceOutcomeCallable WafClient::DescribeWafThreatenIntelligenceCallable(const DescribeWafThreatenIntelligenceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWafThreatenIntelligenceOutcome()>>(
        [this, request]()
        {
            return this->DescribeWafThreatenIntelligence(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::GetAttackDownloadRecordsOutcome WafClient::GetAttackDownloadRecords(const GetAttackDownloadRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "GetAttackDownloadRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAttackDownloadRecordsResponse rsp = GetAttackDownloadRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAttackDownloadRecordsOutcome(rsp);
        else
            return GetAttackDownloadRecordsOutcome(o.GetError());
    }
    else
    {
        return GetAttackDownloadRecordsOutcome(outcome.GetError());
    }
}

void WafClient::GetAttackDownloadRecordsAsync(const GetAttackDownloadRecordsRequest& request, const GetAttackDownloadRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAttackDownloadRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::GetAttackDownloadRecordsOutcomeCallable WafClient::GetAttackDownloadRecordsCallable(const GetAttackDownloadRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAttackDownloadRecordsOutcome()>>(
        [this, request]()
        {
            return this->GetAttackDownloadRecords(request);
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

WafClient::ModifyDomainWhiteRuleOutcome WafClient::ModifyDomainWhiteRule(const ModifyDomainWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainWhiteRuleResponse rsp = ModifyDomainWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainWhiteRuleOutcome(rsp);
        else
            return ModifyDomainWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainWhiteRuleOutcome(outcome.GetError());
    }
}

void WafClient::ModifyDomainWhiteRuleAsync(const ModifyDomainWhiteRuleRequest& request, const ModifyDomainWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainWhiteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyDomainWhiteRuleOutcomeCallable WafClient::ModifyDomainWhiteRuleCallable(const ModifyDomainWhiteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainWhiteRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainWhiteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::ModifyWafAutoDenyRulesOutcome WafClient::ModifyWafAutoDenyRules(const ModifyWafAutoDenyRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWafAutoDenyRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWafAutoDenyRulesResponse rsp = ModifyWafAutoDenyRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWafAutoDenyRulesOutcome(rsp);
        else
            return ModifyWafAutoDenyRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyWafAutoDenyRulesOutcome(outcome.GetError());
    }
}

void WafClient::ModifyWafAutoDenyRulesAsync(const ModifyWafAutoDenyRulesRequest& request, const ModifyWafAutoDenyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWafAutoDenyRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyWafAutoDenyRulesOutcomeCallable WafClient::ModifyWafAutoDenyRulesCallable(const ModifyWafAutoDenyRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWafAutoDenyRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyWafAutoDenyRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::ModifyWafAutoDenyStatusOutcome WafClient::ModifyWafAutoDenyStatus(const ModifyWafAutoDenyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWafAutoDenyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWafAutoDenyStatusResponse rsp = ModifyWafAutoDenyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWafAutoDenyStatusOutcome(rsp);
        else
            return ModifyWafAutoDenyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyWafAutoDenyStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyWafAutoDenyStatusAsync(const ModifyWafAutoDenyStatusRequest& request, const ModifyWafAutoDenyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWafAutoDenyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyWafAutoDenyStatusOutcomeCallable WafClient::ModifyWafAutoDenyStatusCallable(const ModifyWafAutoDenyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWafAutoDenyStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyWafAutoDenyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::ModifyWafThreatenIntelligenceOutcome WafClient::ModifyWafThreatenIntelligence(const ModifyWafThreatenIntelligenceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWafThreatenIntelligence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWafThreatenIntelligenceResponse rsp = ModifyWafThreatenIntelligenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWafThreatenIntelligenceOutcome(rsp);
        else
            return ModifyWafThreatenIntelligenceOutcome(o.GetError());
    }
    else
    {
        return ModifyWafThreatenIntelligenceOutcome(outcome.GetError());
    }
}

void WafClient::ModifyWafThreatenIntelligenceAsync(const ModifyWafThreatenIntelligenceRequest& request, const ModifyWafThreatenIntelligenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWafThreatenIntelligence(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyWafThreatenIntelligenceOutcomeCallable WafClient::ModifyWafThreatenIntelligenceCallable(const ModifyWafThreatenIntelligenceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWafThreatenIntelligenceOutcome()>>(
        [this, request]()
        {
            return this->ModifyWafThreatenIntelligence(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::PostAttackDownloadTaskOutcome WafClient::PostAttackDownloadTask(const PostAttackDownloadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "PostAttackDownloadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PostAttackDownloadTaskResponse rsp = PostAttackDownloadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PostAttackDownloadTaskOutcome(rsp);
        else
            return PostAttackDownloadTaskOutcome(o.GetError());
    }
    else
    {
        return PostAttackDownloadTaskOutcome(outcome.GetError());
    }
}

void WafClient::PostAttackDownloadTaskAsync(const PostAttackDownloadTaskRequest& request, const PostAttackDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PostAttackDownloadTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::PostAttackDownloadTaskOutcomeCallable WafClient::PostAttackDownloadTaskCallable(const PostAttackDownloadTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PostAttackDownloadTaskOutcome()>>(
        [this, request]()
        {
            return this->PostAttackDownloadTask(request);
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

WafClient::UpsertIpAccessControlOutcome WafClient::UpsertIpAccessControl(const UpsertIpAccessControlRequest &request)
{
    auto outcome = MakeRequest(request, "UpsertIpAccessControl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpsertIpAccessControlResponse rsp = UpsertIpAccessControlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpsertIpAccessControlOutcome(rsp);
        else
            return UpsertIpAccessControlOutcome(o.GetError());
    }
    else
    {
        return UpsertIpAccessControlOutcome(outcome.GetError());
    }
}

void WafClient::UpsertIpAccessControlAsync(const UpsertIpAccessControlRequest& request, const UpsertIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpsertIpAccessControl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::UpsertIpAccessControlOutcomeCallable WafClient::UpsertIpAccessControlCallable(const UpsertIpAccessControlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpsertIpAccessControlOutcome()>>(
        [this, request]()
        {
            return this->UpsertIpAccessControl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

