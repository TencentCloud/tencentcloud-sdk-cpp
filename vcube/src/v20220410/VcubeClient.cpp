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

#include <tencentcloud/vcube/v20220410/VcubeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vcube::V20220410;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-04-10";
    const string ENDPOINT = "vcube.tencentcloudapi.com";
}

VcubeClient::VcubeClient(const Credential &credential, const string &region) :
    VcubeClient(credential, region, ClientProfile())
{
}

VcubeClient::VcubeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VcubeClient::CreateActivityLicenseOutcome VcubeClient::CreateActivityLicense(const CreateActivityLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateActivityLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateActivityLicenseResponse rsp = CreateActivityLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateActivityLicenseOutcome(rsp);
        else
            return CreateActivityLicenseOutcome(o.GetError());
    }
    else
    {
        return CreateActivityLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateActivityLicenseAsync(const CreateActivityLicenseRequest& request, const CreateActivityLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateActivityLicenseRequest&;
    using Resp = CreateActivityLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateActivityLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::CreateActivityLicenseOutcomeCallable VcubeClient::CreateActivityLicenseCallable(const CreateActivityLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateActivityLicenseOutcome>>();
    CreateActivityLicenseAsync(
    request,
    [prom](
        const VcubeClient*,
        const CreateActivityLicenseRequest&,
        CreateActivityLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::CreateApplicationAndBindLicenseOutcome VcubeClient::CreateApplicationAndBindLicense(const CreateApplicationAndBindLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationAndBindLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationAndBindLicenseResponse rsp = CreateApplicationAndBindLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationAndBindLicenseOutcome(rsp);
        else
            return CreateApplicationAndBindLicenseOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationAndBindLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateApplicationAndBindLicenseAsync(const CreateApplicationAndBindLicenseRequest& request, const CreateApplicationAndBindLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationAndBindLicenseRequest&;
    using Resp = CreateApplicationAndBindLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationAndBindLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::CreateApplicationAndBindLicenseOutcomeCallable VcubeClient::CreateApplicationAndBindLicenseCallable(const CreateApplicationAndBindLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationAndBindLicenseOutcome>>();
    CreateApplicationAndBindLicenseAsync(
    request,
    [prom](
        const VcubeClient*,
        const CreateApplicationAndBindLicenseRequest&,
        CreateApplicationAndBindLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::CreateApplicationAndVideoOutcome VcubeClient::CreateApplicationAndVideo(const CreateApplicationAndVideoRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationAndVideo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationAndVideoResponse rsp = CreateApplicationAndVideoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationAndVideoOutcome(rsp);
        else
            return CreateApplicationAndVideoOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationAndVideoOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateApplicationAndVideoAsync(const CreateApplicationAndVideoRequest& request, const CreateApplicationAndVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationAndVideoRequest&;
    using Resp = CreateApplicationAndVideoResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationAndVideo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::CreateApplicationAndVideoOutcomeCallable VcubeClient::CreateApplicationAndVideoCallable(const CreateApplicationAndVideoRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationAndVideoOutcome>>();
    CreateApplicationAndVideoAsync(
    request,
    [prom](
        const VcubeClient*,
        const CreateApplicationAndVideoRequest&,
        CreateApplicationAndVideoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::CreateApplicationAndWebPlayerLicenseOutcome VcubeClient::CreateApplicationAndWebPlayerLicense(const CreateApplicationAndWebPlayerLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationAndWebPlayerLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationAndWebPlayerLicenseResponse rsp = CreateApplicationAndWebPlayerLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationAndWebPlayerLicenseOutcome(rsp);
        else
            return CreateApplicationAndWebPlayerLicenseOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationAndWebPlayerLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateApplicationAndWebPlayerLicenseAsync(const CreateApplicationAndWebPlayerLicenseRequest& request, const CreateApplicationAndWebPlayerLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationAndWebPlayerLicenseRequest&;
    using Resp = CreateApplicationAndWebPlayerLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationAndWebPlayerLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::CreateApplicationAndWebPlayerLicenseOutcomeCallable VcubeClient::CreateApplicationAndWebPlayerLicenseCallable(const CreateApplicationAndWebPlayerLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationAndWebPlayerLicenseOutcome>>();
    CreateApplicationAndWebPlayerLicenseAsync(
    request,
    [prom](
        const VcubeClient*,
        const CreateApplicationAndWebPlayerLicenseRequest&,
        CreateApplicationAndWebPlayerLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::CreateLicenseOutcome VcubeClient::CreateLicense(const CreateLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLicenseResponse rsp = CreateLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLicenseOutcome(rsp);
        else
            return CreateLicenseOutcome(o.GetError());
    }
    else
    {
        return CreateLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateLicenseAsync(const CreateLicenseRequest& request, const CreateLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLicenseRequest&;
    using Resp = CreateLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::CreateLicenseOutcomeCallable VcubeClient::CreateLicenseCallable(const CreateLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLicenseOutcome>>();
    CreateLicenseAsync(
    request,
    [prom](
        const VcubeClient*,
        const CreateLicenseRequest&,
        CreateLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::CreateTestXMagicOutcome VcubeClient::CreateTestXMagic(const CreateTestXMagicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTestXMagic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTestXMagicResponse rsp = CreateTestXMagicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTestXMagicOutcome(rsp);
        else
            return CreateTestXMagicOutcome(o.GetError());
    }
    else
    {
        return CreateTestXMagicOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateTestXMagicAsync(const CreateTestXMagicRequest& request, const CreateTestXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTestXMagicRequest&;
    using Resp = CreateTestXMagicResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTestXMagic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::CreateTestXMagicOutcomeCallable VcubeClient::CreateTestXMagicCallable(const CreateTestXMagicRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTestXMagicOutcome>>();
    CreateTestXMagicAsync(
    request,
    [prom](
        const VcubeClient*,
        const CreateTestXMagicRequest&,
        CreateTestXMagicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::CreateTrialApplicationAndLicenseOutcome VcubeClient::CreateTrialApplicationAndLicense(const CreateTrialApplicationAndLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTrialApplicationAndLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTrialApplicationAndLicenseResponse rsp = CreateTrialApplicationAndLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTrialApplicationAndLicenseOutcome(rsp);
        else
            return CreateTrialApplicationAndLicenseOutcome(o.GetError());
    }
    else
    {
        return CreateTrialApplicationAndLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateTrialApplicationAndLicenseAsync(const CreateTrialApplicationAndLicenseRequest& request, const CreateTrialApplicationAndLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTrialApplicationAndLicenseRequest&;
    using Resp = CreateTrialApplicationAndLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTrialApplicationAndLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::CreateTrialApplicationAndLicenseOutcomeCallable VcubeClient::CreateTrialApplicationAndLicenseCallable(const CreateTrialApplicationAndLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTrialApplicationAndLicenseOutcome>>();
    CreateTrialApplicationAndLicenseAsync(
    request,
    [prom](
        const VcubeClient*,
        const CreateTrialApplicationAndLicenseRequest&,
        CreateTrialApplicationAndLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::CreateTrialLicenseOutcome VcubeClient::CreateTrialLicense(const CreateTrialLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTrialLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTrialLicenseResponse rsp = CreateTrialLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTrialLicenseOutcome(rsp);
        else
            return CreateTrialLicenseOutcome(o.GetError());
    }
    else
    {
        return CreateTrialLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateTrialLicenseAsync(const CreateTrialLicenseRequest& request, const CreateTrialLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTrialLicenseRequest&;
    using Resp = CreateTrialLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTrialLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::CreateTrialLicenseOutcomeCallable VcubeClient::CreateTrialLicenseCallable(const CreateTrialLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTrialLicenseOutcome>>();
    CreateTrialLicenseAsync(
    request,
    [prom](
        const VcubeClient*,
        const CreateTrialLicenseRequest&,
        CreateTrialLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::CreateXMagicOutcome VcubeClient::CreateXMagic(const CreateXMagicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateXMagic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateXMagicResponse rsp = CreateXMagicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateXMagicOutcome(rsp);
        else
            return CreateXMagicOutcome(o.GetError());
    }
    else
    {
        return CreateXMagicOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateXMagicAsync(const CreateXMagicRequest& request, const CreateXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateXMagicRequest&;
    using Resp = CreateXMagicResponse;

    DoRequestAsync<Req, Resp>(
        "CreateXMagic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::CreateXMagicOutcomeCallable VcubeClient::CreateXMagicCallable(const CreateXMagicRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateXMagicOutcome>>();
    CreateXMagicAsync(
    request,
    [prom](
        const VcubeClient*,
        const CreateXMagicRequest&,
        CreateXMagicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::DeleteApplicationAndVideoLicenseOutcome VcubeClient::DeleteApplicationAndVideoLicense(const DeleteApplicationAndVideoLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplicationAndVideoLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationAndVideoLicenseResponse rsp = DeleteApplicationAndVideoLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationAndVideoLicenseOutcome(rsp);
        else
            return DeleteApplicationAndVideoLicenseOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationAndVideoLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::DeleteApplicationAndVideoLicenseAsync(const DeleteApplicationAndVideoLicenseRequest& request, const DeleteApplicationAndVideoLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApplicationAndVideoLicenseRequest&;
    using Resp = DeleteApplicationAndVideoLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApplicationAndVideoLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::DeleteApplicationAndVideoLicenseOutcomeCallable VcubeClient::DeleteApplicationAndVideoLicenseCallable(const DeleteApplicationAndVideoLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationAndVideoLicenseOutcome>>();
    DeleteApplicationAndVideoLicenseAsync(
    request,
    [prom](
        const VcubeClient*,
        const DeleteApplicationAndVideoLicenseRequest&,
        DeleteApplicationAndVideoLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::DeleteApplicationAndWebPlayerLicenseOutcome VcubeClient::DeleteApplicationAndWebPlayerLicense(const DeleteApplicationAndWebPlayerLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplicationAndWebPlayerLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationAndWebPlayerLicenseResponse rsp = DeleteApplicationAndWebPlayerLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationAndWebPlayerLicenseOutcome(rsp);
        else
            return DeleteApplicationAndWebPlayerLicenseOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationAndWebPlayerLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::DeleteApplicationAndWebPlayerLicenseAsync(const DeleteApplicationAndWebPlayerLicenseRequest& request, const DeleteApplicationAndWebPlayerLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApplicationAndWebPlayerLicenseRequest&;
    using Resp = DeleteApplicationAndWebPlayerLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApplicationAndWebPlayerLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::DeleteApplicationAndWebPlayerLicenseOutcomeCallable VcubeClient::DeleteApplicationAndWebPlayerLicenseCallable(const DeleteApplicationAndWebPlayerLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationAndWebPlayerLicenseOutcome>>();
    DeleteApplicationAndWebPlayerLicenseAsync(
    request,
    [prom](
        const VcubeClient*,
        const DeleteApplicationAndWebPlayerLicenseRequest&,
        DeleteApplicationAndWebPlayerLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::DescribeFeatureListOutcome VcubeClient::DescribeFeatureList(const DescribeFeatureListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFeatureList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFeatureListResponse rsp = DescribeFeatureListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFeatureListOutcome(rsp);
        else
            return DescribeFeatureListOutcome(o.GetError());
    }
    else
    {
        return DescribeFeatureListOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeFeatureListAsync(const DescribeFeatureListRequest& request, const DescribeFeatureListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFeatureListRequest&;
    using Resp = DescribeFeatureListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFeatureList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::DescribeFeatureListOutcomeCallable VcubeClient::DescribeFeatureListCallable(const DescribeFeatureListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFeatureListOutcome>>();
    DescribeFeatureListAsync(
    request,
    [prom](
        const VcubeClient*,
        const DescribeFeatureListRequest&,
        DescribeFeatureListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::DescribeLicenseListOutcome VcubeClient::DescribeLicenseList(const DescribeLicenseListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicenseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseListResponse rsp = DescribeLicenseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseListOutcome(rsp);
        else
            return DescribeLicenseListOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseListOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeLicenseListAsync(const DescribeLicenseListRequest& request, const DescribeLicenseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLicenseListRequest&;
    using Resp = DescribeLicenseListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLicenseList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::DescribeLicenseListOutcomeCallable VcubeClient::DescribeLicenseListCallable(const DescribeLicenseListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLicenseListOutcome>>();
    DescribeLicenseListAsync(
    request,
    [prom](
        const VcubeClient*,
        const DescribeLicenseListRequest&,
        DescribeLicenseListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::DescribeNewsOutcome VcubeClient::DescribeNews(const DescribeNewsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNews");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNewsResponse rsp = DescribeNewsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNewsOutcome(rsp);
        else
            return DescribeNewsOutcome(o.GetError());
    }
    else
    {
        return DescribeNewsOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeNewsAsync(const DescribeNewsRequest& request, const DescribeNewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNewsRequest&;
    using Resp = DescribeNewsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNews", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::DescribeNewsOutcomeCallable VcubeClient::DescribeNewsCallable(const DescribeNewsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNewsOutcome>>();
    DescribeNewsAsync(
    request,
    [prom](
        const VcubeClient*,
        const DescribeNewsRequest&,
        DescribeNewsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::DescribeSTSOutcome VcubeClient::DescribeSTS(const DescribeSTSRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSTS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSTSResponse rsp = DescribeSTSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSTSOutcome(rsp);
        else
            return DescribeSTSOutcome(o.GetError());
    }
    else
    {
        return DescribeSTSOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeSTSAsync(const DescribeSTSRequest& request, const DescribeSTSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSTSRequest&;
    using Resp = DescribeSTSResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSTS", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::DescribeSTSOutcomeCallable VcubeClient::DescribeSTSCallable(const DescribeSTSRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSTSOutcome>>();
    DescribeSTSAsync(
    request,
    [prom](
        const VcubeClient*,
        const DescribeSTSRequest&,
        DescribeSTSOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::DescribeTrialFeatureOutcome VcubeClient::DescribeTrialFeature(const DescribeTrialFeatureRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrialFeature");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrialFeatureResponse rsp = DescribeTrialFeatureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrialFeatureOutcome(rsp);
        else
            return DescribeTrialFeatureOutcome(o.GetError());
    }
    else
    {
        return DescribeTrialFeatureOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeTrialFeatureAsync(const DescribeTrialFeatureRequest& request, const DescribeTrialFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrialFeatureRequest&;
    using Resp = DescribeTrialFeatureResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrialFeature", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::DescribeTrialFeatureOutcomeCallable VcubeClient::DescribeTrialFeatureCallable(const DescribeTrialFeatureRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrialFeatureOutcome>>();
    DescribeTrialFeatureAsync(
    request,
    [prom](
        const VcubeClient*,
        const DescribeTrialFeatureRequest&,
        DescribeTrialFeatureOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::DescribeUserConfigOutcome VcubeClient::DescribeUserConfig(const DescribeUserConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserConfigResponse rsp = DescribeUserConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserConfigOutcome(rsp);
        else
            return DescribeUserConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeUserConfigOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeUserConfigAsync(const DescribeUserConfigRequest& request, const DescribeUserConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserConfigRequest&;
    using Resp = DescribeUserConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::DescribeUserConfigOutcomeCallable VcubeClient::DescribeUserConfigCallable(const DescribeUserConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserConfigOutcome>>();
    DescribeUserConfigAsync(
    request,
    [prom](
        const VcubeClient*,
        const DescribeUserConfigRequest&,
        DescribeUserConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::DescribeVcubeApplicationAndLicenseOutcome VcubeClient::DescribeVcubeApplicationAndLicense(const DescribeVcubeApplicationAndLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVcubeApplicationAndLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVcubeApplicationAndLicenseResponse rsp = DescribeVcubeApplicationAndLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVcubeApplicationAndLicenseOutcome(rsp);
        else
            return DescribeVcubeApplicationAndLicenseOutcome(o.GetError());
    }
    else
    {
        return DescribeVcubeApplicationAndLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeVcubeApplicationAndLicenseAsync(const DescribeVcubeApplicationAndLicenseRequest& request, const DescribeVcubeApplicationAndLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVcubeApplicationAndLicenseRequest&;
    using Resp = DescribeVcubeApplicationAndLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVcubeApplicationAndLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::DescribeVcubeApplicationAndLicenseOutcomeCallable VcubeClient::DescribeVcubeApplicationAndLicenseCallable(const DescribeVcubeApplicationAndLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVcubeApplicationAndLicenseOutcome>>();
    DescribeVcubeApplicationAndLicenseAsync(
    request,
    [prom](
        const VcubeClient*,
        const DescribeVcubeApplicationAndLicenseRequest&,
        DescribeVcubeApplicationAndLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::DescribeVcubeApplicationAndPlayListOutcome VcubeClient::DescribeVcubeApplicationAndPlayList(const DescribeVcubeApplicationAndPlayListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVcubeApplicationAndPlayList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVcubeApplicationAndPlayListResponse rsp = DescribeVcubeApplicationAndPlayListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVcubeApplicationAndPlayListOutcome(rsp);
        else
            return DescribeVcubeApplicationAndPlayListOutcome(o.GetError());
    }
    else
    {
        return DescribeVcubeApplicationAndPlayListOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeVcubeApplicationAndPlayListAsync(const DescribeVcubeApplicationAndPlayListRequest& request, const DescribeVcubeApplicationAndPlayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVcubeApplicationAndPlayListRequest&;
    using Resp = DescribeVcubeApplicationAndPlayListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVcubeApplicationAndPlayList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::DescribeVcubeApplicationAndPlayListOutcomeCallable VcubeClient::DescribeVcubeApplicationAndPlayListCallable(const DescribeVcubeApplicationAndPlayListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVcubeApplicationAndPlayListOutcome>>();
    DescribeVcubeApplicationAndPlayListAsync(
    request,
    [prom](
        const VcubeClient*,
        const DescribeVcubeApplicationAndPlayListRequest&,
        DescribeVcubeApplicationAndPlayListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::DescribeVcubeApplicationAndXMagicListOutcome VcubeClient::DescribeVcubeApplicationAndXMagicList(const DescribeVcubeApplicationAndXMagicListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVcubeApplicationAndXMagicList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVcubeApplicationAndXMagicListResponse rsp = DescribeVcubeApplicationAndXMagicListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVcubeApplicationAndXMagicListOutcome(rsp);
        else
            return DescribeVcubeApplicationAndXMagicListOutcome(o.GetError());
    }
    else
    {
        return DescribeVcubeApplicationAndXMagicListOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeVcubeApplicationAndXMagicListAsync(const DescribeVcubeApplicationAndXMagicListRequest& request, const DescribeVcubeApplicationAndXMagicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVcubeApplicationAndXMagicListRequest&;
    using Resp = DescribeVcubeApplicationAndXMagicListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVcubeApplicationAndXMagicList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::DescribeVcubeApplicationAndXMagicListOutcomeCallable VcubeClient::DescribeVcubeApplicationAndXMagicListCallable(const DescribeVcubeApplicationAndXMagicListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVcubeApplicationAndXMagicListOutcome>>();
    DescribeVcubeApplicationAndXMagicListAsync(
    request,
    [prom](
        const VcubeClient*,
        const DescribeVcubeApplicationAndXMagicListRequest&,
        DescribeVcubeApplicationAndXMagicListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::DescribeVcubeResourcesOutcome VcubeClient::DescribeVcubeResources(const DescribeVcubeResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVcubeResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVcubeResourcesResponse rsp = DescribeVcubeResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVcubeResourcesOutcome(rsp);
        else
            return DescribeVcubeResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeVcubeResourcesOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeVcubeResourcesAsync(const DescribeVcubeResourcesRequest& request, const DescribeVcubeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVcubeResourcesRequest&;
    using Resp = DescribeVcubeResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVcubeResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::DescribeVcubeResourcesOutcomeCallable VcubeClient::DescribeVcubeResourcesCallable(const DescribeVcubeResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVcubeResourcesOutcome>>();
    DescribeVcubeResourcesAsync(
    request,
    [prom](
        const VcubeClient*,
        const DescribeVcubeResourcesRequest&,
        DescribeVcubeResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::DescribeVcubeResourcesListOutcome VcubeClient::DescribeVcubeResourcesList(const DescribeVcubeResourcesListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVcubeResourcesList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVcubeResourcesListResponse rsp = DescribeVcubeResourcesListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVcubeResourcesListOutcome(rsp);
        else
            return DescribeVcubeResourcesListOutcome(o.GetError());
    }
    else
    {
        return DescribeVcubeResourcesListOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeVcubeResourcesListAsync(const DescribeVcubeResourcesListRequest& request, const DescribeVcubeResourcesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVcubeResourcesListRequest&;
    using Resp = DescribeVcubeResourcesListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVcubeResourcesList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::DescribeVcubeResourcesListOutcomeCallable VcubeClient::DescribeVcubeResourcesListCallable(const DescribeVcubeResourcesListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVcubeResourcesListOutcome>>();
    DescribeVcubeResourcesListAsync(
    request,
    [prom](
        const VcubeClient*,
        const DescribeVcubeResourcesListRequest&,
        DescribeVcubeResourcesListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::DescribeXMagicResourceOutcome VcubeClient::DescribeXMagicResource(const DescribeXMagicResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeXMagicResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeXMagicResourceResponse rsp = DescribeXMagicResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeXMagicResourceOutcome(rsp);
        else
            return DescribeXMagicResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeXMagicResourceOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeXMagicResourceAsync(const DescribeXMagicResourceRequest& request, const DescribeXMagicResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeXMagicResourceRequest&;
    using Resp = DescribeXMagicResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeXMagicResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::DescribeXMagicResourceOutcomeCallable VcubeClient::DescribeXMagicResourceCallable(const DescribeXMagicResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeXMagicResourceOutcome>>();
    DescribeXMagicResourceAsync(
    request,
    [prom](
        const VcubeClient*,
        const DescribeXMagicResourceRequest&,
        DescribeXMagicResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::DescribeXMagicResourceListOutcome VcubeClient::DescribeXMagicResourceList(const DescribeXMagicResourceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeXMagicResourceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeXMagicResourceListResponse rsp = DescribeXMagicResourceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeXMagicResourceListOutcome(rsp);
        else
            return DescribeXMagicResourceListOutcome(o.GetError());
    }
    else
    {
        return DescribeXMagicResourceListOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeXMagicResourceListAsync(const DescribeXMagicResourceListRequest& request, const DescribeXMagicResourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeXMagicResourceListRequest&;
    using Resp = DescribeXMagicResourceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeXMagicResourceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::DescribeXMagicResourceListOutcomeCallable VcubeClient::DescribeXMagicResourceListCallable(const DescribeXMagicResourceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeXMagicResourceListOutcome>>();
    DescribeXMagicResourceListAsync(
    request,
    [prom](
        const VcubeClient*,
        const DescribeXMagicResourceListRequest&,
        DescribeXMagicResourceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::ModifyApplicationOutcome VcubeClient::ModifyApplication(const ModifyApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationResponse rsp = ModifyApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationOutcome(rsp);
        else
            return ModifyApplicationOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationOutcome(outcome.GetError());
    }
}

void VcubeClient::ModifyApplicationAsync(const ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationRequest&;
    using Resp = ModifyApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::ModifyApplicationOutcomeCallable VcubeClient::ModifyApplicationCallable(const ModifyApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationOutcome>>();
    ModifyApplicationAsync(
    request,
    [prom](
        const VcubeClient*,
        const ModifyApplicationRequest&,
        ModifyApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::ModifyFormalApplicationOutcome VcubeClient::ModifyFormalApplication(const ModifyFormalApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFormalApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFormalApplicationResponse rsp = ModifyFormalApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFormalApplicationOutcome(rsp);
        else
            return ModifyFormalApplicationOutcome(o.GetError());
    }
    else
    {
        return ModifyFormalApplicationOutcome(outcome.GetError());
    }
}

void VcubeClient::ModifyFormalApplicationAsync(const ModifyFormalApplicationRequest& request, const ModifyFormalApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFormalApplicationRequest&;
    using Resp = ModifyFormalApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFormalApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::ModifyFormalApplicationOutcomeCallable VcubeClient::ModifyFormalApplicationCallable(const ModifyFormalApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFormalApplicationOutcome>>();
    ModifyFormalApplicationAsync(
    request,
    [prom](
        const VcubeClient*,
        const ModifyFormalApplicationRequest&,
        ModifyFormalApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::ModifyLicenseOutcome VcubeClient::ModifyLicense(const ModifyLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLicenseResponse rsp = ModifyLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLicenseOutcome(rsp);
        else
            return ModifyLicenseOutcome(o.GetError());
    }
    else
    {
        return ModifyLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::ModifyLicenseAsync(const ModifyLicenseRequest& request, const ModifyLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLicenseRequest&;
    using Resp = ModifyLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::ModifyLicenseOutcomeCallable VcubeClient::ModifyLicenseCallable(const ModifyLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLicenseOutcome>>();
    ModifyLicenseAsync(
    request,
    [prom](
        const VcubeClient*,
        const ModifyLicenseRequest&,
        ModifyLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::ModifyPresetApplicationOutcome VcubeClient::ModifyPresetApplication(const ModifyPresetApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPresetApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPresetApplicationResponse rsp = ModifyPresetApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPresetApplicationOutcome(rsp);
        else
            return ModifyPresetApplicationOutcome(o.GetError());
    }
    else
    {
        return ModifyPresetApplicationOutcome(outcome.GetError());
    }
}

void VcubeClient::ModifyPresetApplicationAsync(const ModifyPresetApplicationRequest& request, const ModifyPresetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPresetApplicationRequest&;
    using Resp = ModifyPresetApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPresetApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::ModifyPresetApplicationOutcomeCallable VcubeClient::ModifyPresetApplicationCallable(const ModifyPresetApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPresetApplicationOutcome>>();
    ModifyPresetApplicationAsync(
    request,
    [prom](
        const VcubeClient*,
        const ModifyPresetApplicationRequest&,
        ModifyPresetApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::ModifyTrialLicenseOutcome VcubeClient::ModifyTrialLicense(const ModifyTrialLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTrialLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTrialLicenseResponse rsp = ModifyTrialLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTrialLicenseOutcome(rsp);
        else
            return ModifyTrialLicenseOutcome(o.GetError());
    }
    else
    {
        return ModifyTrialLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::ModifyTrialLicenseAsync(const ModifyTrialLicenseRequest& request, const ModifyTrialLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTrialLicenseRequest&;
    using Resp = ModifyTrialLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTrialLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::ModifyTrialLicenseOutcomeCallable VcubeClient::ModifyTrialLicenseCallable(const ModifyTrialLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTrialLicenseOutcome>>();
    ModifyTrialLicenseAsync(
    request,
    [prom](
        const VcubeClient*,
        const ModifyTrialLicenseRequest&,
        ModifyTrialLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::ModifyXMagicOutcome VcubeClient::ModifyXMagic(const ModifyXMagicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyXMagic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyXMagicResponse rsp = ModifyXMagicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyXMagicOutcome(rsp);
        else
            return ModifyXMagicOutcome(o.GetError());
    }
    else
    {
        return ModifyXMagicOutcome(outcome.GetError());
    }
}

void VcubeClient::ModifyXMagicAsync(const ModifyXMagicRequest& request, const ModifyXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyXMagicRequest&;
    using Resp = ModifyXMagicResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyXMagic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::ModifyXMagicOutcomeCallable VcubeClient::ModifyXMagicCallable(const ModifyXMagicRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyXMagicOutcome>>();
    ModifyXMagicAsync(
    request,
    [prom](
        const VcubeClient*,
        const ModifyXMagicRequest&,
        ModifyXMagicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::RenewLicenseOutcome VcubeClient::RenewLicense(const RenewLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "RenewLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewLicenseResponse rsp = RenewLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewLicenseOutcome(rsp);
        else
            return RenewLicenseOutcome(o.GetError());
    }
    else
    {
        return RenewLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::RenewLicenseAsync(const RenewLicenseRequest& request, const RenewLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewLicenseRequest&;
    using Resp = RenewLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "RenewLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::RenewLicenseOutcomeCallable VcubeClient::RenewLicenseCallable(const RenewLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewLicenseOutcome>>();
    RenewLicenseAsync(
    request,
    [prom](
        const VcubeClient*,
        const RenewLicenseRequest&,
        RenewLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::RenewTestXMagicOutcome VcubeClient::RenewTestXMagic(const RenewTestXMagicRequest &request)
{
    auto outcome = MakeRequest(request, "RenewTestXMagic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewTestXMagicResponse rsp = RenewTestXMagicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewTestXMagicOutcome(rsp);
        else
            return RenewTestXMagicOutcome(o.GetError());
    }
    else
    {
        return RenewTestXMagicOutcome(outcome.GetError());
    }
}

void VcubeClient::RenewTestXMagicAsync(const RenewTestXMagicRequest& request, const RenewTestXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewTestXMagicRequest&;
    using Resp = RenewTestXMagicResponse;

    DoRequestAsync<Req, Resp>(
        "RenewTestXMagic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::RenewTestXMagicOutcomeCallable VcubeClient::RenewTestXMagicCallable(const RenewTestXMagicRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewTestXMagicOutcome>>();
    RenewTestXMagicAsync(
    request,
    [prom](
        const VcubeClient*,
        const RenewTestXMagicRequest&,
        RenewTestXMagicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::RenewVideoOutcome VcubeClient::RenewVideo(const RenewVideoRequest &request)
{
    auto outcome = MakeRequest(request, "RenewVideo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewVideoResponse rsp = RenewVideoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewVideoOutcome(rsp);
        else
            return RenewVideoOutcome(o.GetError());
    }
    else
    {
        return RenewVideoOutcome(outcome.GetError());
    }
}

void VcubeClient::RenewVideoAsync(const RenewVideoRequest& request, const RenewVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewVideoRequest&;
    using Resp = RenewVideoResponse;

    DoRequestAsync<Req, Resp>(
        "RenewVideo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::RenewVideoOutcomeCallable VcubeClient::RenewVideoCallable(const RenewVideoRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewVideoOutcome>>();
    RenewVideoAsync(
    request,
    [prom](
        const VcubeClient*,
        const RenewVideoRequest&,
        RenewVideoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::UpdateTestXMagicOutcome VcubeClient::UpdateTestXMagic(const UpdateTestXMagicRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTestXMagic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTestXMagicResponse rsp = UpdateTestXMagicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTestXMagicOutcome(rsp);
        else
            return UpdateTestXMagicOutcome(o.GetError());
    }
    else
    {
        return UpdateTestXMagicOutcome(outcome.GetError());
    }
}

void VcubeClient::UpdateTestXMagicAsync(const UpdateTestXMagicRequest& request, const UpdateTestXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTestXMagicRequest&;
    using Resp = UpdateTestXMagicResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTestXMagic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::UpdateTestXMagicOutcomeCallable VcubeClient::UpdateTestXMagicCallable(const UpdateTestXMagicRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTestXMagicOutcome>>();
    UpdateTestXMagicAsync(
    request,
    [prom](
        const VcubeClient*,
        const UpdateTestXMagicRequest&,
        UpdateTestXMagicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::UpdateTrialLicenseOutcome VcubeClient::UpdateTrialLicense(const UpdateTrialLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTrialLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTrialLicenseResponse rsp = UpdateTrialLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTrialLicenseOutcome(rsp);
        else
            return UpdateTrialLicenseOutcome(o.GetError());
    }
    else
    {
        return UpdateTrialLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::UpdateTrialLicenseAsync(const UpdateTrialLicenseRequest& request, const UpdateTrialLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTrialLicenseRequest&;
    using Resp = UpdateTrialLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTrialLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::UpdateTrialLicenseOutcomeCallable VcubeClient::UpdateTrialLicenseCallable(const UpdateTrialLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTrialLicenseOutcome>>();
    UpdateTrialLicenseAsync(
    request,
    [prom](
        const VcubeClient*,
        const UpdateTrialLicenseRequest&,
        UpdateTrialLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcubeClient::UpdateXMagicOutcome VcubeClient::UpdateXMagic(const UpdateXMagicRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateXMagic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateXMagicResponse rsp = UpdateXMagicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateXMagicOutcome(rsp);
        else
            return UpdateXMagicOutcome(o.GetError());
    }
    else
    {
        return UpdateXMagicOutcome(outcome.GetError());
    }
}

void VcubeClient::UpdateXMagicAsync(const UpdateXMagicRequest& request, const UpdateXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateXMagicRequest&;
    using Resp = UpdateXMagicResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateXMagic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcubeClient::UpdateXMagicOutcomeCallable VcubeClient::UpdateXMagicCallable(const UpdateXMagicRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateXMagicOutcome>>();
    UpdateXMagicAsync(
    request,
    [prom](
        const VcubeClient*,
        const UpdateXMagicRequest&,
        UpdateXMagicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

