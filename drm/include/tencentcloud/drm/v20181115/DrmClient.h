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

#ifndef TENCENTCLOUD_DRM_V20181115_DRMCLIENT_H_
#define TENCENTCLOUD_DRM_V20181115_DRMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/drm/v20181115/model/AddFairPlayPemRequest.h>
#include <tencentcloud/drm/v20181115/model/AddFairPlayPemResponse.h>
#include <tencentcloud/drm/v20181115/model/CreateEncryptKeysRequest.h>
#include <tencentcloud/drm/v20181115/model/CreateEncryptKeysResponse.h>
#include <tencentcloud/drm/v20181115/model/CreateLicenseRequest.h>
#include <tencentcloud/drm/v20181115/model/CreateLicenseResponse.h>
#include <tencentcloud/drm/v20181115/model/DeleteFairPlayPemRequest.h>
#include <tencentcloud/drm/v20181115/model/DeleteFairPlayPemResponse.h>
#include <tencentcloud/drm/v20181115/model/DescribeAllKeysRequest.h>
#include <tencentcloud/drm/v20181115/model/DescribeAllKeysResponse.h>
#include <tencentcloud/drm/v20181115/model/DescribeDRMLicenseRequest.h>
#include <tencentcloud/drm/v20181115/model/DescribeDRMLicenseResponse.h>
#include <tencentcloud/drm/v20181115/model/DescribeFairPlayPemRequest.h>
#include <tencentcloud/drm/v20181115/model/DescribeFairPlayPemResponse.h>
#include <tencentcloud/drm/v20181115/model/DescribeKeysRequest.h>
#include <tencentcloud/drm/v20181115/model/DescribeKeysResponse.h>
#include <tencentcloud/drm/v20181115/model/GenerateTDRMKeyRequest.h>
#include <tencentcloud/drm/v20181115/model/GenerateTDRMKeyResponse.h>
#include <tencentcloud/drm/v20181115/model/ModifyFairPlayPemRequest.h>
#include <tencentcloud/drm/v20181115/model/ModifyFairPlayPemResponse.h>
#include <tencentcloud/drm/v20181115/model/StartEncryptionRequest.h>
#include <tencentcloud/drm/v20181115/model/StartEncryptionResponse.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            class DrmClient : public AbstractClient
            {
            public:
                DrmClient(const Credential &credential, const std::string &region);
                DrmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddFairPlayPemResponse> AddFairPlayPemOutcome;
                typedef std::future<AddFairPlayPemOutcome> AddFairPlayPemOutcomeCallable;
                typedef std::function<void(const DrmClient*, const Model::AddFairPlayPemRequest&, AddFairPlayPemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddFairPlayPemAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEncryptKeysResponse> CreateEncryptKeysOutcome;
                typedef std::future<CreateEncryptKeysOutcome> CreateEncryptKeysOutcomeCallable;
                typedef std::function<void(const DrmClient*, const Model::CreateEncryptKeysRequest&, CreateEncryptKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEncryptKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLicenseResponse> CreateLicenseOutcome;
                typedef std::future<CreateLicenseOutcome> CreateLicenseOutcomeCallable;
                typedef std::function<void(const DrmClient*, const Model::CreateLicenseRequest&, CreateLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFairPlayPemResponse> DeleteFairPlayPemOutcome;
                typedef std::future<DeleteFairPlayPemOutcome> DeleteFairPlayPemOutcomeCallable;
                typedef std::function<void(const DrmClient*, const Model::DeleteFairPlayPemRequest&, DeleteFairPlayPemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFairPlayPemAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllKeysResponse> DescribeAllKeysOutcome;
                typedef std::future<DescribeAllKeysOutcome> DescribeAllKeysOutcomeCallable;
                typedef std::function<void(const DrmClient*, const Model::DescribeAllKeysRequest&, DescribeAllKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDRMLicenseResponse> DescribeDRMLicenseOutcome;
                typedef std::future<DescribeDRMLicenseOutcome> DescribeDRMLicenseOutcomeCallable;
                typedef std::function<void(const DrmClient*, const Model::DescribeDRMLicenseRequest&, DescribeDRMLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDRMLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFairPlayPemResponse> DescribeFairPlayPemOutcome;
                typedef std::future<DescribeFairPlayPemOutcome> DescribeFairPlayPemOutcomeCallable;
                typedef std::function<void(const DrmClient*, const Model::DescribeFairPlayPemRequest&, DescribeFairPlayPemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFairPlayPemAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKeysResponse> DescribeKeysOutcome;
                typedef std::future<DescribeKeysOutcome> DescribeKeysOutcomeCallable;
                typedef std::function<void(const DrmClient*, const Model::DescribeKeysRequest&, DescribeKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateTDRMKeyResponse> GenerateTDRMKeyOutcome;
                typedef std::future<GenerateTDRMKeyOutcome> GenerateTDRMKeyOutcomeCallable;
                typedef std::function<void(const DrmClient*, const Model::GenerateTDRMKeyRequest&, GenerateTDRMKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateTDRMKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFairPlayPemResponse> ModifyFairPlayPemOutcome;
                typedef std::future<ModifyFairPlayPemOutcome> ModifyFairPlayPemOutcomeCallable;
                typedef std::function<void(const DrmClient*, const Model::ModifyFairPlayPemRequest&, ModifyFairPlayPemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFairPlayPemAsyncHandler;
                typedef Outcome<Core::Error, Model::StartEncryptionResponse> StartEncryptionOutcome;
                typedef std::future<StartEncryptionOutcome> StartEncryptionOutcomeCallable;
                typedef std::function<void(const DrmClient*, const Model::StartEncryptionRequest&, StartEncryptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartEncryptionAsyncHandler;



                /**
                 *本接口用来设置fairplay方案所需的私钥、私钥密钥、ask等信息。
如需使用fairplay方案，请务必先设置私钥。
                 * @param req AddFairPlayPemRequest
                 * @return AddFairPlayPemOutcome
                 */
                AddFairPlayPemOutcome AddFairPlayPem(const Model::AddFairPlayPemRequest &request);
                void AddFairPlayPemAsync(const Model::AddFairPlayPemRequest& request, const AddFairPlayPemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddFairPlayPemOutcomeCallable AddFairPlayPemCallable(const Model::AddFairPlayPemRequest& request);

                /**
                 *该接口用来设置加密的密钥。注意，同一个content id，只能设置一次！
                 * @param req CreateEncryptKeysRequest
                 * @return CreateEncryptKeysOutcome
                 */
                CreateEncryptKeysOutcome CreateEncryptKeys(const Model::CreateEncryptKeysRequest &request);
                void CreateEncryptKeysAsync(const Model::CreateEncryptKeysRequest& request, const CreateEncryptKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEncryptKeysOutcomeCallable CreateEncryptKeysCallable(const Model::CreateEncryptKeysRequest& request);

                /**
                 *本接口用来生成DRM方案对应的播放许可证，开发者需提供DRM方案类型、内容类型参数，后台将生成许可证后返回许可证数据
开发者需要转发终端设备发出的许可证请求信息。
                 * @param req CreateLicenseRequest
                 * @return CreateLicenseOutcome
                 */
                CreateLicenseOutcome CreateLicense(const Model::CreateLicenseRequest &request);
                void CreateLicenseAsync(const Model::CreateLicenseRequest& request, const CreateLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLicenseOutcomeCallable CreateLicenseCallable(const Model::CreateLicenseRequest& request);

                /**
                 *本接口用来删除fairplay方案的私钥、ask等信息
注：高风险操作，删除后，您将无法使用腾讯云DRM提供的fairplay服务。
由于缓存，删除操作需要约半小时生效
                 * @param req DeleteFairPlayPemRequest
                 * @return DeleteFairPlayPemOutcome
                 */
                DeleteFairPlayPemOutcome DeleteFairPlayPem(const Model::DeleteFairPlayPemRequest &request);
                void DeleteFairPlayPemAsync(const Model::DeleteFairPlayPemRequest& request, const DeleteFairPlayPemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFairPlayPemOutcomeCallable DeleteFairPlayPemCallable(const Model::DeleteFairPlayPemRequest& request);

                /**
                 *本接口用来查询指定DRM类型、ContentType的所有加密密钥

                 * @param req DescribeAllKeysRequest
                 * @return DescribeAllKeysOutcome
                 */
                DescribeAllKeysOutcome DescribeAllKeys(const Model::DescribeAllKeysRequest &request);
                void DescribeAllKeysAsync(const Model::DescribeAllKeysRequest& request, const DescribeAllKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllKeysOutcomeCallable DescribeAllKeysCallable(const Model::DescribeAllKeysRequest& request);

                /**
                 *开发者需要指定使用的DRM类型取值 NORMALAES、和需要加密的Track类型取值 SD,ContentType取值 LiveVideo
                 * @param req DescribeDRMLicenseRequest
                 * @return DescribeDRMLicenseOutcome
                 */
                DescribeDRMLicenseOutcome DescribeDRMLicense(const Model::DescribeDRMLicenseRequest &request);
                void DescribeDRMLicenseAsync(const Model::DescribeDRMLicenseRequest& request, const DescribeDRMLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDRMLicenseOutcomeCallable DescribeDRMLicenseCallable(const Model::DescribeDRMLicenseRequest& request);

                /**
                 *该接口用来查询设置的FairPlay私钥校验信息。可用该接口校验设置的私钥与本身的私钥是否一致。
                 * @param req DescribeFairPlayPemRequest
                 * @return DescribeFairPlayPemOutcome
                 */
                DescribeFairPlayPemOutcome DescribeFairPlayPem(const Model::DescribeFairPlayPemRequest &request);
                void DescribeFairPlayPemAsync(const Model::DescribeFairPlayPemRequest& request, const DescribeFairPlayPemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFairPlayPemOutcomeCallable DescribeFairPlayPemCallable(const Model::DescribeFairPlayPemRequest& request);

                /**
                 *开发者需要指定使用的DRM类型、和需要加密的Track类型，后台返回加密使用的密钥
如果加密使用的ContentID没有关联的密钥信息，后台会自动生成新的密钥返回

                 * @param req DescribeKeysRequest
                 * @return DescribeKeysOutcome
                 */
                DescribeKeysOutcome DescribeKeys(const Model::DescribeKeysRequest &request);
                void DescribeKeysAsync(const Model::DescribeKeysRequest& request, const DescribeKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeysOutcomeCallable DescribeKeysCallable(const Model::DescribeKeysRequest& request);

                /**
                 *开发者需要指定使用的DRM类型取值 NORMALAES、和需要加密的Track类型取值 SD,ContentType取值 LiveVideo
                 * @param req GenerateTDRMKeyRequest
                 * @return GenerateTDRMKeyOutcome
                 */
                GenerateTDRMKeyOutcome GenerateTDRMKey(const Model::GenerateTDRMKeyRequest &request);
                void GenerateTDRMKeyAsync(const Model::GenerateTDRMKeyRequest& request, const GenerateTDRMKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateTDRMKeyOutcomeCallable GenerateTDRMKeyCallable(const Model::GenerateTDRMKeyRequest& request);

                /**
                 *本接口用来设置fairplay方案所需的私钥、私钥密钥、ask等信息。
如需使用fairplay方案，请务必先设置私钥。
                 * @param req ModifyFairPlayPemRequest
                 * @return ModifyFairPlayPemOutcome
                 */
                ModifyFairPlayPemOutcome ModifyFairPlayPem(const Model::ModifyFairPlayPemRequest &request);
                void ModifyFairPlayPemAsync(const Model::ModifyFairPlayPemRequest& request, const ModifyFairPlayPemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFairPlayPemOutcomeCallable ModifyFairPlayPemCallable(const Model::ModifyFairPlayPemRequest& request);

                /**
                 *开发者调用该接口，启动一次内容文件的DRM加密工作流。
注意：该接口已下线。
                 * @param req StartEncryptionRequest
                 * @return StartEncryptionOutcome
                 */
                StartEncryptionOutcome StartEncryption(const Model::StartEncryptionRequest &request);
                void StartEncryptionAsync(const Model::StartEncryptionRequest& request, const StartEncryptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartEncryptionOutcomeCallable StartEncryptionCallable(const Model::StartEncryptionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_DRMCLIENT_H_
