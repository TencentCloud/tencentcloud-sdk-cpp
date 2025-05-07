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

#include <tencentcloud/cfw/v20190904/CfwClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cfw::V20190904;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-09-04";
    const string ENDPOINT = "cfw.tencentcloudapi.com";
}

CfwClient::CfwClient(const Credential &credential, const string &region) :
    CfwClient(credential, region, ClientProfile())
{
}

CfwClient::CfwClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CfwClient::AddAclRuleOutcome CfwClient::AddAclRule(const AddAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddAclRuleResponse rsp = AddAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddAclRuleOutcome(rsp);
        else
            return AddAclRuleOutcome(o.GetError());
    }
    else
    {
        return AddAclRuleOutcome(outcome.GetError());
    }
}

void CfwClient::AddAclRuleAsync(const AddAclRuleRequest& request, const AddAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddAclRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::AddAclRuleOutcomeCallable CfwClient::AddAclRuleCallable(const AddAclRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddAclRuleOutcome()>>(
        [this, request]()
        {
            return this->AddAclRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::AddEnterpriseSecurityGroupRulesOutcome CfwClient::AddEnterpriseSecurityGroupRules(const AddEnterpriseSecurityGroupRulesRequest &request)
{
    auto outcome = MakeRequest(request, "AddEnterpriseSecurityGroupRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddEnterpriseSecurityGroupRulesResponse rsp = AddEnterpriseSecurityGroupRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddEnterpriseSecurityGroupRulesOutcome(rsp);
        else
            return AddEnterpriseSecurityGroupRulesOutcome(o.GetError());
    }
    else
    {
        return AddEnterpriseSecurityGroupRulesOutcome(outcome.GetError());
    }
}

void CfwClient::AddEnterpriseSecurityGroupRulesAsync(const AddEnterpriseSecurityGroupRulesRequest& request, const AddEnterpriseSecurityGroupRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddEnterpriseSecurityGroupRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::AddEnterpriseSecurityGroupRulesOutcomeCallable CfwClient::AddEnterpriseSecurityGroupRulesCallable(const AddEnterpriseSecurityGroupRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddEnterpriseSecurityGroupRulesOutcome()>>(
        [this, request]()
        {
            return this->AddEnterpriseSecurityGroupRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::AddNatAcRuleOutcome CfwClient::AddNatAcRule(const AddNatAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddNatAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddNatAcRuleResponse rsp = AddNatAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddNatAcRuleOutcome(rsp);
        else
            return AddNatAcRuleOutcome(o.GetError());
    }
    else
    {
        return AddNatAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::AddNatAcRuleAsync(const AddNatAcRuleRequest& request, const AddNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddNatAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::AddNatAcRuleOutcomeCallable CfwClient::AddNatAcRuleCallable(const AddNatAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddNatAcRuleOutcome()>>(
        [this, request]()
        {
            return this->AddNatAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::AddVpcAcRuleOutcome CfwClient::AddVpcAcRule(const AddVpcAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddVpcAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddVpcAcRuleResponse rsp = AddVpcAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddVpcAcRuleOutcome(rsp);
        else
            return AddVpcAcRuleOutcome(o.GetError());
    }
    else
    {
        return AddVpcAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::AddVpcAcRuleAsync(const AddVpcAcRuleRequest& request, const AddVpcAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddVpcAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::AddVpcAcRuleOutcomeCallable CfwClient::AddVpcAcRuleCallable(const AddVpcAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddVpcAcRuleOutcome()>>(
        [this, request]()
        {
            return this->AddVpcAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::CreateAcRulesOutcome CfwClient::CreateAcRules(const CreateAcRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAcRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAcRulesResponse rsp = CreateAcRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAcRulesOutcome(rsp);
        else
            return CreateAcRulesOutcome(o.GetError());
    }
    else
    {
        return CreateAcRulesOutcome(outcome.GetError());
    }
}

void CfwClient::CreateAcRulesAsync(const CreateAcRulesRequest& request, const CreateAcRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAcRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateAcRulesOutcomeCallable CfwClient::CreateAcRulesCallable(const CreateAcRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAcRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateAcRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::CreateAddressTemplateOutcome CfwClient::CreateAddressTemplate(const CreateAddressTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAddressTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAddressTemplateResponse rsp = CreateAddressTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAddressTemplateOutcome(rsp);
        else
            return CreateAddressTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateAddressTemplateOutcome(outcome.GetError());
    }
}

void CfwClient::CreateAddressTemplateAsync(const CreateAddressTemplateRequest& request, const CreateAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAddressTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateAddressTemplateOutcomeCallable CfwClient::CreateAddressTemplateCallable(const CreateAddressTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAddressTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateAddressTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::CreateAlertCenterIsolateOutcome CfwClient::CreateAlertCenterIsolate(const CreateAlertCenterIsolateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlertCenterIsolate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlertCenterIsolateResponse rsp = CreateAlertCenterIsolateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlertCenterIsolateOutcome(rsp);
        else
            return CreateAlertCenterIsolateOutcome(o.GetError());
    }
    else
    {
        return CreateAlertCenterIsolateOutcome(outcome.GetError());
    }
}

void CfwClient::CreateAlertCenterIsolateAsync(const CreateAlertCenterIsolateRequest& request, const CreateAlertCenterIsolateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAlertCenterIsolate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateAlertCenterIsolateOutcomeCallable CfwClient::CreateAlertCenterIsolateCallable(const CreateAlertCenterIsolateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAlertCenterIsolateOutcome()>>(
        [this, request]()
        {
            return this->CreateAlertCenterIsolate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::CreateAlertCenterOmitOutcome CfwClient::CreateAlertCenterOmit(const CreateAlertCenterOmitRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlertCenterOmit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlertCenterOmitResponse rsp = CreateAlertCenterOmitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlertCenterOmitOutcome(rsp);
        else
            return CreateAlertCenterOmitOutcome(o.GetError());
    }
    else
    {
        return CreateAlertCenterOmitOutcome(outcome.GetError());
    }
}

void CfwClient::CreateAlertCenterOmitAsync(const CreateAlertCenterOmitRequest& request, const CreateAlertCenterOmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAlertCenterOmit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateAlertCenterOmitOutcomeCallable CfwClient::CreateAlertCenterOmitCallable(const CreateAlertCenterOmitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAlertCenterOmitOutcome()>>(
        [this, request]()
        {
            return this->CreateAlertCenterOmit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::CreateAlertCenterRuleOutcome CfwClient::CreateAlertCenterRule(const CreateAlertCenterRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlertCenterRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlertCenterRuleResponse rsp = CreateAlertCenterRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlertCenterRuleOutcome(rsp);
        else
            return CreateAlertCenterRuleOutcome(o.GetError());
    }
    else
    {
        return CreateAlertCenterRuleOutcome(outcome.GetError());
    }
}

void CfwClient::CreateAlertCenterRuleAsync(const CreateAlertCenterRuleRequest& request, const CreateAlertCenterRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAlertCenterRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateAlertCenterRuleOutcomeCallable CfwClient::CreateAlertCenterRuleCallable(const CreateAlertCenterRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAlertCenterRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateAlertCenterRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::CreateBlockIgnoreRuleListOutcome CfwClient::CreateBlockIgnoreRuleList(const CreateBlockIgnoreRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBlockIgnoreRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBlockIgnoreRuleListResponse rsp = CreateBlockIgnoreRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBlockIgnoreRuleListOutcome(rsp);
        else
            return CreateBlockIgnoreRuleListOutcome(o.GetError());
    }
    else
    {
        return CreateBlockIgnoreRuleListOutcome(outcome.GetError());
    }
}

void CfwClient::CreateBlockIgnoreRuleListAsync(const CreateBlockIgnoreRuleListRequest& request, const CreateBlockIgnoreRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBlockIgnoreRuleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateBlockIgnoreRuleListOutcomeCallable CfwClient::CreateBlockIgnoreRuleListCallable(const CreateBlockIgnoreRuleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBlockIgnoreRuleListOutcome()>>(
        [this, request]()
        {
            return this->CreateBlockIgnoreRuleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::CreateBlockIgnoreRuleNewOutcome CfwClient::CreateBlockIgnoreRuleNew(const CreateBlockIgnoreRuleNewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBlockIgnoreRuleNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBlockIgnoreRuleNewResponse rsp = CreateBlockIgnoreRuleNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBlockIgnoreRuleNewOutcome(rsp);
        else
            return CreateBlockIgnoreRuleNewOutcome(o.GetError());
    }
    else
    {
        return CreateBlockIgnoreRuleNewOutcome(outcome.GetError());
    }
}

void CfwClient::CreateBlockIgnoreRuleNewAsync(const CreateBlockIgnoreRuleNewRequest& request, const CreateBlockIgnoreRuleNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBlockIgnoreRuleNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateBlockIgnoreRuleNewOutcomeCallable CfwClient::CreateBlockIgnoreRuleNewCallable(const CreateBlockIgnoreRuleNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBlockIgnoreRuleNewOutcome()>>(
        [this, request]()
        {
            return this->CreateBlockIgnoreRuleNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::CreateChooseVpcsOutcome CfwClient::CreateChooseVpcs(const CreateChooseVpcsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChooseVpcs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChooseVpcsResponse rsp = CreateChooseVpcsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChooseVpcsOutcome(rsp);
        else
            return CreateChooseVpcsOutcome(o.GetError());
    }
    else
    {
        return CreateChooseVpcsOutcome(outcome.GetError());
    }
}

void CfwClient::CreateChooseVpcsAsync(const CreateChooseVpcsRequest& request, const CreateChooseVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateChooseVpcs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateChooseVpcsOutcomeCallable CfwClient::CreateChooseVpcsCallable(const CreateChooseVpcsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateChooseVpcsOutcome()>>(
        [this, request]()
        {
            return this->CreateChooseVpcs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::CreateDatabaseWhiteListRulesOutcome CfwClient::CreateDatabaseWhiteListRules(const CreateDatabaseWhiteListRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatabaseWhiteListRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatabaseWhiteListRulesResponse rsp = CreateDatabaseWhiteListRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatabaseWhiteListRulesOutcome(rsp);
        else
            return CreateDatabaseWhiteListRulesOutcome(o.GetError());
    }
    else
    {
        return CreateDatabaseWhiteListRulesOutcome(outcome.GetError());
    }
}

void CfwClient::CreateDatabaseWhiteListRulesAsync(const CreateDatabaseWhiteListRulesRequest& request, const CreateDatabaseWhiteListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDatabaseWhiteListRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateDatabaseWhiteListRulesOutcomeCallable CfwClient::CreateDatabaseWhiteListRulesCallable(const CreateDatabaseWhiteListRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDatabaseWhiteListRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateDatabaseWhiteListRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::CreateIdsWhiteRuleOutcome CfwClient::CreateIdsWhiteRule(const CreateIdsWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIdsWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIdsWhiteRuleResponse rsp = CreateIdsWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIdsWhiteRuleOutcome(rsp);
        else
            return CreateIdsWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return CreateIdsWhiteRuleOutcome(outcome.GetError());
    }
}

void CfwClient::CreateIdsWhiteRuleAsync(const CreateIdsWhiteRuleRequest& request, const CreateIdsWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIdsWhiteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateIdsWhiteRuleOutcomeCallable CfwClient::CreateIdsWhiteRuleCallable(const CreateIdsWhiteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIdsWhiteRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateIdsWhiteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::CreateNatFwInstanceOutcome CfwClient::CreateNatFwInstance(const CreateNatFwInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNatFwInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNatFwInstanceResponse rsp = CreateNatFwInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNatFwInstanceOutcome(rsp);
        else
            return CreateNatFwInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateNatFwInstanceOutcome(outcome.GetError());
    }
}

void CfwClient::CreateNatFwInstanceAsync(const CreateNatFwInstanceRequest& request, const CreateNatFwInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNatFwInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateNatFwInstanceOutcomeCallable CfwClient::CreateNatFwInstanceCallable(const CreateNatFwInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNatFwInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateNatFwInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::CreateNatFwInstanceWithDomainOutcome CfwClient::CreateNatFwInstanceWithDomain(const CreateNatFwInstanceWithDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNatFwInstanceWithDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNatFwInstanceWithDomainResponse rsp = CreateNatFwInstanceWithDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNatFwInstanceWithDomainOutcome(rsp);
        else
            return CreateNatFwInstanceWithDomainOutcome(o.GetError());
    }
    else
    {
        return CreateNatFwInstanceWithDomainOutcome(outcome.GetError());
    }
}

void CfwClient::CreateNatFwInstanceWithDomainAsync(const CreateNatFwInstanceWithDomainRequest& request, const CreateNatFwInstanceWithDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNatFwInstanceWithDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateNatFwInstanceWithDomainOutcomeCallable CfwClient::CreateNatFwInstanceWithDomainCallable(const CreateNatFwInstanceWithDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNatFwInstanceWithDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateNatFwInstanceWithDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::CreateSecurityGroupRulesOutcome CfwClient::CreateSecurityGroupRules(const CreateSecurityGroupRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityGroupRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityGroupRulesResponse rsp = CreateSecurityGroupRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityGroupRulesOutcome(rsp);
        else
            return CreateSecurityGroupRulesOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityGroupRulesOutcome(outcome.GetError());
    }
}

void CfwClient::CreateSecurityGroupRulesAsync(const CreateSecurityGroupRulesRequest& request, const CreateSecurityGroupRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecurityGroupRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateSecurityGroupRulesOutcomeCallable CfwClient::CreateSecurityGroupRulesCallable(const CreateSecurityGroupRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecurityGroupRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateSecurityGroupRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::CreateVpcFwGroupOutcome CfwClient::CreateVpcFwGroup(const CreateVpcFwGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpcFwGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpcFwGroupResponse rsp = CreateVpcFwGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpcFwGroupOutcome(rsp);
        else
            return CreateVpcFwGroupOutcome(o.GetError());
    }
    else
    {
        return CreateVpcFwGroupOutcome(outcome.GetError());
    }
}

void CfwClient::CreateVpcFwGroupAsync(const CreateVpcFwGroupRequest& request, const CreateVpcFwGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVpcFwGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateVpcFwGroupOutcomeCallable CfwClient::CreateVpcFwGroupCallable(const CreateVpcFwGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVpcFwGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateVpcFwGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DeleteAcRuleOutcome CfwClient::DeleteAcRule(const DeleteAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAcRuleResponse rsp = DeleteAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAcRuleOutcome(rsp);
        else
            return DeleteAcRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteAcRuleAsync(const DeleteAcRuleRequest& request, const DeleteAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteAcRuleOutcomeCallable CfwClient::DeleteAcRuleCallable(const DeleteAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAcRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DeleteAddressTemplateOutcome CfwClient::DeleteAddressTemplate(const DeleteAddressTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAddressTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAddressTemplateResponse rsp = DeleteAddressTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAddressTemplateOutcome(rsp);
        else
            return DeleteAddressTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteAddressTemplateOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteAddressTemplateAsync(const DeleteAddressTemplateRequest& request, const DeleteAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAddressTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteAddressTemplateOutcomeCallable CfwClient::DeleteAddressTemplateCallable(const DeleteAddressTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAddressTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteAddressTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DeleteAllAccessControlRuleOutcome CfwClient::DeleteAllAccessControlRule(const DeleteAllAccessControlRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAllAccessControlRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAllAccessControlRuleResponse rsp = DeleteAllAccessControlRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAllAccessControlRuleOutcome(rsp);
        else
            return DeleteAllAccessControlRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAllAccessControlRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteAllAccessControlRuleAsync(const DeleteAllAccessControlRuleRequest& request, const DeleteAllAccessControlRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAllAccessControlRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteAllAccessControlRuleOutcomeCallable CfwClient::DeleteAllAccessControlRuleCallable(const DeleteAllAccessControlRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAllAccessControlRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteAllAccessControlRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DeleteBlockIgnoreRuleListOutcome CfwClient::DeleteBlockIgnoreRuleList(const DeleteBlockIgnoreRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBlockIgnoreRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBlockIgnoreRuleListResponse rsp = DeleteBlockIgnoreRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBlockIgnoreRuleListOutcome(rsp);
        else
            return DeleteBlockIgnoreRuleListOutcome(o.GetError());
    }
    else
    {
        return DeleteBlockIgnoreRuleListOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteBlockIgnoreRuleListAsync(const DeleteBlockIgnoreRuleListRequest& request, const DeleteBlockIgnoreRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBlockIgnoreRuleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteBlockIgnoreRuleListOutcomeCallable CfwClient::DeleteBlockIgnoreRuleListCallable(const DeleteBlockIgnoreRuleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBlockIgnoreRuleListOutcome()>>(
        [this, request]()
        {
            return this->DeleteBlockIgnoreRuleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DeleteBlockIgnoreRuleNewOutcome CfwClient::DeleteBlockIgnoreRuleNew(const DeleteBlockIgnoreRuleNewRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBlockIgnoreRuleNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBlockIgnoreRuleNewResponse rsp = DeleteBlockIgnoreRuleNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBlockIgnoreRuleNewOutcome(rsp);
        else
            return DeleteBlockIgnoreRuleNewOutcome(o.GetError());
    }
    else
    {
        return DeleteBlockIgnoreRuleNewOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteBlockIgnoreRuleNewAsync(const DeleteBlockIgnoreRuleNewRequest& request, const DeleteBlockIgnoreRuleNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBlockIgnoreRuleNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteBlockIgnoreRuleNewOutcomeCallable CfwClient::DeleteBlockIgnoreRuleNewCallable(const DeleteBlockIgnoreRuleNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBlockIgnoreRuleNewOutcome()>>(
        [this, request]()
        {
            return this->DeleteBlockIgnoreRuleNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DeleteIdsWhiteRuleOutcome CfwClient::DeleteIdsWhiteRule(const DeleteIdsWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIdsWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIdsWhiteRuleResponse rsp = DeleteIdsWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIdsWhiteRuleOutcome(rsp);
        else
            return DeleteIdsWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteIdsWhiteRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteIdsWhiteRuleAsync(const DeleteIdsWhiteRuleRequest& request, const DeleteIdsWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIdsWhiteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteIdsWhiteRuleOutcomeCallable CfwClient::DeleteIdsWhiteRuleCallable(const DeleteIdsWhiteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIdsWhiteRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteIdsWhiteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DeleteNatFwInstanceOutcome CfwClient::DeleteNatFwInstance(const DeleteNatFwInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNatFwInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNatFwInstanceResponse rsp = DeleteNatFwInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNatFwInstanceOutcome(rsp);
        else
            return DeleteNatFwInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteNatFwInstanceOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteNatFwInstanceAsync(const DeleteNatFwInstanceRequest& request, const DeleteNatFwInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNatFwInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteNatFwInstanceOutcomeCallable CfwClient::DeleteNatFwInstanceCallable(const DeleteNatFwInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNatFwInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteNatFwInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DeleteRemoteAccessDomainOutcome CfwClient::DeleteRemoteAccessDomain(const DeleteRemoteAccessDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRemoteAccessDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRemoteAccessDomainResponse rsp = DeleteRemoteAccessDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRemoteAccessDomainOutcome(rsp);
        else
            return DeleteRemoteAccessDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteRemoteAccessDomainOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteRemoteAccessDomainAsync(const DeleteRemoteAccessDomainRequest& request, const DeleteRemoteAccessDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRemoteAccessDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteRemoteAccessDomainOutcomeCallable CfwClient::DeleteRemoteAccessDomainCallable(const DeleteRemoteAccessDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRemoteAccessDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteRemoteAccessDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DeleteResourceGroupOutcome CfwClient::DeleteResourceGroup(const DeleteResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceGroupResponse rsp = DeleteResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceGroupOutcome(rsp);
        else
            return DeleteResourceGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceGroupOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteResourceGroupAsync(const DeleteResourceGroupRequest& request, const DeleteResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteResourceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteResourceGroupOutcomeCallable CfwClient::DeleteResourceGroupCallable(const DeleteResourceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteResourceGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteResourceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DeleteSecurityGroupRuleOutcome CfwClient::DeleteSecurityGroupRule(const DeleteSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityGroupRuleResponse rsp = DeleteSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityGroupRuleOutcome(rsp);
        else
            return DeleteSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteSecurityGroupRuleAsync(const DeleteSecurityGroupRuleRequest& request, const DeleteSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecurityGroupRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteSecurityGroupRuleOutcomeCallable CfwClient::DeleteSecurityGroupRuleCallable(const DeleteSecurityGroupRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecurityGroupRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecurityGroupRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DeleteVpcFwGroupOutcome CfwClient::DeleteVpcFwGroup(const DeleteVpcFwGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpcFwGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpcFwGroupResponse rsp = DeleteVpcFwGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpcFwGroupOutcome(rsp);
        else
            return DeleteVpcFwGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteVpcFwGroupOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteVpcFwGroupAsync(const DeleteVpcFwGroupRequest& request, const DeleteVpcFwGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVpcFwGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteVpcFwGroupOutcomeCallable CfwClient::DeleteVpcFwGroupCallable(const DeleteVpcFwGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVpcFwGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteVpcFwGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeAcListsOutcome CfwClient::DescribeAcLists(const DescribeAcListsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAcLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAcListsResponse rsp = DescribeAcListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAcListsOutcome(rsp);
        else
            return DescribeAcListsOutcome(o.GetError());
    }
    else
    {
        return DescribeAcListsOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeAcListsAsync(const DescribeAcListsRequest& request, const DescribeAcListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAcLists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeAcListsOutcomeCallable CfwClient::DescribeAcListsCallable(const DescribeAcListsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAcListsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAcLists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeAclRuleOutcome CfwClient::DescribeAclRule(const DescribeAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAclRuleResponse rsp = DescribeAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAclRuleOutcome(rsp);
        else
            return DescribeAclRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeAclRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeAclRuleAsync(const DescribeAclRuleRequest& request, const DescribeAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAclRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeAclRuleOutcomeCallable CfwClient::DescribeAclRuleCallable(const DescribeAclRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAclRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeAclRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeAddressTemplateListOutcome CfwClient::DescribeAddressTemplateList(const DescribeAddressTemplateListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddressTemplateList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressTemplateListResponse rsp = DescribeAddressTemplateListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressTemplateListOutcome(rsp);
        else
            return DescribeAddressTemplateListOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressTemplateListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeAddressTemplateListAsync(const DescribeAddressTemplateListRequest& request, const DescribeAddressTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAddressTemplateList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeAddressTemplateListOutcomeCallable CfwClient::DescribeAddressTemplateListCallable(const DescribeAddressTemplateListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAddressTemplateListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAddressTemplateList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeAssetSyncOutcome CfwClient::DescribeAssetSync(const DescribeAssetSyncRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetSync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetSyncResponse rsp = DescribeAssetSyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetSyncOutcome(rsp);
        else
            return DescribeAssetSyncOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetSyncOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeAssetSyncAsync(const DescribeAssetSyncRequest& request, const DescribeAssetSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetSync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeAssetSyncOutcomeCallable CfwClient::DescribeAssetSyncCallable(const DescribeAssetSyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetSyncOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetSync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeAssociatedInstanceListOutcome CfwClient::DescribeAssociatedInstanceList(const DescribeAssociatedInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssociatedInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssociatedInstanceListResponse rsp = DescribeAssociatedInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssociatedInstanceListOutcome(rsp);
        else
            return DescribeAssociatedInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssociatedInstanceListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeAssociatedInstanceListAsync(const DescribeAssociatedInstanceListRequest& request, const DescribeAssociatedInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssociatedInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeAssociatedInstanceListOutcomeCallable CfwClient::DescribeAssociatedInstanceListCallable(const DescribeAssociatedInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssociatedInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssociatedInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeBlockByIpTimesListOutcome CfwClient::DescribeBlockByIpTimesList(const DescribeBlockByIpTimesListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlockByIpTimesList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlockByIpTimesListResponse rsp = DescribeBlockByIpTimesListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlockByIpTimesListOutcome(rsp);
        else
            return DescribeBlockByIpTimesListOutcome(o.GetError());
    }
    else
    {
        return DescribeBlockByIpTimesListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeBlockByIpTimesListAsync(const DescribeBlockByIpTimesListRequest& request, const DescribeBlockByIpTimesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBlockByIpTimesList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeBlockByIpTimesListOutcomeCallable CfwClient::DescribeBlockByIpTimesListCallable(const DescribeBlockByIpTimesListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBlockByIpTimesListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBlockByIpTimesList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeBlockIgnoreListOutcome CfwClient::DescribeBlockIgnoreList(const DescribeBlockIgnoreListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlockIgnoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlockIgnoreListResponse rsp = DescribeBlockIgnoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlockIgnoreListOutcome(rsp);
        else
            return DescribeBlockIgnoreListOutcome(o.GetError());
    }
    else
    {
        return DescribeBlockIgnoreListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeBlockIgnoreListAsync(const DescribeBlockIgnoreListRequest& request, const DescribeBlockIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBlockIgnoreList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeBlockIgnoreListOutcomeCallable CfwClient::DescribeBlockIgnoreListCallable(const DescribeBlockIgnoreListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBlockIgnoreListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBlockIgnoreList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeBlockStaticListOutcome CfwClient::DescribeBlockStaticList(const DescribeBlockStaticListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlockStaticList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlockStaticListResponse rsp = DescribeBlockStaticListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlockStaticListOutcome(rsp);
        else
            return DescribeBlockStaticListOutcome(o.GetError());
    }
    else
    {
        return DescribeBlockStaticListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeBlockStaticListAsync(const DescribeBlockStaticListRequest& request, const DescribeBlockStaticListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBlockStaticList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeBlockStaticListOutcomeCallable CfwClient::DescribeBlockStaticListCallable(const DescribeBlockStaticListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBlockStaticListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBlockStaticList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeCfwEipsOutcome CfwClient::DescribeCfwEips(const DescribeCfwEipsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfwEips");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfwEipsResponse rsp = DescribeCfwEipsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfwEipsOutcome(rsp);
        else
            return DescribeCfwEipsOutcome(o.GetError());
    }
    else
    {
        return DescribeCfwEipsOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeCfwEipsAsync(const DescribeCfwEipsRequest& request, const DescribeCfwEipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCfwEips(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeCfwEipsOutcomeCallable CfwClient::DescribeCfwEipsCallable(const DescribeCfwEipsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCfwEipsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCfwEips(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeCfwInsStatusOutcome CfwClient::DescribeCfwInsStatus(const DescribeCfwInsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfwInsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfwInsStatusResponse rsp = DescribeCfwInsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfwInsStatusOutcome(rsp);
        else
            return DescribeCfwInsStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeCfwInsStatusOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeCfwInsStatusAsync(const DescribeCfwInsStatusRequest& request, const DescribeCfwInsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCfwInsStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeCfwInsStatusOutcomeCallable CfwClient::DescribeCfwInsStatusCallable(const DescribeCfwInsStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCfwInsStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeCfwInsStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeDefenseSwitchOutcome CfwClient::DescribeDefenseSwitch(const DescribeDefenseSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefenseSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefenseSwitchResponse rsp = DescribeDefenseSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefenseSwitchOutcome(rsp);
        else
            return DescribeDefenseSwitchOutcome(o.GetError());
    }
    else
    {
        return DescribeDefenseSwitchOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeDefenseSwitchAsync(const DescribeDefenseSwitchRequest& request, const DescribeDefenseSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDefenseSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeDefenseSwitchOutcomeCallable CfwClient::DescribeDefenseSwitchCallable(const DescribeDefenseSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDefenseSwitchOutcome()>>(
        [this, request]()
        {
            return this->DescribeDefenseSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeEnterpriseSGRuleProgressOutcome CfwClient::DescribeEnterpriseSGRuleProgress(const DescribeEnterpriseSGRuleProgressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnterpriseSGRuleProgress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnterpriseSGRuleProgressResponse rsp = DescribeEnterpriseSGRuleProgressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnterpriseSGRuleProgressOutcome(rsp);
        else
            return DescribeEnterpriseSGRuleProgressOutcome(o.GetError());
    }
    else
    {
        return DescribeEnterpriseSGRuleProgressOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeEnterpriseSGRuleProgressAsync(const DescribeEnterpriseSGRuleProgressRequest& request, const DescribeEnterpriseSGRuleProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnterpriseSGRuleProgress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeEnterpriseSGRuleProgressOutcomeCallable CfwClient::DescribeEnterpriseSGRuleProgressCallable(const DescribeEnterpriseSGRuleProgressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnterpriseSGRuleProgressOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnterpriseSGRuleProgress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeEnterpriseSecurityGroupRuleOutcome CfwClient::DescribeEnterpriseSecurityGroupRule(const DescribeEnterpriseSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnterpriseSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnterpriseSecurityGroupRuleResponse rsp = DescribeEnterpriseSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnterpriseSecurityGroupRuleOutcome(rsp);
        else
            return DescribeEnterpriseSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeEnterpriseSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeEnterpriseSecurityGroupRuleAsync(const DescribeEnterpriseSecurityGroupRuleRequest& request, const DescribeEnterpriseSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnterpriseSecurityGroupRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeEnterpriseSecurityGroupRuleOutcomeCallable CfwClient::DescribeEnterpriseSecurityGroupRuleCallable(const DescribeEnterpriseSecurityGroupRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnterpriseSecurityGroupRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnterpriseSecurityGroupRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeEnterpriseSecurityGroupRuleListOutcome CfwClient::DescribeEnterpriseSecurityGroupRuleList(const DescribeEnterpriseSecurityGroupRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnterpriseSecurityGroupRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnterpriseSecurityGroupRuleListResponse rsp = DescribeEnterpriseSecurityGroupRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnterpriseSecurityGroupRuleListOutcome(rsp);
        else
            return DescribeEnterpriseSecurityGroupRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeEnterpriseSecurityGroupRuleListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeEnterpriseSecurityGroupRuleListAsync(const DescribeEnterpriseSecurityGroupRuleListRequest& request, const DescribeEnterpriseSecurityGroupRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnterpriseSecurityGroupRuleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeEnterpriseSecurityGroupRuleListOutcomeCallable CfwClient::DescribeEnterpriseSecurityGroupRuleListCallable(const DescribeEnterpriseSecurityGroupRuleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnterpriseSecurityGroupRuleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnterpriseSecurityGroupRuleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeFwEdgeIpsOutcome CfwClient::DescribeFwEdgeIps(const DescribeFwEdgeIpsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFwEdgeIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFwEdgeIpsResponse rsp = DescribeFwEdgeIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFwEdgeIpsOutcome(rsp);
        else
            return DescribeFwEdgeIpsOutcome(o.GetError());
    }
    else
    {
        return DescribeFwEdgeIpsOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeFwEdgeIpsAsync(const DescribeFwEdgeIpsRequest& request, const DescribeFwEdgeIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFwEdgeIps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeFwEdgeIpsOutcomeCallable CfwClient::DescribeFwEdgeIpsCallable(const DescribeFwEdgeIpsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFwEdgeIpsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFwEdgeIps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeFwGroupInstanceInfoOutcome CfwClient::DescribeFwGroupInstanceInfo(const DescribeFwGroupInstanceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFwGroupInstanceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFwGroupInstanceInfoResponse rsp = DescribeFwGroupInstanceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFwGroupInstanceInfoOutcome(rsp);
        else
            return DescribeFwGroupInstanceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeFwGroupInstanceInfoOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeFwGroupInstanceInfoAsync(const DescribeFwGroupInstanceInfoRequest& request, const DescribeFwGroupInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFwGroupInstanceInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeFwGroupInstanceInfoOutcomeCallable CfwClient::DescribeFwGroupInstanceInfoCallable(const DescribeFwGroupInstanceInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFwGroupInstanceInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeFwGroupInstanceInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeFwSyncStatusOutcome CfwClient::DescribeFwSyncStatus(const DescribeFwSyncStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFwSyncStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFwSyncStatusResponse rsp = DescribeFwSyncStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFwSyncStatusOutcome(rsp);
        else
            return DescribeFwSyncStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeFwSyncStatusOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeFwSyncStatusAsync(const DescribeFwSyncStatusRequest& request, const DescribeFwSyncStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFwSyncStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeFwSyncStatusOutcomeCallable CfwClient::DescribeFwSyncStatusCallable(const DescribeFwSyncStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFwSyncStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeFwSyncStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeGuideScanInfoOutcome CfwClient::DescribeGuideScanInfo(const DescribeGuideScanInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGuideScanInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGuideScanInfoResponse rsp = DescribeGuideScanInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGuideScanInfoOutcome(rsp);
        else
            return DescribeGuideScanInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeGuideScanInfoOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeGuideScanInfoAsync(const DescribeGuideScanInfoRequest& request, const DescribeGuideScanInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGuideScanInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeGuideScanInfoOutcomeCallable CfwClient::DescribeGuideScanInfoCallable(const DescribeGuideScanInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGuideScanInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeGuideScanInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeIPStatusListOutcome CfwClient::DescribeIPStatusList(const DescribeIPStatusListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIPStatusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIPStatusListResponse rsp = DescribeIPStatusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIPStatusListOutcome(rsp);
        else
            return DescribeIPStatusListOutcome(o.GetError());
    }
    else
    {
        return DescribeIPStatusListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeIPStatusListAsync(const DescribeIPStatusListRequest& request, const DescribeIPStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIPStatusList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeIPStatusListOutcomeCallable CfwClient::DescribeIPStatusListCallable(const DescribeIPStatusListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIPStatusListOutcome()>>(
        [this, request]()
        {
            return this->DescribeIPStatusList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeIdsWhiteRuleOutcome CfwClient::DescribeIdsWhiteRule(const DescribeIdsWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdsWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdsWhiteRuleResponse rsp = DescribeIdsWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdsWhiteRuleOutcome(rsp);
        else
            return DescribeIdsWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeIdsWhiteRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeIdsWhiteRuleAsync(const DescribeIdsWhiteRuleRequest& request, const DescribeIdsWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIdsWhiteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeIdsWhiteRuleOutcomeCallable CfwClient::DescribeIdsWhiteRuleCallable(const DescribeIdsWhiteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIdsWhiteRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeIdsWhiteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeLogsOutcome CfwClient::DescribeLogs(const DescribeLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogsResponse rsp = DescribeLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogsOutcome(rsp);
        else
            return DescribeLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogsOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeLogsAsync(const DescribeLogsRequest& request, const DescribeLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeLogsOutcomeCallable CfwClient::DescribeLogsCallable(const DescribeLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeNatAcRuleOutcome CfwClient::DescribeNatAcRule(const DescribeNatAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatAcRuleResponse rsp = DescribeNatAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatAcRuleOutcome(rsp);
        else
            return DescribeNatAcRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeNatAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatAcRuleAsync(const DescribeNatAcRuleRequest& request, const DescribeNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeNatAcRuleOutcomeCallable CfwClient::DescribeNatAcRuleCallable(const DescribeNatAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatAcRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeNatFwDnatRuleOutcome CfwClient::DescribeNatFwDnatRule(const DescribeNatFwDnatRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwDnatRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwDnatRuleResponse rsp = DescribeNatFwDnatRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwDnatRuleOutcome(rsp);
        else
            return DescribeNatFwDnatRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwDnatRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwDnatRuleAsync(const DescribeNatFwDnatRuleRequest& request, const DescribeNatFwDnatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatFwDnatRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeNatFwDnatRuleOutcomeCallable CfwClient::DescribeNatFwDnatRuleCallable(const DescribeNatFwDnatRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatFwDnatRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatFwDnatRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeNatFwInfoCountOutcome CfwClient::DescribeNatFwInfoCount(const DescribeNatFwInfoCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwInfoCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwInfoCountResponse rsp = DescribeNatFwInfoCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwInfoCountOutcome(rsp);
        else
            return DescribeNatFwInfoCountOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwInfoCountOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwInfoCountAsync(const DescribeNatFwInfoCountRequest& request, const DescribeNatFwInfoCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatFwInfoCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeNatFwInfoCountOutcomeCallable CfwClient::DescribeNatFwInfoCountCallable(const DescribeNatFwInfoCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatFwInfoCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatFwInfoCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeNatFwInstanceOutcome CfwClient::DescribeNatFwInstance(const DescribeNatFwInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwInstanceResponse rsp = DescribeNatFwInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwInstanceOutcome(rsp);
        else
            return DescribeNatFwInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwInstanceOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwInstanceAsync(const DescribeNatFwInstanceRequest& request, const DescribeNatFwInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatFwInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeNatFwInstanceOutcomeCallable CfwClient::DescribeNatFwInstanceCallable(const DescribeNatFwInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatFwInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatFwInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeNatFwInstanceWithRegionOutcome CfwClient::DescribeNatFwInstanceWithRegion(const DescribeNatFwInstanceWithRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwInstanceWithRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwInstanceWithRegionResponse rsp = DescribeNatFwInstanceWithRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwInstanceWithRegionOutcome(rsp);
        else
            return DescribeNatFwInstanceWithRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwInstanceWithRegionOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwInstanceWithRegionAsync(const DescribeNatFwInstanceWithRegionRequest& request, const DescribeNatFwInstanceWithRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatFwInstanceWithRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeNatFwInstanceWithRegionOutcomeCallable CfwClient::DescribeNatFwInstanceWithRegionCallable(const DescribeNatFwInstanceWithRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatFwInstanceWithRegionOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatFwInstanceWithRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeNatFwInstancesInfoOutcome CfwClient::DescribeNatFwInstancesInfo(const DescribeNatFwInstancesInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwInstancesInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwInstancesInfoResponse rsp = DescribeNatFwInstancesInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwInstancesInfoOutcome(rsp);
        else
            return DescribeNatFwInstancesInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwInstancesInfoOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwInstancesInfoAsync(const DescribeNatFwInstancesInfoRequest& request, const DescribeNatFwInstancesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatFwInstancesInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeNatFwInstancesInfoOutcomeCallable CfwClient::DescribeNatFwInstancesInfoCallable(const DescribeNatFwInstancesInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatFwInstancesInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatFwInstancesInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeNatFwVpcDnsLstOutcome CfwClient::DescribeNatFwVpcDnsLst(const DescribeNatFwVpcDnsLstRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwVpcDnsLst");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwVpcDnsLstResponse rsp = DescribeNatFwVpcDnsLstResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwVpcDnsLstOutcome(rsp);
        else
            return DescribeNatFwVpcDnsLstOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwVpcDnsLstOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwVpcDnsLstAsync(const DescribeNatFwVpcDnsLstRequest& request, const DescribeNatFwVpcDnsLstAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatFwVpcDnsLst(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeNatFwVpcDnsLstOutcomeCallable CfwClient::DescribeNatFwVpcDnsLstCallable(const DescribeNatFwVpcDnsLstRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatFwVpcDnsLstOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatFwVpcDnsLst(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeResourceGroupOutcome CfwClient::DescribeResourceGroup(const DescribeResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceGroupResponse rsp = DescribeResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceGroupOutcome(rsp);
        else
            return DescribeResourceGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceGroupOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeResourceGroupAsync(const DescribeResourceGroupRequest& request, const DescribeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeResourceGroupOutcomeCallable CfwClient::DescribeResourceGroupCallable(const DescribeResourceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeResourceGroupNewOutcome CfwClient::DescribeResourceGroupNew(const DescribeResourceGroupNewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceGroupNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceGroupNewResponse rsp = DescribeResourceGroupNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceGroupNewOutcome(rsp);
        else
            return DescribeResourceGroupNewOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceGroupNewOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeResourceGroupNewAsync(const DescribeResourceGroupNewRequest& request, const DescribeResourceGroupNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceGroupNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeResourceGroupNewOutcomeCallable CfwClient::DescribeResourceGroupNewCallable(const DescribeResourceGroupNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceGroupNewOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceGroupNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeRuleOverviewOutcome CfwClient::DescribeRuleOverview(const DescribeRuleOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleOverviewResponse rsp = DescribeRuleOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleOverviewOutcome(rsp);
        else
            return DescribeRuleOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleOverviewOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeRuleOverviewAsync(const DescribeRuleOverviewRequest& request, const DescribeRuleOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeRuleOverviewOutcomeCallable CfwClient::DescribeRuleOverviewCallable(const DescribeRuleOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeSecurityGroupListOutcome CfwClient::DescribeSecurityGroupList(const DescribeSecurityGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupListResponse rsp = DescribeSecurityGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupListOutcome(rsp);
        else
            return DescribeSecurityGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeSecurityGroupListAsync(const DescribeSecurityGroupListRequest& request, const DescribeSecurityGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeSecurityGroupListOutcomeCallable CfwClient::DescribeSecurityGroupListCallable(const DescribeSecurityGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeSourceAssetOutcome CfwClient::DescribeSourceAsset(const DescribeSourceAssetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSourceAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSourceAssetResponse rsp = DescribeSourceAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSourceAssetOutcome(rsp);
        else
            return DescribeSourceAssetOutcome(o.GetError());
    }
    else
    {
        return DescribeSourceAssetOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeSourceAssetAsync(const DescribeSourceAssetRequest& request, const DescribeSourceAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSourceAsset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeSourceAssetOutcomeCallable CfwClient::DescribeSourceAssetCallable(const DescribeSourceAssetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSourceAssetOutcome()>>(
        [this, request]()
        {
            return this->DescribeSourceAsset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeSwitchListsOutcome CfwClient::DescribeSwitchLists(const DescribeSwitchListsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSwitchLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSwitchListsResponse rsp = DescribeSwitchListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSwitchListsOutcome(rsp);
        else
            return DescribeSwitchListsOutcome(o.GetError());
    }
    else
    {
        return DescribeSwitchListsOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeSwitchListsAsync(const DescribeSwitchListsRequest& request, const DescribeSwitchListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSwitchLists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeSwitchListsOutcomeCallable CfwClient::DescribeSwitchListsCallable(const DescribeSwitchListsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSwitchListsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSwitchLists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeTLogInfoOutcome CfwClient::DescribeTLogInfo(const DescribeTLogInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTLogInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTLogInfoResponse rsp = DescribeTLogInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTLogInfoOutcome(rsp);
        else
            return DescribeTLogInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTLogInfoOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeTLogInfoAsync(const DescribeTLogInfoRequest& request, const DescribeTLogInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTLogInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeTLogInfoOutcomeCallable CfwClient::DescribeTLogInfoCallable(const DescribeTLogInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTLogInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeTLogInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeTLogIpListOutcome CfwClient::DescribeTLogIpList(const DescribeTLogIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTLogIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTLogIpListResponse rsp = DescribeTLogIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTLogIpListOutcome(rsp);
        else
            return DescribeTLogIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeTLogIpListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeTLogIpListAsync(const DescribeTLogIpListRequest& request, const DescribeTLogIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTLogIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeTLogIpListOutcomeCallable CfwClient::DescribeTLogIpListCallable(const DescribeTLogIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTLogIpListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTLogIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeTableStatusOutcome CfwClient::DescribeTableStatus(const DescribeTableStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableStatusResponse rsp = DescribeTableStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableStatusOutcome(rsp);
        else
            return DescribeTableStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTableStatusOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeTableStatusAsync(const DescribeTableStatusRequest& request, const DescribeTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeTableStatusOutcomeCallable CfwClient::DescribeTableStatusCallable(const DescribeTableStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeUnHandleEventTabListOutcome CfwClient::DescribeUnHandleEventTabList(const DescribeUnHandleEventTabListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnHandleEventTabList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnHandleEventTabListResponse rsp = DescribeUnHandleEventTabListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnHandleEventTabListOutcome(rsp);
        else
            return DescribeUnHandleEventTabListOutcome(o.GetError());
    }
    else
    {
        return DescribeUnHandleEventTabListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeUnHandleEventTabListAsync(const DescribeUnHandleEventTabListRequest& request, const DescribeUnHandleEventTabListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnHandleEventTabList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeUnHandleEventTabListOutcomeCallable CfwClient::DescribeUnHandleEventTabListCallable(const DescribeUnHandleEventTabListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnHandleEventTabListOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnHandleEventTabList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeVpcAcRuleOutcome CfwClient::DescribeVpcAcRule(const DescribeVpcAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcAcRuleResponse rsp = DescribeVpcAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcAcRuleOutcome(rsp);
        else
            return DescribeVpcAcRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeVpcAcRuleAsync(const DescribeVpcAcRuleRequest& request, const DescribeVpcAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeVpcAcRuleOutcomeCallable CfwClient::DescribeVpcAcRuleCallable(const DescribeVpcAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcAcRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeVpcFwGroupSwitchOutcome CfwClient::DescribeVpcFwGroupSwitch(const DescribeVpcFwGroupSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcFwGroupSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcFwGroupSwitchResponse rsp = DescribeVpcFwGroupSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcFwGroupSwitchOutcome(rsp);
        else
            return DescribeVpcFwGroupSwitchOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcFwGroupSwitchOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeVpcFwGroupSwitchAsync(const DescribeVpcFwGroupSwitchRequest& request, const DescribeVpcFwGroupSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcFwGroupSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeVpcFwGroupSwitchOutcomeCallable CfwClient::DescribeVpcFwGroupSwitchCallable(const DescribeVpcFwGroupSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcFwGroupSwitchOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcFwGroupSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ExpandCfwVerticalOutcome CfwClient::ExpandCfwVertical(const ExpandCfwVerticalRequest &request)
{
    auto outcome = MakeRequest(request, "ExpandCfwVertical");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExpandCfwVerticalResponse rsp = ExpandCfwVerticalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExpandCfwVerticalOutcome(rsp);
        else
            return ExpandCfwVerticalOutcome(o.GetError());
    }
    else
    {
        return ExpandCfwVerticalOutcome(outcome.GetError());
    }
}

void CfwClient::ExpandCfwVerticalAsync(const ExpandCfwVerticalRequest& request, const ExpandCfwVerticalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExpandCfwVertical(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ExpandCfwVerticalOutcomeCallable CfwClient::ExpandCfwVerticalCallable(const ExpandCfwVerticalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExpandCfwVerticalOutcome()>>(
        [this, request]()
        {
            return this->ExpandCfwVertical(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyAcRuleOutcome CfwClient::ModifyAcRule(const ModifyAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAcRuleResponse rsp = ModifyAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAcRuleOutcome(rsp);
        else
            return ModifyAcRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAcRuleAsync(const ModifyAcRuleRequest& request, const ModifyAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyAcRuleOutcomeCallable CfwClient::ModifyAcRuleCallable(const ModifyAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAcRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyAclRuleOutcome CfwClient::ModifyAclRule(const ModifyAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAclRuleResponse rsp = ModifyAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAclRuleOutcome(rsp);
        else
            return ModifyAclRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyAclRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAclRuleAsync(const ModifyAclRuleRequest& request, const ModifyAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAclRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyAclRuleOutcomeCallable CfwClient::ModifyAclRuleCallable(const ModifyAclRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAclRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyAclRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyAddressTemplateOutcome CfwClient::ModifyAddressTemplate(const ModifyAddressTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressTemplateResponse rsp = ModifyAddressTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressTemplateOutcome(rsp);
        else
            return ModifyAddressTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressTemplateOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAddressTemplateAsync(const ModifyAddressTemplateRequest& request, const ModifyAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAddressTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyAddressTemplateOutcomeCallable CfwClient::ModifyAddressTemplateCallable(const ModifyAddressTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAddressTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyAddressTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyAllPublicIPSwitchStatusOutcome CfwClient::ModifyAllPublicIPSwitchStatus(const ModifyAllPublicIPSwitchStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAllPublicIPSwitchStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAllPublicIPSwitchStatusResponse rsp = ModifyAllPublicIPSwitchStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAllPublicIPSwitchStatusOutcome(rsp);
        else
            return ModifyAllPublicIPSwitchStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAllPublicIPSwitchStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAllPublicIPSwitchStatusAsync(const ModifyAllPublicIPSwitchStatusRequest& request, const ModifyAllPublicIPSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAllPublicIPSwitchStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyAllPublicIPSwitchStatusOutcomeCallable CfwClient::ModifyAllPublicIPSwitchStatusCallable(const ModifyAllPublicIPSwitchStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAllPublicIPSwitchStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAllPublicIPSwitchStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyAllRuleStatusOutcome CfwClient::ModifyAllRuleStatus(const ModifyAllRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAllRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAllRuleStatusResponse rsp = ModifyAllRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAllRuleStatusOutcome(rsp);
        else
            return ModifyAllRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAllRuleStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAllRuleStatusAsync(const ModifyAllRuleStatusRequest& request, const ModifyAllRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAllRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyAllRuleStatusOutcomeCallable CfwClient::ModifyAllRuleStatusCallable(const ModifyAllRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAllRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAllRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyAssetScanOutcome CfwClient::ModifyAssetScan(const ModifyAssetScanRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAssetScan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAssetScanResponse rsp = ModifyAssetScanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAssetScanOutcome(rsp);
        else
            return ModifyAssetScanOutcome(o.GetError());
    }
    else
    {
        return ModifyAssetScanOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAssetScanAsync(const ModifyAssetScanRequest& request, const ModifyAssetScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAssetScan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyAssetScanOutcomeCallable CfwClient::ModifyAssetScanCallable(const ModifyAssetScanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAssetScanOutcome()>>(
        [this, request]()
        {
            return this->ModifyAssetScan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyAssetSyncOutcome CfwClient::ModifyAssetSync(const ModifyAssetSyncRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAssetSync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAssetSyncResponse rsp = ModifyAssetSyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAssetSyncOutcome(rsp);
        else
            return ModifyAssetSyncOutcome(o.GetError());
    }
    else
    {
        return ModifyAssetSyncOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAssetSyncAsync(const ModifyAssetSyncRequest& request, const ModifyAssetSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAssetSync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyAssetSyncOutcomeCallable CfwClient::ModifyAssetSyncCallable(const ModifyAssetSyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAssetSyncOutcome()>>(
        [this, request]()
        {
            return this->ModifyAssetSync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyBlockIgnoreListOutcome CfwClient::ModifyBlockIgnoreList(const ModifyBlockIgnoreListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBlockIgnoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBlockIgnoreListResponse rsp = ModifyBlockIgnoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBlockIgnoreListOutcome(rsp);
        else
            return ModifyBlockIgnoreListOutcome(o.GetError());
    }
    else
    {
        return ModifyBlockIgnoreListOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyBlockIgnoreListAsync(const ModifyBlockIgnoreListRequest& request, const ModifyBlockIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBlockIgnoreList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyBlockIgnoreListOutcomeCallable CfwClient::ModifyBlockIgnoreListCallable(const ModifyBlockIgnoreListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBlockIgnoreListOutcome()>>(
        [this, request]()
        {
            return this->ModifyBlockIgnoreList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyBlockIgnoreRuleOutcome CfwClient::ModifyBlockIgnoreRule(const ModifyBlockIgnoreRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBlockIgnoreRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBlockIgnoreRuleResponse rsp = ModifyBlockIgnoreRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBlockIgnoreRuleOutcome(rsp);
        else
            return ModifyBlockIgnoreRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyBlockIgnoreRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyBlockIgnoreRuleAsync(const ModifyBlockIgnoreRuleRequest& request, const ModifyBlockIgnoreRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBlockIgnoreRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyBlockIgnoreRuleOutcomeCallable CfwClient::ModifyBlockIgnoreRuleCallable(const ModifyBlockIgnoreRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBlockIgnoreRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyBlockIgnoreRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyBlockIgnoreRuleNewOutcome CfwClient::ModifyBlockIgnoreRuleNew(const ModifyBlockIgnoreRuleNewRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBlockIgnoreRuleNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBlockIgnoreRuleNewResponse rsp = ModifyBlockIgnoreRuleNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBlockIgnoreRuleNewOutcome(rsp);
        else
            return ModifyBlockIgnoreRuleNewOutcome(o.GetError());
    }
    else
    {
        return ModifyBlockIgnoreRuleNewOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyBlockIgnoreRuleNewAsync(const ModifyBlockIgnoreRuleNewRequest& request, const ModifyBlockIgnoreRuleNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBlockIgnoreRuleNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyBlockIgnoreRuleNewOutcomeCallable CfwClient::ModifyBlockIgnoreRuleNewCallable(const ModifyBlockIgnoreRuleNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBlockIgnoreRuleNewOutcome()>>(
        [this, request]()
        {
            return this->ModifyBlockIgnoreRuleNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyBlockTopOutcome CfwClient::ModifyBlockTop(const ModifyBlockTopRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBlockTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBlockTopResponse rsp = ModifyBlockTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBlockTopOutcome(rsp);
        else
            return ModifyBlockTopOutcome(o.GetError());
    }
    else
    {
        return ModifyBlockTopOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyBlockTopAsync(const ModifyBlockTopRequest& request, const ModifyBlockTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBlockTop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyBlockTopOutcomeCallable CfwClient::ModifyBlockTopCallable(const ModifyBlockTopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBlockTopOutcome()>>(
        [this, request]()
        {
            return this->ModifyBlockTop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyEWRuleStatusOutcome CfwClient::ModifyEWRuleStatus(const ModifyEWRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEWRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEWRuleStatusResponse rsp = ModifyEWRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEWRuleStatusOutcome(rsp);
        else
            return ModifyEWRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyEWRuleStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyEWRuleStatusAsync(const ModifyEWRuleStatusRequest& request, const ModifyEWRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEWRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyEWRuleStatusOutcomeCallable CfwClient::ModifyEWRuleStatusCallable(const ModifyEWRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEWRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyEWRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyEdgeIpSwitchOutcome CfwClient::ModifyEdgeIpSwitch(const ModifyEdgeIpSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEdgeIpSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEdgeIpSwitchResponse rsp = ModifyEdgeIpSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEdgeIpSwitchOutcome(rsp);
        else
            return ModifyEdgeIpSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyEdgeIpSwitchOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyEdgeIpSwitchAsync(const ModifyEdgeIpSwitchRequest& request, const ModifyEdgeIpSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEdgeIpSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyEdgeIpSwitchOutcomeCallable CfwClient::ModifyEdgeIpSwitchCallable(const ModifyEdgeIpSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEdgeIpSwitchOutcome()>>(
        [this, request]()
        {
            return this->ModifyEdgeIpSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyEnterpriseSecurityDispatchStatusOutcome CfwClient::ModifyEnterpriseSecurityDispatchStatus(const ModifyEnterpriseSecurityDispatchStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnterpriseSecurityDispatchStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnterpriseSecurityDispatchStatusResponse rsp = ModifyEnterpriseSecurityDispatchStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnterpriseSecurityDispatchStatusOutcome(rsp);
        else
            return ModifyEnterpriseSecurityDispatchStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyEnterpriseSecurityDispatchStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyEnterpriseSecurityDispatchStatusAsync(const ModifyEnterpriseSecurityDispatchStatusRequest& request, const ModifyEnterpriseSecurityDispatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEnterpriseSecurityDispatchStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyEnterpriseSecurityDispatchStatusOutcomeCallable CfwClient::ModifyEnterpriseSecurityDispatchStatusCallable(const ModifyEnterpriseSecurityDispatchStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEnterpriseSecurityDispatchStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyEnterpriseSecurityDispatchStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyEnterpriseSecurityGroupRuleOutcome CfwClient::ModifyEnterpriseSecurityGroupRule(const ModifyEnterpriseSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnterpriseSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnterpriseSecurityGroupRuleResponse rsp = ModifyEnterpriseSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnterpriseSecurityGroupRuleOutcome(rsp);
        else
            return ModifyEnterpriseSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyEnterpriseSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyEnterpriseSecurityGroupRuleAsync(const ModifyEnterpriseSecurityGroupRuleRequest& request, const ModifyEnterpriseSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEnterpriseSecurityGroupRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyEnterpriseSecurityGroupRuleOutcomeCallable CfwClient::ModifyEnterpriseSecurityGroupRuleCallable(const ModifyEnterpriseSecurityGroupRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEnterpriseSecurityGroupRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyEnterpriseSecurityGroupRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyFwGroupSwitchOutcome CfwClient::ModifyFwGroupSwitch(const ModifyFwGroupSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFwGroupSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFwGroupSwitchResponse rsp = ModifyFwGroupSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFwGroupSwitchOutcome(rsp);
        else
            return ModifyFwGroupSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyFwGroupSwitchOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyFwGroupSwitchAsync(const ModifyFwGroupSwitchRequest& request, const ModifyFwGroupSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFwGroupSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyFwGroupSwitchOutcomeCallable CfwClient::ModifyFwGroupSwitchCallable(const ModifyFwGroupSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFwGroupSwitchOutcome()>>(
        [this, request]()
        {
            return this->ModifyFwGroupSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyNatAcRuleOutcome CfwClient::ModifyNatAcRule(const ModifyNatAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatAcRuleResponse rsp = ModifyNatAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatAcRuleOutcome(rsp);
        else
            return ModifyNatAcRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyNatAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatAcRuleAsync(const ModifyNatAcRuleRequest& request, const ModifyNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNatAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyNatAcRuleOutcomeCallable CfwClient::ModifyNatAcRuleCallable(const ModifyNatAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNatAcRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyNatAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyNatFwReSelectOutcome CfwClient::ModifyNatFwReSelect(const ModifyNatFwReSelectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatFwReSelect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatFwReSelectResponse rsp = ModifyNatFwReSelectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatFwReSelectOutcome(rsp);
        else
            return ModifyNatFwReSelectOutcome(o.GetError());
    }
    else
    {
        return ModifyNatFwReSelectOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatFwReSelectAsync(const ModifyNatFwReSelectRequest& request, const ModifyNatFwReSelectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNatFwReSelect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyNatFwReSelectOutcomeCallable CfwClient::ModifyNatFwReSelectCallable(const ModifyNatFwReSelectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNatFwReSelectOutcome()>>(
        [this, request]()
        {
            return this->ModifyNatFwReSelect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyNatFwSwitchOutcome CfwClient::ModifyNatFwSwitch(const ModifyNatFwSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatFwSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatFwSwitchResponse rsp = ModifyNatFwSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatFwSwitchOutcome(rsp);
        else
            return ModifyNatFwSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyNatFwSwitchOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatFwSwitchAsync(const ModifyNatFwSwitchRequest& request, const ModifyNatFwSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNatFwSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyNatFwSwitchOutcomeCallable CfwClient::ModifyNatFwSwitchCallable(const ModifyNatFwSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNatFwSwitchOutcome()>>(
        [this, request]()
        {
            return this->ModifyNatFwSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyNatFwVpcDnsSwitchOutcome CfwClient::ModifyNatFwVpcDnsSwitch(const ModifyNatFwVpcDnsSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatFwVpcDnsSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatFwVpcDnsSwitchResponse rsp = ModifyNatFwVpcDnsSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatFwVpcDnsSwitchOutcome(rsp);
        else
            return ModifyNatFwVpcDnsSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyNatFwVpcDnsSwitchOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatFwVpcDnsSwitchAsync(const ModifyNatFwVpcDnsSwitchRequest& request, const ModifyNatFwVpcDnsSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNatFwVpcDnsSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyNatFwVpcDnsSwitchOutcomeCallable CfwClient::ModifyNatFwVpcDnsSwitchCallable(const ModifyNatFwVpcDnsSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNatFwVpcDnsSwitchOutcome()>>(
        [this, request]()
        {
            return this->ModifyNatFwVpcDnsSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyNatInstanceOutcome CfwClient::ModifyNatInstance(const ModifyNatInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatInstanceResponse rsp = ModifyNatInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatInstanceOutcome(rsp);
        else
            return ModifyNatInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyNatInstanceOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatInstanceAsync(const ModifyNatInstanceRequest& request, const ModifyNatInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNatInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyNatInstanceOutcomeCallable CfwClient::ModifyNatInstanceCallable(const ModifyNatInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNatInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyNatInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyNatSequenceRulesOutcome CfwClient::ModifyNatSequenceRules(const ModifyNatSequenceRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatSequenceRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatSequenceRulesResponse rsp = ModifyNatSequenceRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatSequenceRulesOutcome(rsp);
        else
            return ModifyNatSequenceRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyNatSequenceRulesOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatSequenceRulesAsync(const ModifyNatSequenceRulesRequest& request, const ModifyNatSequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNatSequenceRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyNatSequenceRulesOutcomeCallable CfwClient::ModifyNatSequenceRulesCallable(const ModifyNatSequenceRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNatSequenceRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyNatSequenceRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyResourceGroupOutcome CfwClient::ModifyResourceGroup(const ModifyResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceGroupResponse rsp = ModifyResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceGroupOutcome(rsp);
        else
            return ModifyResourceGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceGroupOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyResourceGroupAsync(const ModifyResourceGroupRequest& request, const ModifyResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyResourceGroupOutcomeCallable CfwClient::ModifyResourceGroupCallable(const ModifyResourceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyRunSyncAssetOutcome CfwClient::ModifyRunSyncAsset(const ModifyRunSyncAssetRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRunSyncAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRunSyncAssetResponse rsp = ModifyRunSyncAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRunSyncAssetOutcome(rsp);
        else
            return ModifyRunSyncAssetOutcome(o.GetError());
    }
    else
    {
        return ModifyRunSyncAssetOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyRunSyncAssetAsync(const ModifyRunSyncAssetRequest& request, const ModifyRunSyncAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRunSyncAsset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyRunSyncAssetOutcomeCallable CfwClient::ModifyRunSyncAssetCallable(const ModifyRunSyncAssetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRunSyncAssetOutcome()>>(
        [this, request]()
        {
            return this->ModifyRunSyncAsset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifySecurityGroupItemRuleStatusOutcome CfwClient::ModifySecurityGroupItemRuleStatus(const ModifySecurityGroupItemRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupItemRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupItemRuleStatusResponse rsp = ModifySecurityGroupItemRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupItemRuleStatusOutcome(rsp);
        else
            return ModifySecurityGroupItemRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupItemRuleStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifySecurityGroupItemRuleStatusAsync(const ModifySecurityGroupItemRuleStatusRequest& request, const ModifySecurityGroupItemRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityGroupItemRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifySecurityGroupItemRuleStatusOutcomeCallable CfwClient::ModifySecurityGroupItemRuleStatusCallable(const ModifySecurityGroupItemRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityGroupItemRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityGroupItemRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifySecurityGroupRuleOutcome CfwClient::ModifySecurityGroupRule(const ModifySecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupRuleResponse rsp = ModifySecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupRuleOutcome(rsp);
        else
            return ModifySecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifySecurityGroupRuleAsync(const ModifySecurityGroupRuleRequest& request, const ModifySecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityGroupRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifySecurityGroupRuleOutcomeCallable CfwClient::ModifySecurityGroupRuleCallable(const ModifySecurityGroupRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityGroupRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityGroupRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifySecurityGroupSequenceRulesOutcome CfwClient::ModifySecurityGroupSequenceRules(const ModifySecurityGroupSequenceRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupSequenceRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupSequenceRulesResponse rsp = ModifySecurityGroupSequenceRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupSequenceRulesOutcome(rsp);
        else
            return ModifySecurityGroupSequenceRulesOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupSequenceRulesOutcome(outcome.GetError());
    }
}

void CfwClient::ModifySecurityGroupSequenceRulesAsync(const ModifySecurityGroupSequenceRulesRequest& request, const ModifySecurityGroupSequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityGroupSequenceRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifySecurityGroupSequenceRulesOutcomeCallable CfwClient::ModifySecurityGroupSequenceRulesCallable(const ModifySecurityGroupSequenceRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityGroupSequenceRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityGroupSequenceRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifySequenceAclRulesOutcome CfwClient::ModifySequenceAclRules(const ModifySequenceAclRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySequenceAclRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySequenceAclRulesResponse rsp = ModifySequenceAclRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySequenceAclRulesOutcome(rsp);
        else
            return ModifySequenceAclRulesOutcome(o.GetError());
    }
    else
    {
        return ModifySequenceAclRulesOutcome(outcome.GetError());
    }
}

void CfwClient::ModifySequenceAclRulesAsync(const ModifySequenceAclRulesRequest& request, const ModifySequenceAclRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySequenceAclRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifySequenceAclRulesOutcomeCallable CfwClient::ModifySequenceAclRulesCallable(const ModifySequenceAclRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySequenceAclRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifySequenceAclRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifySequenceRulesOutcome CfwClient::ModifySequenceRules(const ModifySequenceRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySequenceRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySequenceRulesResponse rsp = ModifySequenceRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySequenceRulesOutcome(rsp);
        else
            return ModifySequenceRulesOutcome(o.GetError());
    }
    else
    {
        return ModifySequenceRulesOutcome(outcome.GetError());
    }
}

void CfwClient::ModifySequenceRulesAsync(const ModifySequenceRulesRequest& request, const ModifySequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySequenceRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifySequenceRulesOutcomeCallable CfwClient::ModifySequenceRulesCallable(const ModifySequenceRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySequenceRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifySequenceRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyStorageSettingOutcome CfwClient::ModifyStorageSetting(const ModifyStorageSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStorageSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStorageSettingResponse rsp = ModifyStorageSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStorageSettingOutcome(rsp);
        else
            return ModifyStorageSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyStorageSettingOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyStorageSettingAsync(const ModifyStorageSettingRequest& request, const ModifyStorageSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStorageSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyStorageSettingOutcomeCallable CfwClient::ModifyStorageSettingCallable(const ModifyStorageSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStorageSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyStorageSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyTableStatusOutcome CfwClient::ModifyTableStatus(const ModifyTableStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTableStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTableStatusResponse rsp = ModifyTableStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTableStatusOutcome(rsp);
        else
            return ModifyTableStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyTableStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyTableStatusAsync(const ModifyTableStatusRequest& request, const ModifyTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTableStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyTableStatusOutcomeCallable CfwClient::ModifyTableStatusCallable(const ModifyTableStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTableStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyTableStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyVpcAcRuleOutcome CfwClient::ModifyVpcAcRule(const ModifyVpcAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcAcRuleResponse rsp = ModifyVpcAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcAcRuleOutcome(rsp);
        else
            return ModifyVpcAcRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyVpcAcRuleAsync(const ModifyVpcAcRuleRequest& request, const ModifyVpcAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVpcAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyVpcAcRuleOutcomeCallable CfwClient::ModifyVpcAcRuleCallable(const ModifyVpcAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVpcAcRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyVpcAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyVpcFwGroupOutcome CfwClient::ModifyVpcFwGroup(const ModifyVpcFwGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcFwGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcFwGroupResponse rsp = ModifyVpcFwGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcFwGroupOutcome(rsp);
        else
            return ModifyVpcFwGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcFwGroupOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyVpcFwGroupAsync(const ModifyVpcFwGroupRequest& request, const ModifyVpcFwGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVpcFwGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyVpcFwGroupOutcomeCallable CfwClient::ModifyVpcFwGroupCallable(const ModifyVpcFwGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVpcFwGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyVpcFwGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyVpcFwSequenceRulesOutcome CfwClient::ModifyVpcFwSequenceRules(const ModifyVpcFwSequenceRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcFwSequenceRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcFwSequenceRulesResponse rsp = ModifyVpcFwSequenceRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcFwSequenceRulesOutcome(rsp);
        else
            return ModifyVpcFwSequenceRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcFwSequenceRulesOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyVpcFwSequenceRulesAsync(const ModifyVpcFwSequenceRulesRequest& request, const ModifyVpcFwSequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVpcFwSequenceRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyVpcFwSequenceRulesOutcomeCallable CfwClient::ModifyVpcFwSequenceRulesCallable(const ModifyVpcFwSequenceRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVpcFwSequenceRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyVpcFwSequenceRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::RemoveAcRuleOutcome CfwClient::RemoveAcRule(const RemoveAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveAcRuleResponse rsp = RemoveAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveAcRuleOutcome(rsp);
        else
            return RemoveAcRuleOutcome(o.GetError());
    }
    else
    {
        return RemoveAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::RemoveAcRuleAsync(const RemoveAcRuleRequest& request, const RemoveAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::RemoveAcRuleOutcomeCallable CfwClient::RemoveAcRuleCallable(const RemoveAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveAcRuleOutcome()>>(
        [this, request]()
        {
            return this->RemoveAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::RemoveAclRuleOutcome CfwClient::RemoveAclRule(const RemoveAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveAclRuleResponse rsp = RemoveAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveAclRuleOutcome(rsp);
        else
            return RemoveAclRuleOutcome(o.GetError());
    }
    else
    {
        return RemoveAclRuleOutcome(outcome.GetError());
    }
}

void CfwClient::RemoveAclRuleAsync(const RemoveAclRuleRequest& request, const RemoveAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveAclRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::RemoveAclRuleOutcomeCallable CfwClient::RemoveAclRuleCallable(const RemoveAclRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveAclRuleOutcome()>>(
        [this, request]()
        {
            return this->RemoveAclRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::RemoveEnterpriseSecurityGroupRuleOutcome CfwClient::RemoveEnterpriseSecurityGroupRule(const RemoveEnterpriseSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveEnterpriseSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveEnterpriseSecurityGroupRuleResponse rsp = RemoveEnterpriseSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveEnterpriseSecurityGroupRuleOutcome(rsp);
        else
            return RemoveEnterpriseSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return RemoveEnterpriseSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void CfwClient::RemoveEnterpriseSecurityGroupRuleAsync(const RemoveEnterpriseSecurityGroupRuleRequest& request, const RemoveEnterpriseSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveEnterpriseSecurityGroupRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::RemoveEnterpriseSecurityGroupRuleOutcomeCallable CfwClient::RemoveEnterpriseSecurityGroupRuleCallable(const RemoveEnterpriseSecurityGroupRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveEnterpriseSecurityGroupRuleOutcome()>>(
        [this, request]()
        {
            return this->RemoveEnterpriseSecurityGroupRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::RemoveNatAcRuleOutcome CfwClient::RemoveNatAcRule(const RemoveNatAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveNatAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveNatAcRuleResponse rsp = RemoveNatAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveNatAcRuleOutcome(rsp);
        else
            return RemoveNatAcRuleOutcome(o.GetError());
    }
    else
    {
        return RemoveNatAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::RemoveNatAcRuleAsync(const RemoveNatAcRuleRequest& request, const RemoveNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveNatAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::RemoveNatAcRuleOutcomeCallable CfwClient::RemoveNatAcRuleCallable(const RemoveNatAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveNatAcRuleOutcome()>>(
        [this, request]()
        {
            return this->RemoveNatAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::RemoveVpcAcRuleOutcome CfwClient::RemoveVpcAcRule(const RemoveVpcAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveVpcAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveVpcAcRuleResponse rsp = RemoveVpcAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveVpcAcRuleOutcome(rsp);
        else
            return RemoveVpcAcRuleOutcome(o.GetError());
    }
    else
    {
        return RemoveVpcAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::RemoveVpcAcRuleAsync(const RemoveVpcAcRuleRequest& request, const RemoveVpcAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveVpcAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::RemoveVpcAcRuleOutcomeCallable CfwClient::RemoveVpcAcRuleCallable(const RemoveVpcAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveVpcAcRuleOutcome()>>(
        [this, request]()
        {
            return this->RemoveVpcAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::SearchLogOutcome CfwClient::SearchLog(const SearchLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchLogResponse rsp = SearchLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchLogOutcome(rsp);
        else
            return SearchLogOutcome(o.GetError());
    }
    else
    {
        return SearchLogOutcome(outcome.GetError());
    }
}

void CfwClient::SearchLogAsync(const SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::SearchLogOutcomeCallable CfwClient::SearchLogCallable(const SearchLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchLogOutcome()>>(
        [this, request]()
        {
            return this->SearchLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::SetNatFwDnatRuleOutcome CfwClient::SetNatFwDnatRule(const SetNatFwDnatRuleRequest &request)
{
    auto outcome = MakeRequest(request, "SetNatFwDnatRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetNatFwDnatRuleResponse rsp = SetNatFwDnatRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetNatFwDnatRuleOutcome(rsp);
        else
            return SetNatFwDnatRuleOutcome(o.GetError());
    }
    else
    {
        return SetNatFwDnatRuleOutcome(outcome.GetError());
    }
}

void CfwClient::SetNatFwDnatRuleAsync(const SetNatFwDnatRuleRequest& request, const SetNatFwDnatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetNatFwDnatRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::SetNatFwDnatRuleOutcomeCallable CfwClient::SetNatFwDnatRuleCallable(const SetNatFwDnatRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetNatFwDnatRuleOutcome()>>(
        [this, request]()
        {
            return this->SetNatFwDnatRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::SetNatFwEipOutcome CfwClient::SetNatFwEip(const SetNatFwEipRequest &request)
{
    auto outcome = MakeRequest(request, "SetNatFwEip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetNatFwEipResponse rsp = SetNatFwEipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetNatFwEipOutcome(rsp);
        else
            return SetNatFwEipOutcome(o.GetError());
    }
    else
    {
        return SetNatFwEipOutcome(outcome.GetError());
    }
}

void CfwClient::SetNatFwEipAsync(const SetNatFwEipRequest& request, const SetNatFwEipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetNatFwEip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::SetNatFwEipOutcomeCallable CfwClient::SetNatFwEipCallable(const SetNatFwEipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetNatFwEipOutcome()>>(
        [this, request]()
        {
            return this->SetNatFwEip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::StopSecurityGroupRuleDispatchOutcome CfwClient::StopSecurityGroupRuleDispatch(const StopSecurityGroupRuleDispatchRequest &request)
{
    auto outcome = MakeRequest(request, "StopSecurityGroupRuleDispatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopSecurityGroupRuleDispatchResponse rsp = StopSecurityGroupRuleDispatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopSecurityGroupRuleDispatchOutcome(rsp);
        else
            return StopSecurityGroupRuleDispatchOutcome(o.GetError());
    }
    else
    {
        return StopSecurityGroupRuleDispatchOutcome(outcome.GetError());
    }
}

void CfwClient::StopSecurityGroupRuleDispatchAsync(const StopSecurityGroupRuleDispatchRequest& request, const StopSecurityGroupRuleDispatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopSecurityGroupRuleDispatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::StopSecurityGroupRuleDispatchOutcomeCallable CfwClient::StopSecurityGroupRuleDispatchCallable(const StopSecurityGroupRuleDispatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopSecurityGroupRuleDispatchOutcome()>>(
        [this, request]()
        {
            return this->StopSecurityGroupRuleDispatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::SyncFwOperateOutcome CfwClient::SyncFwOperate(const SyncFwOperateRequest &request)
{
    auto outcome = MakeRequest(request, "SyncFwOperate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncFwOperateResponse rsp = SyncFwOperateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncFwOperateOutcome(rsp);
        else
            return SyncFwOperateOutcome(o.GetError());
    }
    else
    {
        return SyncFwOperateOutcome(outcome.GetError());
    }
}

void CfwClient::SyncFwOperateAsync(const SyncFwOperateRequest& request, const SyncFwOperateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncFwOperate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::SyncFwOperateOutcomeCallable CfwClient::SyncFwOperateCallable(const SyncFwOperateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncFwOperateOutcome()>>(
        [this, request]()
        {
            return this->SyncFwOperate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

