/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ArchiveKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::ArchiveKeyOutcomeCallable KmsClient::ArchiveKeyCallable(const ArchiveKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ArchiveKeyOutcome()>>(
        [this, request]()
        {
            return this->ArchiveKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AsymmetricRsaDecrypt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::AsymmetricRsaDecryptOutcomeCallable KmsClient::AsymmetricRsaDecryptCallable(const AsymmetricRsaDecryptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AsymmetricRsaDecryptOutcome()>>(
        [this, request]()
        {
            return this->AsymmetricRsaDecrypt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AsymmetricSm2Decrypt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::AsymmetricSm2DecryptOutcomeCallable KmsClient::AsymmetricSm2DecryptCallable(const AsymmetricSm2DecryptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AsymmetricSm2DecryptOutcome()>>(
        [this, request]()
        {
            return this->AsymmetricSm2Decrypt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindCloudResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::BindCloudResourceOutcomeCallable KmsClient::BindCloudResourceCallable(const BindCloudResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindCloudResourceOutcome()>>(
        [this, request]()
        {
            return this->BindCloudResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelKeyArchive(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::CancelKeyArchiveOutcomeCallable KmsClient::CancelKeyArchiveCallable(const CancelKeyArchiveRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelKeyArchiveOutcome()>>(
        [this, request]()
        {
            return this->CancelKeyArchive(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelKeyDeletion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::CancelKeyDeletionOutcomeCallable KmsClient::CancelKeyDeletionCallable(const CancelKeyDeletionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelKeyDeletionOutcome()>>(
        [this, request]()
        {
            return this->CancelKeyDeletion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::CreateKeyOutcomeCallable KmsClient::CreateKeyCallable(const CreateKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateKeyOutcome()>>(
        [this, request]()
        {
            return this->CreateKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWhiteBoxKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::CreateWhiteBoxKeyOutcomeCallable KmsClient::CreateWhiteBoxKeyCallable(const CreateWhiteBoxKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWhiteBoxKeyOutcome()>>(
        [this, request]()
        {
            return this->CreateWhiteBoxKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Decrypt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::DecryptOutcomeCallable KmsClient::DecryptCallable(const DecryptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DecryptOutcome()>>(
        [this, request]()
        {
            return this->Decrypt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImportedKeyMaterial(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::DeleteImportedKeyMaterialOutcomeCallable KmsClient::DeleteImportedKeyMaterialCallable(const DeleteImportedKeyMaterialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImportedKeyMaterialOutcome()>>(
        [this, request]()
        {
            return this->DeleteImportedKeyMaterial(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWhiteBoxKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::DeleteWhiteBoxKeyOutcomeCallable KmsClient::DeleteWhiteBoxKeyCallable(const DeleteWhiteBoxKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWhiteBoxKeyOutcome()>>(
        [this, request]()
        {
            return this->DeleteWhiteBoxKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::DescribeKeyOutcomeCallable KmsClient::DescribeKeyCallable(const DescribeKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::DescribeKeysOutcomeCallable KmsClient::DescribeKeysCallable(const DescribeKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKeysOutcome()>>(
        [this, request]()
        {
            return this->DescribeKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWhiteBoxDecryptKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::DescribeWhiteBoxDecryptKeyOutcomeCallable KmsClient::DescribeWhiteBoxDecryptKeyCallable(const DescribeWhiteBoxDecryptKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWhiteBoxDecryptKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeWhiteBoxDecryptKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWhiteBoxDeviceFingerprints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::DescribeWhiteBoxDeviceFingerprintsOutcomeCallable KmsClient::DescribeWhiteBoxDeviceFingerprintsCallable(const DescribeWhiteBoxDeviceFingerprintsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWhiteBoxDeviceFingerprintsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWhiteBoxDeviceFingerprints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWhiteBoxKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::DescribeWhiteBoxKeyOutcomeCallable KmsClient::DescribeWhiteBoxKeyCallable(const DescribeWhiteBoxKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWhiteBoxKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeWhiteBoxKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWhiteBoxKeyDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::DescribeWhiteBoxKeyDetailsOutcomeCallable KmsClient::DescribeWhiteBoxKeyDetailsCallable(const DescribeWhiteBoxKeyDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWhiteBoxKeyDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWhiteBoxKeyDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWhiteBoxServiceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::DescribeWhiteBoxServiceStatusOutcomeCallable KmsClient::DescribeWhiteBoxServiceStatusCallable(const DescribeWhiteBoxServiceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWhiteBoxServiceStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeWhiteBoxServiceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::DisableKeyOutcomeCallable KmsClient::DisableKeyCallable(const DisableKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableKeyOutcome()>>(
        [this, request]()
        {
            return this->DisableKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableKeyRotation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::DisableKeyRotationOutcomeCallable KmsClient::DisableKeyRotationCallable(const DisableKeyRotationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableKeyRotationOutcome()>>(
        [this, request]()
        {
            return this->DisableKeyRotation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::DisableKeysOutcomeCallable KmsClient::DisableKeysCallable(const DisableKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableKeysOutcome()>>(
        [this, request]()
        {
            return this->DisableKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableWhiteBoxKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::DisableWhiteBoxKeyOutcomeCallable KmsClient::DisableWhiteBoxKeyCallable(const DisableWhiteBoxKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableWhiteBoxKeyOutcome()>>(
        [this, request]()
        {
            return this->DisableWhiteBoxKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableWhiteBoxKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::DisableWhiteBoxKeysOutcomeCallable KmsClient::DisableWhiteBoxKeysCallable(const DisableWhiteBoxKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableWhiteBoxKeysOutcome()>>(
        [this, request]()
        {
            return this->DisableWhiteBoxKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::EnableKeyOutcomeCallable KmsClient::EnableKeyCallable(const EnableKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableKeyOutcome()>>(
        [this, request]()
        {
            return this->EnableKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableKeyRotation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::EnableKeyRotationOutcomeCallable KmsClient::EnableKeyRotationCallable(const EnableKeyRotationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableKeyRotationOutcome()>>(
        [this, request]()
        {
            return this->EnableKeyRotation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::EnableKeysOutcomeCallable KmsClient::EnableKeysCallable(const EnableKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableKeysOutcome()>>(
        [this, request]()
        {
            return this->EnableKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableWhiteBoxKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::EnableWhiteBoxKeyOutcomeCallable KmsClient::EnableWhiteBoxKeyCallable(const EnableWhiteBoxKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableWhiteBoxKeyOutcome()>>(
        [this, request]()
        {
            return this->EnableWhiteBoxKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableWhiteBoxKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::EnableWhiteBoxKeysOutcomeCallable KmsClient::EnableWhiteBoxKeysCallable(const EnableWhiteBoxKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableWhiteBoxKeysOutcome()>>(
        [this, request]()
        {
            return this->EnableWhiteBoxKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Encrypt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::EncryptOutcomeCallable KmsClient::EncryptCallable(const EncryptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EncryptOutcome()>>(
        [this, request]()
        {
            return this->Encrypt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EncryptByWhiteBox(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::EncryptByWhiteBoxOutcomeCallable KmsClient::EncryptByWhiteBoxCallable(const EncryptByWhiteBoxRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EncryptByWhiteBoxOutcome()>>(
        [this, request]()
        {
            return this->EncryptByWhiteBox(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateDataKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::GenerateDataKeyOutcomeCallable KmsClient::GenerateDataKeyCallable(const GenerateDataKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateDataKeyOutcome()>>(
        [this, request]()
        {
            return this->GenerateDataKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateRandom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::GenerateRandomOutcomeCallable KmsClient::GenerateRandomCallable(const GenerateRandomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateRandomOutcome()>>(
        [this, request]()
        {
            return this->GenerateRandom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetKeyRotationStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::GetKeyRotationStatusOutcomeCallable KmsClient::GetKeyRotationStatusCallable(const GetKeyRotationStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetKeyRotationStatusOutcome()>>(
        [this, request]()
        {
            return this->GetKeyRotationStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetParametersForImport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::GetParametersForImportOutcomeCallable KmsClient::GetParametersForImportCallable(const GetParametersForImportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetParametersForImportOutcome()>>(
        [this, request]()
        {
            return this->GetParametersForImport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPublicKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::GetPublicKeyOutcomeCallable KmsClient::GetPublicKeyCallable(const GetPublicKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPublicKeyOutcome()>>(
        [this, request]()
        {
            return this->GetPublicKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::GetRegionsOutcomeCallable KmsClient::GetRegionsCallable(const GetRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRegionsOutcome()>>(
        [this, request]()
        {
            return this->GetRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetServiceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::GetServiceStatusOutcomeCallable KmsClient::GetServiceStatusCallable(const GetServiceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetServiceStatusOutcome()>>(
        [this, request]()
        {
            return this->GetServiceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportKeyMaterial(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::ImportKeyMaterialOutcomeCallable KmsClient::ImportKeyMaterialCallable(const ImportKeyMaterialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportKeyMaterialOutcome()>>(
        [this, request]()
        {
            return this->ImportKeyMaterial(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAlgorithms(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::ListAlgorithmsOutcomeCallable KmsClient::ListAlgorithmsCallable(const ListAlgorithmsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAlgorithmsOutcome()>>(
        [this, request]()
        {
            return this->ListAlgorithms(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListKeyDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::ListKeyDetailOutcomeCallable KmsClient::ListKeyDetailCallable(const ListKeyDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListKeyDetailOutcome()>>(
        [this, request]()
        {
            return this->ListKeyDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::ListKeysOutcomeCallable KmsClient::ListKeysCallable(const ListKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListKeysOutcome()>>(
        [this, request]()
        {
            return this->ListKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OverwriteWhiteBoxDeviceFingerprints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::OverwriteWhiteBoxDeviceFingerprintsOutcomeCallable KmsClient::OverwriteWhiteBoxDeviceFingerprintsCallable(const OverwriteWhiteBoxDeviceFingerprintsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OverwriteWhiteBoxDeviceFingerprintsOutcome()>>(
        [this, request]()
        {
            return this->OverwriteWhiteBoxDeviceFingerprints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PostQuantumCryptoDecrypt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::PostQuantumCryptoDecryptOutcomeCallable KmsClient::PostQuantumCryptoDecryptCallable(const PostQuantumCryptoDecryptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PostQuantumCryptoDecryptOutcome()>>(
        [this, request]()
        {
            return this->PostQuantumCryptoDecrypt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PostQuantumCryptoEncrypt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::PostQuantumCryptoEncryptOutcomeCallable KmsClient::PostQuantumCryptoEncryptCallable(const PostQuantumCryptoEncryptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PostQuantumCryptoEncryptOutcome()>>(
        [this, request]()
        {
            return this->PostQuantumCryptoEncrypt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PostQuantumCryptoSign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::PostQuantumCryptoSignOutcomeCallable KmsClient::PostQuantumCryptoSignCallable(const PostQuantumCryptoSignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PostQuantumCryptoSignOutcome()>>(
        [this, request]()
        {
            return this->PostQuantumCryptoSign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PostQuantumCryptoVerify(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::PostQuantumCryptoVerifyOutcomeCallable KmsClient::PostQuantumCryptoVerifyCallable(const PostQuantumCryptoVerifyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PostQuantumCryptoVerifyOutcome()>>(
        [this, request]()
        {
            return this->PostQuantumCryptoVerify(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReEncrypt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::ReEncryptOutcomeCallable KmsClient::ReEncryptCallable(const ReEncryptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReEncryptOutcome()>>(
        [this, request]()
        {
            return this->ReEncrypt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScheduleKeyDeletion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::ScheduleKeyDeletionOutcomeCallable KmsClient::ScheduleKeyDeletionCallable(const ScheduleKeyDeletionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScheduleKeyDeletionOutcome()>>(
        [this, request]()
        {
            return this->ScheduleKeyDeletion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SignByAsymmetricKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::SignByAsymmetricKeyOutcomeCallable KmsClient::SignByAsymmetricKeyCallable(const SignByAsymmetricKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SignByAsymmetricKeyOutcome()>>(
        [this, request]()
        {
            return this->SignByAsymmetricKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindCloudResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::UnbindCloudResourceOutcomeCallable KmsClient::UnbindCloudResourceCallable(const UnbindCloudResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindCloudResourceOutcome()>>(
        [this, request]()
        {
            return this->UnbindCloudResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::UpdateAliasOutcomeCallable KmsClient::UpdateAliasCallable(const UpdateAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAliasOutcome()>>(
        [this, request]()
        {
            return this->UpdateAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateKeyDescription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::UpdateKeyDescriptionOutcomeCallable KmsClient::UpdateKeyDescriptionCallable(const UpdateKeyDescriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateKeyDescriptionOutcome()>>(
        [this, request]()
        {
            return this->UpdateKeyDescription(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyByAsymmetricKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

KmsClient::VerifyByAsymmetricKeyOutcomeCallable KmsClient::VerifyByAsymmetricKeyCallable(const VerifyByAsymmetricKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyByAsymmetricKeyOutcome()>>(
        [this, request]()
        {
            return this->VerifyByAsymmetricKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

