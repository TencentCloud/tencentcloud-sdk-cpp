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

#include <tencentcloud/mariadb/v20170312/MariadbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mariadb::V20170312;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-12";
    const string ENDPOINT = "mariadb.tencentcloudapi.com";
}

MariadbClient::MariadbClient(const Credential &credential, const string &region) :
    MariadbClient(credential, region, ClientProfile())
{
}

MariadbClient::MariadbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MariadbClient::ActivateHourDBInstanceOutcome MariadbClient::ActivateHourDBInstance(const ActivateHourDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ActivateHourDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActivateHourDBInstanceResponse rsp = ActivateHourDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActivateHourDBInstanceOutcome(rsp);
        else
            return ActivateHourDBInstanceOutcome(o.GetError());
    }
    else
    {
        return ActivateHourDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::ActivateHourDBInstanceAsync(const ActivateHourDBInstanceRequest& request, const ActivateHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ActivateHourDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ActivateHourDBInstanceOutcomeCallable MariadbClient::ActivateHourDBInstanceCallable(const ActivateHourDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ActivateHourDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->ActivateHourDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::AssociateSecurityGroupsOutcome MariadbClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
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

void MariadbClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::AssociateSecurityGroupsOutcomeCallable MariadbClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
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

MariadbClient::CancelDcnJobOutcome MariadbClient::CancelDcnJob(const CancelDcnJobRequest &request)
{
    auto outcome = MakeRequest(request, "CancelDcnJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelDcnJobResponse rsp = CancelDcnJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelDcnJobOutcome(rsp);
        else
            return CancelDcnJobOutcome(o.GetError());
    }
    else
    {
        return CancelDcnJobOutcome(outcome.GetError());
    }
}

void MariadbClient::CancelDcnJobAsync(const CancelDcnJobRequest& request, const CancelDcnJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelDcnJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::CancelDcnJobOutcomeCallable MariadbClient::CancelDcnJobCallable(const CancelDcnJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelDcnJobOutcome()>>(
        [this, request]()
        {
            return this->CancelDcnJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::CloneAccountOutcome MariadbClient::CloneAccount(const CloneAccountRequest &request)
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

void MariadbClient::CloneAccountAsync(const CloneAccountRequest& request, const CloneAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloneAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::CloneAccountOutcomeCallable MariadbClient::CloneAccountCallable(const CloneAccountRequest &request)
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

MariadbClient::CloseDBExtranetAccessOutcome MariadbClient::CloseDBExtranetAccess(const CloseDBExtranetAccessRequest &request)
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

void MariadbClient::CloseDBExtranetAccessAsync(const CloseDBExtranetAccessRequest& request, const CloseDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseDBExtranetAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::CloseDBExtranetAccessOutcomeCallable MariadbClient::CloseDBExtranetAccessCallable(const CloseDBExtranetAccessRequest &request)
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

MariadbClient::CopyAccountPrivilegesOutcome MariadbClient::CopyAccountPrivileges(const CopyAccountPrivilegesRequest &request)
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

void MariadbClient::CopyAccountPrivilegesAsync(const CopyAccountPrivilegesRequest& request, const CopyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::CopyAccountPrivilegesOutcomeCallable MariadbClient::CopyAccountPrivilegesCallable(const CopyAccountPrivilegesRequest &request)
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

MariadbClient::CreateAccountOutcome MariadbClient::CreateAccount(const CreateAccountRequest &request)
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

void MariadbClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::CreateAccountOutcomeCallable MariadbClient::CreateAccountCallable(const CreateAccountRequest &request)
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

MariadbClient::CreateDBInstanceOutcome MariadbClient::CreateDBInstance(const CreateDBInstanceRequest &request)
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

void MariadbClient::CreateDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::CreateDBInstanceOutcomeCallable MariadbClient::CreateDBInstanceCallable(const CreateDBInstanceRequest &request)
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

MariadbClient::CreateDedicatedClusterDBInstanceOutcome MariadbClient::CreateDedicatedClusterDBInstance(const CreateDedicatedClusterDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDedicatedClusterDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDedicatedClusterDBInstanceResponse rsp = CreateDedicatedClusterDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDedicatedClusterDBInstanceOutcome(rsp);
        else
            return CreateDedicatedClusterDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateDedicatedClusterDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::CreateDedicatedClusterDBInstanceAsync(const CreateDedicatedClusterDBInstanceRequest& request, const CreateDedicatedClusterDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDedicatedClusterDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::CreateDedicatedClusterDBInstanceOutcomeCallable MariadbClient::CreateDedicatedClusterDBInstanceCallable(const CreateDedicatedClusterDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDedicatedClusterDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateDedicatedClusterDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::CreateHourDBInstanceOutcome MariadbClient::CreateHourDBInstance(const CreateHourDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHourDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHourDBInstanceResponse rsp = CreateHourDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHourDBInstanceOutcome(rsp);
        else
            return CreateHourDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateHourDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::CreateHourDBInstanceAsync(const CreateHourDBInstanceRequest& request, const CreateHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHourDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::CreateHourDBInstanceOutcomeCallable MariadbClient::CreateHourDBInstanceCallable(const CreateHourDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHourDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateHourDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::CreateTmpInstancesOutcome MariadbClient::CreateTmpInstances(const CreateTmpInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTmpInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTmpInstancesResponse rsp = CreateTmpInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTmpInstancesOutcome(rsp);
        else
            return CreateTmpInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateTmpInstancesOutcome(outcome.GetError());
    }
}

void MariadbClient::CreateTmpInstancesAsync(const CreateTmpInstancesRequest& request, const CreateTmpInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTmpInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::CreateTmpInstancesOutcomeCallable MariadbClient::CreateTmpInstancesCallable(const CreateTmpInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTmpInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateTmpInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DeleteAccountOutcome MariadbClient::DeleteAccount(const DeleteAccountRequest &request)
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

void MariadbClient::DeleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DeleteAccountOutcomeCallable MariadbClient::DeleteAccountCallable(const DeleteAccountRequest &request)
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

MariadbClient::DescribeAccountPrivilegesOutcome MariadbClient::DescribeAccountPrivileges(const DescribeAccountPrivilegesRequest &request)
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

void MariadbClient::DescribeAccountPrivilegesAsync(const DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeAccountPrivilegesOutcomeCallable MariadbClient::DescribeAccountPrivilegesCallable(const DescribeAccountPrivilegesRequest &request)
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

MariadbClient::DescribeAccountsOutcome MariadbClient::DescribeAccounts(const DescribeAccountsRequest &request)
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

void MariadbClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeAccountsOutcomeCallable MariadbClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
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

MariadbClient::DescribeBackupConfigsOutcome MariadbClient::DescribeBackupConfigs(const DescribeBackupConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupConfigsResponse rsp = DescribeBackupConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupConfigsOutcome(rsp);
        else
            return DescribeBackupConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupConfigsOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeBackupConfigsAsync(const DescribeBackupConfigsRequest& request, const DescribeBackupConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeBackupConfigsOutcomeCallable MariadbClient::DescribeBackupConfigsCallable(const DescribeBackupConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DescribeBackupFilesOutcome MariadbClient::DescribeBackupFiles(const DescribeBackupFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupFilesResponse rsp = DescribeBackupFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupFilesOutcome(rsp);
        else
            return DescribeBackupFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupFilesOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeBackupFilesAsync(const DescribeBackupFilesRequest& request, const DescribeBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeBackupFilesOutcomeCallable MariadbClient::DescribeBackupFilesCallable(const DescribeBackupFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupFilesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DescribeBackupTimeOutcome MariadbClient::DescribeBackupTime(const DescribeBackupTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupTimeResponse rsp = DescribeBackupTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupTimeOutcome(rsp);
        else
            return DescribeBackupTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupTimeOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeBackupTimeAsync(const DescribeBackupTimeRequest& request, const DescribeBackupTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeBackupTimeOutcomeCallable MariadbClient::DescribeBackupTimeCallable(const DescribeBackupTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DescribeBinlogTimeOutcome MariadbClient::DescribeBinlogTime(const DescribeBinlogTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBinlogTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBinlogTimeResponse rsp = DescribeBinlogTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBinlogTimeOutcome(rsp);
        else
            return DescribeBinlogTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeBinlogTimeOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeBinlogTimeAsync(const DescribeBinlogTimeRequest& request, const DescribeBinlogTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBinlogTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeBinlogTimeOutcomeCallable MariadbClient::DescribeBinlogTimeCallable(const DescribeBinlogTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBinlogTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeBinlogTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DescribeDBEncryptAttributesOutcome MariadbClient::DescribeDBEncryptAttributes(const DescribeDBEncryptAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBEncryptAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBEncryptAttributesResponse rsp = DescribeDBEncryptAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBEncryptAttributesOutcome(rsp);
        else
            return DescribeDBEncryptAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBEncryptAttributesOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDBEncryptAttributesAsync(const DescribeDBEncryptAttributesRequest& request, const DescribeDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBEncryptAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeDBEncryptAttributesOutcomeCallable MariadbClient::DescribeDBEncryptAttributesCallable(const DescribeDBEncryptAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBEncryptAttributesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBEncryptAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DescribeDBInstanceDetailOutcome MariadbClient::DescribeDBInstanceDetail(const DescribeDBInstanceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceDetailResponse rsp = DescribeDBInstanceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceDetailOutcome(rsp);
        else
            return DescribeDBInstanceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceDetailOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDBInstanceDetailAsync(const DescribeDBInstanceDetailRequest& request, const DescribeDBInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeDBInstanceDetailOutcomeCallable MariadbClient::DescribeDBInstanceDetailCallable(const DescribeDBInstanceDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DescribeDBInstanceSpecsOutcome MariadbClient::DescribeDBInstanceSpecs(const DescribeDBInstanceSpecsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceSpecs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceSpecsResponse rsp = DescribeDBInstanceSpecsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceSpecsOutcome(rsp);
        else
            return DescribeDBInstanceSpecsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceSpecsOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDBInstanceSpecsAsync(const DescribeDBInstanceSpecsRequest& request, const DescribeDBInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceSpecs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeDBInstanceSpecsOutcomeCallable MariadbClient::DescribeDBInstanceSpecsCallable(const DescribeDBInstanceSpecsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceSpecsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceSpecs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DescribeDBInstancesOutcome MariadbClient::DescribeDBInstances(const DescribeDBInstancesRequest &request)
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

void MariadbClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeDBInstancesOutcomeCallable MariadbClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest &request)
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

MariadbClient::DescribeDBLogFilesOutcome MariadbClient::DescribeDBLogFiles(const DescribeDBLogFilesRequest &request)
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

void MariadbClient::DescribeDBLogFilesAsync(const DescribeDBLogFilesRequest& request, const DescribeDBLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBLogFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeDBLogFilesOutcomeCallable MariadbClient::DescribeDBLogFilesCallable(const DescribeDBLogFilesRequest &request)
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

MariadbClient::DescribeDBParametersOutcome MariadbClient::DescribeDBParameters(const DescribeDBParametersRequest &request)
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

void MariadbClient::DescribeDBParametersAsync(const DescribeDBParametersRequest& request, const DescribeDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBParameters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeDBParametersOutcomeCallable MariadbClient::DescribeDBParametersCallable(const DescribeDBParametersRequest &request)
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

MariadbClient::DescribeDBSecurityGroupsOutcome MariadbClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
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

void MariadbClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeDBSecurityGroupsOutcomeCallable MariadbClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
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

MariadbClient::DescribeDBSlowLogsOutcome MariadbClient::DescribeDBSlowLogs(const DescribeDBSlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSlowLogsResponse rsp = DescribeDBSlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSlowLogsOutcome(rsp);
        else
            return DescribeDBSlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSlowLogsOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDBSlowLogsAsync(const DescribeDBSlowLogsRequest& request, const DescribeDBSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSlowLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeDBSlowLogsOutcomeCallable MariadbClient::DescribeDBSlowLogsCallable(const DescribeDBSlowLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBSlowLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBSlowLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DescribeDBSyncModeOutcome MariadbClient::DescribeDBSyncMode(const DescribeDBSyncModeRequest &request)
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

void MariadbClient::DescribeDBSyncModeAsync(const DescribeDBSyncModeRequest& request, const DescribeDBSyncModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSyncMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeDBSyncModeOutcomeCallable MariadbClient::DescribeDBSyncModeCallable(const DescribeDBSyncModeRequest &request)
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

MariadbClient::DescribeDBTmpInstancesOutcome MariadbClient::DescribeDBTmpInstances(const DescribeDBTmpInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBTmpInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBTmpInstancesResponse rsp = DescribeDBTmpInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBTmpInstancesOutcome(rsp);
        else
            return DescribeDBTmpInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBTmpInstancesOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDBTmpInstancesAsync(const DescribeDBTmpInstancesRequest& request, const DescribeDBTmpInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBTmpInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeDBTmpInstancesOutcomeCallable MariadbClient::DescribeDBTmpInstancesCallable(const DescribeDBTmpInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBTmpInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBTmpInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DescribeDatabaseObjectsOutcome MariadbClient::DescribeDatabaseObjects(const DescribeDatabaseObjectsRequest &request)
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

void MariadbClient::DescribeDatabaseObjectsAsync(const DescribeDatabaseObjectsRequest& request, const DescribeDatabaseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseObjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeDatabaseObjectsOutcomeCallable MariadbClient::DescribeDatabaseObjectsCallable(const DescribeDatabaseObjectsRequest &request)
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

MariadbClient::DescribeDatabaseTableOutcome MariadbClient::DescribeDatabaseTable(const DescribeDatabaseTableRequest &request)
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

void MariadbClient::DescribeDatabaseTableAsync(const DescribeDatabaseTableRequest& request, const DescribeDatabaseTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeDatabaseTableOutcomeCallable MariadbClient::DescribeDatabaseTableCallable(const DescribeDatabaseTableRequest &request)
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

MariadbClient::DescribeDatabasesOutcome MariadbClient::DescribeDatabases(const DescribeDatabasesRequest &request)
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

void MariadbClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeDatabasesOutcomeCallable MariadbClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
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

MariadbClient::DescribeDcnDetailOutcome MariadbClient::DescribeDcnDetail(const DescribeDcnDetailRequest &request)
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

void MariadbClient::DescribeDcnDetailAsync(const DescribeDcnDetailRequest& request, const DescribeDcnDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDcnDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeDcnDetailOutcomeCallable MariadbClient::DescribeDcnDetailCallable(const DescribeDcnDetailRequest &request)
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

MariadbClient::DescribeFileDownloadUrlOutcome MariadbClient::DescribeFileDownloadUrl(const DescribeFileDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileDownloadUrlResponse rsp = DescribeFileDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileDownloadUrlOutcome(rsp);
        else
            return DescribeFileDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeFileDownloadUrlOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeFileDownloadUrlAsync(const DescribeFileDownloadUrlRequest& request, const DescribeFileDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeFileDownloadUrlOutcomeCallable MariadbClient::DescribeFileDownloadUrlCallable(const DescribeFileDownloadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileDownloadUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileDownloadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DescribeFlowOutcome MariadbClient::DescribeFlow(const DescribeFlowRequest &request)
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

void MariadbClient::DescribeFlowAsync(const DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeFlowOutcomeCallable MariadbClient::DescribeFlowCallable(const DescribeFlowRequest &request)
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

MariadbClient::DescribeInstanceNodeInfoOutcome MariadbClient::DescribeInstanceNodeInfo(const DescribeInstanceNodeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodeInfoResponse rsp = DescribeInstanceNodeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodeInfoOutcome(rsp);
        else
            return DescribeInstanceNodeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodeInfoOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeInstanceNodeInfoAsync(const DescribeInstanceNodeInfoRequest& request, const DescribeInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceNodeInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeInstanceNodeInfoOutcomeCallable MariadbClient::DescribeInstanceNodeInfoCallable(const DescribeInstanceNodeInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceNodeInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceNodeInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DescribeLogFileRetentionPeriodOutcome MariadbClient::DescribeLogFileRetentionPeriod(const DescribeLogFileRetentionPeriodRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogFileRetentionPeriod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogFileRetentionPeriodResponse rsp = DescribeLogFileRetentionPeriodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogFileRetentionPeriodOutcome(rsp);
        else
            return DescribeLogFileRetentionPeriodOutcome(o.GetError());
    }
    else
    {
        return DescribeLogFileRetentionPeriodOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeLogFileRetentionPeriodAsync(const DescribeLogFileRetentionPeriodRequest& request, const DescribeLogFileRetentionPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogFileRetentionPeriod(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeLogFileRetentionPeriodOutcomeCallable MariadbClient::DescribeLogFileRetentionPeriodCallable(const DescribeLogFileRetentionPeriodRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogFileRetentionPeriodOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogFileRetentionPeriod(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DescribeOrdersOutcome MariadbClient::DescribeOrders(const DescribeOrdersRequest &request)
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

void MariadbClient::DescribeOrdersAsync(const DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrders(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeOrdersOutcomeCallable MariadbClient::DescribeOrdersCallable(const DescribeOrdersRequest &request)
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

MariadbClient::DescribePriceOutcome MariadbClient::DescribePrice(const DescribePriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePriceResponse rsp = DescribePriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePriceOutcome(rsp);
        else
            return DescribePriceOutcome(o.GetError());
    }
    else
    {
        return DescribePriceOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribePriceAsync(const DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribePriceOutcomeCallable MariadbClient::DescribePriceCallable(const DescribePriceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePriceOutcome()>>(
        [this, request]()
        {
            return this->DescribePrice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DescribeProjectSecurityGroupsOutcome MariadbClient::DescribeProjectSecurityGroups(const DescribeProjectSecurityGroupsRequest &request)
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

void MariadbClient::DescribeProjectSecurityGroupsAsync(const DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeProjectSecurityGroupsOutcomeCallable MariadbClient::DescribeProjectSecurityGroupsCallable(const DescribeProjectSecurityGroupsRequest &request)
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

MariadbClient::DescribeRenewalPriceOutcome MariadbClient::DescribeRenewalPrice(const DescribeRenewalPriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRenewalPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRenewalPriceResponse rsp = DescribeRenewalPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRenewalPriceOutcome(rsp);
        else
            return DescribeRenewalPriceOutcome(o.GetError());
    }
    else
    {
        return DescribeRenewalPriceOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeRenewalPriceAsync(const DescribeRenewalPriceRequest& request, const DescribeRenewalPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRenewalPrice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeRenewalPriceOutcomeCallable MariadbClient::DescribeRenewalPriceCallable(const DescribeRenewalPriceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRenewalPriceOutcome()>>(
        [this, request]()
        {
            return this->DescribeRenewalPrice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DescribeSaleInfoOutcome MariadbClient::DescribeSaleInfo(const DescribeSaleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSaleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSaleInfoResponse rsp = DescribeSaleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSaleInfoOutcome(rsp);
        else
            return DescribeSaleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSaleInfoOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeSaleInfoAsync(const DescribeSaleInfoRequest& request, const DescribeSaleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSaleInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeSaleInfoOutcomeCallable MariadbClient::DescribeSaleInfoCallable(const DescribeSaleInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSaleInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeSaleInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DescribeUpgradePriceOutcome MariadbClient::DescribeUpgradePrice(const DescribeUpgradePriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpgradePrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpgradePriceResponse rsp = DescribeUpgradePriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpgradePriceOutcome(rsp);
        else
            return DescribeUpgradePriceOutcome(o.GetError());
    }
    else
    {
        return DescribeUpgradePriceOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeUpgradePriceAsync(const DescribeUpgradePriceRequest& request, const DescribeUpgradePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUpgradePrice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DescribeUpgradePriceOutcomeCallable MariadbClient::DescribeUpgradePriceCallable(const DescribeUpgradePriceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUpgradePriceOutcome()>>(
        [this, request]()
        {
            return this->DescribeUpgradePrice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DestroyDBInstanceOutcome MariadbClient::DestroyDBInstance(const DestroyDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyDBInstanceResponse rsp = DestroyDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyDBInstanceOutcome(rsp);
        else
            return DestroyDBInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::DestroyDBInstanceAsync(const DestroyDBInstanceRequest& request, const DestroyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DestroyDBInstanceOutcomeCallable MariadbClient::DestroyDBInstanceCallable(const DestroyDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->DestroyDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DestroyHourDBInstanceOutcome MariadbClient::DestroyHourDBInstance(const DestroyHourDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyHourDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyHourDBInstanceResponse rsp = DestroyHourDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyHourDBInstanceOutcome(rsp);
        else
            return DestroyHourDBInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyHourDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::DestroyHourDBInstanceAsync(const DestroyHourDBInstanceRequest& request, const DestroyHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyHourDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DestroyHourDBInstanceOutcomeCallable MariadbClient::DestroyHourDBInstanceCallable(const DestroyHourDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyHourDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->DestroyHourDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::DisassociateSecurityGroupsOutcome MariadbClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
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

void MariadbClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::DisassociateSecurityGroupsOutcomeCallable MariadbClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
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

MariadbClient::FlushBinlogOutcome MariadbClient::FlushBinlog(const FlushBinlogRequest &request)
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

void MariadbClient::FlushBinlogAsync(const FlushBinlogRequest& request, const FlushBinlogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FlushBinlog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::FlushBinlogOutcomeCallable MariadbClient::FlushBinlogCallable(const FlushBinlogRequest &request)
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

MariadbClient::GrantAccountPrivilegesOutcome MariadbClient::GrantAccountPrivileges(const GrantAccountPrivilegesRequest &request)
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

void MariadbClient::GrantAccountPrivilegesAsync(const GrantAccountPrivilegesRequest& request, const GrantAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GrantAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::GrantAccountPrivilegesOutcomeCallable MariadbClient::GrantAccountPrivilegesCallable(const GrantAccountPrivilegesRequest &request)
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

MariadbClient::InitDBInstancesOutcome MariadbClient::InitDBInstances(const InitDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InitDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InitDBInstancesResponse rsp = InitDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InitDBInstancesOutcome(rsp);
        else
            return InitDBInstancesOutcome(o.GetError());
    }
    else
    {
        return InitDBInstancesOutcome(outcome.GetError());
    }
}

void MariadbClient::InitDBInstancesAsync(const InitDBInstancesRequest& request, const InitDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InitDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::InitDBInstancesOutcomeCallable MariadbClient::InitDBInstancesCallable(const InitDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InitDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->InitDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::IsolateDBInstanceOutcome MariadbClient::IsolateDBInstance(const IsolateDBInstanceRequest &request)
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

void MariadbClient::IsolateDBInstanceAsync(const IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::IsolateDBInstanceOutcomeCallable MariadbClient::IsolateDBInstanceCallable(const IsolateDBInstanceRequest &request)
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

MariadbClient::IsolateDedicatedDBInstanceOutcome MariadbClient::IsolateDedicatedDBInstance(const IsolateDedicatedDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateDedicatedDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateDedicatedDBInstanceResponse rsp = IsolateDedicatedDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateDedicatedDBInstanceOutcome(rsp);
        else
            return IsolateDedicatedDBInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateDedicatedDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::IsolateDedicatedDBInstanceAsync(const IsolateDedicatedDBInstanceRequest& request, const IsolateDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateDedicatedDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::IsolateDedicatedDBInstanceOutcomeCallable MariadbClient::IsolateDedicatedDBInstanceCallable(const IsolateDedicatedDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateDedicatedDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->IsolateDedicatedDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::IsolateHourDBInstanceOutcome MariadbClient::IsolateHourDBInstance(const IsolateHourDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateHourDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateHourDBInstanceResponse rsp = IsolateHourDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateHourDBInstanceOutcome(rsp);
        else
            return IsolateHourDBInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateHourDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::IsolateHourDBInstanceAsync(const IsolateHourDBInstanceRequest& request, const IsolateHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateHourDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::IsolateHourDBInstanceOutcomeCallable MariadbClient::IsolateHourDBInstanceCallable(const IsolateHourDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateHourDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->IsolateHourDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::KillSessionOutcome MariadbClient::KillSession(const KillSessionRequest &request)
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

void MariadbClient::KillSessionAsync(const KillSessionRequest& request, const KillSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->KillSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::KillSessionOutcomeCallable MariadbClient::KillSessionCallable(const KillSessionRequest &request)
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

MariadbClient::ModifyAccountDescriptionOutcome MariadbClient::ModifyAccountDescription(const ModifyAccountDescriptionRequest &request)
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

void MariadbClient::ModifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountDescription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifyAccountDescriptionOutcomeCallable MariadbClient::ModifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request)
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

MariadbClient::ModifyAccountPrivilegesOutcome MariadbClient::ModifyAccountPrivileges(const ModifyAccountPrivilegesRequest &request)
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

void MariadbClient::ModifyAccountPrivilegesAsync(const ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifyAccountPrivilegesOutcomeCallable MariadbClient::ModifyAccountPrivilegesCallable(const ModifyAccountPrivilegesRequest &request)
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

MariadbClient::ModifyBackupConfigsOutcome MariadbClient::ModifyBackupConfigs(const ModifyBackupConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupConfigsResponse rsp = ModifyBackupConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupConfigsOutcome(rsp);
        else
            return ModifyBackupConfigsOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupConfigsOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyBackupConfigsAsync(const ModifyBackupConfigsRequest& request, const ModifyBackupConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBackupConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifyBackupConfigsOutcomeCallable MariadbClient::ModifyBackupConfigsCallable(const ModifyBackupConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBackupConfigsOutcome()>>(
        [this, request]()
        {
            return this->ModifyBackupConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::ModifyBackupTimeOutcome MariadbClient::ModifyBackupTime(const ModifyBackupTimeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupTimeResponse rsp = ModifyBackupTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupTimeOutcome(rsp);
        else
            return ModifyBackupTimeOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupTimeOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyBackupTimeAsync(const ModifyBackupTimeRequest& request, const ModifyBackupTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBackupTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifyBackupTimeOutcomeCallable MariadbClient::ModifyBackupTimeCallable(const ModifyBackupTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBackupTimeOutcome()>>(
        [this, request]()
        {
            return this->ModifyBackupTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::ModifyDBEncryptAttributesOutcome MariadbClient::ModifyDBEncryptAttributes(const ModifyDBEncryptAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBEncryptAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBEncryptAttributesResponse rsp = ModifyDBEncryptAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBEncryptAttributesOutcome(rsp);
        else
            return ModifyDBEncryptAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyDBEncryptAttributesOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyDBEncryptAttributesAsync(const ModifyDBEncryptAttributesRequest& request, const ModifyDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBEncryptAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifyDBEncryptAttributesOutcomeCallable MariadbClient::ModifyDBEncryptAttributesCallable(const ModifyDBEncryptAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBEncryptAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBEncryptAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::ModifyDBInstanceNameOutcome MariadbClient::ModifyDBInstanceName(const ModifyDBInstanceNameRequest &request)
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

void MariadbClient::ModifyDBInstanceNameAsync(const ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifyDBInstanceNameOutcomeCallable MariadbClient::ModifyDBInstanceNameCallable(const ModifyDBInstanceNameRequest &request)
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

MariadbClient::ModifyDBInstanceSecurityGroupsOutcome MariadbClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
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

void MariadbClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifyDBInstanceSecurityGroupsOutcomeCallable MariadbClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
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

MariadbClient::ModifyDBInstancesProjectOutcome MariadbClient::ModifyDBInstancesProject(const ModifyDBInstancesProjectRequest &request)
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

void MariadbClient::ModifyDBInstancesProjectAsync(const ModifyDBInstancesProjectRequest& request, const ModifyDBInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstancesProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifyDBInstancesProjectOutcomeCallable MariadbClient::ModifyDBInstancesProjectCallable(const ModifyDBInstancesProjectRequest &request)
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

MariadbClient::ModifyDBParametersOutcome MariadbClient::ModifyDBParameters(const ModifyDBParametersRequest &request)
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

void MariadbClient::ModifyDBParametersAsync(const ModifyDBParametersRequest& request, const ModifyDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBParameters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifyDBParametersOutcomeCallable MariadbClient::ModifyDBParametersCallable(const ModifyDBParametersRequest &request)
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

MariadbClient::ModifyDBSyncModeOutcome MariadbClient::ModifyDBSyncMode(const ModifyDBSyncModeRequest &request)
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

void MariadbClient::ModifyDBSyncModeAsync(const ModifyDBSyncModeRequest& request, const ModifyDBSyncModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBSyncMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifyDBSyncModeOutcomeCallable MariadbClient::ModifyDBSyncModeCallable(const ModifyDBSyncModeRequest &request)
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

MariadbClient::ModifyInstanceNetworkOutcome MariadbClient::ModifyInstanceNetwork(const ModifyInstanceNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceNetworkResponse rsp = ModifyInstanceNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceNetworkOutcome(rsp);
        else
            return ModifyInstanceNetworkOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceNetworkOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyInstanceNetworkAsync(const ModifyInstanceNetworkRequest& request, const ModifyInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceNetwork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifyInstanceNetworkOutcomeCallable MariadbClient::ModifyInstanceNetworkCallable(const ModifyInstanceNetworkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceNetworkOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceNetwork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::ModifyInstanceVipOutcome MariadbClient::ModifyInstanceVip(const ModifyInstanceVipRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceVipResponse rsp = ModifyInstanceVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceVipOutcome(rsp);
        else
            return ModifyInstanceVipOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceVipOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyInstanceVipAsync(const ModifyInstanceVipRequest& request, const ModifyInstanceVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceVip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifyInstanceVipOutcomeCallable MariadbClient::ModifyInstanceVipCallable(const ModifyInstanceVipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceVipOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceVip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::ModifyInstanceVportOutcome MariadbClient::ModifyInstanceVport(const ModifyInstanceVportRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceVport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceVportResponse rsp = ModifyInstanceVportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceVportOutcome(rsp);
        else
            return ModifyInstanceVportOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceVportOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyInstanceVportAsync(const ModifyInstanceVportRequest& request, const ModifyInstanceVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceVport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifyInstanceVportOutcomeCallable MariadbClient::ModifyInstanceVportCallable(const ModifyInstanceVportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceVportOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceVport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::ModifyLogFileRetentionPeriodOutcome MariadbClient::ModifyLogFileRetentionPeriod(const ModifyLogFileRetentionPeriodRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogFileRetentionPeriod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogFileRetentionPeriodResponse rsp = ModifyLogFileRetentionPeriodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogFileRetentionPeriodOutcome(rsp);
        else
            return ModifyLogFileRetentionPeriodOutcome(o.GetError());
    }
    else
    {
        return ModifyLogFileRetentionPeriodOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyLogFileRetentionPeriodAsync(const ModifyLogFileRetentionPeriodRequest& request, const ModifyLogFileRetentionPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLogFileRetentionPeriod(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifyLogFileRetentionPeriodOutcomeCallable MariadbClient::ModifyLogFileRetentionPeriodCallable(const ModifyLogFileRetentionPeriodRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLogFileRetentionPeriodOutcome()>>(
        [this, request]()
        {
            return this->ModifyLogFileRetentionPeriod(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::ModifyRealServerAccessStrategyOutcome MariadbClient::ModifyRealServerAccessStrategy(const ModifyRealServerAccessStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRealServerAccessStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRealServerAccessStrategyResponse rsp = ModifyRealServerAccessStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRealServerAccessStrategyOutcome(rsp);
        else
            return ModifyRealServerAccessStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyRealServerAccessStrategyOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyRealServerAccessStrategyAsync(const ModifyRealServerAccessStrategyRequest& request, const ModifyRealServerAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRealServerAccessStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifyRealServerAccessStrategyOutcomeCallable MariadbClient::ModifyRealServerAccessStrategyCallable(const ModifyRealServerAccessStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRealServerAccessStrategyOutcome()>>(
        [this, request]()
        {
            return this->ModifyRealServerAccessStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::ModifySyncTaskAttributeOutcome MariadbClient::ModifySyncTaskAttribute(const ModifySyncTaskAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySyncTaskAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySyncTaskAttributeResponse rsp = ModifySyncTaskAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySyncTaskAttributeOutcome(rsp);
        else
            return ModifySyncTaskAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifySyncTaskAttributeOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifySyncTaskAttributeAsync(const ModifySyncTaskAttributeRequest& request, const ModifySyncTaskAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySyncTaskAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ModifySyncTaskAttributeOutcomeCallable MariadbClient::ModifySyncTaskAttributeCallable(const ModifySyncTaskAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySyncTaskAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifySyncTaskAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::OpenDBExtranetAccessOutcome MariadbClient::OpenDBExtranetAccess(const OpenDBExtranetAccessRequest &request)
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

void MariadbClient::OpenDBExtranetAccessAsync(const OpenDBExtranetAccessRequest& request, const OpenDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenDBExtranetAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::OpenDBExtranetAccessOutcomeCallable MariadbClient::OpenDBExtranetAccessCallable(const OpenDBExtranetAccessRequest &request)
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

MariadbClient::RenewDBInstanceOutcome MariadbClient::RenewDBInstance(const RenewDBInstanceRequest &request)
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

void MariadbClient::RenewDBInstanceAsync(const RenewDBInstanceRequest& request, const RenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::RenewDBInstanceOutcomeCallable MariadbClient::RenewDBInstanceCallable(const RenewDBInstanceRequest &request)
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

MariadbClient::ResetAccountPasswordOutcome MariadbClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
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

void MariadbClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetAccountPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::ResetAccountPasswordOutcomeCallable MariadbClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
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

MariadbClient::RestartDBInstancesOutcome MariadbClient::RestartDBInstances(const RestartDBInstancesRequest &request)
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

void MariadbClient::RestartDBInstancesAsync(const RestartDBInstancesRequest& request, const RestartDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::RestartDBInstancesOutcomeCallable MariadbClient::RestartDBInstancesCallable(const RestartDBInstancesRequest &request)
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

MariadbClient::SwitchDBInstanceHAOutcome MariadbClient::SwitchDBInstanceHA(const SwitchDBInstanceHARequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDBInstanceHA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDBInstanceHAResponse rsp = SwitchDBInstanceHAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDBInstanceHAOutcome(rsp);
        else
            return SwitchDBInstanceHAOutcome(o.GetError());
    }
    else
    {
        return SwitchDBInstanceHAOutcome(outcome.GetError());
    }
}

void MariadbClient::SwitchDBInstanceHAAsync(const SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchDBInstanceHA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::SwitchDBInstanceHAOutcomeCallable MariadbClient::SwitchDBInstanceHACallable(const SwitchDBInstanceHARequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchDBInstanceHAOutcome()>>(
        [this, request]()
        {
            return this->SwitchDBInstanceHA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::TerminateDedicatedDBInstanceOutcome MariadbClient::TerminateDedicatedDBInstance(const TerminateDedicatedDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateDedicatedDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateDedicatedDBInstanceResponse rsp = TerminateDedicatedDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateDedicatedDBInstanceOutcome(rsp);
        else
            return TerminateDedicatedDBInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateDedicatedDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::TerminateDedicatedDBInstanceAsync(const TerminateDedicatedDBInstanceRequest& request, const TerminateDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateDedicatedDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::TerminateDedicatedDBInstanceOutcomeCallable MariadbClient::TerminateDedicatedDBInstanceCallable(const TerminateDedicatedDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateDedicatedDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->TerminateDedicatedDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::UpgradeDBInstanceOutcome MariadbClient::UpgradeDBInstance(const UpgradeDBInstanceRequest &request)
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

void MariadbClient::UpgradeDBInstanceAsync(const UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::UpgradeDBInstanceOutcomeCallable MariadbClient::UpgradeDBInstanceCallable(const UpgradeDBInstanceRequest &request)
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

MariadbClient::UpgradeDedicatedDBInstanceOutcome MariadbClient::UpgradeDedicatedDBInstance(const UpgradeDedicatedDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDedicatedDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDedicatedDBInstanceResponse rsp = UpgradeDedicatedDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDedicatedDBInstanceOutcome(rsp);
        else
            return UpgradeDedicatedDBInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeDedicatedDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::UpgradeDedicatedDBInstanceAsync(const UpgradeDedicatedDBInstanceRequest& request, const UpgradeDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeDedicatedDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::UpgradeDedicatedDBInstanceOutcomeCallable MariadbClient::UpgradeDedicatedDBInstanceCallable(const UpgradeDedicatedDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeDedicatedDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpgradeDedicatedDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MariadbClient::UpgradeHourDBInstanceOutcome MariadbClient::UpgradeHourDBInstance(const UpgradeHourDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeHourDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeHourDBInstanceResponse rsp = UpgradeHourDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeHourDBInstanceOutcome(rsp);
        else
            return UpgradeHourDBInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeHourDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::UpgradeHourDBInstanceAsync(const UpgradeHourDBInstanceRequest& request, const UpgradeHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeHourDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MariadbClient::UpgradeHourDBInstanceOutcomeCallable MariadbClient::UpgradeHourDBInstanceCallable(const UpgradeHourDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeHourDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpgradeHourDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

