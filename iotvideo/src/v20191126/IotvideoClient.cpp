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

#include <tencentcloud/iotvideo/v20191126/IotvideoClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iotvideo::V20191126;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-11-26";
    const string ENDPOINT = "iotvideo.tencentcloudapi.com";
}

IotvideoClient::IotvideoClient(const Credential &credential, const string &region) :
    IotvideoClient(credential, region, ClientProfile())
{
}

IotvideoClient::IotvideoClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IotvideoClient::ClearDeviceActiveCodeOutcome IotvideoClient::ClearDeviceActiveCode(const ClearDeviceActiveCodeRequest &request)
{
    auto outcome = MakeRequest(request, "ClearDeviceActiveCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearDeviceActiveCodeResponse rsp = ClearDeviceActiveCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearDeviceActiveCodeOutcome(rsp);
        else
            return ClearDeviceActiveCodeOutcome(o.GetError());
    }
    else
    {
        return ClearDeviceActiveCodeOutcome(outcome.GetError());
    }
}

void IotvideoClient::ClearDeviceActiveCodeAsync(const ClearDeviceActiveCodeRequest& request, const ClearDeviceActiveCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ClearDeviceActiveCodeRequest&;
    using Resp = ClearDeviceActiveCodeResponse;

    DoRequestAsync<Req, Resp>(
        "ClearDeviceActiveCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ClearDeviceActiveCodeOutcomeCallable IotvideoClient::ClearDeviceActiveCodeCallable(const ClearDeviceActiveCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ClearDeviceActiveCodeOutcome>>();
    ClearDeviceActiveCodeAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ClearDeviceActiveCodeRequest&,
        ClearDeviceActiveCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateAnonymousAccessTokenOutcome IotvideoClient::CreateAnonymousAccessToken(const CreateAnonymousAccessTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAnonymousAccessToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAnonymousAccessTokenResponse rsp = CreateAnonymousAccessTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAnonymousAccessTokenOutcome(rsp);
        else
            return CreateAnonymousAccessTokenOutcome(o.GetError());
    }
    else
    {
        return CreateAnonymousAccessTokenOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateAnonymousAccessTokenAsync(const CreateAnonymousAccessTokenRequest& request, const CreateAnonymousAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAnonymousAccessTokenRequest&;
    using Resp = CreateAnonymousAccessTokenResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAnonymousAccessToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateAnonymousAccessTokenOutcomeCallable IotvideoClient::CreateAnonymousAccessTokenCallable(const CreateAnonymousAccessTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAnonymousAccessTokenOutcome>>();
    CreateAnonymousAccessTokenAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateAnonymousAccessTokenRequest&,
        CreateAnonymousAccessTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateAppUsrOutcome IotvideoClient::CreateAppUsr(const CreateAppUsrRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAppUsr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppUsrResponse rsp = CreateAppUsrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppUsrOutcome(rsp);
        else
            return CreateAppUsrOutcome(o.GetError());
    }
    else
    {
        return CreateAppUsrOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateAppUsrAsync(const CreateAppUsrRequest& request, const CreateAppUsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAppUsrRequest&;
    using Resp = CreateAppUsrResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAppUsr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateAppUsrOutcomeCallable IotvideoClient::CreateAppUsrCallable(const CreateAppUsrRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAppUsrOutcome>>();
    CreateAppUsrAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateAppUsrRequest&,
        CreateAppUsrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateBindingOutcome IotvideoClient::CreateBinding(const CreateBindingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBinding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBindingResponse rsp = CreateBindingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBindingOutcome(rsp);
        else
            return CreateBindingOutcome(o.GetError());
    }
    else
    {
        return CreateBindingOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateBindingAsync(const CreateBindingRequest& request, const CreateBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBindingRequest&;
    using Resp = CreateBindingResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBinding", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateBindingOutcomeCallable IotvideoClient::CreateBindingCallable(const CreateBindingRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBindingOutcome>>();
    CreateBindingAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateBindingRequest&,
        CreateBindingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateDevTokenOutcome IotvideoClient::CreateDevToken(const CreateDevTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDevToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDevTokenResponse rsp = CreateDevTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDevTokenOutcome(rsp);
        else
            return CreateDevTokenOutcome(o.GetError());
    }
    else
    {
        return CreateDevTokenOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateDevTokenAsync(const CreateDevTokenRequest& request, const CreateDevTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDevTokenRequest&;
    using Resp = CreateDevTokenResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDevToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateDevTokenOutcomeCallable IotvideoClient::CreateDevTokenCallable(const CreateDevTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDevTokenOutcome>>();
    CreateDevTokenAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateDevTokenRequest&,
        CreateDevTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateDevicesOutcome IotvideoClient::CreateDevices(const CreateDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDevicesResponse rsp = CreateDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDevicesOutcome(rsp);
        else
            return CreateDevicesOutcome(o.GetError());
    }
    else
    {
        return CreateDevicesOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateDevicesAsync(const CreateDevicesRequest& request, const CreateDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDevicesRequest&;
    using Resp = CreateDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateDevicesOutcomeCallable IotvideoClient::CreateDevicesCallable(const CreateDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDevicesOutcome>>();
    CreateDevicesAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateDevicesRequest&,
        CreateDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateGencodeOutcome IotvideoClient::CreateGencode(const CreateGencodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGencode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGencodeResponse rsp = CreateGencodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGencodeOutcome(rsp);
        else
            return CreateGencodeOutcome(o.GetError());
    }
    else
    {
        return CreateGencodeOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateGencodeAsync(const CreateGencodeRequest& request, const CreateGencodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGencodeRequest&;
    using Resp = CreateGencodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGencode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateGencodeOutcomeCallable IotvideoClient::CreateGencodeCallable(const CreateGencodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGencodeOutcome>>();
    CreateGencodeAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateGencodeRequest&,
        CreateGencodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateIotDataTypeOutcome IotvideoClient::CreateIotDataType(const CreateIotDataTypeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIotDataType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIotDataTypeResponse rsp = CreateIotDataTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIotDataTypeOutcome(rsp);
        else
            return CreateIotDataTypeOutcome(o.GetError());
    }
    else
    {
        return CreateIotDataTypeOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateIotDataTypeAsync(const CreateIotDataTypeRequest& request, const CreateIotDataTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIotDataTypeRequest&;
    using Resp = CreateIotDataTypeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIotDataType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateIotDataTypeOutcomeCallable IotvideoClient::CreateIotDataTypeCallable(const CreateIotDataTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIotDataTypeOutcome>>();
    CreateIotDataTypeAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateIotDataTypeRequest&,
        CreateIotDataTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateIotModelOutcome IotvideoClient::CreateIotModel(const CreateIotModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIotModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIotModelResponse rsp = CreateIotModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIotModelOutcome(rsp);
        else
            return CreateIotModelOutcome(o.GetError());
    }
    else
    {
        return CreateIotModelOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateIotModelAsync(const CreateIotModelRequest& request, const CreateIotModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIotModelRequest&;
    using Resp = CreateIotModelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIotModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateIotModelOutcomeCallable IotvideoClient::CreateIotModelCallable(const CreateIotModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIotModelOutcome>>();
    CreateIotModelAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateIotModelRequest&,
        CreateIotModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateProductOutcome IotvideoClient::CreateProduct(const CreateProductRequest &request)
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

void IotvideoClient::CreateProductAsync(const CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotvideoClient::CreateProductOutcomeCallable IotvideoClient::CreateProductCallable(const CreateProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProductOutcome>>();
    CreateProductAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateProductRequest&,
        CreateProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateStorageOutcome IotvideoClient::CreateStorage(const CreateStorageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStorageResponse rsp = CreateStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStorageOutcome(rsp);
        else
            return CreateStorageOutcome(o.GetError());
    }
    else
    {
        return CreateStorageOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateStorageAsync(const CreateStorageRequest& request, const CreateStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStorageRequest&;
    using Resp = CreateStorageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStorage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateStorageOutcomeCallable IotvideoClient::CreateStorageCallable(const CreateStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStorageOutcome>>();
    CreateStorageAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateStorageRequest&,
        CreateStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateStorageServiceOutcome IotvideoClient::CreateStorageService(const CreateStorageServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStorageService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStorageServiceResponse rsp = CreateStorageServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStorageServiceOutcome(rsp);
        else
            return CreateStorageServiceOutcome(o.GetError());
    }
    else
    {
        return CreateStorageServiceOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateStorageServiceAsync(const CreateStorageServiceRequest& request, const CreateStorageServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStorageServiceRequest&;
    using Resp = CreateStorageServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStorageService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateStorageServiceOutcomeCallable IotvideoClient::CreateStorageServiceCallable(const CreateStorageServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStorageServiceOutcome>>();
    CreateStorageServiceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateStorageServiceRequest&,
        CreateStorageServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateTraceIdsOutcome IotvideoClient::CreateTraceIds(const CreateTraceIdsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTraceIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTraceIdsResponse rsp = CreateTraceIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTraceIdsOutcome(rsp);
        else
            return CreateTraceIdsOutcome(o.GetError());
    }
    else
    {
        return CreateTraceIdsOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateTraceIdsAsync(const CreateTraceIdsRequest& request, const CreateTraceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTraceIdsRequest&;
    using Resp = CreateTraceIdsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTraceIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateTraceIdsOutcomeCallable IotvideoClient::CreateTraceIdsCallable(const CreateTraceIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTraceIdsOutcome>>();
    CreateTraceIdsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateTraceIdsRequest&,
        CreateTraceIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateUploadPathOutcome IotvideoClient::CreateUploadPath(const CreateUploadPathRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUploadPath");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUploadPathResponse rsp = CreateUploadPathResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUploadPathOutcome(rsp);
        else
            return CreateUploadPathOutcome(o.GetError());
    }
    else
    {
        return CreateUploadPathOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateUploadPathAsync(const CreateUploadPathRequest& request, const CreateUploadPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUploadPathRequest&;
    using Resp = CreateUploadPathResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUploadPath", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateUploadPathOutcomeCallable IotvideoClient::CreateUploadPathCallable(const CreateUploadPathRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUploadPathOutcome>>();
    CreateUploadPathAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateUploadPathRequest&,
        CreateUploadPathOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateUploadTestOutcome IotvideoClient::CreateUploadTest(const CreateUploadTestRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUploadTest");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUploadTestResponse rsp = CreateUploadTestResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUploadTestOutcome(rsp);
        else
            return CreateUploadTestOutcome(o.GetError());
    }
    else
    {
        return CreateUploadTestOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateUploadTestAsync(const CreateUploadTestRequest& request, const CreateUploadTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUploadTestRequest&;
    using Resp = CreateUploadTestResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUploadTest", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateUploadTestOutcomeCallable IotvideoClient::CreateUploadTestCallable(const CreateUploadTestRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUploadTestOutcome>>();
    CreateUploadTestAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateUploadTestRequest&,
        CreateUploadTestOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateUsrTokenOutcome IotvideoClient::CreateUsrToken(const CreateUsrTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUsrToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUsrTokenResponse rsp = CreateUsrTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUsrTokenOutcome(rsp);
        else
            return CreateUsrTokenOutcome(o.GetError());
    }
    else
    {
        return CreateUsrTokenOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateUsrTokenAsync(const CreateUsrTokenRequest& request, const CreateUsrTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUsrTokenRequest&;
    using Resp = CreateUsrTokenResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUsrToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateUsrTokenOutcomeCallable IotvideoClient::CreateUsrTokenCallable(const CreateUsrTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUsrTokenOutcome>>();
    CreateUsrTokenAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateUsrTokenRequest&,
        CreateUsrTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DeleteAppUsrOutcome IotvideoClient::DeleteAppUsr(const DeleteAppUsrRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAppUsr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAppUsrResponse rsp = DeleteAppUsrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAppUsrOutcome(rsp);
        else
            return DeleteAppUsrOutcome(o.GetError());
    }
    else
    {
        return DeleteAppUsrOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeleteAppUsrAsync(const DeleteAppUsrRequest& request, const DeleteAppUsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAppUsrRequest&;
    using Resp = DeleteAppUsrResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAppUsr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DeleteAppUsrOutcomeCallable IotvideoClient::DeleteAppUsrCallable(const DeleteAppUsrRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAppUsrOutcome>>();
    DeleteAppUsrAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DeleteAppUsrRequest&,
        DeleteAppUsrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DeleteBindingOutcome IotvideoClient::DeleteBinding(const DeleteBindingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBinding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBindingResponse rsp = DeleteBindingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBindingOutcome(rsp);
        else
            return DeleteBindingOutcome(o.GetError());
    }
    else
    {
        return DeleteBindingOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeleteBindingAsync(const DeleteBindingRequest& request, const DeleteBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBindingRequest&;
    using Resp = DeleteBindingResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBinding", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DeleteBindingOutcomeCallable IotvideoClient::DeleteBindingCallable(const DeleteBindingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBindingOutcome>>();
    DeleteBindingAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DeleteBindingRequest&,
        DeleteBindingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DeleteDeviceOutcome IotvideoClient::DeleteDevice(const DeleteDeviceRequest &request)
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

void IotvideoClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotvideoClient::DeleteDeviceOutcomeCallable IotvideoClient::DeleteDeviceCallable(const DeleteDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceOutcome>>();
    DeleteDeviceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DeleteDeviceRequest&,
        DeleteDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DeleteIotDataTypeOutcome IotvideoClient::DeleteIotDataType(const DeleteIotDataTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIotDataType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIotDataTypeResponse rsp = DeleteIotDataTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIotDataTypeOutcome(rsp);
        else
            return DeleteIotDataTypeOutcome(o.GetError());
    }
    else
    {
        return DeleteIotDataTypeOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeleteIotDataTypeAsync(const DeleteIotDataTypeRequest& request, const DeleteIotDataTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIotDataTypeRequest&;
    using Resp = DeleteIotDataTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIotDataType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DeleteIotDataTypeOutcomeCallable IotvideoClient::DeleteIotDataTypeCallable(const DeleteIotDataTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIotDataTypeOutcome>>();
    DeleteIotDataTypeAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DeleteIotDataTypeRequest&,
        DeleteIotDataTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DeleteMessageQueueOutcome IotvideoClient::DeleteMessageQueue(const DeleteMessageQueueRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMessageQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMessageQueueResponse rsp = DeleteMessageQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMessageQueueOutcome(rsp);
        else
            return DeleteMessageQueueOutcome(o.GetError());
    }
    else
    {
        return DeleteMessageQueueOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeleteMessageQueueAsync(const DeleteMessageQueueRequest& request, const DeleteMessageQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMessageQueueRequest&;
    using Resp = DeleteMessageQueueResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMessageQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DeleteMessageQueueOutcomeCallable IotvideoClient::DeleteMessageQueueCallable(const DeleteMessageQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMessageQueueOutcome>>();
    DeleteMessageQueueAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DeleteMessageQueueRequest&,
        DeleteMessageQueueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DeleteOtaVersionOutcome IotvideoClient::DeleteOtaVersion(const DeleteOtaVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOtaVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOtaVersionResponse rsp = DeleteOtaVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOtaVersionOutcome(rsp);
        else
            return DeleteOtaVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteOtaVersionOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeleteOtaVersionAsync(const DeleteOtaVersionRequest& request, const DeleteOtaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteOtaVersionRequest&;
    using Resp = DeleteOtaVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOtaVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DeleteOtaVersionOutcomeCallable IotvideoClient::DeleteOtaVersionCallable(const DeleteOtaVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOtaVersionOutcome>>();
    DeleteOtaVersionAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DeleteOtaVersionRequest&,
        DeleteOtaVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DeleteProductOutcome IotvideoClient::DeleteProduct(const DeleteProductRequest &request)
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

void IotvideoClient::DeleteProductAsync(const DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotvideoClient::DeleteProductOutcomeCallable IotvideoClient::DeleteProductCallable(const DeleteProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProductOutcome>>();
    DeleteProductAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DeleteProductRequest&,
        DeleteProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DeleteTraceIdsOutcome IotvideoClient::DeleteTraceIds(const DeleteTraceIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTraceIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTraceIdsResponse rsp = DeleteTraceIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTraceIdsOutcome(rsp);
        else
            return DeleteTraceIdsOutcome(o.GetError());
    }
    else
    {
        return DeleteTraceIdsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeleteTraceIdsAsync(const DeleteTraceIdsRequest& request, const DeleteTraceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTraceIdsRequest&;
    using Resp = DeleteTraceIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTraceIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DeleteTraceIdsOutcomeCallable IotvideoClient::DeleteTraceIdsCallable(const DeleteTraceIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTraceIdsOutcome>>();
    DeleteTraceIdsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DeleteTraceIdsRequest&,
        DeleteTraceIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DeliverStorageServiceOutcome IotvideoClient::DeliverStorageService(const DeliverStorageServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeliverStorageService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeliverStorageServiceResponse rsp = DeliverStorageServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeliverStorageServiceOutcome(rsp);
        else
            return DeliverStorageServiceOutcome(o.GetError());
    }
    else
    {
        return DeliverStorageServiceOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeliverStorageServiceAsync(const DeliverStorageServiceRequest& request, const DeliverStorageServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeliverStorageServiceRequest&;
    using Resp = DeliverStorageServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DeliverStorageService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DeliverStorageServiceOutcomeCallable IotvideoClient::DeliverStorageServiceCallable(const DeliverStorageServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeliverStorageServiceOutcome>>();
    DeliverStorageServiceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DeliverStorageServiceRequest&,
        DeliverStorageServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeAccountBalanceOutcome IotvideoClient::DescribeAccountBalance(const DescribeAccountBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountBalanceResponse rsp = DescribeAccountBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountBalanceOutcome(rsp);
        else
            return DescribeAccountBalanceOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountBalanceOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeAccountBalanceAsync(const DescribeAccountBalanceRequest& request, const DescribeAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountBalanceRequest&;
    using Resp = DescribeAccountBalanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountBalance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeAccountBalanceOutcomeCallable IotvideoClient::DescribeAccountBalanceCallable(const DescribeAccountBalanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountBalanceOutcome>>();
    DescribeAccountBalanceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeAccountBalanceRequest&,
        DescribeAccountBalanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeBindDevOutcome IotvideoClient::DescribeBindDev(const DescribeBindDevRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindDev");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindDevResponse rsp = DescribeBindDevResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindDevOutcome(rsp);
        else
            return DescribeBindDevOutcome(o.GetError());
    }
    else
    {
        return DescribeBindDevOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeBindDevAsync(const DescribeBindDevRequest& request, const DescribeBindDevAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBindDevRequest&;
    using Resp = DescribeBindDevResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBindDev", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeBindDevOutcomeCallable IotvideoClient::DescribeBindDevCallable(const DescribeBindDevRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBindDevOutcome>>();
    DescribeBindDevAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeBindDevRequest&,
        DescribeBindDevOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeBindUsrOutcome IotvideoClient::DescribeBindUsr(const DescribeBindUsrRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindUsr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindUsrResponse rsp = DescribeBindUsrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindUsrOutcome(rsp);
        else
            return DescribeBindUsrOutcome(o.GetError());
    }
    else
    {
        return DescribeBindUsrOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeBindUsrAsync(const DescribeBindUsrRequest& request, const DescribeBindUsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBindUsrRequest&;
    using Resp = DescribeBindUsrResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBindUsr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeBindUsrOutcomeCallable IotvideoClient::DescribeBindUsrCallable(const DescribeBindUsrRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBindUsrOutcome>>();
    DescribeBindUsrAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeBindUsrRequest&,
        DescribeBindUsrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeDeviceOutcome IotvideoClient::DescribeDevice(const DescribeDeviceRequest &request)
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

void IotvideoClient::DescribeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotvideoClient::DescribeDeviceOutcomeCallable IotvideoClient::DescribeDeviceCallable(const DescribeDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceOutcome>>();
    DescribeDeviceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeDeviceRequest&,
        DescribeDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeDeviceModelOutcome IotvideoClient::DescribeDeviceModel(const DescribeDeviceModelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceModelResponse rsp = DescribeDeviceModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceModelOutcome(rsp);
        else
            return DescribeDeviceModelOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceModelOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeDeviceModelAsync(const DescribeDeviceModelRequest& request, const DescribeDeviceModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceModelRequest&;
    using Resp = DescribeDeviceModelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeDeviceModelOutcomeCallable IotvideoClient::DescribeDeviceModelCallable(const DescribeDeviceModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceModelOutcome>>();
    DescribeDeviceModelAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeDeviceModelRequest&,
        DescribeDeviceModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeDevicesOutcome IotvideoClient::DescribeDevices(const DescribeDevicesRequest &request)
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

void IotvideoClient::DescribeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotvideoClient::DescribeDevicesOutcomeCallable IotvideoClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicesOutcome>>();
    DescribeDevicesAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeDevicesRequest&,
        DescribeDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeIotDataTypeOutcome IotvideoClient::DescribeIotDataType(const DescribeIotDataTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIotDataType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIotDataTypeResponse rsp = DescribeIotDataTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIotDataTypeOutcome(rsp);
        else
            return DescribeIotDataTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeIotDataTypeOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeIotDataTypeAsync(const DescribeIotDataTypeRequest& request, const DescribeIotDataTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIotDataTypeRequest&;
    using Resp = DescribeIotDataTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIotDataType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeIotDataTypeOutcomeCallable IotvideoClient::DescribeIotDataTypeCallable(const DescribeIotDataTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIotDataTypeOutcome>>();
    DescribeIotDataTypeAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeIotDataTypeRequest&,
        DescribeIotDataTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeIotModelOutcome IotvideoClient::DescribeIotModel(const DescribeIotModelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIotModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIotModelResponse rsp = DescribeIotModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIotModelOutcome(rsp);
        else
            return DescribeIotModelOutcome(o.GetError());
    }
    else
    {
        return DescribeIotModelOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeIotModelAsync(const DescribeIotModelRequest& request, const DescribeIotModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIotModelRequest&;
    using Resp = DescribeIotModelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIotModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeIotModelOutcomeCallable IotvideoClient::DescribeIotModelCallable(const DescribeIotModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIotModelOutcome>>();
    DescribeIotModelAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeIotModelRequest&,
        DescribeIotModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeIotModelsOutcome IotvideoClient::DescribeIotModels(const DescribeIotModelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIotModels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIotModelsResponse rsp = DescribeIotModelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIotModelsOutcome(rsp);
        else
            return DescribeIotModelsOutcome(o.GetError());
    }
    else
    {
        return DescribeIotModelsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeIotModelsAsync(const DescribeIotModelsRequest& request, const DescribeIotModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIotModelsRequest&;
    using Resp = DescribeIotModelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIotModels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeIotModelsOutcomeCallable IotvideoClient::DescribeIotModelsCallable(const DescribeIotModelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIotModelsOutcome>>();
    DescribeIotModelsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeIotModelsRequest&,
        DescribeIotModelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeLogsOutcome IotvideoClient::DescribeLogs(const DescribeLogsRequest &request)
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

void IotvideoClient::DescribeLogsAsync(const DescribeLogsRequest& request, const DescribeLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogsRequest&;
    using Resp = DescribeLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeLogsOutcomeCallable IotvideoClient::DescribeLogsCallable(const DescribeLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogsOutcome>>();
    DescribeLogsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeLogsRequest&,
        DescribeLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeMessageQueueOutcome IotvideoClient::DescribeMessageQueue(const DescribeMessageQueueRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageQueueResponse rsp = DescribeMessageQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageQueueOutcome(rsp);
        else
            return DescribeMessageQueueOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageQueueOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeMessageQueueAsync(const DescribeMessageQueueRequest& request, const DescribeMessageQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMessageQueueRequest&;
    using Resp = DescribeMessageQueueResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMessageQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeMessageQueueOutcomeCallable IotvideoClient::DescribeMessageQueueCallable(const DescribeMessageQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMessageQueueOutcome>>();
    DescribeMessageQueueAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeMessageQueueRequest&,
        DescribeMessageQueueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeModelDataRetOutcome IotvideoClient::DescribeModelDataRet(const DescribeModelDataRetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelDataRet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelDataRetResponse rsp = DescribeModelDataRetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelDataRetOutcome(rsp);
        else
            return DescribeModelDataRetOutcome(o.GetError());
    }
    else
    {
        return DescribeModelDataRetOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeModelDataRetAsync(const DescribeModelDataRetRequest& request, const DescribeModelDataRetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelDataRetRequest&;
    using Resp = DescribeModelDataRetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelDataRet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeModelDataRetOutcomeCallable IotvideoClient::DescribeModelDataRetCallable(const DescribeModelDataRetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelDataRetOutcome>>();
    DescribeModelDataRetAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeModelDataRetRequest&,
        DescribeModelDataRetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeOsListOutcome IotvideoClient::DescribeOsList(const DescribeOsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOsListResponse rsp = DescribeOsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOsListOutcome(rsp);
        else
            return DescribeOsListOutcome(o.GetError());
    }
    else
    {
        return DescribeOsListOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeOsListAsync(const DescribeOsListRequest& request, const DescribeOsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOsListRequest&;
    using Resp = DescribeOsListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOsList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeOsListOutcomeCallable IotvideoClient::DescribeOsListCallable(const DescribeOsListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOsListOutcome>>();
    DescribeOsListAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeOsListRequest&,
        DescribeOsListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeOtaVersionsOutcome IotvideoClient::DescribeOtaVersions(const DescribeOtaVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOtaVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOtaVersionsResponse rsp = DescribeOtaVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOtaVersionsOutcome(rsp);
        else
            return DescribeOtaVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeOtaVersionsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeOtaVersionsAsync(const DescribeOtaVersionsRequest& request, const DescribeOtaVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOtaVersionsRequest&;
    using Resp = DescribeOtaVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOtaVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeOtaVersionsOutcomeCallable IotvideoClient::DescribeOtaVersionsCallable(const DescribeOtaVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOtaVersionsOutcome>>();
    DescribeOtaVersionsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeOtaVersionsRequest&,
        DescribeOtaVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeProductOutcome IotvideoClient::DescribeProduct(const DescribeProductRequest &request)
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

void IotvideoClient::DescribeProductAsync(const DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotvideoClient::DescribeProductOutcomeCallable IotvideoClient::DescribeProductCallable(const DescribeProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductOutcome>>();
    DescribeProductAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeProductRequest&,
        DescribeProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeProductsOutcome IotvideoClient::DescribeProducts(const DescribeProductsRequest &request)
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

void IotvideoClient::DescribeProductsAsync(const DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IotvideoClient::DescribeProductsOutcomeCallable IotvideoClient::DescribeProductsCallable(const DescribeProductsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductsOutcome>>();
    DescribeProductsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeProductsRequest&,
        DescribeProductsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribePubVersionsOutcome IotvideoClient::DescribePubVersions(const DescribePubVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePubVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePubVersionsResponse rsp = DescribePubVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePubVersionsOutcome(rsp);
        else
            return DescribePubVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribePubVersionsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribePubVersionsAsync(const DescribePubVersionsRequest& request, const DescribePubVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePubVersionsRequest&;
    using Resp = DescribePubVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePubVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribePubVersionsOutcomeCallable IotvideoClient::DescribePubVersionsCallable(const DescribePubVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePubVersionsOutcome>>();
    DescribePubVersionsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribePubVersionsRequest&,
        DescribePubVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeRechargeRecordsOutcome IotvideoClient::DescribeRechargeRecords(const DescribeRechargeRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRechargeRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRechargeRecordsResponse rsp = DescribeRechargeRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRechargeRecordsOutcome(rsp);
        else
            return DescribeRechargeRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeRechargeRecordsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeRechargeRecordsAsync(const DescribeRechargeRecordsRequest& request, const DescribeRechargeRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRechargeRecordsRequest&;
    using Resp = DescribeRechargeRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRechargeRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeRechargeRecordsOutcomeCallable IotvideoClient::DescribeRechargeRecordsCallable(const DescribeRechargeRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRechargeRecordsOutcome>>();
    DescribeRechargeRecordsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeRechargeRecordsRequest&,
        DescribeRechargeRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeRegistrationStatusOutcome IotvideoClient::DescribeRegistrationStatus(const DescribeRegistrationStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegistrationStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegistrationStatusResponse rsp = DescribeRegistrationStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegistrationStatusOutcome(rsp);
        else
            return DescribeRegistrationStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeRegistrationStatusOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeRegistrationStatusAsync(const DescribeRegistrationStatusRequest& request, const DescribeRegistrationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRegistrationStatusRequest&;
    using Resp = DescribeRegistrationStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegistrationStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeRegistrationStatusOutcomeCallable IotvideoClient::DescribeRegistrationStatusCallable(const DescribeRegistrationStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegistrationStatusOutcome>>();
    DescribeRegistrationStatusAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeRegistrationStatusRequest&,
        DescribeRegistrationStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeRunLogOutcome IotvideoClient::DescribeRunLog(const DescribeRunLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRunLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRunLogResponse rsp = DescribeRunLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRunLogOutcome(rsp);
        else
            return DescribeRunLogOutcome(o.GetError());
    }
    else
    {
        return DescribeRunLogOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeRunLogAsync(const DescribeRunLogRequest& request, const DescribeRunLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRunLogRequest&;
    using Resp = DescribeRunLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRunLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeRunLogOutcomeCallable IotvideoClient::DescribeRunLogCallable(const DescribeRunLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRunLogOutcome>>();
    DescribeRunLogAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeRunLogRequest&,
        DescribeRunLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeStorageServiceOutcome IotvideoClient::DescribeStorageService(const DescribeStorageServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStorageService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStorageServiceResponse rsp = DescribeStorageServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStorageServiceOutcome(rsp);
        else
            return DescribeStorageServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeStorageServiceOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeStorageServiceAsync(const DescribeStorageServiceRequest& request, const DescribeStorageServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStorageServiceRequest&;
    using Resp = DescribeStorageServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStorageService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeStorageServiceOutcomeCallable IotvideoClient::DescribeStorageServiceCallable(const DescribeStorageServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStorageServiceOutcome>>();
    DescribeStorageServiceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeStorageServiceRequest&,
        DescribeStorageServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeStreamOutcome IotvideoClient::DescribeStream(const DescribeStreamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamResponse rsp = DescribeStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamOutcome(rsp);
        else
            return DescribeStreamOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeStreamAsync(const DescribeStreamRequest& request, const DescribeStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamRequest&;
    using Resp = DescribeStreamResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeStreamOutcomeCallable IotvideoClient::DescribeStreamCallable(const DescribeStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamOutcome>>();
    DescribeStreamAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeStreamRequest&,
        DescribeStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeTraceIdsOutcome IotvideoClient::DescribeTraceIds(const DescribeTraceIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTraceIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTraceIdsResponse rsp = DescribeTraceIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTraceIdsOutcome(rsp);
        else
            return DescribeTraceIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeTraceIdsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeTraceIdsAsync(const DescribeTraceIdsRequest& request, const DescribeTraceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTraceIdsRequest&;
    using Resp = DescribeTraceIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTraceIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeTraceIdsOutcomeCallable IotvideoClient::DescribeTraceIdsCallable(const DescribeTraceIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTraceIdsOutcome>>();
    DescribeTraceIdsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeTraceIdsRequest&,
        DescribeTraceIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeTraceStatusOutcome IotvideoClient::DescribeTraceStatus(const DescribeTraceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTraceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTraceStatusResponse rsp = DescribeTraceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTraceStatusOutcome(rsp);
        else
            return DescribeTraceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTraceStatusOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeTraceStatusAsync(const DescribeTraceStatusRequest& request, const DescribeTraceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTraceStatusRequest&;
    using Resp = DescribeTraceStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTraceStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeTraceStatusOutcomeCallable IotvideoClient::DescribeTraceStatusCallable(const DescribeTraceStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTraceStatusOutcome>>();
    DescribeTraceStatusAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeTraceStatusRequest&,
        DescribeTraceStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DisableDeviceOutcome IotvideoClient::DisableDevice(const DisableDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DisableDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableDeviceResponse rsp = DisableDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableDeviceOutcome(rsp);
        else
            return DisableDeviceOutcome(o.GetError());
    }
    else
    {
        return DisableDeviceOutcome(outcome.GetError());
    }
}

void IotvideoClient::DisableDeviceAsync(const DisableDeviceRequest& request, const DisableDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableDeviceRequest&;
    using Resp = DisableDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "DisableDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DisableDeviceOutcomeCallable IotvideoClient::DisableDeviceCallable(const DisableDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableDeviceOutcome>>();
    DisableDeviceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DisableDeviceRequest&,
        DisableDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DisableDeviceStreamOutcome IotvideoClient::DisableDeviceStream(const DisableDeviceStreamRequest &request)
{
    auto outcome = MakeRequest(request, "DisableDeviceStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableDeviceStreamResponse rsp = DisableDeviceStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableDeviceStreamOutcome(rsp);
        else
            return DisableDeviceStreamOutcome(o.GetError());
    }
    else
    {
        return DisableDeviceStreamOutcome(outcome.GetError());
    }
}

void IotvideoClient::DisableDeviceStreamAsync(const DisableDeviceStreamRequest& request, const DisableDeviceStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableDeviceStreamRequest&;
    using Resp = DisableDeviceStreamResponse;

    DoRequestAsync<Req, Resp>(
        "DisableDeviceStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DisableDeviceStreamOutcomeCallable IotvideoClient::DisableDeviceStreamCallable(const DisableDeviceStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableDeviceStreamOutcome>>();
    DisableDeviceStreamAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DisableDeviceStreamRequest&,
        DisableDeviceStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DisableOtaVersionOutcome IotvideoClient::DisableOtaVersion(const DisableOtaVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DisableOtaVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableOtaVersionResponse rsp = DisableOtaVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableOtaVersionOutcome(rsp);
        else
            return DisableOtaVersionOutcome(o.GetError());
    }
    else
    {
        return DisableOtaVersionOutcome(outcome.GetError());
    }
}

void IotvideoClient::DisableOtaVersionAsync(const DisableOtaVersionRequest& request, const DisableOtaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableOtaVersionRequest&;
    using Resp = DisableOtaVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DisableOtaVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DisableOtaVersionOutcomeCallable IotvideoClient::DisableOtaVersionCallable(const DisableOtaVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableOtaVersionOutcome>>();
    DisableOtaVersionAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DisableOtaVersionRequest&,
        DisableOtaVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::ModifyDeviceOutcome IotvideoClient::ModifyDevice(const ModifyDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceResponse rsp = ModifyDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceOutcome(rsp);
        else
            return ModifyDeviceOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyDeviceAsync(const ModifyDeviceRequest& request, const ModifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDeviceRequest&;
    using Resp = ModifyDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ModifyDeviceOutcomeCallable IotvideoClient::ModifyDeviceCallable(const ModifyDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceOutcome>>();
    ModifyDeviceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ModifyDeviceRequest&,
        ModifyDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::ModifyDeviceActionOutcome IotvideoClient::ModifyDeviceAction(const ModifyDeviceActionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceAction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceActionResponse rsp = ModifyDeviceActionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceActionOutcome(rsp);
        else
            return ModifyDeviceActionOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceActionOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyDeviceActionAsync(const ModifyDeviceActionRequest& request, const ModifyDeviceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDeviceActionRequest&;
    using Resp = ModifyDeviceActionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDeviceAction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ModifyDeviceActionOutcomeCallable IotvideoClient::ModifyDeviceActionCallable(const ModifyDeviceActionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceActionOutcome>>();
    ModifyDeviceActionAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ModifyDeviceActionRequest&,
        ModifyDeviceActionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::ModifyDevicePropertyOutcome IotvideoClient::ModifyDeviceProperty(const ModifyDevicePropertyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceProperty");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDevicePropertyResponse rsp = ModifyDevicePropertyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDevicePropertyOutcome(rsp);
        else
            return ModifyDevicePropertyOutcome(o.GetError());
    }
    else
    {
        return ModifyDevicePropertyOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyDevicePropertyAsync(const ModifyDevicePropertyRequest& request, const ModifyDevicePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDevicePropertyRequest&;
    using Resp = ModifyDevicePropertyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDeviceProperty", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ModifyDevicePropertyOutcomeCallable IotvideoClient::ModifyDevicePropertyCallable(const ModifyDevicePropertyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDevicePropertyOutcome>>();
    ModifyDevicePropertyAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ModifyDevicePropertyRequest&,
        ModifyDevicePropertyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::ModifyProductOutcome IotvideoClient::ModifyProduct(const ModifyProductRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProductResponse rsp = ModifyProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProductOutcome(rsp);
        else
            return ModifyProductOutcome(o.GetError());
    }
    else
    {
        return ModifyProductOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyProductAsync(const ModifyProductRequest& request, const ModifyProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProductRequest&;
    using Resp = ModifyProductResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ModifyProductOutcomeCallable IotvideoClient::ModifyProductCallable(const ModifyProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProductOutcome>>();
    ModifyProductAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ModifyProductRequest&,
        ModifyProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::ModifyVerContentOutcome IotvideoClient::ModifyVerContent(const ModifyVerContentRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVerContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVerContentResponse rsp = ModifyVerContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVerContentOutcome(rsp);
        else
            return ModifyVerContentOutcome(o.GetError());
    }
    else
    {
        return ModifyVerContentOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyVerContentAsync(const ModifyVerContentRequest& request, const ModifyVerContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVerContentRequest&;
    using Resp = ModifyVerContentResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVerContent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ModifyVerContentOutcomeCallable IotvideoClient::ModifyVerContentCallable(const ModifyVerContentRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVerContentOutcome>>();
    ModifyVerContentAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ModifyVerContentRequest&,
        ModifyVerContentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::RefundStorageServiceOutcome IotvideoClient::RefundStorageService(const RefundStorageServiceRequest &request)
{
    auto outcome = MakeRequest(request, "RefundStorageService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefundStorageServiceResponse rsp = RefundStorageServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefundStorageServiceOutcome(rsp);
        else
            return RefundStorageServiceOutcome(o.GetError());
    }
    else
    {
        return RefundStorageServiceOutcome(outcome.GetError());
    }
}

void IotvideoClient::RefundStorageServiceAsync(const RefundStorageServiceRequest& request, const RefundStorageServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RefundStorageServiceRequest&;
    using Resp = RefundStorageServiceResponse;

    DoRequestAsync<Req, Resp>(
        "RefundStorageService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::RefundStorageServiceOutcomeCallable IotvideoClient::RefundStorageServiceCallable(const RefundStorageServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefundStorageServiceOutcome>>();
    RefundStorageServiceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const RefundStorageServiceRequest&,
        RefundStorageServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::RenewUploadTestOutcome IotvideoClient::RenewUploadTest(const RenewUploadTestRequest &request)
{
    auto outcome = MakeRequest(request, "RenewUploadTest");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewUploadTestResponse rsp = RenewUploadTestResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewUploadTestOutcome(rsp);
        else
            return RenewUploadTestOutcome(o.GetError());
    }
    else
    {
        return RenewUploadTestOutcome(outcome.GetError());
    }
}

void IotvideoClient::RenewUploadTestAsync(const RenewUploadTestRequest& request, const RenewUploadTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewUploadTestRequest&;
    using Resp = RenewUploadTestResponse;

    DoRequestAsync<Req, Resp>(
        "RenewUploadTest", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::RenewUploadTestOutcomeCallable IotvideoClient::RenewUploadTestCallable(const RenewUploadTestRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewUploadTestOutcome>>();
    RenewUploadTestAsync(
    request,
    [prom](
        const IotvideoClient*,
        const RenewUploadTestRequest&,
        RenewUploadTestOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::RunDeviceOutcome IotvideoClient::RunDevice(const RunDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "RunDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunDeviceResponse rsp = RunDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunDeviceOutcome(rsp);
        else
            return RunDeviceOutcome(o.GetError());
    }
    else
    {
        return RunDeviceOutcome(outcome.GetError());
    }
}

void IotvideoClient::RunDeviceAsync(const RunDeviceRequest& request, const RunDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunDeviceRequest&;
    using Resp = RunDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "RunDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::RunDeviceOutcomeCallable IotvideoClient::RunDeviceCallable(const RunDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunDeviceOutcome>>();
    RunDeviceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const RunDeviceRequest&,
        RunDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::RunDeviceStreamOutcome IotvideoClient::RunDeviceStream(const RunDeviceStreamRequest &request)
{
    auto outcome = MakeRequest(request, "RunDeviceStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunDeviceStreamResponse rsp = RunDeviceStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunDeviceStreamOutcome(rsp);
        else
            return RunDeviceStreamOutcome(o.GetError());
    }
    else
    {
        return RunDeviceStreamOutcome(outcome.GetError());
    }
}

void IotvideoClient::RunDeviceStreamAsync(const RunDeviceStreamRequest& request, const RunDeviceStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunDeviceStreamRequest&;
    using Resp = RunDeviceStreamResponse;

    DoRequestAsync<Req, Resp>(
        "RunDeviceStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::RunDeviceStreamOutcomeCallable IotvideoClient::RunDeviceStreamCallable(const RunDeviceStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunDeviceStreamOutcome>>();
    RunDeviceStreamAsync(
    request,
    [prom](
        const IotvideoClient*,
        const RunDeviceStreamRequest&,
        RunDeviceStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::RunIotModelOutcome IotvideoClient::RunIotModel(const RunIotModelRequest &request)
{
    auto outcome = MakeRequest(request, "RunIotModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunIotModelResponse rsp = RunIotModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunIotModelOutcome(rsp);
        else
            return RunIotModelOutcome(o.GetError());
    }
    else
    {
        return RunIotModelOutcome(outcome.GetError());
    }
}

void IotvideoClient::RunIotModelAsync(const RunIotModelRequest& request, const RunIotModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunIotModelRequest&;
    using Resp = RunIotModelResponse;

    DoRequestAsync<Req, Resp>(
        "RunIotModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::RunIotModelOutcomeCallable IotvideoClient::RunIotModelCallable(const RunIotModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunIotModelOutcome>>();
    RunIotModelAsync(
    request,
    [prom](
        const IotvideoClient*,
        const RunIotModelRequest&,
        RunIotModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::RunOtaVersionOutcome IotvideoClient::RunOtaVersion(const RunOtaVersionRequest &request)
{
    auto outcome = MakeRequest(request, "RunOtaVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunOtaVersionResponse rsp = RunOtaVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunOtaVersionOutcome(rsp);
        else
            return RunOtaVersionOutcome(o.GetError());
    }
    else
    {
        return RunOtaVersionOutcome(outcome.GetError());
    }
}

void IotvideoClient::RunOtaVersionAsync(const RunOtaVersionRequest& request, const RunOtaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunOtaVersionRequest&;
    using Resp = RunOtaVersionResponse;

    DoRequestAsync<Req, Resp>(
        "RunOtaVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::RunOtaVersionOutcomeCallable IotvideoClient::RunOtaVersionCallable(const RunOtaVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunOtaVersionOutcome>>();
    RunOtaVersionAsync(
    request,
    [prom](
        const IotvideoClient*,
        const RunOtaVersionRequest&,
        RunOtaVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::RunTestOtaVersionOutcome IotvideoClient::RunTestOtaVersion(const RunTestOtaVersionRequest &request)
{
    auto outcome = MakeRequest(request, "RunTestOtaVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunTestOtaVersionResponse rsp = RunTestOtaVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunTestOtaVersionOutcome(rsp);
        else
            return RunTestOtaVersionOutcome(o.GetError());
    }
    else
    {
        return RunTestOtaVersionOutcome(outcome.GetError());
    }
}

void IotvideoClient::RunTestOtaVersionAsync(const RunTestOtaVersionRequest& request, const RunTestOtaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunTestOtaVersionRequest&;
    using Resp = RunTestOtaVersionResponse;

    DoRequestAsync<Req, Resp>(
        "RunTestOtaVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::RunTestOtaVersionOutcomeCallable IotvideoClient::RunTestOtaVersionCallable(const RunTestOtaVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunTestOtaVersionOutcome>>();
    RunTestOtaVersionAsync(
    request,
    [prom](
        const IotvideoClient*,
        const RunTestOtaVersionRequest&,
        RunTestOtaVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::SendOnlineMsgOutcome IotvideoClient::SendOnlineMsg(const SendOnlineMsgRequest &request)
{
    auto outcome = MakeRequest(request, "SendOnlineMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendOnlineMsgResponse rsp = SendOnlineMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendOnlineMsgOutcome(rsp);
        else
            return SendOnlineMsgOutcome(o.GetError());
    }
    else
    {
        return SendOnlineMsgOutcome(outcome.GetError());
    }
}

void IotvideoClient::SendOnlineMsgAsync(const SendOnlineMsgRequest& request, const SendOnlineMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendOnlineMsgRequest&;
    using Resp = SendOnlineMsgResponse;

    DoRequestAsync<Req, Resp>(
        "SendOnlineMsg", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::SendOnlineMsgOutcomeCallable IotvideoClient::SendOnlineMsgCallable(const SendOnlineMsgRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendOnlineMsgOutcome>>();
    SendOnlineMsgAsync(
    request,
    [prom](
        const IotvideoClient*,
        const SendOnlineMsgRequest&,
        SendOnlineMsgOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::SetMessageQueueOutcome IotvideoClient::SetMessageQueue(const SetMessageQueueRequest &request)
{
    auto outcome = MakeRequest(request, "SetMessageQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetMessageQueueResponse rsp = SetMessageQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetMessageQueueOutcome(rsp);
        else
            return SetMessageQueueOutcome(o.GetError());
    }
    else
    {
        return SetMessageQueueOutcome(outcome.GetError());
    }
}

void IotvideoClient::SetMessageQueueAsync(const SetMessageQueueRequest& request, const SetMessageQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetMessageQueueRequest&;
    using Resp = SetMessageQueueResponse;

    DoRequestAsync<Req, Resp>(
        "SetMessageQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::SetMessageQueueOutcomeCallable IotvideoClient::SetMessageQueueCallable(const SetMessageQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetMessageQueueOutcome>>();
    SetMessageQueueAsync(
    request,
    [prom](
        const IotvideoClient*,
        const SetMessageQueueRequest&,
        SetMessageQueueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::UpgradeDeviceOutcome IotvideoClient::UpgradeDevice(const UpgradeDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDeviceResponse rsp = UpgradeDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDeviceOutcome(rsp);
        else
            return UpgradeDeviceOutcome(o.GetError());
    }
    else
    {
        return UpgradeDeviceOutcome(outcome.GetError());
    }
}

void IotvideoClient::UpgradeDeviceAsync(const UpgradeDeviceRequest& request, const UpgradeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeDeviceRequest&;
    using Resp = UpgradeDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::UpgradeDeviceOutcomeCallable IotvideoClient::UpgradeDeviceCallable(const UpgradeDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDeviceOutcome>>();
    UpgradeDeviceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const UpgradeDeviceRequest&,
        UpgradeDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::UploadOtaVersionOutcome IotvideoClient::UploadOtaVersion(const UploadOtaVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UploadOtaVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadOtaVersionResponse rsp = UploadOtaVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadOtaVersionOutcome(rsp);
        else
            return UploadOtaVersionOutcome(o.GetError());
    }
    else
    {
        return UploadOtaVersionOutcome(outcome.GetError());
    }
}

void IotvideoClient::UploadOtaVersionAsync(const UploadOtaVersionRequest& request, const UploadOtaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadOtaVersionRequest&;
    using Resp = UploadOtaVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UploadOtaVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::UploadOtaVersionOutcomeCallable IotvideoClient::UploadOtaVersionCallable(const UploadOtaVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadOtaVersionOutcome>>();
    UploadOtaVersionAsync(
    request,
    [prom](
        const IotvideoClient*,
        const UploadOtaVersionRequest&,
        UploadOtaVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

