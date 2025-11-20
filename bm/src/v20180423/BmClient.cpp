/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
    using Req = const AttachCamRoleRequest&;
    using Resp = AttachCamRoleResponse;

    DoRequestAsync<Req, Resp>(
        "AttachCamRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::AttachCamRoleOutcomeCallable BmClient::AttachCamRoleCallable(const AttachCamRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachCamRoleOutcome>>();
    AttachCamRoleAsync(
    request,
    [prom](
        const BmClient*,
        const AttachCamRoleRequest&,
        AttachCamRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BindPsaTagRequest&;
    using Resp = BindPsaTagResponse;

    DoRequestAsync<Req, Resp>(
        "BindPsaTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::BindPsaTagOutcomeCallable BmClient::BindPsaTagCallable(const BindPsaTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindPsaTagOutcome>>();
    BindPsaTagAsync(
    request,
    [prom](
        const BmClient*,
        const BindPsaTagRequest&,
        BindPsaTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BuyDevicesRequest&;
    using Resp = BuyDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "BuyDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::BuyDevicesOutcomeCallable BmClient::BuyDevicesCallable(const BuyDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BuyDevicesOutcome>>();
    BuyDevicesAsync(
    request,
    [prom](
        const BmClient*,
        const BuyDevicesRequest&,
        BuyDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCustomImageRequest&;
    using Resp = CreateCustomImageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::CreateCustomImageOutcomeCallable BmClient::CreateCustomImageCallable(const CreateCustomImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomImageOutcome>>();
    CreateCustomImageAsync(
    request,
    [prom](
        const BmClient*,
        const CreateCustomImageRequest&,
        CreateCustomImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreatePsaRegulationRequest&;
    using Resp = CreatePsaRegulationResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePsaRegulation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::CreatePsaRegulationOutcomeCallable BmClient::CreatePsaRegulationCallable(const CreatePsaRegulationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePsaRegulationOutcome>>();
    CreatePsaRegulationAsync(
    request,
    [prom](
        const BmClient*,
        const CreatePsaRegulationRequest&,
        CreatePsaRegulationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSpotDeviceRequest&;
    using Resp = CreateSpotDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSpotDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::CreateSpotDeviceOutcomeCallable BmClient::CreateSpotDeviceCallable(const CreateSpotDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSpotDeviceOutcome>>();
    CreateSpotDeviceAsync(
    request,
    [prom](
        const BmClient*,
        const CreateSpotDeviceRequest&,
        CreateSpotDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateUserCmdRequest&;
    using Resp = CreateUserCmdResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserCmd", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::CreateUserCmdOutcomeCallable BmClient::CreateUserCmdCallable(const CreateUserCmdRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserCmdOutcome>>();
    CreateUserCmdAsync(
    request,
    [prom](
        const BmClient*,
        const CreateUserCmdRequest&,
        CreateUserCmdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteCustomImagesRequest&;
    using Resp = DeleteCustomImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCustomImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DeleteCustomImagesOutcomeCallable BmClient::DeleteCustomImagesCallable(const DeleteCustomImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCustomImagesOutcome>>();
    DeleteCustomImagesAsync(
    request,
    [prom](
        const BmClient*,
        const DeleteCustomImagesRequest&,
        DeleteCustomImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeletePsaRegulationRequest&;
    using Resp = DeletePsaRegulationResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePsaRegulation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DeletePsaRegulationOutcomeCallable BmClient::DeletePsaRegulationCallable(const DeletePsaRegulationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePsaRegulationOutcome>>();
    DeletePsaRegulationAsync(
    request,
    [prom](
        const BmClient*,
        const DeletePsaRegulationRequest&,
        DeletePsaRegulationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteUserCmdsRequest&;
    using Resp = DeleteUserCmdsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUserCmds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DeleteUserCmdsOutcomeCallable BmClient::DeleteUserCmdsCallable(const DeleteUserCmdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserCmdsOutcome>>();
    DeleteUserCmdsAsync(
    request,
    [prom](
        const BmClient*,
        const DeleteUserCmdsRequest&,
        DeleteUserCmdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCustomImageProcessRequest&;
    using Resp = DescribeCustomImageProcessResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomImageProcess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeCustomImageProcessOutcomeCallable BmClient::DescribeCustomImageProcessCallable(const DescribeCustomImageProcessRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomImageProcessOutcome>>();
    DescribeCustomImageProcessAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeCustomImageProcessRequest&,
        DescribeCustomImageProcessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCustomImagesRequest&;
    using Resp = DescribeCustomImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeCustomImagesOutcomeCallable BmClient::DescribeCustomImagesCallable(const DescribeCustomImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomImagesOutcome>>();
    DescribeCustomImagesAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeCustomImagesRequest&,
        DescribeCustomImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDeviceClassRequest&;
    using Resp = DescribeDeviceClassResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceClass", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeDeviceClassOutcomeCallable BmClient::DescribeDeviceClassCallable(const DescribeDeviceClassRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceClassOutcome>>();
    DescribeDeviceClassAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeDeviceClassRequest&,
        DescribeDeviceClassOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDeviceClassPartitionRequest&;
    using Resp = DescribeDeviceClassPartitionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceClassPartition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeDeviceClassPartitionOutcomeCallable BmClient::DescribeDeviceClassPartitionCallable(const DescribeDeviceClassPartitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceClassPartitionOutcome>>();
    DescribeDeviceClassPartitionAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeDeviceClassPartitionRequest&,
        DescribeDeviceClassPartitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDeviceHardwareInfoRequest&;
    using Resp = DescribeDeviceHardwareInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceHardwareInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeDeviceHardwareInfoOutcomeCallable BmClient::DescribeDeviceHardwareInfoCallable(const DescribeDeviceHardwareInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceHardwareInfoOutcome>>();
    DescribeDeviceHardwareInfoAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeDeviceHardwareInfoRequest&,
        DescribeDeviceHardwareInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDeviceInventoryRequest&;
    using Resp = DescribeDeviceInventoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceInventory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeDeviceInventoryOutcomeCallable BmClient::DescribeDeviceInventoryCallable(const DescribeDeviceInventoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceInventoryOutcome>>();
    DescribeDeviceInventoryAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeDeviceInventoryRequest&,
        DescribeDeviceInventoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDeviceOperationLogRequest&;
    using Resp = DescribeDeviceOperationLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceOperationLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeDeviceOperationLogOutcomeCallable BmClient::DescribeDeviceOperationLogCallable(const DescribeDeviceOperationLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceOperationLogOutcome>>();
    DescribeDeviceOperationLogAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeDeviceOperationLogRequest&,
        DescribeDeviceOperationLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDevicePartitionRequest&;
    using Resp = DescribeDevicePartitionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDevicePartition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeDevicePartitionOutcomeCallable BmClient::DescribeDevicePartitionCallable(const DescribeDevicePartitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicePartitionOutcome>>();
    DescribeDevicePartitionAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeDevicePartitionRequest&,
        DescribeDevicePartitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDevicePositionRequest&;
    using Resp = DescribeDevicePositionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDevicePosition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeDevicePositionOutcomeCallable BmClient::DescribeDevicePositionCallable(const DescribeDevicePositionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicePositionOutcome>>();
    DescribeDevicePositionAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeDevicePositionRequest&,
        DescribeDevicePositionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDevicePriceInfoRequest&;
    using Resp = DescribeDevicePriceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDevicePriceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeDevicePriceInfoOutcomeCallable BmClient::DescribeDevicePriceInfoCallable(const DescribeDevicePriceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicePriceInfoOutcome>>();
    DescribeDevicePriceInfoAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeDevicePriceInfoRequest&,
        DescribeDevicePriceInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDevicesRequest&;
    using Resp = DescribeDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeDevicesOutcomeCallable BmClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicesOutcome>>();
    DescribeDevicesAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeDevicesRequest&,
        DescribeDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeHardwareSpecificationRequest&;
    using Resp = DescribeHardwareSpecificationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHardwareSpecification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeHardwareSpecificationOutcomeCallable BmClient::DescribeHardwareSpecificationCallable(const DescribeHardwareSpecificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHardwareSpecificationOutcome>>();
    DescribeHardwareSpecificationAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeHardwareSpecificationRequest&,
        DescribeHardwareSpecificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeHostedDeviceOutBandInfoRequest&;
    using Resp = DescribeHostedDeviceOutBandInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostedDeviceOutBandInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeHostedDeviceOutBandInfoOutcomeCallable BmClient::DescribeHostedDeviceOutBandInfoCallable(const DescribeHostedDeviceOutBandInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostedDeviceOutBandInfoOutcome>>();
    DescribeHostedDeviceOutBandInfoAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeHostedDeviceOutBandInfoRequest&,
        DescribeHostedDeviceOutBandInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOperationResultRequest&;
    using Resp = DescribeOperationResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOperationResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeOperationResultOutcomeCallable BmClient::DescribeOperationResultCallable(const DescribeOperationResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOperationResultOutcome>>();
    DescribeOperationResultAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeOperationResultRequest&,
        DescribeOperationResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOsInfoRequest&;
    using Resp = DescribeOsInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOsInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeOsInfoOutcomeCallable BmClient::DescribeOsInfoCallable(const DescribeOsInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOsInfoOutcome>>();
    DescribeOsInfoAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeOsInfoRequest&,
        DescribeOsInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePsaRegulationsRequest&;
    using Resp = DescribePsaRegulationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePsaRegulations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribePsaRegulationsOutcomeCallable BmClient::DescribePsaRegulationsCallable(const DescribePsaRegulationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePsaRegulationsOutcome>>();
    DescribePsaRegulationsAsync(
    request,
    [prom](
        const BmClient*,
        const DescribePsaRegulationsRequest&,
        DescribePsaRegulationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRegionsRequest&;
    using Resp = DescribeRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeRegionsOutcomeCallable BmClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegionsOutcome>>();
    DescribeRegionsAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeRegionsRequest&,
        DescribeRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRepairTaskConstantRequest&;
    using Resp = DescribeRepairTaskConstantResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRepairTaskConstant", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeRepairTaskConstantOutcomeCallable BmClient::DescribeRepairTaskConstantCallable(const DescribeRepairTaskConstantRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRepairTaskConstantOutcome>>();
    DescribeRepairTaskConstantAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeRepairTaskConstantRequest&,
        DescribeRepairTaskConstantOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTaskInfoRequest&;
    using Resp = DescribeTaskInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeTaskInfoOutcomeCallable BmClient::DescribeTaskInfoCallable(const DescribeTaskInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskInfoOutcome>>();
    DescribeTaskInfoAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeTaskInfoRequest&,
        DescribeTaskInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTaskOperationLogRequest&;
    using Resp = DescribeTaskOperationLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskOperationLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeTaskOperationLogOutcomeCallable BmClient::DescribeTaskOperationLogCallable(const DescribeTaskOperationLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskOperationLogOutcome>>();
    DescribeTaskOperationLogAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeTaskOperationLogRequest&,
        DescribeTaskOperationLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUserCmdTaskInfoRequest&;
    using Resp = DescribeUserCmdTaskInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserCmdTaskInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeUserCmdTaskInfoOutcomeCallable BmClient::DescribeUserCmdTaskInfoCallable(const DescribeUserCmdTaskInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserCmdTaskInfoOutcome>>();
    DescribeUserCmdTaskInfoAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeUserCmdTaskInfoRequest&,
        DescribeUserCmdTaskInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUserCmdTasksRequest&;
    using Resp = DescribeUserCmdTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserCmdTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeUserCmdTasksOutcomeCallable BmClient::DescribeUserCmdTasksCallable(const DescribeUserCmdTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserCmdTasksOutcome>>();
    DescribeUserCmdTasksAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeUserCmdTasksRequest&,
        DescribeUserCmdTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUserCmdsRequest&;
    using Resp = DescribeUserCmdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserCmds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DescribeUserCmdsOutcomeCallable BmClient::DescribeUserCmdsCallable(const DescribeUserCmdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserCmdsOutcome>>();
    DescribeUserCmdsAsync(
    request,
    [prom](
        const BmClient*,
        const DescribeUserCmdsRequest&,
        DescribeUserCmdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DetachCamRoleRequest&;
    using Resp = DetachCamRoleResponse;

    DoRequestAsync<Req, Resp>(
        "DetachCamRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::DetachCamRoleOutcomeCallable BmClient::DetachCamRoleCallable(const DetachCamRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachCamRoleOutcome>>();
    DetachCamRoleAsync(
    request,
    [prom](
        const BmClient*,
        const DetachCamRoleRequest&,
        DetachCamRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyCustomImageAttributeRequest&;
    using Resp = ModifyCustomImageAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomImageAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::ModifyCustomImageAttributeOutcomeCallable BmClient::ModifyCustomImageAttributeCallable(const ModifyCustomImageAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomImageAttributeOutcome>>();
    ModifyCustomImageAttributeAsync(
    request,
    [prom](
        const BmClient*,
        const ModifyCustomImageAttributeRequest&,
        ModifyCustomImageAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDeviceAliasesRequest&;
    using Resp = ModifyDeviceAliasesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDeviceAliases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::ModifyDeviceAliasesOutcomeCallable BmClient::ModifyDeviceAliasesCallable(const ModifyDeviceAliasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceAliasesOutcome>>();
    ModifyDeviceAliasesAsync(
    request,
    [prom](
        const BmClient*,
        const ModifyDeviceAliasesRequest&,
        ModifyDeviceAliasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDeviceAutoRenewFlagRequest&;
    using Resp = ModifyDeviceAutoRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDeviceAutoRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::ModifyDeviceAutoRenewFlagOutcomeCallable BmClient::ModifyDeviceAutoRenewFlagCallable(const ModifyDeviceAutoRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceAutoRenewFlagOutcome>>();
    ModifyDeviceAutoRenewFlagAsync(
    request,
    [prom](
        const BmClient*,
        const ModifyDeviceAutoRenewFlagRequest&,
        ModifyDeviceAutoRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyLanIpRequest&;
    using Resp = ModifyLanIpResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLanIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::ModifyLanIpOutcomeCallable BmClient::ModifyLanIpCallable(const ModifyLanIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLanIpOutcome>>();
    ModifyLanIpAsync(
    request,
    [prom](
        const BmClient*,
        const ModifyLanIpRequest&,
        ModifyLanIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyPayModePre2PostRequest&;
    using Resp = ModifyPayModePre2PostResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPayModePre2Post", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::ModifyPayModePre2PostOutcomeCallable BmClient::ModifyPayModePre2PostCallable(const ModifyPayModePre2PostRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPayModePre2PostOutcome>>();
    ModifyPayModePre2PostAsync(
    request,
    [prom](
        const BmClient*,
        const ModifyPayModePre2PostRequest&,
        ModifyPayModePre2PostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyPsaRegulationRequest&;
    using Resp = ModifyPsaRegulationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPsaRegulation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::ModifyPsaRegulationOutcomeCallable BmClient::ModifyPsaRegulationCallable(const ModifyPsaRegulationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPsaRegulationOutcome>>();
    ModifyPsaRegulationAsync(
    request,
    [prom](
        const BmClient*,
        const ModifyPsaRegulationRequest&,
        ModifyPsaRegulationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyUserCmdRequest&;
    using Resp = ModifyUserCmdResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserCmd", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::ModifyUserCmdOutcomeCallable BmClient::ModifyUserCmdCallable(const ModifyUserCmdRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserCmdOutcome>>();
    ModifyUserCmdAsync(
    request,
    [prom](
        const BmClient*,
        const ModifyUserCmdRequest&,
        ModifyUserCmdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const OfflineDevicesRequest&;
    using Resp = OfflineDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "OfflineDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::OfflineDevicesOutcomeCallable BmClient::OfflineDevicesCallable(const OfflineDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<OfflineDevicesOutcome>>();
    OfflineDevicesAsync(
    request,
    [prom](
        const BmClient*,
        const OfflineDevicesRequest&,
        OfflineDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RebootDevicesRequest&;
    using Resp = RebootDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "RebootDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::RebootDevicesOutcomeCallable BmClient::RebootDevicesCallable(const RebootDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RebootDevicesOutcome>>();
    RebootDevicesAsync(
    request,
    [prom](
        const BmClient*,
        const RebootDevicesRequest&,
        RebootDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecoverDevicesRequest&;
    using Resp = RecoverDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "RecoverDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::RecoverDevicesOutcomeCallable BmClient::RecoverDevicesCallable(const RecoverDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecoverDevicesOutcome>>();
    RecoverDevicesAsync(
    request,
    [prom](
        const BmClient*,
        const RecoverDevicesRequest&,
        RecoverDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ReloadDeviceOsRequest&;
    using Resp = ReloadDeviceOsResponse;

    DoRequestAsync<Req, Resp>(
        "ReloadDeviceOs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::ReloadDeviceOsOutcomeCallable BmClient::ReloadDeviceOsCallable(const ReloadDeviceOsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReloadDeviceOsOutcome>>();
    ReloadDeviceOsAsync(
    request,
    [prom](
        const BmClient*,
        const ReloadDeviceOsRequest&,
        ReloadDeviceOsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RepairTaskControlRequest&;
    using Resp = RepairTaskControlResponse;

    DoRequestAsync<Req, Resp>(
        "RepairTaskControl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::RepairTaskControlOutcomeCallable BmClient::RepairTaskControlCallable(const RepairTaskControlRequest &request)
{
    const auto prom = std::make_shared<std::promise<RepairTaskControlOutcome>>();
    RepairTaskControlAsync(
    request,
    [prom](
        const BmClient*,
        const RepairTaskControlRequest&,
        RepairTaskControlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ResetDevicePasswordRequest&;
    using Resp = ResetDevicePasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ResetDevicePassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::ResetDevicePasswordOutcomeCallable BmClient::ResetDevicePasswordCallable(const ResetDevicePasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetDevicePasswordOutcome>>();
    ResetDevicePasswordAsync(
    request,
    [prom](
        const BmClient*,
        const ResetDevicePasswordRequest&,
        ResetDevicePasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ReturnDevicesRequest&;
    using Resp = ReturnDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "ReturnDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::ReturnDevicesOutcomeCallable BmClient::ReturnDevicesCallable(const ReturnDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReturnDevicesOutcome>>();
    ReturnDevicesAsync(
    request,
    [prom](
        const BmClient*,
        const ReturnDevicesRequest&,
        ReturnDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RunUserCmdRequest&;
    using Resp = RunUserCmdResponse;

    DoRequestAsync<Req, Resp>(
        "RunUserCmd", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::RunUserCmdOutcomeCallable BmClient::RunUserCmdCallable(const RunUserCmdRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunUserCmdOutcome>>();
    RunUserCmdAsync(
    request,
    [prom](
        const BmClient*,
        const RunUserCmdRequest&,
        RunUserCmdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SetOutBandVpnAuthPasswordRequest&;
    using Resp = SetOutBandVpnAuthPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "SetOutBandVpnAuthPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::SetOutBandVpnAuthPasswordOutcomeCallable BmClient::SetOutBandVpnAuthPasswordCallable(const SetOutBandVpnAuthPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetOutBandVpnAuthPasswordOutcome>>();
    SetOutBandVpnAuthPasswordAsync(
    request,
    [prom](
        const BmClient*,
        const SetOutBandVpnAuthPasswordRequest&,
        SetOutBandVpnAuthPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ShutdownDevicesRequest&;
    using Resp = ShutdownDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "ShutdownDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::ShutdownDevicesOutcomeCallable BmClient::ShutdownDevicesCallable(const ShutdownDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ShutdownDevicesOutcome>>();
    ShutdownDevicesAsync(
    request,
    [prom](
        const BmClient*,
        const ShutdownDevicesRequest&,
        ShutdownDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const StartDevicesRequest&;
    using Resp = StartDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "StartDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::StartDevicesOutcomeCallable BmClient::StartDevicesCallable(const StartDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartDevicesOutcome>>();
    StartDevicesAsync(
    request,
    [prom](
        const BmClient*,
        const StartDevicesRequest&,
        StartDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UnbindPsaTagRequest&;
    using Resp = UnbindPsaTagResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindPsaTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmClient::UnbindPsaTagOutcomeCallable BmClient::UnbindPsaTagCallable(const UnbindPsaTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindPsaTagOutcome>>();
    UnbindPsaTagAsync(
    request,
    [prom](
        const BmClient*,
        const UnbindPsaTagRequest&,
        UnbindPsaTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

