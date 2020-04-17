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

#include <tencentcloud/bm/v20180423/BmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bm::V20180423;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-23";
    const string ENDPOINT = "bm.tencentcloudapi.com";
}

BmClient::BmClient(const Credential &credential, const string &region) :
    BmClient(credential, region, ClientProfile())
{
}

BmClient::BmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BmClient::AttachCamRoleOutcome BmClient::AttachCamRole(const AttachCamRoleRequest &request)
{
    auto outcome = MakeRequest(request, "AttachCamRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachCamRoleResponse rsp = AttachCamRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachCamRoleOutcome(rsp);
        else
            return AttachCamRoleOutcome(o.GetError());
    }
    else
    {
        return AttachCamRoleOutcome(outcome.GetError());
    }
}

void BmClient::AttachCamRoleAsync(const AttachCamRoleRequest& request, const AttachCamRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachCamRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::AttachCamRoleOutcomeCallable BmClient::AttachCamRoleCallable(const AttachCamRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachCamRoleOutcome()>>(
        [this, request]()
        {
            return this->AttachCamRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::BindPsaTagOutcome BmClient::BindPsaTag(const BindPsaTagRequest &request)
{
    auto outcome = MakeRequest(request, "BindPsaTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindPsaTagResponse rsp = BindPsaTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindPsaTagOutcome(rsp);
        else
            return BindPsaTagOutcome(o.GetError());
    }
    else
    {
        return BindPsaTagOutcome(outcome.GetError());
    }
}

void BmClient::BindPsaTagAsync(const BindPsaTagRequest& request, const BindPsaTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindPsaTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::BindPsaTagOutcomeCallable BmClient::BindPsaTagCallable(const BindPsaTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindPsaTagOutcome()>>(
        [this, request]()
        {
            return this->BindPsaTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::BuyDevicesOutcome BmClient::BuyDevices(const BuyDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "BuyDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BuyDevicesResponse rsp = BuyDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BuyDevicesOutcome(rsp);
        else
            return BuyDevicesOutcome(o.GetError());
    }
    else
    {
        return BuyDevicesOutcome(outcome.GetError());
    }
}

void BmClient::BuyDevicesAsync(const BuyDevicesRequest& request, const BuyDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BuyDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::BuyDevicesOutcomeCallable BmClient::BuyDevicesCallable(const BuyDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BuyDevicesOutcome()>>(
        [this, request]()
        {
            return this->BuyDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::CreateCustomImageOutcome BmClient::CreateCustomImage(const CreateCustomImageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomImageResponse rsp = CreateCustomImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomImageOutcome(rsp);
        else
            return CreateCustomImageOutcome(o.GetError());
    }
    else
    {
        return CreateCustomImageOutcome(outcome.GetError());
    }
}

void BmClient::CreateCustomImageAsync(const CreateCustomImageRequest& request, const CreateCustomImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::CreateCustomImageOutcomeCallable BmClient::CreateCustomImageCallable(const CreateCustomImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomImageOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::CreatePsaRegulationOutcome BmClient::CreatePsaRegulation(const CreatePsaRegulationRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePsaRegulation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePsaRegulationResponse rsp = CreatePsaRegulationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePsaRegulationOutcome(rsp);
        else
            return CreatePsaRegulationOutcome(o.GetError());
    }
    else
    {
        return CreatePsaRegulationOutcome(outcome.GetError());
    }
}

void BmClient::CreatePsaRegulationAsync(const CreatePsaRegulationRequest& request, const CreatePsaRegulationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePsaRegulation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::CreatePsaRegulationOutcomeCallable BmClient::CreatePsaRegulationCallable(const CreatePsaRegulationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePsaRegulationOutcome()>>(
        [this, request]()
        {
            return this->CreatePsaRegulation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::CreateSpotDeviceOutcome BmClient::CreateSpotDevice(const CreateSpotDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSpotDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSpotDeviceResponse rsp = CreateSpotDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSpotDeviceOutcome(rsp);
        else
            return CreateSpotDeviceOutcome(o.GetError());
    }
    else
    {
        return CreateSpotDeviceOutcome(outcome.GetError());
    }
}

void BmClient::CreateSpotDeviceAsync(const CreateSpotDeviceRequest& request, const CreateSpotDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSpotDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::CreateSpotDeviceOutcomeCallable BmClient::CreateSpotDeviceCallable(const CreateSpotDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSpotDeviceOutcome()>>(
        [this, request]()
        {
            return this->CreateSpotDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::CreateUserCmdOutcome BmClient::CreateUserCmd(const CreateUserCmdRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserCmd");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserCmdResponse rsp = CreateUserCmdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserCmdOutcome(rsp);
        else
            return CreateUserCmdOutcome(o.GetError());
    }
    else
    {
        return CreateUserCmdOutcome(outcome.GetError());
    }
}

void BmClient::CreateUserCmdAsync(const CreateUserCmdRequest& request, const CreateUserCmdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserCmd(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::CreateUserCmdOutcomeCallable BmClient::CreateUserCmdCallable(const CreateUserCmdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserCmdOutcome()>>(
        [this, request]()
        {
            return this->CreateUserCmd(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DeleteCustomImagesOutcome BmClient::DeleteCustomImages(const DeleteCustomImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomImagesResponse rsp = DeleteCustomImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomImagesOutcome(rsp);
        else
            return DeleteCustomImagesOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomImagesOutcome(outcome.GetError());
    }
}

void BmClient::DeleteCustomImagesAsync(const DeleteCustomImagesRequest& request, const DeleteCustomImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DeleteCustomImagesOutcomeCallable BmClient::DeleteCustomImagesCallable(const DeleteCustomImagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomImagesOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomImages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DeletePsaRegulationOutcome BmClient::DeletePsaRegulation(const DeletePsaRegulationRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePsaRegulation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePsaRegulationResponse rsp = DeletePsaRegulationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePsaRegulationOutcome(rsp);
        else
            return DeletePsaRegulationOutcome(o.GetError());
    }
    else
    {
        return DeletePsaRegulationOutcome(outcome.GetError());
    }
}

void BmClient::DeletePsaRegulationAsync(const DeletePsaRegulationRequest& request, const DeletePsaRegulationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePsaRegulation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DeletePsaRegulationOutcomeCallable BmClient::DeletePsaRegulationCallable(const DeletePsaRegulationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePsaRegulationOutcome()>>(
        [this, request]()
        {
            return this->DeletePsaRegulation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DeleteUserCmdsOutcome BmClient::DeleteUserCmds(const DeleteUserCmdsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserCmds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserCmdsResponse rsp = DeleteUserCmdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserCmdsOutcome(rsp);
        else
            return DeleteUserCmdsOutcome(o.GetError());
    }
    else
    {
        return DeleteUserCmdsOutcome(outcome.GetError());
    }
}

void BmClient::DeleteUserCmdsAsync(const DeleteUserCmdsRequest& request, const DeleteUserCmdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUserCmds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DeleteUserCmdsOutcomeCallable BmClient::DeleteUserCmdsCallable(const DeleteUserCmdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserCmdsOutcome()>>(
        [this, request]()
        {
            return this->DeleteUserCmds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeCustomImageProcessOutcome BmClient::DescribeCustomImageProcess(const DescribeCustomImageProcessRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomImageProcess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomImageProcessResponse rsp = DescribeCustomImageProcessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomImageProcessOutcome(rsp);
        else
            return DescribeCustomImageProcessOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomImageProcessOutcome(outcome.GetError());
    }
}

void BmClient::DescribeCustomImageProcessAsync(const DescribeCustomImageProcessRequest& request, const DescribeCustomImageProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomImageProcess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeCustomImageProcessOutcomeCallable BmClient::DescribeCustomImageProcessCallable(const DescribeCustomImageProcessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomImageProcessOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomImageProcess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeCustomImagesOutcome BmClient::DescribeCustomImages(const DescribeCustomImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomImagesResponse rsp = DescribeCustomImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomImagesOutcome(rsp);
        else
            return DescribeCustomImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomImagesOutcome(outcome.GetError());
    }
}

void BmClient::DescribeCustomImagesAsync(const DescribeCustomImagesRequest& request, const DescribeCustomImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeCustomImagesOutcomeCallable BmClient::DescribeCustomImagesCallable(const DescribeCustomImagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomImagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomImages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeDeviceClassOutcome BmClient::DescribeDeviceClass(const DescribeDeviceClassRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceClassResponse rsp = DescribeDeviceClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceClassOutcome(rsp);
        else
            return DescribeDeviceClassOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceClassOutcome(outcome.GetError());
    }
}

void BmClient::DescribeDeviceClassAsync(const DescribeDeviceClassRequest& request, const DescribeDeviceClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceClass(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeDeviceClassOutcomeCallable BmClient::DescribeDeviceClassCallable(const DescribeDeviceClassRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceClassOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceClass(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeDeviceClassPartitionOutcome BmClient::DescribeDeviceClassPartition(const DescribeDeviceClassPartitionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceClassPartition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceClassPartitionResponse rsp = DescribeDeviceClassPartitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceClassPartitionOutcome(rsp);
        else
            return DescribeDeviceClassPartitionOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceClassPartitionOutcome(outcome.GetError());
    }
}

void BmClient::DescribeDeviceClassPartitionAsync(const DescribeDeviceClassPartitionRequest& request, const DescribeDeviceClassPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceClassPartition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeDeviceClassPartitionOutcomeCallable BmClient::DescribeDeviceClassPartitionCallable(const DescribeDeviceClassPartitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceClassPartitionOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceClassPartition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeDeviceHardwareInfoOutcome BmClient::DescribeDeviceHardwareInfo(const DescribeDeviceHardwareInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceHardwareInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceHardwareInfoResponse rsp = DescribeDeviceHardwareInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceHardwareInfoOutcome(rsp);
        else
            return DescribeDeviceHardwareInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceHardwareInfoOutcome(outcome.GetError());
    }
}

void BmClient::DescribeDeviceHardwareInfoAsync(const DescribeDeviceHardwareInfoRequest& request, const DescribeDeviceHardwareInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceHardwareInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeDeviceHardwareInfoOutcomeCallable BmClient::DescribeDeviceHardwareInfoCallable(const DescribeDeviceHardwareInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceHardwareInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceHardwareInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeDeviceInventoryOutcome BmClient::DescribeDeviceInventory(const DescribeDeviceInventoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceInventory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceInventoryResponse rsp = DescribeDeviceInventoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceInventoryOutcome(rsp);
        else
            return DescribeDeviceInventoryOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceInventoryOutcome(outcome.GetError());
    }
}

void BmClient::DescribeDeviceInventoryAsync(const DescribeDeviceInventoryRequest& request, const DescribeDeviceInventoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceInventory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeDeviceInventoryOutcomeCallable BmClient::DescribeDeviceInventoryCallable(const DescribeDeviceInventoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceInventoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceInventory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeDeviceOperationLogOutcome BmClient::DescribeDeviceOperationLog(const DescribeDeviceOperationLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceOperationLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceOperationLogResponse rsp = DescribeDeviceOperationLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceOperationLogOutcome(rsp);
        else
            return DescribeDeviceOperationLogOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceOperationLogOutcome(outcome.GetError());
    }
}

void BmClient::DescribeDeviceOperationLogAsync(const DescribeDeviceOperationLogRequest& request, const DescribeDeviceOperationLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceOperationLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeDeviceOperationLogOutcomeCallable BmClient::DescribeDeviceOperationLogCallable(const DescribeDeviceOperationLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceOperationLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceOperationLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeDevicePartitionOutcome BmClient::DescribeDevicePartition(const DescribeDevicePartitionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevicePartition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicePartitionResponse rsp = DescribeDevicePartitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicePartitionOutcome(rsp);
        else
            return DescribeDevicePartitionOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicePartitionOutcome(outcome.GetError());
    }
}

void BmClient::DescribeDevicePartitionAsync(const DescribeDevicePartitionRequest& request, const DescribeDevicePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevicePartition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeDevicePartitionOutcomeCallable BmClient::DescribeDevicePartitionCallable(const DescribeDevicePartitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDevicePartitionOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevicePartition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeDevicePositionOutcome BmClient::DescribeDevicePosition(const DescribeDevicePositionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevicePosition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicePositionResponse rsp = DescribeDevicePositionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicePositionOutcome(rsp);
        else
            return DescribeDevicePositionOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicePositionOutcome(outcome.GetError());
    }
}

void BmClient::DescribeDevicePositionAsync(const DescribeDevicePositionRequest& request, const DescribeDevicePositionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevicePosition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeDevicePositionOutcomeCallable BmClient::DescribeDevicePositionCallable(const DescribeDevicePositionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDevicePositionOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevicePosition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeDevicePriceInfoOutcome BmClient::DescribeDevicePriceInfo(const DescribeDevicePriceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevicePriceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicePriceInfoResponse rsp = DescribeDevicePriceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicePriceInfoOutcome(rsp);
        else
            return DescribeDevicePriceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicePriceInfoOutcome(outcome.GetError());
    }
}

void BmClient::DescribeDevicePriceInfoAsync(const DescribeDevicePriceInfoRequest& request, const DescribeDevicePriceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevicePriceInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeDevicePriceInfoOutcomeCallable BmClient::DescribeDevicePriceInfoCallable(const DescribeDevicePriceInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDevicePriceInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevicePriceInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeDevicesOutcome BmClient::DescribeDevices(const DescribeDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicesResponse rsp = DescribeDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicesOutcome(rsp);
        else
            return DescribeDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicesOutcome(outcome.GetError());
    }
}

void BmClient::DescribeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeDevicesOutcomeCallable BmClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDevicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeHardwareSpecificationOutcome BmClient::DescribeHardwareSpecification(const DescribeHardwareSpecificationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHardwareSpecification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHardwareSpecificationResponse rsp = DescribeHardwareSpecificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHardwareSpecificationOutcome(rsp);
        else
            return DescribeHardwareSpecificationOutcome(o.GetError());
    }
    else
    {
        return DescribeHardwareSpecificationOutcome(outcome.GetError());
    }
}

void BmClient::DescribeHardwareSpecificationAsync(const DescribeHardwareSpecificationRequest& request, const DescribeHardwareSpecificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHardwareSpecification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeHardwareSpecificationOutcomeCallable BmClient::DescribeHardwareSpecificationCallable(const DescribeHardwareSpecificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHardwareSpecificationOutcome()>>(
        [this, request]()
        {
            return this->DescribeHardwareSpecification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeHostedDeviceOutBandInfoOutcome BmClient::DescribeHostedDeviceOutBandInfo(const DescribeHostedDeviceOutBandInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostedDeviceOutBandInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostedDeviceOutBandInfoResponse rsp = DescribeHostedDeviceOutBandInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostedDeviceOutBandInfoOutcome(rsp);
        else
            return DescribeHostedDeviceOutBandInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeHostedDeviceOutBandInfoOutcome(outcome.GetError());
    }
}

void BmClient::DescribeHostedDeviceOutBandInfoAsync(const DescribeHostedDeviceOutBandInfoRequest& request, const DescribeHostedDeviceOutBandInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostedDeviceOutBandInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeHostedDeviceOutBandInfoOutcomeCallable BmClient::DescribeHostedDeviceOutBandInfoCallable(const DescribeHostedDeviceOutBandInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostedDeviceOutBandInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostedDeviceOutBandInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeOperationResultOutcome BmClient::DescribeOperationResult(const DescribeOperationResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOperationResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOperationResultResponse rsp = DescribeOperationResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOperationResultOutcome(rsp);
        else
            return DescribeOperationResultOutcome(o.GetError());
    }
    else
    {
        return DescribeOperationResultOutcome(outcome.GetError());
    }
}

void BmClient::DescribeOperationResultAsync(const DescribeOperationResultRequest& request, const DescribeOperationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOperationResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeOperationResultOutcomeCallable BmClient::DescribeOperationResultCallable(const DescribeOperationResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOperationResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeOperationResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeOsInfoOutcome BmClient::DescribeOsInfo(const DescribeOsInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOsInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOsInfoResponse rsp = DescribeOsInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOsInfoOutcome(rsp);
        else
            return DescribeOsInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeOsInfoOutcome(outcome.GetError());
    }
}

void BmClient::DescribeOsInfoAsync(const DescribeOsInfoRequest& request, const DescribeOsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOsInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeOsInfoOutcomeCallable BmClient::DescribeOsInfoCallable(const DescribeOsInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOsInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeOsInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribePsaRegulationsOutcome BmClient::DescribePsaRegulations(const DescribePsaRegulationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePsaRegulations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePsaRegulationsResponse rsp = DescribePsaRegulationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePsaRegulationsOutcome(rsp);
        else
            return DescribePsaRegulationsOutcome(o.GetError());
    }
    else
    {
        return DescribePsaRegulationsOutcome(outcome.GetError());
    }
}

void BmClient::DescribePsaRegulationsAsync(const DescribePsaRegulationsRequest& request, const DescribePsaRegulationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePsaRegulations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribePsaRegulationsOutcomeCallable BmClient::DescribePsaRegulationsCallable(const DescribePsaRegulationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePsaRegulationsOutcome()>>(
        [this, request]()
        {
            return this->DescribePsaRegulations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeRegionsOutcome BmClient::DescribeRegions(const DescribeRegionsRequest &request)
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

void BmClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeRegionsOutcomeCallable BmClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
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

BmClient::DescribeRepairTaskConstantOutcome BmClient::DescribeRepairTaskConstant(const DescribeRepairTaskConstantRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepairTaskConstant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepairTaskConstantResponse rsp = DescribeRepairTaskConstantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepairTaskConstantOutcome(rsp);
        else
            return DescribeRepairTaskConstantOutcome(o.GetError());
    }
    else
    {
        return DescribeRepairTaskConstantOutcome(outcome.GetError());
    }
}

void BmClient::DescribeRepairTaskConstantAsync(const DescribeRepairTaskConstantRequest& request, const DescribeRepairTaskConstantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRepairTaskConstant(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeRepairTaskConstantOutcomeCallable BmClient::DescribeRepairTaskConstantCallable(const DescribeRepairTaskConstantRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRepairTaskConstantOutcome()>>(
        [this, request]()
        {
            return this->DescribeRepairTaskConstant(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeTaskInfoOutcome BmClient::DescribeTaskInfo(const DescribeTaskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskInfoResponse rsp = DescribeTaskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskInfoOutcome(rsp);
        else
            return DescribeTaskInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskInfoOutcome(outcome.GetError());
    }
}

void BmClient::DescribeTaskInfoAsync(const DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeTaskInfoOutcomeCallable BmClient::DescribeTaskInfoCallable(const DescribeTaskInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeTaskOperationLogOutcome BmClient::DescribeTaskOperationLog(const DescribeTaskOperationLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskOperationLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskOperationLogResponse rsp = DescribeTaskOperationLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskOperationLogOutcome(rsp);
        else
            return DescribeTaskOperationLogOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskOperationLogOutcome(outcome.GetError());
    }
}

void BmClient::DescribeTaskOperationLogAsync(const DescribeTaskOperationLogRequest& request, const DescribeTaskOperationLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskOperationLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeTaskOperationLogOutcomeCallable BmClient::DescribeTaskOperationLogCallable(const DescribeTaskOperationLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskOperationLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskOperationLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeUserCmdTaskInfoOutcome BmClient::DescribeUserCmdTaskInfo(const DescribeUserCmdTaskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserCmdTaskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserCmdTaskInfoResponse rsp = DescribeUserCmdTaskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserCmdTaskInfoOutcome(rsp);
        else
            return DescribeUserCmdTaskInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUserCmdTaskInfoOutcome(outcome.GetError());
    }
}

void BmClient::DescribeUserCmdTaskInfoAsync(const DescribeUserCmdTaskInfoRequest& request, const DescribeUserCmdTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserCmdTaskInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeUserCmdTaskInfoOutcomeCallable BmClient::DescribeUserCmdTaskInfoCallable(const DescribeUserCmdTaskInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserCmdTaskInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserCmdTaskInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeUserCmdTasksOutcome BmClient::DescribeUserCmdTasks(const DescribeUserCmdTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserCmdTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserCmdTasksResponse rsp = DescribeUserCmdTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserCmdTasksOutcome(rsp);
        else
            return DescribeUserCmdTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeUserCmdTasksOutcome(outcome.GetError());
    }
}

void BmClient::DescribeUserCmdTasksAsync(const DescribeUserCmdTasksRequest& request, const DescribeUserCmdTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserCmdTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeUserCmdTasksOutcomeCallable BmClient::DescribeUserCmdTasksCallable(const DescribeUserCmdTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserCmdTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserCmdTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DescribeUserCmdsOutcome BmClient::DescribeUserCmds(const DescribeUserCmdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserCmds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserCmdsResponse rsp = DescribeUserCmdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserCmdsOutcome(rsp);
        else
            return DescribeUserCmdsOutcome(o.GetError());
    }
    else
    {
        return DescribeUserCmdsOutcome(outcome.GetError());
    }
}

void BmClient::DescribeUserCmdsAsync(const DescribeUserCmdsRequest& request, const DescribeUserCmdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserCmds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DescribeUserCmdsOutcomeCallable BmClient::DescribeUserCmdsCallable(const DescribeUserCmdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserCmdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserCmds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::DetachCamRoleOutcome BmClient::DetachCamRole(const DetachCamRoleRequest &request)
{
    auto outcome = MakeRequest(request, "DetachCamRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachCamRoleResponse rsp = DetachCamRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachCamRoleOutcome(rsp);
        else
            return DetachCamRoleOutcome(o.GetError());
    }
    else
    {
        return DetachCamRoleOutcome(outcome.GetError());
    }
}

void BmClient::DetachCamRoleAsync(const DetachCamRoleRequest& request, const DetachCamRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachCamRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::DetachCamRoleOutcomeCallable BmClient::DetachCamRoleCallable(const DetachCamRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachCamRoleOutcome()>>(
        [this, request]()
        {
            return this->DetachCamRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::ModifyCustomImageAttributeOutcome BmClient::ModifyCustomImageAttribute(const ModifyCustomImageAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomImageAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomImageAttributeResponse rsp = ModifyCustomImageAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomImageAttributeOutcome(rsp);
        else
            return ModifyCustomImageAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomImageAttributeOutcome(outcome.GetError());
    }
}

void BmClient::ModifyCustomImageAttributeAsync(const ModifyCustomImageAttributeRequest& request, const ModifyCustomImageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomImageAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::ModifyCustomImageAttributeOutcomeCallable BmClient::ModifyCustomImageAttributeCallable(const ModifyCustomImageAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomImageAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomImageAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::ModifyDeviceAliasesOutcome BmClient::ModifyDeviceAliases(const ModifyDeviceAliasesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceAliases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceAliasesResponse rsp = ModifyDeviceAliasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceAliasesOutcome(rsp);
        else
            return ModifyDeviceAliasesOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceAliasesOutcome(outcome.GetError());
    }
}

void BmClient::ModifyDeviceAliasesAsync(const ModifyDeviceAliasesRequest& request, const ModifyDeviceAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDeviceAliases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::ModifyDeviceAliasesOutcomeCallable BmClient::ModifyDeviceAliasesCallable(const ModifyDeviceAliasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDeviceAliasesOutcome()>>(
        [this, request]()
        {
            return this->ModifyDeviceAliases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::ModifyDeviceAutoRenewFlagOutcome BmClient::ModifyDeviceAutoRenewFlag(const ModifyDeviceAutoRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceAutoRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceAutoRenewFlagResponse rsp = ModifyDeviceAutoRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceAutoRenewFlagOutcome(rsp);
        else
            return ModifyDeviceAutoRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceAutoRenewFlagOutcome(outcome.GetError());
    }
}

void BmClient::ModifyDeviceAutoRenewFlagAsync(const ModifyDeviceAutoRenewFlagRequest& request, const ModifyDeviceAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDeviceAutoRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::ModifyDeviceAutoRenewFlagOutcomeCallable BmClient::ModifyDeviceAutoRenewFlagCallable(const ModifyDeviceAutoRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDeviceAutoRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyDeviceAutoRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::ModifyLanIpOutcome BmClient::ModifyLanIp(const ModifyLanIpRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLanIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLanIpResponse rsp = ModifyLanIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLanIpOutcome(rsp);
        else
            return ModifyLanIpOutcome(o.GetError());
    }
    else
    {
        return ModifyLanIpOutcome(outcome.GetError());
    }
}

void BmClient::ModifyLanIpAsync(const ModifyLanIpRequest& request, const ModifyLanIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLanIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::ModifyLanIpOutcomeCallable BmClient::ModifyLanIpCallable(const ModifyLanIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLanIpOutcome()>>(
        [this, request]()
        {
            return this->ModifyLanIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::ModifyPayModePre2PostOutcome BmClient::ModifyPayModePre2Post(const ModifyPayModePre2PostRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPayModePre2Post");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPayModePre2PostResponse rsp = ModifyPayModePre2PostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPayModePre2PostOutcome(rsp);
        else
            return ModifyPayModePre2PostOutcome(o.GetError());
    }
    else
    {
        return ModifyPayModePre2PostOutcome(outcome.GetError());
    }
}

void BmClient::ModifyPayModePre2PostAsync(const ModifyPayModePre2PostRequest& request, const ModifyPayModePre2PostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPayModePre2Post(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::ModifyPayModePre2PostOutcomeCallable BmClient::ModifyPayModePre2PostCallable(const ModifyPayModePre2PostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPayModePre2PostOutcome()>>(
        [this, request]()
        {
            return this->ModifyPayModePre2Post(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::ModifyPsaRegulationOutcome BmClient::ModifyPsaRegulation(const ModifyPsaRegulationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPsaRegulation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPsaRegulationResponse rsp = ModifyPsaRegulationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPsaRegulationOutcome(rsp);
        else
            return ModifyPsaRegulationOutcome(o.GetError());
    }
    else
    {
        return ModifyPsaRegulationOutcome(outcome.GetError());
    }
}

void BmClient::ModifyPsaRegulationAsync(const ModifyPsaRegulationRequest& request, const ModifyPsaRegulationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPsaRegulation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::ModifyPsaRegulationOutcomeCallable BmClient::ModifyPsaRegulationCallable(const ModifyPsaRegulationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPsaRegulationOutcome()>>(
        [this, request]()
        {
            return this->ModifyPsaRegulation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::ModifyUserCmdOutcome BmClient::ModifyUserCmd(const ModifyUserCmdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserCmd");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserCmdResponse rsp = ModifyUserCmdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserCmdOutcome(rsp);
        else
            return ModifyUserCmdOutcome(o.GetError());
    }
    else
    {
        return ModifyUserCmdOutcome(outcome.GetError());
    }
}

void BmClient::ModifyUserCmdAsync(const ModifyUserCmdRequest& request, const ModifyUserCmdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserCmd(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::ModifyUserCmdOutcomeCallable BmClient::ModifyUserCmdCallable(const ModifyUserCmdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserCmdOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserCmd(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::OfflineDevicesOutcome BmClient::OfflineDevices(const OfflineDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "OfflineDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OfflineDevicesResponse rsp = OfflineDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OfflineDevicesOutcome(rsp);
        else
            return OfflineDevicesOutcome(o.GetError());
    }
    else
    {
        return OfflineDevicesOutcome(outcome.GetError());
    }
}

void BmClient::OfflineDevicesAsync(const OfflineDevicesRequest& request, const OfflineDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OfflineDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::OfflineDevicesOutcomeCallable BmClient::OfflineDevicesCallable(const OfflineDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OfflineDevicesOutcome()>>(
        [this, request]()
        {
            return this->OfflineDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::RebootDevicesOutcome BmClient::RebootDevices(const RebootDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "RebootDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebootDevicesResponse rsp = RebootDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebootDevicesOutcome(rsp);
        else
            return RebootDevicesOutcome(o.GetError());
    }
    else
    {
        return RebootDevicesOutcome(outcome.GetError());
    }
}

void BmClient::RebootDevicesAsync(const RebootDevicesRequest& request, const RebootDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RebootDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::RebootDevicesOutcomeCallable BmClient::RebootDevicesCallable(const RebootDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RebootDevicesOutcome()>>(
        [this, request]()
        {
            return this->RebootDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::RecoverDevicesOutcome BmClient::RecoverDevices(const RecoverDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverDevicesResponse rsp = RecoverDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverDevicesOutcome(rsp);
        else
            return RecoverDevicesOutcome(o.GetError());
    }
    else
    {
        return RecoverDevicesOutcome(outcome.GetError());
    }
}

void BmClient::RecoverDevicesAsync(const RecoverDevicesRequest& request, const RecoverDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecoverDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::RecoverDevicesOutcomeCallable BmClient::RecoverDevicesCallable(const RecoverDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecoverDevicesOutcome()>>(
        [this, request]()
        {
            return this->RecoverDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::ReloadDeviceOsOutcome BmClient::ReloadDeviceOs(const ReloadDeviceOsRequest &request)
{
    auto outcome = MakeRequest(request, "ReloadDeviceOs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReloadDeviceOsResponse rsp = ReloadDeviceOsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReloadDeviceOsOutcome(rsp);
        else
            return ReloadDeviceOsOutcome(o.GetError());
    }
    else
    {
        return ReloadDeviceOsOutcome(outcome.GetError());
    }
}

void BmClient::ReloadDeviceOsAsync(const ReloadDeviceOsRequest& request, const ReloadDeviceOsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReloadDeviceOs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::ReloadDeviceOsOutcomeCallable BmClient::ReloadDeviceOsCallable(const ReloadDeviceOsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReloadDeviceOsOutcome()>>(
        [this, request]()
        {
            return this->ReloadDeviceOs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::RepairTaskControlOutcome BmClient::RepairTaskControl(const RepairTaskControlRequest &request)
{
    auto outcome = MakeRequest(request, "RepairTaskControl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RepairTaskControlResponse rsp = RepairTaskControlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RepairTaskControlOutcome(rsp);
        else
            return RepairTaskControlOutcome(o.GetError());
    }
    else
    {
        return RepairTaskControlOutcome(outcome.GetError());
    }
}

void BmClient::RepairTaskControlAsync(const RepairTaskControlRequest& request, const RepairTaskControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RepairTaskControl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::RepairTaskControlOutcomeCallable BmClient::RepairTaskControlCallable(const RepairTaskControlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RepairTaskControlOutcome()>>(
        [this, request]()
        {
            return this->RepairTaskControl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::ResetDevicePasswordOutcome BmClient::ResetDevicePassword(const ResetDevicePasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetDevicePassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetDevicePasswordResponse rsp = ResetDevicePasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetDevicePasswordOutcome(rsp);
        else
            return ResetDevicePasswordOutcome(o.GetError());
    }
    else
    {
        return ResetDevicePasswordOutcome(outcome.GetError());
    }
}

void BmClient::ResetDevicePasswordAsync(const ResetDevicePasswordRequest& request, const ResetDevicePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetDevicePassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::ResetDevicePasswordOutcomeCallable BmClient::ResetDevicePasswordCallable(const ResetDevicePasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetDevicePasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetDevicePassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::ReturnDevicesOutcome BmClient::ReturnDevices(const ReturnDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "ReturnDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReturnDevicesResponse rsp = ReturnDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReturnDevicesOutcome(rsp);
        else
            return ReturnDevicesOutcome(o.GetError());
    }
    else
    {
        return ReturnDevicesOutcome(outcome.GetError());
    }
}

void BmClient::ReturnDevicesAsync(const ReturnDevicesRequest& request, const ReturnDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReturnDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::ReturnDevicesOutcomeCallable BmClient::ReturnDevicesCallable(const ReturnDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReturnDevicesOutcome()>>(
        [this, request]()
        {
            return this->ReturnDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::RunUserCmdOutcome BmClient::RunUserCmd(const RunUserCmdRequest &request)
{
    auto outcome = MakeRequest(request, "RunUserCmd");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunUserCmdResponse rsp = RunUserCmdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunUserCmdOutcome(rsp);
        else
            return RunUserCmdOutcome(o.GetError());
    }
    else
    {
        return RunUserCmdOutcome(outcome.GetError());
    }
}

void BmClient::RunUserCmdAsync(const RunUserCmdRequest& request, const RunUserCmdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunUserCmd(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::RunUserCmdOutcomeCallable BmClient::RunUserCmdCallable(const RunUserCmdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunUserCmdOutcome()>>(
        [this, request]()
        {
            return this->RunUserCmd(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::SetOutBandVpnAuthPasswordOutcome BmClient::SetOutBandVpnAuthPassword(const SetOutBandVpnAuthPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "SetOutBandVpnAuthPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetOutBandVpnAuthPasswordResponse rsp = SetOutBandVpnAuthPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetOutBandVpnAuthPasswordOutcome(rsp);
        else
            return SetOutBandVpnAuthPasswordOutcome(o.GetError());
    }
    else
    {
        return SetOutBandVpnAuthPasswordOutcome(outcome.GetError());
    }
}

void BmClient::SetOutBandVpnAuthPasswordAsync(const SetOutBandVpnAuthPasswordRequest& request, const SetOutBandVpnAuthPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetOutBandVpnAuthPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::SetOutBandVpnAuthPasswordOutcomeCallable BmClient::SetOutBandVpnAuthPasswordCallable(const SetOutBandVpnAuthPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetOutBandVpnAuthPasswordOutcome()>>(
        [this, request]()
        {
            return this->SetOutBandVpnAuthPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::ShutdownDevicesOutcome BmClient::ShutdownDevices(const ShutdownDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "ShutdownDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ShutdownDevicesResponse rsp = ShutdownDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ShutdownDevicesOutcome(rsp);
        else
            return ShutdownDevicesOutcome(o.GetError());
    }
    else
    {
        return ShutdownDevicesOutcome(outcome.GetError());
    }
}

void BmClient::ShutdownDevicesAsync(const ShutdownDevicesRequest& request, const ShutdownDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ShutdownDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::ShutdownDevicesOutcomeCallable BmClient::ShutdownDevicesCallable(const ShutdownDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ShutdownDevicesOutcome()>>(
        [this, request]()
        {
            return this->ShutdownDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::StartDevicesOutcome BmClient::StartDevices(const StartDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "StartDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartDevicesResponse rsp = StartDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartDevicesOutcome(rsp);
        else
            return StartDevicesOutcome(o.GetError());
    }
    else
    {
        return StartDevicesOutcome(outcome.GetError());
    }
}

void BmClient::StartDevicesAsync(const StartDevicesRequest& request, const StartDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::StartDevicesOutcomeCallable BmClient::StartDevicesCallable(const StartDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartDevicesOutcome()>>(
        [this, request]()
        {
            return this->StartDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmClient::UnbindPsaTagOutcome BmClient::UnbindPsaTag(const UnbindPsaTagRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindPsaTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindPsaTagResponse rsp = UnbindPsaTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindPsaTagOutcome(rsp);
        else
            return UnbindPsaTagOutcome(o.GetError());
    }
    else
    {
        return UnbindPsaTagOutcome(outcome.GetError());
    }
}

void BmClient::UnbindPsaTagAsync(const UnbindPsaTagRequest& request, const UnbindPsaTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindPsaTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmClient::UnbindPsaTagOutcomeCallable BmClient::UnbindPsaTagCallable(const UnbindPsaTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindPsaTagOutcome()>>(
        [this, request]()
        {
            return this->UnbindPsaTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

