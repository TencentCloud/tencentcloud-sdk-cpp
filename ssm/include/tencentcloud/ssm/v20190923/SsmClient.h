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

#ifndef TENCENTCLOUD_SSM_V20190923_SSMCLIENT_H_
#define TENCENTCLOUD_SSM_V20190923_SSMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ssm/v20190923/model/CreateProductSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/CreateProductSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/CreateSSHKeyPairSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/CreateSSHKeyPairSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/CreateSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/CreateSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/DeleteSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/DeleteSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/DeleteSecretVersionRequest.h>
#include <tencentcloud/ssm/v20190923/model/DeleteSecretVersionResponse.h>
#include <tencentcloud/ssm/v20190923/model/DescribeAsyncRequestInfoRequest.h>
#include <tencentcloud/ssm/v20190923/model/DescribeAsyncRequestInfoResponse.h>
#include <tencentcloud/ssm/v20190923/model/DescribeRotationDetailRequest.h>
#include <tencentcloud/ssm/v20190923/model/DescribeRotationDetailResponse.h>
#include <tencentcloud/ssm/v20190923/model/DescribeRotationHistoryRequest.h>
#include <tencentcloud/ssm/v20190923/model/DescribeRotationHistoryResponse.h>
#include <tencentcloud/ssm/v20190923/model/DescribeSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/DescribeSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/DescribeSupportedProductsRequest.h>
#include <tencentcloud/ssm/v20190923/model/DescribeSupportedProductsResponse.h>
#include <tencentcloud/ssm/v20190923/model/DisableSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/DisableSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/EnableSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/EnableSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/GetRegionsRequest.h>
#include <tencentcloud/ssm/v20190923/model/GetRegionsResponse.h>
#include <tencentcloud/ssm/v20190923/model/GetSSHKeyPairValueRequest.h>
#include <tencentcloud/ssm/v20190923/model/GetSSHKeyPairValueResponse.h>
#include <tencentcloud/ssm/v20190923/model/GetSecretValueRequest.h>
#include <tencentcloud/ssm/v20190923/model/GetSecretValueResponse.h>
#include <tencentcloud/ssm/v20190923/model/GetServiceStatusRequest.h>
#include <tencentcloud/ssm/v20190923/model/GetServiceStatusResponse.h>
#include <tencentcloud/ssm/v20190923/model/ListSecretVersionIdsRequest.h>
#include <tencentcloud/ssm/v20190923/model/ListSecretVersionIdsResponse.h>
#include <tencentcloud/ssm/v20190923/model/ListSecretsRequest.h>
#include <tencentcloud/ssm/v20190923/model/ListSecretsResponse.h>
#include <tencentcloud/ssm/v20190923/model/PutSecretValueRequest.h>
#include <tencentcloud/ssm/v20190923/model/PutSecretValueResponse.h>
#include <tencentcloud/ssm/v20190923/model/RestoreSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/RestoreSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/RotateProductSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/RotateProductSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/UpdateDescriptionRequest.h>
#include <tencentcloud/ssm/v20190923/model/UpdateDescriptionResponse.h>
#include <tencentcloud/ssm/v20190923/model/UpdateRotationStatusRequest.h>
#include <tencentcloud/ssm/v20190923/model/UpdateRotationStatusResponse.h>
#include <tencentcloud/ssm/v20190923/model/UpdateSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/UpdateSecretResponse.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            class SsmClient : public AbstractClient
            {
            public:
                SsmClient(const Credential &credential, const std::string &region);
                SsmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateProductSecretResponse> CreateProductSecretOutcome;
                typedef std::future<CreateProductSecretOutcome> CreateProductSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::CreateProductSecretRequest&, CreateProductSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProductSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSSHKeyPairSecretResponse> CreateSSHKeyPairSecretOutcome;
                typedef std::future<CreateSSHKeyPairSecretOutcome> CreateSSHKeyPairSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::CreateSSHKeyPairSecretRequest&, CreateSSHKeyPairSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSSHKeyPairSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecretResponse> CreateSecretOutcome;
                typedef std::future<CreateSecretOutcome> CreateSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::CreateSecretRequest&, CreateSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecretResponse> DeleteSecretOutcome;
                typedef std::future<DeleteSecretOutcome> DeleteSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DeleteSecretRequest&, DeleteSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecretVersionResponse> DeleteSecretVersionOutcome;
                typedef std::future<DeleteSecretVersionOutcome> DeleteSecretVersionOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DeleteSecretVersionRequest&, DeleteSecretVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecretVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAsyncRequestInfoResponse> DescribeAsyncRequestInfoOutcome;
                typedef std::future<DescribeAsyncRequestInfoOutcome> DescribeAsyncRequestInfoOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DescribeAsyncRequestInfoRequest&, DescribeAsyncRequestInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsyncRequestInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRotationDetailResponse> DescribeRotationDetailOutcome;
                typedef std::future<DescribeRotationDetailOutcome> DescribeRotationDetailOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DescribeRotationDetailRequest&, DescribeRotationDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRotationDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRotationHistoryResponse> DescribeRotationHistoryOutcome;
                typedef std::future<DescribeRotationHistoryOutcome> DescribeRotationHistoryOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DescribeRotationHistoryRequest&, DescribeRotationHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRotationHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecretResponse> DescribeSecretOutcome;
                typedef std::future<DescribeSecretOutcome> DescribeSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DescribeSecretRequest&, DescribeSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSupportedProductsResponse> DescribeSupportedProductsOutcome;
                typedef std::future<DescribeSupportedProductsOutcome> DescribeSupportedProductsOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DescribeSupportedProductsRequest&, DescribeSupportedProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupportedProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableSecretResponse> DisableSecretOutcome;
                typedef std::future<DisableSecretOutcome> DisableSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DisableSecretRequest&, DisableSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableSecretResponse> EnableSecretOutcome;
                typedef std::future<EnableSecretOutcome> EnableSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::EnableSecretRequest&, EnableSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRegionsResponse> GetRegionsOutcome;
                typedef std::future<GetRegionsOutcome> GetRegionsOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::GetRegionsRequest&, GetRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSSHKeyPairValueResponse> GetSSHKeyPairValueOutcome;
                typedef std::future<GetSSHKeyPairValueOutcome> GetSSHKeyPairValueOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::GetSSHKeyPairValueRequest&, GetSSHKeyPairValueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSSHKeyPairValueAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSecretValueResponse> GetSecretValueOutcome;
                typedef std::future<GetSecretValueOutcome> GetSecretValueOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::GetSecretValueRequest&, GetSecretValueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSecretValueAsyncHandler;
                typedef Outcome<Core::Error, Model::GetServiceStatusResponse> GetServiceStatusOutcome;
                typedef std::future<GetServiceStatusOutcome> GetServiceStatusOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::GetServiceStatusRequest&, GetServiceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSecretVersionIdsResponse> ListSecretVersionIdsOutcome;
                typedef std::future<ListSecretVersionIdsOutcome> ListSecretVersionIdsOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::ListSecretVersionIdsRequest&, ListSecretVersionIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSecretVersionIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSecretsResponse> ListSecretsOutcome;
                typedef std::future<ListSecretsOutcome> ListSecretsOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::ListSecretsRequest&, ListSecretsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSecretsAsyncHandler;
                typedef Outcome<Core::Error, Model::PutSecretValueResponse> PutSecretValueOutcome;
                typedef std::future<PutSecretValueOutcome> PutSecretValueOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::PutSecretValueRequest&, PutSecretValueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutSecretValueAsyncHandler;
                typedef Outcome<Core::Error, Model::RestoreSecretResponse> RestoreSecretOutcome;
                typedef std::future<RestoreSecretOutcome> RestoreSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::RestoreSecretRequest&, RestoreSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::RotateProductSecretResponse> RotateProductSecretOutcome;
                typedef std::future<RotateProductSecretOutcome> RotateProductSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::RotateProductSecretRequest&, RotateProductSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RotateProductSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDescriptionResponse> UpdateDescriptionOutcome;
                typedef std::future<UpdateDescriptionOutcome> UpdateDescriptionOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::UpdateDescriptionRequest&, UpdateDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRotationStatusResponse> UpdateRotationStatusOutcome;
                typedef std::future<UpdateRotationStatusOutcome> UpdateRotationStatusOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::UpdateRotationStatusRequest&, UpdateRotationStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRotationStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSecretResponse> UpdateSecretOutcome;
                typedef std::future<UpdateSecretOutcome> UpdateSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::UpdateSecretRequest&, UpdateSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSecretAsyncHandler;



                /**
                 *创建云产品凭据
                 * @param req CreateProductSecretRequest
                 * @return CreateProductSecretOutcome
                 */
                CreateProductSecretOutcome CreateProductSecret(const Model::CreateProductSecretRequest &request);
                void CreateProductSecretAsync(const Model::CreateProductSecretRequest& request, const CreateProductSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProductSecretOutcomeCallable CreateProductSecretCallable(const Model::CreateProductSecretRequest& request);

                /**
                 *创建用于托管SSH密钥对的凭据
                 * @param req CreateSSHKeyPairSecretRequest
                 * @return CreateSSHKeyPairSecretOutcome
                 */
                CreateSSHKeyPairSecretOutcome CreateSSHKeyPairSecret(const Model::CreateSSHKeyPairSecretRequest &request);
                void CreateSSHKeyPairSecretAsync(const Model::CreateSSHKeyPairSecretRequest& request, const CreateSSHKeyPairSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSSHKeyPairSecretOutcomeCallable CreateSSHKeyPairSecretCallable(const Model::CreateSSHKeyPairSecretRequest& request);

                /**
                 *创建新的凭据信息，通过KMS进行加密保护。每个Region最多可创建存储1000个凭据信息。
                 * @param req CreateSecretRequest
                 * @return CreateSecretOutcome
                 */
                CreateSecretOutcome CreateSecret(const Model::CreateSecretRequest &request);
                void CreateSecretAsync(const Model::CreateSecretRequest& request, const CreateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecretOutcomeCallable CreateSecretCallable(const Model::CreateSecretRequest& request);

                /**
                 *删除指定的凭据信息，可以通过RecoveryWindowInDays参数设置立即删除或者计划删除。对于计划删除的凭据，在删除日期到达之前状态为 PendingDelete，并可以通过RestoreSecret 进行恢复，超出指定删除日期之后会被彻底删除。您必须先通过 DisableSecret 停用凭据后才可以进行（计划）删除操作。
                 * @param req DeleteSecretRequest
                 * @return DeleteSecretOutcome
                 */
                DeleteSecretOutcome DeleteSecret(const Model::DeleteSecretRequest &request);
                void DeleteSecretAsync(const Model::DeleteSecretRequest& request, const DeleteSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecretOutcomeCallable DeleteSecretCallable(const Model::DeleteSecretRequest& request);

                /**
                 *该接口用于直接删除指定凭据下的单个版本凭据，删除操作立即生效，对所有状态下的凭据版本都可以删除。
本接口仅适用于用户自定义凭据，本接口不能对云产品凭据进行操作。
                 * @param req DeleteSecretVersionRequest
                 * @return DeleteSecretVersionOutcome
                 */
                DeleteSecretVersionOutcome DeleteSecretVersion(const Model::DeleteSecretVersionRequest &request);
                void DeleteSecretVersionAsync(const Model::DeleteSecretVersionRequest& request, const DeleteSecretVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecretVersionOutcomeCallable DeleteSecretVersionCallable(const Model::DeleteSecretVersionRequest& request);

                /**
                 *查询异步任务的执行结果
                 * @param req DescribeAsyncRequestInfoRequest
                 * @return DescribeAsyncRequestInfoOutcome
                 */
                DescribeAsyncRequestInfoOutcome DescribeAsyncRequestInfo(const Model::DescribeAsyncRequestInfoRequest &request);
                void DescribeAsyncRequestInfoAsync(const Model::DescribeAsyncRequestInfoRequest& request, const DescribeAsyncRequestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsyncRequestInfoOutcomeCallable DescribeAsyncRequestInfoCallable(const Model::DescribeAsyncRequestInfoRequest& request);

                /**
                 *查询凭据轮转策略详情。
本接口只适用于云产品凭据。
                 * @param req DescribeRotationDetailRequest
                 * @return DescribeRotationDetailOutcome
                 */
                DescribeRotationDetailOutcome DescribeRotationDetail(const Model::DescribeRotationDetailRequest &request);
                void DescribeRotationDetailAsync(const Model::DescribeRotationDetailRequest& request, const DescribeRotationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRotationDetailOutcomeCallable DescribeRotationDetailCallable(const Model::DescribeRotationDetailRequest& request);

                /**
                 *查询凭据轮转历史版本。
本接口仅适用于云产品凭据。
                 * @param req DescribeRotationHistoryRequest
                 * @return DescribeRotationHistoryOutcome
                 */
                DescribeRotationHistoryOutcome DescribeRotationHistory(const Model::DescribeRotationHistoryRequest &request);
                void DescribeRotationHistoryAsync(const Model::DescribeRotationHistoryRequest& request, const DescribeRotationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRotationHistoryOutcomeCallable DescribeRotationHistoryCallable(const Model::DescribeRotationHistoryRequest& request);

                /**
                 *获取凭据的详细属性信息。
                 * @param req DescribeSecretRequest
                 * @return DescribeSecretOutcome
                 */
                DescribeSecretOutcome DescribeSecret(const Model::DescribeSecretRequest &request);
                void DescribeSecretAsync(const Model::DescribeSecretRequest& request, const DescribeSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecretOutcomeCallable DescribeSecretCallable(const Model::DescribeSecretRequest& request);

                /**
                 *查询支持的云产品列表
                 * @param req DescribeSupportedProductsRequest
                 * @return DescribeSupportedProductsOutcome
                 */
                DescribeSupportedProductsOutcome DescribeSupportedProducts(const Model::DescribeSupportedProductsRequest &request);
                void DescribeSupportedProductsAsync(const Model::DescribeSupportedProductsRequest& request, const DescribeSupportedProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSupportedProductsOutcomeCallable DescribeSupportedProductsCallable(const Model::DescribeSupportedProductsRequest& request);

                /**
                 *停用指定的凭据，停用后状态为 Disabled，无法通过接口获取该凭据的明文。
                 * @param req DisableSecretRequest
                 * @return DisableSecretOutcome
                 */
                DisableSecretOutcome DisableSecret(const Model::DisableSecretRequest &request);
                void DisableSecretAsync(const Model::DisableSecretRequest& request, const DisableSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableSecretOutcomeCallable DisableSecretCallable(const Model::DisableSecretRequest& request);

                /**
                 *该接口用于开启凭据，状态为Enabled。可以通过 GetSecretValue 接口获取凭据明文。处于PendingDelete状态的凭据不能直接开启，需要通过RestoreSecret 恢复后再开启使用。
                 * @param req EnableSecretRequest
                 * @return EnableSecretOutcome
                 */
                EnableSecretOutcome EnableSecret(const Model::EnableSecretRequest &request);
                void EnableSecretAsync(const Model::EnableSecretRequest& request, const EnableSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableSecretOutcomeCallable EnableSecretCallable(const Model::EnableSecretRequest& request);

                /**
                 *获取控制台展示region列表
                 * @param req GetRegionsRequest
                 * @return GetRegionsOutcome
                 */
                GetRegionsOutcome GetRegions(const Model::GetRegionsRequest &request);
                void GetRegionsAsync(const Model::GetRegionsRequest& request, const GetRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRegionsOutcomeCallable GetRegionsCallable(const Model::GetRegionsRequest& request);

                /**
                 *获取SSH密钥对凭据明文信息。
                 * @param req GetSSHKeyPairValueRequest
                 * @return GetSSHKeyPairValueOutcome
                 */
                GetSSHKeyPairValueOutcome GetSSHKeyPairValue(const Model::GetSSHKeyPairValueRequest &request);
                void GetSSHKeyPairValueAsync(const Model::GetSSHKeyPairValueRequest& request, const GetSSHKeyPairValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSSHKeyPairValueOutcomeCallable GetSSHKeyPairValueCallable(const Model::GetSSHKeyPairValueRequest& request);

                /**
                 *对于用户自定义凭据，通过指定凭据名称和版本来获取凭据的明文信息；
对于云产品凭据如Mysql凭据，通过指定凭据名称和历史版本号来获取历史轮转凭据的明文信息，如果要获取当前正在使用的凭据版本的明文，需要将版本号指定为：SSM_Current。
                 * @param req GetSecretValueRequest
                 * @return GetSecretValueOutcome
                 */
                GetSecretValueOutcome GetSecretValue(const Model::GetSecretValueRequest &request);
                void GetSecretValueAsync(const Model::GetSecretValueRequest& request, const GetSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSecretValueOutcomeCallable GetSecretValueCallable(const Model::GetSecretValueRequest& request);

                /**
                 *该接口用户获取用户SecretsManager服务开通状态。
                 * @param req GetServiceStatusRequest
                 * @return GetServiceStatusOutcome
                 */
                GetServiceStatusOutcome GetServiceStatus(const Model::GetServiceStatusRequest &request);
                void GetServiceStatusAsync(const Model::GetServiceStatusRequest& request, const GetServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetServiceStatusOutcomeCallable GetServiceStatusCallable(const Model::GetServiceStatusRequest& request);

                /**
                 *该接口用于获取指定凭据下的版本列表信息
                 * @param req ListSecretVersionIdsRequest
                 * @return ListSecretVersionIdsOutcome
                 */
                ListSecretVersionIdsOutcome ListSecretVersionIds(const Model::ListSecretVersionIdsRequest &request);
                void ListSecretVersionIdsAsync(const Model::ListSecretVersionIdsRequest& request, const ListSecretVersionIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSecretVersionIdsOutcomeCallable ListSecretVersionIdsCallable(const Model::ListSecretVersionIdsRequest& request);

                /**
                 *该接口用于获取所有凭据的详细列表，可以指定过滤字段、排序方式等。
                 * @param req ListSecretsRequest
                 * @return ListSecretsOutcome
                 */
                ListSecretsOutcome ListSecrets(const Model::ListSecretsRequest &request);
                void ListSecretsAsync(const Model::ListSecretsRequest& request, const ListSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSecretsOutcomeCallable ListSecretsCallable(const Model::ListSecretsRequest& request);

                /**
                 *该接口在指定名称的凭据下增加新版本的凭据内容，一个凭据下最多可以支持10个版本。只能对处于Enabled 和 Disabled 状态的凭据添加新的版本。
本接口仅适用于用户自定义凭据，对云产品凭据不能操作。
                 * @param req PutSecretValueRequest
                 * @return PutSecretValueOutcome
                 */
                PutSecretValueOutcome PutSecretValue(const Model::PutSecretValueRequest &request);
                void PutSecretValueAsync(const Model::PutSecretValueRequest& request, const PutSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutSecretValueOutcomeCallable PutSecretValueCallable(const Model::PutSecretValueRequest& request);

                /**
                 *该接口用于恢复计划删除（PendingDelete状态）中的凭据，取消计划删除。取消计划删除的凭据将处于Disabled 状态，如需恢复使用，通过EnableSecret 接口开启凭据。
                 * @param req RestoreSecretRequest
                 * @return RestoreSecretOutcome
                 */
                RestoreSecretOutcome RestoreSecret(const Model::RestoreSecretRequest &request);
                void RestoreSecretAsync(const Model::RestoreSecretRequest& request, const RestoreSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreSecretOutcomeCallable RestoreSecretCallable(const Model::RestoreSecretRequest& request);

                /**
                 *轮转云产品凭据或云API密钥对凭据。
该接口仅适用于处于Enabled状态的云产品凭据或处于Enable状态的云API密钥对凭据，对于其他状态的云产品凭据或云API密钥对凭据或用户自定义凭据不适用。
                 * @param req RotateProductSecretRequest
                 * @return RotateProductSecretOutcome
                 */
                RotateProductSecretOutcome RotateProductSecret(const Model::RotateProductSecretRequest &request);
                void RotateProductSecretAsync(const Model::RotateProductSecretRequest& request, const RotateProductSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RotateProductSecretOutcomeCallable RotateProductSecretCallable(const Model::RotateProductSecretRequest& request);

                /**
                 *该接口用于修改指定凭据的描述信息，仅能修改Enabled 和 Disabled 状态的凭据。
                 * @param req UpdateDescriptionRequest
                 * @return UpdateDescriptionOutcome
                 */
                UpdateDescriptionOutcome UpdateDescription(const Model::UpdateDescriptionRequest &request);
                void UpdateDescriptionAsync(const Model::UpdateDescriptionRequest& request, const UpdateDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDescriptionOutcomeCallable UpdateDescriptionCallable(const Model::UpdateDescriptionRequest& request);

                /**
                 *设置云产品凭据轮转策略，可以设置：
是否开启轮转
轮转周期
轮转开始时间
                 * @param req UpdateRotationStatusRequest
                 * @return UpdateRotationStatusOutcome
                 */
                UpdateRotationStatusOutcome UpdateRotationStatus(const Model::UpdateRotationStatusRequest &request);
                void UpdateRotationStatusAsync(const Model::UpdateRotationStatusRequest& request, const UpdateRotationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRotationStatusOutcomeCallable UpdateRotationStatusCallable(const Model::UpdateRotationStatusRequest& request);

                /**
                 *该接口用于更新指定凭据名称和版本号的内容，调用该接口会对新的凭据内容加密后覆盖旧的内容。仅允许更新Enabled 和 Disabled 状态的凭据。
本接口仅适用于用户自定义凭据，不能对云产品凭据操作。
                 * @param req UpdateSecretRequest
                 * @return UpdateSecretOutcome
                 */
                UpdateSecretOutcome UpdateSecret(const Model::UpdateSecretRequest &request);
                void UpdateSecretAsync(const Model::UpdateSecretRequest& request, const UpdateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSecretOutcomeCallable UpdateSecretCallable(const Model::UpdateSecretRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_SSMCLIENT_H_
