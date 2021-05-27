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

#include <tencentcloud/dcdb/v20180411/DcdbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dcdb::V20180411;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-11";
    const string ENDPOINT = "dcdb.tencentcloudapi.com";
}

DcdbClient::DcdbClient(const Credential &credential, const string &region) :
    DcdbClient(credential, region, ClientProfile())
{
}

DcdbClient::DcdbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DcdbClient::AssociateSecurityGroupsOutcome DcdbClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
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

void DcdbClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::AssociateSecurityGroupsOutcomeCallable DcdbClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
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

DcdbClient::CloneAccountOutcome DcdbClient::CloneAccount(const CloneAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CloneAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloneAccountResponse rsp = CloneAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloneAccountOutcome(rsp);
        else
            return CloneAccountOutcome(o.GetError());
    }
    else
    {
        return CloneAccountOutcome(outcome.GetError());
    }
}

void DcdbClient::CloneAccountAsync(const CloneAccountRequest& request, const CloneAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloneAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::CloneAccountOutcomeCallable DcdbClient::CloneAccountCallable(const CloneAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloneAccountOutcome()>>(
        [this, request]()
        {
            return this->CloneAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::CloseDBExtranetAccessOutcome DcdbClient::CloseDBExtranetAccess(const CloseDBExtranetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "CloseDBExtranetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseDBExtranetAccessResponse rsp = CloseDBExtranetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseDBExtranetAccessOutcome(rsp);
        else
            return CloseDBExtranetAccessOutcome(o.GetError());
    }
    else
    {
        return CloseDBExtranetAccessOutcome(outcome.GetError());
    }
}

void DcdbClient::CloseDBExtranetAccessAsync(const CloseDBExtranetAccessRequest& request, const CloseDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseDBExtranetAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::CloseDBExtranetAccessOutcomeCallable DcdbClient::CloseDBExtranetAccessCallable(const CloseDBExtranetAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseDBExtranetAccessOutcome()>>(
        [this, request]()
        {
            return this->CloseDBExtranetAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::CopyAccountPrivilegesOutcome DcdbClient::CopyAccountPrivileges(const CopyAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "CopyAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyAccountPrivilegesResponse rsp = CopyAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyAccountPrivilegesOutcome(rsp);
        else
            return CopyAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return CopyAccountPrivilegesOutcome(outcome.GetError());
    }
}

void DcdbClient::CopyAccountPrivilegesAsync(const CopyAccountPrivilegesRequest& request, const CopyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::CopyAccountPrivilegesOutcomeCallable DcdbClient::CopyAccountPrivilegesCallable(const CopyAccountPrivilegesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopyAccountPrivilegesOutcome()>>(
        [this, request]()
        {
            return this->CopyAccountPrivileges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::CreateAccountOutcome DcdbClient::CreateAccount(const CreateAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccountResponse rsp = CreateAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccountOutcome(rsp);
        else
            return CreateAccountOutcome(o.GetError());
    }
    else
    {
        return CreateAccountOutcome(outcome.GetError());
    }
}

void DcdbClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::CreateAccountOutcomeCallable DcdbClient::CreateAccountCallable(const CreateAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
        [this, request]()
        {
            return this->CreateAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::CreateDCDBInstanceOutcome DcdbClient::CreateDCDBInstance(const CreateDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDCDBInstanceResponse rsp = CreateDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDCDBInstanceOutcome(rsp);
        else
            return CreateDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::CreateDCDBInstanceAsync(const CreateDCDBInstanceRequest& request, const CreateDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDCDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::CreateDCDBInstanceOutcomeCallable DcdbClient::CreateDCDBInstanceCallable(const CreateDCDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDCDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateDCDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DeleteAccountOutcome DcdbClient::DeleteAccount(const DeleteAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccountResponse rsp = DeleteAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccountOutcome(rsp);
        else
            return DeleteAccountOutcome(o.GetError());
    }
    else
    {
        return DeleteAccountOutcome(outcome.GetError());
    }
}

void DcdbClient::DeleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DeleteAccountOutcomeCallable DcdbClient::DeleteAccountCallable(const DeleteAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
        [this, request]()
        {
            return this->DeleteAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeAccountPrivilegesOutcome DcdbClient::DescribeAccountPrivileges(const DescribeAccountPrivilegesRequest &request)
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

void DcdbClient::DescribeAccountPrivilegesAsync(const DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeAccountPrivilegesOutcomeCallable DcdbClient::DescribeAccountPrivilegesCallable(const DescribeAccountPrivilegesRequest &request)
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

DcdbClient::DescribeAccountsOutcome DcdbClient::DescribeAccounts(const DescribeAccountsRequest &request)
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

void DcdbClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeAccountsOutcomeCallable DcdbClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
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

DcdbClient::DescribeDBLogFilesOutcome DcdbClient::DescribeDBLogFiles(const DescribeDBLogFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBLogFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBLogFilesResponse rsp = DescribeDBLogFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBLogFilesOutcome(rsp);
        else
            return DescribeDBLogFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBLogFilesOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDBLogFilesAsync(const DescribeDBLogFilesRequest& request, const DescribeDBLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBLogFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDBLogFilesOutcomeCallable DcdbClient::DescribeDBLogFilesCallable(const DescribeDBLogFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBLogFilesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBLogFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDBParametersOutcome DcdbClient::DescribeDBParameters(const DescribeDBParametersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBParametersResponse rsp = DescribeDBParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBParametersOutcome(rsp);
        else
            return DescribeDBParametersOutcome(o.GetError());
    }
    else
    {
        return DescribeDBParametersOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDBParametersAsync(const DescribeDBParametersRequest& request, const DescribeDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBParameters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDBParametersOutcomeCallable DcdbClient::DescribeDBParametersCallable(const DescribeDBParametersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBParametersOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBParameters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDBSecurityGroupsOutcome DcdbClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
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

void DcdbClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDBSecurityGroupsOutcomeCallable DcdbClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
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

DcdbClient::DescribeDBSyncModeOutcome DcdbClient::DescribeDBSyncMode(const DescribeDBSyncModeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSyncMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSyncModeResponse rsp = DescribeDBSyncModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSyncModeOutcome(rsp);
        else
            return DescribeDBSyncModeOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSyncModeOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDBSyncModeAsync(const DescribeDBSyncModeRequest& request, const DescribeDBSyncModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSyncMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDBSyncModeOutcomeCallable DcdbClient::DescribeDBSyncModeCallable(const DescribeDBSyncModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBSyncModeOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBSyncMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDCDBInstanceNodeInfoOutcome DcdbClient::DescribeDCDBInstanceNodeInfo(const DescribeDCDBInstanceNodeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBInstanceNodeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBInstanceNodeInfoResponse rsp = DescribeDCDBInstanceNodeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBInstanceNodeInfoOutcome(rsp);
        else
            return DescribeDCDBInstanceNodeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBInstanceNodeInfoOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBInstanceNodeInfoAsync(const DescribeDCDBInstanceNodeInfoRequest& request, const DescribeDCDBInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDCDBInstanceNodeInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDCDBInstanceNodeInfoOutcomeCallable DcdbClient::DescribeDCDBInstanceNodeInfoCallable(const DescribeDCDBInstanceNodeInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDCDBInstanceNodeInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDCDBInstanceNodeInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDCDBInstancesOutcome DcdbClient::DescribeDCDBInstances(const DescribeDCDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBInstancesResponse rsp = DescribeDCDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBInstancesOutcome(rsp);
        else
            return DescribeDCDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBInstancesOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBInstancesAsync(const DescribeDCDBInstancesRequest& request, const DescribeDCDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDCDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDCDBInstancesOutcomeCallable DcdbClient::DescribeDCDBInstancesCallable(const DescribeDCDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDCDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDCDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDCDBPriceOutcome DcdbClient::DescribeDCDBPrice(const DescribeDCDBPriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBPriceResponse rsp = DescribeDCDBPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBPriceOutcome(rsp);
        else
            return DescribeDCDBPriceOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBPriceOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBPriceAsync(const DescribeDCDBPriceRequest& request, const DescribeDCDBPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDCDBPrice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDCDBPriceOutcomeCallable DcdbClient::DescribeDCDBPriceCallable(const DescribeDCDBPriceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDCDBPriceOutcome()>>(
        [this, request]()
        {
            return this->DescribeDCDBPrice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDCDBRenewalPriceOutcome DcdbClient::DescribeDCDBRenewalPrice(const DescribeDCDBRenewalPriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBRenewalPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBRenewalPriceResponse rsp = DescribeDCDBRenewalPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBRenewalPriceOutcome(rsp);
        else
            return DescribeDCDBRenewalPriceOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBRenewalPriceOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBRenewalPriceAsync(const DescribeDCDBRenewalPriceRequest& request, const DescribeDCDBRenewalPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDCDBRenewalPrice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDCDBRenewalPriceOutcomeCallable DcdbClient::DescribeDCDBRenewalPriceCallable(const DescribeDCDBRenewalPriceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDCDBRenewalPriceOutcome()>>(
        [this, request]()
        {
            return this->DescribeDCDBRenewalPrice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDCDBSaleInfoOutcome DcdbClient::DescribeDCDBSaleInfo(const DescribeDCDBSaleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBSaleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBSaleInfoResponse rsp = DescribeDCDBSaleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBSaleInfoOutcome(rsp);
        else
            return DescribeDCDBSaleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBSaleInfoOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBSaleInfoAsync(const DescribeDCDBSaleInfoRequest& request, const DescribeDCDBSaleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDCDBSaleInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDCDBSaleInfoOutcomeCallable DcdbClient::DescribeDCDBSaleInfoCallable(const DescribeDCDBSaleInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDCDBSaleInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDCDBSaleInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDCDBShardsOutcome DcdbClient::DescribeDCDBShards(const DescribeDCDBShardsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBShards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBShardsResponse rsp = DescribeDCDBShardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBShardsOutcome(rsp);
        else
            return DescribeDCDBShardsOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBShardsOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBShardsAsync(const DescribeDCDBShardsRequest& request, const DescribeDCDBShardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDCDBShards(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDCDBShardsOutcomeCallable DcdbClient::DescribeDCDBShardsCallable(const DescribeDCDBShardsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDCDBShardsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDCDBShards(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDCDBUpgradePriceOutcome DcdbClient::DescribeDCDBUpgradePrice(const DescribeDCDBUpgradePriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBUpgradePrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBUpgradePriceResponse rsp = DescribeDCDBUpgradePriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBUpgradePriceOutcome(rsp);
        else
            return DescribeDCDBUpgradePriceOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBUpgradePriceOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBUpgradePriceAsync(const DescribeDCDBUpgradePriceRequest& request, const DescribeDCDBUpgradePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDCDBUpgradePrice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDCDBUpgradePriceOutcomeCallable DcdbClient::DescribeDCDBUpgradePriceCallable(const DescribeDCDBUpgradePriceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDCDBUpgradePriceOutcome()>>(
        [this, request]()
        {
            return this->DescribeDCDBUpgradePrice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDatabaseObjectsOutcome DcdbClient::DescribeDatabaseObjects(const DescribeDatabaseObjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseObjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseObjectsResponse rsp = DescribeDatabaseObjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseObjectsOutcome(rsp);
        else
            return DescribeDatabaseObjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseObjectsOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDatabaseObjectsAsync(const DescribeDatabaseObjectsRequest& request, const DescribeDatabaseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseObjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDatabaseObjectsOutcomeCallable DcdbClient::DescribeDatabaseObjectsCallable(const DescribeDatabaseObjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabaseObjectsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabaseObjects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDatabaseTableOutcome DcdbClient::DescribeDatabaseTable(const DescribeDatabaseTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseTableResponse rsp = DescribeDatabaseTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseTableOutcome(rsp);
        else
            return DescribeDatabaseTableOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseTableOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDatabaseTableAsync(const DescribeDatabaseTableRequest& request, const DescribeDatabaseTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDatabaseTableOutcomeCallable DcdbClient::DescribeDatabaseTableCallable(const DescribeDatabaseTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabaseTableOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabaseTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDatabasesOutcome DcdbClient::DescribeDatabases(const DescribeDatabasesRequest &request)
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

void DcdbClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDatabasesOutcomeCallable DcdbClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
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

DcdbClient::DescribeDcnDetailOutcome DcdbClient::DescribeDcnDetail(const DescribeDcnDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDcnDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDcnDetailResponse rsp = DescribeDcnDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDcnDetailOutcome(rsp);
        else
            return DescribeDcnDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDcnDetailOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDcnDetailAsync(const DescribeDcnDetailRequest& request, const DescribeDcnDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDcnDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDcnDetailOutcomeCallable DcdbClient::DescribeDcnDetailCallable(const DescribeDcnDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDcnDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDcnDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeOrdersOutcome DcdbClient::DescribeOrders(const DescribeOrdersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrdersResponse rsp = DescribeOrdersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrdersOutcome(rsp);
        else
            return DescribeOrdersOutcome(o.GetError());
    }
    else
    {
        return DescribeOrdersOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeOrdersAsync(const DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrders(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeOrdersOutcomeCallable DcdbClient::DescribeOrdersCallable(const DescribeOrdersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrdersOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrders(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeProjectSecurityGroupsOutcome DcdbClient::DescribeProjectSecurityGroups(const DescribeProjectSecurityGroupsRequest &request)
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

void DcdbClient::DescribeProjectSecurityGroupsAsync(const DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeProjectSecurityGroupsOutcomeCallable DcdbClient::DescribeProjectSecurityGroupsCallable(const DescribeProjectSecurityGroupsRequest &request)
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

DcdbClient::DescribeProjectsOutcome DcdbClient::DescribeProjects(const DescribeProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectsResponse rsp = DescribeProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectsOutcome(rsp);
        else
            return DescribeProjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectsOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeProjectsOutcomeCallable DcdbClient::DescribeProjectsCallable(const DescribeProjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeShardSpecOutcome DcdbClient::DescribeShardSpec(const DescribeShardSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShardSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShardSpecResponse rsp = DescribeShardSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShardSpecOutcome(rsp);
        else
            return DescribeShardSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeShardSpecOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeShardSpecAsync(const DescribeShardSpecRequest& request, const DescribeShardSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeShardSpec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeShardSpecOutcomeCallable DcdbClient::DescribeShardSpecCallable(const DescribeShardSpecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeShardSpecOutcome()>>(
        [this, request]()
        {
            return this->DescribeShardSpec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeSqlLogsOutcome DcdbClient::DescribeSqlLogs(const DescribeSqlLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSqlLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSqlLogsResponse rsp = DescribeSqlLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSqlLogsOutcome(rsp);
        else
            return DescribeSqlLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSqlLogsOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeSqlLogsAsync(const DescribeSqlLogsRequest& request, const DescribeSqlLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSqlLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeSqlLogsOutcomeCallable DcdbClient::DescribeSqlLogsCallable(const DescribeSqlLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSqlLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSqlLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeUserTasksOutcome DcdbClient::DescribeUserTasks(const DescribeUserTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserTasksResponse rsp = DescribeUserTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserTasksOutcome(rsp);
        else
            return DescribeUserTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeUserTasksOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeUserTasksAsync(const DescribeUserTasksRequest& request, const DescribeUserTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeUserTasksOutcomeCallable DcdbClient::DescribeUserTasksCallable(const DescribeUserTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DisassociateSecurityGroupsOutcome DcdbClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
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

void DcdbClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DisassociateSecurityGroupsOutcomeCallable DcdbClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
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

DcdbClient::FlushBinlogOutcome DcdbClient::FlushBinlog(const FlushBinlogRequest &request)
{
    auto outcome = MakeRequest(request, "FlushBinlog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FlushBinlogResponse rsp = FlushBinlogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FlushBinlogOutcome(rsp);
        else
            return FlushBinlogOutcome(o.GetError());
    }
    else
    {
        return FlushBinlogOutcome(outcome.GetError());
    }
}

void DcdbClient::FlushBinlogAsync(const FlushBinlogRequest& request, const FlushBinlogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FlushBinlog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::FlushBinlogOutcomeCallable DcdbClient::FlushBinlogCallable(const FlushBinlogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FlushBinlogOutcome()>>(
        [this, request]()
        {
            return this->FlushBinlog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::GrantAccountPrivilegesOutcome DcdbClient::GrantAccountPrivileges(const GrantAccountPrivilegesRequest &request)
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

void DcdbClient::GrantAccountPrivilegesAsync(const GrantAccountPrivilegesRequest& request, const GrantAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GrantAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::GrantAccountPrivilegesOutcomeCallable DcdbClient::GrantAccountPrivilegesCallable(const GrantAccountPrivilegesRequest &request)
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

DcdbClient::InitDCDBInstancesOutcome DcdbClient::InitDCDBInstances(const InitDCDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InitDCDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InitDCDBInstancesResponse rsp = InitDCDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InitDCDBInstancesOutcome(rsp);
        else
            return InitDCDBInstancesOutcome(o.GetError());
    }
    else
    {
        return InitDCDBInstancesOutcome(outcome.GetError());
    }
}

void DcdbClient::InitDCDBInstancesAsync(const InitDCDBInstancesRequest& request, const InitDCDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InitDCDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::InitDCDBInstancesOutcomeCallable DcdbClient::InitDCDBInstancesCallable(const InitDCDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InitDCDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->InitDCDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::KillSessionOutcome DcdbClient::KillSession(const KillSessionRequest &request)
{
    auto outcome = MakeRequest(request, "KillSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillSessionResponse rsp = KillSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillSessionOutcome(rsp);
        else
            return KillSessionOutcome(o.GetError());
    }
    else
    {
        return KillSessionOutcome(outcome.GetError());
    }
}

void DcdbClient::KillSessionAsync(const KillSessionRequest& request, const KillSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->KillSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::KillSessionOutcomeCallable DcdbClient::KillSessionCallable(const KillSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<KillSessionOutcome()>>(
        [this, request]()
        {
            return this->KillSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::ModifyAccountDescriptionOutcome DcdbClient::ModifyAccountDescription(const ModifyAccountDescriptionRequest &request)
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

void DcdbClient::ModifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountDescription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::ModifyAccountDescriptionOutcomeCallable DcdbClient::ModifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request)
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

DcdbClient::ModifyDBInstanceSecurityGroupsOutcome DcdbClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
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

void DcdbClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::ModifyDBInstanceSecurityGroupsOutcomeCallable DcdbClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
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

DcdbClient::ModifyDBInstancesProjectOutcome DcdbClient::ModifyDBInstancesProject(const ModifyDBInstancesProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstancesProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstancesProjectResponse rsp = ModifyDBInstancesProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstancesProjectOutcome(rsp);
        else
            return ModifyDBInstancesProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstancesProjectOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyDBInstancesProjectAsync(const ModifyDBInstancesProjectRequest& request, const ModifyDBInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstancesProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::ModifyDBInstancesProjectOutcomeCallable DcdbClient::ModifyDBInstancesProjectCallable(const ModifyDBInstancesProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstancesProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstancesProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::ModifyDBParametersOutcome DcdbClient::ModifyDBParameters(const ModifyDBParametersRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBParametersResponse rsp = ModifyDBParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBParametersOutcome(rsp);
        else
            return ModifyDBParametersOutcome(o.GetError());
    }
    else
    {
        return ModifyDBParametersOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyDBParametersAsync(const ModifyDBParametersRequest& request, const ModifyDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBParameters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::ModifyDBParametersOutcomeCallable DcdbClient::ModifyDBParametersCallable(const ModifyDBParametersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBParametersOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBParameters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::ModifyDBSyncModeOutcome DcdbClient::ModifyDBSyncMode(const ModifyDBSyncModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBSyncMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBSyncModeResponse rsp = ModifyDBSyncModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBSyncModeOutcome(rsp);
        else
            return ModifyDBSyncModeOutcome(o.GetError());
    }
    else
    {
        return ModifyDBSyncModeOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyDBSyncModeAsync(const ModifyDBSyncModeRequest& request, const ModifyDBSyncModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBSyncMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::ModifyDBSyncModeOutcomeCallable DcdbClient::ModifyDBSyncModeCallable(const ModifyDBSyncModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBSyncModeOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBSyncMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::OpenDBExtranetAccessOutcome DcdbClient::OpenDBExtranetAccess(const OpenDBExtranetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "OpenDBExtranetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenDBExtranetAccessResponse rsp = OpenDBExtranetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenDBExtranetAccessOutcome(rsp);
        else
            return OpenDBExtranetAccessOutcome(o.GetError());
    }
    else
    {
        return OpenDBExtranetAccessOutcome(outcome.GetError());
    }
}

void DcdbClient::OpenDBExtranetAccessAsync(const OpenDBExtranetAccessRequest& request, const OpenDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenDBExtranetAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::OpenDBExtranetAccessOutcomeCallable DcdbClient::OpenDBExtranetAccessCallable(const OpenDBExtranetAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenDBExtranetAccessOutcome()>>(
        [this, request]()
        {
            return this->OpenDBExtranetAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::RenewDCDBInstanceOutcome DcdbClient::RenewDCDBInstance(const RenewDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDCDBInstanceResponse rsp = RenewDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDCDBInstanceOutcome(rsp);
        else
            return RenewDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::RenewDCDBInstanceAsync(const RenewDCDBInstanceRequest& request, const RenewDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewDCDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::RenewDCDBInstanceOutcomeCallable DcdbClient::RenewDCDBInstanceCallable(const RenewDCDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewDCDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->RenewDCDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::ResetAccountPasswordOutcome DcdbClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
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

void DcdbClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetAccountPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::ResetAccountPasswordOutcomeCallable DcdbClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
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

DcdbClient::UpgradeDCDBInstanceOutcome DcdbClient::UpgradeDCDBInstance(const UpgradeDCDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDCDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDCDBInstanceResponse rsp = UpgradeDCDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDCDBInstanceOutcome(rsp);
        else
            return UpgradeDCDBInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeDCDBInstanceOutcome(outcome.GetError());
    }
}

void DcdbClient::UpgradeDCDBInstanceAsync(const UpgradeDCDBInstanceRequest& request, const UpgradeDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeDCDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::UpgradeDCDBInstanceOutcomeCallable DcdbClient::UpgradeDCDBInstanceCallable(const UpgradeDCDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeDCDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpgradeDCDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

