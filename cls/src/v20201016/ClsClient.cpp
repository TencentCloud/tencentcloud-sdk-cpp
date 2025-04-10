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

#include <tencentcloud/cls/v20201016/ClsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cls::V20201016;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-10-16";
    const string ENDPOINT = "cls.tencentcloudapi.com";
}

ClsClient::ClsClient(const Credential &credential, const string &region) :
    ClsClient(credential, region, ClientProfile())
{
}

ClsClient::ClsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ClsClient::AddMachineGroupInfoOutcome ClsClient::AddMachineGroupInfo(const AddMachineGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "AddMachineGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddMachineGroupInfoResponse rsp = AddMachineGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddMachineGroupInfoOutcome(rsp);
        else
            return AddMachineGroupInfoOutcome(o.GetError());
    }
    else
    {
        return AddMachineGroupInfoOutcome(outcome.GetError());
    }
}

void ClsClient::AddMachineGroupInfoAsync(const AddMachineGroupInfoRequest& request, const AddMachineGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddMachineGroupInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::AddMachineGroupInfoOutcomeCallable ClsClient::AddMachineGroupInfoCallable(const AddMachineGroupInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddMachineGroupInfoOutcome()>>(
        [this, request]()
        {
            return this->AddMachineGroupInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ApplyConfigToMachineGroupOutcome ClsClient::ApplyConfigToMachineGroup(const ApplyConfigToMachineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyConfigToMachineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyConfigToMachineGroupResponse rsp = ApplyConfigToMachineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyConfigToMachineGroupOutcome(rsp);
        else
            return ApplyConfigToMachineGroupOutcome(o.GetError());
    }
    else
    {
        return ApplyConfigToMachineGroupOutcome(outcome.GetError());
    }
}

void ClsClient::ApplyConfigToMachineGroupAsync(const ApplyConfigToMachineGroupRequest& request, const ApplyConfigToMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyConfigToMachineGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ApplyConfigToMachineGroupOutcomeCallable ClsClient::ApplyConfigToMachineGroupCallable(const ApplyConfigToMachineGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyConfigToMachineGroupOutcome()>>(
        [this, request]()
        {
            return this->ApplyConfigToMachineGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CheckFunctionOutcome ClsClient::CheckFunction(const CheckFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "CheckFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckFunctionResponse rsp = CheckFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckFunctionOutcome(rsp);
        else
            return CheckFunctionOutcome(o.GetError());
    }
    else
    {
        return CheckFunctionOutcome(outcome.GetError());
    }
}

void ClsClient::CheckFunctionAsync(const CheckFunctionRequest& request, const CheckFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CheckFunctionOutcomeCallable ClsClient::CheckFunctionCallable(const CheckFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckFunctionOutcome()>>(
        [this, request]()
        {
            return this->CheckFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CheckRechargeKafkaServerOutcome ClsClient::CheckRechargeKafkaServer(const CheckRechargeKafkaServerRequest &request)
{
    auto outcome = MakeRequest(request, "CheckRechargeKafkaServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckRechargeKafkaServerResponse rsp = CheckRechargeKafkaServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckRechargeKafkaServerOutcome(rsp);
        else
            return CheckRechargeKafkaServerOutcome(o.GetError());
    }
    else
    {
        return CheckRechargeKafkaServerOutcome(outcome.GetError());
    }
}

void ClsClient::CheckRechargeKafkaServerAsync(const CheckRechargeKafkaServerRequest& request, const CheckRechargeKafkaServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckRechargeKafkaServer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CheckRechargeKafkaServerOutcomeCallable ClsClient::CheckRechargeKafkaServerCallable(const CheckRechargeKafkaServerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckRechargeKafkaServerOutcome()>>(
        [this, request]()
        {
            return this->CheckRechargeKafkaServer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CloseKafkaConsumerOutcome ClsClient::CloseKafkaConsumer(const CloseKafkaConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "CloseKafkaConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseKafkaConsumerResponse rsp = CloseKafkaConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseKafkaConsumerOutcome(rsp);
        else
            return CloseKafkaConsumerOutcome(o.GetError());
    }
    else
    {
        return CloseKafkaConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::CloseKafkaConsumerAsync(const CloseKafkaConsumerRequest& request, const CloseKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseKafkaConsumer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CloseKafkaConsumerOutcomeCallable ClsClient::CloseKafkaConsumerCallable(const CloseKafkaConsumerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseKafkaConsumerOutcome()>>(
        [this, request]()
        {
            return this->CloseKafkaConsumer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateAlarmOutcome ClsClient::CreateAlarm(const CreateAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlarmResponse rsp = CreateAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlarmOutcome(rsp);
        else
            return CreateAlarmOutcome(o.GetError());
    }
    else
    {
        return CreateAlarmOutcome(outcome.GetError());
    }
}

void ClsClient::CreateAlarmAsync(const CreateAlarmRequest& request, const CreateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAlarm(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateAlarmOutcomeCallable ClsClient::CreateAlarmCallable(const CreateAlarmRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAlarmOutcome()>>(
        [this, request]()
        {
            return this->CreateAlarm(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateAlarmNoticeOutcome ClsClient::CreateAlarmNotice(const CreateAlarmNoticeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlarmNotice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlarmNoticeResponse rsp = CreateAlarmNoticeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlarmNoticeOutcome(rsp);
        else
            return CreateAlarmNoticeOutcome(o.GetError());
    }
    else
    {
        return CreateAlarmNoticeOutcome(outcome.GetError());
    }
}

void ClsClient::CreateAlarmNoticeAsync(const CreateAlarmNoticeRequest& request, const CreateAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAlarmNotice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateAlarmNoticeOutcomeCallable ClsClient::CreateAlarmNoticeCallable(const CreateAlarmNoticeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAlarmNoticeOutcome()>>(
        [this, request]()
        {
            return this->CreateAlarmNotice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateAlarmShieldOutcome ClsClient::CreateAlarmShield(const CreateAlarmShieldRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlarmShield");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlarmShieldResponse rsp = CreateAlarmShieldResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlarmShieldOutcome(rsp);
        else
            return CreateAlarmShieldOutcome(o.GetError());
    }
    else
    {
        return CreateAlarmShieldOutcome(outcome.GetError());
    }
}

void ClsClient::CreateAlarmShieldAsync(const CreateAlarmShieldRequest& request, const CreateAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAlarmShield(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateAlarmShieldOutcomeCallable ClsClient::CreateAlarmShieldCallable(const CreateAlarmShieldRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAlarmShieldOutcome()>>(
        [this, request]()
        {
            return this->CreateAlarmShield(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateCloudProductLogCollectionOutcome ClsClient::CreateCloudProductLogCollection(const CreateCloudProductLogCollectionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudProductLogCollection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudProductLogCollectionResponse rsp = CreateCloudProductLogCollectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudProductLogCollectionOutcome(rsp);
        else
            return CreateCloudProductLogCollectionOutcome(o.GetError());
    }
    else
    {
        return CreateCloudProductLogCollectionOutcome(outcome.GetError());
    }
}

void ClsClient::CreateCloudProductLogCollectionAsync(const CreateCloudProductLogCollectionRequest& request, const CreateCloudProductLogCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudProductLogCollection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateCloudProductLogCollectionOutcomeCallable ClsClient::CreateCloudProductLogCollectionCallable(const CreateCloudProductLogCollectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudProductLogCollectionOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudProductLogCollection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateConfigOutcome ClsClient::CreateConfig(const CreateConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigResponse rsp = CreateConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigOutcome(rsp);
        else
            return CreateConfigOutcome(o.GetError());
    }
    else
    {
        return CreateConfigOutcome(outcome.GetError());
    }
}

void ClsClient::CreateConfigAsync(const CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateConfigOutcomeCallable ClsClient::CreateConfigCallable(const CreateConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateConfigExtraOutcome ClsClient::CreateConfigExtra(const CreateConfigExtraRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfigExtra");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigExtraResponse rsp = CreateConfigExtraResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigExtraOutcome(rsp);
        else
            return CreateConfigExtraOutcome(o.GetError());
    }
    else
    {
        return CreateConfigExtraOutcome(outcome.GetError());
    }
}

void ClsClient::CreateConfigExtraAsync(const CreateConfigExtraRequest& request, const CreateConfigExtraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConfigExtra(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateConfigExtraOutcomeCallable ClsClient::CreateConfigExtraCallable(const CreateConfigExtraRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConfigExtraOutcome()>>(
        [this, request]()
        {
            return this->CreateConfigExtra(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateConsoleSharingOutcome ClsClient::CreateConsoleSharing(const CreateConsoleSharingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsoleSharing");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsoleSharingResponse rsp = CreateConsoleSharingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsoleSharingOutcome(rsp);
        else
            return CreateConsoleSharingOutcome(o.GetError());
    }
    else
    {
        return CreateConsoleSharingOutcome(outcome.GetError());
    }
}

void ClsClient::CreateConsoleSharingAsync(const CreateConsoleSharingRequest& request, const CreateConsoleSharingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConsoleSharing(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateConsoleSharingOutcomeCallable ClsClient::CreateConsoleSharingCallable(const CreateConsoleSharingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConsoleSharingOutcome()>>(
        [this, request]()
        {
            return this->CreateConsoleSharing(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateConsumerOutcome ClsClient::CreateConsumer(const CreateConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsumerResponse rsp = CreateConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsumerOutcome(rsp);
        else
            return CreateConsumerOutcome(o.GetError());
    }
    else
    {
        return CreateConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::CreateConsumerAsync(const CreateConsumerRequest& request, const CreateConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConsumer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateConsumerOutcomeCallable ClsClient::CreateConsumerCallable(const CreateConsumerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConsumerOutcome()>>(
        [this, request]()
        {
            return this->CreateConsumer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateCosRechargeOutcome ClsClient::CreateCosRecharge(const CreateCosRechargeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCosRecharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCosRechargeResponse rsp = CreateCosRechargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCosRechargeOutcome(rsp);
        else
            return CreateCosRechargeOutcome(o.GetError());
    }
    else
    {
        return CreateCosRechargeOutcome(outcome.GetError());
    }
}

void ClsClient::CreateCosRechargeAsync(const CreateCosRechargeRequest& request, const CreateCosRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCosRecharge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateCosRechargeOutcomeCallable ClsClient::CreateCosRechargeCallable(const CreateCosRechargeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCosRechargeOutcome()>>(
        [this, request]()
        {
            return this->CreateCosRecharge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateDashboardSubscribeOutcome ClsClient::CreateDashboardSubscribe(const CreateDashboardSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDashboardSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDashboardSubscribeResponse rsp = CreateDashboardSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDashboardSubscribeOutcome(rsp);
        else
            return CreateDashboardSubscribeOutcome(o.GetError());
    }
    else
    {
        return CreateDashboardSubscribeOutcome(outcome.GetError());
    }
}

void ClsClient::CreateDashboardSubscribeAsync(const CreateDashboardSubscribeRequest& request, const CreateDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDashboardSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateDashboardSubscribeOutcomeCallable ClsClient::CreateDashboardSubscribeCallable(const CreateDashboardSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDashboardSubscribeOutcome()>>(
        [this, request]()
        {
            return this->CreateDashboardSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateDataTransformOutcome ClsClient::CreateDataTransform(const CreateDataTransformRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataTransform");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataTransformResponse rsp = CreateDataTransformResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataTransformOutcome(rsp);
        else
            return CreateDataTransformOutcome(o.GetError());
    }
    else
    {
        return CreateDataTransformOutcome(outcome.GetError());
    }
}

void ClsClient::CreateDataTransformAsync(const CreateDataTransformRequest& request, const CreateDataTransformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDataTransform(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateDataTransformOutcomeCallable ClsClient::CreateDataTransformCallable(const CreateDataTransformRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDataTransformOutcome()>>(
        [this, request]()
        {
            return this->CreateDataTransform(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateDeliverCloudFunctionOutcome ClsClient::CreateDeliverCloudFunction(const CreateDeliverCloudFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeliverCloudFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeliverCloudFunctionResponse rsp = CreateDeliverCloudFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeliverCloudFunctionOutcome(rsp);
        else
            return CreateDeliverCloudFunctionOutcome(o.GetError());
    }
    else
    {
        return CreateDeliverCloudFunctionOutcome(outcome.GetError());
    }
}

void ClsClient::CreateDeliverCloudFunctionAsync(const CreateDeliverCloudFunctionRequest& request, const CreateDeliverCloudFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDeliverCloudFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateDeliverCloudFunctionOutcomeCallable ClsClient::CreateDeliverCloudFunctionCallable(const CreateDeliverCloudFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDeliverCloudFunctionOutcome()>>(
        [this, request]()
        {
            return this->CreateDeliverCloudFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateExportOutcome ClsClient::CreateExport(const CreateExportRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExportResponse rsp = CreateExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExportOutcome(rsp);
        else
            return CreateExportOutcome(o.GetError());
    }
    else
    {
        return CreateExportOutcome(outcome.GetError());
    }
}

void ClsClient::CreateExportAsync(const CreateExportRequest& request, const CreateExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateExportOutcomeCallable ClsClient::CreateExportCallable(const CreateExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateExportOutcome()>>(
        [this, request]()
        {
            return this->CreateExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateIndexOutcome ClsClient::CreateIndex(const CreateIndexRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIndexResponse rsp = CreateIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIndexOutcome(rsp);
        else
            return CreateIndexOutcome(o.GetError());
    }
    else
    {
        return CreateIndexOutcome(outcome.GetError());
    }
}

void ClsClient::CreateIndexAsync(const CreateIndexRequest& request, const CreateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateIndexOutcomeCallable ClsClient::CreateIndexCallable(const CreateIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIndexOutcome()>>(
        [this, request]()
        {
            return this->CreateIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateKafkaRechargeOutcome ClsClient::CreateKafkaRecharge(const CreateKafkaRechargeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKafkaRecharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKafkaRechargeResponse rsp = CreateKafkaRechargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKafkaRechargeOutcome(rsp);
        else
            return CreateKafkaRechargeOutcome(o.GetError());
    }
    else
    {
        return CreateKafkaRechargeOutcome(outcome.GetError());
    }
}

void ClsClient::CreateKafkaRechargeAsync(const CreateKafkaRechargeRequest& request, const CreateKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateKafkaRecharge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateKafkaRechargeOutcomeCallable ClsClient::CreateKafkaRechargeCallable(const CreateKafkaRechargeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateKafkaRechargeOutcome()>>(
        [this, request]()
        {
            return this->CreateKafkaRecharge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateLogsetOutcome ClsClient::CreateLogset(const CreateLogsetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLogset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLogsetResponse rsp = CreateLogsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLogsetOutcome(rsp);
        else
            return CreateLogsetOutcome(o.GetError());
    }
    else
    {
        return CreateLogsetOutcome(outcome.GetError());
    }
}

void ClsClient::CreateLogsetAsync(const CreateLogsetRequest& request, const CreateLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLogset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateLogsetOutcomeCallable ClsClient::CreateLogsetCallable(const CreateLogsetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLogsetOutcome()>>(
        [this, request]()
        {
            return this->CreateLogset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateMachineGroupOutcome ClsClient::CreateMachineGroup(const CreateMachineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMachineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMachineGroupResponse rsp = CreateMachineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMachineGroupOutcome(rsp);
        else
            return CreateMachineGroupOutcome(o.GetError());
    }
    else
    {
        return CreateMachineGroupOutcome(outcome.GetError());
    }
}

void ClsClient::CreateMachineGroupAsync(const CreateMachineGroupRequest& request, const CreateMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMachineGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateMachineGroupOutcomeCallable ClsClient::CreateMachineGroupCallable(const CreateMachineGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMachineGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateMachineGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateNoticeContentOutcome ClsClient::CreateNoticeContent(const CreateNoticeContentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNoticeContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNoticeContentResponse rsp = CreateNoticeContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNoticeContentOutcome(rsp);
        else
            return CreateNoticeContentOutcome(o.GetError());
    }
    else
    {
        return CreateNoticeContentOutcome(outcome.GetError());
    }
}

void ClsClient::CreateNoticeContentAsync(const CreateNoticeContentRequest& request, const CreateNoticeContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNoticeContent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateNoticeContentOutcomeCallable ClsClient::CreateNoticeContentCallable(const CreateNoticeContentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNoticeContentOutcome()>>(
        [this, request]()
        {
            return this->CreateNoticeContent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateScheduledSqlOutcome ClsClient::CreateScheduledSql(const CreateScheduledSqlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScheduledSql");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScheduledSqlResponse rsp = CreateScheduledSqlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScheduledSqlOutcome(rsp);
        else
            return CreateScheduledSqlOutcome(o.GetError());
    }
    else
    {
        return CreateScheduledSqlOutcome(outcome.GetError());
    }
}

void ClsClient::CreateScheduledSqlAsync(const CreateScheduledSqlRequest& request, const CreateScheduledSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateScheduledSql(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateScheduledSqlOutcomeCallable ClsClient::CreateScheduledSqlCallable(const CreateScheduledSqlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScheduledSqlOutcome()>>(
        [this, request]()
        {
            return this->CreateScheduledSql(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateShipperOutcome ClsClient::CreateShipper(const CreateShipperRequest &request)
{
    auto outcome = MakeRequest(request, "CreateShipper");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateShipperResponse rsp = CreateShipperResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateShipperOutcome(rsp);
        else
            return CreateShipperOutcome(o.GetError());
    }
    else
    {
        return CreateShipperOutcome(outcome.GetError());
    }
}

void ClsClient::CreateShipperAsync(const CreateShipperRequest& request, const CreateShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateShipper(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateShipperOutcomeCallable ClsClient::CreateShipperCallable(const CreateShipperRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateShipperOutcome()>>(
        [this, request]()
        {
            return this->CreateShipper(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateTopicOutcome ClsClient::CreateTopic(const CreateTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTopicResponse rsp = CreateTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTopicOutcome(rsp);
        else
            return CreateTopicOutcome(o.GetError());
    }
    else
    {
        return CreateTopicOutcome(outcome.GetError());
    }
}

void ClsClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateTopicOutcomeCallable ClsClient::CreateTopicCallable(const CreateTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTopicOutcome()>>(
        [this, request]()
        {
            return this->CreateTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateWebCallbackOutcome ClsClient::CreateWebCallback(const CreateWebCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWebCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWebCallbackResponse rsp = CreateWebCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWebCallbackOutcome(rsp);
        else
            return CreateWebCallbackOutcome(o.GetError());
    }
    else
    {
        return CreateWebCallbackOutcome(outcome.GetError());
    }
}

void ClsClient::CreateWebCallbackAsync(const CreateWebCallbackRequest& request, const CreateWebCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWebCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateWebCallbackOutcomeCallable ClsClient::CreateWebCallbackCallable(const CreateWebCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWebCallbackOutcome()>>(
        [this, request]()
        {
            return this->CreateWebCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteAlarmOutcome ClsClient::DeleteAlarm(const DeleteAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAlarmResponse rsp = DeleteAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAlarmOutcome(rsp);
        else
            return DeleteAlarmOutcome(o.GetError());
    }
    else
    {
        return DeleteAlarmOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteAlarmAsync(const DeleteAlarmRequest& request, const DeleteAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAlarm(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteAlarmOutcomeCallable ClsClient::DeleteAlarmCallable(const DeleteAlarmRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAlarmOutcome()>>(
        [this, request]()
        {
            return this->DeleteAlarm(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteAlarmNoticeOutcome ClsClient::DeleteAlarmNotice(const DeleteAlarmNoticeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlarmNotice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAlarmNoticeResponse rsp = DeleteAlarmNoticeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAlarmNoticeOutcome(rsp);
        else
            return DeleteAlarmNoticeOutcome(o.GetError());
    }
    else
    {
        return DeleteAlarmNoticeOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteAlarmNoticeAsync(const DeleteAlarmNoticeRequest& request, const DeleteAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAlarmNotice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteAlarmNoticeOutcomeCallable ClsClient::DeleteAlarmNoticeCallable(const DeleteAlarmNoticeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAlarmNoticeOutcome()>>(
        [this, request]()
        {
            return this->DeleteAlarmNotice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteAlarmShieldOutcome ClsClient::DeleteAlarmShield(const DeleteAlarmShieldRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlarmShield");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAlarmShieldResponse rsp = DeleteAlarmShieldResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAlarmShieldOutcome(rsp);
        else
            return DeleteAlarmShieldOutcome(o.GetError());
    }
    else
    {
        return DeleteAlarmShieldOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteAlarmShieldAsync(const DeleteAlarmShieldRequest& request, const DeleteAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAlarmShield(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteAlarmShieldOutcomeCallable ClsClient::DeleteAlarmShieldCallable(const DeleteAlarmShieldRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAlarmShieldOutcome()>>(
        [this, request]()
        {
            return this->DeleteAlarmShield(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteCloudProductLogCollectionOutcome ClsClient::DeleteCloudProductLogCollection(const DeleteCloudProductLogCollectionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudProductLogCollection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudProductLogCollectionResponse rsp = DeleteCloudProductLogCollectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudProductLogCollectionOutcome(rsp);
        else
            return DeleteCloudProductLogCollectionOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudProductLogCollectionOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteCloudProductLogCollectionAsync(const DeleteCloudProductLogCollectionRequest& request, const DeleteCloudProductLogCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudProductLogCollection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteCloudProductLogCollectionOutcomeCallable ClsClient::DeleteCloudProductLogCollectionCallable(const DeleteCloudProductLogCollectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudProductLogCollectionOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudProductLogCollection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteConfigOutcome ClsClient::DeleteConfig(const DeleteConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigResponse rsp = DeleteConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigOutcome(rsp);
        else
            return DeleteConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteConfigAsync(const DeleteConfigRequest& request, const DeleteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteConfigOutcomeCallable ClsClient::DeleteConfigCallable(const DeleteConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteConfigExtraOutcome ClsClient::DeleteConfigExtra(const DeleteConfigExtraRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfigExtra");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigExtraResponse rsp = DeleteConfigExtraResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigExtraOutcome(rsp);
        else
            return DeleteConfigExtraOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigExtraOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteConfigExtraAsync(const DeleteConfigExtraRequest& request, const DeleteConfigExtraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConfigExtra(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteConfigExtraOutcomeCallable ClsClient::DeleteConfigExtraCallable(const DeleteConfigExtraRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConfigExtraOutcome()>>(
        [this, request]()
        {
            return this->DeleteConfigExtra(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteConfigFromMachineGroupOutcome ClsClient::DeleteConfigFromMachineGroup(const DeleteConfigFromMachineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfigFromMachineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigFromMachineGroupResponse rsp = DeleteConfigFromMachineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigFromMachineGroupOutcome(rsp);
        else
            return DeleteConfigFromMachineGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigFromMachineGroupOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteConfigFromMachineGroupAsync(const DeleteConfigFromMachineGroupRequest& request, const DeleteConfigFromMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConfigFromMachineGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteConfigFromMachineGroupOutcomeCallable ClsClient::DeleteConfigFromMachineGroupCallable(const DeleteConfigFromMachineGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConfigFromMachineGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteConfigFromMachineGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteConsoleSharingOutcome ClsClient::DeleteConsoleSharing(const DeleteConsoleSharingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConsoleSharing");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConsoleSharingResponse rsp = DeleteConsoleSharingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConsoleSharingOutcome(rsp);
        else
            return DeleteConsoleSharingOutcome(o.GetError());
    }
    else
    {
        return DeleteConsoleSharingOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteConsoleSharingAsync(const DeleteConsoleSharingRequest& request, const DeleteConsoleSharingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConsoleSharing(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteConsoleSharingOutcomeCallable ClsClient::DeleteConsoleSharingCallable(const DeleteConsoleSharingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConsoleSharingOutcome()>>(
        [this, request]()
        {
            return this->DeleteConsoleSharing(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteConsumerOutcome ClsClient::DeleteConsumer(const DeleteConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConsumerResponse rsp = DeleteConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConsumerOutcome(rsp);
        else
            return DeleteConsumerOutcome(o.GetError());
    }
    else
    {
        return DeleteConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteConsumerAsync(const DeleteConsumerRequest& request, const DeleteConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConsumer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteConsumerOutcomeCallable ClsClient::DeleteConsumerCallable(const DeleteConsumerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConsumerOutcome()>>(
        [this, request]()
        {
            return this->DeleteConsumer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteCosRechargeOutcome ClsClient::DeleteCosRecharge(const DeleteCosRechargeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCosRecharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCosRechargeResponse rsp = DeleteCosRechargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCosRechargeOutcome(rsp);
        else
            return DeleteCosRechargeOutcome(o.GetError());
    }
    else
    {
        return DeleteCosRechargeOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteCosRechargeAsync(const DeleteCosRechargeRequest& request, const DeleteCosRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCosRecharge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteCosRechargeOutcomeCallable ClsClient::DeleteCosRechargeCallable(const DeleteCosRechargeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCosRechargeOutcome()>>(
        [this, request]()
        {
            return this->DeleteCosRecharge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteDashboardSubscribeOutcome ClsClient::DeleteDashboardSubscribe(const DeleteDashboardSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDashboardSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDashboardSubscribeResponse rsp = DeleteDashboardSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDashboardSubscribeOutcome(rsp);
        else
            return DeleteDashboardSubscribeOutcome(o.GetError());
    }
    else
    {
        return DeleteDashboardSubscribeOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteDashboardSubscribeAsync(const DeleteDashboardSubscribeRequest& request, const DeleteDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDashboardSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteDashboardSubscribeOutcomeCallable ClsClient::DeleteDashboardSubscribeCallable(const DeleteDashboardSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDashboardSubscribeOutcome()>>(
        [this, request]()
        {
            return this->DeleteDashboardSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteDataTransformOutcome ClsClient::DeleteDataTransform(const DeleteDataTransformRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataTransform");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDataTransformResponse rsp = DeleteDataTransformResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDataTransformOutcome(rsp);
        else
            return DeleteDataTransformOutcome(o.GetError());
    }
    else
    {
        return DeleteDataTransformOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteDataTransformAsync(const DeleteDataTransformRequest& request, const DeleteDataTransformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDataTransform(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteDataTransformOutcomeCallable ClsClient::DeleteDataTransformCallable(const DeleteDataTransformRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDataTransformOutcome()>>(
        [this, request]()
        {
            return this->DeleteDataTransform(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteExportOutcome ClsClient::DeleteExport(const DeleteExportRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteExportResponse rsp = DeleteExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteExportOutcome(rsp);
        else
            return DeleteExportOutcome(o.GetError());
    }
    else
    {
        return DeleteExportOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteExportAsync(const DeleteExportRequest& request, const DeleteExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteExportOutcomeCallable ClsClient::DeleteExportCallable(const DeleteExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteExportOutcome()>>(
        [this, request]()
        {
            return this->DeleteExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteIndexOutcome ClsClient::DeleteIndex(const DeleteIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIndexResponse rsp = DeleteIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIndexOutcome(rsp);
        else
            return DeleteIndexOutcome(o.GetError());
    }
    else
    {
        return DeleteIndexOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteIndexAsync(const DeleteIndexRequest& request, const DeleteIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteIndexOutcomeCallable ClsClient::DeleteIndexCallable(const DeleteIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIndexOutcome()>>(
        [this, request]()
        {
            return this->DeleteIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteKafkaRechargeOutcome ClsClient::DeleteKafkaRecharge(const DeleteKafkaRechargeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteKafkaRecharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteKafkaRechargeResponse rsp = DeleteKafkaRechargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteKafkaRechargeOutcome(rsp);
        else
            return DeleteKafkaRechargeOutcome(o.GetError());
    }
    else
    {
        return DeleteKafkaRechargeOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteKafkaRechargeAsync(const DeleteKafkaRechargeRequest& request, const DeleteKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteKafkaRecharge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteKafkaRechargeOutcomeCallable ClsClient::DeleteKafkaRechargeCallable(const DeleteKafkaRechargeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteKafkaRechargeOutcome()>>(
        [this, request]()
        {
            return this->DeleteKafkaRecharge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteLogsetOutcome ClsClient::DeleteLogset(const DeleteLogsetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogsetResponse rsp = DeleteLogsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogsetOutcome(rsp);
        else
            return DeleteLogsetOutcome(o.GetError());
    }
    else
    {
        return DeleteLogsetOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteLogsetAsync(const DeleteLogsetRequest& request, const DeleteLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLogset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteLogsetOutcomeCallable ClsClient::DeleteLogsetCallable(const DeleteLogsetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLogsetOutcome()>>(
        [this, request]()
        {
            return this->DeleteLogset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteMachineGroupOutcome ClsClient::DeleteMachineGroup(const DeleteMachineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMachineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMachineGroupResponse rsp = DeleteMachineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMachineGroupOutcome(rsp);
        else
            return DeleteMachineGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteMachineGroupOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteMachineGroupAsync(const DeleteMachineGroupRequest& request, const DeleteMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMachineGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteMachineGroupOutcomeCallable ClsClient::DeleteMachineGroupCallable(const DeleteMachineGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMachineGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteMachineGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteMachineGroupInfoOutcome ClsClient::DeleteMachineGroupInfo(const DeleteMachineGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMachineGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMachineGroupInfoResponse rsp = DeleteMachineGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMachineGroupInfoOutcome(rsp);
        else
            return DeleteMachineGroupInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteMachineGroupInfoOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteMachineGroupInfoAsync(const DeleteMachineGroupInfoRequest& request, const DeleteMachineGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMachineGroupInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteMachineGroupInfoOutcomeCallable ClsClient::DeleteMachineGroupInfoCallable(const DeleteMachineGroupInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMachineGroupInfoOutcome()>>(
        [this, request]()
        {
            return this->DeleteMachineGroupInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteNoticeContentOutcome ClsClient::DeleteNoticeContent(const DeleteNoticeContentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNoticeContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNoticeContentResponse rsp = DeleteNoticeContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNoticeContentOutcome(rsp);
        else
            return DeleteNoticeContentOutcome(o.GetError());
    }
    else
    {
        return DeleteNoticeContentOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteNoticeContentAsync(const DeleteNoticeContentRequest& request, const DeleteNoticeContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNoticeContent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteNoticeContentOutcomeCallable ClsClient::DeleteNoticeContentCallable(const DeleteNoticeContentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNoticeContentOutcome()>>(
        [this, request]()
        {
            return this->DeleteNoticeContent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteScheduledSqlOutcome ClsClient::DeleteScheduledSql(const DeleteScheduledSqlRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScheduledSql");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScheduledSqlResponse rsp = DeleteScheduledSqlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScheduledSqlOutcome(rsp);
        else
            return DeleteScheduledSqlOutcome(o.GetError());
    }
    else
    {
        return DeleteScheduledSqlOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteScheduledSqlAsync(const DeleteScheduledSqlRequest& request, const DeleteScheduledSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteScheduledSql(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteScheduledSqlOutcomeCallable ClsClient::DeleteScheduledSqlCallable(const DeleteScheduledSqlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteScheduledSqlOutcome()>>(
        [this, request]()
        {
            return this->DeleteScheduledSql(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteShipperOutcome ClsClient::DeleteShipper(const DeleteShipperRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteShipper");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteShipperResponse rsp = DeleteShipperResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteShipperOutcome(rsp);
        else
            return DeleteShipperOutcome(o.GetError());
    }
    else
    {
        return DeleteShipperOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteShipperAsync(const DeleteShipperRequest& request, const DeleteShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteShipper(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteShipperOutcomeCallable ClsClient::DeleteShipperCallable(const DeleteShipperRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteShipperOutcome()>>(
        [this, request]()
        {
            return this->DeleteShipper(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteTopicOutcome ClsClient::DeleteTopic(const DeleteTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicResponse rsp = DeleteTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicOutcome(rsp);
        else
            return DeleteTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteTopicOutcomeCallable ClsClient::DeleteTopicCallable(const DeleteTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTopicOutcome()>>(
        [this, request]()
        {
            return this->DeleteTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteWebCallbackOutcome ClsClient::DeleteWebCallback(const DeleteWebCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWebCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWebCallbackResponse rsp = DeleteWebCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWebCallbackOutcome(rsp);
        else
            return DeleteWebCallbackOutcome(o.GetError());
    }
    else
    {
        return DeleteWebCallbackOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteWebCallbackAsync(const DeleteWebCallbackRequest& request, const DeleteWebCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWebCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteWebCallbackOutcomeCallable ClsClient::DeleteWebCallbackCallable(const DeleteWebCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWebCallbackOutcome()>>(
        [this, request]()
        {
            return this->DeleteWebCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeAlarmNoticesOutcome ClsClient::DescribeAlarmNotices(const DescribeAlarmNoticesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmNotices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmNoticesResponse rsp = DescribeAlarmNoticesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmNoticesOutcome(rsp);
        else
            return DescribeAlarmNoticesOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmNoticesOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeAlarmNoticesAsync(const DescribeAlarmNoticesRequest& request, const DescribeAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmNotices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeAlarmNoticesOutcomeCallable ClsClient::DescribeAlarmNoticesCallable(const DescribeAlarmNoticesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmNoticesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmNotices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeAlarmShieldsOutcome ClsClient::DescribeAlarmShields(const DescribeAlarmShieldsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmShields");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmShieldsResponse rsp = DescribeAlarmShieldsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmShieldsOutcome(rsp);
        else
            return DescribeAlarmShieldsOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmShieldsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeAlarmShieldsAsync(const DescribeAlarmShieldsRequest& request, const DescribeAlarmShieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmShields(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeAlarmShieldsOutcomeCallable ClsClient::DescribeAlarmShieldsCallable(const DescribeAlarmShieldsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmShieldsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmShields(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeAlarmsOutcome ClsClient::DescribeAlarms(const DescribeAlarmsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmsResponse rsp = DescribeAlarmsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmsOutcome(rsp);
        else
            return DescribeAlarmsOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeAlarmsAsync(const DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarms(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeAlarmsOutcomeCallable ClsClient::DescribeAlarmsCallable(const DescribeAlarmsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarms(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeAlertRecordHistoryOutcome ClsClient::DescribeAlertRecordHistory(const DescribeAlertRecordHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlertRecordHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlertRecordHistoryResponse rsp = DescribeAlertRecordHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlertRecordHistoryOutcome(rsp);
        else
            return DescribeAlertRecordHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeAlertRecordHistoryOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeAlertRecordHistoryAsync(const DescribeAlertRecordHistoryRequest& request, const DescribeAlertRecordHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlertRecordHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeAlertRecordHistoryOutcomeCallable ClsClient::DescribeAlertRecordHistoryCallable(const DescribeAlertRecordHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlertRecordHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlertRecordHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeCloudProductLogTasksOutcome ClsClient::DescribeCloudProductLogTasks(const DescribeCloudProductLogTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudProductLogTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudProductLogTasksResponse rsp = DescribeCloudProductLogTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudProductLogTasksOutcome(rsp);
        else
            return DescribeCloudProductLogTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudProductLogTasksOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeCloudProductLogTasksAsync(const DescribeCloudProductLogTasksRequest& request, const DescribeCloudProductLogTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudProductLogTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeCloudProductLogTasksOutcomeCallable ClsClient::DescribeCloudProductLogTasksCallable(const DescribeCloudProductLogTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudProductLogTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudProductLogTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeConfigExtrasOutcome ClsClient::DescribeConfigExtras(const DescribeConfigExtrasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigExtras");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigExtrasResponse rsp = DescribeConfigExtrasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigExtrasOutcome(rsp);
        else
            return DescribeConfigExtrasOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigExtrasOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeConfigExtrasAsync(const DescribeConfigExtrasRequest& request, const DescribeConfigExtrasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigExtras(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeConfigExtrasOutcomeCallable ClsClient::DescribeConfigExtrasCallable(const DescribeConfigExtrasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigExtrasOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigExtras(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeConfigMachineGroupsOutcome ClsClient::DescribeConfigMachineGroups(const DescribeConfigMachineGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigMachineGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigMachineGroupsResponse rsp = DescribeConfigMachineGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigMachineGroupsOutcome(rsp);
        else
            return DescribeConfigMachineGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigMachineGroupsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeConfigMachineGroupsAsync(const DescribeConfigMachineGroupsRequest& request, const DescribeConfigMachineGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigMachineGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeConfigMachineGroupsOutcomeCallable ClsClient::DescribeConfigMachineGroupsCallable(const DescribeConfigMachineGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigMachineGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigMachineGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeConfigsOutcome ClsClient::DescribeConfigs(const DescribeConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigsResponse rsp = DescribeConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigsOutcome(rsp);
        else
            return DescribeConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeConfigsAsync(const DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeConfigsOutcomeCallable ClsClient::DescribeConfigsCallable(const DescribeConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeConsoleSharingListOutcome ClsClient::DescribeConsoleSharingList(const DescribeConsoleSharingListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsoleSharingList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsoleSharingListResponse rsp = DescribeConsoleSharingListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsoleSharingListOutcome(rsp);
        else
            return DescribeConsoleSharingListOutcome(o.GetError());
    }
    else
    {
        return DescribeConsoleSharingListOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeConsoleSharingListAsync(const DescribeConsoleSharingListRequest& request, const DescribeConsoleSharingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConsoleSharingList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeConsoleSharingListOutcomeCallable ClsClient::DescribeConsoleSharingListCallable(const DescribeConsoleSharingListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConsoleSharingListOutcome()>>(
        [this, request]()
        {
            return this->DescribeConsoleSharingList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeConsumerOutcome ClsClient::DescribeConsumer(const DescribeConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerResponse rsp = DescribeConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerOutcome(rsp);
        else
            return DescribeConsumerOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeConsumerAsync(const DescribeConsumerRequest& request, const DescribeConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConsumer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeConsumerOutcomeCallable ClsClient::DescribeConsumerCallable(const DescribeConsumerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConsumerOutcome()>>(
        [this, request]()
        {
            return this->DescribeConsumer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeCosRechargesOutcome ClsClient::DescribeCosRecharges(const DescribeCosRechargesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosRecharges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosRechargesResponse rsp = DescribeCosRechargesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosRechargesOutcome(rsp);
        else
            return DescribeCosRechargesOutcome(o.GetError());
    }
    else
    {
        return DescribeCosRechargesOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeCosRechargesAsync(const DescribeCosRechargesRequest& request, const DescribeCosRechargesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCosRecharges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeCosRechargesOutcomeCallable ClsClient::DescribeCosRechargesCallable(const DescribeCosRechargesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCosRechargesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCosRecharges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeDashboardSubscribesOutcome ClsClient::DescribeDashboardSubscribes(const DescribeDashboardSubscribesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDashboardSubscribes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDashboardSubscribesResponse rsp = DescribeDashboardSubscribesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDashboardSubscribesOutcome(rsp);
        else
            return DescribeDashboardSubscribesOutcome(o.GetError());
    }
    else
    {
        return DescribeDashboardSubscribesOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeDashboardSubscribesAsync(const DescribeDashboardSubscribesRequest& request, const DescribeDashboardSubscribesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDashboardSubscribes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeDashboardSubscribesOutcomeCallable ClsClient::DescribeDashboardSubscribesCallable(const DescribeDashboardSubscribesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDashboardSubscribesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDashboardSubscribes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeDashboardsOutcome ClsClient::DescribeDashboards(const DescribeDashboardsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDashboards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDashboardsResponse rsp = DescribeDashboardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDashboardsOutcome(rsp);
        else
            return DescribeDashboardsOutcome(o.GetError());
    }
    else
    {
        return DescribeDashboardsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeDashboardsAsync(const DescribeDashboardsRequest& request, const DescribeDashboardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDashboards(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeDashboardsOutcomeCallable ClsClient::DescribeDashboardsCallable(const DescribeDashboardsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDashboardsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDashboards(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeDataTransformInfoOutcome ClsClient::DescribeDataTransformInfo(const DescribeDataTransformInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataTransformInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataTransformInfoResponse rsp = DescribeDataTransformInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataTransformInfoOutcome(rsp);
        else
            return DescribeDataTransformInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDataTransformInfoOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeDataTransformInfoAsync(const DescribeDataTransformInfoRequest& request, const DescribeDataTransformInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataTransformInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeDataTransformInfoOutcomeCallable ClsClient::DescribeDataTransformInfoCallable(const DescribeDataTransformInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataTransformInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataTransformInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeExportsOutcome ClsClient::DescribeExports(const DescribeExportsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExports");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExportsResponse rsp = DescribeExportsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExportsOutcome(rsp);
        else
            return DescribeExportsOutcome(o.GetError());
    }
    else
    {
        return DescribeExportsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeExportsAsync(const DescribeExportsRequest& request, const DescribeExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExports(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeExportsOutcomeCallable ClsClient::DescribeExportsCallable(const DescribeExportsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExportsOutcome()>>(
        [this, request]()
        {
            return this->DescribeExports(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeIndexOutcome ClsClient::DescribeIndex(const DescribeIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndexResponse rsp = DescribeIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndexOutcome(rsp);
        else
            return DescribeIndexOutcome(o.GetError());
    }
    else
    {
        return DescribeIndexOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeIndexAsync(const DescribeIndexRequest& request, const DescribeIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeIndexOutcomeCallable ClsClient::DescribeIndexCallable(const DescribeIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIndexOutcome()>>(
        [this, request]()
        {
            return this->DescribeIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeKafkaConsumerOutcome ClsClient::DescribeKafkaConsumer(const DescribeKafkaConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKafkaConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKafkaConsumerResponse rsp = DescribeKafkaConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKafkaConsumerOutcome(rsp);
        else
            return DescribeKafkaConsumerOutcome(o.GetError());
    }
    else
    {
        return DescribeKafkaConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeKafkaConsumerAsync(const DescribeKafkaConsumerRequest& request, const DescribeKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKafkaConsumer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeKafkaConsumerOutcomeCallable ClsClient::DescribeKafkaConsumerCallable(const DescribeKafkaConsumerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKafkaConsumerOutcome()>>(
        [this, request]()
        {
            return this->DescribeKafkaConsumer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeKafkaRechargesOutcome ClsClient::DescribeKafkaRecharges(const DescribeKafkaRechargesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKafkaRecharges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKafkaRechargesResponse rsp = DescribeKafkaRechargesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKafkaRechargesOutcome(rsp);
        else
            return DescribeKafkaRechargesOutcome(o.GetError());
    }
    else
    {
        return DescribeKafkaRechargesOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeKafkaRechargesAsync(const DescribeKafkaRechargesRequest& request, const DescribeKafkaRechargesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKafkaRecharges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeKafkaRechargesOutcomeCallable ClsClient::DescribeKafkaRechargesCallable(const DescribeKafkaRechargesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKafkaRechargesOutcome()>>(
        [this, request]()
        {
            return this->DescribeKafkaRecharges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeLogContextOutcome ClsClient::DescribeLogContext(const DescribeLogContextRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogContext");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogContextResponse rsp = DescribeLogContextResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogContextOutcome(rsp);
        else
            return DescribeLogContextOutcome(o.GetError());
    }
    else
    {
        return DescribeLogContextOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeLogContextAsync(const DescribeLogContextRequest& request, const DescribeLogContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogContext(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeLogContextOutcomeCallable ClsClient::DescribeLogContextCallable(const DescribeLogContextRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogContextOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogContext(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeLogHistogramOutcome ClsClient::DescribeLogHistogram(const DescribeLogHistogramRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogHistogram");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogHistogramResponse rsp = DescribeLogHistogramResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogHistogramOutcome(rsp);
        else
            return DescribeLogHistogramOutcome(o.GetError());
    }
    else
    {
        return DescribeLogHistogramOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeLogHistogramAsync(const DescribeLogHistogramRequest& request, const DescribeLogHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogHistogram(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeLogHistogramOutcomeCallable ClsClient::DescribeLogHistogramCallable(const DescribeLogHistogramRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogHistogramOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogHistogram(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeLogsetsOutcome ClsClient::DescribeLogsets(const DescribeLogsetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogsets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogsetsResponse rsp = DescribeLogsetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogsetsOutcome(rsp);
        else
            return DescribeLogsetsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogsetsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeLogsetsAsync(const DescribeLogsetsRequest& request, const DescribeLogsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogsets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeLogsetsOutcomeCallable ClsClient::DescribeLogsetsCallable(const DescribeLogsetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogsetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogsets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeMachineGroupConfigsOutcome ClsClient::DescribeMachineGroupConfigs(const DescribeMachineGroupConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineGroupConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineGroupConfigsResponse rsp = DescribeMachineGroupConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineGroupConfigsOutcome(rsp);
        else
            return DescribeMachineGroupConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineGroupConfigsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeMachineGroupConfigsAsync(const DescribeMachineGroupConfigsRequest& request, const DescribeMachineGroupConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineGroupConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeMachineGroupConfigsOutcomeCallable ClsClient::DescribeMachineGroupConfigsCallable(const DescribeMachineGroupConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineGroupConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineGroupConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeMachineGroupsOutcome ClsClient::DescribeMachineGroups(const DescribeMachineGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineGroupsResponse rsp = DescribeMachineGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineGroupsOutcome(rsp);
        else
            return DescribeMachineGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineGroupsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeMachineGroupsAsync(const DescribeMachineGroupsRequest& request, const DescribeMachineGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeMachineGroupsOutcomeCallable ClsClient::DescribeMachineGroupsCallable(const DescribeMachineGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeMachinesOutcome ClsClient::DescribeMachines(const DescribeMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachinesResponse rsp = DescribeMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachinesOutcome(rsp);
        else
            return DescribeMachinesOutcome(o.GetError());
    }
    else
    {
        return DescribeMachinesOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeMachinesAsync(const DescribeMachinesRequest& request, const DescribeMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeMachinesOutcomeCallable ClsClient::DescribeMachinesCallable(const DescribeMachinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachinesOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeNoticeContentsOutcome ClsClient::DescribeNoticeContents(const DescribeNoticeContentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNoticeContents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNoticeContentsResponse rsp = DescribeNoticeContentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNoticeContentsOutcome(rsp);
        else
            return DescribeNoticeContentsOutcome(o.GetError());
    }
    else
    {
        return DescribeNoticeContentsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeNoticeContentsAsync(const DescribeNoticeContentsRequest& request, const DescribeNoticeContentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNoticeContents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeNoticeContentsOutcomeCallable ClsClient::DescribeNoticeContentsCallable(const DescribeNoticeContentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNoticeContentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeNoticeContents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribePartitionsOutcome ClsClient::DescribePartitions(const DescribePartitionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePartitions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePartitionsResponse rsp = DescribePartitionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePartitionsOutcome(rsp);
        else
            return DescribePartitionsOutcome(o.GetError());
    }
    else
    {
        return DescribePartitionsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribePartitionsAsync(const DescribePartitionsRequest& request, const DescribePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePartitions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribePartitionsOutcomeCallable ClsClient::DescribePartitionsCallable(const DescribePartitionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePartitionsOutcome()>>(
        [this, request]()
        {
            return this->DescribePartitions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeScheduledSqlInfoOutcome ClsClient::DescribeScheduledSqlInfo(const DescribeScheduledSqlInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScheduledSqlInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScheduledSqlInfoResponse rsp = DescribeScheduledSqlInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScheduledSqlInfoOutcome(rsp);
        else
            return DescribeScheduledSqlInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeScheduledSqlInfoOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeScheduledSqlInfoAsync(const DescribeScheduledSqlInfoRequest& request, const DescribeScheduledSqlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScheduledSqlInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeScheduledSqlInfoOutcomeCallable ClsClient::DescribeScheduledSqlInfoCallable(const DescribeScheduledSqlInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScheduledSqlInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeScheduledSqlInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeShipperTasksOutcome ClsClient::DescribeShipperTasks(const DescribeShipperTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShipperTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShipperTasksResponse rsp = DescribeShipperTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShipperTasksOutcome(rsp);
        else
            return DescribeShipperTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeShipperTasksOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeShipperTasksAsync(const DescribeShipperTasksRequest& request, const DescribeShipperTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeShipperTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeShipperTasksOutcomeCallable ClsClient::DescribeShipperTasksCallable(const DescribeShipperTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeShipperTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeShipperTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeShippersOutcome ClsClient::DescribeShippers(const DescribeShippersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShippers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShippersResponse rsp = DescribeShippersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShippersOutcome(rsp);
        else
            return DescribeShippersOutcome(o.GetError());
    }
    else
    {
        return DescribeShippersOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeShippersAsync(const DescribeShippersRequest& request, const DescribeShippersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeShippers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeShippersOutcomeCallable ClsClient::DescribeShippersCallable(const DescribeShippersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeShippersOutcome()>>(
        [this, request]()
        {
            return this->DescribeShippers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeTopicsOutcome ClsClient::DescribeTopics(const DescribeTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicsResponse rsp = DescribeTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicsOutcome(rsp);
        else
            return DescribeTopicsOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeTopicsAsync(const DescribeTopicsRequest& request, const DescribeTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeTopicsOutcomeCallable ClsClient::DescribeTopicsCallable(const DescribeTopicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeWebCallbacksOutcome ClsClient::DescribeWebCallbacks(const DescribeWebCallbacksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebCallbacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebCallbacksResponse rsp = DescribeWebCallbacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebCallbacksOutcome(rsp);
        else
            return DescribeWebCallbacksOutcome(o.GetError());
    }
    else
    {
        return DescribeWebCallbacksOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeWebCallbacksAsync(const DescribeWebCallbacksRequest& request, const DescribeWebCallbacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebCallbacks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeWebCallbacksOutcomeCallable ClsClient::DescribeWebCallbacksCallable(const DescribeWebCallbacksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebCallbacksOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebCallbacks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::GetAlarmLogOutcome ClsClient::GetAlarmLog(const GetAlarmLogRequest &request)
{
    auto outcome = MakeRequest(request, "GetAlarmLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAlarmLogResponse rsp = GetAlarmLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAlarmLogOutcome(rsp);
        else
            return GetAlarmLogOutcome(o.GetError());
    }
    else
    {
        return GetAlarmLogOutcome(outcome.GetError());
    }
}

void ClsClient::GetAlarmLogAsync(const GetAlarmLogRequest& request, const GetAlarmLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAlarmLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::GetAlarmLogOutcomeCallable ClsClient::GetAlarmLogCallable(const GetAlarmLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAlarmLogOutcome()>>(
        [this, request]()
        {
            return this->GetAlarmLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::MergePartitionOutcome ClsClient::MergePartition(const MergePartitionRequest &request)
{
    auto outcome = MakeRequest(request, "MergePartition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MergePartitionResponse rsp = MergePartitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MergePartitionOutcome(rsp);
        else
            return MergePartitionOutcome(o.GetError());
    }
    else
    {
        return MergePartitionOutcome(outcome.GetError());
    }
}

void ClsClient::MergePartitionAsync(const MergePartitionRequest& request, const MergePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MergePartition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::MergePartitionOutcomeCallable ClsClient::MergePartitionCallable(const MergePartitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MergePartitionOutcome()>>(
        [this, request]()
        {
            return this->MergePartition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyAlarmOutcome ClsClient::ModifyAlarm(const ModifyAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmResponse rsp = ModifyAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmOutcome(rsp);
        else
            return ModifyAlarmOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyAlarmAsync(const ModifyAlarmRequest& request, const ModifyAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarm(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyAlarmOutcomeCallable ClsClient::ModifyAlarmCallable(const ModifyAlarmRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarm(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyAlarmNoticeOutcome ClsClient::ModifyAlarmNotice(const ModifyAlarmNoticeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmNotice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmNoticeResponse rsp = ModifyAlarmNoticeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmNoticeOutcome(rsp);
        else
            return ModifyAlarmNoticeOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmNoticeOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyAlarmNoticeAsync(const ModifyAlarmNoticeRequest& request, const ModifyAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarmNotice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyAlarmNoticeOutcomeCallable ClsClient::ModifyAlarmNoticeCallable(const ModifyAlarmNoticeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmNoticeOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarmNotice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyAlarmShieldOutcome ClsClient::ModifyAlarmShield(const ModifyAlarmShieldRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmShield");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmShieldResponse rsp = ModifyAlarmShieldResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmShieldOutcome(rsp);
        else
            return ModifyAlarmShieldOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmShieldOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyAlarmShieldAsync(const ModifyAlarmShieldRequest& request, const ModifyAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarmShield(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyAlarmShieldOutcomeCallable ClsClient::ModifyAlarmShieldCallable(const ModifyAlarmShieldRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmShieldOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarmShield(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyCloudProductLogCollectionOutcome ClsClient::ModifyCloudProductLogCollection(const ModifyCloudProductLogCollectionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudProductLogCollection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudProductLogCollectionResponse rsp = ModifyCloudProductLogCollectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudProductLogCollectionOutcome(rsp);
        else
            return ModifyCloudProductLogCollectionOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudProductLogCollectionOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyCloudProductLogCollectionAsync(const ModifyCloudProductLogCollectionRequest& request, const ModifyCloudProductLogCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudProductLogCollection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyCloudProductLogCollectionOutcomeCallable ClsClient::ModifyCloudProductLogCollectionCallable(const ModifyCloudProductLogCollectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudProductLogCollectionOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudProductLogCollection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyConfigOutcome ClsClient::ModifyConfig(const ModifyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConfigResponse rsp = ModifyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConfigOutcome(rsp);
        else
            return ModifyConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyConfigOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyConfigAsync(const ModifyConfigRequest& request, const ModifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyConfigOutcomeCallable ClsClient::ModifyConfigCallable(const ModifyConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyConfigExtraOutcome ClsClient::ModifyConfigExtra(const ModifyConfigExtraRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConfigExtra");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConfigExtraResponse rsp = ModifyConfigExtraResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConfigExtraOutcome(rsp);
        else
            return ModifyConfigExtraOutcome(o.GetError());
    }
    else
    {
        return ModifyConfigExtraOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyConfigExtraAsync(const ModifyConfigExtraRequest& request, const ModifyConfigExtraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConfigExtra(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyConfigExtraOutcomeCallable ClsClient::ModifyConfigExtraCallable(const ModifyConfigExtraRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConfigExtraOutcome()>>(
        [this, request]()
        {
            return this->ModifyConfigExtra(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyConsoleSharingOutcome ClsClient::ModifyConsoleSharing(const ModifyConsoleSharingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConsoleSharing");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConsoleSharingResponse rsp = ModifyConsoleSharingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConsoleSharingOutcome(rsp);
        else
            return ModifyConsoleSharingOutcome(o.GetError());
    }
    else
    {
        return ModifyConsoleSharingOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyConsoleSharingAsync(const ModifyConsoleSharingRequest& request, const ModifyConsoleSharingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConsoleSharing(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyConsoleSharingOutcomeCallable ClsClient::ModifyConsoleSharingCallable(const ModifyConsoleSharingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConsoleSharingOutcome()>>(
        [this, request]()
        {
            return this->ModifyConsoleSharing(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyConsumerOutcome ClsClient::ModifyConsumer(const ModifyConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConsumerResponse rsp = ModifyConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConsumerOutcome(rsp);
        else
            return ModifyConsumerOutcome(o.GetError());
    }
    else
    {
        return ModifyConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyConsumerAsync(const ModifyConsumerRequest& request, const ModifyConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConsumer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyConsumerOutcomeCallable ClsClient::ModifyConsumerCallable(const ModifyConsumerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConsumerOutcome()>>(
        [this, request]()
        {
            return this->ModifyConsumer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyCosRechargeOutcome ClsClient::ModifyCosRecharge(const ModifyCosRechargeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCosRecharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCosRechargeResponse rsp = ModifyCosRechargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCosRechargeOutcome(rsp);
        else
            return ModifyCosRechargeOutcome(o.GetError());
    }
    else
    {
        return ModifyCosRechargeOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyCosRechargeAsync(const ModifyCosRechargeRequest& request, const ModifyCosRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCosRecharge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyCosRechargeOutcomeCallable ClsClient::ModifyCosRechargeCallable(const ModifyCosRechargeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCosRechargeOutcome()>>(
        [this, request]()
        {
            return this->ModifyCosRecharge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyDashboardSubscribeOutcome ClsClient::ModifyDashboardSubscribe(const ModifyDashboardSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDashboardSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDashboardSubscribeResponse rsp = ModifyDashboardSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDashboardSubscribeOutcome(rsp);
        else
            return ModifyDashboardSubscribeOutcome(o.GetError());
    }
    else
    {
        return ModifyDashboardSubscribeOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyDashboardSubscribeAsync(const ModifyDashboardSubscribeRequest& request, const ModifyDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDashboardSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyDashboardSubscribeOutcomeCallable ClsClient::ModifyDashboardSubscribeCallable(const ModifyDashboardSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDashboardSubscribeOutcome()>>(
        [this, request]()
        {
            return this->ModifyDashboardSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyDataTransformOutcome ClsClient::ModifyDataTransform(const ModifyDataTransformRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDataTransform");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDataTransformResponse rsp = ModifyDataTransformResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDataTransformOutcome(rsp);
        else
            return ModifyDataTransformOutcome(o.GetError());
    }
    else
    {
        return ModifyDataTransformOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyDataTransformAsync(const ModifyDataTransformRequest& request, const ModifyDataTransformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDataTransform(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyDataTransformOutcomeCallable ClsClient::ModifyDataTransformCallable(const ModifyDataTransformRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDataTransformOutcome()>>(
        [this, request]()
        {
            return this->ModifyDataTransform(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyIndexOutcome ClsClient::ModifyIndex(const ModifyIndexRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIndexResponse rsp = ModifyIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIndexOutcome(rsp);
        else
            return ModifyIndexOutcome(o.GetError());
    }
    else
    {
        return ModifyIndexOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyIndexAsync(const ModifyIndexRequest& request, const ModifyIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyIndexOutcomeCallable ClsClient::ModifyIndexCallable(const ModifyIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIndexOutcome()>>(
        [this, request]()
        {
            return this->ModifyIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyKafkaConsumerOutcome ClsClient::ModifyKafkaConsumer(const ModifyKafkaConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyKafkaConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyKafkaConsumerResponse rsp = ModifyKafkaConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyKafkaConsumerOutcome(rsp);
        else
            return ModifyKafkaConsumerOutcome(o.GetError());
    }
    else
    {
        return ModifyKafkaConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyKafkaConsumerAsync(const ModifyKafkaConsumerRequest& request, const ModifyKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyKafkaConsumer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyKafkaConsumerOutcomeCallable ClsClient::ModifyKafkaConsumerCallable(const ModifyKafkaConsumerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyKafkaConsumerOutcome()>>(
        [this, request]()
        {
            return this->ModifyKafkaConsumer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyKafkaRechargeOutcome ClsClient::ModifyKafkaRecharge(const ModifyKafkaRechargeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyKafkaRecharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyKafkaRechargeResponse rsp = ModifyKafkaRechargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyKafkaRechargeOutcome(rsp);
        else
            return ModifyKafkaRechargeOutcome(o.GetError());
    }
    else
    {
        return ModifyKafkaRechargeOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyKafkaRechargeAsync(const ModifyKafkaRechargeRequest& request, const ModifyKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyKafkaRecharge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyKafkaRechargeOutcomeCallable ClsClient::ModifyKafkaRechargeCallable(const ModifyKafkaRechargeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyKafkaRechargeOutcome()>>(
        [this, request]()
        {
            return this->ModifyKafkaRecharge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyLogsetOutcome ClsClient::ModifyLogset(const ModifyLogsetRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogsetResponse rsp = ModifyLogsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogsetOutcome(rsp);
        else
            return ModifyLogsetOutcome(o.GetError());
    }
    else
    {
        return ModifyLogsetOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyLogsetAsync(const ModifyLogsetRequest& request, const ModifyLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLogset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyLogsetOutcomeCallable ClsClient::ModifyLogsetCallable(const ModifyLogsetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLogsetOutcome()>>(
        [this, request]()
        {
            return this->ModifyLogset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyMachineGroupOutcome ClsClient::ModifyMachineGroup(const ModifyMachineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMachineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMachineGroupResponse rsp = ModifyMachineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMachineGroupOutcome(rsp);
        else
            return ModifyMachineGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyMachineGroupOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyMachineGroupAsync(const ModifyMachineGroupRequest& request, const ModifyMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMachineGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyMachineGroupOutcomeCallable ClsClient::ModifyMachineGroupCallable(const ModifyMachineGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMachineGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyMachineGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyNoticeContentOutcome ClsClient::ModifyNoticeContent(const ModifyNoticeContentRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNoticeContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNoticeContentResponse rsp = ModifyNoticeContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNoticeContentOutcome(rsp);
        else
            return ModifyNoticeContentOutcome(o.GetError());
    }
    else
    {
        return ModifyNoticeContentOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyNoticeContentAsync(const ModifyNoticeContentRequest& request, const ModifyNoticeContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNoticeContent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyNoticeContentOutcomeCallable ClsClient::ModifyNoticeContentCallable(const ModifyNoticeContentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNoticeContentOutcome()>>(
        [this, request]()
        {
            return this->ModifyNoticeContent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyScheduledSqlOutcome ClsClient::ModifyScheduledSql(const ModifyScheduledSqlRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyScheduledSql");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyScheduledSqlResponse rsp = ModifyScheduledSqlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyScheduledSqlOutcome(rsp);
        else
            return ModifyScheduledSqlOutcome(o.GetError());
    }
    else
    {
        return ModifyScheduledSqlOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyScheduledSqlAsync(const ModifyScheduledSqlRequest& request, const ModifyScheduledSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyScheduledSql(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyScheduledSqlOutcomeCallable ClsClient::ModifyScheduledSqlCallable(const ModifyScheduledSqlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyScheduledSqlOutcome()>>(
        [this, request]()
        {
            return this->ModifyScheduledSql(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyShipperOutcome ClsClient::ModifyShipper(const ModifyShipperRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyShipper");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyShipperResponse rsp = ModifyShipperResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyShipperOutcome(rsp);
        else
            return ModifyShipperOutcome(o.GetError());
    }
    else
    {
        return ModifyShipperOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyShipperAsync(const ModifyShipperRequest& request, const ModifyShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyShipper(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyShipperOutcomeCallable ClsClient::ModifyShipperCallable(const ModifyShipperRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyShipperOutcome()>>(
        [this, request]()
        {
            return this->ModifyShipper(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyTopicOutcome ClsClient::ModifyTopic(const ModifyTopicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTopicResponse rsp = ModifyTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTopicOutcome(rsp);
        else
            return ModifyTopicOutcome(o.GetError());
    }
    else
    {
        return ModifyTopicOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyTopicAsync(const ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyTopicOutcomeCallable ClsClient::ModifyTopicCallable(const ModifyTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTopicOutcome()>>(
        [this, request]()
        {
            return this->ModifyTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyWebCallbackOutcome ClsClient::ModifyWebCallback(const ModifyWebCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebCallbackResponse rsp = ModifyWebCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebCallbackOutcome(rsp);
        else
            return ModifyWebCallbackOutcome(o.GetError());
    }
    else
    {
        return ModifyWebCallbackOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyWebCallbackAsync(const ModifyWebCallbackRequest& request, const ModifyWebCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWebCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyWebCallbackOutcomeCallable ClsClient::ModifyWebCallbackCallable(const ModifyWebCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWebCallbackOutcome()>>(
        [this, request]()
        {
            return this->ModifyWebCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::OpenKafkaConsumerOutcome ClsClient::OpenKafkaConsumer(const OpenKafkaConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "OpenKafkaConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenKafkaConsumerResponse rsp = OpenKafkaConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenKafkaConsumerOutcome(rsp);
        else
            return OpenKafkaConsumerOutcome(o.GetError());
    }
    else
    {
        return OpenKafkaConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::OpenKafkaConsumerAsync(const OpenKafkaConsumerRequest& request, const OpenKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenKafkaConsumer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::OpenKafkaConsumerOutcomeCallable ClsClient::OpenKafkaConsumerCallable(const OpenKafkaConsumerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenKafkaConsumerOutcome()>>(
        [this, request]()
        {
            return this->OpenKafkaConsumer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::PreviewKafkaRechargeOutcome ClsClient::PreviewKafkaRecharge(const PreviewKafkaRechargeRequest &request)
{
    auto outcome = MakeRequest(request, "PreviewKafkaRecharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PreviewKafkaRechargeResponse rsp = PreviewKafkaRechargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PreviewKafkaRechargeOutcome(rsp);
        else
            return PreviewKafkaRechargeOutcome(o.GetError());
    }
    else
    {
        return PreviewKafkaRechargeOutcome(outcome.GetError());
    }
}

void ClsClient::PreviewKafkaRechargeAsync(const PreviewKafkaRechargeRequest& request, const PreviewKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PreviewKafkaRecharge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::PreviewKafkaRechargeOutcomeCallable ClsClient::PreviewKafkaRechargeCallable(const PreviewKafkaRechargeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PreviewKafkaRechargeOutcome()>>(
        [this, request]()
        {
            return this->PreviewKafkaRecharge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::QueryMetricOutcome ClsClient::QueryMetric(const QueryMetricRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMetric");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMetricResponse rsp = QueryMetricResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMetricOutcome(rsp);
        else
            return QueryMetricOutcome(o.GetError());
    }
    else
    {
        return QueryMetricOutcome(outcome.GetError());
    }
}

void ClsClient::QueryMetricAsync(const QueryMetricRequest& request, const QueryMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryMetric(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::QueryMetricOutcomeCallable ClsClient::QueryMetricCallable(const QueryMetricRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryMetricOutcome()>>(
        [this, request]()
        {
            return this->QueryMetric(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::QueryRangeMetricOutcome ClsClient::QueryRangeMetric(const QueryRangeMetricRequest &request)
{
    auto outcome = MakeRequest(request, "QueryRangeMetric");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryRangeMetricResponse rsp = QueryRangeMetricResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryRangeMetricOutcome(rsp);
        else
            return QueryRangeMetricOutcome(o.GetError());
    }
    else
    {
        return QueryRangeMetricOutcome(outcome.GetError());
    }
}

void ClsClient::QueryRangeMetricAsync(const QueryRangeMetricRequest& request, const QueryRangeMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryRangeMetric(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::QueryRangeMetricOutcomeCallable ClsClient::QueryRangeMetricCallable(const QueryRangeMetricRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryRangeMetricOutcome()>>(
        [this, request]()
        {
            return this->QueryRangeMetric(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::RetryShipperTaskOutcome ClsClient::RetryShipperTask(const RetryShipperTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RetryShipperTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryShipperTaskResponse rsp = RetryShipperTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryShipperTaskOutcome(rsp);
        else
            return RetryShipperTaskOutcome(o.GetError());
    }
    else
    {
        return RetryShipperTaskOutcome(outcome.GetError());
    }
}

void ClsClient::RetryShipperTaskAsync(const RetryShipperTaskRequest& request, const RetryShipperTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetryShipperTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::RetryShipperTaskOutcomeCallable ClsClient::RetryShipperTaskCallable(const RetryShipperTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetryShipperTaskOutcome()>>(
        [this, request]()
        {
            return this->RetryShipperTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::SearchCosRechargeInfoOutcome ClsClient::SearchCosRechargeInfo(const SearchCosRechargeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "SearchCosRechargeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchCosRechargeInfoResponse rsp = SearchCosRechargeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchCosRechargeInfoOutcome(rsp);
        else
            return SearchCosRechargeInfoOutcome(o.GetError());
    }
    else
    {
        return SearchCosRechargeInfoOutcome(outcome.GetError());
    }
}

void ClsClient::SearchCosRechargeInfoAsync(const SearchCosRechargeInfoRequest& request, const SearchCosRechargeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchCosRechargeInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::SearchCosRechargeInfoOutcomeCallable ClsClient::SearchCosRechargeInfoCallable(const SearchCosRechargeInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchCosRechargeInfoOutcome()>>(
        [this, request]()
        {
            return this->SearchCosRechargeInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::SearchDashboardSubscribeOutcome ClsClient::SearchDashboardSubscribe(const SearchDashboardSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "SearchDashboardSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchDashboardSubscribeResponse rsp = SearchDashboardSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchDashboardSubscribeOutcome(rsp);
        else
            return SearchDashboardSubscribeOutcome(o.GetError());
    }
    else
    {
        return SearchDashboardSubscribeOutcome(outcome.GetError());
    }
}

void ClsClient::SearchDashboardSubscribeAsync(const SearchDashboardSubscribeRequest& request, const SearchDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchDashboardSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::SearchDashboardSubscribeOutcomeCallable ClsClient::SearchDashboardSubscribeCallable(const SearchDashboardSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchDashboardSubscribeOutcome()>>(
        [this, request]()
        {
            return this->SearchDashboardSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::SearchLogOutcome ClsClient::SearchLog(const SearchLogRequest &request)
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

void ClsClient::SearchLogAsync(const SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::SearchLogOutcomeCallable ClsClient::SearchLogCallable(const SearchLogRequest &request)
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

ClsClient::SplitPartitionOutcome ClsClient::SplitPartition(const SplitPartitionRequest &request)
{
    auto outcome = MakeRequest(request, "SplitPartition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SplitPartitionResponse rsp = SplitPartitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SplitPartitionOutcome(rsp);
        else
            return SplitPartitionOutcome(o.GetError());
    }
    else
    {
        return SplitPartitionOutcome(outcome.GetError());
    }
}

void ClsClient::SplitPartitionAsync(const SplitPartitionRequest& request, const SplitPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SplitPartition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::SplitPartitionOutcomeCallable ClsClient::SplitPartitionCallable(const SplitPartitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SplitPartitionOutcome()>>(
        [this, request]()
        {
            return this->SplitPartition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::UploadLogOutcome ClsClient::UploadLog(const UploadLogRequest &request)
{
    auto outcome = MakeRequest(request, "UploadLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadLogResponse rsp = UploadLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadLogOutcome(rsp);
        else
            return UploadLogOutcome(o.GetError());
    }
    else
    {
        return UploadLogOutcome(outcome.GetError());
    }
}

void ClsClient::UploadLogAsync(const UploadLogRequest& request, const UploadLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::UploadLogOutcomeCallable ClsClient::UploadLogCallable(const UploadLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadLogOutcome()>>(
        [this, request]()
        {
            return this->UploadLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

