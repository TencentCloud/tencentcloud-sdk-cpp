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
#include <tencentcloud/drm/v20181115/model/CreateLicenseRequest.h>
#include <tencentcloud/drm/v20181115/model/CreateLicenseResponse.h>
#include <tencentcloud/drm/v20181115/model/DescribeKeysRequest.h>
#include <tencentcloud/drm/v20181115/model/DescribeKeysResponse.h>
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

                typedef Outcome<Error, Model::CreateLicenseResponse> CreateLicenseOutcome;
                typedef std::future<CreateLicenseOutcome> CreateLicenseOutcomeCallable;
                typedef std::function<void(const DrmClient*, const Model::CreateLicenseRequest&, CreateLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLicenseAsyncHandler;
                typedef Outcome<Error, Model::DescribeKeysResponse> DescribeKeysOutcome;
                typedef std::future<DescribeKeysOutcome> DescribeKeysOutcomeCallable;
                typedef std::function<void(const DrmClient*, const Model::DescribeKeysRequest&, DescribeKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeysAsyncHandler;
                typedef Outcome<Error, Model::StartEncryptionResponse> StartEncryptionOutcome;
                typedef std::future<StartEncryptionOutcome> StartEncryptionOutcomeCallable;
                typedef std::function<void(const DrmClient*, const Model::StartEncryptionRequest&, StartEncryptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartEncryptionAsyncHandler;



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
                 *开发者需要指定使用的DRM类型、和需要加密的Track类型，后台返回加密使用的密钥
如果加密使用的ContentID没有关联的密钥信息，后台会自动生成新的密钥返回

                 * @param req DescribeKeysRequest
                 * @return DescribeKeysOutcome
                 */
                DescribeKeysOutcome DescribeKeys(const Model::DescribeKeysRequest &request);
                void DescribeKeysAsync(const Model::DescribeKeysRequest& request, const DescribeKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeysOutcomeCallable DescribeKeysCallable(const Model::DescribeKeysRequest& request);

                /**
                 *开发者调用该接口，启动一次内容文件的DRM加密工作流
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
