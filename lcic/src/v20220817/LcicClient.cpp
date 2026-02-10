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

#include <tencentcloud/lcic/v20220817/LcicClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Lcic::V20220817;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-08-17";
    const string ENDPOINT = "lcic.tencentcloudapi.com";
}

LcicClient::LcicClient(const Credential &credential, const string &region) :
    LcicClient(credential, region, ClientProfile())
{
}

LcicClient::LcicClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LcicClient::AddGroupMemberOutcome LcicClient::AddGroupMember(const AddGroupMemberRequest &request)
{
    auto outcome = MakeRequest(request, "AddGroupMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddGroupMemberResponse rsp = AddGroupMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddGroupMemberOutcome(rsp);
        else
            return AddGroupMemberOutcome(o.GetError());
    }
    else
    {
        return AddGroupMemberOutcome(outcome.GetError());
    }
}

void LcicClient::AddGroupMemberAsync(const AddGroupMemberRequest& request, const AddGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddGroupMemberRequest&;
    using Resp = AddGroupMemberResponse;

    DoRequestAsync<Req, Resp>(
        "AddGroupMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::AddGroupMemberOutcomeCallable LcicClient::AddGroupMemberCallable(const AddGroupMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddGroupMemberOutcome>>();
    AddGroupMemberAsync(
    request,
    [prom](
        const LcicClient*,
        const AddGroupMemberRequest&,
        AddGroupMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::BatchAddGroupMemberOutcome LcicClient::BatchAddGroupMember(const BatchAddGroupMemberRequest &request)
{
    auto outcome = MakeRequest(request, "BatchAddGroupMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchAddGroupMemberResponse rsp = BatchAddGroupMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchAddGroupMemberOutcome(rsp);
        else
            return BatchAddGroupMemberOutcome(o.GetError());
    }
    else
    {
        return BatchAddGroupMemberOutcome(outcome.GetError());
    }
}

void LcicClient::BatchAddGroupMemberAsync(const BatchAddGroupMemberRequest& request, const BatchAddGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchAddGroupMemberRequest&;
    using Resp = BatchAddGroupMemberResponse;

    DoRequestAsync<Req, Resp>(
        "BatchAddGroupMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::BatchAddGroupMemberOutcomeCallable LcicClient::BatchAddGroupMemberCallable(const BatchAddGroupMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchAddGroupMemberOutcome>>();
    BatchAddGroupMemberAsync(
    request,
    [prom](
        const LcicClient*,
        const BatchAddGroupMemberRequest&,
        BatchAddGroupMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::BatchCreateGroupWithMembersOutcome LcicClient::BatchCreateGroupWithMembers(const BatchCreateGroupWithMembersRequest &request)
{
    auto outcome = MakeRequest(request, "BatchCreateGroupWithMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchCreateGroupWithMembersResponse rsp = BatchCreateGroupWithMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchCreateGroupWithMembersOutcome(rsp);
        else
            return BatchCreateGroupWithMembersOutcome(o.GetError());
    }
    else
    {
        return BatchCreateGroupWithMembersOutcome(outcome.GetError());
    }
}

void LcicClient::BatchCreateGroupWithMembersAsync(const BatchCreateGroupWithMembersRequest& request, const BatchCreateGroupWithMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchCreateGroupWithMembersRequest&;
    using Resp = BatchCreateGroupWithMembersResponse;

    DoRequestAsync<Req, Resp>(
        "BatchCreateGroupWithMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::BatchCreateGroupWithMembersOutcomeCallable LcicClient::BatchCreateGroupWithMembersCallable(const BatchCreateGroupWithMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchCreateGroupWithMembersOutcome>>();
    BatchCreateGroupWithMembersAsync(
    request,
    [prom](
        const LcicClient*,
        const BatchCreateGroupWithMembersRequest&,
        BatchCreateGroupWithMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::BatchCreateRoomOutcome LcicClient::BatchCreateRoom(const BatchCreateRoomRequest &request)
{
    auto outcome = MakeRequest(request, "BatchCreateRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchCreateRoomResponse rsp = BatchCreateRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchCreateRoomOutcome(rsp);
        else
            return BatchCreateRoomOutcome(o.GetError());
    }
    else
    {
        return BatchCreateRoomOutcome(outcome.GetError());
    }
}

void LcicClient::BatchCreateRoomAsync(const BatchCreateRoomRequest& request, const BatchCreateRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchCreateRoomRequest&;
    using Resp = BatchCreateRoomResponse;

    DoRequestAsync<Req, Resp>(
        "BatchCreateRoom", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::BatchCreateRoomOutcomeCallable LcicClient::BatchCreateRoomCallable(const BatchCreateRoomRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchCreateRoomOutcome>>();
    BatchCreateRoomAsync(
    request,
    [prom](
        const LcicClient*,
        const BatchCreateRoomRequest&,
        BatchCreateRoomOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::BatchDeleteGroupMemberOutcome LcicClient::BatchDeleteGroupMember(const BatchDeleteGroupMemberRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteGroupMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteGroupMemberResponse rsp = BatchDeleteGroupMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteGroupMemberOutcome(rsp);
        else
            return BatchDeleteGroupMemberOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteGroupMemberOutcome(outcome.GetError());
    }
}

void LcicClient::BatchDeleteGroupMemberAsync(const BatchDeleteGroupMemberRequest& request, const BatchDeleteGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchDeleteGroupMemberRequest&;
    using Resp = BatchDeleteGroupMemberResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDeleteGroupMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::BatchDeleteGroupMemberOutcomeCallable LcicClient::BatchDeleteGroupMemberCallable(const BatchDeleteGroupMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDeleteGroupMemberOutcome>>();
    BatchDeleteGroupMemberAsync(
    request,
    [prom](
        const LcicClient*,
        const BatchDeleteGroupMemberRequest&,
        BatchDeleteGroupMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::BatchDeleteRecordOutcome LcicClient::BatchDeleteRecord(const BatchDeleteRecordRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteRecordResponse rsp = BatchDeleteRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteRecordOutcome(rsp);
        else
            return BatchDeleteRecordOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteRecordOutcome(outcome.GetError());
    }
}

void LcicClient::BatchDeleteRecordAsync(const BatchDeleteRecordRequest& request, const BatchDeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchDeleteRecordRequest&;
    using Resp = BatchDeleteRecordResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDeleteRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::BatchDeleteRecordOutcomeCallable LcicClient::BatchDeleteRecordCallable(const BatchDeleteRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDeleteRecordOutcome>>();
    BatchDeleteRecordAsync(
    request,
    [prom](
        const LcicClient*,
        const BatchDeleteRecordRequest&,
        BatchDeleteRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::BatchDescribeDocumentOutcome LcicClient::BatchDescribeDocument(const BatchDescribeDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDescribeDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDescribeDocumentResponse rsp = BatchDescribeDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDescribeDocumentOutcome(rsp);
        else
            return BatchDescribeDocumentOutcome(o.GetError());
    }
    else
    {
        return BatchDescribeDocumentOutcome(outcome.GetError());
    }
}

void LcicClient::BatchDescribeDocumentAsync(const BatchDescribeDocumentRequest& request, const BatchDescribeDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchDescribeDocumentRequest&;
    using Resp = BatchDescribeDocumentResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDescribeDocument", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::BatchDescribeDocumentOutcomeCallable LcicClient::BatchDescribeDocumentCallable(const BatchDescribeDocumentRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDescribeDocumentOutcome>>();
    BatchDescribeDocumentAsync(
    request,
    [prom](
        const LcicClient*,
        const BatchDescribeDocumentRequest&,
        BatchDescribeDocumentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::BatchGetPlaybackTokenOutcome LcicClient::BatchGetPlaybackToken(const BatchGetPlaybackTokenRequest &request)
{
    auto outcome = MakeRequest(request, "BatchGetPlaybackToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchGetPlaybackTokenResponse rsp = BatchGetPlaybackTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchGetPlaybackTokenOutcome(rsp);
        else
            return BatchGetPlaybackTokenOutcome(o.GetError());
    }
    else
    {
        return BatchGetPlaybackTokenOutcome(outcome.GetError());
    }
}

void LcicClient::BatchGetPlaybackTokenAsync(const BatchGetPlaybackTokenRequest& request, const BatchGetPlaybackTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchGetPlaybackTokenRequest&;
    using Resp = BatchGetPlaybackTokenResponse;

    DoRequestAsync<Req, Resp>(
        "BatchGetPlaybackToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::BatchGetPlaybackTokenOutcomeCallable LcicClient::BatchGetPlaybackTokenCallable(const BatchGetPlaybackTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchGetPlaybackTokenOutcome>>();
    BatchGetPlaybackTokenAsync(
    request,
    [prom](
        const LcicClient*,
        const BatchGetPlaybackTokenRequest&,
        BatchGetPlaybackTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::BatchRegisterOutcome LcicClient::BatchRegister(const BatchRegisterRequest &request)
{
    auto outcome = MakeRequest(request, "BatchRegister");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchRegisterResponse rsp = BatchRegisterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchRegisterOutcome(rsp);
        else
            return BatchRegisterOutcome(o.GetError());
    }
    else
    {
        return BatchRegisterOutcome(outcome.GetError());
    }
}

void LcicClient::BatchRegisterAsync(const BatchRegisterRequest& request, const BatchRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchRegisterRequest&;
    using Resp = BatchRegisterResponse;

    DoRequestAsync<Req, Resp>(
        "BatchRegister", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::BatchRegisterOutcomeCallable LcicClient::BatchRegisterCallable(const BatchRegisterRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchRegisterOutcome>>();
    BatchRegisterAsync(
    request,
    [prom](
        const LcicClient*,
        const BatchRegisterRequest&,
        BatchRegisterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::BindDocumentToRoomOutcome LcicClient::BindDocumentToRoom(const BindDocumentToRoomRequest &request)
{
    auto outcome = MakeRequest(request, "BindDocumentToRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindDocumentToRoomResponse rsp = BindDocumentToRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindDocumentToRoomOutcome(rsp);
        else
            return BindDocumentToRoomOutcome(o.GetError());
    }
    else
    {
        return BindDocumentToRoomOutcome(outcome.GetError());
    }
}

void LcicClient::BindDocumentToRoomAsync(const BindDocumentToRoomRequest& request, const BindDocumentToRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindDocumentToRoomRequest&;
    using Resp = BindDocumentToRoomResponse;

    DoRequestAsync<Req, Resp>(
        "BindDocumentToRoom", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::BindDocumentToRoomOutcomeCallable LcicClient::BindDocumentToRoomCallable(const BindDocumentToRoomRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindDocumentToRoomOutcome>>();
    BindDocumentToRoomAsync(
    request,
    [prom](
        const LcicClient*,
        const BindDocumentToRoomRequest&,
        BindDocumentToRoomOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::CreateDocumentOutcome LcicClient::CreateDocument(const CreateDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDocumentResponse rsp = CreateDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDocumentOutcome(rsp);
        else
            return CreateDocumentOutcome(o.GetError());
    }
    else
    {
        return CreateDocumentOutcome(outcome.GetError());
    }
}

void LcicClient::CreateDocumentAsync(const CreateDocumentRequest& request, const CreateDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDocumentRequest&;
    using Resp = CreateDocumentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDocument", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::CreateDocumentOutcomeCallable LcicClient::CreateDocumentCallable(const CreateDocumentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDocumentOutcome>>();
    CreateDocumentAsync(
    request,
    [prom](
        const LcicClient*,
        const CreateDocumentRequest&,
        CreateDocumentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::CreateGroupLiveCodesOutcome LcicClient::CreateGroupLiveCodes(const CreateGroupLiveCodesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGroupLiveCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGroupLiveCodesResponse rsp = CreateGroupLiveCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGroupLiveCodesOutcome(rsp);
        else
            return CreateGroupLiveCodesOutcome(o.GetError());
    }
    else
    {
        return CreateGroupLiveCodesOutcome(outcome.GetError());
    }
}

void LcicClient::CreateGroupLiveCodesAsync(const CreateGroupLiveCodesRequest& request, const CreateGroupLiveCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGroupLiveCodesRequest&;
    using Resp = CreateGroupLiveCodesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGroupLiveCodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::CreateGroupLiveCodesOutcomeCallable LcicClient::CreateGroupLiveCodesCallable(const CreateGroupLiveCodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGroupLiveCodesOutcome>>();
    CreateGroupLiveCodesAsync(
    request,
    [prom](
        const LcicClient*,
        const CreateGroupLiveCodesRequest&,
        CreateGroupLiveCodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::CreateGroupWithMembersOutcome LcicClient::CreateGroupWithMembers(const CreateGroupWithMembersRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGroupWithMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGroupWithMembersResponse rsp = CreateGroupWithMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGroupWithMembersOutcome(rsp);
        else
            return CreateGroupWithMembersOutcome(o.GetError());
    }
    else
    {
        return CreateGroupWithMembersOutcome(outcome.GetError());
    }
}

void LcicClient::CreateGroupWithMembersAsync(const CreateGroupWithMembersRequest& request, const CreateGroupWithMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGroupWithMembersRequest&;
    using Resp = CreateGroupWithMembersResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGroupWithMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::CreateGroupWithMembersOutcomeCallable LcicClient::CreateGroupWithMembersCallable(const CreateGroupWithMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGroupWithMembersOutcome>>();
    CreateGroupWithMembersAsync(
    request,
    [prom](
        const LcicClient*,
        const CreateGroupWithMembersRequest&,
        CreateGroupWithMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::CreateGroupWithSubGroupOutcome LcicClient::CreateGroupWithSubGroup(const CreateGroupWithSubGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGroupWithSubGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGroupWithSubGroupResponse rsp = CreateGroupWithSubGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGroupWithSubGroupOutcome(rsp);
        else
            return CreateGroupWithSubGroupOutcome(o.GetError());
    }
    else
    {
        return CreateGroupWithSubGroupOutcome(outcome.GetError());
    }
}

void LcicClient::CreateGroupWithSubGroupAsync(const CreateGroupWithSubGroupRequest& request, const CreateGroupWithSubGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGroupWithSubGroupRequest&;
    using Resp = CreateGroupWithSubGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGroupWithSubGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::CreateGroupWithSubGroupOutcomeCallable LcicClient::CreateGroupWithSubGroupCallable(const CreateGroupWithSubGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGroupWithSubGroupOutcome>>();
    CreateGroupWithSubGroupAsync(
    request,
    [prom](
        const LcicClient*,
        const CreateGroupWithSubGroupRequest&,
        CreateGroupWithSubGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::CreateRoomOutcome LcicClient::CreateRoom(const CreateRoomRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoomResponse rsp = CreateRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoomOutcome(rsp);
        else
            return CreateRoomOutcome(o.GetError());
    }
    else
    {
        return CreateRoomOutcome(outcome.GetError());
    }
}

void LcicClient::CreateRoomAsync(const CreateRoomRequest& request, const CreateRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRoomRequest&;
    using Resp = CreateRoomResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRoom", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::CreateRoomOutcomeCallable LcicClient::CreateRoomCallable(const CreateRoomRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRoomOutcome>>();
    CreateRoomAsync(
    request,
    [prom](
        const LcicClient*,
        const CreateRoomRequest&,
        CreateRoomOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::CreateSupervisorOutcome LcicClient::CreateSupervisor(const CreateSupervisorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSupervisor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSupervisorResponse rsp = CreateSupervisorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSupervisorOutcome(rsp);
        else
            return CreateSupervisorOutcome(o.GetError());
    }
    else
    {
        return CreateSupervisorOutcome(outcome.GetError());
    }
}

void LcicClient::CreateSupervisorAsync(const CreateSupervisorRequest& request, const CreateSupervisorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSupervisorRequest&;
    using Resp = CreateSupervisorResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSupervisor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::CreateSupervisorOutcomeCallable LcicClient::CreateSupervisorCallable(const CreateSupervisorRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSupervisorOutcome>>();
    CreateSupervisorAsync(
    request,
    [prom](
        const LcicClient*,
        const CreateSupervisorRequest&,
        CreateSupervisorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DeleteAppCustomContentOutcome LcicClient::DeleteAppCustomContent(const DeleteAppCustomContentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAppCustomContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAppCustomContentResponse rsp = DeleteAppCustomContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAppCustomContentOutcome(rsp);
        else
            return DeleteAppCustomContentOutcome(o.GetError());
    }
    else
    {
        return DeleteAppCustomContentOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteAppCustomContentAsync(const DeleteAppCustomContentRequest& request, const DeleteAppCustomContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAppCustomContentRequest&;
    using Resp = DeleteAppCustomContentResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAppCustomContent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DeleteAppCustomContentOutcomeCallable LcicClient::DeleteAppCustomContentCallable(const DeleteAppCustomContentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAppCustomContentOutcome>>();
    DeleteAppCustomContentAsync(
    request,
    [prom](
        const LcicClient*,
        const DeleteAppCustomContentRequest&,
        DeleteAppCustomContentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DeleteDocumentOutcome LcicClient::DeleteDocument(const DeleteDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDocumentResponse rsp = DeleteDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDocumentOutcome(rsp);
        else
            return DeleteDocumentOutcome(o.GetError());
    }
    else
    {
        return DeleteDocumentOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteDocumentAsync(const DeleteDocumentRequest& request, const DeleteDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDocumentRequest&;
    using Resp = DeleteDocumentResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDocument", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DeleteDocumentOutcomeCallable LcicClient::DeleteDocumentCallable(const DeleteDocumentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDocumentOutcome>>();
    DeleteDocumentAsync(
    request,
    [prom](
        const LcicClient*,
        const DeleteDocumentRequest&,
        DeleteDocumentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DeleteGroupOutcome LcicClient::DeleteGroup(const DeleteGroupRequest &request)
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

void LcicClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LcicClient::DeleteGroupOutcomeCallable LcicClient::DeleteGroupCallable(const DeleteGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGroupOutcome>>();
    DeleteGroupAsync(
    request,
    [prom](
        const LcicClient*,
        const DeleteGroupRequest&,
        DeleteGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DeleteGroupMemberOutcome LcicClient::DeleteGroupMember(const DeleteGroupMemberRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGroupMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGroupMemberResponse rsp = DeleteGroupMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGroupMemberOutcome(rsp);
        else
            return DeleteGroupMemberOutcome(o.GetError());
    }
    else
    {
        return DeleteGroupMemberOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteGroupMemberAsync(const DeleteGroupMemberRequest& request, const DeleteGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGroupMemberRequest&;
    using Resp = DeleteGroupMemberResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGroupMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DeleteGroupMemberOutcomeCallable LcicClient::DeleteGroupMemberCallable(const DeleteGroupMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGroupMemberOutcome>>();
    DeleteGroupMemberAsync(
    request,
    [prom](
        const LcicClient*,
        const DeleteGroupMemberRequest&,
        DeleteGroupMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DeletePlaybackItemOutcome LcicClient::DeletePlaybackItem(const DeletePlaybackItemRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePlaybackItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePlaybackItemResponse rsp = DeletePlaybackItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePlaybackItemOutcome(rsp);
        else
            return DeletePlaybackItemOutcome(o.GetError());
    }
    else
    {
        return DeletePlaybackItemOutcome(outcome.GetError());
    }
}

void LcicClient::DeletePlaybackItemAsync(const DeletePlaybackItemRequest& request, const DeletePlaybackItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePlaybackItemRequest&;
    using Resp = DeletePlaybackItemResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePlaybackItem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DeletePlaybackItemOutcomeCallable LcicClient::DeletePlaybackItemCallable(const DeletePlaybackItemRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePlaybackItemOutcome>>();
    DeletePlaybackItemAsync(
    request,
    [prom](
        const LcicClient*,
        const DeletePlaybackItemRequest&,
        DeletePlaybackItemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DeleteRecordOutcome LcicClient::DeleteRecord(const DeleteRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordResponse rsp = DeleteRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordOutcome(rsp);
        else
            return DeleteRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteRecordAsync(const DeleteRecordRequest& request, const DeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRecordRequest&;
    using Resp = DeleteRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DeleteRecordOutcomeCallable LcicClient::DeleteRecordCallable(const DeleteRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRecordOutcome>>();
    DeleteRecordAsync(
    request,
    [prom](
        const LcicClient*,
        const DeleteRecordRequest&,
        DeleteRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DeleteRoomOutcome LcicClient::DeleteRoom(const DeleteRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoomResponse rsp = DeleteRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoomOutcome(rsp);
        else
            return DeleteRoomOutcome(o.GetError());
    }
    else
    {
        return DeleteRoomOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteRoomAsync(const DeleteRoomRequest& request, const DeleteRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRoomRequest&;
    using Resp = DeleteRoomResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRoom", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DeleteRoomOutcomeCallable LcicClient::DeleteRoomCallable(const DeleteRoomRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRoomOutcome>>();
    DeleteRoomAsync(
    request,
    [prom](
        const LcicClient*,
        const DeleteRoomRequest&,
        DeleteRoomOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DeleteSupervisorOutcome LcicClient::DeleteSupervisor(const DeleteSupervisorRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSupervisor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSupervisorResponse rsp = DeleteSupervisorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSupervisorOutcome(rsp);
        else
            return DeleteSupervisorOutcome(o.GetError());
    }
    else
    {
        return DeleteSupervisorOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteSupervisorAsync(const DeleteSupervisorRequest& request, const DeleteSupervisorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSupervisorRequest&;
    using Resp = DeleteSupervisorResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSupervisor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DeleteSupervisorOutcomeCallable LcicClient::DeleteSupervisorCallable(const DeleteSupervisorRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSupervisorOutcome>>();
    DeleteSupervisorAsync(
    request,
    [prom](
        const LcicClient*,
        const DeleteSupervisorRequest&,
        DeleteSupervisorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DeleteUserOutcome LcicClient::DeleteUser(const DeleteUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserResponse rsp = DeleteUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserOutcome(rsp);
        else
            return DeleteUserOutcome(o.GetError());
    }
    else
    {
        return DeleteUserOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUserRequest&;
    using Resp = DeleteUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DeleteUserOutcomeCallable LcicClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserOutcome>>();
    DeleteUserAsync(
    request,
    [prom](
        const LcicClient*,
        const DeleteUserRequest&,
        DeleteUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DeleteWhiteBoardSnapshotOutcome LcicClient::DeleteWhiteBoardSnapshot(const DeleteWhiteBoardSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWhiteBoardSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWhiteBoardSnapshotResponse rsp = DeleteWhiteBoardSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWhiteBoardSnapshotOutcome(rsp);
        else
            return DeleteWhiteBoardSnapshotOutcome(o.GetError());
    }
    else
    {
        return DeleteWhiteBoardSnapshotOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteWhiteBoardSnapshotAsync(const DeleteWhiteBoardSnapshotRequest& request, const DeleteWhiteBoardSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWhiteBoardSnapshotRequest&;
    using Resp = DeleteWhiteBoardSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWhiteBoardSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DeleteWhiteBoardSnapshotOutcomeCallable LcicClient::DeleteWhiteBoardSnapshotCallable(const DeleteWhiteBoardSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWhiteBoardSnapshotOutcome>>();
    DeleteWhiteBoardSnapshotAsync(
    request,
    [prom](
        const LcicClient*,
        const DeleteWhiteBoardSnapshotRequest&,
        DeleteWhiteBoardSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeAnswerListOutcome LcicClient::DescribeAnswerList(const DescribeAnswerListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAnswerList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAnswerListResponse rsp = DescribeAnswerListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAnswerListOutcome(rsp);
        else
            return DescribeAnswerListOutcome(o.GetError());
    }
    else
    {
        return DescribeAnswerListOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeAnswerListAsync(const DescribeAnswerListRequest& request, const DescribeAnswerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAnswerListRequest&;
    using Resp = DescribeAnswerListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAnswerList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeAnswerListOutcomeCallable LcicClient::DescribeAnswerListCallable(const DescribeAnswerListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAnswerListOutcome>>();
    DescribeAnswerListAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeAnswerListRequest&,
        DescribeAnswerListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeAppDetailOutcome LcicClient::DescribeAppDetail(const DescribeAppDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppDetailResponse rsp = DescribeAppDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppDetailOutcome(rsp);
        else
            return DescribeAppDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAppDetailOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeAppDetailAsync(const DescribeAppDetailRequest& request, const DescribeAppDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppDetailRequest&;
    using Resp = DescribeAppDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeAppDetailOutcomeCallable LcicClient::DescribeAppDetailCallable(const DescribeAppDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppDetailOutcome>>();
    DescribeAppDetailAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeAppDetailRequest&,
        DescribeAppDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeCurrentMemberListOutcome LcicClient::DescribeCurrentMemberList(const DescribeCurrentMemberListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCurrentMemberList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCurrentMemberListResponse rsp = DescribeCurrentMemberListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCurrentMemberListOutcome(rsp);
        else
            return DescribeCurrentMemberListOutcome(o.GetError());
    }
    else
    {
        return DescribeCurrentMemberListOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeCurrentMemberListAsync(const DescribeCurrentMemberListRequest& request, const DescribeCurrentMemberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCurrentMemberListRequest&;
    using Resp = DescribeCurrentMemberListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCurrentMemberList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeCurrentMemberListOutcomeCallable LcicClient::DescribeCurrentMemberListCallable(const DescribeCurrentMemberListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCurrentMemberListOutcome>>();
    DescribeCurrentMemberListAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeCurrentMemberListRequest&,
        DescribeCurrentMemberListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeDeveloperOutcome LcicClient::DescribeDeveloper(const DescribeDeveloperRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeveloper");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeveloperResponse rsp = DescribeDeveloperResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeveloperOutcome(rsp);
        else
            return DescribeDeveloperOutcome(o.GetError());
    }
    else
    {
        return DescribeDeveloperOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeDeveloperAsync(const DescribeDeveloperRequest& request, const DescribeDeveloperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeveloperRequest&;
    using Resp = DescribeDeveloperResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeveloper", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeDeveloperOutcomeCallable LcicClient::DescribeDeveloperCallable(const DescribeDeveloperRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeveloperOutcome>>();
    DescribeDeveloperAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeDeveloperRequest&,
        DescribeDeveloperOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeDocumentOutcome LcicClient::DescribeDocument(const DescribeDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDocumentResponse rsp = DescribeDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDocumentOutcome(rsp);
        else
            return DescribeDocumentOutcome(o.GetError());
    }
    else
    {
        return DescribeDocumentOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeDocumentAsync(const DescribeDocumentRequest& request, const DescribeDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDocumentRequest&;
    using Resp = DescribeDocumentResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDocument", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeDocumentOutcomeCallable LcicClient::DescribeDocumentCallable(const DescribeDocumentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDocumentOutcome>>();
    DescribeDocumentAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeDocumentRequest&,
        DescribeDocumentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeDocumentsOutcome LcicClient::DescribeDocuments(const DescribeDocumentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDocuments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDocumentsResponse rsp = DescribeDocumentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDocumentsOutcome(rsp);
        else
            return DescribeDocumentsOutcome(o.GetError());
    }
    else
    {
        return DescribeDocumentsOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeDocumentsAsync(const DescribeDocumentsRequest& request, const DescribeDocumentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDocumentsRequest&;
    using Resp = DescribeDocumentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDocuments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeDocumentsOutcomeCallable LcicClient::DescribeDocumentsCallable(const DescribeDocumentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDocumentsOutcome>>();
    DescribeDocumentsAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeDocumentsRequest&,
        DescribeDocumentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeDocumentsByRoomOutcome LcicClient::DescribeDocumentsByRoom(const DescribeDocumentsByRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDocumentsByRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDocumentsByRoomResponse rsp = DescribeDocumentsByRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDocumentsByRoomOutcome(rsp);
        else
            return DescribeDocumentsByRoomOutcome(o.GetError());
    }
    else
    {
        return DescribeDocumentsByRoomOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeDocumentsByRoomAsync(const DescribeDocumentsByRoomRequest& request, const DescribeDocumentsByRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDocumentsByRoomRequest&;
    using Resp = DescribeDocumentsByRoomResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDocumentsByRoom", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeDocumentsByRoomOutcomeCallable LcicClient::DescribeDocumentsByRoomCallable(const DescribeDocumentsByRoomRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDocumentsByRoomOutcome>>();
    DescribeDocumentsByRoomAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeDocumentsByRoomRequest&,
        DescribeDocumentsByRoomOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeGroupOutcome LcicClient::DescribeGroup(const DescribeGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupResponse rsp = DescribeGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupOutcome(rsp);
        else
            return DescribeGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeGroupAsync(const DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupRequest&;
    using Resp = DescribeGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeGroupOutcomeCallable LcicClient::DescribeGroupCallable(const DescribeGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupOutcome>>();
    DescribeGroupAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeGroupRequest&,
        DescribeGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeGroupListOutcome LcicClient::DescribeGroupList(const DescribeGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupListResponse rsp = DescribeGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupListOutcome(rsp);
        else
            return DescribeGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupListOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeGroupListAsync(const DescribeGroupListRequest& request, const DescribeGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupListRequest&;
    using Resp = DescribeGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeGroupListOutcomeCallable LcicClient::DescribeGroupListCallable(const DescribeGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupListOutcome>>();
    DescribeGroupListAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeGroupListRequest&,
        DescribeGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeGroupLiveCodesOutcome LcicClient::DescribeGroupLiveCodes(const DescribeGroupLiveCodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupLiveCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupLiveCodesResponse rsp = DescribeGroupLiveCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupLiveCodesOutcome(rsp);
        else
            return DescribeGroupLiveCodesOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupLiveCodesOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeGroupLiveCodesAsync(const DescribeGroupLiveCodesRequest& request, const DescribeGroupLiveCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupLiveCodesRequest&;
    using Resp = DescribeGroupLiveCodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupLiveCodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeGroupLiveCodesOutcomeCallable LcicClient::DescribeGroupLiveCodesCallable(const DescribeGroupLiveCodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupLiveCodesOutcome>>();
    DescribeGroupLiveCodesAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeGroupLiveCodesRequest&,
        DescribeGroupLiveCodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeGroupMemberListOutcome LcicClient::DescribeGroupMemberList(const DescribeGroupMemberListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupMemberList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupMemberListResponse rsp = DescribeGroupMemberListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupMemberListOutcome(rsp);
        else
            return DescribeGroupMemberListOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupMemberListOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeGroupMemberListAsync(const DescribeGroupMemberListRequest& request, const DescribeGroupMemberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupMemberListRequest&;
    using Resp = DescribeGroupMemberListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupMemberList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeGroupMemberListOutcomeCallable LcicClient::DescribeGroupMemberListCallable(const DescribeGroupMemberListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupMemberListOutcome>>();
    DescribeGroupMemberListAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeGroupMemberListRequest&,
        DescribeGroupMemberListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeMarqueeOutcome LcicClient::DescribeMarquee(const DescribeMarqueeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMarquee");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMarqueeResponse rsp = DescribeMarqueeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMarqueeOutcome(rsp);
        else
            return DescribeMarqueeOutcome(o.GetError());
    }
    else
    {
        return DescribeMarqueeOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeMarqueeAsync(const DescribeMarqueeRequest& request, const DescribeMarqueeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMarqueeRequest&;
    using Resp = DescribeMarqueeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMarquee", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeMarqueeOutcomeCallable LcicClient::DescribeMarqueeCallable(const DescribeMarqueeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMarqueeOutcome>>();
    DescribeMarqueeAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeMarqueeRequest&,
        DescribeMarqueeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribePlayRecordsOutcome LcicClient::DescribePlayRecords(const DescribePlayRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlayRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlayRecordsResponse rsp = DescribePlayRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlayRecordsOutcome(rsp);
        else
            return DescribePlayRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribePlayRecordsOutcome(outcome.GetError());
    }
}

void LcicClient::DescribePlayRecordsAsync(const DescribePlayRecordsRequest& request, const DescribePlayRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePlayRecordsRequest&;
    using Resp = DescribePlayRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePlayRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribePlayRecordsOutcomeCallable LcicClient::DescribePlayRecordsCallable(const DescribePlayRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePlayRecordsOutcome>>();
    DescribePlayRecordsAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribePlayRecordsRequest&,
        DescribePlayRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribePlaybackListOutcome LcicClient::DescribePlaybackList(const DescribePlaybackListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlaybackList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlaybackListResponse rsp = DescribePlaybackListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlaybackListOutcome(rsp);
        else
            return DescribePlaybackListOutcome(o.GetError());
    }
    else
    {
        return DescribePlaybackListOutcome(outcome.GetError());
    }
}

void LcicClient::DescribePlaybackListAsync(const DescribePlaybackListRequest& request, const DescribePlaybackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePlaybackListRequest&;
    using Resp = DescribePlaybackListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePlaybackList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribePlaybackListOutcomeCallable LcicClient::DescribePlaybackListCallable(const DescribePlaybackListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePlaybackListOutcome>>();
    DescribePlaybackListAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribePlaybackListRequest&,
        DescribePlaybackListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeQuestionListOutcome LcicClient::DescribeQuestionList(const DescribeQuestionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQuestionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQuestionListResponse rsp = DescribeQuestionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQuestionListOutcome(rsp);
        else
            return DescribeQuestionListOutcome(o.GetError());
    }
    else
    {
        return DescribeQuestionListOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeQuestionListAsync(const DescribeQuestionListRequest& request, const DescribeQuestionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQuestionListRequest&;
    using Resp = DescribeQuestionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQuestionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeQuestionListOutcomeCallable LcicClient::DescribeQuestionListCallable(const DescribeQuestionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQuestionListOutcome>>();
    DescribeQuestionListAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeQuestionListRequest&,
        DescribeQuestionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeRecordOutcome LcicClient::DescribeRecord(const DescribeRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordResponse rsp = DescribeRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordOutcome(rsp);
        else
            return DescribeRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeRecordAsync(const DescribeRecordRequest& request, const DescribeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordRequest&;
    using Resp = DescribeRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeRecordOutcomeCallable LcicClient::DescribeRecordCallable(const DescribeRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordOutcome>>();
    DescribeRecordAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeRecordRequest&,
        DescribeRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeRecordStreamOutcome LcicClient::DescribeRecordStream(const DescribeRecordStreamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordStreamResponse rsp = DescribeRecordStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordStreamOutcome(rsp);
        else
            return DescribeRecordStreamOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordStreamOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeRecordStreamAsync(const DescribeRecordStreamRequest& request, const DescribeRecordStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordStreamRequest&;
    using Resp = DescribeRecordStreamResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeRecordStreamOutcomeCallable LcicClient::DescribeRecordStreamCallable(const DescribeRecordStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordStreamOutcome>>();
    DescribeRecordStreamAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeRecordStreamRequest&,
        DescribeRecordStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeRecordTaskOutcome LcicClient::DescribeRecordTask(const DescribeRecordTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordTaskResponse rsp = DescribeRecordTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordTaskOutcome(rsp);
        else
            return DescribeRecordTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordTaskOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeRecordTaskAsync(const DescribeRecordTaskRequest& request, const DescribeRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordTaskRequest&;
    using Resp = DescribeRecordTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeRecordTaskOutcomeCallable LcicClient::DescribeRecordTaskCallable(const DescribeRecordTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordTaskOutcome>>();
    DescribeRecordTaskAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeRecordTaskRequest&,
        DescribeRecordTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeRoomOutcome LcicClient::DescribeRoom(const DescribeRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomResponse rsp = DescribeRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomOutcome(rsp);
        else
            return DescribeRoomOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeRoomAsync(const DescribeRoomRequest& request, const DescribeRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRoomRequest&;
    using Resp = DescribeRoomResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoom", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeRoomOutcomeCallable LcicClient::DescribeRoomCallable(const DescribeRoomRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoomOutcome>>();
    DescribeRoomAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeRoomRequest&,
        DescribeRoomOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeRoomForbiddenUserOutcome LcicClient::DescribeRoomForbiddenUser(const DescribeRoomForbiddenUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoomForbiddenUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomForbiddenUserResponse rsp = DescribeRoomForbiddenUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomForbiddenUserOutcome(rsp);
        else
            return DescribeRoomForbiddenUserOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomForbiddenUserOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeRoomForbiddenUserAsync(const DescribeRoomForbiddenUserRequest& request, const DescribeRoomForbiddenUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRoomForbiddenUserRequest&;
    using Resp = DescribeRoomForbiddenUserResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoomForbiddenUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeRoomForbiddenUserOutcomeCallable LcicClient::DescribeRoomForbiddenUserCallable(const DescribeRoomForbiddenUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoomForbiddenUserOutcome>>();
    DescribeRoomForbiddenUserAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeRoomForbiddenUserRequest&,
        DescribeRoomForbiddenUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeRoomStatisticsOutcome LcicClient::DescribeRoomStatistics(const DescribeRoomStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoomStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomStatisticsResponse rsp = DescribeRoomStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomStatisticsOutcome(rsp);
        else
            return DescribeRoomStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomStatisticsOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeRoomStatisticsAsync(const DescribeRoomStatisticsRequest& request, const DescribeRoomStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRoomStatisticsRequest&;
    using Resp = DescribeRoomStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoomStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeRoomStatisticsOutcomeCallable LcicClient::DescribeRoomStatisticsCallable(const DescribeRoomStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoomStatisticsOutcome>>();
    DescribeRoomStatisticsAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeRoomStatisticsRequest&,
        DescribeRoomStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeScoreListOutcome LcicClient::DescribeScoreList(const DescribeScoreListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScoreListResponse rsp = DescribeScoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScoreListOutcome(rsp);
        else
            return DescribeScoreListOutcome(o.GetError());
    }
    else
    {
        return DescribeScoreListOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeScoreListAsync(const DescribeScoreListRequest& request, const DescribeScoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScoreListRequest&;
    using Resp = DescribeScoreListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScoreList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeScoreListOutcomeCallable LcicClient::DescribeScoreListCallable(const DescribeScoreListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScoreListOutcome>>();
    DescribeScoreListAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeScoreListRequest&,
        DescribeScoreListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeSdkAppIdUsersOutcome LcicClient::DescribeSdkAppIdUsers(const DescribeSdkAppIdUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSdkAppIdUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSdkAppIdUsersResponse rsp = DescribeSdkAppIdUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSdkAppIdUsersOutcome(rsp);
        else
            return DescribeSdkAppIdUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeSdkAppIdUsersOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeSdkAppIdUsersAsync(const DescribeSdkAppIdUsersRequest& request, const DescribeSdkAppIdUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSdkAppIdUsersRequest&;
    using Resp = DescribeSdkAppIdUsersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSdkAppIdUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeSdkAppIdUsersOutcomeCallable LcicClient::DescribeSdkAppIdUsersCallable(const DescribeSdkAppIdUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSdkAppIdUsersOutcome>>();
    DescribeSdkAppIdUsersAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeSdkAppIdUsersRequest&,
        DescribeSdkAppIdUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeSupervisorsOutcome LcicClient::DescribeSupervisors(const DescribeSupervisorsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSupervisors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSupervisorsResponse rsp = DescribeSupervisorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSupervisorsOutcome(rsp);
        else
            return DescribeSupervisorsOutcome(o.GetError());
    }
    else
    {
        return DescribeSupervisorsOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeSupervisorsAsync(const DescribeSupervisorsRequest& request, const DescribeSupervisorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSupervisorsRequest&;
    using Resp = DescribeSupervisorsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSupervisors", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeSupervisorsOutcomeCallable LcicClient::DescribeSupervisorsCallable(const DescribeSupervisorsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSupervisorsOutcome>>();
    DescribeSupervisorsAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeSupervisorsRequest&,
        DescribeSupervisorsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeUserOutcome LcicClient::DescribeUser(const DescribeUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserResponse rsp = DescribeUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserOutcome(rsp);
        else
            return DescribeUserOutcome(o.GetError());
    }
    else
    {
        return DescribeUserOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserRequest&;
    using Resp = DescribeUserResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeUserOutcomeCallable LcicClient::DescribeUserCallable(const DescribeUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserOutcome>>();
    DescribeUserAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeUserRequest&,
        DescribeUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeUserDetailOutcome LcicClient::DescribeUserDetail(const DescribeUserDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserDetailResponse rsp = DescribeUserDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserDetailOutcome(rsp);
        else
            return DescribeUserDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeUserDetailOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeUserDetailAsync(const DescribeUserDetailRequest& request, const DescribeUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserDetailRequest&;
    using Resp = DescribeUserDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeUserDetailOutcomeCallable LcicClient::DescribeUserDetailCallable(const DescribeUserDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserDetailOutcome>>();
    DescribeUserDetailAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeUserDetailRequest&,
        DescribeUserDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::DescribeWhiteBoardSnapshotOutcome LcicClient::DescribeWhiteBoardSnapshot(const DescribeWhiteBoardSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteBoardSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteBoardSnapshotResponse rsp = DescribeWhiteBoardSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteBoardSnapshotOutcome(rsp);
        else
            return DescribeWhiteBoardSnapshotOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteBoardSnapshotOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeWhiteBoardSnapshotAsync(const DescribeWhiteBoardSnapshotRequest& request, const DescribeWhiteBoardSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWhiteBoardSnapshotRequest&;
    using Resp = DescribeWhiteBoardSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWhiteBoardSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::DescribeWhiteBoardSnapshotOutcomeCallable LcicClient::DescribeWhiteBoardSnapshotCallable(const DescribeWhiteBoardSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWhiteBoardSnapshotOutcome>>();
    DescribeWhiteBoardSnapshotAsync(
    request,
    [prom](
        const LcicClient*,
        const DescribeWhiteBoardSnapshotRequest&,
        DescribeWhiteBoardSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::EndRoomOutcome LcicClient::EndRoom(const EndRoomRequest &request)
{
    auto outcome = MakeRequest(request, "EndRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EndRoomResponse rsp = EndRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EndRoomOutcome(rsp);
        else
            return EndRoomOutcome(o.GetError());
    }
    else
    {
        return EndRoomOutcome(outcome.GetError());
    }
}

void LcicClient::EndRoomAsync(const EndRoomRequest& request, const EndRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EndRoomRequest&;
    using Resp = EndRoomResponse;

    DoRequestAsync<Req, Resp>(
        "EndRoom", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::EndRoomOutcomeCallable LcicClient::EndRoomCallable(const EndRoomRequest &request)
{
    const auto prom = std::make_shared<std::promise<EndRoomOutcome>>();
    EndRoomAsync(
    request,
    [prom](
        const LcicClient*,
        const EndRoomRequest&,
        EndRoomOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::ForbidSendMsgOutcome LcicClient::ForbidSendMsg(const ForbidSendMsgRequest &request)
{
    auto outcome = MakeRequest(request, "ForbidSendMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForbidSendMsgResponse rsp = ForbidSendMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForbidSendMsgOutcome(rsp);
        else
            return ForbidSendMsgOutcome(o.GetError());
    }
    else
    {
        return ForbidSendMsgOutcome(outcome.GetError());
    }
}

void LcicClient::ForbidSendMsgAsync(const ForbidSendMsgRequest& request, const ForbidSendMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ForbidSendMsgRequest&;
    using Resp = ForbidSendMsgResponse;

    DoRequestAsync<Req, Resp>(
        "ForbidSendMsg", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::ForbidSendMsgOutcomeCallable LcicClient::ForbidSendMsgCallable(const ForbidSendMsgRequest &request)
{
    const auto prom = std::make_shared<std::promise<ForbidSendMsgOutcome>>();
    ForbidSendMsgAsync(
    request,
    [prom](
        const LcicClient*,
        const ForbidSendMsgRequest&,
        ForbidSendMsgOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::GetPlaybackTokenOutcome LcicClient::GetPlaybackToken(const GetPlaybackTokenRequest &request)
{
    auto outcome = MakeRequest(request, "GetPlaybackToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPlaybackTokenResponse rsp = GetPlaybackTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPlaybackTokenOutcome(rsp);
        else
            return GetPlaybackTokenOutcome(o.GetError());
    }
    else
    {
        return GetPlaybackTokenOutcome(outcome.GetError());
    }
}

void LcicClient::GetPlaybackTokenAsync(const GetPlaybackTokenRequest& request, const GetPlaybackTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPlaybackTokenRequest&;
    using Resp = GetPlaybackTokenResponse;

    DoRequestAsync<Req, Resp>(
        "GetPlaybackToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::GetPlaybackTokenOutcomeCallable LcicClient::GetPlaybackTokenCallable(const GetPlaybackTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPlaybackTokenOutcome>>();
    GetPlaybackTokenAsync(
    request,
    [prom](
        const LcicClient*,
        const GetPlaybackTokenRequest&,
        GetPlaybackTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::GetRoomEventOutcome LcicClient::GetRoomEvent(const GetRoomEventRequest &request)
{
    auto outcome = MakeRequest(request, "GetRoomEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRoomEventResponse rsp = GetRoomEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRoomEventOutcome(rsp);
        else
            return GetRoomEventOutcome(o.GetError());
    }
    else
    {
        return GetRoomEventOutcome(outcome.GetError());
    }
}

void LcicClient::GetRoomEventAsync(const GetRoomEventRequest& request, const GetRoomEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRoomEventRequest&;
    using Resp = GetRoomEventResponse;

    DoRequestAsync<Req, Resp>(
        "GetRoomEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::GetRoomEventOutcomeCallable LcicClient::GetRoomEventCallable(const GetRoomEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRoomEventOutcome>>();
    GetRoomEventAsync(
    request,
    [prom](
        const LcicClient*,
        const GetRoomEventRequest&,
        GetRoomEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::GetRoomMessageOutcome LcicClient::GetRoomMessage(const GetRoomMessageRequest &request)
{
    auto outcome = MakeRequest(request, "GetRoomMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRoomMessageResponse rsp = GetRoomMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRoomMessageOutcome(rsp);
        else
            return GetRoomMessageOutcome(o.GetError());
    }
    else
    {
        return GetRoomMessageOutcome(outcome.GetError());
    }
}

void LcicClient::GetRoomMessageAsync(const GetRoomMessageRequest& request, const GetRoomMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRoomMessageRequest&;
    using Resp = GetRoomMessageResponse;

    DoRequestAsync<Req, Resp>(
        "GetRoomMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::GetRoomMessageOutcomeCallable LcicClient::GetRoomMessageCallable(const GetRoomMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRoomMessageOutcome>>();
    GetRoomMessageAsync(
    request,
    [prom](
        const LcicClient*,
        const GetRoomMessageRequest&,
        GetRoomMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::GetRoomsOutcome LcicClient::GetRooms(const GetRoomsRequest &request)
{
    auto outcome = MakeRequest(request, "GetRooms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRoomsResponse rsp = GetRoomsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRoomsOutcome(rsp);
        else
            return GetRoomsOutcome(o.GetError());
    }
    else
    {
        return GetRoomsOutcome(outcome.GetError());
    }
}

void LcicClient::GetRoomsAsync(const GetRoomsRequest& request, const GetRoomsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRoomsRequest&;
    using Resp = GetRoomsResponse;

    DoRequestAsync<Req, Resp>(
        "GetRooms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::GetRoomsOutcomeCallable LcicClient::GetRoomsCallable(const GetRoomsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRoomsOutcome>>();
    GetRoomsAsync(
    request,
    [prom](
        const LcicClient*,
        const GetRoomsRequest&,
        GetRoomsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::GetWatermarkOutcome LcicClient::GetWatermark(const GetWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "GetWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWatermarkResponse rsp = GetWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWatermarkOutcome(rsp);
        else
            return GetWatermarkOutcome(o.GetError());
    }
    else
    {
        return GetWatermarkOutcome(outcome.GetError());
    }
}

void LcicClient::GetWatermarkAsync(const GetWatermarkRequest& request, const GetWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetWatermarkRequest&;
    using Resp = GetWatermarkResponse;

    DoRequestAsync<Req, Resp>(
        "GetWatermark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::GetWatermarkOutcomeCallable LcicClient::GetWatermarkCallable(const GetWatermarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetWatermarkOutcome>>();
    GetWatermarkAsync(
    request,
    [prom](
        const LcicClient*,
        const GetWatermarkRequest&,
        GetWatermarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::KickUserFromRoomOutcome LcicClient::KickUserFromRoom(const KickUserFromRoomRequest &request)
{
    auto outcome = MakeRequest(request, "KickUserFromRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KickUserFromRoomResponse rsp = KickUserFromRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KickUserFromRoomOutcome(rsp);
        else
            return KickUserFromRoomOutcome(o.GetError());
    }
    else
    {
        return KickUserFromRoomOutcome(outcome.GetError());
    }
}

void LcicClient::KickUserFromRoomAsync(const KickUserFromRoomRequest& request, const KickUserFromRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const KickUserFromRoomRequest&;
    using Resp = KickUserFromRoomResponse;

    DoRequestAsync<Req, Resp>(
        "KickUserFromRoom", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::KickUserFromRoomOutcomeCallable LcicClient::KickUserFromRoomCallable(const KickUserFromRoomRequest &request)
{
    const auto prom = std::make_shared<std::promise<KickUserFromRoomOutcome>>();
    KickUserFromRoomAsync(
    request,
    [prom](
        const LcicClient*,
        const KickUserFromRoomRequest&,
        KickUserFromRoomOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::LoginOriginIdOutcome LcicClient::LoginOriginId(const LoginOriginIdRequest &request)
{
    auto outcome = MakeRequest(request, "LoginOriginId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LoginOriginIdResponse rsp = LoginOriginIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LoginOriginIdOutcome(rsp);
        else
            return LoginOriginIdOutcome(o.GetError());
    }
    else
    {
        return LoginOriginIdOutcome(outcome.GetError());
    }
}

void LcicClient::LoginOriginIdAsync(const LoginOriginIdRequest& request, const LoginOriginIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const LoginOriginIdRequest&;
    using Resp = LoginOriginIdResponse;

    DoRequestAsync<Req, Resp>(
        "LoginOriginId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::LoginOriginIdOutcomeCallable LcicClient::LoginOriginIdCallable(const LoginOriginIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<LoginOriginIdOutcome>>();
    LoginOriginIdAsync(
    request,
    [prom](
        const LcicClient*,
        const LoginOriginIdRequest&,
        LoginOriginIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::LoginUserOutcome LcicClient::LoginUser(const LoginUserRequest &request)
{
    auto outcome = MakeRequest(request, "LoginUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LoginUserResponse rsp = LoginUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LoginUserOutcome(rsp);
        else
            return LoginUserOutcome(o.GetError());
    }
    else
    {
        return LoginUserOutcome(outcome.GetError());
    }
}

void LcicClient::LoginUserAsync(const LoginUserRequest& request, const LoginUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const LoginUserRequest&;
    using Resp = LoginUserResponse;

    DoRequestAsync<Req, Resp>(
        "LoginUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::LoginUserOutcomeCallable LcicClient::LoginUserCallable(const LoginUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<LoginUserOutcome>>();
    LoginUserAsync(
    request,
    [prom](
        const LcicClient*,
        const LoginUserRequest&,
        LoginUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::ModifyAppOutcome LcicClient::ModifyApp(const ModifyAppRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAppResponse rsp = ModifyAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAppOutcome(rsp);
        else
            return ModifyAppOutcome(o.GetError());
    }
    else
    {
        return ModifyAppOutcome(outcome.GetError());
    }
}

void LcicClient::ModifyAppAsync(const ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAppRequest&;
    using Resp = ModifyAppResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::ModifyAppOutcomeCallable LcicClient::ModifyAppCallable(const ModifyAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAppOutcome>>();
    ModifyAppAsync(
    request,
    [prom](
        const LcicClient*,
        const ModifyAppRequest&,
        ModifyAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::ModifyGroupOutcome LcicClient::ModifyGroup(const ModifyGroupRequest &request)
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

void LcicClient::ModifyGroupAsync(const ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LcicClient::ModifyGroupOutcomeCallable LcicClient::ModifyGroupCallable(const ModifyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGroupOutcome>>();
    ModifyGroupAsync(
    request,
    [prom](
        const LcicClient*,
        const ModifyGroupRequest&,
        ModifyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::ModifyRoomOutcome LcicClient::ModifyRoom(const ModifyRoomRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoomResponse rsp = ModifyRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoomOutcome(rsp);
        else
            return ModifyRoomOutcome(o.GetError());
    }
    else
    {
        return ModifyRoomOutcome(outcome.GetError());
    }
}

void LcicClient::ModifyRoomAsync(const ModifyRoomRequest& request, const ModifyRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRoomRequest&;
    using Resp = ModifyRoomResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRoom", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::ModifyRoomOutcomeCallable LcicClient::ModifyRoomCallable(const ModifyRoomRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRoomOutcome>>();
    ModifyRoomAsync(
    request,
    [prom](
        const LcicClient*,
        const ModifyRoomRequest&,
        ModifyRoomOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::ModifyUserProfileOutcome LcicClient::ModifyUserProfile(const ModifyUserProfileRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserProfile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserProfileResponse rsp = ModifyUserProfileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserProfileOutcome(rsp);
        else
            return ModifyUserProfileOutcome(o.GetError());
    }
    else
    {
        return ModifyUserProfileOutcome(outcome.GetError());
    }
}

void LcicClient::ModifyUserProfileAsync(const ModifyUserProfileRequest& request, const ModifyUserProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserProfileRequest&;
    using Resp = ModifyUserProfileResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserProfile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::ModifyUserProfileOutcomeCallable LcicClient::ModifyUserProfileCallable(const ModifyUserProfileRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserProfileOutcome>>();
    ModifyUserProfileAsync(
    request,
    [prom](
        const LcicClient*,
        const ModifyUserProfileRequest&,
        ModifyUserProfileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::RegisterUserOutcome LcicClient::RegisterUser(const RegisterUserRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterUserResponse rsp = RegisterUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterUserOutcome(rsp);
        else
            return RegisterUserOutcome(o.GetError());
    }
    else
    {
        return RegisterUserOutcome(outcome.GetError());
    }
}

void LcicClient::RegisterUserAsync(const RegisterUserRequest& request, const RegisterUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterUserRequest&;
    using Resp = RegisterUserResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::RegisterUserOutcomeCallable LcicClient::RegisterUserCallable(const RegisterUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterUserOutcome>>();
    RegisterUserAsync(
    request,
    [prom](
        const LcicClient*,
        const RegisterUserRequest&,
        RegisterUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::SendRoomNormalMessageOutcome LcicClient::SendRoomNormalMessage(const SendRoomNormalMessageRequest &request)
{
    auto outcome = MakeRequest(request, "SendRoomNormalMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendRoomNormalMessageResponse rsp = SendRoomNormalMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendRoomNormalMessageOutcome(rsp);
        else
            return SendRoomNormalMessageOutcome(o.GetError());
    }
    else
    {
        return SendRoomNormalMessageOutcome(outcome.GetError());
    }
}

void LcicClient::SendRoomNormalMessageAsync(const SendRoomNormalMessageRequest& request, const SendRoomNormalMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendRoomNormalMessageRequest&;
    using Resp = SendRoomNormalMessageResponse;

    DoRequestAsync<Req, Resp>(
        "SendRoomNormalMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::SendRoomNormalMessageOutcomeCallable LcicClient::SendRoomNormalMessageCallable(const SendRoomNormalMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendRoomNormalMessageOutcome>>();
    SendRoomNormalMessageAsync(
    request,
    [prom](
        const LcicClient*,
        const SendRoomNormalMessageRequest&,
        SendRoomNormalMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::SendRoomNotificationMessageOutcome LcicClient::SendRoomNotificationMessage(const SendRoomNotificationMessageRequest &request)
{
    auto outcome = MakeRequest(request, "SendRoomNotificationMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendRoomNotificationMessageResponse rsp = SendRoomNotificationMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendRoomNotificationMessageOutcome(rsp);
        else
            return SendRoomNotificationMessageOutcome(o.GetError());
    }
    else
    {
        return SendRoomNotificationMessageOutcome(outcome.GetError());
    }
}

void LcicClient::SendRoomNotificationMessageAsync(const SendRoomNotificationMessageRequest& request, const SendRoomNotificationMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendRoomNotificationMessageRequest&;
    using Resp = SendRoomNotificationMessageResponse;

    DoRequestAsync<Req, Resp>(
        "SendRoomNotificationMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::SendRoomNotificationMessageOutcomeCallable LcicClient::SendRoomNotificationMessageCallable(const SendRoomNotificationMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendRoomNotificationMessageOutcome>>();
    SendRoomNotificationMessageAsync(
    request,
    [prom](
        const LcicClient*,
        const SendRoomNotificationMessageRequest&,
        SendRoomNotificationMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::SetAppCustomContentOutcome LcicClient::SetAppCustomContent(const SetAppCustomContentRequest &request)
{
    auto outcome = MakeRequest(request, "SetAppCustomContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetAppCustomContentResponse rsp = SetAppCustomContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetAppCustomContentOutcome(rsp);
        else
            return SetAppCustomContentOutcome(o.GetError());
    }
    else
    {
        return SetAppCustomContentOutcome(outcome.GetError());
    }
}

void LcicClient::SetAppCustomContentAsync(const SetAppCustomContentRequest& request, const SetAppCustomContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetAppCustomContentRequest&;
    using Resp = SetAppCustomContentResponse;

    DoRequestAsync<Req, Resp>(
        "SetAppCustomContent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::SetAppCustomContentOutcomeCallable LcicClient::SetAppCustomContentCallable(const SetAppCustomContentRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetAppCustomContentOutcome>>();
    SetAppCustomContentAsync(
    request,
    [prom](
        const LcicClient*,
        const SetAppCustomContentRequest&,
        SetAppCustomContentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::SetMarqueeOutcome LcicClient::SetMarquee(const SetMarqueeRequest &request)
{
    auto outcome = MakeRequest(request, "SetMarquee");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetMarqueeResponse rsp = SetMarqueeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetMarqueeOutcome(rsp);
        else
            return SetMarqueeOutcome(o.GetError());
    }
    else
    {
        return SetMarqueeOutcome(outcome.GetError());
    }
}

void LcicClient::SetMarqueeAsync(const SetMarqueeRequest& request, const SetMarqueeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetMarqueeRequest&;
    using Resp = SetMarqueeResponse;

    DoRequestAsync<Req, Resp>(
        "SetMarquee", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::SetMarqueeOutcomeCallable LcicClient::SetMarqueeCallable(const SetMarqueeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetMarqueeOutcome>>();
    SetMarqueeAsync(
    request,
    [prom](
        const LcicClient*,
        const SetMarqueeRequest&,
        SetMarqueeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::SetWatermarkOutcome LcicClient::SetWatermark(const SetWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "SetWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetWatermarkResponse rsp = SetWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetWatermarkOutcome(rsp);
        else
            return SetWatermarkOutcome(o.GetError());
    }
    else
    {
        return SetWatermarkOutcome(outcome.GetError());
    }
}

void LcicClient::SetWatermarkAsync(const SetWatermarkRequest& request, const SetWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetWatermarkRequest&;
    using Resp = SetWatermarkResponse;

    DoRequestAsync<Req, Resp>(
        "SetWatermark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::SetWatermarkOutcomeCallable LcicClient::SetWatermarkCallable(const SetWatermarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetWatermarkOutcome>>();
    SetWatermarkAsync(
    request,
    [prom](
        const LcicClient*,
        const SetWatermarkRequest&,
        SetWatermarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::StartRecordOutcome LcicClient::StartRecord(const StartRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StartRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartRecordResponse rsp = StartRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartRecordOutcome(rsp);
        else
            return StartRecordOutcome(o.GetError());
    }
    else
    {
        return StartRecordOutcome(outcome.GetError());
    }
}

void LcicClient::StartRecordAsync(const StartRecordRequest& request, const StartRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartRecordRequest&;
    using Resp = StartRecordResponse;

    DoRequestAsync<Req, Resp>(
        "StartRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::StartRecordOutcomeCallable LcicClient::StartRecordCallable(const StartRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartRecordOutcome>>();
    StartRecordAsync(
    request,
    [prom](
        const LcicClient*,
        const StartRecordRequest&,
        StartRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::StartRoomOutcome LcicClient::StartRoom(const StartRoomRequest &request)
{
    auto outcome = MakeRequest(request, "StartRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartRoomResponse rsp = StartRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartRoomOutcome(rsp);
        else
            return StartRoomOutcome(o.GetError());
    }
    else
    {
        return StartRoomOutcome(outcome.GetError());
    }
}

void LcicClient::StartRoomAsync(const StartRoomRequest& request, const StartRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartRoomRequest&;
    using Resp = StartRoomResponse;

    DoRequestAsync<Req, Resp>(
        "StartRoom", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::StartRoomOutcomeCallable LcicClient::StartRoomCallable(const StartRoomRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartRoomOutcome>>();
    StartRoomAsync(
    request,
    [prom](
        const LcicClient*,
        const StartRoomRequest&,
        StartRoomOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::StopRecordOutcome LcicClient::StopRecord(const StopRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StopRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopRecordResponse rsp = StopRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopRecordOutcome(rsp);
        else
            return StopRecordOutcome(o.GetError());
    }
    else
    {
        return StopRecordOutcome(outcome.GetError());
    }
}

void LcicClient::StopRecordAsync(const StopRecordRequest& request, const StopRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopRecordRequest&;
    using Resp = StopRecordResponse;

    DoRequestAsync<Req, Resp>(
        "StopRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::StopRecordOutcomeCallable LcicClient::StopRecordCallable(const StopRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopRecordOutcome>>();
    StopRecordAsync(
    request,
    [prom](
        const LcicClient*,
        const StopRecordRequest&,
        StopRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::UnbindDocumentFromRoomOutcome LcicClient::UnbindDocumentFromRoom(const UnbindDocumentFromRoomRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindDocumentFromRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindDocumentFromRoomResponse rsp = UnbindDocumentFromRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindDocumentFromRoomOutcome(rsp);
        else
            return UnbindDocumentFromRoomOutcome(o.GetError());
    }
    else
    {
        return UnbindDocumentFromRoomOutcome(outcome.GetError());
    }
}

void LcicClient::UnbindDocumentFromRoomAsync(const UnbindDocumentFromRoomRequest& request, const UnbindDocumentFromRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindDocumentFromRoomRequest&;
    using Resp = UnbindDocumentFromRoomResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindDocumentFromRoom", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::UnbindDocumentFromRoomOutcomeCallable LcicClient::UnbindDocumentFromRoomCallable(const UnbindDocumentFromRoomRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindDocumentFromRoomOutcome>>();
    UnbindDocumentFromRoomAsync(
    request,
    [prom](
        const LcicClient*,
        const UnbindDocumentFromRoomRequest&,
        UnbindDocumentFromRoomOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LcicClient::UnblockKickedUserOutcome LcicClient::UnblockKickedUser(const UnblockKickedUserRequest &request)
{
    auto outcome = MakeRequest(request, "UnblockKickedUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnblockKickedUserResponse rsp = UnblockKickedUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnblockKickedUserOutcome(rsp);
        else
            return UnblockKickedUserOutcome(o.GetError());
    }
    else
    {
        return UnblockKickedUserOutcome(outcome.GetError());
    }
}

void LcicClient::UnblockKickedUserAsync(const UnblockKickedUserRequest& request, const UnblockKickedUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnblockKickedUserRequest&;
    using Resp = UnblockKickedUserResponse;

    DoRequestAsync<Req, Resp>(
        "UnblockKickedUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LcicClient::UnblockKickedUserOutcomeCallable LcicClient::UnblockKickedUserCallable(const UnblockKickedUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnblockKickedUserOutcome>>();
    UnblockKickedUserAsync(
    request,
    [prom](
        const LcicClient*,
        const UnblockKickedUserRequest&,
        UnblockKickedUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

