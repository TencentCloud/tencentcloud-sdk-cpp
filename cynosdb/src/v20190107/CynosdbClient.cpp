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

#include <tencentcloud/cynosdb/v20190107/CynosdbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cynosdb::V20190107;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-01-07";
    const string ENDPOINT = "cynosdb.tencentcloudapi.com";
}

CynosdbClient::CynosdbClient(const Credential &credential, const string &region) :
    CynosdbClient(credential, region, ClientProfile())
{
}

CynosdbClient::CynosdbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CynosdbClient::ActivateInstanceOutcome CynosdbClient::ActivateInstance(const ActivateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ActivateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActivateInstanceResponse rsp = ActivateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActivateInstanceOutcome(rsp);
        else
            return ActivateInstanceOutcome(o.GetError());
    }
    else
    {
        return ActivateInstanceOutcome(outcome.GetError());
    }
}

void CynosdbClient::ActivateInstanceAsync(const ActivateInstanceRequest& request, const ActivateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ActivateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ActivateInstanceOutcomeCallable CynosdbClient::ActivateInstanceCallable(const ActivateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ActivateInstanceOutcome()>>(
        [this, request]()
        {
            return this->ActivateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::AddClusterSlaveZoneOutcome CynosdbClient::AddClusterSlaveZone(const AddClusterSlaveZoneRequest &request)
{
    auto outcome = MakeRequest(request, "AddClusterSlaveZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddClusterSlaveZoneResponse rsp = AddClusterSlaveZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddClusterSlaveZoneOutcome(rsp);
        else
            return AddClusterSlaveZoneOutcome(o.GetError());
    }
    else
    {
        return AddClusterSlaveZoneOutcome(outcome.GetError());
    }
}

void CynosdbClient::AddClusterSlaveZoneAsync(const AddClusterSlaveZoneRequest& request, const AddClusterSlaveZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddClusterSlaveZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::AddClusterSlaveZoneOutcomeCallable CynosdbClient::AddClusterSlaveZoneCallable(const AddClusterSlaveZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddClusterSlaveZoneOutcome()>>(
        [this, request]()
        {
            return this->AddClusterSlaveZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::AddInstancesOutcome CynosdbClient::AddInstances(const AddInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AddInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddInstancesResponse rsp = AddInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddInstancesOutcome(rsp);
        else
            return AddInstancesOutcome(o.GetError());
    }
    else
    {
        return AddInstancesOutcome(outcome.GetError());
    }
}

void CynosdbClient::AddInstancesAsync(const AddInstancesRequest& request, const AddInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::AddInstancesOutcomeCallable CynosdbClient::AddInstancesCallable(const AddInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddInstancesOutcome()>>(
        [this, request]()
        {
            return this->AddInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::AssociateSecurityGroupsOutcome CynosdbClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateSecurityGroupsResponse rsp = AssociateSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateSecurityGroupsOutcome(rsp);
        else
            return AssociateSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return AssociateSecurityGroupsOutcome(outcome.GetError());
    }
}

void CynosdbClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::AssociateSecurityGroupsOutcomeCallable CynosdbClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->AssociateSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::BindClusterResourcePackagesOutcome CynosdbClient::BindClusterResourcePackages(const BindClusterResourcePackagesRequest &request)
{
    auto outcome = MakeRequest(request, "BindClusterResourcePackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindClusterResourcePackagesResponse rsp = BindClusterResourcePackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindClusterResourcePackagesOutcome(rsp);
        else
            return BindClusterResourcePackagesOutcome(o.GetError());
    }
    else
    {
        return BindClusterResourcePackagesOutcome(outcome.GetError());
    }
}

void CynosdbClient::BindClusterResourcePackagesAsync(const BindClusterResourcePackagesRequest& request, const BindClusterResourcePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindClusterResourcePackages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::BindClusterResourcePackagesOutcomeCallable CynosdbClient::BindClusterResourcePackagesCallable(const BindClusterResourcePackagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindClusterResourcePackagesOutcome()>>(
        [this, request]()
        {
            return this->BindClusterResourcePackages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CloseAuditServiceOutcome CynosdbClient::CloseAuditService(const CloseAuditServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CloseAuditService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseAuditServiceResponse rsp = CloseAuditServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseAuditServiceOutcome(rsp);
        else
            return CloseAuditServiceOutcome(o.GetError());
    }
    else
    {
        return CloseAuditServiceOutcome(outcome.GetError());
    }
}

void CynosdbClient::CloseAuditServiceAsync(const CloseAuditServiceRequest& request, const CloseAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseAuditService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CloseAuditServiceOutcomeCallable CynosdbClient::CloseAuditServiceCallable(const CloseAuditServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseAuditServiceOutcome()>>(
        [this, request]()
        {
            return this->CloseAuditService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CloseClusterPasswordComplexityOutcome CynosdbClient::CloseClusterPasswordComplexity(const CloseClusterPasswordComplexityRequest &request)
{
    auto outcome = MakeRequest(request, "CloseClusterPasswordComplexity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseClusterPasswordComplexityResponse rsp = CloseClusterPasswordComplexityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseClusterPasswordComplexityOutcome(rsp);
        else
            return CloseClusterPasswordComplexityOutcome(o.GetError());
    }
    else
    {
        return CloseClusterPasswordComplexityOutcome(outcome.GetError());
    }
}

void CynosdbClient::CloseClusterPasswordComplexityAsync(const CloseClusterPasswordComplexityRequest& request, const CloseClusterPasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseClusterPasswordComplexity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CloseClusterPasswordComplexityOutcomeCallable CynosdbClient::CloseClusterPasswordComplexityCallable(const CloseClusterPasswordComplexityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseClusterPasswordComplexityOutcome()>>(
        [this, request]()
        {
            return this->CloseClusterPasswordComplexity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CloseProxyOutcome CynosdbClient::CloseProxy(const CloseProxyRequest &request)
{
    auto outcome = MakeRequest(request, "CloseProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseProxyResponse rsp = CloseProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseProxyOutcome(rsp);
        else
            return CloseProxyOutcome(o.GetError());
    }
    else
    {
        return CloseProxyOutcome(outcome.GetError());
    }
}

void CynosdbClient::CloseProxyAsync(const CloseProxyRequest& request, const CloseProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CloseProxyOutcomeCallable CynosdbClient::CloseProxyCallable(const CloseProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseProxyOutcome()>>(
        [this, request]()
        {
            return this->CloseProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CloseProxyEndPointOutcome CynosdbClient::CloseProxyEndPoint(const CloseProxyEndPointRequest &request)
{
    auto outcome = MakeRequest(request, "CloseProxyEndPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseProxyEndPointResponse rsp = CloseProxyEndPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseProxyEndPointOutcome(rsp);
        else
            return CloseProxyEndPointOutcome(o.GetError());
    }
    else
    {
        return CloseProxyEndPointOutcome(outcome.GetError());
    }
}

void CynosdbClient::CloseProxyEndPointAsync(const CloseProxyEndPointRequest& request, const CloseProxyEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseProxyEndPoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CloseProxyEndPointOutcomeCallable CynosdbClient::CloseProxyEndPointCallable(const CloseProxyEndPointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseProxyEndPointOutcome()>>(
        [this, request]()
        {
            return this->CloseProxyEndPoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CloseSSLOutcome CynosdbClient::CloseSSL(const CloseSSLRequest &request)
{
    auto outcome = MakeRequest(request, "CloseSSL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseSSLResponse rsp = CloseSSLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseSSLOutcome(rsp);
        else
            return CloseSSLOutcome(o.GetError());
    }
    else
    {
        return CloseSSLOutcome(outcome.GetError());
    }
}

void CynosdbClient::CloseSSLAsync(const CloseSSLRequest& request, const CloseSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseSSL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CloseSSLOutcomeCallable CynosdbClient::CloseSSLCallable(const CloseSSLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseSSLOutcome()>>(
        [this, request]()
        {
            return this->CloseSSL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CloseWanOutcome CynosdbClient::CloseWan(const CloseWanRequest &request)
{
    auto outcome = MakeRequest(request, "CloseWan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseWanResponse rsp = CloseWanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseWanOutcome(rsp);
        else
            return CloseWanOutcome(o.GetError());
    }
    else
    {
        return CloseWanOutcome(outcome.GetError());
    }
}

void CynosdbClient::CloseWanAsync(const CloseWanRequest& request, const CloseWanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseWan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CloseWanOutcomeCallable CynosdbClient::CloseWanCallable(const CloseWanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseWanOutcome()>>(
        [this, request]()
        {
            return this->CloseWan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CopyClusterPasswordComplexityOutcome CynosdbClient::CopyClusterPasswordComplexity(const CopyClusterPasswordComplexityRequest &request)
{
    auto outcome = MakeRequest(request, "CopyClusterPasswordComplexity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyClusterPasswordComplexityResponse rsp = CopyClusterPasswordComplexityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyClusterPasswordComplexityOutcome(rsp);
        else
            return CopyClusterPasswordComplexityOutcome(o.GetError());
    }
    else
    {
        return CopyClusterPasswordComplexityOutcome(outcome.GetError());
    }
}

void CynosdbClient::CopyClusterPasswordComplexityAsync(const CopyClusterPasswordComplexityRequest& request, const CopyClusterPasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyClusterPasswordComplexity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CopyClusterPasswordComplexityOutcomeCallable CynosdbClient::CopyClusterPasswordComplexityCallable(const CopyClusterPasswordComplexityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopyClusterPasswordComplexityOutcome()>>(
        [this, request]()
        {
            return this->CopyClusterPasswordComplexity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CreateAccountsOutcome CynosdbClient::CreateAccounts(const CreateAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccountsResponse rsp = CreateAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccountsOutcome(rsp);
        else
            return CreateAccountsOutcome(o.GetError());
    }
    else
    {
        return CreateAccountsOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateAccountsAsync(const CreateAccountsRequest& request, const CreateAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CreateAccountsOutcomeCallable CynosdbClient::CreateAccountsCallable(const CreateAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccountsOutcome()>>(
        [this, request]()
        {
            return this->CreateAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CreateAuditLogFileOutcome CynosdbClient::CreateAuditLogFile(const CreateAuditLogFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuditLogFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuditLogFileResponse rsp = CreateAuditLogFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuditLogFileOutcome(rsp);
        else
            return CreateAuditLogFileOutcome(o.GetError());
    }
    else
    {
        return CreateAuditLogFileOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateAuditLogFileAsync(const CreateAuditLogFileRequest& request, const CreateAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAuditLogFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CreateAuditLogFileOutcomeCallable CynosdbClient::CreateAuditLogFileCallable(const CreateAuditLogFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAuditLogFileOutcome()>>(
        [this, request]()
        {
            return this->CreateAuditLogFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CreateAuditRuleTemplateOutcome CynosdbClient::CreateAuditRuleTemplate(const CreateAuditRuleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuditRuleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuditRuleTemplateResponse rsp = CreateAuditRuleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuditRuleTemplateOutcome(rsp);
        else
            return CreateAuditRuleTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateAuditRuleTemplateOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateAuditRuleTemplateAsync(const CreateAuditRuleTemplateRequest& request, const CreateAuditRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAuditRuleTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CreateAuditRuleTemplateOutcomeCallable CynosdbClient::CreateAuditRuleTemplateCallable(const CreateAuditRuleTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAuditRuleTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateAuditRuleTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CreateBackupOutcome CynosdbClient::CreateBackup(const CreateBackupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupResponse rsp = CreateBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupOutcome(rsp);
        else
            return CreateBackupOutcome(o.GetError());
    }
    else
    {
        return CreateBackupOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBackup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CreateBackupOutcomeCallable CynosdbClient::CreateBackupCallable(const CreateBackupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBackupOutcome()>>(
        [this, request]()
        {
            return this->CreateBackup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CreateCLSDeliveryOutcome CynosdbClient::CreateCLSDelivery(const CreateCLSDeliveryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCLSDelivery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCLSDeliveryResponse rsp = CreateCLSDeliveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCLSDeliveryOutcome(rsp);
        else
            return CreateCLSDeliveryOutcome(o.GetError());
    }
    else
    {
        return CreateCLSDeliveryOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateCLSDeliveryAsync(const CreateCLSDeliveryRequest& request, const CreateCLSDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCLSDelivery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CreateCLSDeliveryOutcomeCallable CynosdbClient::CreateCLSDeliveryCallable(const CreateCLSDeliveryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCLSDeliveryOutcome()>>(
        [this, request]()
        {
            return this->CreateCLSDelivery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CreateClusterDatabaseOutcome CynosdbClient::CreateClusterDatabase(const CreateClusterDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterDatabaseResponse rsp = CreateClusterDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterDatabaseOutcome(rsp);
        else
            return CreateClusterDatabaseOutcome(o.GetError());
    }
    else
    {
        return CreateClusterDatabaseOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateClusterDatabaseAsync(const CreateClusterDatabaseRequest& request, const CreateClusterDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CreateClusterDatabaseOutcomeCallable CynosdbClient::CreateClusterDatabaseCallable(const CreateClusterDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterDatabaseOutcome()>>(
        [this, request]()
        {
            return this->CreateClusterDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CreateClustersOutcome CynosdbClient::CreateClusters(const CreateClustersRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClustersResponse rsp = CreateClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClustersOutcome(rsp);
        else
            return CreateClustersOutcome(o.GetError());
    }
    else
    {
        return CreateClustersOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateClustersAsync(const CreateClustersRequest& request, const CreateClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CreateClustersOutcomeCallable CynosdbClient::CreateClustersCallable(const CreateClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClustersOutcome()>>(
        [this, request]()
        {
            return this->CreateClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CreateParamTemplateOutcome CynosdbClient::CreateParamTemplate(const CreateParamTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateParamTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateParamTemplateResponse rsp = CreateParamTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateParamTemplateOutcome(rsp);
        else
            return CreateParamTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateParamTemplateOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateParamTemplateAsync(const CreateParamTemplateRequest& request, const CreateParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateParamTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CreateParamTemplateOutcomeCallable CynosdbClient::CreateParamTemplateCallable(const CreateParamTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateParamTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateParamTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CreateProxyOutcome CynosdbClient::CreateProxy(const CreateProxyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProxyResponse rsp = CreateProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProxyOutcome(rsp);
        else
            return CreateProxyOutcome(o.GetError());
    }
    else
    {
        return CreateProxyOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateProxyAsync(const CreateProxyRequest& request, const CreateProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CreateProxyOutcomeCallable CynosdbClient::CreateProxyCallable(const CreateProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProxyOutcome()>>(
        [this, request]()
        {
            return this->CreateProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CreateProxyEndPointOutcome CynosdbClient::CreateProxyEndPoint(const CreateProxyEndPointRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProxyEndPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProxyEndPointResponse rsp = CreateProxyEndPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProxyEndPointOutcome(rsp);
        else
            return CreateProxyEndPointOutcome(o.GetError());
    }
    else
    {
        return CreateProxyEndPointOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateProxyEndPointAsync(const CreateProxyEndPointRequest& request, const CreateProxyEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProxyEndPoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CreateProxyEndPointOutcomeCallable CynosdbClient::CreateProxyEndPointCallable(const CreateProxyEndPointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProxyEndPointOutcome()>>(
        [this, request]()
        {
            return this->CreateProxyEndPoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CreateResourcePackageOutcome CynosdbClient::CreateResourcePackage(const CreateResourcePackageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResourcePackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourcePackageResponse rsp = CreateResourcePackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourcePackageOutcome(rsp);
        else
            return CreateResourcePackageOutcome(o.GetError());
    }
    else
    {
        return CreateResourcePackageOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateResourcePackageAsync(const CreateResourcePackageRequest& request, const CreateResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateResourcePackage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CreateResourcePackageOutcomeCallable CynosdbClient::CreateResourcePackageCallable(const CreateResourcePackageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateResourcePackageOutcome()>>(
        [this, request]()
        {
            return this->CreateResourcePackage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DeleteAccountsOutcome CynosdbClient::DeleteAccounts(const DeleteAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccountsResponse rsp = DeleteAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccountsOutcome(rsp);
        else
            return DeleteAccountsOutcome(o.GetError());
    }
    else
    {
        return DeleteAccountsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DeleteAccountsAsync(const DeleteAccountsRequest& request, const DeleteAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DeleteAccountsOutcomeCallable CynosdbClient::DeleteAccountsCallable(const DeleteAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAccountsOutcome()>>(
        [this, request]()
        {
            return this->DeleteAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DeleteAuditLogFileOutcome CynosdbClient::DeleteAuditLogFile(const DeleteAuditLogFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuditLogFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuditLogFileResponse rsp = DeleteAuditLogFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuditLogFileOutcome(rsp);
        else
            return DeleteAuditLogFileOutcome(o.GetError());
    }
    else
    {
        return DeleteAuditLogFileOutcome(outcome.GetError());
    }
}

void CynosdbClient::DeleteAuditLogFileAsync(const DeleteAuditLogFileRequest& request, const DeleteAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAuditLogFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DeleteAuditLogFileOutcomeCallable CynosdbClient::DeleteAuditLogFileCallable(const DeleteAuditLogFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAuditLogFileOutcome()>>(
        [this, request]()
        {
            return this->DeleteAuditLogFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DeleteAuditRuleTemplatesOutcome CynosdbClient::DeleteAuditRuleTemplates(const DeleteAuditRuleTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuditRuleTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuditRuleTemplatesResponse rsp = DeleteAuditRuleTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuditRuleTemplatesOutcome(rsp);
        else
            return DeleteAuditRuleTemplatesOutcome(o.GetError());
    }
    else
    {
        return DeleteAuditRuleTemplatesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DeleteAuditRuleTemplatesAsync(const DeleteAuditRuleTemplatesRequest& request, const DeleteAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAuditRuleTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DeleteAuditRuleTemplatesOutcomeCallable CynosdbClient::DeleteAuditRuleTemplatesCallable(const DeleteAuditRuleTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAuditRuleTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DeleteAuditRuleTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DeleteBackupOutcome CynosdbClient::DeleteBackup(const DeleteBackupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBackupResponse rsp = DeleteBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBackupOutcome(rsp);
        else
            return DeleteBackupOutcome(o.GetError());
    }
    else
    {
        return DeleteBackupOutcome(outcome.GetError());
    }
}

void CynosdbClient::DeleteBackupAsync(const DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBackup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DeleteBackupOutcomeCallable CynosdbClient::DeleteBackupCallable(const DeleteBackupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBackupOutcome()>>(
        [this, request]()
        {
            return this->DeleteBackup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DeleteCLSDeliveryOutcome CynosdbClient::DeleteCLSDelivery(const DeleteCLSDeliveryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCLSDelivery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCLSDeliveryResponse rsp = DeleteCLSDeliveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCLSDeliveryOutcome(rsp);
        else
            return DeleteCLSDeliveryOutcome(o.GetError());
    }
    else
    {
        return DeleteCLSDeliveryOutcome(outcome.GetError());
    }
}

void CynosdbClient::DeleteCLSDeliveryAsync(const DeleteCLSDeliveryRequest& request, const DeleteCLSDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCLSDelivery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DeleteCLSDeliveryOutcomeCallable CynosdbClient::DeleteCLSDeliveryCallable(const DeleteCLSDeliveryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCLSDeliveryOutcome()>>(
        [this, request]()
        {
            return this->DeleteCLSDelivery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DeleteClusterDatabaseOutcome CynosdbClient::DeleteClusterDatabase(const DeleteClusterDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterDatabaseResponse rsp = DeleteClusterDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterDatabaseOutcome(rsp);
        else
            return DeleteClusterDatabaseOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterDatabaseOutcome(outcome.GetError());
    }
}

void CynosdbClient::DeleteClusterDatabaseAsync(const DeleteClusterDatabaseRequest& request, const DeleteClusterDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClusterDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DeleteClusterDatabaseOutcomeCallable CynosdbClient::DeleteClusterDatabaseCallable(const DeleteClusterDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterDatabaseOutcome()>>(
        [this, request]()
        {
            return this->DeleteClusterDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DeleteParamTemplateOutcome CynosdbClient::DeleteParamTemplate(const DeleteParamTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteParamTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteParamTemplateResponse rsp = DeleteParamTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteParamTemplateOutcome(rsp);
        else
            return DeleteParamTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteParamTemplateOutcome(outcome.GetError());
    }
}

void CynosdbClient::DeleteParamTemplateAsync(const DeleteParamTemplateRequest& request, const DeleteParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteParamTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DeleteParamTemplateOutcomeCallable CynosdbClient::DeleteParamTemplateCallable(const DeleteParamTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteParamTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteParamTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeAccountAllGrantPrivilegesOutcome CynosdbClient::DescribeAccountAllGrantPrivileges(const DescribeAccountAllGrantPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountAllGrantPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountAllGrantPrivilegesResponse rsp = DescribeAccountAllGrantPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountAllGrantPrivilegesOutcome(rsp);
        else
            return DescribeAccountAllGrantPrivilegesOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountAllGrantPrivilegesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeAccountAllGrantPrivilegesAsync(const DescribeAccountAllGrantPrivilegesRequest& request, const DescribeAccountAllGrantPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountAllGrantPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeAccountAllGrantPrivilegesOutcomeCallable CynosdbClient::DescribeAccountAllGrantPrivilegesCallable(const DescribeAccountAllGrantPrivilegesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountAllGrantPrivilegesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccountAllGrantPrivileges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeAccountPrivilegesOutcome CynosdbClient::DescribeAccountPrivileges(const DescribeAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountPrivilegesResponse rsp = DescribeAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountPrivilegesOutcome(rsp);
        else
            return DescribeAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountPrivilegesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeAccountPrivilegesAsync(const DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeAccountPrivilegesOutcomeCallable CynosdbClient::DescribeAccountPrivilegesCallable(const DescribeAccountPrivilegesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountPrivilegesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccountPrivileges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeAccountsOutcome CynosdbClient::DescribeAccounts(const DescribeAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountsResponse rsp = DescribeAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountsOutcome(rsp);
        else
            return DescribeAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeAccountsOutcomeCallable CynosdbClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeAuditInstanceListOutcome CynosdbClient::DescribeAuditInstanceList(const DescribeAuditInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditInstanceListResponse rsp = DescribeAuditInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditInstanceListOutcome(rsp);
        else
            return DescribeAuditInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditInstanceListOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeAuditInstanceListAsync(const DescribeAuditInstanceListRequest& request, const DescribeAuditInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeAuditInstanceListOutcomeCallable CynosdbClient::DescribeAuditInstanceListCallable(const DescribeAuditInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeAuditLogFilesOutcome CynosdbClient::DescribeAuditLogFiles(const DescribeAuditLogFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditLogFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditLogFilesResponse rsp = DescribeAuditLogFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditLogFilesOutcome(rsp);
        else
            return DescribeAuditLogFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditLogFilesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeAuditLogFilesAsync(const DescribeAuditLogFilesRequest& request, const DescribeAuditLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditLogFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeAuditLogFilesOutcomeCallable CynosdbClient::DescribeAuditLogFilesCallable(const DescribeAuditLogFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditLogFilesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditLogFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeAuditLogsOutcome CynosdbClient::DescribeAuditLogs(const DescribeAuditLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditLogsResponse rsp = DescribeAuditLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditLogsOutcome(rsp);
        else
            return DescribeAuditLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditLogsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeAuditLogsAsync(const DescribeAuditLogsRequest& request, const DescribeAuditLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeAuditLogsOutcomeCallable CynosdbClient::DescribeAuditLogsCallable(const DescribeAuditLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeAuditRuleTemplatesOutcome CynosdbClient::DescribeAuditRuleTemplates(const DescribeAuditRuleTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditRuleTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditRuleTemplatesResponse rsp = DescribeAuditRuleTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditRuleTemplatesOutcome(rsp);
        else
            return DescribeAuditRuleTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditRuleTemplatesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeAuditRuleTemplatesAsync(const DescribeAuditRuleTemplatesRequest& request, const DescribeAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditRuleTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeAuditRuleTemplatesOutcomeCallable CynosdbClient::DescribeAuditRuleTemplatesCallable(const DescribeAuditRuleTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditRuleTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditRuleTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeAuditRuleWithInstanceIdsOutcome CynosdbClient::DescribeAuditRuleWithInstanceIds(const DescribeAuditRuleWithInstanceIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditRuleWithInstanceIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditRuleWithInstanceIdsResponse rsp = DescribeAuditRuleWithInstanceIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditRuleWithInstanceIdsOutcome(rsp);
        else
            return DescribeAuditRuleWithInstanceIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditRuleWithInstanceIdsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeAuditRuleWithInstanceIdsAsync(const DescribeAuditRuleWithInstanceIdsRequest& request, const DescribeAuditRuleWithInstanceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditRuleWithInstanceIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeAuditRuleWithInstanceIdsOutcomeCallable CynosdbClient::DescribeAuditRuleWithInstanceIdsCallable(const DescribeAuditRuleWithInstanceIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditRuleWithInstanceIdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditRuleWithInstanceIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeBackupConfigOutcome CynosdbClient::DescribeBackupConfig(const DescribeBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupConfigResponse rsp = DescribeBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupConfigOutcome(rsp);
        else
            return DescribeBackupConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupConfigOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBackupConfigAsync(const DescribeBackupConfigRequest& request, const DescribeBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeBackupConfigOutcomeCallable CynosdbClient::DescribeBackupConfigCallable(const DescribeBackupConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeBackupDownloadRestrictionOutcome CynosdbClient::DescribeBackupDownloadRestriction(const DescribeBackupDownloadRestrictionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupDownloadRestriction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupDownloadRestrictionResponse rsp = DescribeBackupDownloadRestrictionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupDownloadRestrictionOutcome(rsp);
        else
            return DescribeBackupDownloadRestrictionOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupDownloadRestrictionOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBackupDownloadRestrictionAsync(const DescribeBackupDownloadRestrictionRequest& request, const DescribeBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupDownloadRestriction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeBackupDownloadRestrictionOutcomeCallable CynosdbClient::DescribeBackupDownloadRestrictionCallable(const DescribeBackupDownloadRestrictionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupDownloadRestrictionOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupDownloadRestriction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeBackupDownloadUrlOutcome CynosdbClient::DescribeBackupDownloadUrl(const DescribeBackupDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupDownloadUrlResponse rsp = DescribeBackupDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupDownloadUrlOutcome(rsp);
        else
            return DescribeBackupDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupDownloadUrlOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBackupDownloadUrlAsync(const DescribeBackupDownloadUrlRequest& request, const DescribeBackupDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeBackupDownloadUrlOutcomeCallable CynosdbClient::DescribeBackupDownloadUrlCallable(const DescribeBackupDownloadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupDownloadUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupDownloadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeBackupDownloadUserRestrictionOutcome CynosdbClient::DescribeBackupDownloadUserRestriction(const DescribeBackupDownloadUserRestrictionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupDownloadUserRestriction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupDownloadUserRestrictionResponse rsp = DescribeBackupDownloadUserRestrictionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupDownloadUserRestrictionOutcome(rsp);
        else
            return DescribeBackupDownloadUserRestrictionOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupDownloadUserRestrictionOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBackupDownloadUserRestrictionAsync(const DescribeBackupDownloadUserRestrictionRequest& request, const DescribeBackupDownloadUserRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupDownloadUserRestriction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeBackupDownloadUserRestrictionOutcomeCallable CynosdbClient::DescribeBackupDownloadUserRestrictionCallable(const DescribeBackupDownloadUserRestrictionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupDownloadUserRestrictionOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupDownloadUserRestriction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeBackupListOutcome CynosdbClient::DescribeBackupList(const DescribeBackupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupListResponse rsp = DescribeBackupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupListOutcome(rsp);
        else
            return DescribeBackupListOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupListOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBackupListAsync(const DescribeBackupListRequest& request, const DescribeBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeBackupListOutcomeCallable CynosdbClient::DescribeBackupListCallable(const DescribeBackupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeBinlogConfigOutcome CynosdbClient::DescribeBinlogConfig(const DescribeBinlogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBinlogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBinlogConfigResponse rsp = DescribeBinlogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBinlogConfigOutcome(rsp);
        else
            return DescribeBinlogConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeBinlogConfigOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBinlogConfigAsync(const DescribeBinlogConfigRequest& request, const DescribeBinlogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBinlogConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeBinlogConfigOutcomeCallable CynosdbClient::DescribeBinlogConfigCallable(const DescribeBinlogConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBinlogConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeBinlogConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeBinlogDownloadUrlOutcome CynosdbClient::DescribeBinlogDownloadUrl(const DescribeBinlogDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBinlogDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBinlogDownloadUrlResponse rsp = DescribeBinlogDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBinlogDownloadUrlOutcome(rsp);
        else
            return DescribeBinlogDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeBinlogDownloadUrlOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBinlogDownloadUrlAsync(const DescribeBinlogDownloadUrlRequest& request, const DescribeBinlogDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBinlogDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeBinlogDownloadUrlOutcomeCallable CynosdbClient::DescribeBinlogDownloadUrlCallable(const DescribeBinlogDownloadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBinlogDownloadUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeBinlogDownloadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeBinlogSaveDaysOutcome CynosdbClient::DescribeBinlogSaveDays(const DescribeBinlogSaveDaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBinlogSaveDays");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBinlogSaveDaysResponse rsp = DescribeBinlogSaveDaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBinlogSaveDaysOutcome(rsp);
        else
            return DescribeBinlogSaveDaysOutcome(o.GetError());
    }
    else
    {
        return DescribeBinlogSaveDaysOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBinlogSaveDaysAsync(const DescribeBinlogSaveDaysRequest& request, const DescribeBinlogSaveDaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBinlogSaveDays(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeBinlogSaveDaysOutcomeCallable CynosdbClient::DescribeBinlogSaveDaysCallable(const DescribeBinlogSaveDaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBinlogSaveDaysOutcome()>>(
        [this, request]()
        {
            return this->DescribeBinlogSaveDays(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeBinlogsOutcome CynosdbClient::DescribeBinlogs(const DescribeBinlogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBinlogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBinlogsResponse rsp = DescribeBinlogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBinlogsOutcome(rsp);
        else
            return DescribeBinlogsOutcome(o.GetError());
    }
    else
    {
        return DescribeBinlogsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBinlogsAsync(const DescribeBinlogsRequest& request, const DescribeBinlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBinlogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeBinlogsOutcomeCallable CynosdbClient::DescribeBinlogsCallable(const DescribeBinlogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBinlogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBinlogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeChangedParamsAfterUpgradeOutcome CynosdbClient::DescribeChangedParamsAfterUpgrade(const DescribeChangedParamsAfterUpgradeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChangedParamsAfterUpgrade");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChangedParamsAfterUpgradeResponse rsp = DescribeChangedParamsAfterUpgradeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChangedParamsAfterUpgradeOutcome(rsp);
        else
            return DescribeChangedParamsAfterUpgradeOutcome(o.GetError());
    }
    else
    {
        return DescribeChangedParamsAfterUpgradeOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeChangedParamsAfterUpgradeAsync(const DescribeChangedParamsAfterUpgradeRequest& request, const DescribeChangedParamsAfterUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChangedParamsAfterUpgrade(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeChangedParamsAfterUpgradeOutcomeCallable CynosdbClient::DescribeChangedParamsAfterUpgradeCallable(const DescribeChangedParamsAfterUpgradeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChangedParamsAfterUpgradeOutcome()>>(
        [this, request]()
        {
            return this->DescribeChangedParamsAfterUpgrade(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeClusterDatabaseTablesOutcome CynosdbClient::DescribeClusterDatabaseTables(const DescribeClusterDatabaseTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterDatabaseTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterDatabaseTablesResponse rsp = DescribeClusterDatabaseTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterDatabaseTablesOutcome(rsp);
        else
            return DescribeClusterDatabaseTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterDatabaseTablesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterDatabaseTablesAsync(const DescribeClusterDatabaseTablesRequest& request, const DescribeClusterDatabaseTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterDatabaseTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeClusterDatabaseTablesOutcomeCallable CynosdbClient::DescribeClusterDatabaseTablesCallable(const DescribeClusterDatabaseTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterDatabaseTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterDatabaseTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeClusterDatabasesOutcome CynosdbClient::DescribeClusterDatabases(const DescribeClusterDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterDatabasesResponse rsp = DescribeClusterDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterDatabasesOutcome(rsp);
        else
            return DescribeClusterDatabasesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterDatabasesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterDatabasesAsync(const DescribeClusterDatabasesRequest& request, const DescribeClusterDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterDatabases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeClusterDatabasesOutcomeCallable CynosdbClient::DescribeClusterDatabasesCallable(const DescribeClusterDatabasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterDatabasesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterDatabases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeClusterDetailOutcome CynosdbClient::DescribeClusterDetail(const DescribeClusterDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterDetailResponse rsp = DescribeClusterDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterDetailOutcome(rsp);
        else
            return DescribeClusterDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterDetailOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterDetailAsync(const DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeClusterDetailOutcomeCallable CynosdbClient::DescribeClusterDetailCallable(const DescribeClusterDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeClusterDetailDatabasesOutcome CynosdbClient::DescribeClusterDetailDatabases(const DescribeClusterDetailDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterDetailDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterDetailDatabasesResponse rsp = DescribeClusterDetailDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterDetailDatabasesOutcome(rsp);
        else
            return DescribeClusterDetailDatabasesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterDetailDatabasesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterDetailDatabasesAsync(const DescribeClusterDetailDatabasesRequest& request, const DescribeClusterDetailDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterDetailDatabases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeClusterDetailDatabasesOutcomeCallable CynosdbClient::DescribeClusterDetailDatabasesCallable(const DescribeClusterDetailDatabasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterDetailDatabasesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterDetailDatabases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeClusterInstanceGroupsOutcome CynosdbClient::DescribeClusterInstanceGroups(const DescribeClusterInstanceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterInstanceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterInstanceGroupsResponse rsp = DescribeClusterInstanceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterInstanceGroupsOutcome(rsp);
        else
            return DescribeClusterInstanceGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterInstanceGroupsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterInstanceGroupsAsync(const DescribeClusterInstanceGroupsRequest& request, const DescribeClusterInstanceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterInstanceGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeClusterInstanceGroupsOutcomeCallable CynosdbClient::DescribeClusterInstanceGroupsCallable(const DescribeClusterInstanceGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterInstanceGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterInstanceGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeClusterInstanceGrpsOutcome CynosdbClient::DescribeClusterInstanceGrps(const DescribeClusterInstanceGrpsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterInstanceGrps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterInstanceGrpsResponse rsp = DescribeClusterInstanceGrpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterInstanceGrpsOutcome(rsp);
        else
            return DescribeClusterInstanceGrpsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterInstanceGrpsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterInstanceGrpsAsync(const DescribeClusterInstanceGrpsRequest& request, const DescribeClusterInstanceGrpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterInstanceGrps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeClusterInstanceGrpsOutcomeCallable CynosdbClient::DescribeClusterInstanceGrpsCallable(const DescribeClusterInstanceGrpsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterInstanceGrpsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterInstanceGrps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeClusterParamLogsOutcome CynosdbClient::DescribeClusterParamLogs(const DescribeClusterParamLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterParamLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterParamLogsResponse rsp = DescribeClusterParamLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterParamLogsOutcome(rsp);
        else
            return DescribeClusterParamLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterParamLogsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterParamLogsAsync(const DescribeClusterParamLogsRequest& request, const DescribeClusterParamLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterParamLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeClusterParamLogsOutcomeCallable CynosdbClient::DescribeClusterParamLogsCallable(const DescribeClusterParamLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterParamLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterParamLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeClusterParamsOutcome CynosdbClient::DescribeClusterParams(const DescribeClusterParamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterParamsResponse rsp = DescribeClusterParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterParamsOutcome(rsp);
        else
            return DescribeClusterParamsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterParamsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterParamsAsync(const DescribeClusterParamsRequest& request, const DescribeClusterParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterParams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeClusterParamsOutcomeCallable CynosdbClient::DescribeClusterParamsCallable(const DescribeClusterParamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterParamsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterParams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeClusterPasswordComplexityOutcome CynosdbClient::DescribeClusterPasswordComplexity(const DescribeClusterPasswordComplexityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterPasswordComplexity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterPasswordComplexityResponse rsp = DescribeClusterPasswordComplexityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterPasswordComplexityOutcome(rsp);
        else
            return DescribeClusterPasswordComplexityOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterPasswordComplexityOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterPasswordComplexityAsync(const DescribeClusterPasswordComplexityRequest& request, const DescribeClusterPasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterPasswordComplexity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeClusterPasswordComplexityOutcomeCallable CynosdbClient::DescribeClusterPasswordComplexityCallable(const DescribeClusterPasswordComplexityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterPasswordComplexityOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterPasswordComplexity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeClusterReadOnlyOutcome CynosdbClient::DescribeClusterReadOnly(const DescribeClusterReadOnlyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterReadOnly");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterReadOnlyResponse rsp = DescribeClusterReadOnlyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterReadOnlyOutcome(rsp);
        else
            return DescribeClusterReadOnlyOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterReadOnlyOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterReadOnlyAsync(const DescribeClusterReadOnlyRequest& request, const DescribeClusterReadOnlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterReadOnly(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeClusterReadOnlyOutcomeCallable CynosdbClient::DescribeClusterReadOnlyCallable(const DescribeClusterReadOnlyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterReadOnlyOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterReadOnly(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeClusterTransparentEncryptInfoOutcome CynosdbClient::DescribeClusterTransparentEncryptInfo(const DescribeClusterTransparentEncryptInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterTransparentEncryptInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterTransparentEncryptInfoResponse rsp = DescribeClusterTransparentEncryptInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterTransparentEncryptInfoOutcome(rsp);
        else
            return DescribeClusterTransparentEncryptInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterTransparentEncryptInfoOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterTransparentEncryptInfoAsync(const DescribeClusterTransparentEncryptInfoRequest& request, const DescribeClusterTransparentEncryptInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterTransparentEncryptInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeClusterTransparentEncryptInfoOutcomeCallable CynosdbClient::DescribeClusterTransparentEncryptInfoCallable(const DescribeClusterTransparentEncryptInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterTransparentEncryptInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterTransparentEncryptInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeClustersOutcome CynosdbClient::DescribeClusters(const DescribeClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClustersResponse rsp = DescribeClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClustersOutcome(rsp);
        else
            return DescribeClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeClustersOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeClustersOutcomeCallable CynosdbClient::DescribeClustersCallable(const DescribeClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeDBSecurityGroupsOutcome CynosdbClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSecurityGroupsResponse rsp = DescribeDBSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSecurityGroupsOutcome(rsp);
        else
            return DescribeDBSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSecurityGroupsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeDBSecurityGroupsOutcomeCallable CynosdbClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeFlowOutcome CynosdbClient::DescribeFlow(const DescribeFlowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowResponse rsp = DescribeFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowOutcome(rsp);
        else
            return DescribeFlowOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeFlowAsync(const DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeFlowOutcomeCallable CynosdbClient::DescribeFlowCallable(const DescribeFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeInstanceCLSLogDeliveryOutcome CynosdbClient::DescribeInstanceCLSLogDelivery(const DescribeInstanceCLSLogDeliveryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceCLSLogDelivery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceCLSLogDeliveryResponse rsp = DescribeInstanceCLSLogDeliveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceCLSLogDeliveryOutcome(rsp);
        else
            return DescribeInstanceCLSLogDeliveryOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceCLSLogDeliveryOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeInstanceCLSLogDeliveryAsync(const DescribeInstanceCLSLogDeliveryRequest& request, const DescribeInstanceCLSLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceCLSLogDelivery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeInstanceCLSLogDeliveryOutcomeCallable CynosdbClient::DescribeInstanceCLSLogDeliveryCallable(const DescribeInstanceCLSLogDeliveryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceCLSLogDeliveryOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceCLSLogDelivery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeInstanceDetailOutcome CynosdbClient::DescribeInstanceDetail(const DescribeInstanceDetailRequest &request)
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

void CynosdbClient::DescribeInstanceDetailAsync(const DescribeInstanceDetailRequest& request, const DescribeInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeInstanceDetailOutcomeCallable CynosdbClient::DescribeInstanceDetailCallable(const DescribeInstanceDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeInstanceErrorLogsOutcome CynosdbClient::DescribeInstanceErrorLogs(const DescribeInstanceErrorLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceErrorLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceErrorLogsResponse rsp = DescribeInstanceErrorLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceErrorLogsOutcome(rsp);
        else
            return DescribeInstanceErrorLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceErrorLogsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeInstanceErrorLogsAsync(const DescribeInstanceErrorLogsRequest& request, const DescribeInstanceErrorLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceErrorLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeInstanceErrorLogsOutcomeCallable CynosdbClient::DescribeInstanceErrorLogsCallable(const DescribeInstanceErrorLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceErrorLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceErrorLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeInstanceParamsOutcome CynosdbClient::DescribeInstanceParams(const DescribeInstanceParamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceParamsResponse rsp = DescribeInstanceParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceParamsOutcome(rsp);
        else
            return DescribeInstanceParamsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceParamsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeInstanceParamsAsync(const DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceParams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeInstanceParamsOutcomeCallable CynosdbClient::DescribeInstanceParamsCallable(const DescribeInstanceParamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceParamsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceParams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeInstanceSlowQueriesOutcome CynosdbClient::DescribeInstanceSlowQueries(const DescribeInstanceSlowQueriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceSlowQueries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceSlowQueriesResponse rsp = DescribeInstanceSlowQueriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceSlowQueriesOutcome(rsp);
        else
            return DescribeInstanceSlowQueriesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceSlowQueriesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeInstanceSlowQueriesAsync(const DescribeInstanceSlowQueriesRequest& request, const DescribeInstanceSlowQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceSlowQueries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeInstanceSlowQueriesOutcomeCallable CynosdbClient::DescribeInstanceSlowQueriesCallable(const DescribeInstanceSlowQueriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceSlowQueriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceSlowQueries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeInstanceSpecsOutcome CynosdbClient::DescribeInstanceSpecs(const DescribeInstanceSpecsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceSpecs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceSpecsResponse rsp = DescribeInstanceSpecsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceSpecsOutcome(rsp);
        else
            return DescribeInstanceSpecsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceSpecsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeInstanceSpecsAsync(const DescribeInstanceSpecsRequest& request, const DescribeInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceSpecs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeInstanceSpecsOutcomeCallable CynosdbClient::DescribeInstanceSpecsCallable(const DescribeInstanceSpecsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceSpecsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceSpecs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeInstancesOutcome CynosdbClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void CynosdbClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeInstancesOutcomeCallable CynosdbClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
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

CynosdbClient::DescribeInstancesWithinSameClusterOutcome CynosdbClient::DescribeInstancesWithinSameCluster(const DescribeInstancesWithinSameClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesWithinSameCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesWithinSameClusterResponse rsp = DescribeInstancesWithinSameClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesWithinSameClusterOutcome(rsp);
        else
            return DescribeInstancesWithinSameClusterOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesWithinSameClusterOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeInstancesWithinSameClusterAsync(const DescribeInstancesWithinSameClusterRequest& request, const DescribeInstancesWithinSameClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesWithinSameCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeInstancesWithinSameClusterOutcomeCallable CynosdbClient::DescribeInstancesWithinSameClusterCallable(const DescribeInstancesWithinSameClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesWithinSameClusterOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesWithinSameCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeIsolatedInstancesOutcome CynosdbClient::DescribeIsolatedInstances(const DescribeIsolatedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIsolatedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIsolatedInstancesResponse rsp = DescribeIsolatedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIsolatedInstancesOutcome(rsp);
        else
            return DescribeIsolatedInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeIsolatedInstancesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeIsolatedInstancesAsync(const DescribeIsolatedInstancesRequest& request, const DescribeIsolatedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIsolatedInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeIsolatedInstancesOutcomeCallable CynosdbClient::DescribeIsolatedInstancesCallable(const DescribeIsolatedInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIsolatedInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeIsolatedInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeMaintainPeriodOutcome CynosdbClient::DescribeMaintainPeriod(const DescribeMaintainPeriodRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaintainPeriod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaintainPeriodResponse rsp = DescribeMaintainPeriodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaintainPeriodOutcome(rsp);
        else
            return DescribeMaintainPeriodOutcome(o.GetError());
    }
    else
    {
        return DescribeMaintainPeriodOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeMaintainPeriodAsync(const DescribeMaintainPeriodRequest& request, const DescribeMaintainPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMaintainPeriod(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeMaintainPeriodOutcomeCallable CynosdbClient::DescribeMaintainPeriodCallable(const DescribeMaintainPeriodRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMaintainPeriodOutcome()>>(
        [this, request]()
        {
            return this->DescribeMaintainPeriod(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeParamTemplateDetailOutcome CynosdbClient::DescribeParamTemplateDetail(const DescribeParamTemplateDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParamTemplateDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParamTemplateDetailResponse rsp = DescribeParamTemplateDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParamTemplateDetailOutcome(rsp);
        else
            return DescribeParamTemplateDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeParamTemplateDetailOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeParamTemplateDetailAsync(const DescribeParamTemplateDetailRequest& request, const DescribeParamTemplateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeParamTemplateDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeParamTemplateDetailOutcomeCallable CynosdbClient::DescribeParamTemplateDetailCallable(const DescribeParamTemplateDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeParamTemplateDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeParamTemplateDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeParamTemplatesOutcome CynosdbClient::DescribeParamTemplates(const DescribeParamTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParamTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParamTemplatesResponse rsp = DescribeParamTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParamTemplatesOutcome(rsp);
        else
            return DescribeParamTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeParamTemplatesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeParamTemplatesAsync(const DescribeParamTemplatesRequest& request, const DescribeParamTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeParamTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeParamTemplatesOutcomeCallable CynosdbClient::DescribeParamTemplatesCallable(const DescribeParamTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeParamTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeParamTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeProjectSecurityGroupsOutcome CynosdbClient::DescribeProjectSecurityGroups(const DescribeProjectSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectSecurityGroupsResponse rsp = DescribeProjectSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectSecurityGroupsOutcome(rsp);
        else
            return DescribeProjectSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectSecurityGroupsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeProjectSecurityGroupsAsync(const DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeProjectSecurityGroupsOutcomeCallable CynosdbClient::DescribeProjectSecurityGroupsCallable(const DescribeProjectSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjectSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeProxiesOutcome CynosdbClient::DescribeProxies(const DescribeProxiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxiesResponse rsp = DescribeProxiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxiesOutcome(rsp);
        else
            return DescribeProxiesOutcome(o.GetError());
    }
    else
    {
        return DescribeProxiesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeProxiesAsync(const DescribeProxiesRequest& request, const DescribeProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeProxiesOutcomeCallable CynosdbClient::DescribeProxiesCallable(const DescribeProxiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeProxyNodesOutcome CynosdbClient::DescribeProxyNodes(const DescribeProxyNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxyNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxyNodesResponse rsp = DescribeProxyNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxyNodesOutcome(rsp);
        else
            return DescribeProxyNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeProxyNodesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeProxyNodesAsync(const DescribeProxyNodesRequest& request, const DescribeProxyNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxyNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeProxyNodesOutcomeCallable CynosdbClient::DescribeProxyNodesCallable(const DescribeProxyNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxyNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxyNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeProxySpecsOutcome CynosdbClient::DescribeProxySpecs(const DescribeProxySpecsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxySpecs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxySpecsResponse rsp = DescribeProxySpecsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxySpecsOutcome(rsp);
        else
            return DescribeProxySpecsOutcome(o.GetError());
    }
    else
    {
        return DescribeProxySpecsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeProxySpecsAsync(const DescribeProxySpecsRequest& request, const DescribeProxySpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxySpecs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeProxySpecsOutcomeCallable CynosdbClient::DescribeProxySpecsCallable(const DescribeProxySpecsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxySpecsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxySpecs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeResourcePackageDetailOutcome CynosdbClient::DescribeResourcePackageDetail(const DescribeResourcePackageDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcePackageDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcePackageDetailResponse rsp = DescribeResourcePackageDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcePackageDetailOutcome(rsp);
        else
            return DescribeResourcePackageDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcePackageDetailOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeResourcePackageDetailAsync(const DescribeResourcePackageDetailRequest& request, const DescribeResourcePackageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourcePackageDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeResourcePackageDetailOutcomeCallable CynosdbClient::DescribeResourcePackageDetailCallable(const DescribeResourcePackageDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourcePackageDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourcePackageDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeResourcePackageListOutcome CynosdbClient::DescribeResourcePackageList(const DescribeResourcePackageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcePackageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcePackageListResponse rsp = DescribeResourcePackageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcePackageListOutcome(rsp);
        else
            return DescribeResourcePackageListOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcePackageListOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeResourcePackageListAsync(const DescribeResourcePackageListRequest& request, const DescribeResourcePackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourcePackageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeResourcePackageListOutcomeCallable CynosdbClient::DescribeResourcePackageListCallable(const DescribeResourcePackageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourcePackageListOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourcePackageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeResourcePackageSaleSpecOutcome CynosdbClient::DescribeResourcePackageSaleSpec(const DescribeResourcePackageSaleSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcePackageSaleSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcePackageSaleSpecResponse rsp = DescribeResourcePackageSaleSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcePackageSaleSpecOutcome(rsp);
        else
            return DescribeResourcePackageSaleSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcePackageSaleSpecOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeResourcePackageSaleSpecAsync(const DescribeResourcePackageSaleSpecRequest& request, const DescribeResourcePackageSaleSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourcePackageSaleSpec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeResourcePackageSaleSpecOutcomeCallable CynosdbClient::DescribeResourcePackageSaleSpecCallable(const DescribeResourcePackageSaleSpecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourcePackageSaleSpecOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourcePackageSaleSpec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeResourcesByDealNameOutcome CynosdbClient::DescribeResourcesByDealName(const DescribeResourcesByDealNameRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcesByDealName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcesByDealNameResponse rsp = DescribeResourcesByDealNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcesByDealNameOutcome(rsp);
        else
            return DescribeResourcesByDealNameOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcesByDealNameOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeResourcesByDealNameAsync(const DescribeResourcesByDealNameRequest& request, const DescribeResourcesByDealNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourcesByDealName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeResourcesByDealNameOutcomeCallable CynosdbClient::DescribeResourcesByDealNameCallable(const DescribeResourcesByDealNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourcesByDealNameOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourcesByDealName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeRollbackTimeRangeOutcome CynosdbClient::DescribeRollbackTimeRange(const DescribeRollbackTimeRangeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRollbackTimeRange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRollbackTimeRangeResponse rsp = DescribeRollbackTimeRangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRollbackTimeRangeOutcome(rsp);
        else
            return DescribeRollbackTimeRangeOutcome(o.GetError());
    }
    else
    {
        return DescribeRollbackTimeRangeOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeRollbackTimeRangeAsync(const DescribeRollbackTimeRangeRequest& request, const DescribeRollbackTimeRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRollbackTimeRange(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeRollbackTimeRangeOutcomeCallable CynosdbClient::DescribeRollbackTimeRangeCallable(const DescribeRollbackTimeRangeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRollbackTimeRangeOutcome()>>(
        [this, request]()
        {
            return this->DescribeRollbackTimeRange(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeSSLStatusOutcome CynosdbClient::DescribeSSLStatus(const DescribeSSLStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSSLStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSSLStatusResponse rsp = DescribeSSLStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSSLStatusOutcome(rsp);
        else
            return DescribeSSLStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeSSLStatusOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeSSLStatusAsync(const DescribeSSLStatusRequest& request, const DescribeSSLStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSSLStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeSSLStatusOutcomeCallable CynosdbClient::DescribeSSLStatusCallable(const DescribeSSLStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSSLStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeSSLStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeServerlessInstanceSpecsOutcome CynosdbClient::DescribeServerlessInstanceSpecs(const DescribeServerlessInstanceSpecsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerlessInstanceSpecs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerlessInstanceSpecsResponse rsp = DescribeServerlessInstanceSpecsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerlessInstanceSpecsOutcome(rsp);
        else
            return DescribeServerlessInstanceSpecsOutcome(o.GetError());
    }
    else
    {
        return DescribeServerlessInstanceSpecsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeServerlessInstanceSpecsAsync(const DescribeServerlessInstanceSpecsRequest& request, const DescribeServerlessInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServerlessInstanceSpecs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeServerlessInstanceSpecsOutcomeCallable CynosdbClient::DescribeServerlessInstanceSpecsCallable(const DescribeServerlessInstanceSpecsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServerlessInstanceSpecsOutcome()>>(
        [this, request]()
        {
            return this->DescribeServerlessInstanceSpecs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeServerlessStrategyOutcome CynosdbClient::DescribeServerlessStrategy(const DescribeServerlessStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerlessStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerlessStrategyResponse rsp = DescribeServerlessStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerlessStrategyOutcome(rsp);
        else
            return DescribeServerlessStrategyOutcome(o.GetError());
    }
    else
    {
        return DescribeServerlessStrategyOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeServerlessStrategyAsync(const DescribeServerlessStrategyRequest& request, const DescribeServerlessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServerlessStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeServerlessStrategyOutcomeCallable CynosdbClient::DescribeServerlessStrategyCallable(const DescribeServerlessStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServerlessStrategyOutcome()>>(
        [this, request]()
        {
            return this->DescribeServerlessStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeSlaveZonesOutcome CynosdbClient::DescribeSlaveZones(const DescribeSlaveZonesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlaveZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlaveZonesResponse rsp = DescribeSlaveZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlaveZonesOutcome(rsp);
        else
            return DescribeSlaveZonesOutcome(o.GetError());
    }
    else
    {
        return DescribeSlaveZonesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeSlaveZonesAsync(const DescribeSlaveZonesRequest& request, const DescribeSlaveZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlaveZones(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeSlaveZonesOutcomeCallable CynosdbClient::DescribeSlaveZonesCallable(const DescribeSlaveZonesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlaveZonesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlaveZones(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeSupportProxyVersionOutcome CynosdbClient::DescribeSupportProxyVersion(const DescribeSupportProxyVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSupportProxyVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSupportProxyVersionResponse rsp = DescribeSupportProxyVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSupportProxyVersionOutcome(rsp);
        else
            return DescribeSupportProxyVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeSupportProxyVersionOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeSupportProxyVersionAsync(const DescribeSupportProxyVersionRequest& request, const DescribeSupportProxyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSupportProxyVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeSupportProxyVersionOutcomeCallable CynosdbClient::DescribeSupportProxyVersionCallable(const DescribeSupportProxyVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSupportProxyVersionOutcome()>>(
        [this, request]()
        {
            return this->DescribeSupportProxyVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeTasksOutcome CynosdbClient::DescribeTasks(const DescribeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksResponse rsp = DescribeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOutcome(rsp);
        else
            return DescribeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeTasksOutcomeCallable CynosdbClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeZonesOutcome CynosdbClient::DescribeZones(const DescribeZonesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZonesResponse rsp = DescribeZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZonesOutcome(rsp);
        else
            return DescribeZonesOutcome(o.GetError());
    }
    else
    {
        return DescribeZonesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZones(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeZonesOutcomeCallable CynosdbClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
        [this, request]()
        {
            return this->DescribeZones(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DisassociateSecurityGroupsOutcome CynosdbClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateSecurityGroupsResponse rsp = DisassociateSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateSecurityGroupsOutcome(rsp);
        else
            return DisassociateSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DisassociateSecurityGroupsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DisassociateSecurityGroupsOutcomeCallable CynosdbClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DisassociateSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ExportInstanceErrorLogsOutcome CynosdbClient::ExportInstanceErrorLogs(const ExportInstanceErrorLogsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportInstanceErrorLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportInstanceErrorLogsResponse rsp = ExportInstanceErrorLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportInstanceErrorLogsOutcome(rsp);
        else
            return ExportInstanceErrorLogsOutcome(o.GetError());
    }
    else
    {
        return ExportInstanceErrorLogsOutcome(outcome.GetError());
    }
}

void CynosdbClient::ExportInstanceErrorLogsAsync(const ExportInstanceErrorLogsRequest& request, const ExportInstanceErrorLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportInstanceErrorLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ExportInstanceErrorLogsOutcomeCallable CynosdbClient::ExportInstanceErrorLogsCallable(const ExportInstanceErrorLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportInstanceErrorLogsOutcome()>>(
        [this, request]()
        {
            return this->ExportInstanceErrorLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ExportInstanceSlowQueriesOutcome CynosdbClient::ExportInstanceSlowQueries(const ExportInstanceSlowQueriesRequest &request)
{
    auto outcome = MakeRequest(request, "ExportInstanceSlowQueries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportInstanceSlowQueriesResponse rsp = ExportInstanceSlowQueriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportInstanceSlowQueriesOutcome(rsp);
        else
            return ExportInstanceSlowQueriesOutcome(o.GetError());
    }
    else
    {
        return ExportInstanceSlowQueriesOutcome(outcome.GetError());
    }
}

void CynosdbClient::ExportInstanceSlowQueriesAsync(const ExportInstanceSlowQueriesRequest& request, const ExportInstanceSlowQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportInstanceSlowQueries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ExportInstanceSlowQueriesOutcomeCallable CynosdbClient::ExportInstanceSlowQueriesCallable(const ExportInstanceSlowQueriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportInstanceSlowQueriesOutcome()>>(
        [this, request]()
        {
            return this->ExportInstanceSlowQueries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ExportResourcePackageDeductDetailsOutcome CynosdbClient::ExportResourcePackageDeductDetails(const ExportResourcePackageDeductDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportResourcePackageDeductDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportResourcePackageDeductDetailsResponse rsp = ExportResourcePackageDeductDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportResourcePackageDeductDetailsOutcome(rsp);
        else
            return ExportResourcePackageDeductDetailsOutcome(o.GetError());
    }
    else
    {
        return ExportResourcePackageDeductDetailsOutcome(outcome.GetError());
    }
}

void CynosdbClient::ExportResourcePackageDeductDetailsAsync(const ExportResourcePackageDeductDetailsRequest& request, const ExportResourcePackageDeductDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportResourcePackageDeductDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ExportResourcePackageDeductDetailsOutcomeCallable CynosdbClient::ExportResourcePackageDeductDetailsCallable(const ExportResourcePackageDeductDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportResourcePackageDeductDetailsOutcome()>>(
        [this, request]()
        {
            return this->ExportResourcePackageDeductDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::GrantAccountPrivilegesOutcome CynosdbClient::GrantAccountPrivileges(const GrantAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "GrantAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GrantAccountPrivilegesResponse rsp = GrantAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GrantAccountPrivilegesOutcome(rsp);
        else
            return GrantAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return GrantAccountPrivilegesOutcome(outcome.GetError());
    }
}

void CynosdbClient::GrantAccountPrivilegesAsync(const GrantAccountPrivilegesRequest& request, const GrantAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GrantAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::GrantAccountPrivilegesOutcomeCallable CynosdbClient::GrantAccountPrivilegesCallable(const GrantAccountPrivilegesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GrantAccountPrivilegesOutcome()>>(
        [this, request]()
        {
            return this->GrantAccountPrivileges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::InquirePriceCreateOutcome CynosdbClient::InquirePriceCreate(const InquirePriceCreateRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceCreate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceCreateResponse rsp = InquirePriceCreateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceCreateOutcome(rsp);
        else
            return InquirePriceCreateOutcome(o.GetError());
    }
    else
    {
        return InquirePriceCreateOutcome(outcome.GetError());
    }
}

void CynosdbClient::InquirePriceCreateAsync(const InquirePriceCreateRequest& request, const InquirePriceCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceCreate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::InquirePriceCreateOutcomeCallable CynosdbClient::InquirePriceCreateCallable(const InquirePriceCreateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceCreateOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceCreate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::InquirePriceModifyOutcome CynosdbClient::InquirePriceModify(const InquirePriceModifyRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceModify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceModifyResponse rsp = InquirePriceModifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceModifyOutcome(rsp);
        else
            return InquirePriceModifyOutcome(o.GetError());
    }
    else
    {
        return InquirePriceModifyOutcome(outcome.GetError());
    }
}

void CynosdbClient::InquirePriceModifyAsync(const InquirePriceModifyRequest& request, const InquirePriceModifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceModify(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::InquirePriceModifyOutcomeCallable CynosdbClient::InquirePriceModifyCallable(const InquirePriceModifyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceModifyOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceModify(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::InquirePriceRenewOutcome CynosdbClient::InquirePriceRenew(const InquirePriceRenewRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceRenew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceRenewResponse rsp = InquirePriceRenewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceRenewOutcome(rsp);
        else
            return InquirePriceRenewOutcome(o.GetError());
    }
    else
    {
        return InquirePriceRenewOutcome(outcome.GetError());
    }
}

void CynosdbClient::InquirePriceRenewAsync(const InquirePriceRenewRequest& request, const InquirePriceRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceRenew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::InquirePriceRenewOutcomeCallable CynosdbClient::InquirePriceRenewCallable(const InquirePriceRenewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceRenewOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceRenew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::IsolateClusterOutcome CynosdbClient::IsolateCluster(const IsolateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateClusterResponse rsp = IsolateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateClusterOutcome(rsp);
        else
            return IsolateClusterOutcome(o.GetError());
    }
    else
    {
        return IsolateClusterOutcome(outcome.GetError());
    }
}

void CynosdbClient::IsolateClusterAsync(const IsolateClusterRequest& request, const IsolateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::IsolateClusterOutcomeCallable CynosdbClient::IsolateClusterCallable(const IsolateClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateClusterOutcome()>>(
        [this, request]()
        {
            return this->IsolateCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::IsolateInstanceOutcome CynosdbClient::IsolateInstance(const IsolateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateInstanceResponse rsp = IsolateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateInstanceOutcome(rsp);
        else
            return IsolateInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateInstanceOutcome(outcome.GetError());
    }
}

void CynosdbClient::IsolateInstanceAsync(const IsolateInstanceRequest& request, const IsolateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::IsolateInstanceOutcomeCallable CynosdbClient::IsolateInstanceCallable(const IsolateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateInstanceOutcome()>>(
        [this, request]()
        {
            return this->IsolateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyAccountDescriptionOutcome CynosdbClient::ModifyAccountDescription(const ModifyAccountDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountDescriptionResponse rsp = ModifyAccountDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountDescriptionOutcome(rsp);
        else
            return ModifyAccountDescriptionOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountDescriptionOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountDescription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyAccountDescriptionOutcomeCallable CynosdbClient::ModifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccountDescription(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyAccountHostOutcome CynosdbClient::ModifyAccountHost(const ModifyAccountHostRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountHostResponse rsp = ModifyAccountHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountHostOutcome(rsp);
        else
            return ModifyAccountHostOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountHostOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyAccountHostAsync(const ModifyAccountHostRequest& request, const ModifyAccountHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyAccountHostOutcomeCallable CynosdbClient::ModifyAccountHostCallable(const ModifyAccountHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccountHostOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccountHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyAccountParamsOutcome CynosdbClient::ModifyAccountParams(const ModifyAccountParamsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountParamsResponse rsp = ModifyAccountParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountParamsOutcome(rsp);
        else
            return ModifyAccountParamsOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountParamsOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyAccountParamsAsync(const ModifyAccountParamsRequest& request, const ModifyAccountParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountParams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyAccountParamsOutcomeCallable CynosdbClient::ModifyAccountParamsCallable(const ModifyAccountParamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccountParamsOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccountParams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyAccountPrivilegesOutcome CynosdbClient::ModifyAccountPrivileges(const ModifyAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountPrivilegesResponse rsp = ModifyAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountPrivilegesOutcome(rsp);
        else
            return ModifyAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountPrivilegesOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyAccountPrivilegesAsync(const ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyAccountPrivilegesOutcomeCallable CynosdbClient::ModifyAccountPrivilegesCallable(const ModifyAccountPrivilegesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccountPrivilegesOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccountPrivileges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyAuditRuleTemplatesOutcome CynosdbClient::ModifyAuditRuleTemplates(const ModifyAuditRuleTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAuditRuleTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAuditRuleTemplatesResponse rsp = ModifyAuditRuleTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAuditRuleTemplatesOutcome(rsp);
        else
            return ModifyAuditRuleTemplatesOutcome(o.GetError());
    }
    else
    {
        return ModifyAuditRuleTemplatesOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyAuditRuleTemplatesAsync(const ModifyAuditRuleTemplatesRequest& request, const ModifyAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAuditRuleTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyAuditRuleTemplatesOutcomeCallable CynosdbClient::ModifyAuditRuleTemplatesCallable(const ModifyAuditRuleTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAuditRuleTemplatesOutcome()>>(
        [this, request]()
        {
            return this->ModifyAuditRuleTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyAuditServiceOutcome CynosdbClient::ModifyAuditService(const ModifyAuditServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAuditService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAuditServiceResponse rsp = ModifyAuditServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAuditServiceOutcome(rsp);
        else
            return ModifyAuditServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyAuditServiceOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyAuditServiceAsync(const ModifyAuditServiceRequest& request, const ModifyAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAuditService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyAuditServiceOutcomeCallable CynosdbClient::ModifyAuditServiceCallable(const ModifyAuditServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAuditServiceOutcome()>>(
        [this, request]()
        {
            return this->ModifyAuditService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyBackupConfigOutcome CynosdbClient::ModifyBackupConfig(const ModifyBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupConfigResponse rsp = ModifyBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupConfigOutcome(rsp);
        else
            return ModifyBackupConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupConfigOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyBackupConfigAsync(const ModifyBackupConfigRequest& request, const ModifyBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBackupConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyBackupConfigOutcomeCallable CynosdbClient::ModifyBackupConfigCallable(const ModifyBackupConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBackupConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyBackupConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyBackupDownloadRestrictionOutcome CynosdbClient::ModifyBackupDownloadRestriction(const ModifyBackupDownloadRestrictionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupDownloadRestriction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupDownloadRestrictionResponse rsp = ModifyBackupDownloadRestrictionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupDownloadRestrictionOutcome(rsp);
        else
            return ModifyBackupDownloadRestrictionOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupDownloadRestrictionOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyBackupDownloadRestrictionAsync(const ModifyBackupDownloadRestrictionRequest& request, const ModifyBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBackupDownloadRestriction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyBackupDownloadRestrictionOutcomeCallable CynosdbClient::ModifyBackupDownloadRestrictionCallable(const ModifyBackupDownloadRestrictionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBackupDownloadRestrictionOutcome()>>(
        [this, request]()
        {
            return this->ModifyBackupDownloadRestriction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyBackupDownloadUserRestrictionOutcome CynosdbClient::ModifyBackupDownloadUserRestriction(const ModifyBackupDownloadUserRestrictionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupDownloadUserRestriction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupDownloadUserRestrictionResponse rsp = ModifyBackupDownloadUserRestrictionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupDownloadUserRestrictionOutcome(rsp);
        else
            return ModifyBackupDownloadUserRestrictionOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupDownloadUserRestrictionOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyBackupDownloadUserRestrictionAsync(const ModifyBackupDownloadUserRestrictionRequest& request, const ModifyBackupDownloadUserRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBackupDownloadUserRestriction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyBackupDownloadUserRestrictionOutcomeCallable CynosdbClient::ModifyBackupDownloadUserRestrictionCallable(const ModifyBackupDownloadUserRestrictionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBackupDownloadUserRestrictionOutcome()>>(
        [this, request]()
        {
            return this->ModifyBackupDownloadUserRestriction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyBackupNameOutcome CynosdbClient::ModifyBackupName(const ModifyBackupNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupNameResponse rsp = ModifyBackupNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupNameOutcome(rsp);
        else
            return ModifyBackupNameOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupNameOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyBackupNameAsync(const ModifyBackupNameRequest& request, const ModifyBackupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBackupName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyBackupNameOutcomeCallable CynosdbClient::ModifyBackupNameCallable(const ModifyBackupNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBackupNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyBackupName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyBinlogConfigOutcome CynosdbClient::ModifyBinlogConfig(const ModifyBinlogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBinlogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBinlogConfigResponse rsp = ModifyBinlogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBinlogConfigOutcome(rsp);
        else
            return ModifyBinlogConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyBinlogConfigOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyBinlogConfigAsync(const ModifyBinlogConfigRequest& request, const ModifyBinlogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBinlogConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyBinlogConfigOutcomeCallable CynosdbClient::ModifyBinlogConfigCallable(const ModifyBinlogConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBinlogConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyBinlogConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyBinlogSaveDaysOutcome CynosdbClient::ModifyBinlogSaveDays(const ModifyBinlogSaveDaysRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBinlogSaveDays");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBinlogSaveDaysResponse rsp = ModifyBinlogSaveDaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBinlogSaveDaysOutcome(rsp);
        else
            return ModifyBinlogSaveDaysOutcome(o.GetError());
    }
    else
    {
        return ModifyBinlogSaveDaysOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyBinlogSaveDaysAsync(const ModifyBinlogSaveDaysRequest& request, const ModifyBinlogSaveDaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBinlogSaveDays(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyBinlogSaveDaysOutcomeCallable CynosdbClient::ModifyBinlogSaveDaysCallable(const ModifyBinlogSaveDaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBinlogSaveDaysOutcome()>>(
        [this, request]()
        {
            return this->ModifyBinlogSaveDays(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyClusterDatabaseOutcome CynosdbClient::ModifyClusterDatabase(const ModifyClusterDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterDatabaseResponse rsp = ModifyClusterDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterDatabaseOutcome(rsp);
        else
            return ModifyClusterDatabaseOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterDatabaseOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyClusterDatabaseAsync(const ModifyClusterDatabaseRequest& request, const ModifyClusterDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyClusterDatabaseOutcomeCallable CynosdbClient::ModifyClusterDatabaseCallable(const ModifyClusterDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterDatabaseOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyClusterNameOutcome CynosdbClient::ModifyClusterName(const ModifyClusterNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterNameResponse rsp = ModifyClusterNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterNameOutcome(rsp);
        else
            return ModifyClusterNameOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterNameOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyClusterNameAsync(const ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyClusterNameOutcomeCallable CynosdbClient::ModifyClusterNameCallable(const ModifyClusterNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyClusterParamOutcome CynosdbClient::ModifyClusterParam(const ModifyClusterParamRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterParamResponse rsp = ModifyClusterParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterParamOutcome(rsp);
        else
            return ModifyClusterParamOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterParamOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyClusterParamAsync(const ModifyClusterParamRequest& request, const ModifyClusterParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterParam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyClusterParamOutcomeCallable CynosdbClient::ModifyClusterParamCallable(const ModifyClusterParamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterParamOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterParam(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyClusterPasswordComplexityOutcome CynosdbClient::ModifyClusterPasswordComplexity(const ModifyClusterPasswordComplexityRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterPasswordComplexity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterPasswordComplexityResponse rsp = ModifyClusterPasswordComplexityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterPasswordComplexityOutcome(rsp);
        else
            return ModifyClusterPasswordComplexityOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterPasswordComplexityOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyClusterPasswordComplexityAsync(const ModifyClusterPasswordComplexityRequest& request, const ModifyClusterPasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterPasswordComplexity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyClusterPasswordComplexityOutcomeCallable CynosdbClient::ModifyClusterPasswordComplexityCallable(const ModifyClusterPasswordComplexityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterPasswordComplexityOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterPasswordComplexity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyClusterReadOnlyOutcome CynosdbClient::ModifyClusterReadOnly(const ModifyClusterReadOnlyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterReadOnly");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterReadOnlyResponse rsp = ModifyClusterReadOnlyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterReadOnlyOutcome(rsp);
        else
            return ModifyClusterReadOnlyOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterReadOnlyOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyClusterReadOnlyAsync(const ModifyClusterReadOnlyRequest& request, const ModifyClusterReadOnlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterReadOnly(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyClusterReadOnlyOutcomeCallable CynosdbClient::ModifyClusterReadOnlyCallable(const ModifyClusterReadOnlyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterReadOnlyOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterReadOnly(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyClusterSlaveZoneOutcome CynosdbClient::ModifyClusterSlaveZone(const ModifyClusterSlaveZoneRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterSlaveZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterSlaveZoneResponse rsp = ModifyClusterSlaveZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterSlaveZoneOutcome(rsp);
        else
            return ModifyClusterSlaveZoneOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterSlaveZoneOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyClusterSlaveZoneAsync(const ModifyClusterSlaveZoneRequest& request, const ModifyClusterSlaveZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterSlaveZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyClusterSlaveZoneOutcomeCallable CynosdbClient::ModifyClusterSlaveZoneCallable(const ModifyClusterSlaveZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterSlaveZoneOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterSlaveZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyClusterStorageOutcome CynosdbClient::ModifyClusterStorage(const ModifyClusterStorageRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterStorageResponse rsp = ModifyClusterStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterStorageOutcome(rsp);
        else
            return ModifyClusterStorageOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterStorageOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyClusterStorageAsync(const ModifyClusterStorageRequest& request, const ModifyClusterStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterStorage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyClusterStorageOutcomeCallable CynosdbClient::ModifyClusterStorageCallable(const ModifyClusterStorageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterStorageOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterStorage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyDBInstanceSecurityGroupsOutcome CynosdbClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceSecurityGroupsResponse rsp = ModifyDBInstanceSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceSecurityGroupsOutcome(rsp);
        else
            return ModifyDBInstanceSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceSecurityGroupsOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyDBInstanceSecurityGroupsOutcomeCallable CynosdbClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyInstanceNameOutcome CynosdbClient::ModifyInstanceName(const ModifyInstanceNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceNameResponse rsp = ModifyInstanceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceNameOutcome(rsp);
        else
            return ModifyInstanceNameOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceNameOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyInstanceNameAsync(const ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyInstanceNameOutcomeCallable CynosdbClient::ModifyInstanceNameCallable(const ModifyInstanceNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyInstanceParamOutcome CynosdbClient::ModifyInstanceParam(const ModifyInstanceParamRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceParamResponse rsp = ModifyInstanceParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceParamOutcome(rsp);
        else
            return ModifyInstanceParamOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceParamOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyInstanceParamAsync(const ModifyInstanceParamRequest& request, const ModifyInstanceParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceParam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyInstanceParamOutcomeCallable CynosdbClient::ModifyInstanceParamCallable(const ModifyInstanceParamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceParamOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceParam(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyInstanceUpgradeLimitDaysOutcome CynosdbClient::ModifyInstanceUpgradeLimitDays(const ModifyInstanceUpgradeLimitDaysRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceUpgradeLimitDays");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceUpgradeLimitDaysResponse rsp = ModifyInstanceUpgradeLimitDaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceUpgradeLimitDaysOutcome(rsp);
        else
            return ModifyInstanceUpgradeLimitDaysOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceUpgradeLimitDaysOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyInstanceUpgradeLimitDaysAsync(const ModifyInstanceUpgradeLimitDaysRequest& request, const ModifyInstanceUpgradeLimitDaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceUpgradeLimitDays(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyInstanceUpgradeLimitDaysOutcomeCallable CynosdbClient::ModifyInstanceUpgradeLimitDaysCallable(const ModifyInstanceUpgradeLimitDaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceUpgradeLimitDaysOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceUpgradeLimitDays(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyMaintainPeriodConfigOutcome CynosdbClient::ModifyMaintainPeriodConfig(const ModifyMaintainPeriodConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMaintainPeriodConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMaintainPeriodConfigResponse rsp = ModifyMaintainPeriodConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMaintainPeriodConfigOutcome(rsp);
        else
            return ModifyMaintainPeriodConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyMaintainPeriodConfigOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyMaintainPeriodConfigAsync(const ModifyMaintainPeriodConfigRequest& request, const ModifyMaintainPeriodConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMaintainPeriodConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyMaintainPeriodConfigOutcomeCallable CynosdbClient::ModifyMaintainPeriodConfigCallable(const ModifyMaintainPeriodConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMaintainPeriodConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyMaintainPeriodConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyParamTemplateOutcome CynosdbClient::ModifyParamTemplate(const ModifyParamTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyParamTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyParamTemplateResponse rsp = ModifyParamTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyParamTemplateOutcome(rsp);
        else
            return ModifyParamTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyParamTemplateOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyParamTemplateAsync(const ModifyParamTemplateRequest& request, const ModifyParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyParamTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyParamTemplateOutcomeCallable CynosdbClient::ModifyParamTemplateCallable(const ModifyParamTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyParamTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyParamTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyProxyDescOutcome CynosdbClient::ModifyProxyDesc(const ModifyProxyDescRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProxyDesc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProxyDescResponse rsp = ModifyProxyDescResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProxyDescOutcome(rsp);
        else
            return ModifyProxyDescOutcome(o.GetError());
    }
    else
    {
        return ModifyProxyDescOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyProxyDescAsync(const ModifyProxyDescRequest& request, const ModifyProxyDescAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProxyDesc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyProxyDescOutcomeCallable CynosdbClient::ModifyProxyDescCallable(const ModifyProxyDescRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProxyDescOutcome()>>(
        [this, request]()
        {
            return this->ModifyProxyDesc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyProxyRwSplitOutcome CynosdbClient::ModifyProxyRwSplit(const ModifyProxyRwSplitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProxyRwSplit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProxyRwSplitResponse rsp = ModifyProxyRwSplitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProxyRwSplitOutcome(rsp);
        else
            return ModifyProxyRwSplitOutcome(o.GetError());
    }
    else
    {
        return ModifyProxyRwSplitOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyProxyRwSplitAsync(const ModifyProxyRwSplitRequest& request, const ModifyProxyRwSplitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProxyRwSplit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyProxyRwSplitOutcomeCallable CynosdbClient::ModifyProxyRwSplitCallable(const ModifyProxyRwSplitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProxyRwSplitOutcome()>>(
        [this, request]()
        {
            return this->ModifyProxyRwSplit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyResourcePackageClustersOutcome CynosdbClient::ModifyResourcePackageClusters(const ModifyResourcePackageClustersRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourcePackageClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourcePackageClustersResponse rsp = ModifyResourcePackageClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourcePackageClustersOutcome(rsp);
        else
            return ModifyResourcePackageClustersOutcome(o.GetError());
    }
    else
    {
        return ModifyResourcePackageClustersOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyResourcePackageClustersAsync(const ModifyResourcePackageClustersRequest& request, const ModifyResourcePackageClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourcePackageClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyResourcePackageClustersOutcomeCallable CynosdbClient::ModifyResourcePackageClustersCallable(const ModifyResourcePackageClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourcePackageClustersOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourcePackageClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyResourcePackageNameOutcome CynosdbClient::ModifyResourcePackageName(const ModifyResourcePackageNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourcePackageName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourcePackageNameResponse rsp = ModifyResourcePackageNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourcePackageNameOutcome(rsp);
        else
            return ModifyResourcePackageNameOutcome(o.GetError());
    }
    else
    {
        return ModifyResourcePackageNameOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyResourcePackageNameAsync(const ModifyResourcePackageNameRequest& request, const ModifyResourcePackageNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourcePackageName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyResourcePackageNameOutcomeCallable CynosdbClient::ModifyResourcePackageNameCallable(const ModifyResourcePackageNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourcePackageNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourcePackageName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyResourcePackagesDeductionPriorityOutcome CynosdbClient::ModifyResourcePackagesDeductionPriority(const ModifyResourcePackagesDeductionPriorityRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourcePackagesDeductionPriority");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourcePackagesDeductionPriorityResponse rsp = ModifyResourcePackagesDeductionPriorityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourcePackagesDeductionPriorityOutcome(rsp);
        else
            return ModifyResourcePackagesDeductionPriorityOutcome(o.GetError());
    }
    else
    {
        return ModifyResourcePackagesDeductionPriorityOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyResourcePackagesDeductionPriorityAsync(const ModifyResourcePackagesDeductionPriorityRequest& request, const ModifyResourcePackagesDeductionPriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourcePackagesDeductionPriority(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyResourcePackagesDeductionPriorityOutcomeCallable CynosdbClient::ModifyResourcePackagesDeductionPriorityCallable(const ModifyResourcePackagesDeductionPriorityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourcePackagesDeductionPriorityOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourcePackagesDeductionPriority(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyServerlessStrategyOutcome CynosdbClient::ModifyServerlessStrategy(const ModifyServerlessStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyServerlessStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServerlessStrategyResponse rsp = ModifyServerlessStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServerlessStrategyOutcome(rsp);
        else
            return ModifyServerlessStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyServerlessStrategyOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyServerlessStrategyAsync(const ModifyServerlessStrategyRequest& request, const ModifyServerlessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyServerlessStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyServerlessStrategyOutcomeCallable CynosdbClient::ModifyServerlessStrategyCallable(const ModifyServerlessStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyServerlessStrategyOutcome()>>(
        [this, request]()
        {
            return this->ModifyServerlessStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyVipVportOutcome CynosdbClient::ModifyVipVport(const ModifyVipVportRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVipVport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVipVportResponse rsp = ModifyVipVportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVipVportOutcome(rsp);
        else
            return ModifyVipVportOutcome(o.GetError());
    }
    else
    {
        return ModifyVipVportOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyVipVportAsync(const ModifyVipVportRequest& request, const ModifyVipVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVipVport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyVipVportOutcomeCallable CynosdbClient::ModifyVipVportCallable(const ModifyVipVportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVipVportOutcome()>>(
        [this, request]()
        {
            return this->ModifyVipVport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::OfflineClusterOutcome CynosdbClient::OfflineCluster(const OfflineClusterRequest &request)
{
    auto outcome = MakeRequest(request, "OfflineCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OfflineClusterResponse rsp = OfflineClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OfflineClusterOutcome(rsp);
        else
            return OfflineClusterOutcome(o.GetError());
    }
    else
    {
        return OfflineClusterOutcome(outcome.GetError());
    }
}

void CynosdbClient::OfflineClusterAsync(const OfflineClusterRequest& request, const OfflineClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OfflineCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::OfflineClusterOutcomeCallable CynosdbClient::OfflineClusterCallable(const OfflineClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OfflineClusterOutcome()>>(
        [this, request]()
        {
            return this->OfflineCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::OfflineInstanceOutcome CynosdbClient::OfflineInstance(const OfflineInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "OfflineInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OfflineInstanceResponse rsp = OfflineInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OfflineInstanceOutcome(rsp);
        else
            return OfflineInstanceOutcome(o.GetError());
    }
    else
    {
        return OfflineInstanceOutcome(outcome.GetError());
    }
}

void CynosdbClient::OfflineInstanceAsync(const OfflineInstanceRequest& request, const OfflineInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OfflineInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::OfflineInstanceOutcomeCallable CynosdbClient::OfflineInstanceCallable(const OfflineInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OfflineInstanceOutcome()>>(
        [this, request]()
        {
            return this->OfflineInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::OpenAuditServiceOutcome CynosdbClient::OpenAuditService(const OpenAuditServiceRequest &request)
{
    auto outcome = MakeRequest(request, "OpenAuditService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenAuditServiceResponse rsp = OpenAuditServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenAuditServiceOutcome(rsp);
        else
            return OpenAuditServiceOutcome(o.GetError());
    }
    else
    {
        return OpenAuditServiceOutcome(outcome.GetError());
    }
}

void CynosdbClient::OpenAuditServiceAsync(const OpenAuditServiceRequest& request, const OpenAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenAuditService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::OpenAuditServiceOutcomeCallable CynosdbClient::OpenAuditServiceCallable(const OpenAuditServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenAuditServiceOutcome()>>(
        [this, request]()
        {
            return this->OpenAuditService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::OpenClusterPasswordComplexityOutcome CynosdbClient::OpenClusterPasswordComplexity(const OpenClusterPasswordComplexityRequest &request)
{
    auto outcome = MakeRequest(request, "OpenClusterPasswordComplexity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenClusterPasswordComplexityResponse rsp = OpenClusterPasswordComplexityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenClusterPasswordComplexityOutcome(rsp);
        else
            return OpenClusterPasswordComplexityOutcome(o.GetError());
    }
    else
    {
        return OpenClusterPasswordComplexityOutcome(outcome.GetError());
    }
}

void CynosdbClient::OpenClusterPasswordComplexityAsync(const OpenClusterPasswordComplexityRequest& request, const OpenClusterPasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenClusterPasswordComplexity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::OpenClusterPasswordComplexityOutcomeCallable CynosdbClient::OpenClusterPasswordComplexityCallable(const OpenClusterPasswordComplexityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenClusterPasswordComplexityOutcome()>>(
        [this, request]()
        {
            return this->OpenClusterPasswordComplexity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::OpenClusterReadOnlyInstanceGroupAccessOutcome CynosdbClient::OpenClusterReadOnlyInstanceGroupAccess(const OpenClusterReadOnlyInstanceGroupAccessRequest &request)
{
    auto outcome = MakeRequest(request, "OpenClusterReadOnlyInstanceGroupAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenClusterReadOnlyInstanceGroupAccessResponse rsp = OpenClusterReadOnlyInstanceGroupAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenClusterReadOnlyInstanceGroupAccessOutcome(rsp);
        else
            return OpenClusterReadOnlyInstanceGroupAccessOutcome(o.GetError());
    }
    else
    {
        return OpenClusterReadOnlyInstanceGroupAccessOutcome(outcome.GetError());
    }
}

void CynosdbClient::OpenClusterReadOnlyInstanceGroupAccessAsync(const OpenClusterReadOnlyInstanceGroupAccessRequest& request, const OpenClusterReadOnlyInstanceGroupAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenClusterReadOnlyInstanceGroupAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::OpenClusterReadOnlyInstanceGroupAccessOutcomeCallable CynosdbClient::OpenClusterReadOnlyInstanceGroupAccessCallable(const OpenClusterReadOnlyInstanceGroupAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenClusterReadOnlyInstanceGroupAccessOutcome()>>(
        [this, request]()
        {
            return this->OpenClusterReadOnlyInstanceGroupAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::OpenClusterTransparentEncryptOutcome CynosdbClient::OpenClusterTransparentEncrypt(const OpenClusterTransparentEncryptRequest &request)
{
    auto outcome = MakeRequest(request, "OpenClusterTransparentEncrypt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenClusterTransparentEncryptResponse rsp = OpenClusterTransparentEncryptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenClusterTransparentEncryptOutcome(rsp);
        else
            return OpenClusterTransparentEncryptOutcome(o.GetError());
    }
    else
    {
        return OpenClusterTransparentEncryptOutcome(outcome.GetError());
    }
}

void CynosdbClient::OpenClusterTransparentEncryptAsync(const OpenClusterTransparentEncryptRequest& request, const OpenClusterTransparentEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenClusterTransparentEncrypt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::OpenClusterTransparentEncryptOutcomeCallable CynosdbClient::OpenClusterTransparentEncryptCallable(const OpenClusterTransparentEncryptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenClusterTransparentEncryptOutcome()>>(
        [this, request]()
        {
            return this->OpenClusterTransparentEncrypt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::OpenReadOnlyInstanceExclusiveAccessOutcome CynosdbClient::OpenReadOnlyInstanceExclusiveAccess(const OpenReadOnlyInstanceExclusiveAccessRequest &request)
{
    auto outcome = MakeRequest(request, "OpenReadOnlyInstanceExclusiveAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenReadOnlyInstanceExclusiveAccessResponse rsp = OpenReadOnlyInstanceExclusiveAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenReadOnlyInstanceExclusiveAccessOutcome(rsp);
        else
            return OpenReadOnlyInstanceExclusiveAccessOutcome(o.GetError());
    }
    else
    {
        return OpenReadOnlyInstanceExclusiveAccessOutcome(outcome.GetError());
    }
}

void CynosdbClient::OpenReadOnlyInstanceExclusiveAccessAsync(const OpenReadOnlyInstanceExclusiveAccessRequest& request, const OpenReadOnlyInstanceExclusiveAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenReadOnlyInstanceExclusiveAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::OpenReadOnlyInstanceExclusiveAccessOutcomeCallable CynosdbClient::OpenReadOnlyInstanceExclusiveAccessCallable(const OpenReadOnlyInstanceExclusiveAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenReadOnlyInstanceExclusiveAccessOutcome()>>(
        [this, request]()
        {
            return this->OpenReadOnlyInstanceExclusiveAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::OpenSSLOutcome CynosdbClient::OpenSSL(const OpenSSLRequest &request)
{
    auto outcome = MakeRequest(request, "OpenSSL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenSSLResponse rsp = OpenSSLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenSSLOutcome(rsp);
        else
            return OpenSSLOutcome(o.GetError());
    }
    else
    {
        return OpenSSLOutcome(outcome.GetError());
    }
}

void CynosdbClient::OpenSSLAsync(const OpenSSLRequest& request, const OpenSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenSSL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::OpenSSLOutcomeCallable CynosdbClient::OpenSSLCallable(const OpenSSLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenSSLOutcome()>>(
        [this, request]()
        {
            return this->OpenSSL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::OpenWanOutcome CynosdbClient::OpenWan(const OpenWanRequest &request)
{
    auto outcome = MakeRequest(request, "OpenWan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenWanResponse rsp = OpenWanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenWanOutcome(rsp);
        else
            return OpenWanOutcome(o.GetError());
    }
    else
    {
        return OpenWanOutcome(outcome.GetError());
    }
}

void CynosdbClient::OpenWanAsync(const OpenWanRequest& request, const OpenWanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenWan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::OpenWanOutcomeCallable CynosdbClient::OpenWanCallable(const OpenWanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenWanOutcome()>>(
        [this, request]()
        {
            return this->OpenWan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::PauseServerlessOutcome CynosdbClient::PauseServerless(const PauseServerlessRequest &request)
{
    auto outcome = MakeRequest(request, "PauseServerless");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseServerlessResponse rsp = PauseServerlessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseServerlessOutcome(rsp);
        else
            return PauseServerlessOutcome(o.GetError());
    }
    else
    {
        return PauseServerlessOutcome(outcome.GetError());
    }
}

void CynosdbClient::PauseServerlessAsync(const PauseServerlessRequest& request, const PauseServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PauseServerless(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::PauseServerlessOutcomeCallable CynosdbClient::PauseServerlessCallable(const PauseServerlessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PauseServerlessOutcome()>>(
        [this, request]()
        {
            return this->PauseServerless(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::RefundResourcePackageOutcome CynosdbClient::RefundResourcePackage(const RefundResourcePackageRequest &request)
{
    auto outcome = MakeRequest(request, "RefundResourcePackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefundResourcePackageResponse rsp = RefundResourcePackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefundResourcePackageOutcome(rsp);
        else
            return RefundResourcePackageOutcome(o.GetError());
    }
    else
    {
        return RefundResourcePackageOutcome(outcome.GetError());
    }
}

void CynosdbClient::RefundResourcePackageAsync(const RefundResourcePackageRequest& request, const RefundResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RefundResourcePackage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::RefundResourcePackageOutcomeCallable CynosdbClient::RefundResourcePackageCallable(const RefundResourcePackageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RefundResourcePackageOutcome()>>(
        [this, request]()
        {
            return this->RefundResourcePackage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ReloadBalanceProxyNodeOutcome CynosdbClient::ReloadBalanceProxyNode(const ReloadBalanceProxyNodeRequest &request)
{
    auto outcome = MakeRequest(request, "ReloadBalanceProxyNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReloadBalanceProxyNodeResponse rsp = ReloadBalanceProxyNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReloadBalanceProxyNodeOutcome(rsp);
        else
            return ReloadBalanceProxyNodeOutcome(o.GetError());
    }
    else
    {
        return ReloadBalanceProxyNodeOutcome(outcome.GetError());
    }
}

void CynosdbClient::ReloadBalanceProxyNodeAsync(const ReloadBalanceProxyNodeRequest& request, const ReloadBalanceProxyNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReloadBalanceProxyNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ReloadBalanceProxyNodeOutcomeCallable CynosdbClient::ReloadBalanceProxyNodeCallable(const ReloadBalanceProxyNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReloadBalanceProxyNodeOutcome()>>(
        [this, request]()
        {
            return this->ReloadBalanceProxyNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::RemoveClusterSlaveZoneOutcome CynosdbClient::RemoveClusterSlaveZone(const RemoveClusterSlaveZoneRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveClusterSlaveZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveClusterSlaveZoneResponse rsp = RemoveClusterSlaveZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveClusterSlaveZoneOutcome(rsp);
        else
            return RemoveClusterSlaveZoneOutcome(o.GetError());
    }
    else
    {
        return RemoveClusterSlaveZoneOutcome(outcome.GetError());
    }
}

void CynosdbClient::RemoveClusterSlaveZoneAsync(const RemoveClusterSlaveZoneRequest& request, const RemoveClusterSlaveZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveClusterSlaveZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::RemoveClusterSlaveZoneOutcomeCallable CynosdbClient::RemoveClusterSlaveZoneCallable(const RemoveClusterSlaveZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveClusterSlaveZoneOutcome()>>(
        [this, request]()
        {
            return this->RemoveClusterSlaveZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::RenewClustersOutcome CynosdbClient::RenewClusters(const RenewClustersRequest &request)
{
    auto outcome = MakeRequest(request, "RenewClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewClustersResponse rsp = RenewClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewClustersOutcome(rsp);
        else
            return RenewClustersOutcome(o.GetError());
    }
    else
    {
        return RenewClustersOutcome(outcome.GetError());
    }
}

void CynosdbClient::RenewClustersAsync(const RenewClustersRequest& request, const RenewClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::RenewClustersOutcomeCallable CynosdbClient::RenewClustersCallable(const RenewClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewClustersOutcome()>>(
        [this, request]()
        {
            return this->RenewClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ResetAccountPasswordOutcome CynosdbClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetAccountPasswordResponse rsp = ResetAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetAccountPasswordOutcome(rsp);
        else
            return ResetAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetAccountPasswordOutcome(outcome.GetError());
    }
}

void CynosdbClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetAccountPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ResetAccountPasswordOutcomeCallable CynosdbClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetAccountPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::RestartInstanceOutcome CynosdbClient::RestartInstance(const RestartInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartInstanceResponse rsp = RestartInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartInstanceOutcome(rsp);
        else
            return RestartInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartInstanceOutcome(outcome.GetError());
    }
}

void CynosdbClient::RestartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::RestartInstanceOutcomeCallable CynosdbClient::RestartInstanceCallable(const RestartInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartInstanceOutcome()>>(
        [this, request]()
        {
            return this->RestartInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ResumeServerlessOutcome CynosdbClient::ResumeServerless(const ResumeServerlessRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeServerless");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeServerlessResponse rsp = ResumeServerlessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeServerlessOutcome(rsp);
        else
            return ResumeServerlessOutcome(o.GetError());
    }
    else
    {
        return ResumeServerlessOutcome(outcome.GetError());
    }
}

void CynosdbClient::ResumeServerlessAsync(const ResumeServerlessRequest& request, const ResumeServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeServerless(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ResumeServerlessOutcomeCallable CynosdbClient::ResumeServerlessCallable(const ResumeServerlessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeServerlessOutcome()>>(
        [this, request]()
        {
            return this->ResumeServerless(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::RevokeAccountPrivilegesOutcome CynosdbClient::RevokeAccountPrivileges(const RevokeAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "RevokeAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevokeAccountPrivilegesResponse rsp = RevokeAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevokeAccountPrivilegesOutcome(rsp);
        else
            return RevokeAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return RevokeAccountPrivilegesOutcome(outcome.GetError());
    }
}

void CynosdbClient::RevokeAccountPrivilegesAsync(const RevokeAccountPrivilegesRequest& request, const RevokeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RevokeAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::RevokeAccountPrivilegesOutcomeCallable CynosdbClient::RevokeAccountPrivilegesCallable(const RevokeAccountPrivilegesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RevokeAccountPrivilegesOutcome()>>(
        [this, request]()
        {
            return this->RevokeAccountPrivileges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::RollBackClusterOutcome CynosdbClient::RollBackCluster(const RollBackClusterRequest &request)
{
    auto outcome = MakeRequest(request, "RollBackCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollBackClusterResponse rsp = RollBackClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollBackClusterOutcome(rsp);
        else
            return RollBackClusterOutcome(o.GetError());
    }
    else
    {
        return RollBackClusterOutcome(outcome.GetError());
    }
}

void CynosdbClient::RollBackClusterAsync(const RollBackClusterRequest& request, const RollBackClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollBackCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::RollBackClusterOutcomeCallable CynosdbClient::RollBackClusterCallable(const RollBackClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollBackClusterOutcome()>>(
        [this, request]()
        {
            return this->RollBackCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::RollbackToNewClusterOutcome CynosdbClient::RollbackToNewCluster(const RollbackToNewClusterRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackToNewCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackToNewClusterResponse rsp = RollbackToNewClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackToNewClusterOutcome(rsp);
        else
            return RollbackToNewClusterOutcome(o.GetError());
    }
    else
    {
        return RollbackToNewClusterOutcome(outcome.GetError());
    }
}

void CynosdbClient::RollbackToNewClusterAsync(const RollbackToNewClusterRequest& request, const RollbackToNewClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollbackToNewCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::RollbackToNewClusterOutcomeCallable CynosdbClient::RollbackToNewClusterCallable(const RollbackToNewClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollbackToNewClusterOutcome()>>(
        [this, request]()
        {
            return this->RollbackToNewCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::SearchClusterDatabasesOutcome CynosdbClient::SearchClusterDatabases(const SearchClusterDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "SearchClusterDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchClusterDatabasesResponse rsp = SearchClusterDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchClusterDatabasesOutcome(rsp);
        else
            return SearchClusterDatabasesOutcome(o.GetError());
    }
    else
    {
        return SearchClusterDatabasesOutcome(outcome.GetError());
    }
}

void CynosdbClient::SearchClusterDatabasesAsync(const SearchClusterDatabasesRequest& request, const SearchClusterDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchClusterDatabases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::SearchClusterDatabasesOutcomeCallable CynosdbClient::SearchClusterDatabasesCallable(const SearchClusterDatabasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchClusterDatabasesOutcome()>>(
        [this, request]()
        {
            return this->SearchClusterDatabases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::SearchClusterTablesOutcome CynosdbClient::SearchClusterTables(const SearchClusterTablesRequest &request)
{
    auto outcome = MakeRequest(request, "SearchClusterTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchClusterTablesResponse rsp = SearchClusterTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchClusterTablesOutcome(rsp);
        else
            return SearchClusterTablesOutcome(o.GetError());
    }
    else
    {
        return SearchClusterTablesOutcome(outcome.GetError());
    }
}

void CynosdbClient::SearchClusterTablesAsync(const SearchClusterTablesRequest& request, const SearchClusterTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchClusterTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::SearchClusterTablesOutcomeCallable CynosdbClient::SearchClusterTablesCallable(const SearchClusterTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchClusterTablesOutcome()>>(
        [this, request]()
        {
            return this->SearchClusterTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::SetRenewFlagOutcome CynosdbClient::SetRenewFlag(const SetRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "SetRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetRenewFlagResponse rsp = SetRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetRenewFlagOutcome(rsp);
        else
            return SetRenewFlagOutcome(o.GetError());
    }
    else
    {
        return SetRenewFlagOutcome(outcome.GetError());
    }
}

void CynosdbClient::SetRenewFlagAsync(const SetRenewFlagRequest& request, const SetRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::SetRenewFlagOutcomeCallable CynosdbClient::SetRenewFlagCallable(const SetRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->SetRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::StartCLSDeliveryOutcome CynosdbClient::StartCLSDelivery(const StartCLSDeliveryRequest &request)
{
    auto outcome = MakeRequest(request, "StartCLSDelivery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartCLSDeliveryResponse rsp = StartCLSDeliveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartCLSDeliveryOutcome(rsp);
        else
            return StartCLSDeliveryOutcome(o.GetError());
    }
    else
    {
        return StartCLSDeliveryOutcome(outcome.GetError());
    }
}

void CynosdbClient::StartCLSDeliveryAsync(const StartCLSDeliveryRequest& request, const StartCLSDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartCLSDelivery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::StartCLSDeliveryOutcomeCallable CynosdbClient::StartCLSDeliveryCallable(const StartCLSDeliveryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartCLSDeliveryOutcome()>>(
        [this, request]()
        {
            return this->StartCLSDelivery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::StopCLSDeliveryOutcome CynosdbClient::StopCLSDelivery(const StopCLSDeliveryRequest &request)
{
    auto outcome = MakeRequest(request, "StopCLSDelivery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopCLSDeliveryResponse rsp = StopCLSDeliveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopCLSDeliveryOutcome(rsp);
        else
            return StopCLSDeliveryOutcome(o.GetError());
    }
    else
    {
        return StopCLSDeliveryOutcome(outcome.GetError());
    }
}

void CynosdbClient::StopCLSDeliveryAsync(const StopCLSDeliveryRequest& request, const StopCLSDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopCLSDelivery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::StopCLSDeliveryOutcomeCallable CynosdbClient::StopCLSDeliveryCallable(const StopCLSDeliveryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopCLSDeliveryOutcome()>>(
        [this, request]()
        {
            return this->StopCLSDelivery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::SwitchClusterVpcOutcome CynosdbClient::SwitchClusterVpc(const SwitchClusterVpcRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchClusterVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchClusterVpcResponse rsp = SwitchClusterVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchClusterVpcOutcome(rsp);
        else
            return SwitchClusterVpcOutcome(o.GetError());
    }
    else
    {
        return SwitchClusterVpcOutcome(outcome.GetError());
    }
}

void CynosdbClient::SwitchClusterVpcAsync(const SwitchClusterVpcRequest& request, const SwitchClusterVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchClusterVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::SwitchClusterVpcOutcomeCallable CynosdbClient::SwitchClusterVpcCallable(const SwitchClusterVpcRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchClusterVpcOutcome()>>(
        [this, request]()
        {
            return this->SwitchClusterVpc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::SwitchClusterZoneOutcome CynosdbClient::SwitchClusterZone(const SwitchClusterZoneRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchClusterZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchClusterZoneResponse rsp = SwitchClusterZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchClusterZoneOutcome(rsp);
        else
            return SwitchClusterZoneOutcome(o.GetError());
    }
    else
    {
        return SwitchClusterZoneOutcome(outcome.GetError());
    }
}

void CynosdbClient::SwitchClusterZoneAsync(const SwitchClusterZoneRequest& request, const SwitchClusterZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchClusterZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::SwitchClusterZoneOutcomeCallable CynosdbClient::SwitchClusterZoneCallable(const SwitchClusterZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchClusterZoneOutcome()>>(
        [this, request]()
        {
            return this->SwitchClusterZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::SwitchProxyVpcOutcome CynosdbClient::SwitchProxyVpc(const SwitchProxyVpcRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchProxyVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchProxyVpcResponse rsp = SwitchProxyVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchProxyVpcOutcome(rsp);
        else
            return SwitchProxyVpcOutcome(o.GetError());
    }
    else
    {
        return SwitchProxyVpcOutcome(outcome.GetError());
    }
}

void CynosdbClient::SwitchProxyVpcAsync(const SwitchProxyVpcRequest& request, const SwitchProxyVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchProxyVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::SwitchProxyVpcOutcomeCallable CynosdbClient::SwitchProxyVpcCallable(const SwitchProxyVpcRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchProxyVpcOutcome()>>(
        [this, request]()
        {
            return this->SwitchProxyVpc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::UnbindClusterResourcePackagesOutcome CynosdbClient::UnbindClusterResourcePackages(const UnbindClusterResourcePackagesRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindClusterResourcePackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindClusterResourcePackagesResponse rsp = UnbindClusterResourcePackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindClusterResourcePackagesOutcome(rsp);
        else
            return UnbindClusterResourcePackagesOutcome(o.GetError());
    }
    else
    {
        return UnbindClusterResourcePackagesOutcome(outcome.GetError());
    }
}

void CynosdbClient::UnbindClusterResourcePackagesAsync(const UnbindClusterResourcePackagesRequest& request, const UnbindClusterResourcePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindClusterResourcePackages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::UnbindClusterResourcePackagesOutcomeCallable CynosdbClient::UnbindClusterResourcePackagesCallable(const UnbindClusterResourcePackagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindClusterResourcePackagesOutcome()>>(
        [this, request]()
        {
            return this->UnbindClusterResourcePackages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::UpgradeClusterVersionOutcome CynosdbClient::UpgradeClusterVersion(const UpgradeClusterVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeClusterVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeClusterVersionResponse rsp = UpgradeClusterVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeClusterVersionOutcome(rsp);
        else
            return UpgradeClusterVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeClusterVersionOutcome(outcome.GetError());
    }
}

void CynosdbClient::UpgradeClusterVersionAsync(const UpgradeClusterVersionRequest& request, const UpgradeClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeClusterVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::UpgradeClusterVersionOutcomeCallable CynosdbClient::UpgradeClusterVersionCallable(const UpgradeClusterVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeClusterVersionOutcome()>>(
        [this, request]()
        {
            return this->UpgradeClusterVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::UpgradeInstanceOutcome CynosdbClient::UpgradeInstance(const UpgradeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeInstanceResponse rsp = UpgradeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeInstanceOutcome(rsp);
        else
            return UpgradeInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeInstanceOutcome(outcome.GetError());
    }
}

void CynosdbClient::UpgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::UpgradeInstanceOutcomeCallable CynosdbClient::UpgradeInstanceCallable(const UpgradeInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpgradeInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::UpgradeProxyOutcome CynosdbClient::UpgradeProxy(const UpgradeProxyRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeProxyResponse rsp = UpgradeProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeProxyOutcome(rsp);
        else
            return UpgradeProxyOutcome(o.GetError());
    }
    else
    {
        return UpgradeProxyOutcome(outcome.GetError());
    }
}

void CynosdbClient::UpgradeProxyAsync(const UpgradeProxyRequest& request, const UpgradeProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::UpgradeProxyOutcomeCallable CynosdbClient::UpgradeProxyCallable(const UpgradeProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeProxyOutcome()>>(
        [this, request]()
        {
            return this->UpgradeProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::UpgradeProxyVersionOutcome CynosdbClient::UpgradeProxyVersion(const UpgradeProxyVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeProxyVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeProxyVersionResponse rsp = UpgradeProxyVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeProxyVersionOutcome(rsp);
        else
            return UpgradeProxyVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeProxyVersionOutcome(outcome.GetError());
    }
}

void CynosdbClient::UpgradeProxyVersionAsync(const UpgradeProxyVersionRequest& request, const UpgradeProxyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeProxyVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::UpgradeProxyVersionOutcomeCallable CynosdbClient::UpgradeProxyVersionCallable(const UpgradeProxyVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeProxyVersionOutcome()>>(
        [this, request]()
        {
            return this->UpgradeProxyVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

