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

#include <tencentcloud/tag/v20180813/TagClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tag::V20180813;
using namespace TencentCloud::Tag::V20180813::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-08-13";
    const string ENDPOINT = "tag.tencentcloudapi.com";
}

TagClient::TagClient(const Credential &credential, const string &region) :
    TagClient(credential, region, ClientProfile())
{
}

TagClient::TagClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TagClient::AddProjectOutcome TagClient::AddProject(const AddProjectRequest &request)
{
    auto outcome = MakeRequest(request, "AddProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddProjectResponse rsp = AddProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddProjectOutcome(rsp);
        else
            return AddProjectOutcome(o.GetError());
    }
    else
    {
        return AddProjectOutcome(outcome.GetError());
    }
}

void TagClient::AddProjectAsync(const AddProjectRequest& request, const AddProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddProjectRequest&;
    using Resp = AddProjectResponse;

    DoRequestAsync<Req, Resp>(
        "AddProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::AddProjectOutcomeCallable TagClient::AddProjectCallable(const AddProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddProjectOutcome>>();
    AddProjectAsync(
    request,
    [prom](
        const TagClient*,
        const AddProjectRequest&,
        AddProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::AddResourceTagOutcome TagClient::AddResourceTag(const AddResourceTagRequest &request)
{
    auto outcome = MakeRequest(request, "AddResourceTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddResourceTagResponse rsp = AddResourceTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddResourceTagOutcome(rsp);
        else
            return AddResourceTagOutcome(o.GetError());
    }
    else
    {
        return AddResourceTagOutcome(outcome.GetError());
    }
}

void TagClient::AddResourceTagAsync(const AddResourceTagRequest& request, const AddResourceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddResourceTagRequest&;
    using Resp = AddResourceTagResponse;

    DoRequestAsync<Req, Resp>(
        "AddResourceTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::AddResourceTagOutcomeCallable TagClient::AddResourceTagCallable(const AddResourceTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddResourceTagOutcome>>();
    AddResourceTagAsync(
    request,
    [prom](
        const TagClient*,
        const AddResourceTagRequest&,
        AddResourceTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::AttachResourcesTagOutcome TagClient::AttachResourcesTag(const AttachResourcesTagRequest &request)
{
    auto outcome = MakeRequest(request, "AttachResourcesTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachResourcesTagResponse rsp = AttachResourcesTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachResourcesTagOutcome(rsp);
        else
            return AttachResourcesTagOutcome(o.GetError());
    }
    else
    {
        return AttachResourcesTagOutcome(outcome.GetError());
    }
}

void TagClient::AttachResourcesTagAsync(const AttachResourcesTagRequest& request, const AttachResourcesTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachResourcesTagRequest&;
    using Resp = AttachResourcesTagResponse;

    DoRequestAsync<Req, Resp>(
        "AttachResourcesTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::AttachResourcesTagOutcomeCallable TagClient::AttachResourcesTagCallable(const AttachResourcesTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachResourcesTagOutcome>>();
    AttachResourcesTagAsync(
    request,
    [prom](
        const TagClient*,
        const AttachResourcesTagRequest&,
        AttachResourcesTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::CreateTagOutcome TagClient::CreateTag(const CreateTagRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTagResponse rsp = CreateTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTagOutcome(rsp);
        else
            return CreateTagOutcome(o.GetError());
    }
    else
    {
        return CreateTagOutcome(outcome.GetError());
    }
}

void TagClient::CreateTagAsync(const CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTagRequest&;
    using Resp = CreateTagResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::CreateTagOutcomeCallable TagClient::CreateTagCallable(const CreateTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTagOutcome>>();
    CreateTagAsync(
    request,
    [prom](
        const TagClient*,
        const CreateTagRequest&,
        CreateTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::CreateTagsOutcome TagClient::CreateTags(const CreateTagsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTagsResponse rsp = CreateTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTagsOutcome(rsp);
        else
            return CreateTagsOutcome(o.GetError());
    }
    else
    {
        return CreateTagsOutcome(outcome.GetError());
    }
}

void TagClient::CreateTagsAsync(const CreateTagsRequest& request, const CreateTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTagsRequest&;
    using Resp = CreateTagsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::CreateTagsOutcomeCallable TagClient::CreateTagsCallable(const CreateTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTagsOutcome>>();
    CreateTagsAsync(
    request,
    [prom](
        const TagClient*,
        const CreateTagsRequest&,
        CreateTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DeleteResourceTagOutcome TagClient::DeleteResourceTag(const DeleteResourceTagRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceTagResponse rsp = DeleteResourceTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceTagOutcome(rsp);
        else
            return DeleteResourceTagOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceTagOutcome(outcome.GetError());
    }
}

void TagClient::DeleteResourceTagAsync(const DeleteResourceTagRequest& request, const DeleteResourceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteResourceTagRequest&;
    using Resp = DeleteResourceTagResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteResourceTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DeleteResourceTagOutcomeCallable TagClient::DeleteResourceTagCallable(const DeleteResourceTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteResourceTagOutcome>>();
    DeleteResourceTagAsync(
    request,
    [prom](
        const TagClient*,
        const DeleteResourceTagRequest&,
        DeleteResourceTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DeleteTagOutcome TagClient::DeleteTag(const DeleteTagRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTagResponse rsp = DeleteTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTagOutcome(rsp);
        else
            return DeleteTagOutcome(o.GetError());
    }
    else
    {
        return DeleteTagOutcome(outcome.GetError());
    }
}

void TagClient::DeleteTagAsync(const DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTagRequest&;
    using Resp = DeleteTagResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DeleteTagOutcomeCallable TagClient::DeleteTagCallable(const DeleteTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTagOutcome>>();
    DeleteTagAsync(
    request,
    [prom](
        const TagClient*,
        const DeleteTagRequest&,
        DeleteTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DeleteTagsOutcome TagClient::DeleteTags(const DeleteTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTagsResponse rsp = DeleteTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTagsOutcome(rsp);
        else
            return DeleteTagsOutcome(o.GetError());
    }
    else
    {
        return DeleteTagsOutcome(outcome.GetError());
    }
}

void TagClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTagsRequest&;
    using Resp = DeleteTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DeleteTagsOutcomeCallable TagClient::DeleteTagsCallable(const DeleteTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTagsOutcome>>();
    DeleteTagsAsync(
    request,
    [prom](
        const TagClient*,
        const DeleteTagsRequest&,
        DeleteTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DescribeProjectsOutcome TagClient::DescribeProjects(const DescribeProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectsResponse rsp = DescribeProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectsOutcome(rsp);
        else
            return DescribeProjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectsOutcome(outcome.GetError());
    }
}

void TagClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectsRequest&;
    using Resp = DescribeProjectsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DescribeProjectsOutcomeCallable TagClient::DescribeProjectsCallable(const DescribeProjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectsOutcome>>();
    DescribeProjectsAsync(
    request,
    [prom](
        const TagClient*,
        const DescribeProjectsRequest&,
        DescribeProjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DescribeResourceTagsOutcome TagClient::DescribeResourceTags(const DescribeResourceTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceTagsResponse rsp = DescribeResourceTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceTagsOutcome(rsp);
        else
            return DescribeResourceTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceTagsOutcome(outcome.GetError());
    }
}

void TagClient::DescribeResourceTagsAsync(const DescribeResourceTagsRequest& request, const DescribeResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceTagsRequest&;
    using Resp = DescribeResourceTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DescribeResourceTagsOutcomeCallable TagClient::DescribeResourceTagsCallable(const DescribeResourceTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceTagsOutcome>>();
    DescribeResourceTagsAsync(
    request,
    [prom](
        const TagClient*,
        const DescribeResourceTagsRequest&,
        DescribeResourceTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DescribeResourceTagsByResourceIdsOutcome TagClient::DescribeResourceTagsByResourceIds(const DescribeResourceTagsByResourceIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceTagsByResourceIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceTagsByResourceIdsResponse rsp = DescribeResourceTagsByResourceIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceTagsByResourceIdsOutcome(rsp);
        else
            return DescribeResourceTagsByResourceIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceTagsByResourceIdsOutcome(outcome.GetError());
    }
}

void TagClient::DescribeResourceTagsByResourceIdsAsync(const DescribeResourceTagsByResourceIdsRequest& request, const DescribeResourceTagsByResourceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceTagsByResourceIdsRequest&;
    using Resp = DescribeResourceTagsByResourceIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceTagsByResourceIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DescribeResourceTagsByResourceIdsOutcomeCallable TagClient::DescribeResourceTagsByResourceIdsCallable(const DescribeResourceTagsByResourceIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceTagsByResourceIdsOutcome>>();
    DescribeResourceTagsByResourceIdsAsync(
    request,
    [prom](
        const TagClient*,
        const DescribeResourceTagsByResourceIdsRequest&,
        DescribeResourceTagsByResourceIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DescribeResourceTagsByResourceIdsSeqOutcome TagClient::DescribeResourceTagsByResourceIdsSeq(const DescribeResourceTagsByResourceIdsSeqRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceTagsByResourceIdsSeq");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceTagsByResourceIdsSeqResponse rsp = DescribeResourceTagsByResourceIdsSeqResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceTagsByResourceIdsSeqOutcome(rsp);
        else
            return DescribeResourceTagsByResourceIdsSeqOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceTagsByResourceIdsSeqOutcome(outcome.GetError());
    }
}

void TagClient::DescribeResourceTagsByResourceIdsSeqAsync(const DescribeResourceTagsByResourceIdsSeqRequest& request, const DescribeResourceTagsByResourceIdsSeqAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceTagsByResourceIdsSeqRequest&;
    using Resp = DescribeResourceTagsByResourceIdsSeqResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceTagsByResourceIdsSeq", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DescribeResourceTagsByResourceIdsSeqOutcomeCallable TagClient::DescribeResourceTagsByResourceIdsSeqCallable(const DescribeResourceTagsByResourceIdsSeqRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceTagsByResourceIdsSeqOutcome>>();
    DescribeResourceTagsByResourceIdsSeqAsync(
    request,
    [prom](
        const TagClient*,
        const DescribeResourceTagsByResourceIdsSeqRequest&,
        DescribeResourceTagsByResourceIdsSeqOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DescribeResourceTagsByTagKeysOutcome TagClient::DescribeResourceTagsByTagKeys(const DescribeResourceTagsByTagKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceTagsByTagKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceTagsByTagKeysResponse rsp = DescribeResourceTagsByTagKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceTagsByTagKeysOutcome(rsp);
        else
            return DescribeResourceTagsByTagKeysOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceTagsByTagKeysOutcome(outcome.GetError());
    }
}

void TagClient::DescribeResourceTagsByTagKeysAsync(const DescribeResourceTagsByTagKeysRequest& request, const DescribeResourceTagsByTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceTagsByTagKeysRequest&;
    using Resp = DescribeResourceTagsByTagKeysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceTagsByTagKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DescribeResourceTagsByTagKeysOutcomeCallable TagClient::DescribeResourceTagsByTagKeysCallable(const DescribeResourceTagsByTagKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceTagsByTagKeysOutcome>>();
    DescribeResourceTagsByTagKeysAsync(
    request,
    [prom](
        const TagClient*,
        const DescribeResourceTagsByTagKeysRequest&,
        DescribeResourceTagsByTagKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DescribeResourcesByTagsOutcome TagClient::DescribeResourcesByTags(const DescribeResourcesByTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcesByTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcesByTagsResponse rsp = DescribeResourcesByTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcesByTagsOutcome(rsp);
        else
            return DescribeResourcesByTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcesByTagsOutcome(outcome.GetError());
    }
}

void TagClient::DescribeResourcesByTagsAsync(const DescribeResourcesByTagsRequest& request, const DescribeResourcesByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourcesByTagsRequest&;
    using Resp = DescribeResourcesByTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourcesByTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DescribeResourcesByTagsOutcomeCallable TagClient::DescribeResourcesByTagsCallable(const DescribeResourcesByTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourcesByTagsOutcome>>();
    DescribeResourcesByTagsAsync(
    request,
    [prom](
        const TagClient*,
        const DescribeResourcesByTagsRequest&,
        DescribeResourcesByTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DescribeResourcesByTagsUnionOutcome TagClient::DescribeResourcesByTagsUnion(const DescribeResourcesByTagsUnionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcesByTagsUnion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcesByTagsUnionResponse rsp = DescribeResourcesByTagsUnionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcesByTagsUnionOutcome(rsp);
        else
            return DescribeResourcesByTagsUnionOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcesByTagsUnionOutcome(outcome.GetError());
    }
}

void TagClient::DescribeResourcesByTagsUnionAsync(const DescribeResourcesByTagsUnionRequest& request, const DescribeResourcesByTagsUnionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourcesByTagsUnionRequest&;
    using Resp = DescribeResourcesByTagsUnionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourcesByTagsUnion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DescribeResourcesByTagsUnionOutcomeCallable TagClient::DescribeResourcesByTagsUnionCallable(const DescribeResourcesByTagsUnionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourcesByTagsUnionOutcome>>();
    DescribeResourcesByTagsUnionAsync(
    request,
    [prom](
        const TagClient*,
        const DescribeResourcesByTagsUnionRequest&,
        DescribeResourcesByTagsUnionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DescribeTagKeysOutcome TagClient::DescribeTagKeys(const DescribeTagKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagKeysResponse rsp = DescribeTagKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagKeysOutcome(rsp);
        else
            return DescribeTagKeysOutcome(o.GetError());
    }
    else
    {
        return DescribeTagKeysOutcome(outcome.GetError());
    }
}

void TagClient::DescribeTagKeysAsync(const DescribeTagKeysRequest& request, const DescribeTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTagKeysRequest&;
    using Resp = DescribeTagKeysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTagKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DescribeTagKeysOutcomeCallable TagClient::DescribeTagKeysCallable(const DescribeTagKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagKeysOutcome>>();
    DescribeTagKeysAsync(
    request,
    [prom](
        const TagClient*,
        const DescribeTagKeysRequest&,
        DescribeTagKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DescribeTagValuesOutcome TagClient::DescribeTagValues(const DescribeTagValuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagValues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagValuesResponse rsp = DescribeTagValuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagValuesOutcome(rsp);
        else
            return DescribeTagValuesOutcome(o.GetError());
    }
    else
    {
        return DescribeTagValuesOutcome(outcome.GetError());
    }
}

void TagClient::DescribeTagValuesAsync(const DescribeTagValuesRequest& request, const DescribeTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTagValuesRequest&;
    using Resp = DescribeTagValuesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTagValues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DescribeTagValuesOutcomeCallable TagClient::DescribeTagValuesCallable(const DescribeTagValuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagValuesOutcome>>();
    DescribeTagValuesAsync(
    request,
    [prom](
        const TagClient*,
        const DescribeTagValuesRequest&,
        DescribeTagValuesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DescribeTagValuesSeqOutcome TagClient::DescribeTagValuesSeq(const DescribeTagValuesSeqRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagValuesSeq");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagValuesSeqResponse rsp = DescribeTagValuesSeqResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagValuesSeqOutcome(rsp);
        else
            return DescribeTagValuesSeqOutcome(o.GetError());
    }
    else
    {
        return DescribeTagValuesSeqOutcome(outcome.GetError());
    }
}

void TagClient::DescribeTagValuesSeqAsync(const DescribeTagValuesSeqRequest& request, const DescribeTagValuesSeqAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTagValuesSeqRequest&;
    using Resp = DescribeTagValuesSeqResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTagValuesSeq", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DescribeTagValuesSeqOutcomeCallable TagClient::DescribeTagValuesSeqCallable(const DescribeTagValuesSeqRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagValuesSeqOutcome>>();
    DescribeTagValuesSeqAsync(
    request,
    [prom](
        const TagClient*,
        const DescribeTagValuesSeqRequest&,
        DescribeTagValuesSeqOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DescribeTagsOutcome TagClient::DescribeTags(const DescribeTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagsResponse rsp = DescribeTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagsOutcome(rsp);
        else
            return DescribeTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeTagsOutcome(outcome.GetError());
    }
}

void TagClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTagsRequest&;
    using Resp = DescribeTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DescribeTagsOutcomeCallable TagClient::DescribeTagsCallable(const DescribeTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagsOutcome>>();
    DescribeTagsAsync(
    request,
    [prom](
        const TagClient*,
        const DescribeTagsRequest&,
        DescribeTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DescribeTagsSeqOutcome TagClient::DescribeTagsSeq(const DescribeTagsSeqRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagsSeq");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagsSeqResponse rsp = DescribeTagsSeqResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagsSeqOutcome(rsp);
        else
            return DescribeTagsSeqOutcome(o.GetError());
    }
    else
    {
        return DescribeTagsSeqOutcome(outcome.GetError());
    }
}

void TagClient::DescribeTagsSeqAsync(const DescribeTagsSeqRequest& request, const DescribeTagsSeqAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTagsSeqRequest&;
    using Resp = DescribeTagsSeqResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTagsSeq", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DescribeTagsSeqOutcomeCallable TagClient::DescribeTagsSeqCallable(const DescribeTagsSeqRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagsSeqOutcome>>();
    DescribeTagsSeqAsync(
    request,
    [prom](
        const TagClient*,
        const DescribeTagsSeqRequest&,
        DescribeTagsSeqOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::DetachResourcesTagOutcome TagClient::DetachResourcesTag(const DetachResourcesTagRequest &request)
{
    auto outcome = MakeRequest(request, "DetachResourcesTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachResourcesTagResponse rsp = DetachResourcesTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachResourcesTagOutcome(rsp);
        else
            return DetachResourcesTagOutcome(o.GetError());
    }
    else
    {
        return DetachResourcesTagOutcome(outcome.GetError());
    }
}

void TagClient::DetachResourcesTagAsync(const DetachResourcesTagRequest& request, const DetachResourcesTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachResourcesTagRequest&;
    using Resp = DetachResourcesTagResponse;

    DoRequestAsync<Req, Resp>(
        "DetachResourcesTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::DetachResourcesTagOutcomeCallable TagClient::DetachResourcesTagCallable(const DetachResourcesTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachResourcesTagOutcome>>();
    DetachResourcesTagAsync(
    request,
    [prom](
        const TagClient*,
        const DetachResourcesTagRequest&,
        DetachResourcesTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::GetResourcesOutcome TagClient::GetResources(const GetResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "GetResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetResourcesResponse rsp = GetResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetResourcesOutcome(rsp);
        else
            return GetResourcesOutcome(o.GetError());
    }
    else
    {
        return GetResourcesOutcome(outcome.GetError());
    }
}

void TagClient::GetResourcesAsync(const GetResourcesRequest& request, const GetResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetResourcesRequest&;
    using Resp = GetResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "GetResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::GetResourcesOutcomeCallable TagClient::GetResourcesCallable(const GetResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetResourcesOutcome>>();
    GetResourcesAsync(
    request,
    [prom](
        const TagClient*,
        const GetResourcesRequest&,
        GetResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::GetTagKeysOutcome TagClient::GetTagKeys(const GetTagKeysRequest &request)
{
    auto outcome = MakeRequest(request, "GetTagKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTagKeysResponse rsp = GetTagKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTagKeysOutcome(rsp);
        else
            return GetTagKeysOutcome(o.GetError());
    }
    else
    {
        return GetTagKeysOutcome(outcome.GetError());
    }
}

void TagClient::GetTagKeysAsync(const GetTagKeysRequest& request, const GetTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTagKeysRequest&;
    using Resp = GetTagKeysResponse;

    DoRequestAsync<Req, Resp>(
        "GetTagKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::GetTagKeysOutcomeCallable TagClient::GetTagKeysCallable(const GetTagKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTagKeysOutcome>>();
    GetTagKeysAsync(
    request,
    [prom](
        const TagClient*,
        const GetTagKeysRequest&,
        GetTagKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::GetTagValuesOutcome TagClient::GetTagValues(const GetTagValuesRequest &request)
{
    auto outcome = MakeRequest(request, "GetTagValues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTagValuesResponse rsp = GetTagValuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTagValuesOutcome(rsp);
        else
            return GetTagValuesOutcome(o.GetError());
    }
    else
    {
        return GetTagValuesOutcome(outcome.GetError());
    }
}

void TagClient::GetTagValuesAsync(const GetTagValuesRequest& request, const GetTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTagValuesRequest&;
    using Resp = GetTagValuesResponse;

    DoRequestAsync<Req, Resp>(
        "GetTagValues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::GetTagValuesOutcomeCallable TagClient::GetTagValuesCallable(const GetTagValuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTagValuesOutcome>>();
    GetTagValuesAsync(
    request,
    [prom](
        const TagClient*,
        const GetTagValuesRequest&,
        GetTagValuesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::GetTagsOutcome TagClient::GetTags(const GetTagsRequest &request)
{
    auto outcome = MakeRequest(request, "GetTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTagsResponse rsp = GetTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTagsOutcome(rsp);
        else
            return GetTagsOutcome(o.GetError());
    }
    else
    {
        return GetTagsOutcome(outcome.GetError());
    }
}

void TagClient::GetTagsAsync(const GetTagsRequest& request, const GetTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTagsRequest&;
    using Resp = GetTagsResponse;

    DoRequestAsync<Req, Resp>(
        "GetTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::GetTagsOutcomeCallable TagClient::GetTagsCallable(const GetTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTagsOutcome>>();
    GetTagsAsync(
    request,
    [prom](
        const TagClient*,
        const GetTagsRequest&,
        GetTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::ModifyResourceTagsOutcome TagClient::ModifyResourceTags(const ModifyResourceTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceTagsResponse rsp = ModifyResourceTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceTagsOutcome(rsp);
        else
            return ModifyResourceTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceTagsOutcome(outcome.GetError());
    }
}

void TagClient::ModifyResourceTagsAsync(const ModifyResourceTagsRequest& request, const ModifyResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyResourceTagsRequest&;
    using Resp = ModifyResourceTagsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResourceTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::ModifyResourceTagsOutcomeCallable TagClient::ModifyResourceTagsCallable(const ModifyResourceTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourceTagsOutcome>>();
    ModifyResourceTagsAsync(
    request,
    [prom](
        const TagClient*,
        const ModifyResourceTagsRequest&,
        ModifyResourceTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::ModifyResourcesTagValueOutcome TagClient::ModifyResourcesTagValue(const ModifyResourcesTagValueRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourcesTagValue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourcesTagValueResponse rsp = ModifyResourcesTagValueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourcesTagValueOutcome(rsp);
        else
            return ModifyResourcesTagValueOutcome(o.GetError());
    }
    else
    {
        return ModifyResourcesTagValueOutcome(outcome.GetError());
    }
}

void TagClient::ModifyResourcesTagValueAsync(const ModifyResourcesTagValueRequest& request, const ModifyResourcesTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyResourcesTagValueRequest&;
    using Resp = ModifyResourcesTagValueResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResourcesTagValue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::ModifyResourcesTagValueOutcomeCallable TagClient::ModifyResourcesTagValueCallable(const ModifyResourcesTagValueRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourcesTagValueOutcome>>();
    ModifyResourcesTagValueAsync(
    request,
    [prom](
        const TagClient*,
        const ModifyResourcesTagValueRequest&,
        ModifyResourcesTagValueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::TagResourcesOutcome TagClient::TagResources(const TagResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "TagResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TagResourcesResponse rsp = TagResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TagResourcesOutcome(rsp);
        else
            return TagResourcesOutcome(o.GetError());
    }
    else
    {
        return TagResourcesOutcome(outcome.GetError());
    }
}

void TagClient::TagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TagResourcesRequest&;
    using Resp = TagResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "TagResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::TagResourcesOutcomeCallable TagClient::TagResourcesCallable(const TagResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<TagResourcesOutcome>>();
    TagResourcesAsync(
    request,
    [prom](
        const TagClient*,
        const TagResourcesRequest&,
        TagResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::UnTagResourcesOutcome TagClient::UnTagResources(const UnTagResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "UnTagResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnTagResourcesResponse rsp = UnTagResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnTagResourcesOutcome(rsp);
        else
            return UnTagResourcesOutcome(o.GetError());
    }
    else
    {
        return UnTagResourcesOutcome(outcome.GetError());
    }
}

void TagClient::UnTagResourcesAsync(const UnTagResourcesRequest& request, const UnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnTagResourcesRequest&;
    using Resp = UnTagResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "UnTagResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::UnTagResourcesOutcomeCallable TagClient::UnTagResourcesCallable(const UnTagResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnTagResourcesOutcome>>();
    UnTagResourcesAsync(
    request,
    [prom](
        const TagClient*,
        const UnTagResourcesRequest&,
        UnTagResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::UpdateProjectOutcome TagClient::UpdateProject(const UpdateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProjectResponse rsp = UpdateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProjectOutcome(rsp);
        else
            return UpdateProjectOutcome(o.GetError());
    }
    else
    {
        return UpdateProjectOutcome(outcome.GetError());
    }
}

void TagClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateProjectRequest&;
    using Resp = UpdateProjectResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::UpdateProjectOutcomeCallable TagClient::UpdateProjectCallable(const UpdateProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateProjectOutcome>>();
    UpdateProjectAsync(
    request,
    [prom](
        const TagClient*,
        const UpdateProjectRequest&,
        UpdateProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TagClient::UpdateResourceTagValueOutcome TagClient::UpdateResourceTagValue(const UpdateResourceTagValueRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateResourceTagValue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateResourceTagValueResponse rsp = UpdateResourceTagValueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateResourceTagValueOutcome(rsp);
        else
            return UpdateResourceTagValueOutcome(o.GetError());
    }
    else
    {
        return UpdateResourceTagValueOutcome(outcome.GetError());
    }
}

void TagClient::UpdateResourceTagValueAsync(const UpdateResourceTagValueRequest& request, const UpdateResourceTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateResourceTagValueRequest&;
    using Resp = UpdateResourceTagValueResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateResourceTagValue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TagClient::UpdateResourceTagValueOutcomeCallable TagClient::UpdateResourceTagValueCallable(const UpdateResourceTagValueRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateResourceTagValueOutcome>>();
    UpdateResourceTagValueAsync(
    request,
    [prom](
        const TagClient*,
        const UpdateResourceTagValueRequest&,
        UpdateResourceTagValueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

