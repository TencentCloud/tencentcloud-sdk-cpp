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

#include <tencentcloud/cdb/v20170320/CdbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cdb::V20170320;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-20";
    const string ENDPOINT = "cdb.tencentcloudapi.com";
}

CdbClient::CdbClient(const Credential &credential, const string &region) :
    CdbClient(credential, region, ClientProfile())
{
}

CdbClient::CdbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdbClient::AddTimeWindowOutcome CdbClient::AddTimeWindow(const AddTimeWindowRequest &request)
{
    auto outcome = MakeRequest(request, "AddTimeWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddTimeWindowResponse rsp = AddTimeWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddTimeWindowOutcome(rsp);
        else
            return AddTimeWindowOutcome(o.GetError());
    }
    else
    {
        return AddTimeWindowOutcome(outcome.GetError());
    }
}

void CdbClient::AddTimeWindowAsync(const AddTimeWindowRequest& request, const AddTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddTimeWindow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::AddTimeWindowOutcomeCallable CdbClient::AddTimeWindowCallable(const AddTimeWindowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddTimeWindowOutcome()>>(
        [this, request]()
        {
            return this->AddTimeWindow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::AdjustCdbProxyOutcome CdbClient::AdjustCdbProxy(const AdjustCdbProxyRequest &request)
{
    auto outcome = MakeRequest(request, "AdjustCdbProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AdjustCdbProxyResponse rsp = AdjustCdbProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AdjustCdbProxyOutcome(rsp);
        else
            return AdjustCdbProxyOutcome(o.GetError());
    }
    else
    {
        return AdjustCdbProxyOutcome(outcome.GetError());
    }
}

void CdbClient::AdjustCdbProxyAsync(const AdjustCdbProxyRequest& request, const AdjustCdbProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AdjustCdbProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::AdjustCdbProxyOutcomeCallable CdbClient::AdjustCdbProxyCallable(const AdjustCdbProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AdjustCdbProxyOutcome()>>(
        [this, request]()
        {
            return this->AdjustCdbProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::AdjustCdbProxyAddressOutcome CdbClient::AdjustCdbProxyAddress(const AdjustCdbProxyAddressRequest &request)
{
    auto outcome = MakeRequest(request, "AdjustCdbProxyAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AdjustCdbProxyAddressResponse rsp = AdjustCdbProxyAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AdjustCdbProxyAddressOutcome(rsp);
        else
            return AdjustCdbProxyAddressOutcome(o.GetError());
    }
    else
    {
        return AdjustCdbProxyAddressOutcome(outcome.GetError());
    }
}

void CdbClient::AdjustCdbProxyAddressAsync(const AdjustCdbProxyAddressRequest& request, const AdjustCdbProxyAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AdjustCdbProxyAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::AdjustCdbProxyAddressOutcomeCallable CdbClient::AdjustCdbProxyAddressCallable(const AdjustCdbProxyAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AdjustCdbProxyAddressOutcome()>>(
        [this, request]()
        {
            return this->AdjustCdbProxyAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::AnalyzeAuditLogsOutcome CdbClient::AnalyzeAuditLogs(const AnalyzeAuditLogsRequest &request)
{
    auto outcome = MakeRequest(request, "AnalyzeAuditLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AnalyzeAuditLogsResponse rsp = AnalyzeAuditLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AnalyzeAuditLogsOutcome(rsp);
        else
            return AnalyzeAuditLogsOutcome(o.GetError());
    }
    else
    {
        return AnalyzeAuditLogsOutcome(outcome.GetError());
    }
}

void CdbClient::AnalyzeAuditLogsAsync(const AnalyzeAuditLogsRequest& request, const AnalyzeAuditLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AnalyzeAuditLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::AnalyzeAuditLogsOutcomeCallable CdbClient::AnalyzeAuditLogsCallable(const AnalyzeAuditLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AnalyzeAuditLogsOutcome()>>(
        [this, request]()
        {
            return this->AnalyzeAuditLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::AssociateSecurityGroupsOutcome CdbClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
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

void CdbClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::AssociateSecurityGroupsOutcomeCallable CdbClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
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

CdbClient::BalanceRoGroupLoadOutcome CdbClient::BalanceRoGroupLoad(const BalanceRoGroupLoadRequest &request)
{
    auto outcome = MakeRequest(request, "BalanceRoGroupLoad");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BalanceRoGroupLoadResponse rsp = BalanceRoGroupLoadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BalanceRoGroupLoadOutcome(rsp);
        else
            return BalanceRoGroupLoadOutcome(o.GetError());
    }
    else
    {
        return BalanceRoGroupLoadOutcome(outcome.GetError());
    }
}

void CdbClient::BalanceRoGroupLoadAsync(const BalanceRoGroupLoadRequest& request, const BalanceRoGroupLoadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BalanceRoGroupLoad(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::BalanceRoGroupLoadOutcomeCallable CdbClient::BalanceRoGroupLoadCallable(const BalanceRoGroupLoadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BalanceRoGroupLoadOutcome()>>(
        [this, request]()
        {
            return this->BalanceRoGroupLoad(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CheckMigrateClusterOutcome CdbClient::CheckMigrateCluster(const CheckMigrateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CheckMigrateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckMigrateClusterResponse rsp = CheckMigrateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckMigrateClusterOutcome(rsp);
        else
            return CheckMigrateClusterOutcome(o.GetError());
    }
    else
    {
        return CheckMigrateClusterOutcome(outcome.GetError());
    }
}

void CdbClient::CheckMigrateClusterAsync(const CheckMigrateClusterRequest& request, const CheckMigrateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckMigrateCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CheckMigrateClusterOutcomeCallable CdbClient::CheckMigrateClusterCallable(const CheckMigrateClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckMigrateClusterOutcome()>>(
        [this, request]()
        {
            return this->CheckMigrateCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CloseAuditServiceOutcome CdbClient::CloseAuditService(const CloseAuditServiceRequest &request)
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

void CdbClient::CloseAuditServiceAsync(const CloseAuditServiceRequest& request, const CloseAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseAuditService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CloseAuditServiceOutcomeCallable CdbClient::CloseAuditServiceCallable(const CloseAuditServiceRequest &request)
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

CdbClient::CloseCDBProxyOutcome CdbClient::CloseCDBProxy(const CloseCDBProxyRequest &request)
{
    auto outcome = MakeRequest(request, "CloseCDBProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseCDBProxyResponse rsp = CloseCDBProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseCDBProxyOutcome(rsp);
        else
            return CloseCDBProxyOutcome(o.GetError());
    }
    else
    {
        return CloseCDBProxyOutcome(outcome.GetError());
    }
}

void CdbClient::CloseCDBProxyAsync(const CloseCDBProxyRequest& request, const CloseCDBProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseCDBProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CloseCDBProxyOutcomeCallable CdbClient::CloseCDBProxyCallable(const CloseCDBProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseCDBProxyOutcome()>>(
        [this, request]()
        {
            return this->CloseCDBProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CloseCdbProxyAddressOutcome CdbClient::CloseCdbProxyAddress(const CloseCdbProxyAddressRequest &request)
{
    auto outcome = MakeRequest(request, "CloseCdbProxyAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseCdbProxyAddressResponse rsp = CloseCdbProxyAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseCdbProxyAddressOutcome(rsp);
        else
            return CloseCdbProxyAddressOutcome(o.GetError());
    }
    else
    {
        return CloseCdbProxyAddressOutcome(outcome.GetError());
    }
}

void CdbClient::CloseCdbProxyAddressAsync(const CloseCdbProxyAddressRequest& request, const CloseCdbProxyAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseCdbProxyAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CloseCdbProxyAddressOutcomeCallable CdbClient::CloseCdbProxyAddressCallable(const CloseCdbProxyAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseCdbProxyAddressOutcome()>>(
        [this, request]()
        {
            return this->CloseCdbProxyAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CloseSSLOutcome CdbClient::CloseSSL(const CloseSSLRequest &request)
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

void CdbClient::CloseSSLAsync(const CloseSSLRequest& request, const CloseSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseSSL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CloseSSLOutcomeCallable CdbClient::CloseSSLCallable(const CloseSSLRequest &request)
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

CdbClient::CloseWanServiceOutcome CdbClient::CloseWanService(const CloseWanServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CloseWanService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseWanServiceResponse rsp = CloseWanServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseWanServiceOutcome(rsp);
        else
            return CloseWanServiceOutcome(o.GetError());
    }
    else
    {
        return CloseWanServiceOutcome(outcome.GetError());
    }
}

void CdbClient::CloseWanServiceAsync(const CloseWanServiceRequest& request, const CloseWanServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseWanService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CloseWanServiceOutcomeCallable CdbClient::CloseWanServiceCallable(const CloseWanServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseWanServiceOutcome()>>(
        [this, request]()
        {
            return this->CloseWanService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CreateAccountsOutcome CdbClient::CreateAccounts(const CreateAccountsRequest &request)
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

void CdbClient::CreateAccountsAsync(const CreateAccountsRequest& request, const CreateAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateAccountsOutcomeCallable CdbClient::CreateAccountsCallable(const CreateAccountsRequest &request)
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

CdbClient::CreateAuditLogFileOutcome CdbClient::CreateAuditLogFile(const CreateAuditLogFileRequest &request)
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

void CdbClient::CreateAuditLogFileAsync(const CreateAuditLogFileRequest& request, const CreateAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAuditLogFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateAuditLogFileOutcomeCallable CdbClient::CreateAuditLogFileCallable(const CreateAuditLogFileRequest &request)
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

CdbClient::CreateAuditPolicyOutcome CdbClient::CreateAuditPolicy(const CreateAuditPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuditPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuditPolicyResponse rsp = CreateAuditPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuditPolicyOutcome(rsp);
        else
            return CreateAuditPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateAuditPolicyOutcome(outcome.GetError());
    }
}

void CdbClient::CreateAuditPolicyAsync(const CreateAuditPolicyRequest& request, const CreateAuditPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAuditPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateAuditPolicyOutcomeCallable CdbClient::CreateAuditPolicyCallable(const CreateAuditPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAuditPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateAuditPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CreateAuditRuleOutcome CdbClient::CreateAuditRule(const CreateAuditRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuditRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuditRuleResponse rsp = CreateAuditRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuditRuleOutcome(rsp);
        else
            return CreateAuditRuleOutcome(o.GetError());
    }
    else
    {
        return CreateAuditRuleOutcome(outcome.GetError());
    }
}

void CdbClient::CreateAuditRuleAsync(const CreateAuditRuleRequest& request, const CreateAuditRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAuditRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateAuditRuleOutcomeCallable CdbClient::CreateAuditRuleCallable(const CreateAuditRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAuditRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateAuditRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CreateAuditRuleTemplateOutcome CdbClient::CreateAuditRuleTemplate(const CreateAuditRuleTemplateRequest &request)
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

void CdbClient::CreateAuditRuleTemplateAsync(const CreateAuditRuleTemplateRequest& request, const CreateAuditRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAuditRuleTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateAuditRuleTemplateOutcomeCallable CdbClient::CreateAuditRuleTemplateCallable(const CreateAuditRuleTemplateRequest &request)
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

CdbClient::CreateBackupOutcome CdbClient::CreateBackup(const CreateBackupRequest &request)
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

void CdbClient::CreateBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBackup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateBackupOutcomeCallable CdbClient::CreateBackupCallable(const CreateBackupRequest &request)
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

CdbClient::CreateCdbProxyOutcome CdbClient::CreateCdbProxy(const CreateCdbProxyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCdbProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCdbProxyResponse rsp = CreateCdbProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCdbProxyOutcome(rsp);
        else
            return CreateCdbProxyOutcome(o.GetError());
    }
    else
    {
        return CreateCdbProxyOutcome(outcome.GetError());
    }
}

void CdbClient::CreateCdbProxyAsync(const CreateCdbProxyRequest& request, const CreateCdbProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCdbProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateCdbProxyOutcomeCallable CdbClient::CreateCdbProxyCallable(const CreateCdbProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCdbProxyOutcome()>>(
        [this, request]()
        {
            return this->CreateCdbProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CreateCdbProxyAddressOutcome CdbClient::CreateCdbProxyAddress(const CreateCdbProxyAddressRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCdbProxyAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCdbProxyAddressResponse rsp = CreateCdbProxyAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCdbProxyAddressOutcome(rsp);
        else
            return CreateCdbProxyAddressOutcome(o.GetError());
    }
    else
    {
        return CreateCdbProxyAddressOutcome(outcome.GetError());
    }
}

void CdbClient::CreateCdbProxyAddressAsync(const CreateCdbProxyAddressRequest& request, const CreateCdbProxyAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCdbProxyAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateCdbProxyAddressOutcomeCallable CdbClient::CreateCdbProxyAddressCallable(const CreateCdbProxyAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCdbProxyAddressOutcome()>>(
        [this, request]()
        {
            return this->CreateCdbProxyAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CreateCloneInstanceOutcome CdbClient::CreateCloneInstance(const CreateCloneInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloneInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloneInstanceResponse rsp = CreateCloneInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloneInstanceOutcome(rsp);
        else
            return CreateCloneInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateCloneInstanceOutcome(outcome.GetError());
    }
}

void CdbClient::CreateCloneInstanceAsync(const CreateCloneInstanceRequest& request, const CreateCloneInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloneInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateCloneInstanceOutcomeCallable CdbClient::CreateCloneInstanceCallable(const CreateCloneInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloneInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateCloneInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CreateDBImportJobOutcome CdbClient::CreateDBImportJob(const CreateDBImportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBImportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBImportJobResponse rsp = CreateDBImportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBImportJobOutcome(rsp);
        else
            return CreateDBImportJobOutcome(o.GetError());
    }
    else
    {
        return CreateDBImportJobOutcome(outcome.GetError());
    }
}

void CdbClient::CreateDBImportJobAsync(const CreateDBImportJobRequest& request, const CreateDBImportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBImportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateDBImportJobOutcomeCallable CdbClient::CreateDBImportJobCallable(const CreateDBImportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBImportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateDBImportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CreateDBInstanceOutcome CdbClient::CreateDBInstance(const CreateDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstanceResponse rsp = CreateDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstanceOutcome(rsp);
        else
            return CreateDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstanceOutcome(outcome.GetError());
    }
}

void CdbClient::CreateDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateDBInstanceOutcomeCallable CdbClient::CreateDBInstanceCallable(const CreateDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CreateDBInstanceHourOutcome CdbClient::CreateDBInstanceHour(const CreateDBInstanceHourRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstanceHour");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstanceHourResponse rsp = CreateDBInstanceHourResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstanceHourOutcome(rsp);
        else
            return CreateDBInstanceHourOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstanceHourOutcome(outcome.GetError());
    }
}

void CdbClient::CreateDBInstanceHourAsync(const CreateDBInstanceHourRequest& request, const CreateDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBInstanceHour(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateDBInstanceHourOutcomeCallable CdbClient::CreateDBInstanceHourCallable(const CreateDBInstanceHourRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBInstanceHourOutcome()>>(
        [this, request]()
        {
            return this->CreateDBInstanceHour(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CreateDatabaseOutcome CdbClient::CreateDatabase(const CreateDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatabaseResponse rsp = CreateDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatabaseOutcome(rsp);
        else
            return CreateDatabaseOutcome(o.GetError());
    }
    else
    {
        return CreateDatabaseOutcome(outcome.GetError());
    }
}

void CdbClient::CreateDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateDatabaseOutcomeCallable CdbClient::CreateDatabaseCallable(const CreateDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDatabaseOutcome()>>(
        [this, request]()
        {
            return this->CreateDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CreateDeployGroupOutcome CdbClient::CreateDeployGroup(const CreateDeployGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeployGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeployGroupResponse rsp = CreateDeployGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeployGroupOutcome(rsp);
        else
            return CreateDeployGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDeployGroupOutcome(outcome.GetError());
    }
}

void CdbClient::CreateDeployGroupAsync(const CreateDeployGroupRequest& request, const CreateDeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDeployGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateDeployGroupOutcomeCallable CdbClient::CreateDeployGroupCallable(const CreateDeployGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDeployGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateDeployGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CreateParamTemplateOutcome CdbClient::CreateParamTemplate(const CreateParamTemplateRequest &request)
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

void CdbClient::CreateParamTemplateAsync(const CreateParamTemplateRequest& request, const CreateParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateParamTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateParamTemplateOutcomeCallable CdbClient::CreateParamTemplateCallable(const CreateParamTemplateRequest &request)
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

CdbClient::CreateRoInstanceIpOutcome CdbClient::CreateRoInstanceIp(const CreateRoInstanceIpRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoInstanceIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoInstanceIpResponse rsp = CreateRoInstanceIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoInstanceIpOutcome(rsp);
        else
            return CreateRoInstanceIpOutcome(o.GetError());
    }
    else
    {
        return CreateRoInstanceIpOutcome(outcome.GetError());
    }
}

void CdbClient::CreateRoInstanceIpAsync(const CreateRoInstanceIpRequest& request, const CreateRoInstanceIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRoInstanceIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateRoInstanceIpOutcomeCallable CdbClient::CreateRoInstanceIpCallable(const CreateRoInstanceIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRoInstanceIpOutcome()>>(
        [this, request]()
        {
            return this->CreateRoInstanceIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::CreateRotationPasswordOutcome CdbClient::CreateRotationPassword(const CreateRotationPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRotationPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRotationPasswordResponse rsp = CreateRotationPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRotationPasswordOutcome(rsp);
        else
            return CreateRotationPasswordOutcome(o.GetError());
    }
    else
    {
        return CreateRotationPasswordOutcome(outcome.GetError());
    }
}

void CdbClient::CreateRotationPasswordAsync(const CreateRotationPasswordRequest& request, const CreateRotationPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRotationPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::CreateRotationPasswordOutcomeCallable CdbClient::CreateRotationPasswordCallable(const CreateRotationPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRotationPasswordOutcome()>>(
        [this, request]()
        {
            return this->CreateRotationPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DeleteAccountsOutcome CdbClient::DeleteAccounts(const DeleteAccountsRequest &request)
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

void CdbClient::DeleteAccountsAsync(const DeleteAccountsRequest& request, const DeleteAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DeleteAccountsOutcomeCallable CdbClient::DeleteAccountsCallable(const DeleteAccountsRequest &request)
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

CdbClient::DeleteAuditLogFileOutcome CdbClient::DeleteAuditLogFile(const DeleteAuditLogFileRequest &request)
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

void CdbClient::DeleteAuditLogFileAsync(const DeleteAuditLogFileRequest& request, const DeleteAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAuditLogFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DeleteAuditLogFileOutcomeCallable CdbClient::DeleteAuditLogFileCallable(const DeleteAuditLogFileRequest &request)
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

CdbClient::DeleteAuditPolicyOutcome CdbClient::DeleteAuditPolicy(const DeleteAuditPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuditPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuditPolicyResponse rsp = DeleteAuditPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuditPolicyOutcome(rsp);
        else
            return DeleteAuditPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteAuditPolicyOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteAuditPolicyAsync(const DeleteAuditPolicyRequest& request, const DeleteAuditPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAuditPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DeleteAuditPolicyOutcomeCallable CdbClient::DeleteAuditPolicyCallable(const DeleteAuditPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAuditPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteAuditPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DeleteAuditRuleOutcome CdbClient::DeleteAuditRule(const DeleteAuditRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuditRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuditRuleResponse rsp = DeleteAuditRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuditRuleOutcome(rsp);
        else
            return DeleteAuditRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAuditRuleOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteAuditRuleAsync(const DeleteAuditRuleRequest& request, const DeleteAuditRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAuditRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DeleteAuditRuleOutcomeCallable CdbClient::DeleteAuditRuleCallable(const DeleteAuditRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAuditRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteAuditRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DeleteAuditRuleTemplatesOutcome CdbClient::DeleteAuditRuleTemplates(const DeleteAuditRuleTemplatesRequest &request)
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

void CdbClient::DeleteAuditRuleTemplatesAsync(const DeleteAuditRuleTemplatesRequest& request, const DeleteAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAuditRuleTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DeleteAuditRuleTemplatesOutcomeCallable CdbClient::DeleteAuditRuleTemplatesCallable(const DeleteAuditRuleTemplatesRequest &request)
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

CdbClient::DeleteBackupOutcome CdbClient::DeleteBackup(const DeleteBackupRequest &request)
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

void CdbClient::DeleteBackupAsync(const DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBackup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DeleteBackupOutcomeCallable CdbClient::DeleteBackupCallable(const DeleteBackupRequest &request)
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

CdbClient::DeleteDatabaseOutcome CdbClient::DeleteDatabase(const DeleteDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDatabaseResponse rsp = DeleteDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDatabaseOutcome(rsp);
        else
            return DeleteDatabaseOutcome(o.GetError());
    }
    else
    {
        return DeleteDatabaseOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteDatabaseAsync(const DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DeleteDatabaseOutcomeCallable CdbClient::DeleteDatabaseCallable(const DeleteDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDatabaseOutcome()>>(
        [this, request]()
        {
            return this->DeleteDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DeleteDeployGroupsOutcome CdbClient::DeleteDeployGroups(const DeleteDeployGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeployGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeployGroupsResponse rsp = DeleteDeployGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeployGroupsOutcome(rsp);
        else
            return DeleteDeployGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteDeployGroupsOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteDeployGroupsAsync(const DeleteDeployGroupsRequest& request, const DeleteDeployGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDeployGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DeleteDeployGroupsOutcomeCallable CdbClient::DeleteDeployGroupsCallable(const DeleteDeployGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDeployGroupsOutcome()>>(
        [this, request]()
        {
            return this->DeleteDeployGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DeleteParamTemplateOutcome CdbClient::DeleteParamTemplate(const DeleteParamTemplateRequest &request)
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

void CdbClient::DeleteParamTemplateAsync(const DeleteParamTemplateRequest& request, const DeleteParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteParamTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DeleteParamTemplateOutcomeCallable CdbClient::DeleteParamTemplateCallable(const DeleteParamTemplateRequest &request)
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

CdbClient::DeleteRotationPasswordOutcome CdbClient::DeleteRotationPassword(const DeleteRotationPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRotationPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRotationPasswordResponse rsp = DeleteRotationPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRotationPasswordOutcome(rsp);
        else
            return DeleteRotationPasswordOutcome(o.GetError());
    }
    else
    {
        return DeleteRotationPasswordOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteRotationPasswordAsync(const DeleteRotationPasswordRequest& request, const DeleteRotationPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRotationPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DeleteRotationPasswordOutcomeCallable CdbClient::DeleteRotationPasswordCallable(const DeleteRotationPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRotationPasswordOutcome()>>(
        [this, request]()
        {
            return this->DeleteRotationPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DeleteTimeWindowOutcome CdbClient::DeleteTimeWindow(const DeleteTimeWindowRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTimeWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTimeWindowResponse rsp = DeleteTimeWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTimeWindowOutcome(rsp);
        else
            return DeleteTimeWindowOutcome(o.GetError());
    }
    else
    {
        return DeleteTimeWindowOutcome(outcome.GetError());
    }
}

void CdbClient::DeleteTimeWindowAsync(const DeleteTimeWindowRequest& request, const DeleteTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTimeWindow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DeleteTimeWindowOutcomeCallable CdbClient::DeleteTimeWindowCallable(const DeleteTimeWindowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTimeWindowOutcome()>>(
        [this, request]()
        {
            return this->DeleteTimeWindow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeAccountPrivilegesOutcome CdbClient::DescribeAccountPrivileges(const DescribeAccountPrivilegesRequest &request)
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

void CdbClient::DescribeAccountPrivilegesAsync(const DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeAccountPrivilegesOutcomeCallable CdbClient::DescribeAccountPrivilegesCallable(const DescribeAccountPrivilegesRequest &request)
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

CdbClient::DescribeAccountsOutcome CdbClient::DescribeAccounts(const DescribeAccountsRequest &request)
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

void CdbClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeAccountsOutcomeCallable CdbClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
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

CdbClient::DescribeAsyncRequestInfoOutcome CdbClient::DescribeAsyncRequestInfo(const DescribeAsyncRequestInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsyncRequestInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsyncRequestInfoResponse rsp = DescribeAsyncRequestInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsyncRequestInfoOutcome(rsp);
        else
            return DescribeAsyncRequestInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAsyncRequestInfoOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeAsyncRequestInfoAsync(const DescribeAsyncRequestInfoRequest& request, const DescribeAsyncRequestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAsyncRequestInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeAsyncRequestInfoOutcomeCallable CdbClient::DescribeAsyncRequestInfoCallable(const DescribeAsyncRequestInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAsyncRequestInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAsyncRequestInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeAuditConfigOutcome CdbClient::DescribeAuditConfig(const DescribeAuditConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditConfigResponse rsp = DescribeAuditConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditConfigOutcome(rsp);
        else
            return DescribeAuditConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditConfigOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeAuditConfigAsync(const DescribeAuditConfigRequest& request, const DescribeAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeAuditConfigOutcomeCallable CdbClient::DescribeAuditConfigCallable(const DescribeAuditConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeAuditInstanceListOutcome CdbClient::DescribeAuditInstanceList(const DescribeAuditInstanceListRequest &request)
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

void CdbClient::DescribeAuditInstanceListAsync(const DescribeAuditInstanceListRequest& request, const DescribeAuditInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeAuditInstanceListOutcomeCallable CdbClient::DescribeAuditInstanceListCallable(const DescribeAuditInstanceListRequest &request)
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

CdbClient::DescribeAuditLogFilesOutcome CdbClient::DescribeAuditLogFiles(const DescribeAuditLogFilesRequest &request)
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

void CdbClient::DescribeAuditLogFilesAsync(const DescribeAuditLogFilesRequest& request, const DescribeAuditLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditLogFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeAuditLogFilesOutcomeCallable CdbClient::DescribeAuditLogFilesCallable(const DescribeAuditLogFilesRequest &request)
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

CdbClient::DescribeAuditLogsOutcome CdbClient::DescribeAuditLogs(const DescribeAuditLogsRequest &request)
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

void CdbClient::DescribeAuditLogsAsync(const DescribeAuditLogsRequest& request, const DescribeAuditLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeAuditLogsOutcomeCallable CdbClient::DescribeAuditLogsCallable(const DescribeAuditLogsRequest &request)
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

CdbClient::DescribeAuditPoliciesOutcome CdbClient::DescribeAuditPolicies(const DescribeAuditPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditPoliciesResponse rsp = DescribeAuditPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditPoliciesOutcome(rsp);
        else
            return DescribeAuditPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditPoliciesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeAuditPoliciesAsync(const DescribeAuditPoliciesRequest& request, const DescribeAuditPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeAuditPoliciesOutcomeCallable CdbClient::DescribeAuditPoliciesCallable(const DescribeAuditPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeAuditRuleTemplateModifyHistoryOutcome CdbClient::DescribeAuditRuleTemplateModifyHistory(const DescribeAuditRuleTemplateModifyHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditRuleTemplateModifyHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditRuleTemplateModifyHistoryResponse rsp = DescribeAuditRuleTemplateModifyHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditRuleTemplateModifyHistoryOutcome(rsp);
        else
            return DescribeAuditRuleTemplateModifyHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditRuleTemplateModifyHistoryOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeAuditRuleTemplateModifyHistoryAsync(const DescribeAuditRuleTemplateModifyHistoryRequest& request, const DescribeAuditRuleTemplateModifyHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditRuleTemplateModifyHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeAuditRuleTemplateModifyHistoryOutcomeCallable CdbClient::DescribeAuditRuleTemplateModifyHistoryCallable(const DescribeAuditRuleTemplateModifyHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditRuleTemplateModifyHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditRuleTemplateModifyHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeAuditRuleTemplatesOutcome CdbClient::DescribeAuditRuleTemplates(const DescribeAuditRuleTemplatesRequest &request)
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

void CdbClient::DescribeAuditRuleTemplatesAsync(const DescribeAuditRuleTemplatesRequest& request, const DescribeAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditRuleTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeAuditRuleTemplatesOutcomeCallable CdbClient::DescribeAuditRuleTemplatesCallable(const DescribeAuditRuleTemplatesRequest &request)
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

CdbClient::DescribeAuditRulesOutcome CdbClient::DescribeAuditRules(const DescribeAuditRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditRulesResponse rsp = DescribeAuditRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditRulesOutcome(rsp);
        else
            return DescribeAuditRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditRulesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeAuditRulesAsync(const DescribeAuditRulesRequest& request, const DescribeAuditRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeAuditRulesOutcomeCallable CdbClient::DescribeAuditRulesCallable(const DescribeAuditRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeBackupConfigOutcome CdbClient::DescribeBackupConfig(const DescribeBackupConfigRequest &request)
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

void CdbClient::DescribeBackupConfigAsync(const DescribeBackupConfigRequest& request, const DescribeBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeBackupConfigOutcomeCallable CdbClient::DescribeBackupConfigCallable(const DescribeBackupConfigRequest &request)
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

CdbClient::DescribeBackupDecryptionKeyOutcome CdbClient::DescribeBackupDecryptionKey(const DescribeBackupDecryptionKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupDecryptionKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupDecryptionKeyResponse rsp = DescribeBackupDecryptionKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupDecryptionKeyOutcome(rsp);
        else
            return DescribeBackupDecryptionKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupDecryptionKeyOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeBackupDecryptionKeyAsync(const DescribeBackupDecryptionKeyRequest& request, const DescribeBackupDecryptionKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupDecryptionKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeBackupDecryptionKeyOutcomeCallable CdbClient::DescribeBackupDecryptionKeyCallable(const DescribeBackupDecryptionKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupDecryptionKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupDecryptionKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeBackupDownloadRestrictionOutcome CdbClient::DescribeBackupDownloadRestriction(const DescribeBackupDownloadRestrictionRequest &request)
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

void CdbClient::DescribeBackupDownloadRestrictionAsync(const DescribeBackupDownloadRestrictionRequest& request, const DescribeBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupDownloadRestriction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeBackupDownloadRestrictionOutcomeCallable CdbClient::DescribeBackupDownloadRestrictionCallable(const DescribeBackupDownloadRestrictionRequest &request)
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

CdbClient::DescribeBackupEncryptionStatusOutcome CdbClient::DescribeBackupEncryptionStatus(const DescribeBackupEncryptionStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupEncryptionStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupEncryptionStatusResponse rsp = DescribeBackupEncryptionStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupEncryptionStatusOutcome(rsp);
        else
            return DescribeBackupEncryptionStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupEncryptionStatusOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeBackupEncryptionStatusAsync(const DescribeBackupEncryptionStatusRequest& request, const DescribeBackupEncryptionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupEncryptionStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeBackupEncryptionStatusOutcomeCallable CdbClient::DescribeBackupEncryptionStatusCallable(const DescribeBackupEncryptionStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupEncryptionStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupEncryptionStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeBackupOverviewOutcome CdbClient::DescribeBackupOverview(const DescribeBackupOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupOverviewResponse rsp = DescribeBackupOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupOverviewOutcome(rsp);
        else
            return DescribeBackupOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupOverviewOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeBackupOverviewAsync(const DescribeBackupOverviewRequest& request, const DescribeBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeBackupOverviewOutcomeCallable CdbClient::DescribeBackupOverviewCallable(const DescribeBackupOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeBackupSummariesOutcome CdbClient::DescribeBackupSummaries(const DescribeBackupSummariesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupSummaries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupSummariesResponse rsp = DescribeBackupSummariesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupSummariesOutcome(rsp);
        else
            return DescribeBackupSummariesOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupSummariesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeBackupSummariesAsync(const DescribeBackupSummariesRequest& request, const DescribeBackupSummariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupSummaries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeBackupSummariesOutcomeCallable CdbClient::DescribeBackupSummariesCallable(const DescribeBackupSummariesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupSummariesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupSummaries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeBackupsOutcome CdbClient::DescribeBackups(const DescribeBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupsResponse rsp = DescribeBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupsOutcome(rsp);
        else
            return DescribeBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeBackupsOutcomeCallable CdbClient::DescribeBackupsCallable(const DescribeBackupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeBinlogBackupOverviewOutcome CdbClient::DescribeBinlogBackupOverview(const DescribeBinlogBackupOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBinlogBackupOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBinlogBackupOverviewResponse rsp = DescribeBinlogBackupOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBinlogBackupOverviewOutcome(rsp);
        else
            return DescribeBinlogBackupOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeBinlogBackupOverviewOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeBinlogBackupOverviewAsync(const DescribeBinlogBackupOverviewRequest& request, const DescribeBinlogBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBinlogBackupOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeBinlogBackupOverviewOutcomeCallable CdbClient::DescribeBinlogBackupOverviewCallable(const DescribeBinlogBackupOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBinlogBackupOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeBinlogBackupOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeBinlogsOutcome CdbClient::DescribeBinlogs(const DescribeBinlogsRequest &request)
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

void CdbClient::DescribeBinlogsAsync(const DescribeBinlogsRequest& request, const DescribeBinlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBinlogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeBinlogsOutcomeCallable CdbClient::DescribeBinlogsCallable(const DescribeBinlogsRequest &request)
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

CdbClient::DescribeCPUExpandStrategyInfoOutcome CdbClient::DescribeCPUExpandStrategyInfo(const DescribeCPUExpandStrategyInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCPUExpandStrategyInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCPUExpandStrategyInfoResponse rsp = DescribeCPUExpandStrategyInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCPUExpandStrategyInfoOutcome(rsp);
        else
            return DescribeCPUExpandStrategyInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCPUExpandStrategyInfoOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeCPUExpandStrategyInfoAsync(const DescribeCPUExpandStrategyInfoRequest& request, const DescribeCPUExpandStrategyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCPUExpandStrategyInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeCPUExpandStrategyInfoOutcomeCallable CdbClient::DescribeCPUExpandStrategyInfoCallable(const DescribeCPUExpandStrategyInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCPUExpandStrategyInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCPUExpandStrategyInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeCdbProxyInfoOutcome CdbClient::DescribeCdbProxyInfo(const DescribeCdbProxyInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCdbProxyInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCdbProxyInfoResponse rsp = DescribeCdbProxyInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCdbProxyInfoOutcome(rsp);
        else
            return DescribeCdbProxyInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCdbProxyInfoOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeCdbProxyInfoAsync(const DescribeCdbProxyInfoRequest& request, const DescribeCdbProxyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCdbProxyInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeCdbProxyInfoOutcomeCallable CdbClient::DescribeCdbProxyInfoCallable(const DescribeCdbProxyInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCdbProxyInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCdbProxyInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeCdbZoneConfigOutcome CdbClient::DescribeCdbZoneConfig(const DescribeCdbZoneConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCdbZoneConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCdbZoneConfigResponse rsp = DescribeCdbZoneConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCdbZoneConfigOutcome(rsp);
        else
            return DescribeCdbZoneConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeCdbZoneConfigOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeCdbZoneConfigAsync(const DescribeCdbZoneConfigRequest& request, const DescribeCdbZoneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCdbZoneConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeCdbZoneConfigOutcomeCallable CdbClient::DescribeCdbZoneConfigCallable(const DescribeCdbZoneConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCdbZoneConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeCdbZoneConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeCloneListOutcome CdbClient::DescribeCloneList(const DescribeCloneListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloneList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloneListResponse rsp = DescribeCloneListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloneListOutcome(rsp);
        else
            return DescribeCloneListOutcome(o.GetError());
    }
    else
    {
        return DescribeCloneListOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeCloneListAsync(const DescribeCloneListRequest& request, const DescribeCloneListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloneList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeCloneListOutcomeCallable CdbClient::DescribeCloneListCallable(const DescribeCloneListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloneListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloneList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeClusterInfoOutcome CdbClient::DescribeClusterInfo(const DescribeClusterInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterInfoResponse rsp = DescribeClusterInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterInfoOutcome(rsp);
        else
            return DescribeClusterInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterInfoOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeClusterInfoAsync(const DescribeClusterInfoRequest& request, const DescribeClusterInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeClusterInfoOutcomeCallable CdbClient::DescribeClusterInfoCallable(const DescribeClusterInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeCpuExpandHistoryOutcome CdbClient::DescribeCpuExpandHistory(const DescribeCpuExpandHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCpuExpandHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCpuExpandHistoryResponse rsp = DescribeCpuExpandHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCpuExpandHistoryOutcome(rsp);
        else
            return DescribeCpuExpandHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeCpuExpandHistoryOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeCpuExpandHistoryAsync(const DescribeCpuExpandHistoryRequest& request, const DescribeCpuExpandHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCpuExpandHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeCpuExpandHistoryOutcomeCallable CdbClient::DescribeCpuExpandHistoryCallable(const DescribeCpuExpandHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCpuExpandHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeCpuExpandHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDBFeaturesOutcome CdbClient::DescribeDBFeatures(const DescribeDBFeaturesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBFeatures");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBFeaturesResponse rsp = DescribeDBFeaturesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBFeaturesOutcome(rsp);
        else
            return DescribeDBFeaturesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBFeaturesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBFeaturesAsync(const DescribeDBFeaturesRequest& request, const DescribeDBFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBFeatures(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDBFeaturesOutcomeCallable CdbClient::DescribeDBFeaturesCallable(const DescribeDBFeaturesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBFeaturesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBFeatures(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDBImportRecordsOutcome CdbClient::DescribeDBImportRecords(const DescribeDBImportRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBImportRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBImportRecordsResponse rsp = DescribeDBImportRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBImportRecordsOutcome(rsp);
        else
            return DescribeDBImportRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBImportRecordsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBImportRecordsAsync(const DescribeDBImportRecordsRequest& request, const DescribeDBImportRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBImportRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDBImportRecordsOutcomeCallable CdbClient::DescribeDBImportRecordsCallable(const DescribeDBImportRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBImportRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBImportRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDBInstanceCharsetOutcome CdbClient::DescribeDBInstanceCharset(const DescribeDBInstanceCharsetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceCharset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceCharsetResponse rsp = DescribeDBInstanceCharsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceCharsetOutcome(rsp);
        else
            return DescribeDBInstanceCharsetOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceCharsetOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBInstanceCharsetAsync(const DescribeDBInstanceCharsetRequest& request, const DescribeDBInstanceCharsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceCharset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDBInstanceCharsetOutcomeCallable CdbClient::DescribeDBInstanceCharsetCallable(const DescribeDBInstanceCharsetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceCharsetOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceCharset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDBInstanceConfigOutcome CdbClient::DescribeDBInstanceConfig(const DescribeDBInstanceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceConfigResponse rsp = DescribeDBInstanceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceConfigOutcome(rsp);
        else
            return DescribeDBInstanceConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceConfigOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBInstanceConfigAsync(const DescribeDBInstanceConfigRequest& request, const DescribeDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDBInstanceConfigOutcomeCallable CdbClient::DescribeDBInstanceConfigCallable(const DescribeDBInstanceConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDBInstanceGTIDOutcome CdbClient::DescribeDBInstanceGTID(const DescribeDBInstanceGTIDRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceGTID");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceGTIDResponse rsp = DescribeDBInstanceGTIDResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceGTIDOutcome(rsp);
        else
            return DescribeDBInstanceGTIDOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceGTIDOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBInstanceGTIDAsync(const DescribeDBInstanceGTIDRequest& request, const DescribeDBInstanceGTIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceGTID(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDBInstanceGTIDOutcomeCallable CdbClient::DescribeDBInstanceGTIDCallable(const DescribeDBInstanceGTIDRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceGTIDOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceGTID(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDBInstanceInfoOutcome CdbClient::DescribeDBInstanceInfo(const DescribeDBInstanceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceInfoResponse rsp = DescribeDBInstanceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceInfoOutcome(rsp);
        else
            return DescribeDBInstanceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceInfoOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBInstanceInfoAsync(const DescribeDBInstanceInfoRequest& request, const DescribeDBInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDBInstanceInfoOutcomeCallable CdbClient::DescribeDBInstanceInfoCallable(const DescribeDBInstanceInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDBInstanceLogToCLSOutcome CdbClient::DescribeDBInstanceLogToCLS(const DescribeDBInstanceLogToCLSRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceLogToCLS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceLogToCLSResponse rsp = DescribeDBInstanceLogToCLSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceLogToCLSOutcome(rsp);
        else
            return DescribeDBInstanceLogToCLSOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceLogToCLSOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBInstanceLogToCLSAsync(const DescribeDBInstanceLogToCLSRequest& request, const DescribeDBInstanceLogToCLSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceLogToCLS(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDBInstanceLogToCLSOutcomeCallable CdbClient::DescribeDBInstanceLogToCLSCallable(const DescribeDBInstanceLogToCLSRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceLogToCLSOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceLogToCLS(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDBInstanceRebootTimeOutcome CdbClient::DescribeDBInstanceRebootTime(const DescribeDBInstanceRebootTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceRebootTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceRebootTimeResponse rsp = DescribeDBInstanceRebootTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceRebootTimeOutcome(rsp);
        else
            return DescribeDBInstanceRebootTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceRebootTimeOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBInstanceRebootTimeAsync(const DescribeDBInstanceRebootTimeRequest& request, const DescribeDBInstanceRebootTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceRebootTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDBInstanceRebootTimeOutcomeCallable CdbClient::DescribeDBInstanceRebootTimeCallable(const DescribeDBInstanceRebootTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceRebootTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceRebootTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDBInstancesOutcome CdbClient::DescribeDBInstances(const DescribeDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstancesResponse rsp = DescribeDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstancesOutcome(rsp);
        else
            return DescribeDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstancesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDBInstancesOutcomeCallable CdbClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDBPriceOutcome CdbClient::DescribeDBPrice(const DescribeDBPriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBPriceResponse rsp = DescribeDBPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBPriceOutcome(rsp);
        else
            return DescribeDBPriceOutcome(o.GetError());
    }
    else
    {
        return DescribeDBPriceOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBPriceAsync(const DescribeDBPriceRequest& request, const DescribeDBPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBPrice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDBPriceOutcomeCallable CdbClient::DescribeDBPriceCallable(const DescribeDBPriceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBPriceOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBPrice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDBSecurityGroupsOutcome CdbClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
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

void CdbClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDBSecurityGroupsOutcomeCallable CdbClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
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

CdbClient::DescribeDBSwitchRecordsOutcome CdbClient::DescribeDBSwitchRecords(const DescribeDBSwitchRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSwitchRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSwitchRecordsResponse rsp = DescribeDBSwitchRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSwitchRecordsOutcome(rsp);
        else
            return DescribeDBSwitchRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSwitchRecordsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDBSwitchRecordsAsync(const DescribeDBSwitchRecordsRequest& request, const DescribeDBSwitchRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSwitchRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDBSwitchRecordsOutcomeCallable CdbClient::DescribeDBSwitchRecordsCallable(const DescribeDBSwitchRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBSwitchRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBSwitchRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDataBackupOverviewOutcome CdbClient::DescribeDataBackupOverview(const DescribeDataBackupOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataBackupOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataBackupOverviewResponse rsp = DescribeDataBackupOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataBackupOverviewOutcome(rsp);
        else
            return DescribeDataBackupOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDataBackupOverviewOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDataBackupOverviewAsync(const DescribeDataBackupOverviewRequest& request, const DescribeDataBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataBackupOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDataBackupOverviewOutcomeCallable CdbClient::DescribeDataBackupOverviewCallable(const DescribeDataBackupOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataBackupOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataBackupOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDatabasesOutcome CdbClient::DescribeDatabases(const DescribeDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabasesResponse rsp = DescribeDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabasesOutcome(rsp);
        else
            return DescribeDatabasesOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabasesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDatabasesOutcomeCallable CdbClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabasesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDefaultParamsOutcome CdbClient::DescribeDefaultParams(const DescribeDefaultParamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefaultParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefaultParamsResponse rsp = DescribeDefaultParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefaultParamsOutcome(rsp);
        else
            return DescribeDefaultParamsOutcome(o.GetError());
    }
    else
    {
        return DescribeDefaultParamsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDefaultParamsAsync(const DescribeDefaultParamsRequest& request, const DescribeDefaultParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDefaultParams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDefaultParamsOutcomeCallable CdbClient::DescribeDefaultParamsCallable(const DescribeDefaultParamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDefaultParamsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDefaultParams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDeployGroupListOutcome CdbClient::DescribeDeployGroupList(const DescribeDeployGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeployGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeployGroupListResponse rsp = DescribeDeployGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeployGroupListOutcome(rsp);
        else
            return DescribeDeployGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeployGroupListOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDeployGroupListAsync(const DescribeDeployGroupListRequest& request, const DescribeDeployGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeployGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDeployGroupListOutcomeCallable CdbClient::DescribeDeployGroupListCallable(const DescribeDeployGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeployGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeployGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeDeviceMonitorInfoOutcome CdbClient::DescribeDeviceMonitorInfo(const DescribeDeviceMonitorInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceMonitorInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceMonitorInfoResponse rsp = DescribeDeviceMonitorInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceMonitorInfoOutcome(rsp);
        else
            return DescribeDeviceMonitorInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceMonitorInfoOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeDeviceMonitorInfoAsync(const DescribeDeviceMonitorInfoRequest& request, const DescribeDeviceMonitorInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceMonitorInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeDeviceMonitorInfoOutcomeCallable CdbClient::DescribeDeviceMonitorInfoCallable(const DescribeDeviceMonitorInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceMonitorInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceMonitorInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeErrorLogDataOutcome CdbClient::DescribeErrorLogData(const DescribeErrorLogDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeErrorLogData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeErrorLogDataResponse rsp = DescribeErrorLogDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeErrorLogDataOutcome(rsp);
        else
            return DescribeErrorLogDataOutcome(o.GetError());
    }
    else
    {
        return DescribeErrorLogDataOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeErrorLogDataAsync(const DescribeErrorLogDataRequest& request, const DescribeErrorLogDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeErrorLogData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeErrorLogDataOutcomeCallable CdbClient::DescribeErrorLogDataCallable(const DescribeErrorLogDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeErrorLogDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeErrorLogData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeInstanceAlarmEventsOutcome CdbClient::DescribeInstanceAlarmEvents(const DescribeInstanceAlarmEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceAlarmEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceAlarmEventsResponse rsp = DescribeInstanceAlarmEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceAlarmEventsOutcome(rsp);
        else
            return DescribeInstanceAlarmEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceAlarmEventsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeInstanceAlarmEventsAsync(const DescribeInstanceAlarmEventsRequest& request, const DescribeInstanceAlarmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceAlarmEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeInstanceAlarmEventsOutcomeCallable CdbClient::DescribeInstanceAlarmEventsCallable(const DescribeInstanceAlarmEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceAlarmEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceAlarmEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeInstanceParamRecordsOutcome CdbClient::DescribeInstanceParamRecords(const DescribeInstanceParamRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceParamRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceParamRecordsResponse rsp = DescribeInstanceParamRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceParamRecordsOutcome(rsp);
        else
            return DescribeInstanceParamRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceParamRecordsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeInstanceParamRecordsAsync(const DescribeInstanceParamRecordsRequest& request, const DescribeInstanceParamRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceParamRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeInstanceParamRecordsOutcomeCallable CdbClient::DescribeInstanceParamRecordsCallable(const DescribeInstanceParamRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceParamRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceParamRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeInstanceParamsOutcome CdbClient::DescribeInstanceParams(const DescribeInstanceParamsRequest &request)
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

void CdbClient::DescribeInstanceParamsAsync(const DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceParams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeInstanceParamsOutcomeCallable CdbClient::DescribeInstanceParamsCallable(const DescribeInstanceParamsRequest &request)
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

CdbClient::DescribeInstanceUpgradeCheckJobOutcome CdbClient::DescribeInstanceUpgradeCheckJob(const DescribeInstanceUpgradeCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceUpgradeCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceUpgradeCheckJobResponse rsp = DescribeInstanceUpgradeCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceUpgradeCheckJobOutcome(rsp);
        else
            return DescribeInstanceUpgradeCheckJobOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceUpgradeCheckJobOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeInstanceUpgradeCheckJobAsync(const DescribeInstanceUpgradeCheckJobRequest& request, const DescribeInstanceUpgradeCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceUpgradeCheckJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeInstanceUpgradeCheckJobOutcomeCallable CdbClient::DescribeInstanceUpgradeCheckJobCallable(const DescribeInstanceUpgradeCheckJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceUpgradeCheckJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceUpgradeCheckJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeInstanceUpgradeTypeOutcome CdbClient::DescribeInstanceUpgradeType(const DescribeInstanceUpgradeTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceUpgradeType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceUpgradeTypeResponse rsp = DescribeInstanceUpgradeTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceUpgradeTypeOutcome(rsp);
        else
            return DescribeInstanceUpgradeTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceUpgradeTypeOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeInstanceUpgradeTypeAsync(const DescribeInstanceUpgradeTypeRequest& request, const DescribeInstanceUpgradeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceUpgradeType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeInstanceUpgradeTypeOutcomeCallable CdbClient::DescribeInstanceUpgradeTypeCallable(const DescribeInstanceUpgradeTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceUpgradeTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceUpgradeType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeLocalBinlogConfigOutcome CdbClient::DescribeLocalBinlogConfig(const DescribeLocalBinlogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLocalBinlogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLocalBinlogConfigResponse rsp = DescribeLocalBinlogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLocalBinlogConfigOutcome(rsp);
        else
            return DescribeLocalBinlogConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeLocalBinlogConfigOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeLocalBinlogConfigAsync(const DescribeLocalBinlogConfigRequest& request, const DescribeLocalBinlogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLocalBinlogConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeLocalBinlogConfigOutcomeCallable CdbClient::DescribeLocalBinlogConfigCallable(const DescribeLocalBinlogConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLocalBinlogConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeLocalBinlogConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeParamTemplateInfoOutcome CdbClient::DescribeParamTemplateInfo(const DescribeParamTemplateInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParamTemplateInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParamTemplateInfoResponse rsp = DescribeParamTemplateInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParamTemplateInfoOutcome(rsp);
        else
            return DescribeParamTemplateInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeParamTemplateInfoOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeParamTemplateInfoAsync(const DescribeParamTemplateInfoRequest& request, const DescribeParamTemplateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeParamTemplateInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeParamTemplateInfoOutcomeCallable CdbClient::DescribeParamTemplateInfoCallable(const DescribeParamTemplateInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeParamTemplateInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeParamTemplateInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeParamTemplatesOutcome CdbClient::DescribeParamTemplates(const DescribeParamTemplatesRequest &request)
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

void CdbClient::DescribeParamTemplatesAsync(const DescribeParamTemplatesRequest& request, const DescribeParamTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeParamTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeParamTemplatesOutcomeCallable CdbClient::DescribeParamTemplatesCallable(const DescribeParamTemplatesRequest &request)
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

CdbClient::DescribeProjectSecurityGroupsOutcome CdbClient::DescribeProjectSecurityGroups(const DescribeProjectSecurityGroupsRequest &request)
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

void CdbClient::DescribeProjectSecurityGroupsAsync(const DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeProjectSecurityGroupsOutcomeCallable CdbClient::DescribeProjectSecurityGroupsCallable(const DescribeProjectSecurityGroupsRequest &request)
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

CdbClient::DescribeProxyCustomConfOutcome CdbClient::DescribeProxyCustomConf(const DescribeProxyCustomConfRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxyCustomConf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxyCustomConfResponse rsp = DescribeProxyCustomConfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxyCustomConfOutcome(rsp);
        else
            return DescribeProxyCustomConfOutcome(o.GetError());
    }
    else
    {
        return DescribeProxyCustomConfOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeProxyCustomConfAsync(const DescribeProxyCustomConfRequest& request, const DescribeProxyCustomConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxyCustomConf(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeProxyCustomConfOutcomeCallable CdbClient::DescribeProxyCustomConfCallable(const DescribeProxyCustomConfRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxyCustomConfOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxyCustomConf(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeProxySupportParamOutcome CdbClient::DescribeProxySupportParam(const DescribeProxySupportParamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxySupportParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxySupportParamResponse rsp = DescribeProxySupportParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxySupportParamOutcome(rsp);
        else
            return DescribeProxySupportParamOutcome(o.GetError());
    }
    else
    {
        return DescribeProxySupportParamOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeProxySupportParamAsync(const DescribeProxySupportParamRequest& request, const DescribeProxySupportParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxySupportParam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeProxySupportParamOutcomeCallable CdbClient::DescribeProxySupportParamCallable(const DescribeProxySupportParamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxySupportParamOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxySupportParam(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeRemoteBackupConfigOutcome CdbClient::DescribeRemoteBackupConfig(const DescribeRemoteBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRemoteBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRemoteBackupConfigResponse rsp = DescribeRemoteBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRemoteBackupConfigOutcome(rsp);
        else
            return DescribeRemoteBackupConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeRemoteBackupConfigOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeRemoteBackupConfigAsync(const DescribeRemoteBackupConfigRequest& request, const DescribeRemoteBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRemoteBackupConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeRemoteBackupConfigOutcomeCallable CdbClient::DescribeRemoteBackupConfigCallable(const DescribeRemoteBackupConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRemoteBackupConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeRemoteBackupConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeRoGroupsOutcome CdbClient::DescribeRoGroups(const DescribeRoGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoGroupsResponse rsp = DescribeRoGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoGroupsOutcome(rsp);
        else
            return DescribeRoGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeRoGroupsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeRoGroupsAsync(const DescribeRoGroupsRequest& request, const DescribeRoGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeRoGroupsOutcomeCallable CdbClient::DescribeRoGroupsCallable(const DescribeRoGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeRoMinScaleOutcome CdbClient::DescribeRoMinScale(const DescribeRoMinScaleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoMinScale");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoMinScaleResponse rsp = DescribeRoMinScaleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoMinScaleOutcome(rsp);
        else
            return DescribeRoMinScaleOutcome(o.GetError());
    }
    else
    {
        return DescribeRoMinScaleOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeRoMinScaleAsync(const DescribeRoMinScaleRequest& request, const DescribeRoMinScaleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoMinScale(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeRoMinScaleOutcomeCallable CdbClient::DescribeRoMinScaleCallable(const DescribeRoMinScaleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoMinScaleOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoMinScale(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeRollbackRangeTimeOutcome CdbClient::DescribeRollbackRangeTime(const DescribeRollbackRangeTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRollbackRangeTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRollbackRangeTimeResponse rsp = DescribeRollbackRangeTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRollbackRangeTimeOutcome(rsp);
        else
            return DescribeRollbackRangeTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeRollbackRangeTimeOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeRollbackRangeTimeAsync(const DescribeRollbackRangeTimeRequest& request, const DescribeRollbackRangeTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRollbackRangeTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeRollbackRangeTimeOutcomeCallable CdbClient::DescribeRollbackRangeTimeCallable(const DescribeRollbackRangeTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRollbackRangeTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeRollbackRangeTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeRollbackTaskDetailOutcome CdbClient::DescribeRollbackTaskDetail(const DescribeRollbackTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRollbackTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRollbackTaskDetailResponse rsp = DescribeRollbackTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRollbackTaskDetailOutcome(rsp);
        else
            return DescribeRollbackTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRollbackTaskDetailOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeRollbackTaskDetailAsync(const DescribeRollbackTaskDetailRequest& request, const DescribeRollbackTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRollbackTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeRollbackTaskDetailOutcomeCallable CdbClient::DescribeRollbackTaskDetailCallable(const DescribeRollbackTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRollbackTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRollbackTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeSSLStatusOutcome CdbClient::DescribeSSLStatus(const DescribeSSLStatusRequest &request)
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

void CdbClient::DescribeSSLStatusAsync(const DescribeSSLStatusRequest& request, const DescribeSSLStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSSLStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeSSLStatusOutcomeCallable CdbClient::DescribeSSLStatusCallable(const DescribeSSLStatusRequest &request)
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

CdbClient::DescribeSlowLogDataOutcome CdbClient::DescribeSlowLogData(const DescribeSlowLogDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogDataResponse rsp = DescribeSlowLogDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogDataOutcome(rsp);
        else
            return DescribeSlowLogDataOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogDataOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeSlowLogDataAsync(const DescribeSlowLogDataRequest& request, const DescribeSlowLogDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeSlowLogDataOutcomeCallable CdbClient::DescribeSlowLogDataCallable(const DescribeSlowLogDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeSlowLogsOutcome CdbClient::DescribeSlowLogs(const DescribeSlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogsResponse rsp = DescribeSlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogsOutcome(rsp);
        else
            return DescribeSlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeSlowLogsAsync(const DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeSlowLogsOutcomeCallable CdbClient::DescribeSlowLogsCallable(const DescribeSlowLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeSupportedPrivilegesOutcome CdbClient::DescribeSupportedPrivileges(const DescribeSupportedPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSupportedPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSupportedPrivilegesResponse rsp = DescribeSupportedPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSupportedPrivilegesOutcome(rsp);
        else
            return DescribeSupportedPrivilegesOutcome(o.GetError());
    }
    else
    {
        return DescribeSupportedPrivilegesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeSupportedPrivilegesAsync(const DescribeSupportedPrivilegesRequest& request, const DescribeSupportedPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSupportedPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeSupportedPrivilegesOutcomeCallable CdbClient::DescribeSupportedPrivilegesCallable(const DescribeSupportedPrivilegesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSupportedPrivilegesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSupportedPrivileges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeTableColumnsOutcome CdbClient::DescribeTableColumns(const DescribeTableColumnsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableColumns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableColumnsResponse rsp = DescribeTableColumnsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableColumnsOutcome(rsp);
        else
            return DescribeTableColumnsOutcome(o.GetError());
    }
    else
    {
        return DescribeTableColumnsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeTableColumnsAsync(const DescribeTableColumnsRequest& request, const DescribeTableColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableColumns(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeTableColumnsOutcomeCallable CdbClient::DescribeTableColumnsCallable(const DescribeTableColumnsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableColumnsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableColumns(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeTablesOutcome CdbClient::DescribeTables(const DescribeTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablesResponse rsp = DescribeTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablesOutcome(rsp);
        else
            return DescribeTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeTablesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeTablesOutcomeCallable CdbClient::DescribeTablesCallable(const DescribeTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeTagsOfInstanceIdsOutcome CdbClient::DescribeTagsOfInstanceIds(const DescribeTagsOfInstanceIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagsOfInstanceIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagsOfInstanceIdsResponse rsp = DescribeTagsOfInstanceIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagsOfInstanceIdsOutcome(rsp);
        else
            return DescribeTagsOfInstanceIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeTagsOfInstanceIdsOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeTagsOfInstanceIdsAsync(const DescribeTagsOfInstanceIdsRequest& request, const DescribeTagsOfInstanceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTagsOfInstanceIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeTagsOfInstanceIdsOutcomeCallable CdbClient::DescribeTagsOfInstanceIdsCallable(const DescribeTagsOfInstanceIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagsOfInstanceIdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTagsOfInstanceIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeTasksOutcome CdbClient::DescribeTasks(const DescribeTasksRequest &request)
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

void CdbClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeTasksOutcomeCallable CdbClient::DescribeTasksCallable(const DescribeTasksRequest &request)
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

CdbClient::DescribeTimeWindowOutcome CdbClient::DescribeTimeWindow(const DescribeTimeWindowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTimeWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTimeWindowResponse rsp = DescribeTimeWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTimeWindowOutcome(rsp);
        else
            return DescribeTimeWindowOutcome(o.GetError());
    }
    else
    {
        return DescribeTimeWindowOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeTimeWindowAsync(const DescribeTimeWindowRequest& request, const DescribeTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTimeWindow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeTimeWindowOutcomeCallable CdbClient::DescribeTimeWindowCallable(const DescribeTimeWindowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTimeWindowOutcome()>>(
        [this, request]()
        {
            return this->DescribeTimeWindow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DescribeUploadedFilesOutcome CdbClient::DescribeUploadedFiles(const DescribeUploadedFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUploadedFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUploadedFilesResponse rsp = DescribeUploadedFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUploadedFilesOutcome(rsp);
        else
            return DescribeUploadedFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeUploadedFilesOutcome(outcome.GetError());
    }
}

void CdbClient::DescribeUploadedFilesAsync(const DescribeUploadedFilesRequest& request, const DescribeUploadedFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUploadedFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DescribeUploadedFilesOutcomeCallable CdbClient::DescribeUploadedFilesCallable(const DescribeUploadedFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUploadedFilesOutcome()>>(
        [this, request]()
        {
            return this->DescribeUploadedFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::DisassociateSecurityGroupsOutcome CdbClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
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

void CdbClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::DisassociateSecurityGroupsOutcomeCallable CdbClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
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

CdbClient::InquiryPriceUpgradeInstancesOutcome CdbClient::InquiryPriceUpgradeInstances(const InquiryPriceUpgradeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceUpgradeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceUpgradeInstancesResponse rsp = InquiryPriceUpgradeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceUpgradeInstancesOutcome(rsp);
        else
            return InquiryPriceUpgradeInstancesOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceUpgradeInstancesOutcome(outcome.GetError());
    }
}

void CdbClient::InquiryPriceUpgradeInstancesAsync(const InquiryPriceUpgradeInstancesRequest& request, const InquiryPriceUpgradeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceUpgradeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::InquiryPriceUpgradeInstancesOutcomeCallable CdbClient::InquiryPriceUpgradeInstancesCallable(const InquiryPriceUpgradeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceUpgradeInstancesOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceUpgradeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::IsolateDBInstanceOutcome CdbClient::IsolateDBInstance(const IsolateDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateDBInstanceResponse rsp = IsolateDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateDBInstanceOutcome(rsp);
        else
            return IsolateDBInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateDBInstanceOutcome(outcome.GetError());
    }
}

void CdbClient::IsolateDBInstanceAsync(const IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::IsolateDBInstanceOutcomeCallable CdbClient::IsolateDBInstanceCallable(const IsolateDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->IsolateDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyAccountDescriptionOutcome CdbClient::ModifyAccountDescription(const ModifyAccountDescriptionRequest &request)
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

void CdbClient::ModifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountDescription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyAccountDescriptionOutcomeCallable CdbClient::ModifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request)
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

CdbClient::ModifyAccountHostOutcome CdbClient::ModifyAccountHost(const ModifyAccountHostRequest &request)
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

void CdbClient::ModifyAccountHostAsync(const ModifyAccountHostRequest& request, const ModifyAccountHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyAccountHostOutcomeCallable CdbClient::ModifyAccountHostCallable(const ModifyAccountHostRequest &request)
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

CdbClient::ModifyAccountMaxUserConnectionsOutcome CdbClient::ModifyAccountMaxUserConnections(const ModifyAccountMaxUserConnectionsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountMaxUserConnections");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountMaxUserConnectionsResponse rsp = ModifyAccountMaxUserConnectionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountMaxUserConnectionsOutcome(rsp);
        else
            return ModifyAccountMaxUserConnectionsOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountMaxUserConnectionsOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyAccountMaxUserConnectionsAsync(const ModifyAccountMaxUserConnectionsRequest& request, const ModifyAccountMaxUserConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountMaxUserConnections(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyAccountMaxUserConnectionsOutcomeCallable CdbClient::ModifyAccountMaxUserConnectionsCallable(const ModifyAccountMaxUserConnectionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccountMaxUserConnectionsOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccountMaxUserConnections(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyAccountPasswordOutcome CdbClient::ModifyAccountPassword(const ModifyAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountPasswordResponse rsp = ModifyAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountPasswordOutcome(rsp);
        else
            return ModifyAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountPasswordOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyAccountPasswordAsync(const ModifyAccountPasswordRequest& request, const ModifyAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyAccountPasswordOutcomeCallable CdbClient::ModifyAccountPasswordCallable(const ModifyAccountPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccountPasswordOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccountPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyAccountPrivilegesOutcome CdbClient::ModifyAccountPrivileges(const ModifyAccountPrivilegesRequest &request)
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

void CdbClient::ModifyAccountPrivilegesAsync(const ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyAccountPrivilegesOutcomeCallable CdbClient::ModifyAccountPrivilegesCallable(const ModifyAccountPrivilegesRequest &request)
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

CdbClient::ModifyAuditConfigOutcome CdbClient::ModifyAuditConfig(const ModifyAuditConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAuditConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAuditConfigResponse rsp = ModifyAuditConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAuditConfigOutcome(rsp);
        else
            return ModifyAuditConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyAuditConfigOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyAuditConfigAsync(const ModifyAuditConfigRequest& request, const ModifyAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAuditConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyAuditConfigOutcomeCallable CdbClient::ModifyAuditConfigCallable(const ModifyAuditConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAuditConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyAuditConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyAuditRuleOutcome CdbClient::ModifyAuditRule(const ModifyAuditRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAuditRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAuditRuleResponse rsp = ModifyAuditRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAuditRuleOutcome(rsp);
        else
            return ModifyAuditRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyAuditRuleOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyAuditRuleAsync(const ModifyAuditRuleRequest& request, const ModifyAuditRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAuditRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyAuditRuleOutcomeCallable CdbClient::ModifyAuditRuleCallable(const ModifyAuditRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAuditRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyAuditRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyAuditRuleTemplatesOutcome CdbClient::ModifyAuditRuleTemplates(const ModifyAuditRuleTemplatesRequest &request)
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

void CdbClient::ModifyAuditRuleTemplatesAsync(const ModifyAuditRuleTemplatesRequest& request, const ModifyAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAuditRuleTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyAuditRuleTemplatesOutcomeCallable CdbClient::ModifyAuditRuleTemplatesCallable(const ModifyAuditRuleTemplatesRequest &request)
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

CdbClient::ModifyAuditServiceOutcome CdbClient::ModifyAuditService(const ModifyAuditServiceRequest &request)
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

void CdbClient::ModifyAuditServiceAsync(const ModifyAuditServiceRequest& request, const ModifyAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAuditService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyAuditServiceOutcomeCallable CdbClient::ModifyAuditServiceCallable(const ModifyAuditServiceRequest &request)
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

CdbClient::ModifyAutoRenewFlagOutcome CdbClient::ModifyAutoRenewFlag(const ModifyAutoRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoRenewFlagResponse rsp = ModifyAutoRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoRenewFlagOutcome(rsp);
        else
            return ModifyAutoRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoRenewFlagOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyAutoRenewFlagAsync(const ModifyAutoRenewFlagRequest& request, const ModifyAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAutoRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyAutoRenewFlagOutcomeCallable CdbClient::ModifyAutoRenewFlagCallable(const ModifyAutoRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAutoRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyAutoRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyBackupConfigOutcome CdbClient::ModifyBackupConfig(const ModifyBackupConfigRequest &request)
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

void CdbClient::ModifyBackupConfigAsync(const ModifyBackupConfigRequest& request, const ModifyBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBackupConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyBackupConfigOutcomeCallable CdbClient::ModifyBackupConfigCallable(const ModifyBackupConfigRequest &request)
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

CdbClient::ModifyBackupDownloadRestrictionOutcome CdbClient::ModifyBackupDownloadRestriction(const ModifyBackupDownloadRestrictionRequest &request)
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

void CdbClient::ModifyBackupDownloadRestrictionAsync(const ModifyBackupDownloadRestrictionRequest& request, const ModifyBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBackupDownloadRestriction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyBackupDownloadRestrictionOutcomeCallable CdbClient::ModifyBackupDownloadRestrictionCallable(const ModifyBackupDownloadRestrictionRequest &request)
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

CdbClient::ModifyBackupEncryptionStatusOutcome CdbClient::ModifyBackupEncryptionStatus(const ModifyBackupEncryptionStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupEncryptionStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupEncryptionStatusResponse rsp = ModifyBackupEncryptionStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupEncryptionStatusOutcome(rsp);
        else
            return ModifyBackupEncryptionStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupEncryptionStatusOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyBackupEncryptionStatusAsync(const ModifyBackupEncryptionStatusRequest& request, const ModifyBackupEncryptionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBackupEncryptionStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyBackupEncryptionStatusOutcomeCallable CdbClient::ModifyBackupEncryptionStatusCallable(const ModifyBackupEncryptionStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBackupEncryptionStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyBackupEncryptionStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyCdbProxyAddressDescOutcome CdbClient::ModifyCdbProxyAddressDesc(const ModifyCdbProxyAddressDescRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCdbProxyAddressDesc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCdbProxyAddressDescResponse rsp = ModifyCdbProxyAddressDescResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCdbProxyAddressDescOutcome(rsp);
        else
            return ModifyCdbProxyAddressDescOutcome(o.GetError());
    }
    else
    {
        return ModifyCdbProxyAddressDescOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyCdbProxyAddressDescAsync(const ModifyCdbProxyAddressDescRequest& request, const ModifyCdbProxyAddressDescAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCdbProxyAddressDesc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyCdbProxyAddressDescOutcomeCallable CdbClient::ModifyCdbProxyAddressDescCallable(const ModifyCdbProxyAddressDescRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCdbProxyAddressDescOutcome()>>(
        [this, request]()
        {
            return this->ModifyCdbProxyAddressDesc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyCdbProxyAddressVipAndVPortOutcome CdbClient::ModifyCdbProxyAddressVipAndVPort(const ModifyCdbProxyAddressVipAndVPortRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCdbProxyAddressVipAndVPort");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCdbProxyAddressVipAndVPortResponse rsp = ModifyCdbProxyAddressVipAndVPortResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCdbProxyAddressVipAndVPortOutcome(rsp);
        else
            return ModifyCdbProxyAddressVipAndVPortOutcome(o.GetError());
    }
    else
    {
        return ModifyCdbProxyAddressVipAndVPortOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyCdbProxyAddressVipAndVPortAsync(const ModifyCdbProxyAddressVipAndVPortRequest& request, const ModifyCdbProxyAddressVipAndVPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCdbProxyAddressVipAndVPort(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyCdbProxyAddressVipAndVPortOutcomeCallable CdbClient::ModifyCdbProxyAddressVipAndVPortCallable(const ModifyCdbProxyAddressVipAndVPortRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCdbProxyAddressVipAndVPortOutcome()>>(
        [this, request]()
        {
            return this->ModifyCdbProxyAddressVipAndVPort(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyCdbProxyParamOutcome CdbClient::ModifyCdbProxyParam(const ModifyCdbProxyParamRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCdbProxyParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCdbProxyParamResponse rsp = ModifyCdbProxyParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCdbProxyParamOutcome(rsp);
        else
            return ModifyCdbProxyParamOutcome(o.GetError());
    }
    else
    {
        return ModifyCdbProxyParamOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyCdbProxyParamAsync(const ModifyCdbProxyParamRequest& request, const ModifyCdbProxyParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCdbProxyParam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyCdbProxyParamOutcomeCallable CdbClient::ModifyCdbProxyParamCallable(const ModifyCdbProxyParamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCdbProxyParamOutcome()>>(
        [this, request]()
        {
            return this->ModifyCdbProxyParam(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyDBInstanceLogToCLSOutcome CdbClient::ModifyDBInstanceLogToCLS(const ModifyDBInstanceLogToCLSRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceLogToCLS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceLogToCLSResponse rsp = ModifyDBInstanceLogToCLSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceLogToCLSOutcome(rsp);
        else
            return ModifyDBInstanceLogToCLSOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceLogToCLSOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyDBInstanceLogToCLSAsync(const ModifyDBInstanceLogToCLSRequest& request, const ModifyDBInstanceLogToCLSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceLogToCLS(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyDBInstanceLogToCLSOutcomeCallable CdbClient::ModifyDBInstanceLogToCLSCallable(const ModifyDBInstanceLogToCLSRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceLogToCLSOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceLogToCLS(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyDBInstanceNameOutcome CdbClient::ModifyDBInstanceName(const ModifyDBInstanceNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceNameResponse rsp = ModifyDBInstanceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceNameOutcome(rsp);
        else
            return ModifyDBInstanceNameOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceNameOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyDBInstanceNameAsync(const ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyDBInstanceNameOutcomeCallable CdbClient::ModifyDBInstanceNameCallable(const ModifyDBInstanceNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyDBInstanceProjectOutcome CdbClient::ModifyDBInstanceProject(const ModifyDBInstanceProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceProjectResponse rsp = ModifyDBInstanceProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceProjectOutcome(rsp);
        else
            return ModifyDBInstanceProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceProjectOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyDBInstanceProjectAsync(const ModifyDBInstanceProjectRequest& request, const ModifyDBInstanceProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyDBInstanceProjectOutcomeCallable CdbClient::ModifyDBInstanceProjectCallable(const ModifyDBInstanceProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyDBInstanceReadOnlyStatusOutcome CdbClient::ModifyDBInstanceReadOnlyStatus(const ModifyDBInstanceReadOnlyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceReadOnlyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceReadOnlyStatusResponse rsp = ModifyDBInstanceReadOnlyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceReadOnlyStatusOutcome(rsp);
        else
            return ModifyDBInstanceReadOnlyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceReadOnlyStatusOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyDBInstanceReadOnlyStatusAsync(const ModifyDBInstanceReadOnlyStatusRequest& request, const ModifyDBInstanceReadOnlyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceReadOnlyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyDBInstanceReadOnlyStatusOutcomeCallable CdbClient::ModifyDBInstanceReadOnlyStatusCallable(const ModifyDBInstanceReadOnlyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceReadOnlyStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceReadOnlyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyDBInstanceSecurityGroupsOutcome CdbClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
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

void CdbClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyDBInstanceSecurityGroupsOutcomeCallable CdbClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
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

CdbClient::ModifyDBInstanceVipVportOutcome CdbClient::ModifyDBInstanceVipVport(const ModifyDBInstanceVipVportRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceVipVport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceVipVportResponse rsp = ModifyDBInstanceVipVportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceVipVportOutcome(rsp);
        else
            return ModifyDBInstanceVipVportOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceVipVportOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyDBInstanceVipVportAsync(const ModifyDBInstanceVipVportRequest& request, const ModifyDBInstanceVipVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceVipVport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyDBInstanceVipVportOutcomeCallable CdbClient::ModifyDBInstanceVipVportCallable(const ModifyDBInstanceVipVportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceVipVportOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceVipVport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyInstanceParamOutcome CdbClient::ModifyInstanceParam(const ModifyInstanceParamRequest &request)
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

void CdbClient::ModifyInstanceParamAsync(const ModifyInstanceParamRequest& request, const ModifyInstanceParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceParam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyInstanceParamOutcomeCallable CdbClient::ModifyInstanceParamCallable(const ModifyInstanceParamRequest &request)
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

CdbClient::ModifyInstancePasswordComplexityOutcome CdbClient::ModifyInstancePasswordComplexity(const ModifyInstancePasswordComplexityRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancePasswordComplexity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancePasswordComplexityResponse rsp = ModifyInstancePasswordComplexityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancePasswordComplexityOutcome(rsp);
        else
            return ModifyInstancePasswordComplexityOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancePasswordComplexityOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyInstancePasswordComplexityAsync(const ModifyInstancePasswordComplexityRequest& request, const ModifyInstancePasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstancePasswordComplexity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyInstancePasswordComplexityOutcomeCallable CdbClient::ModifyInstancePasswordComplexityCallable(const ModifyInstancePasswordComplexityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstancePasswordComplexityOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstancePasswordComplexity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyInstanceTagOutcome CdbClient::ModifyInstanceTag(const ModifyInstanceTagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceTagResponse rsp = ModifyInstanceTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceTagOutcome(rsp);
        else
            return ModifyInstanceTagOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceTagOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyInstanceTagAsync(const ModifyInstanceTagRequest& request, const ModifyInstanceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyInstanceTagOutcomeCallable CdbClient::ModifyInstanceTagCallable(const ModifyInstanceTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceTagOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyLocalBinlogConfigOutcome CdbClient::ModifyLocalBinlogConfig(const ModifyLocalBinlogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLocalBinlogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLocalBinlogConfigResponse rsp = ModifyLocalBinlogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLocalBinlogConfigOutcome(rsp);
        else
            return ModifyLocalBinlogConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyLocalBinlogConfigOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyLocalBinlogConfigAsync(const ModifyLocalBinlogConfigRequest& request, const ModifyLocalBinlogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLocalBinlogConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyLocalBinlogConfigOutcomeCallable CdbClient::ModifyLocalBinlogConfigCallable(const ModifyLocalBinlogConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLocalBinlogConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyLocalBinlogConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyNameOrDescByDpIdOutcome CdbClient::ModifyNameOrDescByDpId(const ModifyNameOrDescByDpIdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNameOrDescByDpId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNameOrDescByDpIdResponse rsp = ModifyNameOrDescByDpIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNameOrDescByDpIdOutcome(rsp);
        else
            return ModifyNameOrDescByDpIdOutcome(o.GetError());
    }
    else
    {
        return ModifyNameOrDescByDpIdOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyNameOrDescByDpIdAsync(const ModifyNameOrDescByDpIdRequest& request, const ModifyNameOrDescByDpIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNameOrDescByDpId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyNameOrDescByDpIdOutcomeCallable CdbClient::ModifyNameOrDescByDpIdCallable(const ModifyNameOrDescByDpIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNameOrDescByDpIdOutcome()>>(
        [this, request]()
        {
            return this->ModifyNameOrDescByDpId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyParamTemplateOutcome CdbClient::ModifyParamTemplate(const ModifyParamTemplateRequest &request)
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

void CdbClient::ModifyParamTemplateAsync(const ModifyParamTemplateRequest& request, const ModifyParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyParamTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyParamTemplateOutcomeCallable CdbClient::ModifyParamTemplateCallable(const ModifyParamTemplateRequest &request)
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

CdbClient::ModifyProtectModeOutcome CdbClient::ModifyProtectMode(const ModifyProtectModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProtectMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProtectModeResponse rsp = ModifyProtectModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProtectModeOutcome(rsp);
        else
            return ModifyProtectModeOutcome(o.GetError());
    }
    else
    {
        return ModifyProtectModeOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyProtectModeAsync(const ModifyProtectModeRequest& request, const ModifyProtectModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProtectMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyProtectModeOutcomeCallable CdbClient::ModifyProtectModeCallable(const ModifyProtectModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProtectModeOutcome()>>(
        [this, request]()
        {
            return this->ModifyProtectMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyRemoteBackupConfigOutcome CdbClient::ModifyRemoteBackupConfig(const ModifyRemoteBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRemoteBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRemoteBackupConfigResponse rsp = ModifyRemoteBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRemoteBackupConfigOutcome(rsp);
        else
            return ModifyRemoteBackupConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyRemoteBackupConfigOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyRemoteBackupConfigAsync(const ModifyRemoteBackupConfigRequest& request, const ModifyRemoteBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRemoteBackupConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyRemoteBackupConfigOutcomeCallable CdbClient::ModifyRemoteBackupConfigCallable(const ModifyRemoteBackupConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRemoteBackupConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyRemoteBackupConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyRoGroupInfoOutcome CdbClient::ModifyRoGroupInfo(const ModifyRoGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRoGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoGroupInfoResponse rsp = ModifyRoGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoGroupInfoOutcome(rsp);
        else
            return ModifyRoGroupInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyRoGroupInfoOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyRoGroupInfoAsync(const ModifyRoGroupInfoRequest& request, const ModifyRoGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRoGroupInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyRoGroupInfoOutcomeCallable CdbClient::ModifyRoGroupInfoCallable(const ModifyRoGroupInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRoGroupInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyRoGroupInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ModifyTimeWindowOutcome CdbClient::ModifyTimeWindow(const ModifyTimeWindowRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTimeWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTimeWindowResponse rsp = ModifyTimeWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTimeWindowOutcome(rsp);
        else
            return ModifyTimeWindowOutcome(o.GetError());
    }
    else
    {
        return ModifyTimeWindowOutcome(outcome.GetError());
    }
}

void CdbClient::ModifyTimeWindowAsync(const ModifyTimeWindowRequest& request, const ModifyTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTimeWindow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ModifyTimeWindowOutcomeCallable CdbClient::ModifyTimeWindowCallable(const ModifyTimeWindowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTimeWindowOutcome()>>(
        [this, request]()
        {
            return this->ModifyTimeWindow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::OfflineIsolatedInstancesOutcome CdbClient::OfflineIsolatedInstances(const OfflineIsolatedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "OfflineIsolatedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OfflineIsolatedInstancesResponse rsp = OfflineIsolatedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OfflineIsolatedInstancesOutcome(rsp);
        else
            return OfflineIsolatedInstancesOutcome(o.GetError());
    }
    else
    {
        return OfflineIsolatedInstancesOutcome(outcome.GetError());
    }
}

void CdbClient::OfflineIsolatedInstancesAsync(const OfflineIsolatedInstancesRequest& request, const OfflineIsolatedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OfflineIsolatedInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::OfflineIsolatedInstancesOutcomeCallable CdbClient::OfflineIsolatedInstancesCallable(const OfflineIsolatedInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OfflineIsolatedInstancesOutcome()>>(
        [this, request]()
        {
            return this->OfflineIsolatedInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::OpenAuditServiceOutcome CdbClient::OpenAuditService(const OpenAuditServiceRequest &request)
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

void CdbClient::OpenAuditServiceAsync(const OpenAuditServiceRequest& request, const OpenAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenAuditService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::OpenAuditServiceOutcomeCallable CdbClient::OpenAuditServiceCallable(const OpenAuditServiceRequest &request)
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

CdbClient::OpenDBInstanceEncryptionOutcome CdbClient::OpenDBInstanceEncryption(const OpenDBInstanceEncryptionRequest &request)
{
    auto outcome = MakeRequest(request, "OpenDBInstanceEncryption");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenDBInstanceEncryptionResponse rsp = OpenDBInstanceEncryptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenDBInstanceEncryptionOutcome(rsp);
        else
            return OpenDBInstanceEncryptionOutcome(o.GetError());
    }
    else
    {
        return OpenDBInstanceEncryptionOutcome(outcome.GetError());
    }
}

void CdbClient::OpenDBInstanceEncryptionAsync(const OpenDBInstanceEncryptionRequest& request, const OpenDBInstanceEncryptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenDBInstanceEncryption(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::OpenDBInstanceEncryptionOutcomeCallable CdbClient::OpenDBInstanceEncryptionCallable(const OpenDBInstanceEncryptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenDBInstanceEncryptionOutcome()>>(
        [this, request]()
        {
            return this->OpenDBInstanceEncryption(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::OpenDBInstanceGTIDOutcome CdbClient::OpenDBInstanceGTID(const OpenDBInstanceGTIDRequest &request)
{
    auto outcome = MakeRequest(request, "OpenDBInstanceGTID");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenDBInstanceGTIDResponse rsp = OpenDBInstanceGTIDResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenDBInstanceGTIDOutcome(rsp);
        else
            return OpenDBInstanceGTIDOutcome(o.GetError());
    }
    else
    {
        return OpenDBInstanceGTIDOutcome(outcome.GetError());
    }
}

void CdbClient::OpenDBInstanceGTIDAsync(const OpenDBInstanceGTIDRequest& request, const OpenDBInstanceGTIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenDBInstanceGTID(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::OpenDBInstanceGTIDOutcomeCallable CdbClient::OpenDBInstanceGTIDCallable(const OpenDBInstanceGTIDRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenDBInstanceGTIDOutcome()>>(
        [this, request]()
        {
            return this->OpenDBInstanceGTID(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::OpenSSLOutcome CdbClient::OpenSSL(const OpenSSLRequest &request)
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

void CdbClient::OpenSSLAsync(const OpenSSLRequest& request, const OpenSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenSSL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::OpenSSLOutcomeCallable CdbClient::OpenSSLCallable(const OpenSSLRequest &request)
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

CdbClient::OpenWanServiceOutcome CdbClient::OpenWanService(const OpenWanServiceRequest &request)
{
    auto outcome = MakeRequest(request, "OpenWanService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenWanServiceResponse rsp = OpenWanServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenWanServiceOutcome(rsp);
        else
            return OpenWanServiceOutcome(o.GetError());
    }
    else
    {
        return OpenWanServiceOutcome(outcome.GetError());
    }
}

void CdbClient::OpenWanServiceAsync(const OpenWanServiceRequest& request, const OpenWanServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenWanService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::OpenWanServiceOutcomeCallable CdbClient::OpenWanServiceCallable(const OpenWanServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenWanServiceOutcome()>>(
        [this, request]()
        {
            return this->OpenWanService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ReleaseIsolatedDBInstancesOutcome CdbClient::ReleaseIsolatedDBInstances(const ReleaseIsolatedDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseIsolatedDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseIsolatedDBInstancesResponse rsp = ReleaseIsolatedDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseIsolatedDBInstancesOutcome(rsp);
        else
            return ReleaseIsolatedDBInstancesOutcome(o.GetError());
    }
    else
    {
        return ReleaseIsolatedDBInstancesOutcome(outcome.GetError());
    }
}

void CdbClient::ReleaseIsolatedDBInstancesAsync(const ReleaseIsolatedDBInstancesRequest& request, const ReleaseIsolatedDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseIsolatedDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ReleaseIsolatedDBInstancesOutcomeCallable CdbClient::ReleaseIsolatedDBInstancesCallable(const ReleaseIsolatedDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseIsolatedDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->ReleaseIsolatedDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ReloadBalanceProxyNodeOutcome CdbClient::ReloadBalanceProxyNode(const ReloadBalanceProxyNodeRequest &request)
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

void CdbClient::ReloadBalanceProxyNodeAsync(const ReloadBalanceProxyNodeRequest& request, const ReloadBalanceProxyNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReloadBalanceProxyNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ReloadBalanceProxyNodeOutcomeCallable CdbClient::ReloadBalanceProxyNodeCallable(const ReloadBalanceProxyNodeRequest &request)
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

CdbClient::RenewDBInstanceOutcome CdbClient::RenewDBInstance(const RenewDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDBInstanceResponse rsp = RenewDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDBInstanceOutcome(rsp);
        else
            return RenewDBInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewDBInstanceOutcome(outcome.GetError());
    }
}

void CdbClient::RenewDBInstanceAsync(const RenewDBInstanceRequest& request, const RenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::RenewDBInstanceOutcomeCallable CdbClient::RenewDBInstanceCallable(const RenewDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->RenewDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ResetPasswordOutcome CdbClient::ResetPassword(const ResetPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetPasswordResponse rsp = ResetPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetPasswordOutcome(rsp);
        else
            return ResetPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetPasswordOutcome(outcome.GetError());
    }
}

void CdbClient::ResetPasswordAsync(const ResetPasswordRequest& request, const ResetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ResetPasswordOutcomeCallable CdbClient::ResetPasswordCallable(const ResetPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetPasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::ResetRootAccountOutcome CdbClient::ResetRootAccount(const ResetRootAccountRequest &request)
{
    auto outcome = MakeRequest(request, "ResetRootAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetRootAccountResponse rsp = ResetRootAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetRootAccountOutcome(rsp);
        else
            return ResetRootAccountOutcome(o.GetError());
    }
    else
    {
        return ResetRootAccountOutcome(outcome.GetError());
    }
}

void CdbClient::ResetRootAccountAsync(const ResetRootAccountRequest& request, const ResetRootAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetRootAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::ResetRootAccountOutcomeCallable CdbClient::ResetRootAccountCallable(const ResetRootAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetRootAccountOutcome()>>(
        [this, request]()
        {
            return this->ResetRootAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::RestartDBInstancesOutcome CdbClient::RestartDBInstances(const RestartDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RestartDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartDBInstancesResponse rsp = RestartDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartDBInstancesOutcome(rsp);
        else
            return RestartDBInstancesOutcome(o.GetError());
    }
    else
    {
        return RestartDBInstancesOutcome(outcome.GetError());
    }
}

void CdbClient::RestartDBInstancesAsync(const RestartDBInstancesRequest& request, const RestartDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::RestartDBInstancesOutcomeCallable CdbClient::RestartDBInstancesCallable(const RestartDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->RestartDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::StartBatchRollbackOutcome CdbClient::StartBatchRollback(const StartBatchRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "StartBatchRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartBatchRollbackResponse rsp = StartBatchRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartBatchRollbackOutcome(rsp);
        else
            return StartBatchRollbackOutcome(o.GetError());
    }
    else
    {
        return StartBatchRollbackOutcome(outcome.GetError());
    }
}

void CdbClient::StartBatchRollbackAsync(const StartBatchRollbackRequest& request, const StartBatchRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartBatchRollback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::StartBatchRollbackOutcomeCallable CdbClient::StartBatchRollbackCallable(const StartBatchRollbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartBatchRollbackOutcome()>>(
        [this, request]()
        {
            return this->StartBatchRollback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::StartCpuExpandOutcome CdbClient::StartCpuExpand(const StartCpuExpandRequest &request)
{
    auto outcome = MakeRequest(request, "StartCpuExpand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartCpuExpandResponse rsp = StartCpuExpandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartCpuExpandOutcome(rsp);
        else
            return StartCpuExpandOutcome(o.GetError());
    }
    else
    {
        return StartCpuExpandOutcome(outcome.GetError());
    }
}

void CdbClient::StartCpuExpandAsync(const StartCpuExpandRequest& request, const StartCpuExpandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartCpuExpand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::StartCpuExpandOutcomeCallable CdbClient::StartCpuExpandCallable(const StartCpuExpandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartCpuExpandOutcome()>>(
        [this, request]()
        {
            return this->StartCpuExpand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::StartReplicationOutcome CdbClient::StartReplication(const StartReplicationRequest &request)
{
    auto outcome = MakeRequest(request, "StartReplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartReplicationResponse rsp = StartReplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartReplicationOutcome(rsp);
        else
            return StartReplicationOutcome(o.GetError());
    }
    else
    {
        return StartReplicationOutcome(outcome.GetError());
    }
}

void CdbClient::StartReplicationAsync(const StartReplicationRequest& request, const StartReplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartReplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::StartReplicationOutcomeCallable CdbClient::StartReplicationCallable(const StartReplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartReplicationOutcome()>>(
        [this, request]()
        {
            return this->StartReplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::StopCpuExpandOutcome CdbClient::StopCpuExpand(const StopCpuExpandRequest &request)
{
    auto outcome = MakeRequest(request, "StopCpuExpand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopCpuExpandResponse rsp = StopCpuExpandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopCpuExpandOutcome(rsp);
        else
            return StopCpuExpandOutcome(o.GetError());
    }
    else
    {
        return StopCpuExpandOutcome(outcome.GetError());
    }
}

void CdbClient::StopCpuExpandAsync(const StopCpuExpandRequest& request, const StopCpuExpandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopCpuExpand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::StopCpuExpandOutcomeCallable CdbClient::StopCpuExpandCallable(const StopCpuExpandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopCpuExpandOutcome()>>(
        [this, request]()
        {
            return this->StopCpuExpand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::StopDBImportJobOutcome CdbClient::StopDBImportJob(const StopDBImportJobRequest &request)
{
    auto outcome = MakeRequest(request, "StopDBImportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopDBImportJobResponse rsp = StopDBImportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopDBImportJobOutcome(rsp);
        else
            return StopDBImportJobOutcome(o.GetError());
    }
    else
    {
        return StopDBImportJobOutcome(outcome.GetError());
    }
}

void CdbClient::StopDBImportJobAsync(const StopDBImportJobRequest& request, const StopDBImportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopDBImportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::StopDBImportJobOutcomeCallable CdbClient::StopDBImportJobCallable(const StopDBImportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopDBImportJobOutcome()>>(
        [this, request]()
        {
            return this->StopDBImportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::StopReplicationOutcome CdbClient::StopReplication(const StopReplicationRequest &request)
{
    auto outcome = MakeRequest(request, "StopReplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopReplicationResponse rsp = StopReplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopReplicationOutcome(rsp);
        else
            return StopReplicationOutcome(o.GetError());
    }
    else
    {
        return StopReplicationOutcome(outcome.GetError());
    }
}

void CdbClient::StopReplicationAsync(const StopReplicationRequest& request, const StopReplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopReplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::StopReplicationOutcomeCallable CdbClient::StopReplicationCallable(const StopReplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopReplicationOutcome()>>(
        [this, request]()
        {
            return this->StopReplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::StopRollbackOutcome CdbClient::StopRollback(const StopRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "StopRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopRollbackResponse rsp = StopRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopRollbackOutcome(rsp);
        else
            return StopRollbackOutcome(o.GetError());
    }
    else
    {
        return StopRollbackOutcome(outcome.GetError());
    }
}

void CdbClient::StopRollbackAsync(const StopRollbackRequest& request, const StopRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopRollback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::StopRollbackOutcomeCallable CdbClient::StopRollbackCallable(const StopRollbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopRollbackOutcome()>>(
        [this, request]()
        {
            return this->StopRollback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::SubmitInstanceUpgradeCheckJobOutcome CdbClient::SubmitInstanceUpgradeCheckJob(const SubmitInstanceUpgradeCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitInstanceUpgradeCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitInstanceUpgradeCheckJobResponse rsp = SubmitInstanceUpgradeCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitInstanceUpgradeCheckJobOutcome(rsp);
        else
            return SubmitInstanceUpgradeCheckJobOutcome(o.GetError());
    }
    else
    {
        return SubmitInstanceUpgradeCheckJobOutcome(outcome.GetError());
    }
}

void CdbClient::SubmitInstanceUpgradeCheckJobAsync(const SubmitInstanceUpgradeCheckJobRequest& request, const SubmitInstanceUpgradeCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitInstanceUpgradeCheckJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::SubmitInstanceUpgradeCheckJobOutcomeCallable CdbClient::SubmitInstanceUpgradeCheckJobCallable(const SubmitInstanceUpgradeCheckJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitInstanceUpgradeCheckJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitInstanceUpgradeCheckJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::SwitchCDBProxyOutcome CdbClient::SwitchCDBProxy(const SwitchCDBProxyRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchCDBProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchCDBProxyResponse rsp = SwitchCDBProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchCDBProxyOutcome(rsp);
        else
            return SwitchCDBProxyOutcome(o.GetError());
    }
    else
    {
        return SwitchCDBProxyOutcome(outcome.GetError());
    }
}

void CdbClient::SwitchCDBProxyAsync(const SwitchCDBProxyRequest& request, const SwitchCDBProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchCDBProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::SwitchCDBProxyOutcomeCallable CdbClient::SwitchCDBProxyCallable(const SwitchCDBProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchCDBProxyOutcome()>>(
        [this, request]()
        {
            return this->SwitchCDBProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::SwitchDBInstanceMasterSlaveOutcome CdbClient::SwitchDBInstanceMasterSlave(const SwitchDBInstanceMasterSlaveRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDBInstanceMasterSlave");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDBInstanceMasterSlaveResponse rsp = SwitchDBInstanceMasterSlaveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDBInstanceMasterSlaveOutcome(rsp);
        else
            return SwitchDBInstanceMasterSlaveOutcome(o.GetError());
    }
    else
    {
        return SwitchDBInstanceMasterSlaveOutcome(outcome.GetError());
    }
}

void CdbClient::SwitchDBInstanceMasterSlaveAsync(const SwitchDBInstanceMasterSlaveRequest& request, const SwitchDBInstanceMasterSlaveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchDBInstanceMasterSlave(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::SwitchDBInstanceMasterSlaveOutcomeCallable CdbClient::SwitchDBInstanceMasterSlaveCallable(const SwitchDBInstanceMasterSlaveRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchDBInstanceMasterSlaveOutcome()>>(
        [this, request]()
        {
            return this->SwitchDBInstanceMasterSlave(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::SwitchDrInstanceToMasterOutcome CdbClient::SwitchDrInstanceToMaster(const SwitchDrInstanceToMasterRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDrInstanceToMaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDrInstanceToMasterResponse rsp = SwitchDrInstanceToMasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDrInstanceToMasterOutcome(rsp);
        else
            return SwitchDrInstanceToMasterOutcome(o.GetError());
    }
    else
    {
        return SwitchDrInstanceToMasterOutcome(outcome.GetError());
    }
}

void CdbClient::SwitchDrInstanceToMasterAsync(const SwitchDrInstanceToMasterRequest& request, const SwitchDrInstanceToMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchDrInstanceToMaster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::SwitchDrInstanceToMasterOutcomeCallable CdbClient::SwitchDrInstanceToMasterCallable(const SwitchDrInstanceToMasterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchDrInstanceToMasterOutcome()>>(
        [this, request]()
        {
            return this->SwitchDrInstanceToMaster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::SwitchForUpgradeOutcome CdbClient::SwitchForUpgrade(const SwitchForUpgradeRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchForUpgrade");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchForUpgradeResponse rsp = SwitchForUpgradeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchForUpgradeOutcome(rsp);
        else
            return SwitchForUpgradeOutcome(o.GetError());
    }
    else
    {
        return SwitchForUpgradeOutcome(outcome.GetError());
    }
}

void CdbClient::SwitchForUpgradeAsync(const SwitchForUpgradeRequest& request, const SwitchForUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchForUpgrade(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::SwitchForUpgradeOutcomeCallable CdbClient::SwitchForUpgradeCallable(const SwitchForUpgradeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchForUpgradeOutcome()>>(
        [this, request]()
        {
            return this->SwitchForUpgrade(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::UpgradeCDBProxyVersionOutcome CdbClient::UpgradeCDBProxyVersion(const UpgradeCDBProxyVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeCDBProxyVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeCDBProxyVersionResponse rsp = UpgradeCDBProxyVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeCDBProxyVersionOutcome(rsp);
        else
            return UpgradeCDBProxyVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeCDBProxyVersionOutcome(outcome.GetError());
    }
}

void CdbClient::UpgradeCDBProxyVersionAsync(const UpgradeCDBProxyVersionRequest& request, const UpgradeCDBProxyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeCDBProxyVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::UpgradeCDBProxyVersionOutcomeCallable CdbClient::UpgradeCDBProxyVersionCallable(const UpgradeCDBProxyVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeCDBProxyVersionOutcome()>>(
        [this, request]()
        {
            return this->UpgradeCDBProxyVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::UpgradeDBInstanceOutcome CdbClient::UpgradeDBInstance(const UpgradeDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDBInstanceResponse rsp = UpgradeDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDBInstanceOutcome(rsp);
        else
            return UpgradeDBInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeDBInstanceOutcome(outcome.GetError());
    }
}

void CdbClient::UpgradeDBInstanceAsync(const UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::UpgradeDBInstanceOutcomeCallable CdbClient::UpgradeDBInstanceCallable(const UpgradeDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpgradeDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::UpgradeDBInstanceEngineVersionOutcome CdbClient::UpgradeDBInstanceEngineVersion(const UpgradeDBInstanceEngineVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDBInstanceEngineVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDBInstanceEngineVersionResponse rsp = UpgradeDBInstanceEngineVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDBInstanceEngineVersionOutcome(rsp);
        else
            return UpgradeDBInstanceEngineVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeDBInstanceEngineVersionOutcome(outcome.GetError());
    }
}

void CdbClient::UpgradeDBInstanceEngineVersionAsync(const UpgradeDBInstanceEngineVersionRequest& request, const UpgradeDBInstanceEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeDBInstanceEngineVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::UpgradeDBInstanceEngineVersionOutcomeCallable CdbClient::UpgradeDBInstanceEngineVersionCallable(const UpgradeDBInstanceEngineVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceEngineVersionOutcome()>>(
        [this, request]()
        {
            return this->UpgradeDBInstanceEngineVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdbClient::VerifyRootAccountOutcome CdbClient::VerifyRootAccount(const VerifyRootAccountRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyRootAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyRootAccountResponse rsp = VerifyRootAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyRootAccountOutcome(rsp);
        else
            return VerifyRootAccountOutcome(o.GetError());
    }
    else
    {
        return VerifyRootAccountOutcome(outcome.GetError());
    }
}

void CdbClient::VerifyRootAccountAsync(const VerifyRootAccountRequest& request, const VerifyRootAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyRootAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdbClient::VerifyRootAccountOutcomeCallable CdbClient::VerifyRootAccountCallable(const VerifyRootAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyRootAccountOutcome()>>(
        [this, request]()
        {
            return this->VerifyRootAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

