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

#ifndef TENCENTCLOUD_KMS_V20190118_KMSCLIENT_H_
#define TENCENTCLOUD_KMS_V20190118_KMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/kms/v20190118/model/CancelKeyDeletionRequest.h>
#include <tencentcloud/kms/v20190118/model/CancelKeyDeletionResponse.h>
#include <tencentcloud/kms/v20190118/model/CreateKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/CreateKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/DecryptRequest.h>
#include <tencentcloud/kms/v20190118/model/DecryptResponse.h>
#include <tencentcloud/kms/v20190118/model/DeleteImportedKeyMaterialRequest.h>
#include <tencentcloud/kms/v20190118/model/DeleteImportedKeyMaterialResponse.h>
#include <tencentcloud/kms/v20190118/model/DescribeKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/DescribeKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/DescribeKeysRequest.h>
#include <tencentcloud/kms/v20190118/model/DescribeKeysResponse.h>
#include <tencentcloud/kms/v20190118/model/DisableKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/DisableKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/DisableKeyRotationRequest.h>
#include <tencentcloud/kms/v20190118/model/DisableKeyRotationResponse.h>
#include <tencentcloud/kms/v20190118/model/DisableKeysRequest.h>
#include <tencentcloud/kms/v20190118/model/DisableKeysResponse.h>
#include <tencentcloud/kms/v20190118/model/EnableKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/EnableKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/EnableKeyRotationRequest.h>
#include <tencentcloud/kms/v20190118/model/EnableKeyRotationResponse.h>
#include <tencentcloud/kms/v20190118/model/EnableKeysRequest.h>
#include <tencentcloud/kms/v20190118/model/EnableKeysResponse.h>
#include <tencentcloud/kms/v20190118/model/EncryptRequest.h>
#include <tencentcloud/kms/v20190118/model/EncryptResponse.h>
#include <tencentcloud/kms/v20190118/model/GenerateDataKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/GenerateDataKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/GenerateRandomRequest.h>
#include <tencentcloud/kms/v20190118/model/GenerateRandomResponse.h>
#include <tencentcloud/kms/v20190118/model/GetKeyRotationStatusRequest.h>
#include <tencentcloud/kms/v20190118/model/GetKeyRotationStatusResponse.h>
#include <tencentcloud/kms/v20190118/model/GetParametersForImportRequest.h>
#include <tencentcloud/kms/v20190118/model/GetParametersForImportResponse.h>
#include <tencentcloud/kms/v20190118/model/GetServiceStatusRequest.h>
#include <tencentcloud/kms/v20190118/model/GetServiceStatusResponse.h>
#include <tencentcloud/kms/v20190118/model/ImportKeyMaterialRequest.h>
#include <tencentcloud/kms/v20190118/model/ImportKeyMaterialResponse.h>
#include <tencentcloud/kms/v20190118/model/ListKeyDetailRequest.h>
#include <tencentcloud/kms/v20190118/model/ListKeyDetailResponse.h>
#include <tencentcloud/kms/v20190118/model/ListKeysRequest.h>
#include <tencentcloud/kms/v20190118/model/ListKeysResponse.h>
#include <tencentcloud/kms/v20190118/model/ReEncryptRequest.h>
#include <tencentcloud/kms/v20190118/model/ReEncryptResponse.h>
#include <tencentcloud/kms/v20190118/model/ScheduleKeyDeletionRequest.h>
#include <tencentcloud/kms/v20190118/model/ScheduleKeyDeletionResponse.h>
#include <tencentcloud/kms/v20190118/model/UpdateAliasRequest.h>
#include <tencentcloud/kms/v20190118/model/UpdateAliasResponse.h>
#include <tencentcloud/kms/v20190118/model/UpdateKeyDescriptionRequest.h>
#include <tencentcloud/kms/v20190118/model/UpdateKeyDescriptionResponse.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            class KmsClient : public AbstractClient
            {
            public:
                KmsClient(const Credential &credential, const std::string &region);
                KmsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CancelKeyDeletionResponse> CancelKeyDeletionOutcome;
                typedef std::future<CancelKeyDeletionOutcome> CancelKeyDeletionOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::CancelKeyDeletionRequest&, CancelKeyDeletionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelKeyDeletionAsyncHandler;
                typedef Outcome<Error, Model::CreateKeyResponse> CreateKeyOutcome;
                typedef std::future<CreateKeyOutcome> CreateKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::CreateKeyRequest&, CreateKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyAsyncHandler;
                typedef Outcome<Error, Model::DecryptResponse> DecryptOutcome;
                typedef std::future<DecryptOutcome> DecryptOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DecryptRequest&, DecryptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DecryptAsyncHandler;
                typedef Outcome<Error, Model::DeleteImportedKeyMaterialResponse> DeleteImportedKeyMaterialOutcome;
                typedef std::future<DeleteImportedKeyMaterialOutcome> DeleteImportedKeyMaterialOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DeleteImportedKeyMaterialRequest&, DeleteImportedKeyMaterialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImportedKeyMaterialAsyncHandler;
                typedef Outcome<Error, Model::DescribeKeyResponse> DescribeKeyOutcome;
                typedef std::future<DescribeKeyOutcome> DescribeKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DescribeKeyRequest&, DescribeKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeyAsyncHandler;
                typedef Outcome<Error, Model::DescribeKeysResponse> DescribeKeysOutcome;
                typedef std::future<DescribeKeysOutcome> DescribeKeysOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DescribeKeysRequest&, DescribeKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeysAsyncHandler;
                typedef Outcome<Error, Model::DisableKeyResponse> DisableKeyOutcome;
                typedef std::future<DisableKeyOutcome> DisableKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DisableKeyRequest&, DisableKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableKeyAsyncHandler;
                typedef Outcome<Error, Model::DisableKeyRotationResponse> DisableKeyRotationOutcome;
                typedef std::future<DisableKeyRotationOutcome> DisableKeyRotationOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DisableKeyRotationRequest&, DisableKeyRotationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableKeyRotationAsyncHandler;
                typedef Outcome<Error, Model::DisableKeysResponse> DisableKeysOutcome;
                typedef std::future<DisableKeysOutcome> DisableKeysOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DisableKeysRequest&, DisableKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableKeysAsyncHandler;
                typedef Outcome<Error, Model::EnableKeyResponse> EnableKeyOutcome;
                typedef std::future<EnableKeyOutcome> EnableKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::EnableKeyRequest&, EnableKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableKeyAsyncHandler;
                typedef Outcome<Error, Model::EnableKeyRotationResponse> EnableKeyRotationOutcome;
                typedef std::future<EnableKeyRotationOutcome> EnableKeyRotationOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::EnableKeyRotationRequest&, EnableKeyRotationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableKeyRotationAsyncHandler;
                typedef Outcome<Error, Model::EnableKeysResponse> EnableKeysOutcome;
                typedef std::future<EnableKeysOutcome> EnableKeysOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::EnableKeysRequest&, EnableKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableKeysAsyncHandler;
                typedef Outcome<Error, Model::EncryptResponse> EncryptOutcome;
                typedef std::future<EncryptOutcome> EncryptOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::EncryptRequest&, EncryptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EncryptAsyncHandler;
                typedef Outcome<Error, Model::GenerateDataKeyResponse> GenerateDataKeyOutcome;
                typedef std::future<GenerateDataKeyOutcome> GenerateDataKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::GenerateDataKeyRequest&, GenerateDataKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateDataKeyAsyncHandler;
                typedef Outcome<Error, Model::GenerateRandomResponse> GenerateRandomOutcome;
                typedef std::future<GenerateRandomOutcome> GenerateRandomOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::GenerateRandomRequest&, GenerateRandomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateRandomAsyncHandler;
                typedef Outcome<Error, Model::GetKeyRotationStatusResponse> GetKeyRotationStatusOutcome;
                typedef std::future<GetKeyRotationStatusOutcome> GetKeyRotationStatusOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::GetKeyRotationStatusRequest&, GetKeyRotationStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetKeyRotationStatusAsyncHandler;
                typedef Outcome<Error, Model::GetParametersForImportResponse> GetParametersForImportOutcome;
                typedef std::future<GetParametersForImportOutcome> GetParametersForImportOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::GetParametersForImportRequest&, GetParametersForImportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetParametersForImportAsyncHandler;
                typedef Outcome<Error, Model::GetServiceStatusResponse> GetServiceStatusOutcome;
                typedef std::future<GetServiceStatusOutcome> GetServiceStatusOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::GetServiceStatusRequest&, GetServiceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceStatusAsyncHandler;
                typedef Outcome<Error, Model::ImportKeyMaterialResponse> ImportKeyMaterialOutcome;
                typedef std::future<ImportKeyMaterialOutcome> ImportKeyMaterialOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::ImportKeyMaterialRequest&, ImportKeyMaterialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportKeyMaterialAsyncHandler;
                typedef Outcome<Error, Model::ListKeyDetailResponse> ListKeyDetailOutcome;
                typedef std::future<ListKeyDetailOutcome> ListKeyDetailOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::ListKeyDetailRequest&, ListKeyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListKeyDetailAsyncHandler;
                typedef Outcome<Error, Model::ListKeysResponse> ListKeysOutcome;
                typedef std::future<ListKeysOutcome> ListKeysOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::ListKeysRequest&, ListKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListKeysAsyncHandler;
                typedef Outcome<Error, Model::ReEncryptResponse> ReEncryptOutcome;
                typedef std::future<ReEncryptOutcome> ReEncryptOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::ReEncryptRequest&, ReEncryptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReEncryptAsyncHandler;
                typedef Outcome<Error, Model::ScheduleKeyDeletionResponse> ScheduleKeyDeletionOutcome;
                typedef std::future<ScheduleKeyDeletionOutcome> ScheduleKeyDeletionOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::ScheduleKeyDeletionRequest&, ScheduleKeyDeletionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScheduleKeyDeletionAsyncHandler;
                typedef Outcome<Error, Model::UpdateAliasResponse> UpdateAliasOutcome;
                typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::UpdateAliasRequest&, UpdateAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAliasAsyncHandler;
                typedef Outcome<Error, Model::UpdateKeyDescriptionResponse> UpdateKeyDescriptionOutcome;
                typedef std::future<UpdateKeyDescriptionOutcome> UpdateKeyDescriptionOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::UpdateKeyDescriptionRequest&, UpdateKeyDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateKeyDescriptionAsyncHandler;



                /**
                 *取消CMK的计划删除操作
                 * @param req CancelKeyDeletionRequest
                 * @return CancelKeyDeletionOutcome
                 */
                CancelKeyDeletionOutcome CancelKeyDeletion(const Model::CancelKeyDeletionRequest &request);
                void CancelKeyDeletionAsync(const Model::CancelKeyDeletionRequest& request, const CancelKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelKeyDeletionOutcomeCallable CancelKeyDeletionCallable(const Model::CancelKeyDeletionRequest& request);

                /**
                 *创建用户管理数据密钥的主密钥CMK（Custom Master Key）。
                 * @param req CreateKeyRequest
                 * @return CreateKeyOutcome
                 */
                CreateKeyOutcome CreateKey(const Model::CreateKeyRequest &request);
                void CreateKeyAsync(const Model::CreateKeyRequest& request, const CreateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKeyOutcomeCallable CreateKeyCallable(const Model::CreateKeyRequest& request);

                /**
                 *本接口用于解密密文，得到明文数据。
                 * @param req DecryptRequest
                 * @return DecryptOutcome
                 */
                DecryptOutcome Decrypt(const Model::DecryptRequest &request);
                void DecryptAsync(const Model::DecryptRequest& request, const DecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DecryptOutcomeCallable DecryptCallable(const Model::DecryptRequest& request);

                /**
                 *用于删除导入的密钥材料，仅对EXTERNAL类型的CMK有效，该接口将CMK设置为PendingImport 状态，并不会删除CMK，在重新进行密钥导入后可继续使用。彻底删除CMK请使用 ScheduleKeyDeletion 接口。
                 * @param req DeleteImportedKeyMaterialRequest
                 * @return DeleteImportedKeyMaterialOutcome
                 */
                DeleteImportedKeyMaterialOutcome DeleteImportedKeyMaterial(const Model::DeleteImportedKeyMaterialRequest &request);
                void DeleteImportedKeyMaterialAsync(const Model::DeleteImportedKeyMaterialRequest& request, const DeleteImportedKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImportedKeyMaterialOutcomeCallable DeleteImportedKeyMaterialCallable(const Model::DeleteImportedKeyMaterialRequest& request);

                /**
                 *用于获取指定KeyId的主密钥属性详情信息。
                 * @param req DescribeKeyRequest
                 * @return DescribeKeyOutcome
                 */
                DescribeKeyOutcome DescribeKey(const Model::DescribeKeyRequest &request);
                void DescribeKeyAsync(const Model::DescribeKeyRequest& request, const DescribeKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeyOutcomeCallable DescribeKeyCallable(const Model::DescribeKeyRequest& request);

                /**
                 *该接口用于批量获取主密钥属性信息。
                 * @param req DescribeKeysRequest
                 * @return DescribeKeysOutcome
                 */
                DescribeKeysOutcome DescribeKeys(const Model::DescribeKeysRequest &request);
                void DescribeKeysAsync(const Model::DescribeKeysRequest& request, const DescribeKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeysOutcomeCallable DescribeKeysCallable(const Model::DescribeKeysRequest& request);

                /**
                 *本接口用于禁用一个主密钥，处于禁用状态的Key无法用于加密、解密操作。
                 * @param req DisableKeyRequest
                 * @return DisableKeyOutcome
                 */
                DisableKeyOutcome DisableKey(const Model::DisableKeyRequest &request);
                void DisableKeyAsync(const Model::DisableKeyRequest& request, const DisableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableKeyOutcomeCallable DisableKeyCallable(const Model::DisableKeyRequest& request);

                /**
                 *对指定的CMK禁止密钥轮换功能。
                 * @param req DisableKeyRotationRequest
                 * @return DisableKeyRotationOutcome
                 */
                DisableKeyRotationOutcome DisableKeyRotation(const Model::DisableKeyRotationRequest &request);
                void DisableKeyRotationAsync(const Model::DisableKeyRotationRequest& request, const DisableKeyRotationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableKeyRotationOutcomeCallable DisableKeyRotationCallable(const Model::DisableKeyRotationRequest& request);

                /**
                 *该接口用于批量禁止CMK的使用。
                 * @param req DisableKeysRequest
                 * @return DisableKeysOutcome
                 */
                DisableKeysOutcome DisableKeys(const Model::DisableKeysRequest &request);
                void DisableKeysAsync(const Model::DisableKeysRequest& request, const DisableKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableKeysOutcomeCallable DisableKeysCallable(const Model::DisableKeysRequest& request);

                /**
                 *用于启用一个指定的CMK。
                 * @param req EnableKeyRequest
                 * @return EnableKeyOutcome
                 */
                EnableKeyOutcome EnableKey(const Model::EnableKeyRequest &request);
                void EnableKeyAsync(const Model::EnableKeyRequest& request, const EnableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableKeyOutcomeCallable EnableKeyCallable(const Model::EnableKeyRequest& request);

                /**
                 *对指定的CMK开启密钥轮换功能。
                 * @param req EnableKeyRotationRequest
                 * @return EnableKeyRotationOutcome
                 */
                EnableKeyRotationOutcome EnableKeyRotation(const Model::EnableKeyRotationRequest &request);
                void EnableKeyRotationAsync(const Model::EnableKeyRotationRequest& request, const EnableKeyRotationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableKeyRotationOutcomeCallable EnableKeyRotationCallable(const Model::EnableKeyRotationRequest& request);

                /**
                 *该接口用于批量启用CMK。
                 * @param req EnableKeysRequest
                 * @return EnableKeysOutcome
                 */
                EnableKeysOutcome EnableKeys(const Model::EnableKeysRequest &request);
                void EnableKeysAsync(const Model::EnableKeysRequest& request, const EnableKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableKeysOutcomeCallable EnableKeysCallable(const Model::EnableKeysRequest& request);

                /**
                 *本接口用于加密最多为4KB任意数据，可用于加密数据库密码，RSA Key，或其它较小的敏感信息。对于应用的数据加密，使用GenerateDataKey生成的DataKey进行本地数据的加解密操作
                 * @param req EncryptRequest
                 * @return EncryptOutcome
                 */
                EncryptOutcome Encrypt(const Model::EncryptRequest &request);
                void EncryptAsync(const Model::EncryptRequest& request, const EncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EncryptOutcomeCallable EncryptCallable(const Model::EncryptRequest& request);

                /**
                 *本接口生成一个数据密钥，您可以用这个密钥进行本地数据的加密。
                 * @param req GenerateDataKeyRequest
                 * @return GenerateDataKeyOutcome
                 */
                GenerateDataKeyOutcome GenerateDataKey(const Model::GenerateDataKeyRequest &request);
                void GenerateDataKeyAsync(const Model::GenerateDataKeyRequest& request, const GenerateDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateDataKeyOutcomeCallable GenerateDataKeyCallable(const Model::GenerateDataKeyRequest& request);

                /**
                 *随机数生成接口。
                 * @param req GenerateRandomRequest
                 * @return GenerateRandomOutcome
                 */
                GenerateRandomOutcome GenerateRandom(const Model::GenerateRandomRequest &request);
                void GenerateRandomAsync(const Model::GenerateRandomRequest& request, const GenerateRandomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateRandomOutcomeCallable GenerateRandomCallable(const Model::GenerateRandomRequest& request);

                /**
                 *查询指定的CMK是否开启了密钥轮换功能。
                 * @param req GetKeyRotationStatusRequest
                 * @return GetKeyRotationStatusOutcome
                 */
                GetKeyRotationStatusOutcome GetKeyRotationStatus(const Model::GetKeyRotationStatusRequest &request);
                void GetKeyRotationStatusAsync(const Model::GetKeyRotationStatusRequest& request, const GetKeyRotationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetKeyRotationStatusOutcomeCallable GetKeyRotationStatusCallable(const Model::GetKeyRotationStatusRequest& request);

                /**
                 *获取导入主密钥（CMK）材料的参数，返回的Token作为执行ImportKeyMaterial的参数之一，返回的PublicKey用于对自主导入密钥材料进行加密。返回的Token和PublicKey 24小时后失效，失效后如需重新导入，需要再次调用该接口获取新的Token和PublicKey。
                 * @param req GetParametersForImportRequest
                 * @return GetParametersForImportOutcome
                 */
                GetParametersForImportOutcome GetParametersForImport(const Model::GetParametersForImportRequest &request);
                void GetParametersForImportAsync(const Model::GetParametersForImportRequest& request, const GetParametersForImportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetParametersForImportOutcomeCallable GetParametersForImportCallable(const Model::GetParametersForImportRequest& request);

                /**
                 *用于查询该用户是否已开通KMS服务
                 * @param req GetServiceStatusRequest
                 * @return GetServiceStatusOutcome
                 */
                GetServiceStatusOutcome GetServiceStatus(const Model::GetServiceStatusRequest &request);
                void GetServiceStatusAsync(const Model::GetServiceStatusRequest& request, const GetServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetServiceStatusOutcomeCallable GetServiceStatusCallable(const Model::GetServiceStatusRequest& request);

                /**
                 *用于导入密钥材料。只有类型为EXTERNAL 的CMK 才可以导入，导入的密钥材料使用 GetParametersForImport 获取的密钥进行加密。可以为指定的 CMK 重新导入密钥材料，并重新指定过期时间，但必须导入相同的密钥材料。CMK 密钥材料导入后不可以更换密钥材料。导入的密钥材料过期或者被删除后，指定的CMK将无法使用，需要再次导入相同的密钥材料才能正常使用。CMK是独立的，同样的密钥材料可导入不同的 CMK 中，但使用其中一个 CMK 加密的数据无法使用另一个 CMK解密。
只有Enabled 和 PendingImport状态的CMK可以导入密钥材料。
                 * @param req ImportKeyMaterialRequest
                 * @return ImportKeyMaterialOutcome
                 */
                ImportKeyMaterialOutcome ImportKeyMaterial(const Model::ImportKeyMaterialRequest &request);
                void ImportKeyMaterialAsync(const Model::ImportKeyMaterialRequest& request, const ImportKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportKeyMaterialOutcomeCallable ImportKeyMaterialCallable(const Model::ImportKeyMaterialRequest& request);

                /**
                 *根据指定Offset和Limit获取主密钥列表详情。
                 * @param req ListKeyDetailRequest
                 * @return ListKeyDetailOutcome
                 */
                ListKeyDetailOutcome ListKeyDetail(const Model::ListKeyDetailRequest &request);
                void ListKeyDetailAsync(const Model::ListKeyDetailRequest& request, const ListKeyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListKeyDetailOutcomeCallable ListKeyDetailCallable(const Model::ListKeyDetailRequest& request);

                /**
                 *列出账号下面状态为Enabled， Disabled 和 PendingImport 的CMK KeyId 列表
                 * @param req ListKeysRequest
                 * @return ListKeysOutcome
                 */
                ListKeysOutcome ListKeys(const Model::ListKeysRequest &request);
                void ListKeysAsync(const Model::ListKeysRequest& request, const ListKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListKeysOutcomeCallable ListKeysCallable(const Model::ListKeysRequest& request);

                /**
                 *使用指定CMK对密文重新加密。
                 * @param req ReEncryptRequest
                 * @return ReEncryptOutcome
                 */
                ReEncryptOutcome ReEncrypt(const Model::ReEncryptRequest &request);
                void ReEncryptAsync(const Model::ReEncryptRequest& request, const ReEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReEncryptOutcomeCallable ReEncryptCallable(const Model::ReEncryptRequest& request);

                /**
                 *CMK计划删除接口，用于指定CMK删除的时间，可选时间区间为[7,30]天
                 * @param req ScheduleKeyDeletionRequest
                 * @return ScheduleKeyDeletionOutcome
                 */
                ScheduleKeyDeletionOutcome ScheduleKeyDeletion(const Model::ScheduleKeyDeletionRequest &request);
                void ScheduleKeyDeletionAsync(const Model::ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScheduleKeyDeletionOutcomeCallable ScheduleKeyDeletionCallable(const Model::ScheduleKeyDeletionRequest& request);

                /**
                 *用于修改CMK的别名。对于处于PendingDelete状态的CMK禁止修改。
                 * @param req UpdateAliasRequest
                 * @return UpdateAliasOutcome
                 */
                UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest &request);
                void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request);

                /**
                 *该接口用于对指定的cmk修改描述信息。对于处于PendingDelete状态的CMK禁止修改。
                 * @param req UpdateKeyDescriptionRequest
                 * @return UpdateKeyDescriptionOutcome
                 */
                UpdateKeyDescriptionOutcome UpdateKeyDescription(const Model::UpdateKeyDescriptionRequest &request);
                void UpdateKeyDescriptionAsync(const Model::UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateKeyDescriptionOutcomeCallable UpdateKeyDescriptionCallable(const Model::UpdateKeyDescriptionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_KMSCLIENT_H_
