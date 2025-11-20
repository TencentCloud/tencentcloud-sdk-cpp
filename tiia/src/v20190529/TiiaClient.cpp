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

#include <tencentcloud/tiia/v20190529/TiiaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tiia::V20190529;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-05-29";
    const string ENDPOINT = "tiia.tencentcloudapi.com";
}

TiiaClient::TiiaClient(const Credential &credential, const string &region) :
    TiiaClient(credential, region, ClientProfile())
{
}

TiiaClient::TiiaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TiiaClient::AssessQualityOutcome TiiaClient::AssessQuality(const AssessQualityRequest &request)
{
    auto outcome = MakeRequest(request, "AssessQuality");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssessQualityResponse rsp = AssessQualityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssessQualityOutcome(rsp);
        else
            return AssessQualityOutcome(o.GetError());
    }
    else
    {
        return AssessQualityOutcome(outcome.GetError());
    }
}

void TiiaClient::AssessQualityAsync(const AssessQualityRequest& request, const AssessQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssessQualityRequest&;
    using Resp = AssessQualityResponse;

    DoRequestAsync<Req, Resp>(
        "AssessQuality", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::AssessQualityOutcomeCallable TiiaClient::AssessQualityCallable(const AssessQualityRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssessQualityOutcome>>();
    AssessQualityAsync(
    request,
    [prom](
        const TiiaClient*,
        const AssessQualityRequest&,
        AssessQualityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::CreateGroupOutcome TiiaClient::CreateGroup(const CreateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGroupResponse rsp = CreateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGroupOutcome(rsp);
        else
            return CreateGroupOutcome(o.GetError());
    }
    else
    {
        return CreateGroupOutcome(outcome.GetError());
    }
}

void TiiaClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGroupRequest&;
    using Resp = CreateGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::CreateGroupOutcomeCallable TiiaClient::CreateGroupCallable(const CreateGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGroupOutcome>>();
    CreateGroupAsync(
    request,
    [prom](
        const TiiaClient*,
        const CreateGroupRequest&,
        CreateGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::CreateImageOutcome TiiaClient::CreateImage(const CreateImageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImageResponse rsp = CreateImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImageOutcome(rsp);
        else
            return CreateImageOutcome(o.GetError());
    }
    else
    {
        return CreateImageOutcome(outcome.GetError());
    }
}

void TiiaClient::CreateImageAsync(const CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateImageRequest&;
    using Resp = CreateImageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::CreateImageOutcomeCallable TiiaClient::CreateImageCallable(const CreateImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateImageOutcome>>();
    CreateImageAsync(
    request,
    [prom](
        const TiiaClient*,
        const CreateImageRequest&,
        CreateImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::CropImageOutcome TiiaClient::CropImage(const CropImageRequest &request)
{
    auto outcome = MakeRequest(request, "CropImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CropImageResponse rsp = CropImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CropImageOutcome(rsp);
        else
            return CropImageOutcome(o.GetError());
    }
    else
    {
        return CropImageOutcome(outcome.GetError());
    }
}

void TiiaClient::CropImageAsync(const CropImageRequest& request, const CropImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CropImageRequest&;
    using Resp = CropImageResponse;

    DoRequestAsync<Req, Resp>(
        "CropImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::CropImageOutcomeCallable TiiaClient::CropImageCallable(const CropImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CropImageOutcome>>();
    CropImageAsync(
    request,
    [prom](
        const TiiaClient*,
        const CropImageRequest&,
        CropImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::DeleteImagesOutcome TiiaClient::DeleteImages(const DeleteImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImagesResponse rsp = DeleteImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImagesOutcome(rsp);
        else
            return DeleteImagesOutcome(o.GetError());
    }
    else
    {
        return DeleteImagesOutcome(outcome.GetError());
    }
}

void TiiaClient::DeleteImagesAsync(const DeleteImagesRequest& request, const DeleteImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteImagesRequest&;
    using Resp = DeleteImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::DeleteImagesOutcomeCallable TiiaClient::DeleteImagesCallable(const DeleteImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteImagesOutcome>>();
    DeleteImagesAsync(
    request,
    [prom](
        const TiiaClient*,
        const DeleteImagesRequest&,
        DeleteImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::DescribeGroupsOutcome TiiaClient::DescribeGroups(const DescribeGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupsResponse rsp = DescribeGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupsOutcome(rsp);
        else
            return DescribeGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupsOutcome(outcome.GetError());
    }
}

void TiiaClient::DescribeGroupsAsync(const DescribeGroupsRequest& request, const DescribeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupsRequest&;
    using Resp = DescribeGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::DescribeGroupsOutcomeCallable TiiaClient::DescribeGroupsCallable(const DescribeGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupsOutcome>>();
    DescribeGroupsAsync(
    request,
    [prom](
        const TiiaClient*,
        const DescribeGroupsRequest&,
        DescribeGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::DescribeImagesOutcome TiiaClient::DescribeImages(const DescribeImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImagesResponse rsp = DescribeImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImagesOutcome(rsp);
        else
            return DescribeImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeImagesOutcome(outcome.GetError());
    }
}

void TiiaClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImagesRequest&;
    using Resp = DescribeImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::DescribeImagesOutcomeCallable TiiaClient::DescribeImagesCallable(const DescribeImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImagesOutcome>>();
    DescribeImagesAsync(
    request,
    [prom](
        const TiiaClient*,
        const DescribeImagesRequest&,
        DescribeImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::DetectChefDressOutcome TiiaClient::DetectChefDress(const DetectChefDressRequest &request)
{
    auto outcome = MakeRequest(request, "DetectChefDress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectChefDressResponse rsp = DetectChefDressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectChefDressOutcome(rsp);
        else
            return DetectChefDressOutcome(o.GetError());
    }
    else
    {
        return DetectChefDressOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectChefDressAsync(const DetectChefDressRequest& request, const DetectChefDressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetectChefDressRequest&;
    using Resp = DetectChefDressResponse;

    DoRequestAsync<Req, Resp>(
        "DetectChefDress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::DetectChefDressOutcomeCallable TiiaClient::DetectChefDressCallable(const DetectChefDressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectChefDressOutcome>>();
    DetectChefDressAsync(
    request,
    [prom](
        const TiiaClient*,
        const DetectChefDressRequest&,
        DetectChefDressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::DetectDisgustOutcome TiiaClient::DetectDisgust(const DetectDisgustRequest &request)
{
    auto outcome = MakeRequest(request, "DetectDisgust");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectDisgustResponse rsp = DetectDisgustResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectDisgustOutcome(rsp);
        else
            return DetectDisgustOutcome(o.GetError());
    }
    else
    {
        return DetectDisgustOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectDisgustAsync(const DetectDisgustRequest& request, const DetectDisgustAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetectDisgustRequest&;
    using Resp = DetectDisgustResponse;

    DoRequestAsync<Req, Resp>(
        "DetectDisgust", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::DetectDisgustOutcomeCallable TiiaClient::DetectDisgustCallable(const DetectDisgustRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectDisgustOutcome>>();
    DetectDisgustAsync(
    request,
    [prom](
        const TiiaClient*,
        const DetectDisgustRequest&,
        DetectDisgustOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::DetectEnvelopeOutcome TiiaClient::DetectEnvelope(const DetectEnvelopeRequest &request)
{
    auto outcome = MakeRequest(request, "DetectEnvelope");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectEnvelopeResponse rsp = DetectEnvelopeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectEnvelopeOutcome(rsp);
        else
            return DetectEnvelopeOutcome(o.GetError());
    }
    else
    {
        return DetectEnvelopeOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectEnvelopeAsync(const DetectEnvelopeRequest& request, const DetectEnvelopeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetectEnvelopeRequest&;
    using Resp = DetectEnvelopeResponse;

    DoRequestAsync<Req, Resp>(
        "DetectEnvelope", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::DetectEnvelopeOutcomeCallable TiiaClient::DetectEnvelopeCallable(const DetectEnvelopeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectEnvelopeOutcome>>();
    DetectEnvelopeAsync(
    request,
    [prom](
        const TiiaClient*,
        const DetectEnvelopeRequest&,
        DetectEnvelopeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::DetectLabelOutcome TiiaClient::DetectLabel(const DetectLabelRequest &request)
{
    auto outcome = MakeRequest(request, "DetectLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectLabelResponse rsp = DetectLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectLabelOutcome(rsp);
        else
            return DetectLabelOutcome(o.GetError());
    }
    else
    {
        return DetectLabelOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectLabelAsync(const DetectLabelRequest& request, const DetectLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetectLabelRequest&;
    using Resp = DetectLabelResponse;

    DoRequestAsync<Req, Resp>(
        "DetectLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::DetectLabelOutcomeCallable TiiaClient::DetectLabelCallable(const DetectLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectLabelOutcome>>();
    DetectLabelAsync(
    request,
    [prom](
        const TiiaClient*,
        const DetectLabelRequest&,
        DetectLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::DetectLabelProOutcome TiiaClient::DetectLabelPro(const DetectLabelProRequest &request)
{
    auto outcome = MakeRequest(request, "DetectLabelPro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectLabelProResponse rsp = DetectLabelProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectLabelProOutcome(rsp);
        else
            return DetectLabelProOutcome(o.GetError());
    }
    else
    {
        return DetectLabelProOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectLabelProAsync(const DetectLabelProRequest& request, const DetectLabelProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetectLabelProRequest&;
    using Resp = DetectLabelProResponse;

    DoRequestAsync<Req, Resp>(
        "DetectLabelPro", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::DetectLabelProOutcomeCallable TiiaClient::DetectLabelProCallable(const DetectLabelProRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectLabelProOutcome>>();
    DetectLabelProAsync(
    request,
    [prom](
        const TiiaClient*,
        const DetectLabelProRequest&,
        DetectLabelProOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::DetectMisbehaviorOutcome TiiaClient::DetectMisbehavior(const DetectMisbehaviorRequest &request)
{
    auto outcome = MakeRequest(request, "DetectMisbehavior");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectMisbehaviorResponse rsp = DetectMisbehaviorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectMisbehaviorOutcome(rsp);
        else
            return DetectMisbehaviorOutcome(o.GetError());
    }
    else
    {
        return DetectMisbehaviorOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectMisbehaviorAsync(const DetectMisbehaviorRequest& request, const DetectMisbehaviorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetectMisbehaviorRequest&;
    using Resp = DetectMisbehaviorResponse;

    DoRequestAsync<Req, Resp>(
        "DetectMisbehavior", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::DetectMisbehaviorOutcomeCallable TiiaClient::DetectMisbehaviorCallable(const DetectMisbehaviorRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectMisbehaviorOutcome>>();
    DetectMisbehaviorAsync(
    request,
    [prom](
        const TiiaClient*,
        const DetectMisbehaviorRequest&,
        DetectMisbehaviorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::DetectPetOutcome TiiaClient::DetectPet(const DetectPetRequest &request)
{
    auto outcome = MakeRequest(request, "DetectPet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectPetResponse rsp = DetectPetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectPetOutcome(rsp);
        else
            return DetectPetOutcome(o.GetError());
    }
    else
    {
        return DetectPetOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectPetAsync(const DetectPetRequest& request, const DetectPetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetectPetRequest&;
    using Resp = DetectPetResponse;

    DoRequestAsync<Req, Resp>(
        "DetectPet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::DetectPetOutcomeCallable TiiaClient::DetectPetCallable(const DetectPetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectPetOutcome>>();
    DetectPetAsync(
    request,
    [prom](
        const TiiaClient*,
        const DetectPetRequest&,
        DetectPetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::DetectProductOutcome TiiaClient::DetectProduct(const DetectProductRequest &request)
{
    auto outcome = MakeRequest(request, "DetectProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectProductResponse rsp = DetectProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectProductOutcome(rsp);
        else
            return DetectProductOutcome(o.GetError());
    }
    else
    {
        return DetectProductOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectProductAsync(const DetectProductRequest& request, const DetectProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetectProductRequest&;
    using Resp = DetectProductResponse;

    DoRequestAsync<Req, Resp>(
        "DetectProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::DetectProductOutcomeCallable TiiaClient::DetectProductCallable(const DetectProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectProductOutcome>>();
    DetectProductAsync(
    request,
    [prom](
        const TiiaClient*,
        const DetectProductRequest&,
        DetectProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::DetectSecurityOutcome TiiaClient::DetectSecurity(const DetectSecurityRequest &request)
{
    auto outcome = MakeRequest(request, "DetectSecurity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectSecurityResponse rsp = DetectSecurityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectSecurityOutcome(rsp);
        else
            return DetectSecurityOutcome(o.GetError());
    }
    else
    {
        return DetectSecurityOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectSecurityAsync(const DetectSecurityRequest& request, const DetectSecurityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetectSecurityRequest&;
    using Resp = DetectSecurityResponse;

    DoRequestAsync<Req, Resp>(
        "DetectSecurity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::DetectSecurityOutcomeCallable TiiaClient::DetectSecurityCallable(const DetectSecurityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectSecurityOutcome>>();
    DetectSecurityAsync(
    request,
    [prom](
        const TiiaClient*,
        const DetectSecurityRequest&,
        DetectSecurityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::EnhanceImageOutcome TiiaClient::EnhanceImage(const EnhanceImageRequest &request)
{
    auto outcome = MakeRequest(request, "EnhanceImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnhanceImageResponse rsp = EnhanceImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnhanceImageOutcome(rsp);
        else
            return EnhanceImageOutcome(o.GetError());
    }
    else
    {
        return EnhanceImageOutcome(outcome.GetError());
    }
}

void TiiaClient::EnhanceImageAsync(const EnhanceImageRequest& request, const EnhanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnhanceImageRequest&;
    using Resp = EnhanceImageResponse;

    DoRequestAsync<Req, Resp>(
        "EnhanceImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::EnhanceImageOutcomeCallable TiiaClient::EnhanceImageCallable(const EnhanceImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnhanceImageOutcome>>();
    EnhanceImageAsync(
    request,
    [prom](
        const TiiaClient*,
        const EnhanceImageRequest&,
        EnhanceImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::RecognizeCarOutcome TiiaClient::RecognizeCar(const RecognizeCarRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeCar");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeCarResponse rsp = RecognizeCarResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeCarOutcome(rsp);
        else
            return RecognizeCarOutcome(o.GetError());
    }
    else
    {
        return RecognizeCarOutcome(outcome.GetError());
    }
}

void TiiaClient::RecognizeCarAsync(const RecognizeCarRequest& request, const RecognizeCarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeCarRequest&;
    using Resp = RecognizeCarResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeCar", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::RecognizeCarOutcomeCallable TiiaClient::RecognizeCarCallable(const RecognizeCarRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeCarOutcome>>();
    RecognizeCarAsync(
    request,
    [prom](
        const TiiaClient*,
        const RecognizeCarRequest&,
        RecognizeCarOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::RecognizeCarProOutcome TiiaClient::RecognizeCarPro(const RecognizeCarProRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeCarPro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeCarProResponse rsp = RecognizeCarProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeCarProOutcome(rsp);
        else
            return RecognizeCarProOutcome(o.GetError());
    }
    else
    {
        return RecognizeCarProOutcome(outcome.GetError());
    }
}

void TiiaClient::RecognizeCarProAsync(const RecognizeCarProRequest& request, const RecognizeCarProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeCarProRequest&;
    using Resp = RecognizeCarProResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeCarPro", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::RecognizeCarProOutcomeCallable TiiaClient::RecognizeCarProCallable(const RecognizeCarProRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeCarProOutcome>>();
    RecognizeCarProAsync(
    request,
    [prom](
        const TiiaClient*,
        const RecognizeCarProRequest&,
        RecognizeCarProOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::SearchImageOutcome TiiaClient::SearchImage(const SearchImageRequest &request)
{
    auto outcome = MakeRequest(request, "SearchImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchImageResponse rsp = SearchImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchImageOutcome(rsp);
        else
            return SearchImageOutcome(o.GetError());
    }
    else
    {
        return SearchImageOutcome(outcome.GetError());
    }
}

void TiiaClient::SearchImageAsync(const SearchImageRequest& request, const SearchImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchImageRequest&;
    using Resp = SearchImageResponse;

    DoRequestAsync<Req, Resp>(
        "SearchImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::SearchImageOutcomeCallable TiiaClient::SearchImageCallable(const SearchImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchImageOutcome>>();
    SearchImageAsync(
    request,
    [prom](
        const TiiaClient*,
        const SearchImageRequest&,
        SearchImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiiaClient::UpdateImageOutcome TiiaClient::UpdateImage(const UpdateImageRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateImageResponse rsp = UpdateImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateImageOutcome(rsp);
        else
            return UpdateImageOutcome(o.GetError());
    }
    else
    {
        return UpdateImageOutcome(outcome.GetError());
    }
}

void TiiaClient::UpdateImageAsync(const UpdateImageRequest& request, const UpdateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateImageRequest&;
    using Resp = UpdateImageResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiiaClient::UpdateImageOutcomeCallable TiiaClient::UpdateImageCallable(const UpdateImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateImageOutcome>>();
    UpdateImageAsync(
    request,
    [prom](
        const TiiaClient*,
        const UpdateImageRequest&,
        UpdateImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

