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

#include <tencentcloud/kms/v20190118/KmsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Kms::V20190118;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-01-18";
    const string ENDPOINT = "kms.tencentcloudapi.com";
}

KmsClient::KmsClient(const Credential &credential, const string &region) :
    KmsClient(credential, region, ClientProfile())
{
}

KmsClient::KmsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


KmsClient::ArchiveKeyOutcome KmsClient::ArchiveKey(const ArchiveKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ArchiveKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ArchiveKeyResponse rsp = ArchiveKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ArchiveKeyOutcome(rsp);
        else
            return ArchiveKeyOutcome(o.GetError());
    }
    else
    {
        return ArchiveKeyOutcome(outcome.GetError());
    }
}

void KmsClient::ArchiveKeyAsync(const ArchiveKeyRequest& request, const ArchiveKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ArchiveKeyRequest&;
    using Resp = ArchiveKeyResponse;

    DoRequestAsync<Req, Resp>(
        "ArchiveKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::ArchiveKeyOutcomeCallable KmsClient::ArchiveKeyCallable(const ArchiveKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ArchiveKeyOutcome>>();
    ArchiveKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const ArchiveKeyRequest&,
        ArchiveKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::AsymmetricRsaDecryptOutcome KmsClient::AsymmetricRsaDecrypt(const AsymmetricRsaDecryptRequest &request)
{
    auto outcome = MakeRequest(request, "AsymmetricRsaDecrypt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AsymmetricRsaDecryptResponse rsp = AsymmetricRsaDecryptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AsymmetricRsaDecryptOutcome(rsp);
        else
            return AsymmetricRsaDecryptOutcome(o.GetError());
    }
    else
    {
        return AsymmetricRsaDecryptOutcome(outcome.GetError());
    }
}

void KmsClient::AsymmetricRsaDecryptAsync(const AsymmetricRsaDecryptRequest& request, const AsymmetricRsaDecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AsymmetricRsaDecryptRequest&;
    using Resp = AsymmetricRsaDecryptResponse;

    DoRequestAsync<Req, Resp>(
        "AsymmetricRsaDecrypt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::AsymmetricRsaDecryptOutcomeCallable KmsClient::AsymmetricRsaDecryptCallable(const AsymmetricRsaDecryptRequest &request)
{
    const auto prom = std::make_shared<std::promise<AsymmetricRsaDecryptOutcome>>();
    AsymmetricRsaDecryptAsync(
    request,
    [prom](
        const KmsClient*,
        const AsymmetricRsaDecryptRequest&,
        AsymmetricRsaDecryptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::AsymmetricSm2DecryptOutcome KmsClient::AsymmetricSm2Decrypt(const AsymmetricSm2DecryptRequest &request)
{
    auto outcome = MakeRequest(request, "AsymmetricSm2Decrypt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AsymmetricSm2DecryptResponse rsp = AsymmetricSm2DecryptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AsymmetricSm2DecryptOutcome(rsp);
        else
            return AsymmetricSm2DecryptOutcome(o.GetError());
    }
    else
    {
        return AsymmetricSm2DecryptOutcome(outcome.GetError());
    }
}

void KmsClient::AsymmetricSm2DecryptAsync(const AsymmetricSm2DecryptRequest& request, const AsymmetricSm2DecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AsymmetricSm2DecryptRequest&;
    using Resp = AsymmetricSm2DecryptResponse;

    DoRequestAsync<Req, Resp>(
        "AsymmetricSm2Decrypt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::AsymmetricSm2DecryptOutcomeCallable KmsClient::AsymmetricSm2DecryptCallable(const AsymmetricSm2DecryptRequest &request)
{
    const auto prom = std::make_shared<std::promise<AsymmetricSm2DecryptOutcome>>();
    AsymmetricSm2DecryptAsync(
    request,
    [prom](
        const KmsClient*,
        const AsymmetricSm2DecryptRequest&,
        AsymmetricSm2DecryptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::BindCloudResourceOutcome KmsClient::BindCloudResource(const BindCloudResourceRequest &request)
{
    auto outcome = MakeRequest(request, "BindCloudResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindCloudResourceResponse rsp = BindCloudResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindCloudResourceOutcome(rsp);
        else
            return BindCloudResourceOutcome(o.GetError());
    }
    else
    {
        return BindCloudResourceOutcome(outcome.GetError());
    }
}

void KmsClient::BindCloudResourceAsync(const BindCloudResourceRequest& request, const BindCloudResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindCloudResourceRequest&;
    using Resp = BindCloudResourceResponse;

    DoRequestAsync<Req, Resp>(
        "BindCloudResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::BindCloudResourceOutcomeCallable KmsClient::BindCloudResourceCallable(const BindCloudResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindCloudResourceOutcome>>();
    BindCloudResourceAsync(
    request,
    [prom](
        const KmsClient*,
        const BindCloudResourceRequest&,
        BindCloudResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::CancelDataKeyDeletionOutcome KmsClient::CancelDataKeyDeletion(const CancelDataKeyDeletionRequest &request)
{
    auto outcome = MakeRequest(request, "CancelDataKeyDeletion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelDataKeyDeletionResponse rsp = CancelDataKeyDeletionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelDataKeyDeletionOutcome(rsp);
        else
            return CancelDataKeyDeletionOutcome(o.GetError());
    }
    else
    {
        return CancelDataKeyDeletionOutcome(outcome.GetError());
    }
}

void KmsClient::CancelDataKeyDeletionAsync(const CancelDataKeyDeletionRequest& request, const CancelDataKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelDataKeyDeletionRequest&;
    using Resp = CancelDataKeyDeletionResponse;

    DoRequestAsync<Req, Resp>(
        "CancelDataKeyDeletion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::CancelDataKeyDeletionOutcomeCallable KmsClient::CancelDataKeyDeletionCallable(const CancelDataKeyDeletionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelDataKeyDeletionOutcome>>();
    CancelDataKeyDeletionAsync(
    request,
    [prom](
        const KmsClient*,
        const CancelDataKeyDeletionRequest&,
        CancelDataKeyDeletionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::CancelKeyArchiveOutcome KmsClient::CancelKeyArchive(const CancelKeyArchiveRequest &request)
{
    auto outcome = MakeRequest(request, "CancelKeyArchive");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelKeyArchiveResponse rsp = CancelKeyArchiveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelKeyArchiveOutcome(rsp);
        else
            return CancelKeyArchiveOutcome(o.GetError());
    }
    else
    {
        return CancelKeyArchiveOutcome(outcome.GetError());
    }
}

void KmsClient::CancelKeyArchiveAsync(const CancelKeyArchiveRequest& request, const CancelKeyArchiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelKeyArchiveRequest&;
    using Resp = CancelKeyArchiveResponse;

    DoRequestAsync<Req, Resp>(
        "CancelKeyArchive", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::CancelKeyArchiveOutcomeCallable KmsClient::CancelKeyArchiveCallable(const CancelKeyArchiveRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelKeyArchiveOutcome>>();
    CancelKeyArchiveAsync(
    request,
    [prom](
        const KmsClient*,
        const CancelKeyArchiveRequest&,
        CancelKeyArchiveOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::CancelKeyDeletionOutcome KmsClient::CancelKeyDeletion(const CancelKeyDeletionRequest &request)
{
    auto outcome = MakeRequest(request, "CancelKeyDeletion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelKeyDeletionResponse rsp = CancelKeyDeletionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelKeyDeletionOutcome(rsp);
        else
            return CancelKeyDeletionOutcome(o.GetError());
    }
    else
    {
        return CancelKeyDeletionOutcome(outcome.GetError());
    }
}

void KmsClient::CancelKeyDeletionAsync(const CancelKeyDeletionRequest& request, const CancelKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelKeyDeletionRequest&;
    using Resp = CancelKeyDeletionResponse;

    DoRequestAsync<Req, Resp>(
        "CancelKeyDeletion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::CancelKeyDeletionOutcomeCallable KmsClient::CancelKeyDeletionCallable(const CancelKeyDeletionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelKeyDeletionOutcome>>();
    CancelKeyDeletionAsync(
    request,
    [prom](
        const KmsClient*,
        const CancelKeyDeletionRequest&,
        CancelKeyDeletionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::CreateKeyOutcome KmsClient::CreateKey(const CreateKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKeyResponse rsp = CreateKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKeyOutcome(rsp);
        else
            return CreateKeyOutcome(o.GetError());
    }
    else
    {
        return CreateKeyOutcome(outcome.GetError());
    }
}

void KmsClient::CreateKeyAsync(const CreateKeyRequest& request, const CreateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateKeyRequest&;
    using Resp = CreateKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::CreateKeyOutcomeCallable KmsClient::CreateKeyCallable(const CreateKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateKeyOutcome>>();
    CreateKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const CreateKeyRequest&,
        CreateKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::CreateWhiteBoxKeyOutcome KmsClient::CreateWhiteBoxKey(const CreateWhiteBoxKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWhiteBoxKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWhiteBoxKeyResponse rsp = CreateWhiteBoxKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWhiteBoxKeyOutcome(rsp);
        else
            return CreateWhiteBoxKeyOutcome(o.GetError());
    }
    else
    {
        return CreateWhiteBoxKeyOutcome(outcome.GetError());
    }
}

void KmsClient::CreateWhiteBoxKeyAsync(const CreateWhiteBoxKeyRequest& request, const CreateWhiteBoxKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWhiteBoxKeyRequest&;
    using Resp = CreateWhiteBoxKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWhiteBoxKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::CreateWhiteBoxKeyOutcomeCallable KmsClient::CreateWhiteBoxKeyCallable(const CreateWhiteBoxKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWhiteBoxKeyOutcome>>();
    CreateWhiteBoxKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const CreateWhiteBoxKeyRequest&,
        CreateWhiteBoxKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DecryptOutcome KmsClient::Decrypt(const DecryptRequest &request)
{
    auto outcome = MakeRequest(request, "Decrypt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DecryptResponse rsp = DecryptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DecryptOutcome(rsp);
        else
            return DecryptOutcome(o.GetError());
    }
    else
    {
        return DecryptOutcome(outcome.GetError());
    }
}

void KmsClient::DecryptAsync(const DecryptRequest& request, const DecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DecryptRequest&;
    using Resp = DecryptResponse;

    DoRequestAsync<Req, Resp>(
        "Decrypt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DecryptOutcomeCallable KmsClient::DecryptCallable(const DecryptRequest &request)
{
    const auto prom = std::make_shared<std::promise<DecryptOutcome>>();
    DecryptAsync(
    request,
    [prom](
        const KmsClient*,
        const DecryptRequest&,
        DecryptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DeleteImportedKeyMaterialOutcome KmsClient::DeleteImportedKeyMaterial(const DeleteImportedKeyMaterialRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImportedKeyMaterial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImportedKeyMaterialResponse rsp = DeleteImportedKeyMaterialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImportedKeyMaterialOutcome(rsp);
        else
            return DeleteImportedKeyMaterialOutcome(o.GetError());
    }
    else
    {
        return DeleteImportedKeyMaterialOutcome(outcome.GetError());
    }
}

void KmsClient::DeleteImportedKeyMaterialAsync(const DeleteImportedKeyMaterialRequest& request, const DeleteImportedKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteImportedKeyMaterialRequest&;
    using Resp = DeleteImportedKeyMaterialResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteImportedKeyMaterial", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DeleteImportedKeyMaterialOutcomeCallable KmsClient::DeleteImportedKeyMaterialCallable(const DeleteImportedKeyMaterialRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteImportedKeyMaterialOutcome>>();
    DeleteImportedKeyMaterialAsync(
    request,
    [prom](
        const KmsClient*,
        const DeleteImportedKeyMaterialRequest&,
        DeleteImportedKeyMaterialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DeleteWhiteBoxKeyOutcome KmsClient::DeleteWhiteBoxKey(const DeleteWhiteBoxKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWhiteBoxKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWhiteBoxKeyResponse rsp = DeleteWhiteBoxKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWhiteBoxKeyOutcome(rsp);
        else
            return DeleteWhiteBoxKeyOutcome(o.GetError());
    }
    else
    {
        return DeleteWhiteBoxKeyOutcome(outcome.GetError());
    }
}

void KmsClient::DeleteWhiteBoxKeyAsync(const DeleteWhiteBoxKeyRequest& request, const DeleteWhiteBoxKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWhiteBoxKeyRequest&;
    using Resp = DeleteWhiteBoxKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWhiteBoxKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DeleteWhiteBoxKeyOutcomeCallable KmsClient::DeleteWhiteBoxKeyCallable(const DeleteWhiteBoxKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWhiteBoxKeyOutcome>>();
    DeleteWhiteBoxKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const DeleteWhiteBoxKeyRequest&,
        DeleteWhiteBoxKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DescribeDataKeyOutcome KmsClient::DescribeDataKey(const DescribeDataKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataKeyResponse rsp = DescribeDataKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataKeyOutcome(rsp);
        else
            return DescribeDataKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeDataKeyOutcome(outcome.GetError());
    }
}

void KmsClient::DescribeDataKeyAsync(const DescribeDataKeyRequest& request, const DescribeDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataKeyRequest&;
    using Resp = DescribeDataKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DescribeDataKeyOutcomeCallable KmsClient::DescribeDataKeyCallable(const DescribeDataKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataKeyOutcome>>();
    DescribeDataKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const DescribeDataKeyRequest&,
        DescribeDataKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DescribeDataKeysOutcome KmsClient::DescribeDataKeys(const DescribeDataKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataKeysResponse rsp = DescribeDataKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataKeysOutcome(rsp);
        else
            return DescribeDataKeysOutcome(o.GetError());
    }
    else
    {
        return DescribeDataKeysOutcome(outcome.GetError());
    }
}

void KmsClient::DescribeDataKeysAsync(const DescribeDataKeysRequest& request, const DescribeDataKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataKeysRequest&;
    using Resp = DescribeDataKeysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DescribeDataKeysOutcomeCallable KmsClient::DescribeDataKeysCallable(const DescribeDataKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataKeysOutcome>>();
    DescribeDataKeysAsync(
    request,
    [prom](
        const KmsClient*,
        const DescribeDataKeysRequest&,
        DescribeDataKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DescribeKeyOutcome KmsClient::DescribeKey(const DescribeKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKeyResponse rsp = DescribeKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKeyOutcome(rsp);
        else
            return DescribeKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeKeyOutcome(outcome.GetError());
    }
}

void KmsClient::DescribeKeyAsync(const DescribeKeyRequest& request, const DescribeKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKeyRequest&;
    using Resp = DescribeKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DescribeKeyOutcomeCallable KmsClient::DescribeKeyCallable(const DescribeKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKeyOutcome>>();
    DescribeKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const DescribeKeyRequest&,
        DescribeKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DescribeKeysOutcome KmsClient::DescribeKeys(const DescribeKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKeysResponse rsp = DescribeKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKeysOutcome(rsp);
        else
            return DescribeKeysOutcome(o.GetError());
    }
    else
    {
        return DescribeKeysOutcome(outcome.GetError());
    }
}

void KmsClient::DescribeKeysAsync(const DescribeKeysRequest& request, const DescribeKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKeysRequest&;
    using Resp = DescribeKeysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DescribeKeysOutcomeCallable KmsClient::DescribeKeysCallable(const DescribeKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKeysOutcome>>();
    DescribeKeysAsync(
    request,
    [prom](
        const KmsClient*,
        const DescribeKeysRequest&,
        DescribeKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DescribeWhiteBoxDecryptKeyOutcome KmsClient::DescribeWhiteBoxDecryptKey(const DescribeWhiteBoxDecryptKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteBoxDecryptKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteBoxDecryptKeyResponse rsp = DescribeWhiteBoxDecryptKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteBoxDecryptKeyOutcome(rsp);
        else
            return DescribeWhiteBoxDecryptKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteBoxDecryptKeyOutcome(outcome.GetError());
    }
}

void KmsClient::DescribeWhiteBoxDecryptKeyAsync(const DescribeWhiteBoxDecryptKeyRequest& request, const DescribeWhiteBoxDecryptKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWhiteBoxDecryptKeyRequest&;
    using Resp = DescribeWhiteBoxDecryptKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWhiteBoxDecryptKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DescribeWhiteBoxDecryptKeyOutcomeCallable KmsClient::DescribeWhiteBoxDecryptKeyCallable(const DescribeWhiteBoxDecryptKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWhiteBoxDecryptKeyOutcome>>();
    DescribeWhiteBoxDecryptKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const DescribeWhiteBoxDecryptKeyRequest&,
        DescribeWhiteBoxDecryptKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DescribeWhiteBoxDeviceFingerprintsOutcome KmsClient::DescribeWhiteBoxDeviceFingerprints(const DescribeWhiteBoxDeviceFingerprintsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteBoxDeviceFingerprints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteBoxDeviceFingerprintsResponse rsp = DescribeWhiteBoxDeviceFingerprintsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteBoxDeviceFingerprintsOutcome(rsp);
        else
            return DescribeWhiteBoxDeviceFingerprintsOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteBoxDeviceFingerprintsOutcome(outcome.GetError());
    }
}

void KmsClient::DescribeWhiteBoxDeviceFingerprintsAsync(const DescribeWhiteBoxDeviceFingerprintsRequest& request, const DescribeWhiteBoxDeviceFingerprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWhiteBoxDeviceFingerprintsRequest&;
    using Resp = DescribeWhiteBoxDeviceFingerprintsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWhiteBoxDeviceFingerprints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DescribeWhiteBoxDeviceFingerprintsOutcomeCallable KmsClient::DescribeWhiteBoxDeviceFingerprintsCallable(const DescribeWhiteBoxDeviceFingerprintsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWhiteBoxDeviceFingerprintsOutcome>>();
    DescribeWhiteBoxDeviceFingerprintsAsync(
    request,
    [prom](
        const KmsClient*,
        const DescribeWhiteBoxDeviceFingerprintsRequest&,
        DescribeWhiteBoxDeviceFingerprintsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DescribeWhiteBoxKeyOutcome KmsClient::DescribeWhiteBoxKey(const DescribeWhiteBoxKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteBoxKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteBoxKeyResponse rsp = DescribeWhiteBoxKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteBoxKeyOutcome(rsp);
        else
            return DescribeWhiteBoxKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteBoxKeyOutcome(outcome.GetError());
    }
}

void KmsClient::DescribeWhiteBoxKeyAsync(const DescribeWhiteBoxKeyRequest& request, const DescribeWhiteBoxKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWhiteBoxKeyRequest&;
    using Resp = DescribeWhiteBoxKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWhiteBoxKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DescribeWhiteBoxKeyOutcomeCallable KmsClient::DescribeWhiteBoxKeyCallable(const DescribeWhiteBoxKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWhiteBoxKeyOutcome>>();
    DescribeWhiteBoxKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const DescribeWhiteBoxKeyRequest&,
        DescribeWhiteBoxKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DescribeWhiteBoxKeyDetailsOutcome KmsClient::DescribeWhiteBoxKeyDetails(const DescribeWhiteBoxKeyDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteBoxKeyDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteBoxKeyDetailsResponse rsp = DescribeWhiteBoxKeyDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteBoxKeyDetailsOutcome(rsp);
        else
            return DescribeWhiteBoxKeyDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteBoxKeyDetailsOutcome(outcome.GetError());
    }
}

void KmsClient::DescribeWhiteBoxKeyDetailsAsync(const DescribeWhiteBoxKeyDetailsRequest& request, const DescribeWhiteBoxKeyDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWhiteBoxKeyDetailsRequest&;
    using Resp = DescribeWhiteBoxKeyDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWhiteBoxKeyDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DescribeWhiteBoxKeyDetailsOutcomeCallable KmsClient::DescribeWhiteBoxKeyDetailsCallable(const DescribeWhiteBoxKeyDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWhiteBoxKeyDetailsOutcome>>();
    DescribeWhiteBoxKeyDetailsAsync(
    request,
    [prom](
        const KmsClient*,
        const DescribeWhiteBoxKeyDetailsRequest&,
        DescribeWhiteBoxKeyDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DescribeWhiteBoxServiceStatusOutcome KmsClient::DescribeWhiteBoxServiceStatus(const DescribeWhiteBoxServiceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteBoxServiceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteBoxServiceStatusResponse rsp = DescribeWhiteBoxServiceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteBoxServiceStatusOutcome(rsp);
        else
            return DescribeWhiteBoxServiceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteBoxServiceStatusOutcome(outcome.GetError());
    }
}

void KmsClient::DescribeWhiteBoxServiceStatusAsync(const DescribeWhiteBoxServiceStatusRequest& request, const DescribeWhiteBoxServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWhiteBoxServiceStatusRequest&;
    using Resp = DescribeWhiteBoxServiceStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWhiteBoxServiceStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DescribeWhiteBoxServiceStatusOutcomeCallable KmsClient::DescribeWhiteBoxServiceStatusCallable(const DescribeWhiteBoxServiceStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWhiteBoxServiceStatusOutcome>>();
    DescribeWhiteBoxServiceStatusAsync(
    request,
    [prom](
        const KmsClient*,
        const DescribeWhiteBoxServiceStatusRequest&,
        DescribeWhiteBoxServiceStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DisableDataKeyOutcome KmsClient::DisableDataKey(const DisableDataKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DisableDataKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableDataKeyResponse rsp = DisableDataKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableDataKeyOutcome(rsp);
        else
            return DisableDataKeyOutcome(o.GetError());
    }
    else
    {
        return DisableDataKeyOutcome(outcome.GetError());
    }
}

void KmsClient::DisableDataKeyAsync(const DisableDataKeyRequest& request, const DisableDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableDataKeyRequest&;
    using Resp = DisableDataKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DisableDataKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DisableDataKeyOutcomeCallable KmsClient::DisableDataKeyCallable(const DisableDataKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableDataKeyOutcome>>();
    DisableDataKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const DisableDataKeyRequest&,
        DisableDataKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DisableDataKeysOutcome KmsClient::DisableDataKeys(const DisableDataKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DisableDataKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableDataKeysResponse rsp = DisableDataKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableDataKeysOutcome(rsp);
        else
            return DisableDataKeysOutcome(o.GetError());
    }
    else
    {
        return DisableDataKeysOutcome(outcome.GetError());
    }
}

void KmsClient::DisableDataKeysAsync(const DisableDataKeysRequest& request, const DisableDataKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableDataKeysRequest&;
    using Resp = DisableDataKeysResponse;

    DoRequestAsync<Req, Resp>(
        "DisableDataKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DisableDataKeysOutcomeCallable KmsClient::DisableDataKeysCallable(const DisableDataKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableDataKeysOutcome>>();
    DisableDataKeysAsync(
    request,
    [prom](
        const KmsClient*,
        const DisableDataKeysRequest&,
        DisableDataKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DisableKeyOutcome KmsClient::DisableKey(const DisableKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DisableKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableKeyResponse rsp = DisableKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableKeyOutcome(rsp);
        else
            return DisableKeyOutcome(o.GetError());
    }
    else
    {
        return DisableKeyOutcome(outcome.GetError());
    }
}

void KmsClient::DisableKeyAsync(const DisableKeyRequest& request, const DisableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableKeyRequest&;
    using Resp = DisableKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DisableKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DisableKeyOutcomeCallable KmsClient::DisableKeyCallable(const DisableKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableKeyOutcome>>();
    DisableKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const DisableKeyRequest&,
        DisableKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DisableKeyRotationOutcome KmsClient::DisableKeyRotation(const DisableKeyRotationRequest &request)
{
    auto outcome = MakeRequest(request, "DisableKeyRotation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableKeyRotationResponse rsp = DisableKeyRotationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableKeyRotationOutcome(rsp);
        else
            return DisableKeyRotationOutcome(o.GetError());
    }
    else
    {
        return DisableKeyRotationOutcome(outcome.GetError());
    }
}

void KmsClient::DisableKeyRotationAsync(const DisableKeyRotationRequest& request, const DisableKeyRotationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableKeyRotationRequest&;
    using Resp = DisableKeyRotationResponse;

    DoRequestAsync<Req, Resp>(
        "DisableKeyRotation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DisableKeyRotationOutcomeCallable KmsClient::DisableKeyRotationCallable(const DisableKeyRotationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableKeyRotationOutcome>>();
    DisableKeyRotationAsync(
    request,
    [prom](
        const KmsClient*,
        const DisableKeyRotationRequest&,
        DisableKeyRotationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DisableKeysOutcome KmsClient::DisableKeys(const DisableKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DisableKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableKeysResponse rsp = DisableKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableKeysOutcome(rsp);
        else
            return DisableKeysOutcome(o.GetError());
    }
    else
    {
        return DisableKeysOutcome(outcome.GetError());
    }
}

void KmsClient::DisableKeysAsync(const DisableKeysRequest& request, const DisableKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableKeysRequest&;
    using Resp = DisableKeysResponse;

    DoRequestAsync<Req, Resp>(
        "DisableKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DisableKeysOutcomeCallable KmsClient::DisableKeysCallable(const DisableKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableKeysOutcome>>();
    DisableKeysAsync(
    request,
    [prom](
        const KmsClient*,
        const DisableKeysRequest&,
        DisableKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DisableWhiteBoxKeyOutcome KmsClient::DisableWhiteBoxKey(const DisableWhiteBoxKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DisableWhiteBoxKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableWhiteBoxKeyResponse rsp = DisableWhiteBoxKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableWhiteBoxKeyOutcome(rsp);
        else
            return DisableWhiteBoxKeyOutcome(o.GetError());
    }
    else
    {
        return DisableWhiteBoxKeyOutcome(outcome.GetError());
    }
}

void KmsClient::DisableWhiteBoxKeyAsync(const DisableWhiteBoxKeyRequest& request, const DisableWhiteBoxKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableWhiteBoxKeyRequest&;
    using Resp = DisableWhiteBoxKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DisableWhiteBoxKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DisableWhiteBoxKeyOutcomeCallable KmsClient::DisableWhiteBoxKeyCallable(const DisableWhiteBoxKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableWhiteBoxKeyOutcome>>();
    DisableWhiteBoxKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const DisableWhiteBoxKeyRequest&,
        DisableWhiteBoxKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::DisableWhiteBoxKeysOutcome KmsClient::DisableWhiteBoxKeys(const DisableWhiteBoxKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DisableWhiteBoxKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableWhiteBoxKeysResponse rsp = DisableWhiteBoxKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableWhiteBoxKeysOutcome(rsp);
        else
            return DisableWhiteBoxKeysOutcome(o.GetError());
    }
    else
    {
        return DisableWhiteBoxKeysOutcome(outcome.GetError());
    }
}

void KmsClient::DisableWhiteBoxKeysAsync(const DisableWhiteBoxKeysRequest& request, const DisableWhiteBoxKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableWhiteBoxKeysRequest&;
    using Resp = DisableWhiteBoxKeysResponse;

    DoRequestAsync<Req, Resp>(
        "DisableWhiteBoxKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::DisableWhiteBoxKeysOutcomeCallable KmsClient::DisableWhiteBoxKeysCallable(const DisableWhiteBoxKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableWhiteBoxKeysOutcome>>();
    DisableWhiteBoxKeysAsync(
    request,
    [prom](
        const KmsClient*,
        const DisableWhiteBoxKeysRequest&,
        DisableWhiteBoxKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::EnableDataKeyOutcome KmsClient::EnableDataKey(const EnableDataKeyRequest &request)
{
    auto outcome = MakeRequest(request, "EnableDataKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableDataKeyResponse rsp = EnableDataKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableDataKeyOutcome(rsp);
        else
            return EnableDataKeyOutcome(o.GetError());
    }
    else
    {
        return EnableDataKeyOutcome(outcome.GetError());
    }
}

void KmsClient::EnableDataKeyAsync(const EnableDataKeyRequest& request, const EnableDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableDataKeyRequest&;
    using Resp = EnableDataKeyResponse;

    DoRequestAsync<Req, Resp>(
        "EnableDataKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::EnableDataKeyOutcomeCallable KmsClient::EnableDataKeyCallable(const EnableDataKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableDataKeyOutcome>>();
    EnableDataKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const EnableDataKeyRequest&,
        EnableDataKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::EnableDataKeysOutcome KmsClient::EnableDataKeys(const EnableDataKeysRequest &request)
{
    auto outcome = MakeRequest(request, "EnableDataKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableDataKeysResponse rsp = EnableDataKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableDataKeysOutcome(rsp);
        else
            return EnableDataKeysOutcome(o.GetError());
    }
    else
    {
        return EnableDataKeysOutcome(outcome.GetError());
    }
}

void KmsClient::EnableDataKeysAsync(const EnableDataKeysRequest& request, const EnableDataKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableDataKeysRequest&;
    using Resp = EnableDataKeysResponse;

    DoRequestAsync<Req, Resp>(
        "EnableDataKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::EnableDataKeysOutcomeCallable KmsClient::EnableDataKeysCallable(const EnableDataKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableDataKeysOutcome>>();
    EnableDataKeysAsync(
    request,
    [prom](
        const KmsClient*,
        const EnableDataKeysRequest&,
        EnableDataKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::EnableKeyOutcome KmsClient::EnableKey(const EnableKeyRequest &request)
{
    auto outcome = MakeRequest(request, "EnableKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableKeyResponse rsp = EnableKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableKeyOutcome(rsp);
        else
            return EnableKeyOutcome(o.GetError());
    }
    else
    {
        return EnableKeyOutcome(outcome.GetError());
    }
}

void KmsClient::EnableKeyAsync(const EnableKeyRequest& request, const EnableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableKeyRequest&;
    using Resp = EnableKeyResponse;

    DoRequestAsync<Req, Resp>(
        "EnableKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::EnableKeyOutcomeCallable KmsClient::EnableKeyCallable(const EnableKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableKeyOutcome>>();
    EnableKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const EnableKeyRequest&,
        EnableKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::EnableKeyRotationOutcome KmsClient::EnableKeyRotation(const EnableKeyRotationRequest &request)
{
    auto outcome = MakeRequest(request, "EnableKeyRotation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableKeyRotationResponse rsp = EnableKeyRotationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableKeyRotationOutcome(rsp);
        else
            return EnableKeyRotationOutcome(o.GetError());
    }
    else
    {
        return EnableKeyRotationOutcome(outcome.GetError());
    }
}

void KmsClient::EnableKeyRotationAsync(const EnableKeyRotationRequest& request, const EnableKeyRotationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableKeyRotationRequest&;
    using Resp = EnableKeyRotationResponse;

    DoRequestAsync<Req, Resp>(
        "EnableKeyRotation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::EnableKeyRotationOutcomeCallable KmsClient::EnableKeyRotationCallable(const EnableKeyRotationRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableKeyRotationOutcome>>();
    EnableKeyRotationAsync(
    request,
    [prom](
        const KmsClient*,
        const EnableKeyRotationRequest&,
        EnableKeyRotationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::EnableKeysOutcome KmsClient::EnableKeys(const EnableKeysRequest &request)
{
    auto outcome = MakeRequest(request, "EnableKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableKeysResponse rsp = EnableKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableKeysOutcome(rsp);
        else
            return EnableKeysOutcome(o.GetError());
    }
    else
    {
        return EnableKeysOutcome(outcome.GetError());
    }
}

void KmsClient::EnableKeysAsync(const EnableKeysRequest& request, const EnableKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableKeysRequest&;
    using Resp = EnableKeysResponse;

    DoRequestAsync<Req, Resp>(
        "EnableKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::EnableKeysOutcomeCallable KmsClient::EnableKeysCallable(const EnableKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableKeysOutcome>>();
    EnableKeysAsync(
    request,
    [prom](
        const KmsClient*,
        const EnableKeysRequest&,
        EnableKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::EnableWhiteBoxKeyOutcome KmsClient::EnableWhiteBoxKey(const EnableWhiteBoxKeyRequest &request)
{
    auto outcome = MakeRequest(request, "EnableWhiteBoxKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableWhiteBoxKeyResponse rsp = EnableWhiteBoxKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableWhiteBoxKeyOutcome(rsp);
        else
            return EnableWhiteBoxKeyOutcome(o.GetError());
    }
    else
    {
        return EnableWhiteBoxKeyOutcome(outcome.GetError());
    }
}

void KmsClient::EnableWhiteBoxKeyAsync(const EnableWhiteBoxKeyRequest& request, const EnableWhiteBoxKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableWhiteBoxKeyRequest&;
    using Resp = EnableWhiteBoxKeyResponse;

    DoRequestAsync<Req, Resp>(
        "EnableWhiteBoxKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::EnableWhiteBoxKeyOutcomeCallable KmsClient::EnableWhiteBoxKeyCallable(const EnableWhiteBoxKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableWhiteBoxKeyOutcome>>();
    EnableWhiteBoxKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const EnableWhiteBoxKeyRequest&,
        EnableWhiteBoxKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::EnableWhiteBoxKeysOutcome KmsClient::EnableWhiteBoxKeys(const EnableWhiteBoxKeysRequest &request)
{
    auto outcome = MakeRequest(request, "EnableWhiteBoxKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableWhiteBoxKeysResponse rsp = EnableWhiteBoxKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableWhiteBoxKeysOutcome(rsp);
        else
            return EnableWhiteBoxKeysOutcome(o.GetError());
    }
    else
    {
        return EnableWhiteBoxKeysOutcome(outcome.GetError());
    }
}

void KmsClient::EnableWhiteBoxKeysAsync(const EnableWhiteBoxKeysRequest& request, const EnableWhiteBoxKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableWhiteBoxKeysRequest&;
    using Resp = EnableWhiteBoxKeysResponse;

    DoRequestAsync<Req, Resp>(
        "EnableWhiteBoxKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::EnableWhiteBoxKeysOutcomeCallable KmsClient::EnableWhiteBoxKeysCallable(const EnableWhiteBoxKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableWhiteBoxKeysOutcome>>();
    EnableWhiteBoxKeysAsync(
    request,
    [prom](
        const KmsClient*,
        const EnableWhiteBoxKeysRequest&,
        EnableWhiteBoxKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::EncryptOutcome KmsClient::Encrypt(const EncryptRequest &request)
{
    auto outcome = MakeRequest(request, "Encrypt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EncryptResponse rsp = EncryptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EncryptOutcome(rsp);
        else
            return EncryptOutcome(o.GetError());
    }
    else
    {
        return EncryptOutcome(outcome.GetError());
    }
}

void KmsClient::EncryptAsync(const EncryptRequest& request, const EncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EncryptRequest&;
    using Resp = EncryptResponse;

    DoRequestAsync<Req, Resp>(
        "Encrypt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::EncryptOutcomeCallable KmsClient::EncryptCallable(const EncryptRequest &request)
{
    const auto prom = std::make_shared<std::promise<EncryptOutcome>>();
    EncryptAsync(
    request,
    [prom](
        const KmsClient*,
        const EncryptRequest&,
        EncryptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::EncryptByWhiteBoxOutcome KmsClient::EncryptByWhiteBox(const EncryptByWhiteBoxRequest &request)
{
    auto outcome = MakeRequest(request, "EncryptByWhiteBox");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EncryptByWhiteBoxResponse rsp = EncryptByWhiteBoxResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EncryptByWhiteBoxOutcome(rsp);
        else
            return EncryptByWhiteBoxOutcome(o.GetError());
    }
    else
    {
        return EncryptByWhiteBoxOutcome(outcome.GetError());
    }
}

void KmsClient::EncryptByWhiteBoxAsync(const EncryptByWhiteBoxRequest& request, const EncryptByWhiteBoxAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EncryptByWhiteBoxRequest&;
    using Resp = EncryptByWhiteBoxResponse;

    DoRequestAsync<Req, Resp>(
        "EncryptByWhiteBox", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::EncryptByWhiteBoxOutcomeCallable KmsClient::EncryptByWhiteBoxCallable(const EncryptByWhiteBoxRequest &request)
{
    const auto prom = std::make_shared<std::promise<EncryptByWhiteBoxOutcome>>();
    EncryptByWhiteBoxAsync(
    request,
    [prom](
        const KmsClient*,
        const EncryptByWhiteBoxRequest&,
        EncryptByWhiteBoxOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::GenerateDataKeyOutcome KmsClient::GenerateDataKey(const GenerateDataKeyRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateDataKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateDataKeyResponse rsp = GenerateDataKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateDataKeyOutcome(rsp);
        else
            return GenerateDataKeyOutcome(o.GetError());
    }
    else
    {
        return GenerateDataKeyOutcome(outcome.GetError());
    }
}

void KmsClient::GenerateDataKeyAsync(const GenerateDataKeyRequest& request, const GenerateDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenerateDataKeyRequest&;
    using Resp = GenerateDataKeyResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateDataKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::GenerateDataKeyOutcomeCallable KmsClient::GenerateDataKeyCallable(const GenerateDataKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateDataKeyOutcome>>();
    GenerateDataKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const GenerateDataKeyRequest&,
        GenerateDataKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::GenerateRandomOutcome KmsClient::GenerateRandom(const GenerateRandomRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateRandom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateRandomResponse rsp = GenerateRandomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateRandomOutcome(rsp);
        else
            return GenerateRandomOutcome(o.GetError());
    }
    else
    {
        return GenerateRandomOutcome(outcome.GetError());
    }
}

void KmsClient::GenerateRandomAsync(const GenerateRandomRequest& request, const GenerateRandomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenerateRandomRequest&;
    using Resp = GenerateRandomResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateRandom", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::GenerateRandomOutcomeCallable KmsClient::GenerateRandomCallable(const GenerateRandomRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateRandomOutcome>>();
    GenerateRandomAsync(
    request,
    [prom](
        const KmsClient*,
        const GenerateRandomRequest&,
        GenerateRandomOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::GetDataKeyCiphertextBlobOutcome KmsClient::GetDataKeyCiphertextBlob(const GetDataKeyCiphertextBlobRequest &request)
{
    auto outcome = MakeRequest(request, "GetDataKeyCiphertextBlob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDataKeyCiphertextBlobResponse rsp = GetDataKeyCiphertextBlobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDataKeyCiphertextBlobOutcome(rsp);
        else
            return GetDataKeyCiphertextBlobOutcome(o.GetError());
    }
    else
    {
        return GetDataKeyCiphertextBlobOutcome(outcome.GetError());
    }
}

void KmsClient::GetDataKeyCiphertextBlobAsync(const GetDataKeyCiphertextBlobRequest& request, const GetDataKeyCiphertextBlobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDataKeyCiphertextBlobRequest&;
    using Resp = GetDataKeyCiphertextBlobResponse;

    DoRequestAsync<Req, Resp>(
        "GetDataKeyCiphertextBlob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::GetDataKeyCiphertextBlobOutcomeCallable KmsClient::GetDataKeyCiphertextBlobCallable(const GetDataKeyCiphertextBlobRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDataKeyCiphertextBlobOutcome>>();
    GetDataKeyCiphertextBlobAsync(
    request,
    [prom](
        const KmsClient*,
        const GetDataKeyCiphertextBlobRequest&,
        GetDataKeyCiphertextBlobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::GetDataKeyPlaintextOutcome KmsClient::GetDataKeyPlaintext(const GetDataKeyPlaintextRequest &request)
{
    auto outcome = MakeRequest(request, "GetDataKeyPlaintext");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDataKeyPlaintextResponse rsp = GetDataKeyPlaintextResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDataKeyPlaintextOutcome(rsp);
        else
            return GetDataKeyPlaintextOutcome(o.GetError());
    }
    else
    {
        return GetDataKeyPlaintextOutcome(outcome.GetError());
    }
}

void KmsClient::GetDataKeyPlaintextAsync(const GetDataKeyPlaintextRequest& request, const GetDataKeyPlaintextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDataKeyPlaintextRequest&;
    using Resp = GetDataKeyPlaintextResponse;

    DoRequestAsync<Req, Resp>(
        "GetDataKeyPlaintext", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::GetDataKeyPlaintextOutcomeCallable KmsClient::GetDataKeyPlaintextCallable(const GetDataKeyPlaintextRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDataKeyPlaintextOutcome>>();
    GetDataKeyPlaintextAsync(
    request,
    [prom](
        const KmsClient*,
        const GetDataKeyPlaintextRequest&,
        GetDataKeyPlaintextOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::GetKeyRotationStatusOutcome KmsClient::GetKeyRotationStatus(const GetKeyRotationStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetKeyRotationStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetKeyRotationStatusResponse rsp = GetKeyRotationStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetKeyRotationStatusOutcome(rsp);
        else
            return GetKeyRotationStatusOutcome(o.GetError());
    }
    else
    {
        return GetKeyRotationStatusOutcome(outcome.GetError());
    }
}

void KmsClient::GetKeyRotationStatusAsync(const GetKeyRotationStatusRequest& request, const GetKeyRotationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetKeyRotationStatusRequest&;
    using Resp = GetKeyRotationStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetKeyRotationStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::GetKeyRotationStatusOutcomeCallable KmsClient::GetKeyRotationStatusCallable(const GetKeyRotationStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetKeyRotationStatusOutcome>>();
    GetKeyRotationStatusAsync(
    request,
    [prom](
        const KmsClient*,
        const GetKeyRotationStatusRequest&,
        GetKeyRotationStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::GetParametersForImportOutcome KmsClient::GetParametersForImport(const GetParametersForImportRequest &request)
{
    auto outcome = MakeRequest(request, "GetParametersForImport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetParametersForImportResponse rsp = GetParametersForImportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetParametersForImportOutcome(rsp);
        else
            return GetParametersForImportOutcome(o.GetError());
    }
    else
    {
        return GetParametersForImportOutcome(outcome.GetError());
    }
}

void KmsClient::GetParametersForImportAsync(const GetParametersForImportRequest& request, const GetParametersForImportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetParametersForImportRequest&;
    using Resp = GetParametersForImportResponse;

    DoRequestAsync<Req, Resp>(
        "GetParametersForImport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::GetParametersForImportOutcomeCallable KmsClient::GetParametersForImportCallable(const GetParametersForImportRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetParametersForImportOutcome>>();
    GetParametersForImportAsync(
    request,
    [prom](
        const KmsClient*,
        const GetParametersForImportRequest&,
        GetParametersForImportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::GetPublicKeyOutcome KmsClient::GetPublicKey(const GetPublicKeyRequest &request)
{
    auto outcome = MakeRequest(request, "GetPublicKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPublicKeyResponse rsp = GetPublicKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPublicKeyOutcome(rsp);
        else
            return GetPublicKeyOutcome(o.GetError());
    }
    else
    {
        return GetPublicKeyOutcome(outcome.GetError());
    }
}

void KmsClient::GetPublicKeyAsync(const GetPublicKeyRequest& request, const GetPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPublicKeyRequest&;
    using Resp = GetPublicKeyResponse;

    DoRequestAsync<Req, Resp>(
        "GetPublicKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::GetPublicKeyOutcomeCallable KmsClient::GetPublicKeyCallable(const GetPublicKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPublicKeyOutcome>>();
    GetPublicKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const GetPublicKeyRequest&,
        GetPublicKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::GetRegionsOutcome KmsClient::GetRegions(const GetRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "GetRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRegionsResponse rsp = GetRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRegionsOutcome(rsp);
        else
            return GetRegionsOutcome(o.GetError());
    }
    else
    {
        return GetRegionsOutcome(outcome.GetError());
    }
}

void KmsClient::GetRegionsAsync(const GetRegionsRequest& request, const GetRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRegionsRequest&;
    using Resp = GetRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "GetRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::GetRegionsOutcomeCallable KmsClient::GetRegionsCallable(const GetRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRegionsOutcome>>();
    GetRegionsAsync(
    request,
    [prom](
        const KmsClient*,
        const GetRegionsRequest&,
        GetRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::GetServiceStatusOutcome KmsClient::GetServiceStatus(const GetServiceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetServiceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetServiceStatusResponse rsp = GetServiceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetServiceStatusOutcome(rsp);
        else
            return GetServiceStatusOutcome(o.GetError());
    }
    else
    {
        return GetServiceStatusOutcome(outcome.GetError());
    }
}

void KmsClient::GetServiceStatusAsync(const GetServiceStatusRequest& request, const GetServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetServiceStatusRequest&;
    using Resp = GetServiceStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetServiceStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::GetServiceStatusOutcomeCallable KmsClient::GetServiceStatusCallable(const GetServiceStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetServiceStatusOutcome>>();
    GetServiceStatusAsync(
    request,
    [prom](
        const KmsClient*,
        const GetServiceStatusRequest&,
        GetServiceStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::ImportDataKeyOutcome KmsClient::ImportDataKey(const ImportDataKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ImportDataKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportDataKeyResponse rsp = ImportDataKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportDataKeyOutcome(rsp);
        else
            return ImportDataKeyOutcome(o.GetError());
    }
    else
    {
        return ImportDataKeyOutcome(outcome.GetError());
    }
}

void KmsClient::ImportDataKeyAsync(const ImportDataKeyRequest& request, const ImportDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportDataKeyRequest&;
    using Resp = ImportDataKeyResponse;

    DoRequestAsync<Req, Resp>(
        "ImportDataKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::ImportDataKeyOutcomeCallable KmsClient::ImportDataKeyCallable(const ImportDataKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportDataKeyOutcome>>();
    ImportDataKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const ImportDataKeyRequest&,
        ImportDataKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::ImportKeyMaterialOutcome KmsClient::ImportKeyMaterial(const ImportKeyMaterialRequest &request)
{
    auto outcome = MakeRequest(request, "ImportKeyMaterial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportKeyMaterialResponse rsp = ImportKeyMaterialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportKeyMaterialOutcome(rsp);
        else
            return ImportKeyMaterialOutcome(o.GetError());
    }
    else
    {
        return ImportKeyMaterialOutcome(outcome.GetError());
    }
}

void KmsClient::ImportKeyMaterialAsync(const ImportKeyMaterialRequest& request, const ImportKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportKeyMaterialRequest&;
    using Resp = ImportKeyMaterialResponse;

    DoRequestAsync<Req, Resp>(
        "ImportKeyMaterial", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::ImportKeyMaterialOutcomeCallable KmsClient::ImportKeyMaterialCallable(const ImportKeyMaterialRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportKeyMaterialOutcome>>();
    ImportKeyMaterialAsync(
    request,
    [prom](
        const KmsClient*,
        const ImportKeyMaterialRequest&,
        ImportKeyMaterialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::ListAlgorithmsOutcome KmsClient::ListAlgorithms(const ListAlgorithmsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAlgorithms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAlgorithmsResponse rsp = ListAlgorithmsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAlgorithmsOutcome(rsp);
        else
            return ListAlgorithmsOutcome(o.GetError());
    }
    else
    {
        return ListAlgorithmsOutcome(outcome.GetError());
    }
}

void KmsClient::ListAlgorithmsAsync(const ListAlgorithmsRequest& request, const ListAlgorithmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAlgorithmsRequest&;
    using Resp = ListAlgorithmsResponse;

    DoRequestAsync<Req, Resp>(
        "ListAlgorithms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::ListAlgorithmsOutcomeCallable KmsClient::ListAlgorithmsCallable(const ListAlgorithmsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAlgorithmsOutcome>>();
    ListAlgorithmsAsync(
    request,
    [prom](
        const KmsClient*,
        const ListAlgorithmsRequest&,
        ListAlgorithmsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::ListDataKeyDetailOutcome KmsClient::ListDataKeyDetail(const ListDataKeyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ListDataKeyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDataKeyDetailResponse rsp = ListDataKeyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDataKeyDetailOutcome(rsp);
        else
            return ListDataKeyDetailOutcome(o.GetError());
    }
    else
    {
        return ListDataKeyDetailOutcome(outcome.GetError());
    }
}

void KmsClient::ListDataKeyDetailAsync(const ListDataKeyDetailRequest& request, const ListDataKeyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDataKeyDetailRequest&;
    using Resp = ListDataKeyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "ListDataKeyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::ListDataKeyDetailOutcomeCallable KmsClient::ListDataKeyDetailCallable(const ListDataKeyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDataKeyDetailOutcome>>();
    ListDataKeyDetailAsync(
    request,
    [prom](
        const KmsClient*,
        const ListDataKeyDetailRequest&,
        ListDataKeyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::ListDataKeysOutcome KmsClient::ListDataKeys(const ListDataKeysRequest &request)
{
    auto outcome = MakeRequest(request, "ListDataKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDataKeysResponse rsp = ListDataKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDataKeysOutcome(rsp);
        else
            return ListDataKeysOutcome(o.GetError());
    }
    else
    {
        return ListDataKeysOutcome(outcome.GetError());
    }
}

void KmsClient::ListDataKeysAsync(const ListDataKeysRequest& request, const ListDataKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDataKeysRequest&;
    using Resp = ListDataKeysResponse;

    DoRequestAsync<Req, Resp>(
        "ListDataKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::ListDataKeysOutcomeCallable KmsClient::ListDataKeysCallable(const ListDataKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDataKeysOutcome>>();
    ListDataKeysAsync(
    request,
    [prom](
        const KmsClient*,
        const ListDataKeysRequest&,
        ListDataKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::ListKeyDetailOutcome KmsClient::ListKeyDetail(const ListKeyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ListKeyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListKeyDetailResponse rsp = ListKeyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListKeyDetailOutcome(rsp);
        else
            return ListKeyDetailOutcome(o.GetError());
    }
    else
    {
        return ListKeyDetailOutcome(outcome.GetError());
    }
}

void KmsClient::ListKeyDetailAsync(const ListKeyDetailRequest& request, const ListKeyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListKeyDetailRequest&;
    using Resp = ListKeyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "ListKeyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::ListKeyDetailOutcomeCallable KmsClient::ListKeyDetailCallable(const ListKeyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListKeyDetailOutcome>>();
    ListKeyDetailAsync(
    request,
    [prom](
        const KmsClient*,
        const ListKeyDetailRequest&,
        ListKeyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::ListKeysOutcome KmsClient::ListKeys(const ListKeysRequest &request)
{
    auto outcome = MakeRequest(request, "ListKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListKeysResponse rsp = ListKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListKeysOutcome(rsp);
        else
            return ListKeysOutcome(o.GetError());
    }
    else
    {
        return ListKeysOutcome(outcome.GetError());
    }
}

void KmsClient::ListKeysAsync(const ListKeysRequest& request, const ListKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListKeysRequest&;
    using Resp = ListKeysResponse;

    DoRequestAsync<Req, Resp>(
        "ListKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::ListKeysOutcomeCallable KmsClient::ListKeysCallable(const ListKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListKeysOutcome>>();
    ListKeysAsync(
    request,
    [prom](
        const KmsClient*,
        const ListKeysRequest&,
        ListKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::OverwriteWhiteBoxDeviceFingerprintsOutcome KmsClient::OverwriteWhiteBoxDeviceFingerprints(const OverwriteWhiteBoxDeviceFingerprintsRequest &request)
{
    auto outcome = MakeRequest(request, "OverwriteWhiteBoxDeviceFingerprints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OverwriteWhiteBoxDeviceFingerprintsResponse rsp = OverwriteWhiteBoxDeviceFingerprintsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OverwriteWhiteBoxDeviceFingerprintsOutcome(rsp);
        else
            return OverwriteWhiteBoxDeviceFingerprintsOutcome(o.GetError());
    }
    else
    {
        return OverwriteWhiteBoxDeviceFingerprintsOutcome(outcome.GetError());
    }
}

void KmsClient::OverwriteWhiteBoxDeviceFingerprintsAsync(const OverwriteWhiteBoxDeviceFingerprintsRequest& request, const OverwriteWhiteBoxDeviceFingerprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OverwriteWhiteBoxDeviceFingerprintsRequest&;
    using Resp = OverwriteWhiteBoxDeviceFingerprintsResponse;

    DoRequestAsync<Req, Resp>(
        "OverwriteWhiteBoxDeviceFingerprints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::OverwriteWhiteBoxDeviceFingerprintsOutcomeCallable KmsClient::OverwriteWhiteBoxDeviceFingerprintsCallable(const OverwriteWhiteBoxDeviceFingerprintsRequest &request)
{
    const auto prom = std::make_shared<std::promise<OverwriteWhiteBoxDeviceFingerprintsOutcome>>();
    OverwriteWhiteBoxDeviceFingerprintsAsync(
    request,
    [prom](
        const KmsClient*,
        const OverwriteWhiteBoxDeviceFingerprintsRequest&,
        OverwriteWhiteBoxDeviceFingerprintsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::PostQuantumCryptoDecryptOutcome KmsClient::PostQuantumCryptoDecrypt(const PostQuantumCryptoDecryptRequest &request)
{
    auto outcome = MakeRequest(request, "PostQuantumCryptoDecrypt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PostQuantumCryptoDecryptResponse rsp = PostQuantumCryptoDecryptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PostQuantumCryptoDecryptOutcome(rsp);
        else
            return PostQuantumCryptoDecryptOutcome(o.GetError());
    }
    else
    {
        return PostQuantumCryptoDecryptOutcome(outcome.GetError());
    }
}

void KmsClient::PostQuantumCryptoDecryptAsync(const PostQuantumCryptoDecryptRequest& request, const PostQuantumCryptoDecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PostQuantumCryptoDecryptRequest&;
    using Resp = PostQuantumCryptoDecryptResponse;

    DoRequestAsync<Req, Resp>(
        "PostQuantumCryptoDecrypt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::PostQuantumCryptoDecryptOutcomeCallable KmsClient::PostQuantumCryptoDecryptCallable(const PostQuantumCryptoDecryptRequest &request)
{
    const auto prom = std::make_shared<std::promise<PostQuantumCryptoDecryptOutcome>>();
    PostQuantumCryptoDecryptAsync(
    request,
    [prom](
        const KmsClient*,
        const PostQuantumCryptoDecryptRequest&,
        PostQuantumCryptoDecryptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::PostQuantumCryptoEncryptOutcome KmsClient::PostQuantumCryptoEncrypt(const PostQuantumCryptoEncryptRequest &request)
{
    auto outcome = MakeRequest(request, "PostQuantumCryptoEncrypt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PostQuantumCryptoEncryptResponse rsp = PostQuantumCryptoEncryptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PostQuantumCryptoEncryptOutcome(rsp);
        else
            return PostQuantumCryptoEncryptOutcome(o.GetError());
    }
    else
    {
        return PostQuantumCryptoEncryptOutcome(outcome.GetError());
    }
}

void KmsClient::PostQuantumCryptoEncryptAsync(const PostQuantumCryptoEncryptRequest& request, const PostQuantumCryptoEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PostQuantumCryptoEncryptRequest&;
    using Resp = PostQuantumCryptoEncryptResponse;

    DoRequestAsync<Req, Resp>(
        "PostQuantumCryptoEncrypt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::PostQuantumCryptoEncryptOutcomeCallable KmsClient::PostQuantumCryptoEncryptCallable(const PostQuantumCryptoEncryptRequest &request)
{
    const auto prom = std::make_shared<std::promise<PostQuantumCryptoEncryptOutcome>>();
    PostQuantumCryptoEncryptAsync(
    request,
    [prom](
        const KmsClient*,
        const PostQuantumCryptoEncryptRequest&,
        PostQuantumCryptoEncryptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::PostQuantumCryptoSignOutcome KmsClient::PostQuantumCryptoSign(const PostQuantumCryptoSignRequest &request)
{
    auto outcome = MakeRequest(request, "PostQuantumCryptoSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PostQuantumCryptoSignResponse rsp = PostQuantumCryptoSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PostQuantumCryptoSignOutcome(rsp);
        else
            return PostQuantumCryptoSignOutcome(o.GetError());
    }
    else
    {
        return PostQuantumCryptoSignOutcome(outcome.GetError());
    }
}

void KmsClient::PostQuantumCryptoSignAsync(const PostQuantumCryptoSignRequest& request, const PostQuantumCryptoSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PostQuantumCryptoSignRequest&;
    using Resp = PostQuantumCryptoSignResponse;

    DoRequestAsync<Req, Resp>(
        "PostQuantumCryptoSign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::PostQuantumCryptoSignOutcomeCallable KmsClient::PostQuantumCryptoSignCallable(const PostQuantumCryptoSignRequest &request)
{
    const auto prom = std::make_shared<std::promise<PostQuantumCryptoSignOutcome>>();
    PostQuantumCryptoSignAsync(
    request,
    [prom](
        const KmsClient*,
        const PostQuantumCryptoSignRequest&,
        PostQuantumCryptoSignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::PostQuantumCryptoVerifyOutcome KmsClient::PostQuantumCryptoVerify(const PostQuantumCryptoVerifyRequest &request)
{
    auto outcome = MakeRequest(request, "PostQuantumCryptoVerify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PostQuantumCryptoVerifyResponse rsp = PostQuantumCryptoVerifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PostQuantumCryptoVerifyOutcome(rsp);
        else
            return PostQuantumCryptoVerifyOutcome(o.GetError());
    }
    else
    {
        return PostQuantumCryptoVerifyOutcome(outcome.GetError());
    }
}

void KmsClient::PostQuantumCryptoVerifyAsync(const PostQuantumCryptoVerifyRequest& request, const PostQuantumCryptoVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PostQuantumCryptoVerifyRequest&;
    using Resp = PostQuantumCryptoVerifyResponse;

    DoRequestAsync<Req, Resp>(
        "PostQuantumCryptoVerify", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::PostQuantumCryptoVerifyOutcomeCallable KmsClient::PostQuantumCryptoVerifyCallable(const PostQuantumCryptoVerifyRequest &request)
{
    const auto prom = std::make_shared<std::promise<PostQuantumCryptoVerifyOutcome>>();
    PostQuantumCryptoVerifyAsync(
    request,
    [prom](
        const KmsClient*,
        const PostQuantumCryptoVerifyRequest&,
        PostQuantumCryptoVerifyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::ReEncryptOutcome KmsClient::ReEncrypt(const ReEncryptRequest &request)
{
    auto outcome = MakeRequest(request, "ReEncrypt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReEncryptResponse rsp = ReEncryptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReEncryptOutcome(rsp);
        else
            return ReEncryptOutcome(o.GetError());
    }
    else
    {
        return ReEncryptOutcome(outcome.GetError());
    }
}

void KmsClient::ReEncryptAsync(const ReEncryptRequest& request, const ReEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReEncryptRequest&;
    using Resp = ReEncryptResponse;

    DoRequestAsync<Req, Resp>(
        "ReEncrypt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::ReEncryptOutcomeCallable KmsClient::ReEncryptCallable(const ReEncryptRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReEncryptOutcome>>();
    ReEncryptAsync(
    request,
    [prom](
        const KmsClient*,
        const ReEncryptRequest&,
        ReEncryptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::ScheduleDataKeyDeletionOutcome KmsClient::ScheduleDataKeyDeletion(const ScheduleDataKeyDeletionRequest &request)
{
    auto outcome = MakeRequest(request, "ScheduleDataKeyDeletion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScheduleDataKeyDeletionResponse rsp = ScheduleDataKeyDeletionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScheduleDataKeyDeletionOutcome(rsp);
        else
            return ScheduleDataKeyDeletionOutcome(o.GetError());
    }
    else
    {
        return ScheduleDataKeyDeletionOutcome(outcome.GetError());
    }
}

void KmsClient::ScheduleDataKeyDeletionAsync(const ScheduleDataKeyDeletionRequest& request, const ScheduleDataKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScheduleDataKeyDeletionRequest&;
    using Resp = ScheduleDataKeyDeletionResponse;

    DoRequestAsync<Req, Resp>(
        "ScheduleDataKeyDeletion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::ScheduleDataKeyDeletionOutcomeCallable KmsClient::ScheduleDataKeyDeletionCallable(const ScheduleDataKeyDeletionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScheduleDataKeyDeletionOutcome>>();
    ScheduleDataKeyDeletionAsync(
    request,
    [prom](
        const KmsClient*,
        const ScheduleDataKeyDeletionRequest&,
        ScheduleDataKeyDeletionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::ScheduleKeyDeletionOutcome KmsClient::ScheduleKeyDeletion(const ScheduleKeyDeletionRequest &request)
{
    auto outcome = MakeRequest(request, "ScheduleKeyDeletion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScheduleKeyDeletionResponse rsp = ScheduleKeyDeletionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScheduleKeyDeletionOutcome(rsp);
        else
            return ScheduleKeyDeletionOutcome(o.GetError());
    }
    else
    {
        return ScheduleKeyDeletionOutcome(outcome.GetError());
    }
}

void KmsClient::ScheduleKeyDeletionAsync(const ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScheduleKeyDeletionRequest&;
    using Resp = ScheduleKeyDeletionResponse;

    DoRequestAsync<Req, Resp>(
        "ScheduleKeyDeletion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::ScheduleKeyDeletionOutcomeCallable KmsClient::ScheduleKeyDeletionCallable(const ScheduleKeyDeletionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScheduleKeyDeletionOutcome>>();
    ScheduleKeyDeletionAsync(
    request,
    [prom](
        const KmsClient*,
        const ScheduleKeyDeletionRequest&,
        ScheduleKeyDeletionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::SignByAsymmetricKeyOutcome KmsClient::SignByAsymmetricKey(const SignByAsymmetricKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SignByAsymmetricKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SignByAsymmetricKeyResponse rsp = SignByAsymmetricKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SignByAsymmetricKeyOutcome(rsp);
        else
            return SignByAsymmetricKeyOutcome(o.GetError());
    }
    else
    {
        return SignByAsymmetricKeyOutcome(outcome.GetError());
    }
}

void KmsClient::SignByAsymmetricKeyAsync(const SignByAsymmetricKeyRequest& request, const SignByAsymmetricKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SignByAsymmetricKeyRequest&;
    using Resp = SignByAsymmetricKeyResponse;

    DoRequestAsync<Req, Resp>(
        "SignByAsymmetricKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::SignByAsymmetricKeyOutcomeCallable KmsClient::SignByAsymmetricKeyCallable(const SignByAsymmetricKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<SignByAsymmetricKeyOutcome>>();
    SignByAsymmetricKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const SignByAsymmetricKeyRequest&,
        SignByAsymmetricKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::UnbindCloudResourceOutcome KmsClient::UnbindCloudResource(const UnbindCloudResourceRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindCloudResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindCloudResourceResponse rsp = UnbindCloudResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindCloudResourceOutcome(rsp);
        else
            return UnbindCloudResourceOutcome(o.GetError());
    }
    else
    {
        return UnbindCloudResourceOutcome(outcome.GetError());
    }
}

void KmsClient::UnbindCloudResourceAsync(const UnbindCloudResourceRequest& request, const UnbindCloudResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindCloudResourceRequest&;
    using Resp = UnbindCloudResourceResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindCloudResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::UnbindCloudResourceOutcomeCallable KmsClient::UnbindCloudResourceCallable(const UnbindCloudResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindCloudResourceOutcome>>();
    UnbindCloudResourceAsync(
    request,
    [prom](
        const KmsClient*,
        const UnbindCloudResourceRequest&,
        UnbindCloudResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::UpdateAliasOutcome KmsClient::UpdateAlias(const UpdateAliasRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAliasResponse rsp = UpdateAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAliasOutcome(rsp);
        else
            return UpdateAliasOutcome(o.GetError());
    }
    else
    {
        return UpdateAliasOutcome(outcome.GetError());
    }
}

void KmsClient::UpdateAliasAsync(const UpdateAliasRequest& request, const UpdateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAliasRequest&;
    using Resp = UpdateAliasResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAlias", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::UpdateAliasOutcomeCallable KmsClient::UpdateAliasCallable(const UpdateAliasRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAliasOutcome>>();
    UpdateAliasAsync(
    request,
    [prom](
        const KmsClient*,
        const UpdateAliasRequest&,
        UpdateAliasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::UpdateDataKeyDescriptionOutcome KmsClient::UpdateDataKeyDescription(const UpdateDataKeyDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDataKeyDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDataKeyDescriptionResponse rsp = UpdateDataKeyDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDataKeyDescriptionOutcome(rsp);
        else
            return UpdateDataKeyDescriptionOutcome(o.GetError());
    }
    else
    {
        return UpdateDataKeyDescriptionOutcome(outcome.GetError());
    }
}

void KmsClient::UpdateDataKeyDescriptionAsync(const UpdateDataKeyDescriptionRequest& request, const UpdateDataKeyDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDataKeyDescriptionRequest&;
    using Resp = UpdateDataKeyDescriptionResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDataKeyDescription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::UpdateDataKeyDescriptionOutcomeCallable KmsClient::UpdateDataKeyDescriptionCallable(const UpdateDataKeyDescriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDataKeyDescriptionOutcome>>();
    UpdateDataKeyDescriptionAsync(
    request,
    [prom](
        const KmsClient*,
        const UpdateDataKeyDescriptionRequest&,
        UpdateDataKeyDescriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::UpdateDataKeyNameOutcome KmsClient::UpdateDataKeyName(const UpdateDataKeyNameRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDataKeyName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDataKeyNameResponse rsp = UpdateDataKeyNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDataKeyNameOutcome(rsp);
        else
            return UpdateDataKeyNameOutcome(o.GetError());
    }
    else
    {
        return UpdateDataKeyNameOutcome(outcome.GetError());
    }
}

void KmsClient::UpdateDataKeyNameAsync(const UpdateDataKeyNameRequest& request, const UpdateDataKeyNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDataKeyNameRequest&;
    using Resp = UpdateDataKeyNameResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDataKeyName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::UpdateDataKeyNameOutcomeCallable KmsClient::UpdateDataKeyNameCallable(const UpdateDataKeyNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDataKeyNameOutcome>>();
    UpdateDataKeyNameAsync(
    request,
    [prom](
        const KmsClient*,
        const UpdateDataKeyNameRequest&,
        UpdateDataKeyNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::UpdateKeyDescriptionOutcome KmsClient::UpdateKeyDescription(const UpdateKeyDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateKeyDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateKeyDescriptionResponse rsp = UpdateKeyDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateKeyDescriptionOutcome(rsp);
        else
            return UpdateKeyDescriptionOutcome(o.GetError());
    }
    else
    {
        return UpdateKeyDescriptionOutcome(outcome.GetError());
    }
}

void KmsClient::UpdateKeyDescriptionAsync(const UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateKeyDescriptionRequest&;
    using Resp = UpdateKeyDescriptionResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateKeyDescription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::UpdateKeyDescriptionOutcomeCallable KmsClient::UpdateKeyDescriptionCallable(const UpdateKeyDescriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateKeyDescriptionOutcome>>();
    UpdateKeyDescriptionAsync(
    request,
    [prom](
        const KmsClient*,
        const UpdateKeyDescriptionRequest&,
        UpdateKeyDescriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

KmsClient::VerifyByAsymmetricKeyOutcome KmsClient::VerifyByAsymmetricKey(const VerifyByAsymmetricKeyRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyByAsymmetricKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyByAsymmetricKeyResponse rsp = VerifyByAsymmetricKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyByAsymmetricKeyOutcome(rsp);
        else
            return VerifyByAsymmetricKeyOutcome(o.GetError());
    }
    else
    {
        return VerifyByAsymmetricKeyOutcome(outcome.GetError());
    }
}

void KmsClient::VerifyByAsymmetricKeyAsync(const VerifyByAsymmetricKeyRequest& request, const VerifyByAsymmetricKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyByAsymmetricKeyRequest&;
    using Resp = VerifyByAsymmetricKeyResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyByAsymmetricKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

KmsClient::VerifyByAsymmetricKeyOutcomeCallable KmsClient::VerifyByAsymmetricKeyCallable(const VerifyByAsymmetricKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyByAsymmetricKeyOutcome>>();
    VerifyByAsymmetricKeyAsync(
    request,
    [prom](
        const KmsClient*,
        const VerifyByAsymmetricKeyRequest&,
        VerifyByAsymmetricKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

