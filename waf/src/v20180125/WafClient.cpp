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

WafClient::AddCustomWhiteRuleOutcome WafClient::AddCustomWhiteRule(const AddCustomWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddCustomWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCustomWhiteRuleResponse rsp = AddCustomWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCustomWhiteRuleOutcome(rsp);
        else
            return AddCustomWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return AddCustomWhiteRuleOutcome(outcome.GetError());
    }
}

void WafClient::AddCustomWhiteRuleAsync(const AddCustomWhiteRuleRequest& request, const AddCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCustomWhiteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::AddCustomWhiteRuleOutcomeCallable WafClient::AddCustomWhiteRuleCallable(const AddCustomWhiteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCustomWhiteRuleOutcome()>>(
        [this, request]()
        {
            return this->AddCustomWhiteRule(request);
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

WafClient::AddSpartaProtectionAutoOutcome WafClient::AddSpartaProtectionAuto(const AddSpartaProtectionAutoRequest &request)
{
    auto outcome = MakeRequest(request, "AddSpartaProtectionAuto");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddSpartaProtectionAutoResponse rsp = AddSpartaProtectionAutoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddSpartaProtectionAutoOutcome(rsp);
        else
            return AddSpartaProtectionAutoOutcome(o.GetError());
    }
    else
    {
        return AddSpartaProtectionAutoOutcome(outcome.GetError());
    }
}

void WafClient::AddSpartaProtectionAutoAsync(const AddSpartaProtectionAutoRequest& request, const AddSpartaProtectionAutoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddSpartaProtectionAuto(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::AddSpartaProtectionAutoOutcomeCallable WafClient::AddSpartaProtectionAutoCallable(const AddSpartaProtectionAutoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddSpartaProtectionAutoOutcome()>>(
        [this, request]()
        {
            return this->AddSpartaProtectionAuto(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::AddSpartaProtectionsAutoOutcome WafClient::AddSpartaProtectionsAuto(const AddSpartaProtectionsAutoRequest &request)
{
    auto outcome = MakeRequest(request, "AddSpartaProtectionsAuto");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddSpartaProtectionsAutoResponse rsp = AddSpartaProtectionsAutoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddSpartaProtectionsAutoOutcome(rsp);
        else
            return AddSpartaProtectionsAutoOutcome(o.GetError());
    }
    else
    {
        return AddSpartaProtectionsAutoOutcome(outcome.GetError());
    }
}

void WafClient::AddSpartaProtectionsAutoAsync(const AddSpartaProtectionsAutoRequest& request, const AddSpartaProtectionsAutoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddSpartaProtectionsAuto(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::AddSpartaProtectionsAutoOutcomeCallable WafClient::AddSpartaProtectionsAutoCallable(const AddSpartaProtectionsAutoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddSpartaProtectionsAutoOutcome()>>(
        [this, request]()
        {
            return this->AddSpartaProtectionsAuto(request);
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

WafClient::CreateHostOutcome WafClient::CreateHost(const CreateHostRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHostResponse rsp = CreateHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHostOutcome(rsp);
        else
            return CreateHostOutcome(o.GetError());
    }
    else
    {
        return CreateHostOutcome(outcome.GetError());
    }
}

void WafClient::CreateHostAsync(const CreateHostRequest& request, const CreateHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::CreateHostOutcomeCallable WafClient::CreateHostCallable(const CreateHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHostOutcome()>>(
        [this, request]()
        {
            return this->CreateHost(request);
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

WafClient::DeleteCustomWhiteRuleOutcome WafClient::DeleteCustomWhiteRule(const DeleteCustomWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomWhiteRuleResponse rsp = DeleteCustomWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomWhiteRuleOutcome(rsp);
        else
            return DeleteCustomWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomWhiteRuleOutcome(outcome.GetError());
    }
}

void WafClient::DeleteCustomWhiteRuleAsync(const DeleteCustomWhiteRuleRequest& request, const DeleteCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomWhiteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteCustomWhiteRuleOutcomeCallable WafClient::DeleteCustomWhiteRuleCallable(const DeleteCustomWhiteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomWhiteRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomWhiteRule(request);
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

WafClient::DeleteHostOutcome WafClient::DeleteHost(const DeleteHostRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHostResponse rsp = DeleteHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHostOutcome(rsp);
        else
            return DeleteHostOutcome(o.GetError());
    }
    else
    {
        return DeleteHostOutcome(outcome.GetError());
    }
}

void WafClient::DeleteHostAsync(const DeleteHostRequest& request, const DeleteHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteHostOutcomeCallable WafClient::DeleteHostCallable(const DeleteHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteHostOutcome()>>(
        [this, request]()
        {
            return this->DeleteHost(request);
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

WafClient::DeleteSpartaProtectionOutcome WafClient::DeleteSpartaProtection(const DeleteSpartaProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSpartaProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSpartaProtectionResponse rsp = DeleteSpartaProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSpartaProtectionOutcome(rsp);
        else
            return DeleteSpartaProtectionOutcome(o.GetError());
    }
    else
    {
        return DeleteSpartaProtectionOutcome(outcome.GetError());
    }
}

void WafClient::DeleteSpartaProtectionAsync(const DeleteSpartaProtectionRequest& request, const DeleteSpartaProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSpartaProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteSpartaProtectionOutcomeCallable WafClient::DeleteSpartaProtectionCallable(const DeleteSpartaProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSpartaProtectionOutcome()>>(
        [this, request]()
        {
            return this->DeleteSpartaProtection(request);
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

WafClient::DescribeAccessHistogramOutcome WafClient::DescribeAccessHistogram(const DescribeAccessHistogramRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessHistogram");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessHistogramResponse rsp = DescribeAccessHistogramResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessHistogramOutcome(rsp);
        else
            return DescribeAccessHistogramOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessHistogramOutcome(outcome.GetError());
    }
}

void WafClient::DescribeAccessHistogramAsync(const DescribeAccessHistogramRequest& request, const DescribeAccessHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessHistogram(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeAccessHistogramOutcomeCallable WafClient::DescribeAccessHistogramCallable(const DescribeAccessHistogramRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessHistogramOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessHistogram(request);
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

WafClient::DescribeAttackOverviewOutcome WafClient::DescribeAttackOverview(const DescribeAttackOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackOverviewResponse rsp = DescribeAttackOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackOverviewOutcome(rsp);
        else
            return DescribeAttackOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackOverviewOutcome(outcome.GetError());
    }
}

void WafClient::DescribeAttackOverviewAsync(const DescribeAttackOverviewRequest& request, const DescribeAttackOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAttackOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeAttackOverviewOutcomeCallable WafClient::DescribeAttackOverviewCallable(const DescribeAttackOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAttackOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeAttackOverview(request);
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

WafClient::DescribeCiphersDetailOutcome WafClient::DescribeCiphersDetail(const DescribeCiphersDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCiphersDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCiphersDetailResponse rsp = DescribeCiphersDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCiphersDetailOutcome(rsp);
        else
            return DescribeCiphersDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCiphersDetailOutcome(outcome.GetError());
    }
}

void WafClient::DescribeCiphersDetailAsync(const DescribeCiphersDetailRequest& request, const DescribeCiphersDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCiphersDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeCiphersDetailOutcomeCallable WafClient::DescribeCiphersDetailCallable(const DescribeCiphersDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCiphersDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCiphersDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeCustomWhiteRuleOutcome WafClient::DescribeCustomWhiteRule(const DescribeCustomWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomWhiteRuleResponse rsp = DescribeCustomWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomWhiteRuleOutcome(rsp);
        else
            return DescribeCustomWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomWhiteRuleOutcome(outcome.GetError());
    }
}

void WafClient::DescribeCustomWhiteRuleAsync(const DescribeCustomWhiteRuleRequest& request, const DescribeCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomWhiteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeCustomWhiteRuleOutcomeCallable WafClient::DescribeCustomWhiteRuleCallable(const DescribeCustomWhiteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomWhiteRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomWhiteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeDomainCountInfoOutcome WafClient::DescribeDomainCountInfo(const DescribeDomainCountInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainCountInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainCountInfoResponse rsp = DescribeDomainCountInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainCountInfoOutcome(rsp);
        else
            return DescribeDomainCountInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainCountInfoOutcome(outcome.GetError());
    }
}

void WafClient::DescribeDomainCountInfoAsync(const DescribeDomainCountInfoRequest& request, const DescribeDomainCountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainCountInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeDomainCountInfoOutcomeCallable WafClient::DescribeDomainCountInfoCallable(const DescribeDomainCountInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainCountInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainCountInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeDomainDetailsClbOutcome WafClient::DescribeDomainDetailsClb(const DescribeDomainDetailsClbRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainDetailsClb");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainDetailsClbResponse rsp = DescribeDomainDetailsClbResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainDetailsClbOutcome(rsp);
        else
            return DescribeDomainDetailsClbOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainDetailsClbOutcome(outcome.GetError());
    }
}

void WafClient::DescribeDomainDetailsClbAsync(const DescribeDomainDetailsClbRequest& request, const DescribeDomainDetailsClbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainDetailsClb(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeDomainDetailsClbOutcomeCallable WafClient::DescribeDomainDetailsClbCallable(const DescribeDomainDetailsClbRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainDetailsClbOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainDetailsClb(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeDomainDetailsSaasOutcome WafClient::DescribeDomainDetailsSaas(const DescribeDomainDetailsSaasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainDetailsSaas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainDetailsSaasResponse rsp = DescribeDomainDetailsSaasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainDetailsSaasOutcome(rsp);
        else
            return DescribeDomainDetailsSaasOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainDetailsSaasOutcome(outcome.GetError());
    }
}

void WafClient::DescribeDomainDetailsSaasAsync(const DescribeDomainDetailsSaasRequest& request, const DescribeDomainDetailsSaasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainDetailsSaas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeDomainDetailsSaasOutcomeCallable WafClient::DescribeDomainDetailsSaasCallable(const DescribeDomainDetailsSaasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainDetailsSaasOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainDetailsSaas(request);
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

WafClient::DescribeFindDomainListOutcome WafClient::DescribeFindDomainList(const DescribeFindDomainListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFindDomainList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFindDomainListResponse rsp = DescribeFindDomainListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFindDomainListOutcome(rsp);
        else
            return DescribeFindDomainListOutcome(o.GetError());
    }
    else
    {
        return DescribeFindDomainListOutcome(outcome.GetError());
    }
}

void WafClient::DescribeFindDomainListAsync(const DescribeFindDomainListRequest& request, const DescribeFindDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFindDomainList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeFindDomainListOutcomeCallable WafClient::DescribeFindDomainListCallable(const DescribeFindDomainListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFindDomainListOutcome()>>(
        [this, request]()
        {
            return this->DescribeFindDomainList(request);
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

WafClient::DescribeHostOutcome WafClient::DescribeHost(const DescribeHostRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostResponse rsp = DescribeHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostOutcome(rsp);
        else
            return DescribeHostOutcome(o.GetError());
    }
    else
    {
        return DescribeHostOutcome(outcome.GetError());
    }
}

void WafClient::DescribeHostAsync(const DescribeHostRequest& request, const DescribeHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeHostOutcomeCallable WafClient::DescribeHostCallable(const DescribeHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostOutcome()>>(
        [this, request]()
        {
            return this->DescribeHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeHostLimitOutcome WafClient::DescribeHostLimit(const DescribeHostLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostLimitResponse rsp = DescribeHostLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostLimitOutcome(rsp);
        else
            return DescribeHostLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeHostLimitOutcome(outcome.GetError());
    }
}

void WafClient::DescribeHostLimitAsync(const DescribeHostLimitRequest& request, const DescribeHostLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeHostLimitOutcomeCallable WafClient::DescribeHostLimitCallable(const DescribeHostLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostLimitOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeHostsOutcome WafClient::DescribeHosts(const DescribeHostsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostsResponse rsp = DescribeHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostsOutcome(rsp);
        else
            return DescribeHostsOutcome(o.GetError());
    }
    else
    {
        return DescribeHostsOutcome(outcome.GetError());
    }
}

void WafClient::DescribeHostsAsync(const DescribeHostsRequest& request, const DescribeHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHosts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeHostsOutcomeCallable WafClient::DescribeHostsCallable(const DescribeHostsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostsOutcome()>>(
        [this, request]()
        {
            return this->DescribeHosts(request);
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

WafClient::DescribePeakPointsOutcome WafClient::DescribePeakPoints(const DescribePeakPointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePeakPoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePeakPointsResponse rsp = DescribePeakPointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePeakPointsOutcome(rsp);
        else
            return DescribePeakPointsOutcome(o.GetError());
    }
    else
    {
        return DescribePeakPointsOutcome(outcome.GetError());
    }
}

void WafClient::DescribePeakPointsAsync(const DescribePeakPointsRequest& request, const DescribePeakPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePeakPoints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribePeakPointsOutcomeCallable WafClient::DescribePeakPointsCallable(const DescribePeakPointsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePeakPointsOutcome()>>(
        [this, request]()
        {
            return this->DescribePeakPoints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribePeakValueOutcome WafClient::DescribePeakValue(const DescribePeakValueRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePeakValue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePeakValueResponse rsp = DescribePeakValueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePeakValueOutcome(rsp);
        else
            return DescribePeakValueOutcome(o.GetError());
    }
    else
    {
        return DescribePeakValueOutcome(outcome.GetError());
    }
}

void WafClient::DescribePeakValueAsync(const DescribePeakValueRequest& request, const DescribePeakValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePeakValue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribePeakValueOutcomeCallable WafClient::DescribePeakValueCallable(const DescribePeakValueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePeakValueOutcome()>>(
        [this, request]()
        {
            return this->DescribePeakValue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribePolicyStatusOutcome WafClient::DescribePolicyStatus(const DescribePolicyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyStatusResponse rsp = DescribePolicyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyStatusOutcome(rsp);
        else
            return DescribePolicyStatusOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyStatusOutcome(outcome.GetError());
    }
}

void WafClient::DescribePolicyStatusAsync(const DescribePolicyStatusRequest& request, const DescribePolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePolicyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribePolicyStatusOutcomeCallable WafClient::DescribePolicyStatusCallable(const DescribePolicyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePolicyStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribePolicyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeRuleLimitOutcome WafClient::DescribeRuleLimit(const DescribeRuleLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleLimitResponse rsp = DescribeRuleLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleLimitOutcome(rsp);
        else
            return DescribeRuleLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleLimitOutcome(outcome.GetError());
    }
}

void WafClient::DescribeRuleLimitAsync(const DescribeRuleLimitRequest& request, const DescribeRuleLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeRuleLimitOutcomeCallable WafClient::DescribeRuleLimitCallable(const DescribeRuleLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleLimitOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeTlsVersionOutcome WafClient::DescribeTlsVersion(const DescribeTlsVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTlsVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTlsVersionResponse rsp = DescribeTlsVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTlsVersionOutcome(rsp);
        else
            return DescribeTlsVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeTlsVersionOutcome(outcome.GetError());
    }
}

void WafClient::DescribeTlsVersionAsync(const DescribeTlsVersionRequest& request, const DescribeTlsVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTlsVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeTlsVersionOutcomeCallable WafClient::DescribeTlsVersionCallable(const DescribeTlsVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTlsVersionOutcome()>>(
        [this, request]()
        {
            return this->DescribeTlsVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeUserCdcClbWafRegionsOutcome WafClient::DescribeUserCdcClbWafRegions(const DescribeUserCdcClbWafRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserCdcClbWafRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserCdcClbWafRegionsResponse rsp = DescribeUserCdcClbWafRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserCdcClbWafRegionsOutcome(rsp);
        else
            return DescribeUserCdcClbWafRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeUserCdcClbWafRegionsOutcome(outcome.GetError());
    }
}

void WafClient::DescribeUserCdcClbWafRegionsAsync(const DescribeUserCdcClbWafRegionsRequest& request, const DescribeUserCdcClbWafRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserCdcClbWafRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeUserCdcClbWafRegionsOutcomeCallable WafClient::DescribeUserCdcClbWafRegionsCallable(const DescribeUserCdcClbWafRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserCdcClbWafRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserCdcClbWafRegions(request);
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

WafClient::DescribeUserDomainInfoOutcome WafClient::DescribeUserDomainInfo(const DescribeUserDomainInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserDomainInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserDomainInfoResponse rsp = DescribeUserDomainInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserDomainInfoOutcome(rsp);
        else
            return DescribeUserDomainInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUserDomainInfoOutcome(outcome.GetError());
    }
}

void WafClient::DescribeUserDomainInfoAsync(const DescribeUserDomainInfoRequest& request, const DescribeUserDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserDomainInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeUserDomainInfoOutcomeCallable WafClient::DescribeUserDomainInfoCallable(const DescribeUserDomainInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserDomainInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserDomainInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeVipInfoOutcome WafClient::DescribeVipInfo(const DescribeVipInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVipInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVipInfoResponse rsp = DescribeVipInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVipInfoOutcome(rsp);
        else
            return DescribeVipInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeVipInfoOutcome(outcome.GetError());
    }
}

void WafClient::DescribeVipInfoAsync(const DescribeVipInfoRequest& request, const DescribeVipInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVipInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeVipInfoOutcomeCallable WafClient::DescribeVipInfoCallable(const DescribeVipInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVipInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeVipInfo(request);
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

WafClient::DescribeWafInfoOutcome WafClient::DescribeWafInfo(const DescribeWafInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWafInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWafInfoResponse rsp = DescribeWafInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWafInfoOutcome(rsp);
        else
            return DescribeWafInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeWafInfoOutcome(outcome.GetError());
    }
}

void WafClient::DescribeWafInfoAsync(const DescribeWafInfoRequest& request, const DescribeWafInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWafInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeWafInfoOutcomeCallable WafClient::DescribeWafInfoCallable(const DescribeWafInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWafInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeWafInfo(request);
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

WafClient::GetAttackHistogramOutcome WafClient::GetAttackHistogram(const GetAttackHistogramRequest &request)
{
    auto outcome = MakeRequest(request, "GetAttackHistogram");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAttackHistogramResponse rsp = GetAttackHistogramResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAttackHistogramOutcome(rsp);
        else
            return GetAttackHistogramOutcome(o.GetError());
    }
    else
    {
        return GetAttackHistogramOutcome(outcome.GetError());
    }
}

void WafClient::GetAttackHistogramAsync(const GetAttackHistogramRequest& request, const GetAttackHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAttackHistogram(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::GetAttackHistogramOutcomeCallable WafClient::GetAttackHistogramCallable(const GetAttackHistogramRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAttackHistogramOutcome()>>(
        [this, request]()
        {
            return this->GetAttackHistogram(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::GetAttackTotalCountOutcome WafClient::GetAttackTotalCount(const GetAttackTotalCountRequest &request)
{
    auto outcome = MakeRequest(request, "GetAttackTotalCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAttackTotalCountResponse rsp = GetAttackTotalCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAttackTotalCountOutcome(rsp);
        else
            return GetAttackTotalCountOutcome(o.GetError());
    }
    else
    {
        return GetAttackTotalCountOutcome(outcome.GetError());
    }
}

void WafClient::GetAttackTotalCountAsync(const GetAttackTotalCountRequest& request, const GetAttackTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAttackTotalCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::GetAttackTotalCountOutcomeCallable WafClient::GetAttackTotalCountCallable(const GetAttackTotalCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAttackTotalCountOutcome()>>(
        [this, request]()
        {
            return this->GetAttackTotalCount(request);
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

WafClient::ModifyAreaBanStatusOutcome WafClient::ModifyAreaBanStatus(const ModifyAreaBanStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAreaBanStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAreaBanStatusResponse rsp = ModifyAreaBanStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAreaBanStatusOutcome(rsp);
        else
            return ModifyAreaBanStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAreaBanStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyAreaBanStatusAsync(const ModifyAreaBanStatusRequest& request, const ModifyAreaBanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAreaBanStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyAreaBanStatusOutcomeCallable WafClient::ModifyAreaBanStatusCallable(const ModifyAreaBanStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAreaBanStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAreaBanStatus(request);
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

WafClient::ModifyCustomWhiteRuleOutcome WafClient::ModifyCustomWhiteRule(const ModifyCustomWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomWhiteRuleResponse rsp = ModifyCustomWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomWhiteRuleOutcome(rsp);
        else
            return ModifyCustomWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomWhiteRuleOutcome(outcome.GetError());
    }
}

void WafClient::ModifyCustomWhiteRuleAsync(const ModifyCustomWhiteRuleRequest& request, const ModifyCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomWhiteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyCustomWhiteRuleOutcomeCallable WafClient::ModifyCustomWhiteRuleCallable(const ModifyCustomWhiteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomWhiteRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomWhiteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::ModifyDomainIpv6StatusOutcome WafClient::ModifyDomainIpv6Status(const ModifyDomainIpv6StatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainIpv6Status");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainIpv6StatusResponse rsp = ModifyDomainIpv6StatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainIpv6StatusOutcome(rsp);
        else
            return ModifyDomainIpv6StatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainIpv6StatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyDomainIpv6StatusAsync(const ModifyDomainIpv6StatusRequest& request, const ModifyDomainIpv6StatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainIpv6Status(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyDomainIpv6StatusOutcomeCallable WafClient::ModifyDomainIpv6StatusCallable(const ModifyDomainIpv6StatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainIpv6StatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainIpv6Status(request);
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

WafClient::ModifyDomainsCLSStatusOutcome WafClient::ModifyDomainsCLSStatus(const ModifyDomainsCLSStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainsCLSStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainsCLSStatusResponse rsp = ModifyDomainsCLSStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainsCLSStatusOutcome(rsp);
        else
            return ModifyDomainsCLSStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainsCLSStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyDomainsCLSStatusAsync(const ModifyDomainsCLSStatusRequest& request, const ModifyDomainsCLSStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainsCLSStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyDomainsCLSStatusOutcomeCallable WafClient::ModifyDomainsCLSStatusCallable(const ModifyDomainsCLSStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainsCLSStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainsCLSStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::ModifyHostOutcome WafClient::ModifyHost(const ModifyHostRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHostResponse rsp = ModifyHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHostOutcome(rsp);
        else
            return ModifyHostOutcome(o.GetError());
    }
    else
    {
        return ModifyHostOutcome(outcome.GetError());
    }
}

void WafClient::ModifyHostAsync(const ModifyHostRequest& request, const ModifyHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyHostOutcomeCallable WafClient::ModifyHostCallable(const ModifyHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHostOutcome()>>(
        [this, request]()
        {
            return this->ModifyHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::ModifyHostFlowModeOutcome WafClient::ModifyHostFlowMode(const ModifyHostFlowModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHostFlowMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHostFlowModeResponse rsp = ModifyHostFlowModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHostFlowModeOutcome(rsp);
        else
            return ModifyHostFlowModeOutcome(o.GetError());
    }
    else
    {
        return ModifyHostFlowModeOutcome(outcome.GetError());
    }
}

void WafClient::ModifyHostFlowModeAsync(const ModifyHostFlowModeRequest& request, const ModifyHostFlowModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHostFlowMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyHostFlowModeOutcomeCallable WafClient::ModifyHostFlowModeCallable(const ModifyHostFlowModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHostFlowModeOutcome()>>(
        [this, request]()
        {
            return this->ModifyHostFlowMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::ModifyHostModeOutcome WafClient::ModifyHostMode(const ModifyHostModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHostMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHostModeResponse rsp = ModifyHostModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHostModeOutcome(rsp);
        else
            return ModifyHostModeOutcome(o.GetError());
    }
    else
    {
        return ModifyHostModeOutcome(outcome.GetError());
    }
}

void WafClient::ModifyHostModeAsync(const ModifyHostModeRequest& request, const ModifyHostModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHostMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyHostModeOutcomeCallable WafClient::ModifyHostModeCallable(const ModifyHostModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHostModeOutcome()>>(
        [this, request]()
        {
            return this->ModifyHostMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::ModifyHostStatusOutcome WafClient::ModifyHostStatus(const ModifyHostStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHostStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHostStatusResponse rsp = ModifyHostStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHostStatusOutcome(rsp);
        else
            return ModifyHostStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyHostStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyHostStatusAsync(const ModifyHostStatusRequest& request, const ModifyHostStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHostStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyHostStatusOutcomeCallable WafClient::ModifyHostStatusCallable(const ModifyHostStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHostStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyHostStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::ModifyProtectionStatusOutcome WafClient::ModifyProtectionStatus(const ModifyProtectionStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProtectionStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProtectionStatusResponse rsp = ModifyProtectionStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProtectionStatusOutcome(rsp);
        else
            return ModifyProtectionStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyProtectionStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyProtectionStatusAsync(const ModifyProtectionStatusRequest& request, const ModifyProtectionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProtectionStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyProtectionStatusOutcomeCallable WafClient::ModifyProtectionStatusCallable(const ModifyProtectionStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProtectionStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyProtectionStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::ModifySpartaProtectionOutcome WafClient::ModifySpartaProtection(const ModifySpartaProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySpartaProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySpartaProtectionResponse rsp = ModifySpartaProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySpartaProtectionOutcome(rsp);
        else
            return ModifySpartaProtectionOutcome(o.GetError());
    }
    else
    {
        return ModifySpartaProtectionOutcome(outcome.GetError());
    }
}

void WafClient::ModifySpartaProtectionAsync(const ModifySpartaProtectionRequest& request, const ModifySpartaProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySpartaProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifySpartaProtectionOutcomeCallable WafClient::ModifySpartaProtectionCallable(const ModifySpartaProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySpartaProtectionOutcome()>>(
        [this, request]()
        {
            return this->ModifySpartaProtection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::ModifySpartaProtectionModeOutcome WafClient::ModifySpartaProtectionMode(const ModifySpartaProtectionModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySpartaProtectionMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySpartaProtectionModeResponse rsp = ModifySpartaProtectionModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySpartaProtectionModeOutcome(rsp);
        else
            return ModifySpartaProtectionModeOutcome(o.GetError());
    }
    else
    {
        return ModifySpartaProtectionModeOutcome(outcome.GetError());
    }
}

void WafClient::ModifySpartaProtectionModeAsync(const ModifySpartaProtectionModeRequest& request, const ModifySpartaProtectionModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySpartaProtectionMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifySpartaProtectionModeOutcomeCallable WafClient::ModifySpartaProtectionModeCallable(const ModifySpartaProtectionModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySpartaProtectionModeOutcome()>>(
        [this, request]()
        {
            return this->ModifySpartaProtectionMode(request);
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

WafClient::RefreshAccessCheckResultOutcome WafClient::RefreshAccessCheckResult(const RefreshAccessCheckResultRequest &request)
{
    auto outcome = MakeRequest(request, "RefreshAccessCheckResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefreshAccessCheckResultResponse rsp = RefreshAccessCheckResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefreshAccessCheckResultOutcome(rsp);
        else
            return RefreshAccessCheckResultOutcome(o.GetError());
    }
    else
    {
        return RefreshAccessCheckResultOutcome(outcome.GetError());
    }
}

void WafClient::RefreshAccessCheckResultAsync(const RefreshAccessCheckResultRequest& request, const RefreshAccessCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RefreshAccessCheckResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::RefreshAccessCheckResultOutcomeCallable WafClient::RefreshAccessCheckResultCallable(const RefreshAccessCheckResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RefreshAccessCheckResultOutcome()>>(
        [this, request]()
        {
            return this->RefreshAccessCheckResult(request);
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

WafClient::SearchAttackLogOutcome WafClient::SearchAttackLog(const SearchAttackLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchAttackLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchAttackLogResponse rsp = SearchAttackLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchAttackLogOutcome(rsp);
        else
            return SearchAttackLogOutcome(o.GetError());
    }
    else
    {
        return SearchAttackLogOutcome(outcome.GetError());
    }
}

void WafClient::SearchAttackLogAsync(const SearchAttackLogRequest& request, const SearchAttackLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchAttackLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::SearchAttackLogOutcomeCallable WafClient::SearchAttackLogCallable(const SearchAttackLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchAttackLogOutcome()>>(
        [this, request]()
        {
            return this->SearchAttackLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::SwitchDomainRulesOutcome WafClient::SwitchDomainRules(const SwitchDomainRulesRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDomainRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDomainRulesResponse rsp = SwitchDomainRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDomainRulesOutcome(rsp);
        else
            return SwitchDomainRulesOutcome(o.GetError());
    }
    else
    {
        return SwitchDomainRulesOutcome(outcome.GetError());
    }
}

void WafClient::SwitchDomainRulesAsync(const SwitchDomainRulesRequest& request, const SwitchDomainRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchDomainRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::SwitchDomainRulesOutcomeCallable WafClient::SwitchDomainRulesCallable(const SwitchDomainRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchDomainRulesOutcome()>>(
        [this, request]()
        {
            return this->SwitchDomainRules(request);
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

