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

#include <tencentcloud/btoe/v20210514/BtoeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Btoe::V20210514;
using namespace TencentCloud::Btoe::V20210514::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-14";
    const string ENDPOINT = "btoe.tencentcloudapi.com";
}

BtoeClient::BtoeClient(const Credential &credential, const string &region) :
    BtoeClient(credential, region, ClientProfile())
{
}

BtoeClient::BtoeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BtoeClient::CreateAudioDepositOutcome BtoeClient::CreateAudioDeposit(const CreateAudioDepositRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAudioDeposit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAudioDepositResponse rsp = CreateAudioDepositResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAudioDepositOutcome(rsp);
        else
            return CreateAudioDepositOutcome(o.GetError());
    }
    else
    {
        return CreateAudioDepositOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateAudioDepositAsync(const CreateAudioDepositRequest& request, const CreateAudioDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAudioDepositRequest&;
    using Resp = CreateAudioDepositResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAudioDeposit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BtoeClient::CreateAudioDepositOutcomeCallable BtoeClient::CreateAudioDepositCallable(const CreateAudioDepositRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAudioDepositOutcome>>();
    CreateAudioDepositAsync(
    request,
    [prom](
        const BtoeClient*,
        const CreateAudioDepositRequest&,
        CreateAudioDepositOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BtoeClient::CreateDataDepositOutcome BtoeClient::CreateDataDeposit(const CreateDataDepositRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataDeposit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataDepositResponse rsp = CreateDataDepositResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataDepositOutcome(rsp);
        else
            return CreateDataDepositOutcome(o.GetError());
    }
    else
    {
        return CreateDataDepositOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateDataDepositAsync(const CreateDataDepositRequest& request, const CreateDataDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDataDepositRequest&;
    using Resp = CreateDataDepositResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDataDeposit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BtoeClient::CreateDataDepositOutcomeCallable BtoeClient::CreateDataDepositCallable(const CreateDataDepositRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDataDepositOutcome>>();
    CreateDataDepositAsync(
    request,
    [prom](
        const BtoeClient*,
        const CreateDataDepositRequest&,
        CreateDataDepositOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BtoeClient::CreateDocDepositOutcome BtoeClient::CreateDocDeposit(const CreateDocDepositRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDocDeposit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDocDepositResponse rsp = CreateDocDepositResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDocDepositOutcome(rsp);
        else
            return CreateDocDepositOutcome(o.GetError());
    }
    else
    {
        return CreateDocDepositOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateDocDepositAsync(const CreateDocDepositRequest& request, const CreateDocDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDocDepositRequest&;
    using Resp = CreateDocDepositResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDocDeposit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BtoeClient::CreateDocDepositOutcomeCallable BtoeClient::CreateDocDepositCallable(const CreateDocDepositRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDocDepositOutcome>>();
    CreateDocDepositAsync(
    request,
    [prom](
        const BtoeClient*,
        const CreateDocDepositRequest&,
        CreateDocDepositOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BtoeClient::CreateHashDepositOutcome BtoeClient::CreateHashDeposit(const CreateHashDepositRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHashDeposit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHashDepositResponse rsp = CreateHashDepositResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHashDepositOutcome(rsp);
        else
            return CreateHashDepositOutcome(o.GetError());
    }
    else
    {
        return CreateHashDepositOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateHashDepositAsync(const CreateHashDepositRequest& request, const CreateHashDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHashDepositRequest&;
    using Resp = CreateHashDepositResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHashDeposit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BtoeClient::CreateHashDepositOutcomeCallable BtoeClient::CreateHashDepositCallable(const CreateHashDepositRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHashDepositOutcome>>();
    CreateHashDepositAsync(
    request,
    [prom](
        const BtoeClient*,
        const CreateHashDepositRequest&,
        CreateHashDepositOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BtoeClient::CreateHashDepositNoCertOutcome BtoeClient::CreateHashDepositNoCert(const CreateHashDepositNoCertRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHashDepositNoCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHashDepositNoCertResponse rsp = CreateHashDepositNoCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHashDepositNoCertOutcome(rsp);
        else
            return CreateHashDepositNoCertOutcome(o.GetError());
    }
    else
    {
        return CreateHashDepositNoCertOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateHashDepositNoCertAsync(const CreateHashDepositNoCertRequest& request, const CreateHashDepositNoCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHashDepositNoCertRequest&;
    using Resp = CreateHashDepositNoCertResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHashDepositNoCert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BtoeClient::CreateHashDepositNoCertOutcomeCallable BtoeClient::CreateHashDepositNoCertCallable(const CreateHashDepositNoCertRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHashDepositNoCertOutcome>>();
    CreateHashDepositNoCertAsync(
    request,
    [prom](
        const BtoeClient*,
        const CreateHashDepositNoCertRequest&,
        CreateHashDepositNoCertOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BtoeClient::CreateHashDepositNoSealOutcome BtoeClient::CreateHashDepositNoSeal(const CreateHashDepositNoSealRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHashDepositNoSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHashDepositNoSealResponse rsp = CreateHashDepositNoSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHashDepositNoSealOutcome(rsp);
        else
            return CreateHashDepositNoSealOutcome(o.GetError());
    }
    else
    {
        return CreateHashDepositNoSealOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateHashDepositNoSealAsync(const CreateHashDepositNoSealRequest& request, const CreateHashDepositNoSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHashDepositNoSealRequest&;
    using Resp = CreateHashDepositNoSealResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHashDepositNoSeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BtoeClient::CreateHashDepositNoSealOutcomeCallable BtoeClient::CreateHashDepositNoSealCallable(const CreateHashDepositNoSealRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHashDepositNoSealOutcome>>();
    CreateHashDepositNoSealAsync(
    request,
    [prom](
        const BtoeClient*,
        const CreateHashDepositNoSealRequest&,
        CreateHashDepositNoSealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BtoeClient::CreateImageDepositOutcome BtoeClient::CreateImageDeposit(const CreateImageDepositRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImageDeposit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImageDepositResponse rsp = CreateImageDepositResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImageDepositOutcome(rsp);
        else
            return CreateImageDepositOutcome(o.GetError());
    }
    else
    {
        return CreateImageDepositOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateImageDepositAsync(const CreateImageDepositRequest& request, const CreateImageDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateImageDepositRequest&;
    using Resp = CreateImageDepositResponse;

    DoRequestAsync<Req, Resp>(
        "CreateImageDeposit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BtoeClient::CreateImageDepositOutcomeCallable BtoeClient::CreateImageDepositCallable(const CreateImageDepositRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateImageDepositOutcome>>();
    CreateImageDepositAsync(
    request,
    [prom](
        const BtoeClient*,
        const CreateImageDepositRequest&,
        CreateImageDepositOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BtoeClient::CreateVideoDepositOutcome BtoeClient::CreateVideoDeposit(const CreateVideoDepositRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVideoDeposit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVideoDepositResponse rsp = CreateVideoDepositResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVideoDepositOutcome(rsp);
        else
            return CreateVideoDepositOutcome(o.GetError());
    }
    else
    {
        return CreateVideoDepositOutcome(outcome.GetError());
    }
}

void BtoeClient::CreateVideoDepositAsync(const CreateVideoDepositRequest& request, const CreateVideoDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVideoDepositRequest&;
    using Resp = CreateVideoDepositResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVideoDeposit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BtoeClient::CreateVideoDepositOutcomeCallable BtoeClient::CreateVideoDepositCallable(const CreateVideoDepositRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVideoDepositOutcome>>();
    CreateVideoDepositAsync(
    request,
    [prom](
        const BtoeClient*,
        const CreateVideoDepositRequest&,
        CreateVideoDepositOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BtoeClient::GetDepositCertOutcome BtoeClient::GetDepositCert(const GetDepositCertRequest &request)
{
    auto outcome = MakeRequest(request, "GetDepositCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDepositCertResponse rsp = GetDepositCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDepositCertOutcome(rsp);
        else
            return GetDepositCertOutcome(o.GetError());
    }
    else
    {
        return GetDepositCertOutcome(outcome.GetError());
    }
}

void BtoeClient::GetDepositCertAsync(const GetDepositCertRequest& request, const GetDepositCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDepositCertRequest&;
    using Resp = GetDepositCertResponse;

    DoRequestAsync<Req, Resp>(
        "GetDepositCert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BtoeClient::GetDepositCertOutcomeCallable BtoeClient::GetDepositCertCallable(const GetDepositCertRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDepositCertOutcome>>();
    GetDepositCertAsync(
    request,
    [prom](
        const BtoeClient*,
        const GetDepositCertRequest&,
        GetDepositCertOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BtoeClient::GetDepositFileOutcome BtoeClient::GetDepositFile(const GetDepositFileRequest &request)
{
    auto outcome = MakeRequest(request, "GetDepositFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDepositFileResponse rsp = GetDepositFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDepositFileOutcome(rsp);
        else
            return GetDepositFileOutcome(o.GetError());
    }
    else
    {
        return GetDepositFileOutcome(outcome.GetError());
    }
}

void BtoeClient::GetDepositFileAsync(const GetDepositFileRequest& request, const GetDepositFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDepositFileRequest&;
    using Resp = GetDepositFileResponse;

    DoRequestAsync<Req, Resp>(
        "GetDepositFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BtoeClient::GetDepositFileOutcomeCallable BtoeClient::GetDepositFileCallable(const GetDepositFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDepositFileOutcome>>();
    GetDepositFileAsync(
    request,
    [prom](
        const BtoeClient*,
        const GetDepositFileRequest&,
        GetDepositFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BtoeClient::GetDepositInfoOutcome BtoeClient::GetDepositInfo(const GetDepositInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetDepositInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDepositInfoResponse rsp = GetDepositInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDepositInfoOutcome(rsp);
        else
            return GetDepositInfoOutcome(o.GetError());
    }
    else
    {
        return GetDepositInfoOutcome(outcome.GetError());
    }
}

void BtoeClient::GetDepositInfoAsync(const GetDepositInfoRequest& request, const GetDepositInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDepositInfoRequest&;
    using Resp = GetDepositInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetDepositInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BtoeClient::GetDepositInfoOutcomeCallable BtoeClient::GetDepositInfoCallable(const GetDepositInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDepositInfoOutcome>>();
    GetDepositInfoAsync(
    request,
    [prom](
        const BtoeClient*,
        const GetDepositInfoRequest&,
        GetDepositInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BtoeClient::VerifyEvidenceBlockChainTxHashOutcome BtoeClient::VerifyEvidenceBlockChainTxHash(const VerifyEvidenceBlockChainTxHashRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyEvidenceBlockChainTxHash");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyEvidenceBlockChainTxHashResponse rsp = VerifyEvidenceBlockChainTxHashResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyEvidenceBlockChainTxHashOutcome(rsp);
        else
            return VerifyEvidenceBlockChainTxHashOutcome(o.GetError());
    }
    else
    {
        return VerifyEvidenceBlockChainTxHashOutcome(outcome.GetError());
    }
}

void BtoeClient::VerifyEvidenceBlockChainTxHashAsync(const VerifyEvidenceBlockChainTxHashRequest& request, const VerifyEvidenceBlockChainTxHashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyEvidenceBlockChainTxHashRequest&;
    using Resp = VerifyEvidenceBlockChainTxHashResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyEvidenceBlockChainTxHash", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BtoeClient::VerifyEvidenceBlockChainTxHashOutcomeCallable BtoeClient::VerifyEvidenceBlockChainTxHashCallable(const VerifyEvidenceBlockChainTxHashRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyEvidenceBlockChainTxHashOutcome>>();
    VerifyEvidenceBlockChainTxHashAsync(
    request,
    [prom](
        const BtoeClient*,
        const VerifyEvidenceBlockChainTxHashRequest&,
        VerifyEvidenceBlockChainTxHashOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BtoeClient::VerifyEvidenceHashOutcome BtoeClient::VerifyEvidenceHash(const VerifyEvidenceHashRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyEvidenceHash");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyEvidenceHashResponse rsp = VerifyEvidenceHashResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyEvidenceHashOutcome(rsp);
        else
            return VerifyEvidenceHashOutcome(o.GetError());
    }
    else
    {
        return VerifyEvidenceHashOutcome(outcome.GetError());
    }
}

void BtoeClient::VerifyEvidenceHashAsync(const VerifyEvidenceHashRequest& request, const VerifyEvidenceHashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyEvidenceHashRequest&;
    using Resp = VerifyEvidenceHashResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyEvidenceHash", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BtoeClient::VerifyEvidenceHashOutcomeCallable BtoeClient::VerifyEvidenceHashCallable(const VerifyEvidenceHashRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyEvidenceHashOutcome>>();
    VerifyEvidenceHashAsync(
    request,
    [prom](
        const BtoeClient*,
        const VerifyEvidenceHashRequest&,
        VerifyEvidenceHashOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

