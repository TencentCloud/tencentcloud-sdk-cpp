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

#include <tencentcloud/sqlserver/v20180328/SqlserverClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Sqlserver::V20180328;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-28";
    const string ENDPOINT = "sqlserver.tencentcloudapi.com";
}

SqlserverClient::SqlserverClient(const Credential &credential, const string &region) :
    SqlserverClient(credential, region, ClientProfile())
{
}

SqlserverClient::SqlserverClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SqlserverClient::CreateAccountOutcome SqlserverClient::CreateAccount(const CreateAccountRequest &request)
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

void SqlserverClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateAccountOutcomeCallable SqlserverClient::CreateAccountCallable(const CreateAccountRequest &request)
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

SqlserverClient::CreateBackupOutcome SqlserverClient::CreateBackup(const CreateBackupRequest &request)
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

void SqlserverClient::CreateBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBackup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateBackupOutcomeCallable SqlserverClient::CreateBackupCallable(const CreateBackupRequest &request)
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

SqlserverClient::CreateDBOutcome SqlserverClient::CreateDB(const CreateDBRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBResponse rsp = CreateDBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBOutcome(rsp);
        else
            return CreateDBOutcome(o.GetError());
    }
    else
    {
        return CreateDBOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateDBAsync(const CreateDBRequest& request, const CreateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDB(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateDBOutcomeCallable SqlserverClient::CreateDBCallable(const CreateDBRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBOutcome()>>(
        [this, request]()
        {
            return this->CreateDB(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CreateDBInstancesOutcome SqlserverClient::CreateDBInstances(const CreateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstancesResponse rsp = CreateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstancesOutcome(rsp);
        else
            return CreateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstancesOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateDBInstancesAsync(const CreateDBInstancesRequest& request, const CreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateDBInstancesOutcomeCallable SqlserverClient::CreateDBInstancesCallable(const CreateDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CreateMigrationOutcome SqlserverClient::CreateMigration(const CreateMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMigrationResponse rsp = CreateMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMigrationOutcome(rsp);
        else
            return CreateMigrationOutcome(o.GetError());
    }
    else
    {
        return CreateMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateMigrationAsync(const CreateMigrationRequest& request, const CreateMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateMigrationOutcomeCallable SqlserverClient::CreateMigrationCallable(const CreateMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMigrationOutcome()>>(
        [this, request]()
        {
            return this->CreateMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DeleteAccountOutcome SqlserverClient::DeleteAccount(const DeleteAccountRequest &request)
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

void SqlserverClient::DeleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DeleteAccountOutcomeCallable SqlserverClient::DeleteAccountCallable(const DeleteAccountRequest &request)
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

SqlserverClient::DeleteDBOutcome SqlserverClient::DeleteDB(const DeleteDBRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDBResponse rsp = DeleteDBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDBOutcome(rsp);
        else
            return DeleteDBOutcome(o.GetError());
    }
    else
    {
        return DeleteDBOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteDBAsync(const DeleteDBRequest& request, const DeleteDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDB(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DeleteDBOutcomeCallable SqlserverClient::DeleteDBCallable(const DeleteDBRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDBOutcome()>>(
        [this, request]()
        {
            return this->DeleteDB(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DeleteMigrationOutcome SqlserverClient::DeleteMigration(const DeleteMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMigrationResponse rsp = DeleteMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMigrationOutcome(rsp);
        else
            return DeleteMigrationOutcome(o.GetError());
    }
    else
    {
        return DeleteMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteMigrationAsync(const DeleteMigrationRequest& request, const DeleteMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DeleteMigrationOutcomeCallable SqlserverClient::DeleteMigrationCallable(const DeleteMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMigrationOutcome()>>(
        [this, request]()
        {
            return this->DeleteMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeAccountsOutcome SqlserverClient::DescribeAccounts(const DescribeAccountsRequest &request)
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

void SqlserverClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeAccountsOutcomeCallable SqlserverClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
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

SqlserverClient::DescribeBackupsOutcome SqlserverClient::DescribeBackups(const DescribeBackupsRequest &request)
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

void SqlserverClient::DescribeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeBackupsOutcomeCallable SqlserverClient::DescribeBackupsCallable(const DescribeBackupsRequest &request)
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

SqlserverClient::DescribeDBInstancesOutcome SqlserverClient::DescribeDBInstances(const DescribeDBInstancesRequest &request)
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

void SqlserverClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeDBInstancesOutcomeCallable SqlserverClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest &request)
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

SqlserverClient::DescribeDBsOutcome SqlserverClient::DescribeDBs(const DescribeDBsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBsResponse rsp = DescribeDBsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBsOutcome(rsp);
        else
            return DescribeDBsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBsAsync(const DescribeDBsRequest& request, const DescribeDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeDBsOutcomeCallable SqlserverClient::DescribeDBsCallable(const DescribeDBsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeFlowStatusOutcome SqlserverClient::DescribeFlowStatus(const DescribeFlowStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowStatusResponse rsp = DescribeFlowStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowStatusOutcome(rsp);
        else
            return DescribeFlowStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowStatusOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeFlowStatusAsync(const DescribeFlowStatusRequest& request, const DescribeFlowStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeFlowStatusOutcomeCallable SqlserverClient::DescribeFlowStatusCallable(const DescribeFlowStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeMigrationDetailOutcome SqlserverClient::DescribeMigrationDetail(const DescribeMigrationDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationDetailResponse rsp = DescribeMigrationDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationDetailOutcome(rsp);
        else
            return DescribeMigrationDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationDetailOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeMigrationDetailAsync(const DescribeMigrationDetailRequest& request, const DescribeMigrationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigrationDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeMigrationDetailOutcomeCallable SqlserverClient::DescribeMigrationDetailCallable(const DescribeMigrationDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigrationDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigrationDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeMigrationsOutcome SqlserverClient::DescribeMigrations(const DescribeMigrationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationsResponse rsp = DescribeMigrationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationsOutcome(rsp);
        else
            return DescribeMigrationsOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeMigrationsAsync(const DescribeMigrationsRequest& request, const DescribeMigrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigrations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeMigrationsOutcomeCallable SqlserverClient::DescribeMigrationsCallable(const DescribeMigrationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigrationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigrations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeOrdersOutcome SqlserverClient::DescribeOrders(const DescribeOrdersRequest &request)
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

void SqlserverClient::DescribeOrdersAsync(const DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrders(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeOrdersOutcomeCallable SqlserverClient::DescribeOrdersCallable(const DescribeOrdersRequest &request)
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

SqlserverClient::DescribeProductConfigOutcome SqlserverClient::DescribeProductConfig(const DescribeProductConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductConfigResponse rsp = DescribeProductConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductConfigOutcome(rsp);
        else
            return DescribeProductConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeProductConfigOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeProductConfigAsync(const DescribeProductConfigRequest& request, const DescribeProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeProductConfigOutcomeCallable SqlserverClient::DescribeProductConfigCallable(const DescribeProductConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeRegionsOutcome SqlserverClient::DescribeRegions(const DescribeRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionsResponse rsp = DescribeRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionsOutcome(rsp);
        else
            return DescribeRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeRegionsOutcomeCallable SqlserverClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeRollbackTimeOutcome SqlserverClient::DescribeRollbackTime(const DescribeRollbackTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRollbackTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRollbackTimeResponse rsp = DescribeRollbackTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRollbackTimeOutcome(rsp);
        else
            return DescribeRollbackTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeRollbackTimeOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeRollbackTimeAsync(const DescribeRollbackTimeRequest& request, const DescribeRollbackTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRollbackTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeRollbackTimeOutcomeCallable SqlserverClient::DescribeRollbackTimeCallable(const DescribeRollbackTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRollbackTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeRollbackTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeSlowlogsOutcome SqlserverClient::DescribeSlowlogs(const DescribeSlowlogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowlogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowlogsResponse rsp = DescribeSlowlogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowlogsOutcome(rsp);
        else
            return DescribeSlowlogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowlogsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeSlowlogsAsync(const DescribeSlowlogsRequest& request, const DescribeSlowlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowlogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeSlowlogsOutcomeCallable SqlserverClient::DescribeSlowlogsCallable(const DescribeSlowlogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowlogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowlogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeZonesOutcome SqlserverClient::DescribeZones(const DescribeZonesRequest &request)
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

void SqlserverClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZones(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeZonesOutcomeCallable SqlserverClient::DescribeZonesCallable(const DescribeZonesRequest &request)
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

SqlserverClient::InquiryPriceCreateDBInstancesOutcome SqlserverClient::InquiryPriceCreateDBInstances(const InquiryPriceCreateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateDBInstancesResponse rsp = InquiryPriceCreateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateDBInstancesOutcome(rsp);
        else
            return InquiryPriceCreateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateDBInstancesOutcome(outcome.GetError());
    }
}

void SqlserverClient::InquiryPriceCreateDBInstancesAsync(const InquiryPriceCreateDBInstancesRequest& request, const InquiryPriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::InquiryPriceCreateDBInstancesOutcomeCallable SqlserverClient::InquiryPriceCreateDBInstancesCallable(const InquiryPriceCreateDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceCreateDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceCreateDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::InquiryPriceRenewDBInstanceOutcome SqlserverClient::InquiryPriceRenewDBInstance(const InquiryPriceRenewDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewDBInstanceResponse rsp = InquiryPriceRenewDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewDBInstanceOutcome(rsp);
        else
            return InquiryPriceRenewDBInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewDBInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::InquiryPriceRenewDBInstanceAsync(const InquiryPriceRenewDBInstanceRequest& request, const InquiryPriceRenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRenewDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::InquiryPriceRenewDBInstanceOutcomeCallable SqlserverClient::InquiryPriceRenewDBInstanceCallable(const InquiryPriceRenewDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRenewDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRenewDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::InquiryPriceUpgradeDBInstanceOutcome SqlserverClient::InquiryPriceUpgradeDBInstance(const InquiryPriceUpgradeDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceUpgradeDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceUpgradeDBInstanceResponse rsp = InquiryPriceUpgradeDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceUpgradeDBInstanceOutcome(rsp);
        else
            return InquiryPriceUpgradeDBInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceUpgradeDBInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::InquiryPriceUpgradeDBInstanceAsync(const InquiryPriceUpgradeDBInstanceRequest& request, const InquiryPriceUpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceUpgradeDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::InquiryPriceUpgradeDBInstanceOutcomeCallable SqlserverClient::InquiryPriceUpgradeDBInstanceCallable(const InquiryPriceUpgradeDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceUpgradeDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceUpgradeDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyAccountPrivilegeOutcome SqlserverClient::ModifyAccountPrivilege(const ModifyAccountPrivilegeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountPrivilege");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountPrivilegeResponse rsp = ModifyAccountPrivilegeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountPrivilegeOutcome(rsp);
        else
            return ModifyAccountPrivilegeOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountPrivilegeOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyAccountPrivilegeAsync(const ModifyAccountPrivilegeRequest& request, const ModifyAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountPrivilege(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyAccountPrivilegeOutcomeCallable SqlserverClient::ModifyAccountPrivilegeCallable(const ModifyAccountPrivilegeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccountPrivilegeOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccountPrivilege(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyAccountRemarkOutcome SqlserverClient::ModifyAccountRemark(const ModifyAccountRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountRemarkResponse rsp = ModifyAccountRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountRemarkOutcome(rsp);
        else
            return ModifyAccountRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountRemarkOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyAccountRemarkAsync(const ModifyAccountRemarkRequest& request, const ModifyAccountRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountRemark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyAccountRemarkOutcomeCallable SqlserverClient::ModifyAccountRemarkCallable(const ModifyAccountRemarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccountRemarkOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccountRemark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDBInstanceNameOutcome SqlserverClient::ModifyDBInstanceName(const ModifyDBInstanceNameRequest &request)
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

void SqlserverClient::ModifyDBInstanceNameAsync(const ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDBInstanceNameOutcomeCallable SqlserverClient::ModifyDBInstanceNameCallable(const ModifyDBInstanceNameRequest &request)
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

SqlserverClient::ModifyDBInstanceProjectOutcome SqlserverClient::ModifyDBInstanceProject(const ModifyDBInstanceProjectRequest &request)
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

void SqlserverClient::ModifyDBInstanceProjectAsync(const ModifyDBInstanceProjectRequest& request, const ModifyDBInstanceProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDBInstanceProjectOutcomeCallable SqlserverClient::ModifyDBInstanceProjectCallable(const ModifyDBInstanceProjectRequest &request)
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

SqlserverClient::ModifyDBInstanceRenewFlagOutcome SqlserverClient::ModifyDBInstanceRenewFlag(const ModifyDBInstanceRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceRenewFlagResponse rsp = ModifyDBInstanceRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceRenewFlagOutcome(rsp);
        else
            return ModifyDBInstanceRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceRenewFlagOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBInstanceRenewFlagAsync(const ModifyDBInstanceRenewFlagRequest& request, const ModifyDBInstanceRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDBInstanceRenewFlagOutcomeCallable SqlserverClient::ModifyDBInstanceRenewFlagCallable(const ModifyDBInstanceRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDBNameOutcome SqlserverClient::ModifyDBName(const ModifyDBNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBNameResponse rsp = ModifyDBNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBNameOutcome(rsp);
        else
            return ModifyDBNameOutcome(o.GetError());
    }
    else
    {
        return ModifyDBNameOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBNameAsync(const ModifyDBNameRequest& request, const ModifyDBNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDBNameOutcomeCallable SqlserverClient::ModifyDBNameCallable(const ModifyDBNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDBRemarkOutcome SqlserverClient::ModifyDBRemark(const ModifyDBRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBRemarkResponse rsp = ModifyDBRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBRemarkOutcome(rsp);
        else
            return ModifyDBRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyDBRemarkOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBRemarkAsync(const ModifyDBRemarkRequest& request, const ModifyDBRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBRemark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDBRemarkOutcomeCallable SqlserverClient::ModifyDBRemarkCallable(const ModifyDBRemarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBRemarkOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBRemark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyMigrationOutcome SqlserverClient::ModifyMigration(const ModifyMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrationResponse rsp = ModifyMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrationOutcome(rsp);
        else
            return ModifyMigrationOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyMigrationAsync(const ModifyMigrationRequest& request, const ModifyMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyMigrationOutcomeCallable SqlserverClient::ModifyMigrationCallable(const ModifyMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMigrationOutcome()>>(
        [this, request]()
        {
            return this->ModifyMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::RenewDBInstanceOutcome SqlserverClient::RenewDBInstance(const RenewDBInstanceRequest &request)
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

void SqlserverClient::RenewDBInstanceAsync(const RenewDBInstanceRequest& request, const RenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::RenewDBInstanceOutcomeCallable SqlserverClient::RenewDBInstanceCallable(const RenewDBInstanceRequest &request)
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

SqlserverClient::ResetAccountPasswordOutcome SqlserverClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
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

void SqlserverClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetAccountPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ResetAccountPasswordOutcomeCallable SqlserverClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
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

SqlserverClient::RestartDBInstanceOutcome SqlserverClient::RestartDBInstance(const RestartDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartDBInstanceResponse rsp = RestartDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartDBInstanceOutcome(rsp);
        else
            return RestartDBInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartDBInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::RestartDBInstanceAsync(const RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::RestartDBInstanceOutcomeCallable SqlserverClient::RestartDBInstanceCallable(const RestartDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->RestartDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::RestoreInstanceOutcome SqlserverClient::RestoreInstance(const RestoreInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestoreInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestoreInstanceResponse rsp = RestoreInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestoreInstanceOutcome(rsp);
        else
            return RestoreInstanceOutcome(o.GetError());
    }
    else
    {
        return RestoreInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::RestoreInstanceAsync(const RestoreInstanceRequest& request, const RestoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestoreInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::RestoreInstanceOutcomeCallable SqlserverClient::RestoreInstanceCallable(const RestoreInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestoreInstanceOutcome()>>(
        [this, request]()
        {
            return this->RestoreInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::RollbackInstanceOutcome SqlserverClient::RollbackInstance(const RollbackInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackInstanceResponse rsp = RollbackInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackInstanceOutcome(rsp);
        else
            return RollbackInstanceOutcome(o.GetError());
    }
    else
    {
        return RollbackInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::RollbackInstanceAsync(const RollbackInstanceRequest& request, const RollbackInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollbackInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::RollbackInstanceOutcomeCallable SqlserverClient::RollbackInstanceCallable(const RollbackInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollbackInstanceOutcome()>>(
        [this, request]()
        {
            return this->RollbackInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::RunMigrationOutcome SqlserverClient::RunMigration(const RunMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "RunMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunMigrationResponse rsp = RunMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunMigrationOutcome(rsp);
        else
            return RunMigrationOutcome(o.GetError());
    }
    else
    {
        return RunMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::RunMigrationAsync(const RunMigrationRequest& request, const RunMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::RunMigrationOutcomeCallable SqlserverClient::RunMigrationCallable(const RunMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunMigrationOutcome()>>(
        [this, request]()
        {
            return this->RunMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::UpgradeDBInstanceOutcome SqlserverClient::UpgradeDBInstance(const UpgradeDBInstanceRequest &request)
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

void SqlserverClient::UpgradeDBInstanceAsync(const UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::UpgradeDBInstanceOutcomeCallable SqlserverClient::UpgradeDBInstanceCallable(const UpgradeDBInstanceRequest &request)
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

