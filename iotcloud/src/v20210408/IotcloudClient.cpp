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

#include <tencentcloud/iotcloud/v20210408/IotcloudClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iotcloud::V20210408;
using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-04-08";
    const string ENDPOINT = "iotcloud.tencentcloudapi.com";
}

IotcloudClient::IotcloudClient(const Credential &credential, const string &region) :
    IotcloudClient(credential, region, ClientProfile())
{
}

IotcloudClient::IotcloudClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IotcloudClient::BatchUpdateFirmwareOutcome IotcloudClient::BatchUpdateFirmware(const BatchUpdateFirmwareRequest &request)
{
    auto outcome = MakeRequest(request, "BatchUpdateFirmware");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchUpdateFirmwareResponse rsp = BatchUpdateFirmwareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchUpdateFirmwareOutcome(rsp);
        else
            return BatchUpdateFirmwareOutcome(o.GetError());
    }
    else
    {
        return BatchUpdateFirmwareOutcome(outcome.GetError());
    }
}

void IotcloudClient::BatchUpdateFirmwareAsync(const BatchUpdateFirmwareRequest& request, const BatchUpdateFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchUpdateFirmwareRequest&;
    using Resp = BatchUpdateFirmwareResponse;

    DoRequestAsync<Req, Resp>(
        "BatchUpdateFirmware", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::BatchUpdateFirmwareOutcomeCallable IotcloudClient::BatchUpdateFirmwareCallable(const BatchUpdateFirmwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchUpdateFirmwareOutcome>>();
    BatchUpdateFirmwareAsync(
    request,
    [prom](
        const IotcloudClient*,
        const BatchUpdateFirmwareRequest&,
        BatchUpdateFirmwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::BindDevicesOutcome IotcloudClient::BindDevices(const BindDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "BindDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindDevicesResponse rsp = BindDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindDevicesOutcome(rsp);
        else
            return BindDevicesOutcome(o.GetError());
    }
    else
    {
        return BindDevicesOutcome(outcome.GetError());
    }
}

void IotcloudClient::BindDevicesAsync(const BindDevicesRequest& request, const BindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindDevicesRequest&;
    using Resp = BindDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "BindDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::BindDevicesOutcomeCallable IotcloudClient::BindDevicesCallable(const BindDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindDevicesOutcome>>();
    BindDevicesAsync(
    request,
    [prom](
        const IotcloudClient*,
        const BindDevicesRequest&,
        BindDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::CancelDeviceFirmwareTaskOutcome IotcloudClient::CancelDeviceFirmwareTask(const CancelDeviceFirmwareTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelDeviceFirmwareTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelDeviceFirmwareTaskResponse rsp = CancelDeviceFirmwareTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelDeviceFirmwareTaskOutcome(rsp);
        else
            return CancelDeviceFirmwareTaskOutcome(o.GetError());
    }
    else
    {
        return CancelDeviceFirmwareTaskOutcome(outcome.GetError());
    }
}

void IotcloudClient::CancelDeviceFirmwareTaskAsync(const CancelDeviceFirmwareTaskRequest& request, const CancelDeviceFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelDeviceFirmwareTaskRequest&;
    using Resp = CancelDeviceFirmwareTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CancelDeviceFirmwareTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::CancelDeviceFirmwareTaskOutcomeCallable IotcloudClient::CancelDeviceFirmwareTaskCallable(const CancelDeviceFirmwareTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelDeviceFirmwareTaskOutcome>>();
    CancelDeviceFirmwareTaskAsync(
    request,
    [prom](
        const IotcloudClient*,
        const CancelDeviceFirmwareTaskRequest&,
        CancelDeviceFirmwareTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::CreateDeviceOutcome IotcloudClient::CreateDevice(const CreateDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceResponse rsp = CreateDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceOutcome(rsp);
        else
            return CreateDeviceOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceOutcome(outcome.GetError());
    }
}

void IotcloudClient::CreateDeviceAsync(const CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeviceRequest&;
    using Resp = CreateDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::CreateDeviceOutcomeCallable IotcloudClient::CreateDeviceCallable(const CreateDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceOutcome>>();
    CreateDeviceAsync(
    request,
    [prom](
        const IotcloudClient*,
        const CreateDeviceRequest&,
        CreateDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::CreateMultiDevicesTaskOutcome IotcloudClient::CreateMultiDevicesTask(const CreateMultiDevicesTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMultiDevicesTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMultiDevicesTaskResponse rsp = CreateMultiDevicesTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMultiDevicesTaskOutcome(rsp);
        else
            return CreateMultiDevicesTaskOutcome(o.GetError());
    }
    else
    {
        return CreateMultiDevicesTaskOutcome(outcome.GetError());
    }
}

void IotcloudClient::CreateMultiDevicesTaskAsync(const CreateMultiDevicesTaskRequest& request, const CreateMultiDevicesTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMultiDevicesTaskRequest&;
    using Resp = CreateMultiDevicesTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMultiDevicesTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::CreateMultiDevicesTaskOutcomeCallable IotcloudClient::CreateMultiDevicesTaskCallable(const CreateMultiDevicesTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMultiDevicesTaskOutcome>>();
    CreateMultiDevicesTaskAsync(
    request,
    [prom](
        const IotcloudClient*,
        const CreateMultiDevicesTaskRequest&,
        CreateMultiDevicesTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::CreatePrivateCAOutcome IotcloudClient::CreatePrivateCA(const CreatePrivateCARequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrivateCA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrivateCAResponse rsp = CreatePrivateCAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrivateCAOutcome(rsp);
        else
            return CreatePrivateCAOutcome(o.GetError());
    }
    else
    {
        return CreatePrivateCAOutcome(outcome.GetError());
    }
}

void IotcloudClient::CreatePrivateCAAsync(const CreatePrivateCARequest& request, const CreatePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrivateCARequest&;
    using Resp = CreatePrivateCAResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrivateCA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::CreatePrivateCAOutcomeCallable IotcloudClient::CreatePrivateCACallable(const CreatePrivateCARequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrivateCAOutcome>>();
    CreatePrivateCAAsync(
    request,
    [prom](
        const IotcloudClient*,
        const CreatePrivateCARequest&,
        CreatePrivateCAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::CreateProductOutcome IotcloudClient::CreateProduct(const CreateProductRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProductResponse rsp = CreateProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProductOutcome(rsp);
        else
            return CreateProductOutcome(o.GetError());
    }
    else
    {
        return CreateProductOutcome(outcome.GetError());
    }
}

void IotcloudClient::CreateProductAsync(const CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProductRequest&;
    using Resp = CreateProductResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::CreateProductOutcomeCallable IotcloudClient::CreateProductCallable(const CreateProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProductOutcome>>();
    CreateProductAsync(
    request,
    [prom](
        const IotcloudClient*,
        const CreateProductRequest&,
        CreateProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::CreateTaskFileUrlOutcome IotcloudClient::CreateTaskFileUrl(const CreateTaskFileUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskFileUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskFileUrlResponse rsp = CreateTaskFileUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskFileUrlOutcome(rsp);
        else
            return CreateTaskFileUrlOutcome(o.GetError());
    }
    else
    {
        return CreateTaskFileUrlOutcome(outcome.GetError());
    }
}

void IotcloudClient::CreateTaskFileUrlAsync(const CreateTaskFileUrlRequest& request, const CreateTaskFileUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTaskFileUrlRequest&;
    using Resp = CreateTaskFileUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTaskFileUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::CreateTaskFileUrlOutcomeCallable IotcloudClient::CreateTaskFileUrlCallable(const CreateTaskFileUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTaskFileUrlOutcome>>();
    CreateTaskFileUrlAsync(
    request,
    [prom](
        const IotcloudClient*,
        const CreateTaskFileUrlRequest&,
        CreateTaskFileUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::CreateTopicPolicyOutcome IotcloudClient::CreateTopicPolicy(const CreateTopicPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTopicPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTopicPolicyResponse rsp = CreateTopicPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTopicPolicyOutcome(rsp);
        else
            return CreateTopicPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateTopicPolicyOutcome(outcome.GetError());
    }
}

void IotcloudClient::CreateTopicPolicyAsync(const CreateTopicPolicyRequest& request, const CreateTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTopicPolicyRequest&;
    using Resp = CreateTopicPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTopicPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::CreateTopicPolicyOutcomeCallable IotcloudClient::CreateTopicPolicyCallable(const CreateTopicPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTopicPolicyOutcome>>();
    CreateTopicPolicyAsync(
    request,
    [prom](
        const IotcloudClient*,
        const CreateTopicPolicyRequest&,
        CreateTopicPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::CreateTopicRuleOutcome IotcloudClient::CreateTopicRule(const CreateTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTopicRuleResponse rsp = CreateTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTopicRuleOutcome(rsp);
        else
            return CreateTopicRuleOutcome(o.GetError());
    }
    else
    {
        return CreateTopicRuleOutcome(outcome.GetError());
    }
}

void IotcloudClient::CreateTopicRuleAsync(const CreateTopicRuleRequest& request, const CreateTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTopicRuleRequest&;
    using Resp = CreateTopicRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTopicRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::CreateTopicRuleOutcomeCallable IotcloudClient::CreateTopicRuleCallable(const CreateTopicRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTopicRuleOutcome>>();
    CreateTopicRuleAsync(
    request,
    [prom](
        const IotcloudClient*,
        const CreateTopicRuleRequest&,
        CreateTopicRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DeleteDeviceOutcome IotcloudClient::DeleteDevice(const DeleteDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceResponse rsp = DeleteDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceOutcome(rsp);
        else
            return DeleteDeviceOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceOutcome(outcome.GetError());
    }
}

void IotcloudClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDeviceRequest&;
    using Resp = DeleteDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DeleteDeviceOutcomeCallable IotcloudClient::DeleteDeviceCallable(const DeleteDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceOutcome>>();
    DeleteDeviceAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DeleteDeviceRequest&,
        DeleteDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DeleteDeviceResourceOutcome IotcloudClient::DeleteDeviceResource(const DeleteDeviceResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeviceResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceResourceResponse rsp = DeleteDeviceResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceResourceOutcome(rsp);
        else
            return DeleteDeviceResourceOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceResourceOutcome(outcome.GetError());
    }
}

void IotcloudClient::DeleteDeviceResourceAsync(const DeleteDeviceResourceRequest& request, const DeleteDeviceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDeviceResourceRequest&;
    using Resp = DeleteDeviceResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDeviceResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DeleteDeviceResourceOutcomeCallable IotcloudClient::DeleteDeviceResourceCallable(const DeleteDeviceResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceResourceOutcome>>();
    DeleteDeviceResourceAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DeleteDeviceResourceRequest&,
        DeleteDeviceResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DeleteDeviceShadowOutcome IotcloudClient::DeleteDeviceShadow(const DeleteDeviceShadowRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeviceShadow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceShadowResponse rsp = DeleteDeviceShadowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceShadowOutcome(rsp);
        else
            return DeleteDeviceShadowOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceShadowOutcome(outcome.GetError());
    }
}

void IotcloudClient::DeleteDeviceShadowAsync(const DeleteDeviceShadowRequest& request, const DeleteDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDeviceShadowRequest&;
    using Resp = DeleteDeviceShadowResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDeviceShadow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DeleteDeviceShadowOutcomeCallable IotcloudClient::DeleteDeviceShadowCallable(const DeleteDeviceShadowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceShadowOutcome>>();
    DeleteDeviceShadowAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DeleteDeviceShadowRequest&,
        DeleteDeviceShadowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DeletePrivateCAOutcome IotcloudClient::DeletePrivateCA(const DeletePrivateCARequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrivateCA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrivateCAResponse rsp = DeletePrivateCAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrivateCAOutcome(rsp);
        else
            return DeletePrivateCAOutcome(o.GetError());
    }
    else
    {
        return DeletePrivateCAOutcome(outcome.GetError());
    }
}

void IotcloudClient::DeletePrivateCAAsync(const DeletePrivateCARequest& request, const DeletePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrivateCARequest&;
    using Resp = DeletePrivateCAResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrivateCA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DeletePrivateCAOutcomeCallable IotcloudClient::DeletePrivateCACallable(const DeletePrivateCARequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrivateCAOutcome>>();
    DeletePrivateCAAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DeletePrivateCARequest&,
        DeletePrivateCAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DeleteProductOutcome IotcloudClient::DeleteProduct(const DeleteProductRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProductResponse rsp = DeleteProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProductOutcome(rsp);
        else
            return DeleteProductOutcome(o.GetError());
    }
    else
    {
        return DeleteProductOutcome(outcome.GetError());
    }
}

void IotcloudClient::DeleteProductAsync(const DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProductRequest&;
    using Resp = DeleteProductResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DeleteProductOutcomeCallable IotcloudClient::DeleteProductCallable(const DeleteProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProductOutcome>>();
    DeleteProductAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DeleteProductRequest&,
        DeleteProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DeleteProductPrivateCAOutcome IotcloudClient::DeleteProductPrivateCA(const DeleteProductPrivateCARequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProductPrivateCA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProductPrivateCAResponse rsp = DeleteProductPrivateCAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProductPrivateCAOutcome(rsp);
        else
            return DeleteProductPrivateCAOutcome(o.GetError());
    }
    else
    {
        return DeleteProductPrivateCAOutcome(outcome.GetError());
    }
}

void IotcloudClient::DeleteProductPrivateCAAsync(const DeleteProductPrivateCARequest& request, const DeleteProductPrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProductPrivateCARequest&;
    using Resp = DeleteProductPrivateCAResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProductPrivateCA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DeleteProductPrivateCAOutcomeCallable IotcloudClient::DeleteProductPrivateCACallable(const DeleteProductPrivateCARequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProductPrivateCAOutcome>>();
    DeleteProductPrivateCAAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DeleteProductPrivateCARequest&,
        DeleteProductPrivateCAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DeleteTopicRuleOutcome IotcloudClient::DeleteTopicRule(const DeleteTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicRuleResponse rsp = DeleteTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicRuleOutcome(rsp);
        else
            return DeleteTopicRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicRuleOutcome(outcome.GetError());
    }
}

void IotcloudClient::DeleteTopicRuleAsync(const DeleteTopicRuleRequest& request, const DeleteTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTopicRuleRequest&;
    using Resp = DeleteTopicRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTopicRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DeleteTopicRuleOutcomeCallable IotcloudClient::DeleteTopicRuleCallable(const DeleteTopicRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTopicRuleOutcome>>();
    DeleteTopicRuleAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DeleteTopicRuleRequest&,
        DeleteTopicRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeDeviceOutcome IotcloudClient::DescribeDevice(const DescribeDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceResponse rsp = DescribeDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceOutcome(rsp);
        else
            return DescribeDeviceOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceRequest&;
    using Resp = DescribeDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeDeviceOutcomeCallable IotcloudClient::DescribeDeviceCallable(const DescribeDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceOutcome>>();
    DescribeDeviceAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeDeviceRequest&,
        DescribeDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeDeviceClientKeyOutcome IotcloudClient::DescribeDeviceClientKey(const DescribeDeviceClientKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceClientKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceClientKeyResponse rsp = DescribeDeviceClientKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceClientKeyOutcome(rsp);
        else
            return DescribeDeviceClientKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceClientKeyOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeDeviceClientKeyAsync(const DescribeDeviceClientKeyRequest& request, const DescribeDeviceClientKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceClientKeyRequest&;
    using Resp = DescribeDeviceClientKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceClientKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeDeviceClientKeyOutcomeCallable IotcloudClient::DescribeDeviceClientKeyCallable(const DescribeDeviceClientKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceClientKeyOutcome>>();
    DescribeDeviceClientKeyAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeDeviceClientKeyRequest&,
        DescribeDeviceClientKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeDeviceResourceOutcome IotcloudClient::DescribeDeviceResource(const DescribeDeviceResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceResourceResponse rsp = DescribeDeviceResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceResourceOutcome(rsp);
        else
            return DescribeDeviceResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceResourceOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeDeviceResourceAsync(const DescribeDeviceResourceRequest& request, const DescribeDeviceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceResourceRequest&;
    using Resp = DescribeDeviceResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeDeviceResourceOutcomeCallable IotcloudClient::DescribeDeviceResourceCallable(const DescribeDeviceResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceResourceOutcome>>();
    DescribeDeviceResourceAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeDeviceResourceRequest&,
        DescribeDeviceResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeDeviceResourcesOutcome IotcloudClient::DescribeDeviceResources(const DescribeDeviceResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceResourcesResponse rsp = DescribeDeviceResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceResourcesOutcome(rsp);
        else
            return DescribeDeviceResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceResourcesOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeDeviceResourcesAsync(const DescribeDeviceResourcesRequest& request, const DescribeDeviceResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceResourcesRequest&;
    using Resp = DescribeDeviceResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeDeviceResourcesOutcomeCallable IotcloudClient::DescribeDeviceResourcesCallable(const DescribeDeviceResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceResourcesOutcome>>();
    DescribeDeviceResourcesAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeDeviceResourcesRequest&,
        DescribeDeviceResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeDeviceShadowOutcome IotcloudClient::DescribeDeviceShadow(const DescribeDeviceShadowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceShadow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceShadowResponse rsp = DescribeDeviceShadowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceShadowOutcome(rsp);
        else
            return DescribeDeviceShadowOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceShadowOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeDeviceShadowAsync(const DescribeDeviceShadowRequest& request, const DescribeDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceShadowRequest&;
    using Resp = DescribeDeviceShadowResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceShadow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeDeviceShadowOutcomeCallable IotcloudClient::DescribeDeviceShadowCallable(const DescribeDeviceShadowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceShadowOutcome>>();
    DescribeDeviceShadowAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeDeviceShadowRequest&,
        DescribeDeviceShadowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeDevicesOutcome IotcloudClient::DescribeDevices(const DescribeDevicesRequest &request)
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

void IotcloudClient::DescribeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotcloudClient::DescribeDevicesOutcomeCallable IotcloudClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicesOutcome>>();
    DescribeDevicesAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeDevicesRequest&,
        DescribeDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeFirmwareOutcome IotcloudClient::DescribeFirmware(const DescribeFirmwareRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirmware");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirmwareResponse rsp = DescribeFirmwareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirmwareOutcome(rsp);
        else
            return DescribeFirmwareOutcome(o.GetError());
    }
    else
    {
        return DescribeFirmwareOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeFirmwareAsync(const DescribeFirmwareRequest& request, const DescribeFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFirmwareRequest&;
    using Resp = DescribeFirmwareResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirmware", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeFirmwareOutcomeCallable IotcloudClient::DescribeFirmwareCallable(const DescribeFirmwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareOutcome>>();
    DescribeFirmwareAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeFirmwareRequest&,
        DescribeFirmwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeFirmwareTaskOutcome IotcloudClient::DescribeFirmwareTask(const DescribeFirmwareTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirmwareTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirmwareTaskResponse rsp = DescribeFirmwareTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirmwareTaskOutcome(rsp);
        else
            return DescribeFirmwareTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeFirmwareTaskOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeFirmwareTaskAsync(const DescribeFirmwareTaskRequest& request, const DescribeFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFirmwareTaskRequest&;
    using Resp = DescribeFirmwareTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirmwareTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeFirmwareTaskOutcomeCallable IotcloudClient::DescribeFirmwareTaskCallable(const DescribeFirmwareTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareTaskOutcome>>();
    DescribeFirmwareTaskAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeFirmwareTaskRequest&,
        DescribeFirmwareTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeFirmwareTaskDevicesOutcome IotcloudClient::DescribeFirmwareTaskDevices(const DescribeFirmwareTaskDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirmwareTaskDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirmwareTaskDevicesResponse rsp = DescribeFirmwareTaskDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirmwareTaskDevicesOutcome(rsp);
        else
            return DescribeFirmwareTaskDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeFirmwareTaskDevicesOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeFirmwareTaskDevicesAsync(const DescribeFirmwareTaskDevicesRequest& request, const DescribeFirmwareTaskDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFirmwareTaskDevicesRequest&;
    using Resp = DescribeFirmwareTaskDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirmwareTaskDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeFirmwareTaskDevicesOutcomeCallable IotcloudClient::DescribeFirmwareTaskDevicesCallable(const DescribeFirmwareTaskDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareTaskDevicesOutcome>>();
    DescribeFirmwareTaskDevicesAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeFirmwareTaskDevicesRequest&,
        DescribeFirmwareTaskDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeFirmwareTaskDistributionOutcome IotcloudClient::DescribeFirmwareTaskDistribution(const DescribeFirmwareTaskDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirmwareTaskDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirmwareTaskDistributionResponse rsp = DescribeFirmwareTaskDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirmwareTaskDistributionOutcome(rsp);
        else
            return DescribeFirmwareTaskDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeFirmwareTaskDistributionOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeFirmwareTaskDistributionAsync(const DescribeFirmwareTaskDistributionRequest& request, const DescribeFirmwareTaskDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFirmwareTaskDistributionRequest&;
    using Resp = DescribeFirmwareTaskDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirmwareTaskDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeFirmwareTaskDistributionOutcomeCallable IotcloudClient::DescribeFirmwareTaskDistributionCallable(const DescribeFirmwareTaskDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareTaskDistributionOutcome>>();
    DescribeFirmwareTaskDistributionAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeFirmwareTaskDistributionRequest&,
        DescribeFirmwareTaskDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeFirmwareTaskStatisticsOutcome IotcloudClient::DescribeFirmwareTaskStatistics(const DescribeFirmwareTaskStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirmwareTaskStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirmwareTaskStatisticsResponse rsp = DescribeFirmwareTaskStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirmwareTaskStatisticsOutcome(rsp);
        else
            return DescribeFirmwareTaskStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeFirmwareTaskStatisticsOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeFirmwareTaskStatisticsAsync(const DescribeFirmwareTaskStatisticsRequest& request, const DescribeFirmwareTaskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFirmwareTaskStatisticsRequest&;
    using Resp = DescribeFirmwareTaskStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirmwareTaskStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeFirmwareTaskStatisticsOutcomeCallable IotcloudClient::DescribeFirmwareTaskStatisticsCallable(const DescribeFirmwareTaskStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareTaskStatisticsOutcome>>();
    DescribeFirmwareTaskStatisticsAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeFirmwareTaskStatisticsRequest&,
        DescribeFirmwareTaskStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeFirmwareTasksOutcome IotcloudClient::DescribeFirmwareTasks(const DescribeFirmwareTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirmwareTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirmwareTasksResponse rsp = DescribeFirmwareTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirmwareTasksOutcome(rsp);
        else
            return DescribeFirmwareTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeFirmwareTasksOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeFirmwareTasksAsync(const DescribeFirmwareTasksRequest& request, const DescribeFirmwareTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFirmwareTasksRequest&;
    using Resp = DescribeFirmwareTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirmwareTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeFirmwareTasksOutcomeCallable IotcloudClient::DescribeFirmwareTasksCallable(const DescribeFirmwareTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareTasksOutcome>>();
    DescribeFirmwareTasksAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeFirmwareTasksRequest&,
        DescribeFirmwareTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeGatewayBindDevicesOutcome IotcloudClient::DescribeGatewayBindDevices(const DescribeGatewayBindDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayBindDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayBindDevicesResponse rsp = DescribeGatewayBindDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayBindDevicesOutcome(rsp);
        else
            return DescribeGatewayBindDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayBindDevicesOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeGatewayBindDevicesAsync(const DescribeGatewayBindDevicesRequest& request, const DescribeGatewayBindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayBindDevicesRequest&;
    using Resp = DescribeGatewayBindDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayBindDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeGatewayBindDevicesOutcomeCallable IotcloudClient::DescribeGatewayBindDevicesCallable(const DescribeGatewayBindDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayBindDevicesOutcome>>();
    DescribeGatewayBindDevicesAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeGatewayBindDevicesRequest&,
        DescribeGatewayBindDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribePrivateCAOutcome IotcloudClient::DescribePrivateCA(const DescribePrivateCARequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateCA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateCAResponse rsp = DescribePrivateCAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateCAOutcome(rsp);
        else
            return DescribePrivateCAOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateCAOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribePrivateCAAsync(const DescribePrivateCARequest& request, const DescribePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivateCARequest&;
    using Resp = DescribePrivateCAResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivateCA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribePrivateCAOutcomeCallable IotcloudClient::DescribePrivateCACallable(const DescribePrivateCARequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivateCAOutcome>>();
    DescribePrivateCAAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribePrivateCARequest&,
        DescribePrivateCAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribePrivateCABindedProductsOutcome IotcloudClient::DescribePrivateCABindedProducts(const DescribePrivateCABindedProductsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateCABindedProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateCABindedProductsResponse rsp = DescribePrivateCABindedProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateCABindedProductsOutcome(rsp);
        else
            return DescribePrivateCABindedProductsOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateCABindedProductsOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribePrivateCABindedProductsAsync(const DescribePrivateCABindedProductsRequest& request, const DescribePrivateCABindedProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivateCABindedProductsRequest&;
    using Resp = DescribePrivateCABindedProductsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivateCABindedProducts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribePrivateCABindedProductsOutcomeCallable IotcloudClient::DescribePrivateCABindedProductsCallable(const DescribePrivateCABindedProductsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivateCABindedProductsOutcome>>();
    DescribePrivateCABindedProductsAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribePrivateCABindedProductsRequest&,
        DescribePrivateCABindedProductsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribePrivateCAsOutcome IotcloudClient::DescribePrivateCAs(const DescribePrivateCAsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateCAs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateCAsResponse rsp = DescribePrivateCAsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateCAsOutcome(rsp);
        else
            return DescribePrivateCAsOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateCAsOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribePrivateCAsAsync(const DescribePrivateCAsRequest& request, const DescribePrivateCAsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivateCAsRequest&;
    using Resp = DescribePrivateCAsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivateCAs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribePrivateCAsOutcomeCallable IotcloudClient::DescribePrivateCAsCallable(const DescribePrivateCAsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivateCAsOutcome>>();
    DescribePrivateCAsAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribePrivateCAsRequest&,
        DescribePrivateCAsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeProductOutcome IotcloudClient::DescribeProduct(const DescribeProductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductResponse rsp = DescribeProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductOutcome(rsp);
        else
            return DescribeProductOutcome(o.GetError());
    }
    else
    {
        return DescribeProductOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductAsync(const DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductRequest&;
    using Resp = DescribeProductResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeProductOutcomeCallable IotcloudClient::DescribeProductCallable(const DescribeProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductOutcome>>();
    DescribeProductAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeProductRequest&,
        DescribeProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeProductCAOutcome IotcloudClient::DescribeProductCA(const DescribeProductCARequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductCA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductCAResponse rsp = DescribeProductCAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductCAOutcome(rsp);
        else
            return DescribeProductCAOutcome(o.GetError());
    }
    else
    {
        return DescribeProductCAOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductCAAsync(const DescribeProductCARequest& request, const DescribeProductCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductCARequest&;
    using Resp = DescribeProductCAResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductCA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeProductCAOutcomeCallable IotcloudClient::DescribeProductCACallable(const DescribeProductCARequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductCAOutcome>>();
    DescribeProductCAAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeProductCARequest&,
        DescribeProductCAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeProductResourceOutcome IotcloudClient::DescribeProductResource(const DescribeProductResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductResourceResponse rsp = DescribeProductResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductResourceOutcome(rsp);
        else
            return DescribeProductResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeProductResourceOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductResourceAsync(const DescribeProductResourceRequest& request, const DescribeProductResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductResourceRequest&;
    using Resp = DescribeProductResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeProductResourceOutcomeCallable IotcloudClient::DescribeProductResourceCallable(const DescribeProductResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductResourceOutcome>>();
    DescribeProductResourceAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeProductResourceRequest&,
        DescribeProductResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeProductResourcesOutcome IotcloudClient::DescribeProductResources(const DescribeProductResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductResourcesResponse rsp = DescribeProductResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductResourcesOutcome(rsp);
        else
            return DescribeProductResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeProductResourcesOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductResourcesAsync(const DescribeProductResourcesRequest& request, const DescribeProductResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductResourcesRequest&;
    using Resp = DescribeProductResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeProductResourcesOutcomeCallable IotcloudClient::DescribeProductResourcesCallable(const DescribeProductResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductResourcesOutcome>>();
    DescribeProductResourcesAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeProductResourcesRequest&,
        DescribeProductResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeProductTaskOutcome IotcloudClient::DescribeProductTask(const DescribeProductTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductTaskResponse rsp = DescribeProductTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductTaskOutcome(rsp);
        else
            return DescribeProductTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeProductTaskOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductTaskAsync(const DescribeProductTaskRequest& request, const DescribeProductTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductTaskRequest&;
    using Resp = DescribeProductTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeProductTaskOutcomeCallable IotcloudClient::DescribeProductTaskCallable(const DescribeProductTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductTaskOutcome>>();
    DescribeProductTaskAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeProductTaskRequest&,
        DescribeProductTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeProductTasksOutcome IotcloudClient::DescribeProductTasks(const DescribeProductTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductTasksResponse rsp = DescribeProductTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductTasksOutcome(rsp);
        else
            return DescribeProductTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeProductTasksOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductTasksAsync(const DescribeProductTasksRequest& request, const DescribeProductTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductTasksRequest&;
    using Resp = DescribeProductTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeProductTasksOutcomeCallable IotcloudClient::DescribeProductTasksCallable(const DescribeProductTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductTasksOutcome>>();
    DescribeProductTasksAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeProductTasksRequest&,
        DescribeProductTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeProductsOutcome IotcloudClient::DescribeProducts(const DescribeProductsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductsResponse rsp = DescribeProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductsOutcome(rsp);
        else
            return DescribeProductsOutcome(o.GetError());
    }
    else
    {
        return DescribeProductsOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductsAsync(const DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductsRequest&;
    using Resp = DescribeProductsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProducts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeProductsOutcomeCallable IotcloudClient::DescribeProductsCallable(const DescribeProductsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductsOutcome>>();
    DescribeProductsAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeProductsRequest&,
        DescribeProductsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribePushResourceTaskStatisticsOutcome IotcloudClient::DescribePushResourceTaskStatistics(const DescribePushResourceTaskStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePushResourceTaskStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePushResourceTaskStatisticsResponse rsp = DescribePushResourceTaskStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePushResourceTaskStatisticsOutcome(rsp);
        else
            return DescribePushResourceTaskStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribePushResourceTaskStatisticsOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribePushResourceTaskStatisticsAsync(const DescribePushResourceTaskStatisticsRequest& request, const DescribePushResourceTaskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePushResourceTaskStatisticsRequest&;
    using Resp = DescribePushResourceTaskStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePushResourceTaskStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribePushResourceTaskStatisticsOutcomeCallable IotcloudClient::DescribePushResourceTaskStatisticsCallable(const DescribePushResourceTaskStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePushResourceTaskStatisticsOutcome>>();
    DescribePushResourceTaskStatisticsAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribePushResourceTaskStatisticsRequest&,
        DescribePushResourceTaskStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DescribeResourceTasksOutcome IotcloudClient::DescribeResourceTasks(const DescribeResourceTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceTasksResponse rsp = DescribeResourceTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceTasksOutcome(rsp);
        else
            return DescribeResourceTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceTasksOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeResourceTasksAsync(const DescribeResourceTasksRequest& request, const DescribeResourceTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceTasksRequest&;
    using Resp = DescribeResourceTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DescribeResourceTasksOutcomeCallable IotcloudClient::DescribeResourceTasksCallable(const DescribeResourceTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceTasksOutcome>>();
    DescribeResourceTasksAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DescribeResourceTasksRequest&,
        DescribeResourceTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DisableTopicRuleOutcome IotcloudClient::DisableTopicRule(const DisableTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DisableTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableTopicRuleResponse rsp = DisableTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableTopicRuleOutcome(rsp);
        else
            return DisableTopicRuleOutcome(o.GetError());
    }
    else
    {
        return DisableTopicRuleOutcome(outcome.GetError());
    }
}

void IotcloudClient::DisableTopicRuleAsync(const DisableTopicRuleRequest& request, const DisableTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableTopicRuleRequest&;
    using Resp = DisableTopicRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DisableTopicRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DisableTopicRuleOutcomeCallable IotcloudClient::DisableTopicRuleCallable(const DisableTopicRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableTopicRuleOutcome>>();
    DisableTopicRuleAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DisableTopicRuleRequest&,
        DisableTopicRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::DownloadDeviceResourceOutcome IotcloudClient::DownloadDeviceResource(const DownloadDeviceResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadDeviceResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadDeviceResourceResponse rsp = DownloadDeviceResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadDeviceResourceOutcome(rsp);
        else
            return DownloadDeviceResourceOutcome(o.GetError());
    }
    else
    {
        return DownloadDeviceResourceOutcome(outcome.GetError());
    }
}

void IotcloudClient::DownloadDeviceResourceAsync(const DownloadDeviceResourceRequest& request, const DownloadDeviceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadDeviceResourceRequest&;
    using Resp = DownloadDeviceResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadDeviceResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::DownloadDeviceResourceOutcomeCallable IotcloudClient::DownloadDeviceResourceCallable(const DownloadDeviceResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadDeviceResourceOutcome>>();
    DownloadDeviceResourceAsync(
    request,
    [prom](
        const IotcloudClient*,
        const DownloadDeviceResourceRequest&,
        DownloadDeviceResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::EditFirmwareOutcome IotcloudClient::EditFirmware(const EditFirmwareRequest &request)
{
    auto outcome = MakeRequest(request, "EditFirmware");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditFirmwareResponse rsp = EditFirmwareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditFirmwareOutcome(rsp);
        else
            return EditFirmwareOutcome(o.GetError());
    }
    else
    {
        return EditFirmwareOutcome(outcome.GetError());
    }
}

void IotcloudClient::EditFirmwareAsync(const EditFirmwareRequest& request, const EditFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EditFirmwareRequest&;
    using Resp = EditFirmwareResponse;

    DoRequestAsync<Req, Resp>(
        "EditFirmware", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::EditFirmwareOutcomeCallable IotcloudClient::EditFirmwareCallable(const EditFirmwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<EditFirmwareOutcome>>();
    EditFirmwareAsync(
    request,
    [prom](
        const IotcloudClient*,
        const EditFirmwareRequest&,
        EditFirmwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::EnableTopicRuleOutcome IotcloudClient::EnableTopicRule(const EnableTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "EnableTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableTopicRuleResponse rsp = EnableTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableTopicRuleOutcome(rsp);
        else
            return EnableTopicRuleOutcome(o.GetError());
    }
    else
    {
        return EnableTopicRuleOutcome(outcome.GetError());
    }
}

void IotcloudClient::EnableTopicRuleAsync(const EnableTopicRuleRequest& request, const EnableTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableTopicRuleRequest&;
    using Resp = EnableTopicRuleResponse;

    DoRequestAsync<Req, Resp>(
        "EnableTopicRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::EnableTopicRuleOutcomeCallable IotcloudClient::EnableTopicRuleCallable(const EnableTopicRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableTopicRuleOutcome>>();
    EnableTopicRuleAsync(
    request,
    [prom](
        const IotcloudClient*,
        const EnableTopicRuleRequest&,
        EnableTopicRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::GetAllVersionOutcome IotcloudClient::GetAllVersion(const GetAllVersionRequest &request)
{
    auto outcome = MakeRequest(request, "GetAllVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAllVersionResponse rsp = GetAllVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAllVersionOutcome(rsp);
        else
            return GetAllVersionOutcome(o.GetError());
    }
    else
    {
        return GetAllVersionOutcome(outcome.GetError());
    }
}

void IotcloudClient::GetAllVersionAsync(const GetAllVersionRequest& request, const GetAllVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAllVersionRequest&;
    using Resp = GetAllVersionResponse;

    DoRequestAsync<Req, Resp>(
        "GetAllVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::GetAllVersionOutcomeCallable IotcloudClient::GetAllVersionCallable(const GetAllVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAllVersionOutcome>>();
    GetAllVersionAsync(
    request,
    [prom](
        const IotcloudClient*,
        const GetAllVersionRequest&,
        GetAllVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::GetCOSURLOutcome IotcloudClient::GetCOSURL(const GetCOSURLRequest &request)
{
    auto outcome = MakeRequest(request, "GetCOSURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCOSURLResponse rsp = GetCOSURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCOSURLOutcome(rsp);
        else
            return GetCOSURLOutcome(o.GetError());
    }
    else
    {
        return GetCOSURLOutcome(outcome.GetError());
    }
}

void IotcloudClient::GetCOSURLAsync(const GetCOSURLRequest& request, const GetCOSURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCOSURLRequest&;
    using Resp = GetCOSURLResponse;

    DoRequestAsync<Req, Resp>(
        "GetCOSURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::GetCOSURLOutcomeCallable IotcloudClient::GetCOSURLCallable(const GetCOSURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCOSURLOutcome>>();
    GetCOSURLAsync(
    request,
    [prom](
        const IotcloudClient*,
        const GetCOSURLRequest&,
        GetCOSURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::GetUserResourceInfoOutcome IotcloudClient::GetUserResourceInfo(const GetUserResourceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetUserResourceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUserResourceInfoResponse rsp = GetUserResourceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUserResourceInfoOutcome(rsp);
        else
            return GetUserResourceInfoOutcome(o.GetError());
    }
    else
    {
        return GetUserResourceInfoOutcome(outcome.GetError());
    }
}

void IotcloudClient::GetUserResourceInfoAsync(const GetUserResourceInfoRequest& request, const GetUserResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetUserResourceInfoRequest&;
    using Resp = GetUserResourceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetUserResourceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::GetUserResourceInfoOutcomeCallable IotcloudClient::GetUserResourceInfoCallable(const GetUserResourceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetUserResourceInfoOutcome>>();
    GetUserResourceInfoAsync(
    request,
    [prom](
        const IotcloudClient*,
        const GetUserResourceInfoRequest&,
        GetUserResourceInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::ListFirmwaresOutcome IotcloudClient::ListFirmwares(const ListFirmwaresRequest &request)
{
    auto outcome = MakeRequest(request, "ListFirmwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListFirmwaresResponse rsp = ListFirmwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListFirmwaresOutcome(rsp);
        else
            return ListFirmwaresOutcome(o.GetError());
    }
    else
    {
        return ListFirmwaresOutcome(outcome.GetError());
    }
}

void IotcloudClient::ListFirmwaresAsync(const ListFirmwaresRequest& request, const ListFirmwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListFirmwaresRequest&;
    using Resp = ListFirmwaresResponse;

    DoRequestAsync<Req, Resp>(
        "ListFirmwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::ListFirmwaresOutcomeCallable IotcloudClient::ListFirmwaresCallable(const ListFirmwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListFirmwaresOutcome>>();
    ListFirmwaresAsync(
    request,
    [prom](
        const IotcloudClient*,
        const ListFirmwaresRequest&,
        ListFirmwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::ListLogOutcome IotcloudClient::ListLog(const ListLogRequest &request)
{
    auto outcome = MakeRequest(request, "ListLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListLogResponse rsp = ListLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListLogOutcome(rsp);
        else
            return ListLogOutcome(o.GetError());
    }
    else
    {
        return ListLogOutcome(outcome.GetError());
    }
}

void IotcloudClient::ListLogAsync(const ListLogRequest& request, const ListLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListLogRequest&;
    using Resp = ListLogResponse;

    DoRequestAsync<Req, Resp>(
        "ListLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::ListLogOutcomeCallable IotcloudClient::ListLogCallable(const ListLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListLogOutcome>>();
    ListLogAsync(
    request,
    [prom](
        const IotcloudClient*,
        const ListLogRequest&,
        ListLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::ListLogPayloadOutcome IotcloudClient::ListLogPayload(const ListLogPayloadRequest &request)
{
    auto outcome = MakeRequest(request, "ListLogPayload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListLogPayloadResponse rsp = ListLogPayloadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListLogPayloadOutcome(rsp);
        else
            return ListLogPayloadOutcome(o.GetError());
    }
    else
    {
        return ListLogPayloadOutcome(outcome.GetError());
    }
}

void IotcloudClient::ListLogPayloadAsync(const ListLogPayloadRequest& request, const ListLogPayloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListLogPayloadRequest&;
    using Resp = ListLogPayloadResponse;

    DoRequestAsync<Req, Resp>(
        "ListLogPayload", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::ListLogPayloadOutcomeCallable IotcloudClient::ListLogPayloadCallable(const ListLogPayloadRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListLogPayloadOutcome>>();
    ListLogPayloadAsync(
    request,
    [prom](
        const IotcloudClient*,
        const ListLogPayloadRequest&,
        ListLogPayloadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::ListSDKLogOutcome IotcloudClient::ListSDKLog(const ListSDKLogRequest &request)
{
    auto outcome = MakeRequest(request, "ListSDKLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSDKLogResponse rsp = ListSDKLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSDKLogOutcome(rsp);
        else
            return ListSDKLogOutcome(o.GetError());
    }
    else
    {
        return ListSDKLogOutcome(outcome.GetError());
    }
}

void IotcloudClient::ListSDKLogAsync(const ListSDKLogRequest& request, const ListSDKLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListSDKLogRequest&;
    using Resp = ListSDKLogResponse;

    DoRequestAsync<Req, Resp>(
        "ListSDKLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::ListSDKLogOutcomeCallable IotcloudClient::ListSDKLogCallable(const ListSDKLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListSDKLogOutcome>>();
    ListSDKLogAsync(
    request,
    [prom](
        const IotcloudClient*,
        const ListSDKLogRequest&,
        ListSDKLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::ListTopicRulesOutcome IotcloudClient::ListTopicRules(const ListTopicRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ListTopicRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTopicRulesResponse rsp = ListTopicRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTopicRulesOutcome(rsp);
        else
            return ListTopicRulesOutcome(o.GetError());
    }
    else
    {
        return ListTopicRulesOutcome(outcome.GetError());
    }
}

void IotcloudClient::ListTopicRulesAsync(const ListTopicRulesRequest& request, const ListTopicRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTopicRulesRequest&;
    using Resp = ListTopicRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ListTopicRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::ListTopicRulesOutcomeCallable IotcloudClient::ListTopicRulesCallable(const ListTopicRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTopicRulesOutcome>>();
    ListTopicRulesAsync(
    request,
    [prom](
        const IotcloudClient*,
        const ListTopicRulesRequest&,
        ListTopicRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::PublishBroadcastMessageOutcome IotcloudClient::PublishBroadcastMessage(const PublishBroadcastMessageRequest &request)
{
    auto outcome = MakeRequest(request, "PublishBroadcastMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishBroadcastMessageResponse rsp = PublishBroadcastMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishBroadcastMessageOutcome(rsp);
        else
            return PublishBroadcastMessageOutcome(o.GetError());
    }
    else
    {
        return PublishBroadcastMessageOutcome(outcome.GetError());
    }
}

void IotcloudClient::PublishBroadcastMessageAsync(const PublishBroadcastMessageRequest& request, const PublishBroadcastMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PublishBroadcastMessageRequest&;
    using Resp = PublishBroadcastMessageResponse;

    DoRequestAsync<Req, Resp>(
        "PublishBroadcastMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::PublishBroadcastMessageOutcomeCallable IotcloudClient::PublishBroadcastMessageCallable(const PublishBroadcastMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<PublishBroadcastMessageOutcome>>();
    PublishBroadcastMessageAsync(
    request,
    [prom](
        const IotcloudClient*,
        const PublishBroadcastMessageRequest&,
        PublishBroadcastMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::PublishMessageOutcome IotcloudClient::PublishMessage(const PublishMessageRequest &request)
{
    auto outcome = MakeRequest(request, "PublishMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishMessageResponse rsp = PublishMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishMessageOutcome(rsp);
        else
            return PublishMessageOutcome(o.GetError());
    }
    else
    {
        return PublishMessageOutcome(outcome.GetError());
    }
}

void IotcloudClient::PublishMessageAsync(const PublishMessageRequest& request, const PublishMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PublishMessageRequest&;
    using Resp = PublishMessageResponse;

    DoRequestAsync<Req, Resp>(
        "PublishMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::PublishMessageOutcomeCallable IotcloudClient::PublishMessageCallable(const PublishMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<PublishMessageOutcome>>();
    PublishMessageAsync(
    request,
    [prom](
        const IotcloudClient*,
        const PublishMessageRequest&,
        PublishMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::PublishRRPCMessageOutcome IotcloudClient::PublishRRPCMessage(const PublishRRPCMessageRequest &request)
{
    auto outcome = MakeRequest(request, "PublishRRPCMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishRRPCMessageResponse rsp = PublishRRPCMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishRRPCMessageOutcome(rsp);
        else
            return PublishRRPCMessageOutcome(o.GetError());
    }
    else
    {
        return PublishRRPCMessageOutcome(outcome.GetError());
    }
}

void IotcloudClient::PublishRRPCMessageAsync(const PublishRRPCMessageRequest& request, const PublishRRPCMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PublishRRPCMessageRequest&;
    using Resp = PublishRRPCMessageResponse;

    DoRequestAsync<Req, Resp>(
        "PublishRRPCMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::PublishRRPCMessageOutcomeCallable IotcloudClient::PublishRRPCMessageCallable(const PublishRRPCMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<PublishRRPCMessageOutcome>>();
    PublishRRPCMessageAsync(
    request,
    [prom](
        const IotcloudClient*,
        const PublishRRPCMessageRequest&,
        PublishRRPCMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::ReplaceTopicRuleOutcome IotcloudClient::ReplaceTopicRule(const ReplaceTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceTopicRuleResponse rsp = ReplaceTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceTopicRuleOutcome(rsp);
        else
            return ReplaceTopicRuleOutcome(o.GetError());
    }
    else
    {
        return ReplaceTopicRuleOutcome(outcome.GetError());
    }
}

void IotcloudClient::ReplaceTopicRuleAsync(const ReplaceTopicRuleRequest& request, const ReplaceTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceTopicRuleRequest&;
    using Resp = ReplaceTopicRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceTopicRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::ReplaceTopicRuleOutcomeCallable IotcloudClient::ReplaceTopicRuleCallable(const ReplaceTopicRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceTopicRuleOutcome>>();
    ReplaceTopicRuleAsync(
    request,
    [prom](
        const IotcloudClient*,
        const ReplaceTopicRuleRequest&,
        ReplaceTopicRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::ResetDeviceStateOutcome IotcloudClient::ResetDeviceState(const ResetDeviceStateRequest &request)
{
    auto outcome = MakeRequest(request, "ResetDeviceState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetDeviceStateResponse rsp = ResetDeviceStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetDeviceStateOutcome(rsp);
        else
            return ResetDeviceStateOutcome(o.GetError());
    }
    else
    {
        return ResetDeviceStateOutcome(outcome.GetError());
    }
}

void IotcloudClient::ResetDeviceStateAsync(const ResetDeviceStateRequest& request, const ResetDeviceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetDeviceStateRequest&;
    using Resp = ResetDeviceStateResponse;

    DoRequestAsync<Req, Resp>(
        "ResetDeviceState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::ResetDeviceStateOutcomeCallable IotcloudClient::ResetDeviceStateCallable(const ResetDeviceStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetDeviceStateOutcome>>();
    ResetDeviceStateAsync(
    request,
    [prom](
        const IotcloudClient*,
        const ResetDeviceStateRequest&,
        ResetDeviceStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::RetryDeviceFirmwareTaskOutcome IotcloudClient::RetryDeviceFirmwareTask(const RetryDeviceFirmwareTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RetryDeviceFirmwareTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryDeviceFirmwareTaskResponse rsp = RetryDeviceFirmwareTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryDeviceFirmwareTaskOutcome(rsp);
        else
            return RetryDeviceFirmwareTaskOutcome(o.GetError());
    }
    else
    {
        return RetryDeviceFirmwareTaskOutcome(outcome.GetError());
    }
}

void IotcloudClient::RetryDeviceFirmwareTaskAsync(const RetryDeviceFirmwareTaskRequest& request, const RetryDeviceFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RetryDeviceFirmwareTaskRequest&;
    using Resp = RetryDeviceFirmwareTaskResponse;

    DoRequestAsync<Req, Resp>(
        "RetryDeviceFirmwareTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::RetryDeviceFirmwareTaskOutcomeCallable IotcloudClient::RetryDeviceFirmwareTaskCallable(const RetryDeviceFirmwareTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<RetryDeviceFirmwareTaskOutcome>>();
    RetryDeviceFirmwareTaskAsync(
    request,
    [prom](
        const IotcloudClient*,
        const RetryDeviceFirmwareTaskRequest&,
        RetryDeviceFirmwareTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::SetProductsForbiddenStatusOutcome IotcloudClient::SetProductsForbiddenStatus(const SetProductsForbiddenStatusRequest &request)
{
    auto outcome = MakeRequest(request, "SetProductsForbiddenStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetProductsForbiddenStatusResponse rsp = SetProductsForbiddenStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetProductsForbiddenStatusOutcome(rsp);
        else
            return SetProductsForbiddenStatusOutcome(o.GetError());
    }
    else
    {
        return SetProductsForbiddenStatusOutcome(outcome.GetError());
    }
}

void IotcloudClient::SetProductsForbiddenStatusAsync(const SetProductsForbiddenStatusRequest& request, const SetProductsForbiddenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetProductsForbiddenStatusRequest&;
    using Resp = SetProductsForbiddenStatusResponse;

    DoRequestAsync<Req, Resp>(
        "SetProductsForbiddenStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::SetProductsForbiddenStatusOutcomeCallable IotcloudClient::SetProductsForbiddenStatusCallable(const SetProductsForbiddenStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetProductsForbiddenStatusOutcome>>();
    SetProductsForbiddenStatusAsync(
    request,
    [prom](
        const IotcloudClient*,
        const SetProductsForbiddenStatusRequest&,
        SetProductsForbiddenStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::UnbindDevicesOutcome IotcloudClient::UnbindDevices(const UnbindDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindDevicesResponse rsp = UnbindDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindDevicesOutcome(rsp);
        else
            return UnbindDevicesOutcome(o.GetError());
    }
    else
    {
        return UnbindDevicesOutcome(outcome.GetError());
    }
}

void IotcloudClient::UnbindDevicesAsync(const UnbindDevicesRequest& request, const UnbindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindDevicesRequest&;
    using Resp = UnbindDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::UnbindDevicesOutcomeCallable IotcloudClient::UnbindDevicesCallable(const UnbindDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindDevicesOutcome>>();
    UnbindDevicesAsync(
    request,
    [prom](
        const IotcloudClient*,
        const UnbindDevicesRequest&,
        UnbindDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::UpdateDeviceAvailableStateOutcome IotcloudClient::UpdateDeviceAvailableState(const UpdateDeviceAvailableStateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDeviceAvailableState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDeviceAvailableStateResponse rsp = UpdateDeviceAvailableStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDeviceAvailableStateOutcome(rsp);
        else
            return UpdateDeviceAvailableStateOutcome(o.GetError());
    }
    else
    {
        return UpdateDeviceAvailableStateOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateDeviceAvailableStateAsync(const UpdateDeviceAvailableStateRequest& request, const UpdateDeviceAvailableStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDeviceAvailableStateRequest&;
    using Resp = UpdateDeviceAvailableStateResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDeviceAvailableState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::UpdateDeviceAvailableStateOutcomeCallable IotcloudClient::UpdateDeviceAvailableStateCallable(const UpdateDeviceAvailableStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDeviceAvailableStateOutcome>>();
    UpdateDeviceAvailableStateAsync(
    request,
    [prom](
        const IotcloudClient*,
        const UpdateDeviceAvailableStateRequest&,
        UpdateDeviceAvailableStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::UpdateDeviceLogLevelOutcome IotcloudClient::UpdateDeviceLogLevel(const UpdateDeviceLogLevelRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDeviceLogLevel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDeviceLogLevelResponse rsp = UpdateDeviceLogLevelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDeviceLogLevelOutcome(rsp);
        else
            return UpdateDeviceLogLevelOutcome(o.GetError());
    }
    else
    {
        return UpdateDeviceLogLevelOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateDeviceLogLevelAsync(const UpdateDeviceLogLevelRequest& request, const UpdateDeviceLogLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDeviceLogLevelRequest&;
    using Resp = UpdateDeviceLogLevelResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDeviceLogLevel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::UpdateDeviceLogLevelOutcomeCallable IotcloudClient::UpdateDeviceLogLevelCallable(const UpdateDeviceLogLevelRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDeviceLogLevelOutcome>>();
    UpdateDeviceLogLevelAsync(
    request,
    [prom](
        const IotcloudClient*,
        const UpdateDeviceLogLevelRequest&,
        UpdateDeviceLogLevelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::UpdateDevicePSKOutcome IotcloudClient::UpdateDevicePSK(const UpdateDevicePSKRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDevicePSK");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDevicePSKResponse rsp = UpdateDevicePSKResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDevicePSKOutcome(rsp);
        else
            return UpdateDevicePSKOutcome(o.GetError());
    }
    else
    {
        return UpdateDevicePSKOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateDevicePSKAsync(const UpdateDevicePSKRequest& request, const UpdateDevicePSKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDevicePSKRequest&;
    using Resp = UpdateDevicePSKResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDevicePSK", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::UpdateDevicePSKOutcomeCallable IotcloudClient::UpdateDevicePSKCallable(const UpdateDevicePSKRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDevicePSKOutcome>>();
    UpdateDevicePSKAsync(
    request,
    [prom](
        const IotcloudClient*,
        const UpdateDevicePSKRequest&,
        UpdateDevicePSKOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::UpdateDeviceShadowOutcome IotcloudClient::UpdateDeviceShadow(const UpdateDeviceShadowRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDeviceShadow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDeviceShadowResponse rsp = UpdateDeviceShadowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDeviceShadowOutcome(rsp);
        else
            return UpdateDeviceShadowOutcome(o.GetError());
    }
    else
    {
        return UpdateDeviceShadowOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateDeviceShadowAsync(const UpdateDeviceShadowRequest& request, const UpdateDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDeviceShadowRequest&;
    using Resp = UpdateDeviceShadowResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDeviceShadow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::UpdateDeviceShadowOutcomeCallable IotcloudClient::UpdateDeviceShadowCallable(const UpdateDeviceShadowRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDeviceShadowOutcome>>();
    UpdateDeviceShadowAsync(
    request,
    [prom](
        const IotcloudClient*,
        const UpdateDeviceShadowRequest&,
        UpdateDeviceShadowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::UpdateDevicesEnableStateOutcome IotcloudClient::UpdateDevicesEnableState(const UpdateDevicesEnableStateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDevicesEnableState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDevicesEnableStateResponse rsp = UpdateDevicesEnableStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDevicesEnableStateOutcome(rsp);
        else
            return UpdateDevicesEnableStateOutcome(o.GetError());
    }
    else
    {
        return UpdateDevicesEnableStateOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateDevicesEnableStateAsync(const UpdateDevicesEnableStateRequest& request, const UpdateDevicesEnableStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDevicesEnableStateRequest&;
    using Resp = UpdateDevicesEnableStateResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDevicesEnableState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::UpdateDevicesEnableStateOutcomeCallable IotcloudClient::UpdateDevicesEnableStateCallable(const UpdateDevicesEnableStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDevicesEnableStateOutcome>>();
    UpdateDevicesEnableStateAsync(
    request,
    [prom](
        const IotcloudClient*,
        const UpdateDevicesEnableStateRequest&,
        UpdateDevicesEnableStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::UpdateOtaTaskStatusOutcome IotcloudClient::UpdateOtaTaskStatus(const UpdateOtaTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOtaTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOtaTaskStatusResponse rsp = UpdateOtaTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOtaTaskStatusOutcome(rsp);
        else
            return UpdateOtaTaskStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateOtaTaskStatusOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateOtaTaskStatusAsync(const UpdateOtaTaskStatusRequest& request, const UpdateOtaTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateOtaTaskStatusRequest&;
    using Resp = UpdateOtaTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateOtaTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::UpdateOtaTaskStatusOutcomeCallable IotcloudClient::UpdateOtaTaskStatusCallable(const UpdateOtaTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateOtaTaskStatusOutcome>>();
    UpdateOtaTaskStatusAsync(
    request,
    [prom](
        const IotcloudClient*,
        const UpdateOtaTaskStatusRequest&,
        UpdateOtaTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::UpdatePrivateCAOutcome IotcloudClient::UpdatePrivateCA(const UpdatePrivateCARequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePrivateCA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePrivateCAResponse rsp = UpdatePrivateCAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePrivateCAOutcome(rsp);
        else
            return UpdatePrivateCAOutcome(o.GetError());
    }
    else
    {
        return UpdatePrivateCAOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdatePrivateCAAsync(const UpdatePrivateCARequest& request, const UpdatePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdatePrivateCARequest&;
    using Resp = UpdatePrivateCAResponse;

    DoRequestAsync<Req, Resp>(
        "UpdatePrivateCA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::UpdatePrivateCAOutcomeCallable IotcloudClient::UpdatePrivateCACallable(const UpdatePrivateCARequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdatePrivateCAOutcome>>();
    UpdatePrivateCAAsync(
    request,
    [prom](
        const IotcloudClient*,
        const UpdatePrivateCARequest&,
        UpdatePrivateCAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::UpdateProductDynamicRegisterOutcome IotcloudClient::UpdateProductDynamicRegister(const UpdateProductDynamicRegisterRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProductDynamicRegister");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProductDynamicRegisterResponse rsp = UpdateProductDynamicRegisterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProductDynamicRegisterOutcome(rsp);
        else
            return UpdateProductDynamicRegisterOutcome(o.GetError());
    }
    else
    {
        return UpdateProductDynamicRegisterOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateProductDynamicRegisterAsync(const UpdateProductDynamicRegisterRequest& request, const UpdateProductDynamicRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateProductDynamicRegisterRequest&;
    using Resp = UpdateProductDynamicRegisterResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateProductDynamicRegister", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::UpdateProductDynamicRegisterOutcomeCallable IotcloudClient::UpdateProductDynamicRegisterCallable(const UpdateProductDynamicRegisterRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateProductDynamicRegisterOutcome>>();
    UpdateProductDynamicRegisterAsync(
    request,
    [prom](
        const IotcloudClient*,
        const UpdateProductDynamicRegisterRequest&,
        UpdateProductDynamicRegisterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::UpdateProductPrivateCAOutcome IotcloudClient::UpdateProductPrivateCA(const UpdateProductPrivateCARequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProductPrivateCA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProductPrivateCAResponse rsp = UpdateProductPrivateCAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProductPrivateCAOutcome(rsp);
        else
            return UpdateProductPrivateCAOutcome(o.GetError());
    }
    else
    {
        return UpdateProductPrivateCAOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateProductPrivateCAAsync(const UpdateProductPrivateCARequest& request, const UpdateProductPrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateProductPrivateCARequest&;
    using Resp = UpdateProductPrivateCAResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateProductPrivateCA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::UpdateProductPrivateCAOutcomeCallable IotcloudClient::UpdateProductPrivateCACallable(const UpdateProductPrivateCARequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateProductPrivateCAOutcome>>();
    UpdateProductPrivateCAAsync(
    request,
    [prom](
        const IotcloudClient*,
        const UpdateProductPrivateCARequest&,
        UpdateProductPrivateCAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::UpdateTopicPolicyOutcome IotcloudClient::UpdateTopicPolicy(const UpdateTopicPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTopicPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTopicPolicyResponse rsp = UpdateTopicPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTopicPolicyOutcome(rsp);
        else
            return UpdateTopicPolicyOutcome(o.GetError());
    }
    else
    {
        return UpdateTopicPolicyOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateTopicPolicyAsync(const UpdateTopicPolicyRequest& request, const UpdateTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTopicPolicyRequest&;
    using Resp = UpdateTopicPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTopicPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::UpdateTopicPolicyOutcomeCallable IotcloudClient::UpdateTopicPolicyCallable(const UpdateTopicPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTopicPolicyOutcome>>();
    UpdateTopicPolicyAsync(
    request,
    [prom](
        const IotcloudClient*,
        const UpdateTopicPolicyRequest&,
        UpdateTopicPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotcloudClient::UploadFirmwareOutcome IotcloudClient::UploadFirmware(const UploadFirmwareRequest &request)
{
    auto outcome = MakeRequest(request, "UploadFirmware");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadFirmwareResponse rsp = UploadFirmwareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadFirmwareOutcome(rsp);
        else
            return UploadFirmwareOutcome(o.GetError());
    }
    else
    {
        return UploadFirmwareOutcome(outcome.GetError());
    }
}

void IotcloudClient::UploadFirmwareAsync(const UploadFirmwareRequest& request, const UploadFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadFirmwareRequest&;
    using Resp = UploadFirmwareResponse;

    DoRequestAsync<Req, Resp>(
        "UploadFirmware", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotcloudClient::UploadFirmwareOutcomeCallable IotcloudClient::UploadFirmwareCallable(const UploadFirmwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadFirmwareOutcome>>();
    UploadFirmwareAsync(
    request,
    [prom](
        const IotcloudClient*,
        const UploadFirmwareRequest&,
        UploadFirmwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

