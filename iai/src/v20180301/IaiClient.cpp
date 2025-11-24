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

#include <tencentcloud/iai/v20180301/IaiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iai::V20180301;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-01";
    const string ENDPOINT = "iai.tencentcloudapi.com";
}

IaiClient::IaiClient(const Credential &credential, const string &region) :
    IaiClient(credential, region, ClientProfile())
{
}

IaiClient::IaiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IaiClient::AnalyzeDenseLandmarksOutcome IaiClient::AnalyzeDenseLandmarks(const AnalyzeDenseLandmarksRequest &request)
{
    auto outcome = MakeRequest(request, "AnalyzeDenseLandmarks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AnalyzeDenseLandmarksResponse rsp = AnalyzeDenseLandmarksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AnalyzeDenseLandmarksOutcome(rsp);
        else
            return AnalyzeDenseLandmarksOutcome(o.GetError());
    }
    else
    {
        return AnalyzeDenseLandmarksOutcome(outcome.GetError());
    }
}

void IaiClient::AnalyzeDenseLandmarksAsync(const AnalyzeDenseLandmarksRequest& request, const AnalyzeDenseLandmarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AnalyzeDenseLandmarksRequest&;
    using Resp = AnalyzeDenseLandmarksResponse;

    DoRequestAsync<Req, Resp>(
        "AnalyzeDenseLandmarks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::AnalyzeDenseLandmarksOutcomeCallable IaiClient::AnalyzeDenseLandmarksCallable(const AnalyzeDenseLandmarksRequest &request)
{
    const auto prom = std::make_shared<std::promise<AnalyzeDenseLandmarksOutcome>>();
    AnalyzeDenseLandmarksAsync(
    request,
    [prom](
        const IaiClient*,
        const AnalyzeDenseLandmarksRequest&,
        AnalyzeDenseLandmarksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::AnalyzeFaceOutcome IaiClient::AnalyzeFace(const AnalyzeFaceRequest &request)
{
    auto outcome = MakeRequest(request, "AnalyzeFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AnalyzeFaceResponse rsp = AnalyzeFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AnalyzeFaceOutcome(rsp);
        else
            return AnalyzeFaceOutcome(o.GetError());
    }
    else
    {
        return AnalyzeFaceOutcome(outcome.GetError());
    }
}

void IaiClient::AnalyzeFaceAsync(const AnalyzeFaceRequest& request, const AnalyzeFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AnalyzeFaceRequest&;
    using Resp = AnalyzeFaceResponse;

    DoRequestAsync<Req, Resp>(
        "AnalyzeFace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::AnalyzeFaceOutcomeCallable IaiClient::AnalyzeFaceCallable(const AnalyzeFaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<AnalyzeFaceOutcome>>();
    AnalyzeFaceAsync(
    request,
    [prom](
        const IaiClient*,
        const AnalyzeFaceRequest&,
        AnalyzeFaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::CompareFaceOutcome IaiClient::CompareFace(const CompareFaceRequest &request)
{
    auto outcome = MakeRequest(request, "CompareFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompareFaceResponse rsp = CompareFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompareFaceOutcome(rsp);
        else
            return CompareFaceOutcome(o.GetError());
    }
    else
    {
        return CompareFaceOutcome(outcome.GetError());
    }
}

void IaiClient::CompareFaceAsync(const CompareFaceRequest& request, const CompareFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CompareFaceRequest&;
    using Resp = CompareFaceResponse;

    DoRequestAsync<Req, Resp>(
        "CompareFace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::CompareFaceOutcomeCallable IaiClient::CompareFaceCallable(const CompareFaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CompareFaceOutcome>>();
    CompareFaceAsync(
    request,
    [prom](
        const IaiClient*,
        const CompareFaceRequest&,
        CompareFaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::CopyPersonOutcome IaiClient::CopyPerson(const CopyPersonRequest &request)
{
    auto outcome = MakeRequest(request, "CopyPerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyPersonResponse rsp = CopyPersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyPersonOutcome(rsp);
        else
            return CopyPersonOutcome(o.GetError());
    }
    else
    {
        return CopyPersonOutcome(outcome.GetError());
    }
}

void IaiClient::CopyPersonAsync(const CopyPersonRequest& request, const CopyPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyPersonRequest&;
    using Resp = CopyPersonResponse;

    DoRequestAsync<Req, Resp>(
        "CopyPerson", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::CopyPersonOutcomeCallable IaiClient::CopyPersonCallable(const CopyPersonRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyPersonOutcome>>();
    CopyPersonAsync(
    request,
    [prom](
        const IaiClient*,
        const CopyPersonRequest&,
        CopyPersonOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::CreateFaceOutcome IaiClient::CreateFace(const CreateFaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFaceResponse rsp = CreateFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFaceOutcome(rsp);
        else
            return CreateFaceOutcome(o.GetError());
    }
    else
    {
        return CreateFaceOutcome(outcome.GetError());
    }
}

void IaiClient::CreateFaceAsync(const CreateFaceRequest& request, const CreateFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFaceRequest&;
    using Resp = CreateFaceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::CreateFaceOutcomeCallable IaiClient::CreateFaceCallable(const CreateFaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFaceOutcome>>();
    CreateFaceAsync(
    request,
    [prom](
        const IaiClient*,
        const CreateFaceRequest&,
        CreateFaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::CreateGroupOutcome IaiClient::CreateGroup(const CreateGroupRequest &request)
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

void IaiClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IaiClient::CreateGroupOutcomeCallable IaiClient::CreateGroupCallable(const CreateGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGroupOutcome>>();
    CreateGroupAsync(
    request,
    [prom](
        const IaiClient*,
        const CreateGroupRequest&,
        CreateGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::CreatePersonOutcome IaiClient::CreatePerson(const CreatePersonRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePersonResponse rsp = CreatePersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePersonOutcome(rsp);
        else
            return CreatePersonOutcome(o.GetError());
    }
    else
    {
        return CreatePersonOutcome(outcome.GetError());
    }
}

void IaiClient::CreatePersonAsync(const CreatePersonRequest& request, const CreatePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePersonRequest&;
    using Resp = CreatePersonResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePerson", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::CreatePersonOutcomeCallable IaiClient::CreatePersonCallable(const CreatePersonRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePersonOutcome>>();
    CreatePersonAsync(
    request,
    [prom](
        const IaiClient*,
        const CreatePersonRequest&,
        CreatePersonOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::DeleteFaceOutcome IaiClient::DeleteFace(const DeleteFaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFaceResponse rsp = DeleteFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFaceOutcome(rsp);
        else
            return DeleteFaceOutcome(o.GetError());
    }
    else
    {
        return DeleteFaceOutcome(outcome.GetError());
    }
}

void IaiClient::DeleteFaceAsync(const DeleteFaceRequest& request, const DeleteFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFaceRequest&;
    using Resp = DeleteFaceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::DeleteFaceOutcomeCallable IaiClient::DeleteFaceCallable(const DeleteFaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFaceOutcome>>();
    DeleteFaceAsync(
    request,
    [prom](
        const IaiClient*,
        const DeleteFaceRequest&,
        DeleteFaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::DeleteGroupOutcome IaiClient::DeleteGroup(const DeleteGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGroupResponse rsp = DeleteGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGroupOutcome(rsp);
        else
            return DeleteGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteGroupOutcome(outcome.GetError());
    }
}

void IaiClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGroupRequest&;
    using Resp = DeleteGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::DeleteGroupOutcomeCallable IaiClient::DeleteGroupCallable(const DeleteGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGroupOutcome>>();
    DeleteGroupAsync(
    request,
    [prom](
        const IaiClient*,
        const DeleteGroupRequest&,
        DeleteGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::DeletePersonOutcome IaiClient::DeletePerson(const DeletePersonRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePersonResponse rsp = DeletePersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePersonOutcome(rsp);
        else
            return DeletePersonOutcome(o.GetError());
    }
    else
    {
        return DeletePersonOutcome(outcome.GetError());
    }
}

void IaiClient::DeletePersonAsync(const DeletePersonRequest& request, const DeletePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePersonRequest&;
    using Resp = DeletePersonResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePerson", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::DeletePersonOutcomeCallable IaiClient::DeletePersonCallable(const DeletePersonRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePersonOutcome>>();
    DeletePersonAsync(
    request,
    [prom](
        const IaiClient*,
        const DeletePersonRequest&,
        DeletePersonOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::DeletePersonFromGroupOutcome IaiClient::DeletePersonFromGroup(const DeletePersonFromGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePersonFromGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePersonFromGroupResponse rsp = DeletePersonFromGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePersonFromGroupOutcome(rsp);
        else
            return DeletePersonFromGroupOutcome(o.GetError());
    }
    else
    {
        return DeletePersonFromGroupOutcome(outcome.GetError());
    }
}

void IaiClient::DeletePersonFromGroupAsync(const DeletePersonFromGroupRequest& request, const DeletePersonFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePersonFromGroupRequest&;
    using Resp = DeletePersonFromGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePersonFromGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::DeletePersonFromGroupOutcomeCallable IaiClient::DeletePersonFromGroupCallable(const DeletePersonFromGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePersonFromGroupOutcome>>();
    DeletePersonFromGroupAsync(
    request,
    [prom](
        const IaiClient*,
        const DeletePersonFromGroupRequest&,
        DeletePersonFromGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::DetectFaceOutcome IaiClient::DetectFace(const DetectFaceRequest &request)
{
    auto outcome = MakeRequest(request, "DetectFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectFaceResponse rsp = DetectFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectFaceOutcome(rsp);
        else
            return DetectFaceOutcome(o.GetError());
    }
    else
    {
        return DetectFaceOutcome(outcome.GetError());
    }
}

void IaiClient::DetectFaceAsync(const DetectFaceRequest& request, const DetectFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetectFaceRequest&;
    using Resp = DetectFaceResponse;

    DoRequestAsync<Req, Resp>(
        "DetectFace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::DetectFaceOutcomeCallable IaiClient::DetectFaceCallable(const DetectFaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectFaceOutcome>>();
    DetectFaceAsync(
    request,
    [prom](
        const IaiClient*,
        const DetectFaceRequest&,
        DetectFaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::DetectFaceAttributesOutcome IaiClient::DetectFaceAttributes(const DetectFaceAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DetectFaceAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectFaceAttributesResponse rsp = DetectFaceAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectFaceAttributesOutcome(rsp);
        else
            return DetectFaceAttributesOutcome(o.GetError());
    }
    else
    {
        return DetectFaceAttributesOutcome(outcome.GetError());
    }
}

void IaiClient::DetectFaceAttributesAsync(const DetectFaceAttributesRequest& request, const DetectFaceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetectFaceAttributesRequest&;
    using Resp = DetectFaceAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "DetectFaceAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::DetectFaceAttributesOutcomeCallable IaiClient::DetectFaceAttributesCallable(const DetectFaceAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectFaceAttributesOutcome>>();
    DetectFaceAttributesAsync(
    request,
    [prom](
        const IaiClient*,
        const DetectFaceAttributesRequest&,
        DetectFaceAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::GetGroupInfoOutcome IaiClient::GetGroupInfo(const GetGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGroupInfoResponse rsp = GetGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGroupInfoOutcome(rsp);
        else
            return GetGroupInfoOutcome(o.GetError());
    }
    else
    {
        return GetGroupInfoOutcome(outcome.GetError());
    }
}

void IaiClient::GetGroupInfoAsync(const GetGroupInfoRequest& request, const GetGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetGroupInfoRequest&;
    using Resp = GetGroupInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetGroupInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::GetGroupInfoOutcomeCallable IaiClient::GetGroupInfoCallable(const GetGroupInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetGroupInfoOutcome>>();
    GetGroupInfoAsync(
    request,
    [prom](
        const IaiClient*,
        const GetGroupInfoRequest&,
        GetGroupInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::GetGroupListOutcome IaiClient::GetGroupList(const GetGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "GetGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGroupListResponse rsp = GetGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGroupListOutcome(rsp);
        else
            return GetGroupListOutcome(o.GetError());
    }
    else
    {
        return GetGroupListOutcome(outcome.GetError());
    }
}

void IaiClient::GetGroupListAsync(const GetGroupListRequest& request, const GetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetGroupListRequest&;
    using Resp = GetGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "GetGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::GetGroupListOutcomeCallable IaiClient::GetGroupListCallable(const GetGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetGroupListOutcome>>();
    GetGroupListAsync(
    request,
    [prom](
        const IaiClient*,
        const GetGroupListRequest&,
        GetGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::GetPersonBaseInfoOutcome IaiClient::GetPersonBaseInfo(const GetPersonBaseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetPersonBaseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPersonBaseInfoResponse rsp = GetPersonBaseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPersonBaseInfoOutcome(rsp);
        else
            return GetPersonBaseInfoOutcome(o.GetError());
    }
    else
    {
        return GetPersonBaseInfoOutcome(outcome.GetError());
    }
}

void IaiClient::GetPersonBaseInfoAsync(const GetPersonBaseInfoRequest& request, const GetPersonBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPersonBaseInfoRequest&;
    using Resp = GetPersonBaseInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetPersonBaseInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::GetPersonBaseInfoOutcomeCallable IaiClient::GetPersonBaseInfoCallable(const GetPersonBaseInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPersonBaseInfoOutcome>>();
    GetPersonBaseInfoAsync(
    request,
    [prom](
        const IaiClient*,
        const GetPersonBaseInfoRequest&,
        GetPersonBaseInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::GetPersonGroupInfoOutcome IaiClient::GetPersonGroupInfo(const GetPersonGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetPersonGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPersonGroupInfoResponse rsp = GetPersonGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPersonGroupInfoOutcome(rsp);
        else
            return GetPersonGroupInfoOutcome(o.GetError());
    }
    else
    {
        return GetPersonGroupInfoOutcome(outcome.GetError());
    }
}

void IaiClient::GetPersonGroupInfoAsync(const GetPersonGroupInfoRequest& request, const GetPersonGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPersonGroupInfoRequest&;
    using Resp = GetPersonGroupInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetPersonGroupInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::GetPersonGroupInfoOutcomeCallable IaiClient::GetPersonGroupInfoCallable(const GetPersonGroupInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPersonGroupInfoOutcome>>();
    GetPersonGroupInfoAsync(
    request,
    [prom](
        const IaiClient*,
        const GetPersonGroupInfoRequest&,
        GetPersonGroupInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::GetPersonListOutcome IaiClient::GetPersonList(const GetPersonListRequest &request)
{
    auto outcome = MakeRequest(request, "GetPersonList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPersonListResponse rsp = GetPersonListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPersonListOutcome(rsp);
        else
            return GetPersonListOutcome(o.GetError());
    }
    else
    {
        return GetPersonListOutcome(outcome.GetError());
    }
}

void IaiClient::GetPersonListAsync(const GetPersonListRequest& request, const GetPersonListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPersonListRequest&;
    using Resp = GetPersonListResponse;

    DoRequestAsync<Req, Resp>(
        "GetPersonList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::GetPersonListOutcomeCallable IaiClient::GetPersonListCallable(const GetPersonListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPersonListOutcome>>();
    GetPersonListAsync(
    request,
    [prom](
        const IaiClient*,
        const GetPersonListRequest&,
        GetPersonListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::GetPersonListNumOutcome IaiClient::GetPersonListNum(const GetPersonListNumRequest &request)
{
    auto outcome = MakeRequest(request, "GetPersonListNum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPersonListNumResponse rsp = GetPersonListNumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPersonListNumOutcome(rsp);
        else
            return GetPersonListNumOutcome(o.GetError());
    }
    else
    {
        return GetPersonListNumOutcome(outcome.GetError());
    }
}

void IaiClient::GetPersonListNumAsync(const GetPersonListNumRequest& request, const GetPersonListNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPersonListNumRequest&;
    using Resp = GetPersonListNumResponse;

    DoRequestAsync<Req, Resp>(
        "GetPersonListNum", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::GetPersonListNumOutcomeCallable IaiClient::GetPersonListNumCallable(const GetPersonListNumRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPersonListNumOutcome>>();
    GetPersonListNumAsync(
    request,
    [prom](
        const IaiClient*,
        const GetPersonListNumRequest&,
        GetPersonListNumOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::GetUpgradeGroupFaceModelVersionJobListOutcome IaiClient::GetUpgradeGroupFaceModelVersionJobList(const GetUpgradeGroupFaceModelVersionJobListRequest &request)
{
    auto outcome = MakeRequest(request, "GetUpgradeGroupFaceModelVersionJobList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUpgradeGroupFaceModelVersionJobListResponse rsp = GetUpgradeGroupFaceModelVersionJobListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUpgradeGroupFaceModelVersionJobListOutcome(rsp);
        else
            return GetUpgradeGroupFaceModelVersionJobListOutcome(o.GetError());
    }
    else
    {
        return GetUpgradeGroupFaceModelVersionJobListOutcome(outcome.GetError());
    }
}

void IaiClient::GetUpgradeGroupFaceModelVersionJobListAsync(const GetUpgradeGroupFaceModelVersionJobListRequest& request, const GetUpgradeGroupFaceModelVersionJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetUpgradeGroupFaceModelVersionJobListRequest&;
    using Resp = GetUpgradeGroupFaceModelVersionJobListResponse;

    DoRequestAsync<Req, Resp>(
        "GetUpgradeGroupFaceModelVersionJobList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::GetUpgradeGroupFaceModelVersionJobListOutcomeCallable IaiClient::GetUpgradeGroupFaceModelVersionJobListCallable(const GetUpgradeGroupFaceModelVersionJobListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetUpgradeGroupFaceModelVersionJobListOutcome>>();
    GetUpgradeGroupFaceModelVersionJobListAsync(
    request,
    [prom](
        const IaiClient*,
        const GetUpgradeGroupFaceModelVersionJobListRequest&,
        GetUpgradeGroupFaceModelVersionJobListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::GetUpgradeGroupFaceModelVersionResultOutcome IaiClient::GetUpgradeGroupFaceModelVersionResult(const GetUpgradeGroupFaceModelVersionResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetUpgradeGroupFaceModelVersionResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUpgradeGroupFaceModelVersionResultResponse rsp = GetUpgradeGroupFaceModelVersionResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUpgradeGroupFaceModelVersionResultOutcome(rsp);
        else
            return GetUpgradeGroupFaceModelVersionResultOutcome(o.GetError());
    }
    else
    {
        return GetUpgradeGroupFaceModelVersionResultOutcome(outcome.GetError());
    }
}

void IaiClient::GetUpgradeGroupFaceModelVersionResultAsync(const GetUpgradeGroupFaceModelVersionResultRequest& request, const GetUpgradeGroupFaceModelVersionResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetUpgradeGroupFaceModelVersionResultRequest&;
    using Resp = GetUpgradeGroupFaceModelVersionResultResponse;

    DoRequestAsync<Req, Resp>(
        "GetUpgradeGroupFaceModelVersionResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::GetUpgradeGroupFaceModelVersionResultOutcomeCallable IaiClient::GetUpgradeGroupFaceModelVersionResultCallable(const GetUpgradeGroupFaceModelVersionResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetUpgradeGroupFaceModelVersionResultOutcome>>();
    GetUpgradeGroupFaceModelVersionResultAsync(
    request,
    [prom](
        const IaiClient*,
        const GetUpgradeGroupFaceModelVersionResultRequest&,
        GetUpgradeGroupFaceModelVersionResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::ModifyGroupOutcome IaiClient::ModifyGroup(const ModifyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGroupResponse rsp = ModifyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGroupOutcome(rsp);
        else
            return ModifyGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyGroupOutcome(outcome.GetError());
    }
}

void IaiClient::ModifyGroupAsync(const ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGroupRequest&;
    using Resp = ModifyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::ModifyGroupOutcomeCallable IaiClient::ModifyGroupCallable(const ModifyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGroupOutcome>>();
    ModifyGroupAsync(
    request,
    [prom](
        const IaiClient*,
        const ModifyGroupRequest&,
        ModifyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::ModifyPersonBaseInfoOutcome IaiClient::ModifyPersonBaseInfo(const ModifyPersonBaseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPersonBaseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPersonBaseInfoResponse rsp = ModifyPersonBaseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPersonBaseInfoOutcome(rsp);
        else
            return ModifyPersonBaseInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyPersonBaseInfoOutcome(outcome.GetError());
    }
}

void IaiClient::ModifyPersonBaseInfoAsync(const ModifyPersonBaseInfoRequest& request, const ModifyPersonBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPersonBaseInfoRequest&;
    using Resp = ModifyPersonBaseInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPersonBaseInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::ModifyPersonBaseInfoOutcomeCallable IaiClient::ModifyPersonBaseInfoCallable(const ModifyPersonBaseInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPersonBaseInfoOutcome>>();
    ModifyPersonBaseInfoAsync(
    request,
    [prom](
        const IaiClient*,
        const ModifyPersonBaseInfoRequest&,
        ModifyPersonBaseInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::ModifyPersonGroupInfoOutcome IaiClient::ModifyPersonGroupInfo(const ModifyPersonGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPersonGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPersonGroupInfoResponse rsp = ModifyPersonGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPersonGroupInfoOutcome(rsp);
        else
            return ModifyPersonGroupInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyPersonGroupInfoOutcome(outcome.GetError());
    }
}

void IaiClient::ModifyPersonGroupInfoAsync(const ModifyPersonGroupInfoRequest& request, const ModifyPersonGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPersonGroupInfoRequest&;
    using Resp = ModifyPersonGroupInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPersonGroupInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::ModifyPersonGroupInfoOutcomeCallable IaiClient::ModifyPersonGroupInfoCallable(const ModifyPersonGroupInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPersonGroupInfoOutcome>>();
    ModifyPersonGroupInfoAsync(
    request,
    [prom](
        const IaiClient*,
        const ModifyPersonGroupInfoRequest&,
        ModifyPersonGroupInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::RevertGroupFaceModelVersionOutcome IaiClient::RevertGroupFaceModelVersion(const RevertGroupFaceModelVersionRequest &request)
{
    auto outcome = MakeRequest(request, "RevertGroupFaceModelVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevertGroupFaceModelVersionResponse rsp = RevertGroupFaceModelVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevertGroupFaceModelVersionOutcome(rsp);
        else
            return RevertGroupFaceModelVersionOutcome(o.GetError());
    }
    else
    {
        return RevertGroupFaceModelVersionOutcome(outcome.GetError());
    }
}

void IaiClient::RevertGroupFaceModelVersionAsync(const RevertGroupFaceModelVersionRequest& request, const RevertGroupFaceModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RevertGroupFaceModelVersionRequest&;
    using Resp = RevertGroupFaceModelVersionResponse;

    DoRequestAsync<Req, Resp>(
        "RevertGroupFaceModelVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::RevertGroupFaceModelVersionOutcomeCallable IaiClient::RevertGroupFaceModelVersionCallable(const RevertGroupFaceModelVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<RevertGroupFaceModelVersionOutcome>>();
    RevertGroupFaceModelVersionAsync(
    request,
    [prom](
        const IaiClient*,
        const RevertGroupFaceModelVersionRequest&,
        RevertGroupFaceModelVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::SearchFacesOutcome IaiClient::SearchFaces(const SearchFacesRequest &request)
{
    auto outcome = MakeRequest(request, "SearchFaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchFacesResponse rsp = SearchFacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchFacesOutcome(rsp);
        else
            return SearchFacesOutcome(o.GetError());
    }
    else
    {
        return SearchFacesOutcome(outcome.GetError());
    }
}

void IaiClient::SearchFacesAsync(const SearchFacesRequest& request, const SearchFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchFacesRequest&;
    using Resp = SearchFacesResponse;

    DoRequestAsync<Req, Resp>(
        "SearchFaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::SearchFacesOutcomeCallable IaiClient::SearchFacesCallable(const SearchFacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchFacesOutcome>>();
    SearchFacesAsync(
    request,
    [prom](
        const IaiClient*,
        const SearchFacesRequest&,
        SearchFacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::SearchFacesReturnsByGroupOutcome IaiClient::SearchFacesReturnsByGroup(const SearchFacesReturnsByGroupRequest &request)
{
    auto outcome = MakeRequest(request, "SearchFacesReturnsByGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchFacesReturnsByGroupResponse rsp = SearchFacesReturnsByGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchFacesReturnsByGroupOutcome(rsp);
        else
            return SearchFacesReturnsByGroupOutcome(o.GetError());
    }
    else
    {
        return SearchFacesReturnsByGroupOutcome(outcome.GetError());
    }
}

void IaiClient::SearchFacesReturnsByGroupAsync(const SearchFacesReturnsByGroupRequest& request, const SearchFacesReturnsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchFacesReturnsByGroupRequest&;
    using Resp = SearchFacesReturnsByGroupResponse;

    DoRequestAsync<Req, Resp>(
        "SearchFacesReturnsByGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::SearchFacesReturnsByGroupOutcomeCallable IaiClient::SearchFacesReturnsByGroupCallable(const SearchFacesReturnsByGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchFacesReturnsByGroupOutcome>>();
    SearchFacesReturnsByGroupAsync(
    request,
    [prom](
        const IaiClient*,
        const SearchFacesReturnsByGroupRequest&,
        SearchFacesReturnsByGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::SearchPersonsOutcome IaiClient::SearchPersons(const SearchPersonsRequest &request)
{
    auto outcome = MakeRequest(request, "SearchPersons");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchPersonsResponse rsp = SearchPersonsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchPersonsOutcome(rsp);
        else
            return SearchPersonsOutcome(o.GetError());
    }
    else
    {
        return SearchPersonsOutcome(outcome.GetError());
    }
}

void IaiClient::SearchPersonsAsync(const SearchPersonsRequest& request, const SearchPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchPersonsRequest&;
    using Resp = SearchPersonsResponse;

    DoRequestAsync<Req, Resp>(
        "SearchPersons", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::SearchPersonsOutcomeCallable IaiClient::SearchPersonsCallable(const SearchPersonsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchPersonsOutcome>>();
    SearchPersonsAsync(
    request,
    [prom](
        const IaiClient*,
        const SearchPersonsRequest&,
        SearchPersonsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::SearchPersonsReturnsByGroupOutcome IaiClient::SearchPersonsReturnsByGroup(const SearchPersonsReturnsByGroupRequest &request)
{
    auto outcome = MakeRequest(request, "SearchPersonsReturnsByGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchPersonsReturnsByGroupResponse rsp = SearchPersonsReturnsByGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchPersonsReturnsByGroupOutcome(rsp);
        else
            return SearchPersonsReturnsByGroupOutcome(o.GetError());
    }
    else
    {
        return SearchPersonsReturnsByGroupOutcome(outcome.GetError());
    }
}

void IaiClient::SearchPersonsReturnsByGroupAsync(const SearchPersonsReturnsByGroupRequest& request, const SearchPersonsReturnsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchPersonsReturnsByGroupRequest&;
    using Resp = SearchPersonsReturnsByGroupResponse;

    DoRequestAsync<Req, Resp>(
        "SearchPersonsReturnsByGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::SearchPersonsReturnsByGroupOutcomeCallable IaiClient::SearchPersonsReturnsByGroupCallable(const SearchPersonsReturnsByGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchPersonsReturnsByGroupOutcome>>();
    SearchPersonsReturnsByGroupAsync(
    request,
    [prom](
        const IaiClient*,
        const SearchPersonsReturnsByGroupRequest&,
        SearchPersonsReturnsByGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::UpgradeGroupFaceModelVersionOutcome IaiClient::UpgradeGroupFaceModelVersion(const UpgradeGroupFaceModelVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeGroupFaceModelVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeGroupFaceModelVersionResponse rsp = UpgradeGroupFaceModelVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeGroupFaceModelVersionOutcome(rsp);
        else
            return UpgradeGroupFaceModelVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeGroupFaceModelVersionOutcome(outcome.GetError());
    }
}

void IaiClient::UpgradeGroupFaceModelVersionAsync(const UpgradeGroupFaceModelVersionRequest& request, const UpgradeGroupFaceModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeGroupFaceModelVersionRequest&;
    using Resp = UpgradeGroupFaceModelVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeGroupFaceModelVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::UpgradeGroupFaceModelVersionOutcomeCallable IaiClient::UpgradeGroupFaceModelVersionCallable(const UpgradeGroupFaceModelVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeGroupFaceModelVersionOutcome>>();
    UpgradeGroupFaceModelVersionAsync(
    request,
    [prom](
        const IaiClient*,
        const UpgradeGroupFaceModelVersionRequest&,
        UpgradeGroupFaceModelVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::VerifyFaceOutcome IaiClient::VerifyFace(const VerifyFaceRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyFaceResponse rsp = VerifyFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyFaceOutcome(rsp);
        else
            return VerifyFaceOutcome(o.GetError());
    }
    else
    {
        return VerifyFaceOutcome(outcome.GetError());
    }
}

void IaiClient::VerifyFaceAsync(const VerifyFaceRequest& request, const VerifyFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyFaceRequest&;
    using Resp = VerifyFaceResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyFace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::VerifyFaceOutcomeCallable IaiClient::VerifyFaceCallable(const VerifyFaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyFaceOutcome>>();
    VerifyFaceAsync(
    request,
    [prom](
        const IaiClient*,
        const VerifyFaceRequest&,
        VerifyFaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IaiClient::VerifyPersonOutcome IaiClient::VerifyPerson(const VerifyPersonRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyPerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyPersonResponse rsp = VerifyPersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyPersonOutcome(rsp);
        else
            return VerifyPersonOutcome(o.GetError());
    }
    else
    {
        return VerifyPersonOutcome(outcome.GetError());
    }
}

void IaiClient::VerifyPersonAsync(const VerifyPersonRequest& request, const VerifyPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyPersonRequest&;
    using Resp = VerifyPersonResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyPerson", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IaiClient::VerifyPersonOutcomeCallable IaiClient::VerifyPersonCallable(const VerifyPersonRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyPersonOutcome>>();
    VerifyPersonAsync(
    request,
    [prom](
        const IaiClient*,
        const VerifyPersonRequest&,
        VerifyPersonOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

