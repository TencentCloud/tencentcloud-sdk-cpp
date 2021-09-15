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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_ESSBASICCLIENT_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_ESSBASICCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/essbasic/v20201222/model/ArchiveFlowRequest.h>
#include <tencentcloud/essbasic/v20201222/model/ArchiveFlowResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CancelFlowRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CancelFlowResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CheckBankCard2EVerificationRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CheckBankCard2EVerificationResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CheckBankCard3EVerificationRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CheckBankCard3EVerificationResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CheckBankCard4EVerificationRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CheckBankCard4EVerificationResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CheckBankCardVerificationRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CheckBankCardVerificationResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CheckFaceIdentifyRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CheckFaceIdentifyResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CheckIdCardVerificationRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CheckIdCardVerificationResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CheckMobileAndNameRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CheckMobileAndNameResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CheckMobileVerificationRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CheckMobileVerificationResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CheckVerifyCodeMatchFlowIdRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CheckVerifyCodeMatchFlowIdResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CreateFaceIdSignRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CreateFaceIdSignResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CreateFlowByFilesRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CreateFlowByFilesResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CreateH5FaceIdUrlRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CreateH5FaceIdUrlResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CreatePreviewSignUrlRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CreatePreviewSignUrlResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CreateSealRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CreateSealResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CreateServerFlowSignRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CreateServerFlowSignResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CreateSignUrlRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CreateSignUrlResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CreateSubOrganizationRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CreateSubOrganizationResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CreateSubOrganizationAndSealRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CreateSubOrganizationAndSealResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CreateUserRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CreateUserResponse.h>
#include <tencentcloud/essbasic/v20201222/model/CreateUserAndSealRequest.h>
#include <tencentcloud/essbasic/v20201222/model/CreateUserAndSealResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DeleteSealRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DeleteSealResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeCatalogApproversRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeCatalogApproversResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeCatalogSignComponentsRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeCatalogSignComponentsResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeCustomFlowIdsRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeCustomFlowIdsResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeCustomFlowIdsByFlowIdRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeCustomFlowIdsByFlowIdResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeFaceIdPhotosRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeFaceIdPhotosResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeFaceIdResultsRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeFaceIdResultsResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeFileIdsByCustomIdsRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeFileIdsByCustomIdsResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeFileUrlsRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeFileUrlsResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeFlowRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeFlowResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeFlowApproversRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeFlowApproversResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeFlowFilesRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeFlowFilesResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeSealsRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeSealsResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeSubOrganizationsRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeSubOrganizationsResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeUsersRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DescribeUsersResponse.h>
#include <tencentcloud/essbasic/v20201222/model/DestroyFlowFileRequest.h>
#include <tencentcloud/essbasic/v20201222/model/DestroyFlowFileResponse.h>
#include <tencentcloud/essbasic/v20201222/model/GenerateOrganizationSealRequest.h>
#include <tencentcloud/essbasic/v20201222/model/GenerateOrganizationSealResponse.h>
#include <tencentcloud/essbasic/v20201222/model/GenerateUserSealRequest.h>
#include <tencentcloud/essbasic/v20201222/model/GenerateUserSealResponse.h>
#include <tencentcloud/essbasic/v20201222/model/ModifyOrganizationDefaultSealRequest.h>
#include <tencentcloud/essbasic/v20201222/model/ModifyOrganizationDefaultSealResponse.h>
#include <tencentcloud/essbasic/v20201222/model/ModifySealRequest.h>
#include <tencentcloud/essbasic/v20201222/model/ModifySealResponse.h>
#include <tencentcloud/essbasic/v20201222/model/ModifySubOrganizationInfoRequest.h>
#include <tencentcloud/essbasic/v20201222/model/ModifySubOrganizationInfoResponse.h>
#include <tencentcloud/essbasic/v20201222/model/ModifyUserRequest.h>
#include <tencentcloud/essbasic/v20201222/model/ModifyUserResponse.h>
#include <tencentcloud/essbasic/v20201222/model/ModifyUserDefaultSealRequest.h>
#include <tencentcloud/essbasic/v20201222/model/ModifyUserDefaultSealResponse.h>
#include <tencentcloud/essbasic/v20201222/model/RejectFlowRequest.h>
#include <tencentcloud/essbasic/v20201222/model/RejectFlowResponse.h>
#include <tencentcloud/essbasic/v20201222/model/SendFlowRequest.h>
#include <tencentcloud/essbasic/v20201222/model/SendFlowResponse.h>
#include <tencentcloud/essbasic/v20201222/model/SendFlowUrlRequest.h>
#include <tencentcloud/essbasic/v20201222/model/SendFlowUrlResponse.h>
#include <tencentcloud/essbasic/v20201222/model/SendSignInnerVerifyCodeRequest.h>
#include <tencentcloud/essbasic/v20201222/model/SendSignInnerVerifyCodeResponse.h>
#include <tencentcloud/essbasic/v20201222/model/SignFlowRequest.h>
#include <tencentcloud/essbasic/v20201222/model/SignFlowResponse.h>
#include <tencentcloud/essbasic/v20201222/model/UploadFilesRequest.h>
#include <tencentcloud/essbasic/v20201222/model/UploadFilesResponse.h>
#include <tencentcloud/essbasic/v20201222/model/VerifySubOrganizationRequest.h>
#include <tencentcloud/essbasic/v20201222/model/VerifySubOrganizationResponse.h>
#include <tencentcloud/essbasic/v20201222/model/VerifyUserRequest.h>
#include <tencentcloud/essbasic/v20201222/model/VerifyUserResponse.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            class EssbasicClient : public AbstractClient
            {
            public:
                EssbasicClient(const Credential &credential, const std::string &region);
                EssbasicClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ArchiveFlowResponse> ArchiveFlowOutcome;
                typedef std::future<ArchiveFlowOutcome> ArchiveFlowOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ArchiveFlowRequest&, ArchiveFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ArchiveFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelFlowResponse> CancelFlowOutcome;
                typedef std::future<CancelFlowOutcome> CancelFlowOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CancelFlowRequest&, CancelFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckBankCard2EVerificationResponse> CheckBankCard2EVerificationOutcome;
                typedef std::future<CheckBankCard2EVerificationOutcome> CheckBankCard2EVerificationOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CheckBankCard2EVerificationRequest&, CheckBankCard2EVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckBankCard2EVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckBankCard3EVerificationResponse> CheckBankCard3EVerificationOutcome;
                typedef std::future<CheckBankCard3EVerificationOutcome> CheckBankCard3EVerificationOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CheckBankCard3EVerificationRequest&, CheckBankCard3EVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckBankCard3EVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckBankCard4EVerificationResponse> CheckBankCard4EVerificationOutcome;
                typedef std::future<CheckBankCard4EVerificationOutcome> CheckBankCard4EVerificationOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CheckBankCard4EVerificationRequest&, CheckBankCard4EVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckBankCard4EVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckBankCardVerificationResponse> CheckBankCardVerificationOutcome;
                typedef std::future<CheckBankCardVerificationOutcome> CheckBankCardVerificationOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CheckBankCardVerificationRequest&, CheckBankCardVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckBankCardVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckFaceIdentifyResponse> CheckFaceIdentifyOutcome;
                typedef std::future<CheckFaceIdentifyOutcome> CheckFaceIdentifyOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CheckFaceIdentifyRequest&, CheckFaceIdentifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckFaceIdentifyAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckIdCardVerificationResponse> CheckIdCardVerificationOutcome;
                typedef std::future<CheckIdCardVerificationOutcome> CheckIdCardVerificationOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CheckIdCardVerificationRequest&, CheckIdCardVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckIdCardVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckMobileAndNameResponse> CheckMobileAndNameOutcome;
                typedef std::future<CheckMobileAndNameOutcome> CheckMobileAndNameOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CheckMobileAndNameRequest&, CheckMobileAndNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckMobileAndNameAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckMobileVerificationResponse> CheckMobileVerificationOutcome;
                typedef std::future<CheckMobileVerificationOutcome> CheckMobileVerificationOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CheckMobileVerificationRequest&, CheckMobileVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckMobileVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckVerifyCodeMatchFlowIdResponse> CheckVerifyCodeMatchFlowIdOutcome;
                typedef std::future<CheckVerifyCodeMatchFlowIdOutcome> CheckVerifyCodeMatchFlowIdOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CheckVerifyCodeMatchFlowIdRequest&, CheckVerifyCodeMatchFlowIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckVerifyCodeMatchFlowIdAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFaceIdSignResponse> CreateFaceIdSignOutcome;
                typedef std::future<CreateFaceIdSignOutcome> CreateFaceIdSignOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateFaceIdSignRequest&, CreateFaceIdSignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFaceIdSignAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowByFilesResponse> CreateFlowByFilesOutcome;
                typedef std::future<CreateFlowByFilesOutcome> CreateFlowByFilesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateFlowByFilesRequest&, CreateFlowByFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowByFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateH5FaceIdUrlResponse> CreateH5FaceIdUrlOutcome;
                typedef std::future<CreateH5FaceIdUrlOutcome> CreateH5FaceIdUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateH5FaceIdUrlRequest&, CreateH5FaceIdUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateH5FaceIdUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePreviewSignUrlResponse> CreatePreviewSignUrlOutcome;
                typedef std::future<CreatePreviewSignUrlOutcome> CreatePreviewSignUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreatePreviewSignUrlRequest&, CreatePreviewSignUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePreviewSignUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSealResponse> CreateSealOutcome;
                typedef std::future<CreateSealOutcome> CreateSealOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateSealRequest&, CreateSealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSealAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServerFlowSignResponse> CreateServerFlowSignOutcome;
                typedef std::future<CreateServerFlowSignOutcome> CreateServerFlowSignOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateServerFlowSignRequest&, CreateServerFlowSignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServerFlowSignAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSignUrlResponse> CreateSignUrlOutcome;
                typedef std::future<CreateSignUrlOutcome> CreateSignUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateSignUrlRequest&, CreateSignUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSignUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubOrganizationResponse> CreateSubOrganizationOutcome;
                typedef std::future<CreateSubOrganizationOutcome> CreateSubOrganizationOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateSubOrganizationRequest&, CreateSubOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubOrganizationAndSealResponse> CreateSubOrganizationAndSealOutcome;
                typedef std::future<CreateSubOrganizationAndSealOutcome> CreateSubOrganizationAndSealOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateSubOrganizationAndSealRequest&, CreateSubOrganizationAndSealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubOrganizationAndSealAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserAndSealResponse> CreateUserAndSealOutcome;
                typedef std::future<CreateUserAndSealOutcome> CreateUserAndSealOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateUserAndSealRequest&, CreateUserAndSealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAndSealAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSealResponse> DeleteSealOutcome;
                typedef std::future<DeleteSealOutcome> DeleteSealOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DeleteSealRequest&, DeleteSealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSealAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCatalogApproversResponse> DescribeCatalogApproversOutcome;
                typedef std::future<DescribeCatalogApproversOutcome> DescribeCatalogApproversOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeCatalogApproversRequest&, DescribeCatalogApproversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCatalogApproversAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCatalogSignComponentsResponse> DescribeCatalogSignComponentsOutcome;
                typedef std::future<DescribeCatalogSignComponentsOutcome> DescribeCatalogSignComponentsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeCatalogSignComponentsRequest&, DescribeCatalogSignComponentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCatalogSignComponentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomFlowIdsResponse> DescribeCustomFlowIdsOutcome;
                typedef std::future<DescribeCustomFlowIdsOutcome> DescribeCustomFlowIdsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeCustomFlowIdsRequest&, DescribeCustomFlowIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomFlowIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomFlowIdsByFlowIdResponse> DescribeCustomFlowIdsByFlowIdOutcome;
                typedef std::future<DescribeCustomFlowIdsByFlowIdOutcome> DescribeCustomFlowIdsByFlowIdOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeCustomFlowIdsByFlowIdRequest&, DescribeCustomFlowIdsByFlowIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomFlowIdsByFlowIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFaceIdPhotosResponse> DescribeFaceIdPhotosOutcome;
                typedef std::future<DescribeFaceIdPhotosOutcome> DescribeFaceIdPhotosOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeFaceIdPhotosRequest&, DescribeFaceIdPhotosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFaceIdPhotosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFaceIdResultsResponse> DescribeFaceIdResultsOutcome;
                typedef std::future<DescribeFaceIdResultsOutcome> DescribeFaceIdResultsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeFaceIdResultsRequest&, DescribeFaceIdResultsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFaceIdResultsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileIdsByCustomIdsResponse> DescribeFileIdsByCustomIdsOutcome;
                typedef std::future<DescribeFileIdsByCustomIdsOutcome> DescribeFileIdsByCustomIdsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeFileIdsByCustomIdsRequest&, DescribeFileIdsByCustomIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileIdsByCustomIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileUrlsResponse> DescribeFileUrlsOutcome;
                typedef std::future<DescribeFileUrlsOutcome> DescribeFileUrlsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeFileUrlsRequest&, DescribeFileUrlsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileUrlsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowResponse> DescribeFlowOutcome;
                typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeFlowRequest&, DescribeFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowApproversResponse> DescribeFlowApproversOutcome;
                typedef std::future<DescribeFlowApproversOutcome> DescribeFlowApproversOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeFlowApproversRequest&, DescribeFlowApproversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowApproversAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowFilesResponse> DescribeFlowFilesOutcome;
                typedef std::future<DescribeFlowFilesOutcome> DescribeFlowFilesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeFlowFilesRequest&, DescribeFlowFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSealsResponse> DescribeSealsOutcome;
                typedef std::future<DescribeSealsOutcome> DescribeSealsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeSealsRequest&, DescribeSealsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSealsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubOrganizationsResponse> DescribeSubOrganizationsOutcome;
                typedef std::future<DescribeSubOrganizationsOutcome> DescribeSubOrganizationsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeSubOrganizationsRequest&, DescribeSubOrganizationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubOrganizationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsersResponse> DescribeUsersOutcome;
                typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeUsersRequest&, DescribeUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyFlowFileResponse> DestroyFlowFileOutcome;
                typedef std::future<DestroyFlowFileOutcome> DestroyFlowFileOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DestroyFlowFileRequest&, DestroyFlowFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyFlowFileAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateOrganizationSealResponse> GenerateOrganizationSealOutcome;
                typedef std::future<GenerateOrganizationSealOutcome> GenerateOrganizationSealOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::GenerateOrganizationSealRequest&, GenerateOrganizationSealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateOrganizationSealAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateUserSealResponse> GenerateUserSealOutcome;
                typedef std::future<GenerateUserSealOutcome> GenerateUserSealOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::GenerateUserSealRequest&, GenerateUserSealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateUserSealAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOrganizationDefaultSealResponse> ModifyOrganizationDefaultSealOutcome;
                typedef std::future<ModifyOrganizationDefaultSealOutcome> ModifyOrganizationDefaultSealOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ModifyOrganizationDefaultSealRequest&, ModifyOrganizationDefaultSealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOrganizationDefaultSealAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySealResponse> ModifySealOutcome;
                typedef std::future<ModifySealOutcome> ModifySealOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ModifySealRequest&, ModifySealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySealAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubOrganizationInfoResponse> ModifySubOrganizationInfoOutcome;
                typedef std::future<ModifySubOrganizationInfoOutcome> ModifySubOrganizationInfoOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ModifySubOrganizationInfoRequest&, ModifySubOrganizationInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubOrganizationInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserResponse> ModifyUserOutcome;
                typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ModifyUserRequest&, ModifyUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserDefaultSealResponse> ModifyUserDefaultSealOutcome;
                typedef std::future<ModifyUserDefaultSealOutcome> ModifyUserDefaultSealOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ModifyUserDefaultSealRequest&, ModifyUserDefaultSealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserDefaultSealAsyncHandler;
                typedef Outcome<Core::Error, Model::RejectFlowResponse> RejectFlowOutcome;
                typedef std::future<RejectFlowOutcome> RejectFlowOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::RejectFlowRequest&, RejectFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RejectFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::SendFlowResponse> SendFlowOutcome;
                typedef std::future<SendFlowOutcome> SendFlowOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::SendFlowRequest&, SendFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::SendFlowUrlResponse> SendFlowUrlOutcome;
                typedef std::future<SendFlowUrlOutcome> SendFlowUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::SendFlowUrlRequest&, SendFlowUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendFlowUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::SendSignInnerVerifyCodeResponse> SendSignInnerVerifyCodeOutcome;
                typedef std::future<SendSignInnerVerifyCodeOutcome> SendSignInnerVerifyCodeOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::SendSignInnerVerifyCodeRequest&, SendSignInnerVerifyCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendSignInnerVerifyCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::SignFlowResponse> SignFlowOutcome;
                typedef std::future<SignFlowOutcome> SignFlowOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::SignFlowRequest&, SignFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SignFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadFilesResponse> UploadFilesOutcome;
                typedef std::future<UploadFilesOutcome> UploadFilesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::UploadFilesRequest&, UploadFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifySubOrganizationResponse> VerifySubOrganizationOutcome;
                typedef std::future<VerifySubOrganizationOutcome> VerifySubOrganizationOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::VerifySubOrganizationRequest&, VerifySubOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifySubOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyUserResponse> VerifyUserOutcome;
                typedef std::future<VerifyUserOutcome> VerifyUserOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::VerifyUserRequest&, VerifyUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyUserAsyncHandler;



                /**
                 *此接口（ArchiveFlow）用于流程的归档。

注意：归档后的流程不可再进行发送、签署、拒签、撤回等一系列操作。
                 * @param req ArchiveFlowRequest
                 * @return ArchiveFlowOutcome
                 */
                ArchiveFlowOutcome ArchiveFlow(const Model::ArchiveFlowRequest &request);
                void ArchiveFlowAsync(const Model::ArchiveFlowRequest& request, const ArchiveFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ArchiveFlowOutcomeCallable ArchiveFlowCallable(const Model::ArchiveFlowRequest& request);

                /**
                 *此接口（CancelFlow）用于撤销正在进行中的流程。

注：已归档流程不可完成撤销动作。
                 * @param req CancelFlowRequest
                 * @return CancelFlowOutcome
                 */
                CancelFlowOutcome CancelFlow(const Model::CancelFlowRequest &request);
                void CancelFlowAsync(const Model::CancelFlowRequest& request, const CancelFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelFlowOutcomeCallable CancelFlowCallable(const Model::CancelFlowRequest& request);

                /**
                 *该接口为第三方平台向电子签平台验证银行卡二要素
                 * @param req CheckBankCard2EVerificationRequest
                 * @return CheckBankCard2EVerificationOutcome
                 */
                CheckBankCard2EVerificationOutcome CheckBankCard2EVerification(const Model::CheckBankCard2EVerificationRequest &request);
                void CheckBankCard2EVerificationAsync(const Model::CheckBankCard2EVerificationRequest& request, const CheckBankCard2EVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckBankCard2EVerificationOutcomeCallable CheckBankCard2EVerificationCallable(const Model::CheckBankCard2EVerificationRequest& request);

                /**
                 *该接口为第三方平台向电子签平台验证银行卡三要素
                 * @param req CheckBankCard3EVerificationRequest
                 * @return CheckBankCard3EVerificationOutcome
                 */
                CheckBankCard3EVerificationOutcome CheckBankCard3EVerification(const Model::CheckBankCard3EVerificationRequest &request);
                void CheckBankCard3EVerificationAsync(const Model::CheckBankCard3EVerificationRequest& request, const CheckBankCard3EVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckBankCard3EVerificationOutcomeCallable CheckBankCard3EVerificationCallable(const Model::CheckBankCard3EVerificationRequest& request);

                /**
                 *该接口为第三方平台向电子签平台验证银行卡四要素
                 * @param req CheckBankCard4EVerificationRequest
                 * @return CheckBankCard4EVerificationOutcome
                 */
                CheckBankCard4EVerificationOutcome CheckBankCard4EVerification(const Model::CheckBankCard4EVerificationRequest &request);
                void CheckBankCard4EVerificationAsync(const Model::CheckBankCard4EVerificationRequest& request, const CheckBankCard4EVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckBankCard4EVerificationOutcomeCallable CheckBankCard4EVerificationCallable(const Model::CheckBankCard4EVerificationRequest& request);

                /**
                 *该接口为第三方平台向电子签平台验证银行卡二/三/四要素
银行卡二要素(同CheckBankCard2EVerification): bank_card + name
银行卡三要素(同CheckBankCard3EVerification): bank_card + name + id_card_number
银行卡四要素(同CheckBankCard4EVerification): bank_card + name + id_card_number + mobile
                 * @param req CheckBankCardVerificationRequest
                 * @return CheckBankCardVerificationOutcome
                 */
                CheckBankCardVerificationOutcome CheckBankCardVerification(const Model::CheckBankCardVerificationRequest &request);
                void CheckBankCardVerificationAsync(const Model::CheckBankCardVerificationRequest& request, const CheckBankCardVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckBankCardVerificationOutcomeCallable CheckBankCardVerificationCallable(const Model::CheckBankCardVerificationRequest& request);

                /**
                 *该接口为第三方平台向电子签平台检测慧眼或腾讯电子签小程序人脸核身结果
                 * @param req CheckFaceIdentifyRequest
                 * @return CheckFaceIdentifyOutcome
                 */
                CheckFaceIdentifyOutcome CheckFaceIdentify(const Model::CheckFaceIdentifyRequest &request);
                void CheckFaceIdentifyAsync(const Model::CheckFaceIdentifyRequest& request, const CheckFaceIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckFaceIdentifyOutcomeCallable CheckFaceIdentifyCallable(const Model::CheckFaceIdentifyRequest& request);

                /**
                 *该接口为第三方平台向电子签平台验证姓名和身份证信息
                 * @param req CheckIdCardVerificationRequest
                 * @return CheckIdCardVerificationOutcome
                 */
                CheckIdCardVerificationOutcome CheckIdCardVerification(const Model::CheckIdCardVerificationRequest &request);
                void CheckIdCardVerificationAsync(const Model::CheckIdCardVerificationRequest& request, const CheckIdCardVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckIdCardVerificationOutcomeCallable CheckIdCardVerificationCallable(const Model::CheckIdCardVerificationRequest& request);

                /**
                 *该接口为第三方平台向电子签平台验证手机号二要素
                 * @param req CheckMobileAndNameRequest
                 * @return CheckMobileAndNameOutcome
                 */
                CheckMobileAndNameOutcome CheckMobileAndName(const Model::CheckMobileAndNameRequest &request);
                void CheckMobileAndNameAsync(const Model::CheckMobileAndNameRequest& request, const CheckMobileAndNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckMobileAndNameOutcomeCallable CheckMobileAndNameCallable(const Model::CheckMobileAndNameRequest& request);

                /**
                 *该接口为第三方平台向电子签平台验证手机号三要素
                 * @param req CheckMobileVerificationRequest
                 * @return CheckMobileVerificationOutcome
                 */
                CheckMobileVerificationOutcome CheckMobileVerification(const Model::CheckMobileVerificationRequest &request);
                void CheckMobileVerificationAsync(const Model::CheckMobileVerificationRequest& request, const CheckMobileVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckMobileVerificationOutcomeCallable CheckMobileVerificationCallable(const Model::CheckMobileVerificationRequest& request);

                /**
                 *此接口用于确认验证码是否正确
                 * @param req CheckVerifyCodeMatchFlowIdRequest
                 * @return CheckVerifyCodeMatchFlowIdOutcome
                 */
                CheckVerifyCodeMatchFlowIdOutcome CheckVerifyCodeMatchFlowId(const Model::CheckVerifyCodeMatchFlowIdRequest &request);
                void CheckVerifyCodeMatchFlowIdAsync(const Model::CheckVerifyCodeMatchFlowIdRequest& request, const CheckVerifyCodeMatchFlowIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckVerifyCodeMatchFlowIdOutcomeCallable CheckVerifyCodeMatchFlowIdCallable(const Model::CheckVerifyCodeMatchFlowIdRequest& request);

                /**
                 *该接口为第三方平台向电子签平台获取慧眼慧眼API签名
                 * @param req CreateFaceIdSignRequest
                 * @return CreateFaceIdSignOutcome
                 */
                CreateFaceIdSignOutcome CreateFaceIdSign(const Model::CreateFaceIdSignRequest &request);
                void CreateFaceIdSignAsync(const Model::CreateFaceIdSignRequest& request, const CreateFaceIdSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFaceIdSignOutcomeCallable CreateFaceIdSignCallable(const Model::CreateFaceIdSignRequest& request);

                /**
                 *此接口（CreateFlowByFiles）用于通过PDF文件创建签署流程。

注意：调用此接口前，请先调用多文件上传接口 (UploadFiles)，提前上传合同文件。
                 * @param req CreateFlowByFilesRequest
                 * @return CreateFlowByFilesOutcome
                 */
                CreateFlowByFilesOutcome CreateFlowByFiles(const Model::CreateFlowByFilesRequest &request);
                void CreateFlowByFilesAsync(const Model::CreateFlowByFilesRequest& request, const CreateFlowByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowByFilesOutcomeCallable CreateFlowByFilesCallable(const Model::CreateFlowByFilesRequest& request);

                /**
                 *该接口为第三方平台向电子签平台获取慧眼H5人脸核身Url
                 * @param req CreateH5FaceIdUrlRequest
                 * @return CreateH5FaceIdUrlOutcome
                 */
                CreateH5FaceIdUrlOutcome CreateH5FaceIdUrl(const Model::CreateH5FaceIdUrlRequest &request);
                void CreateH5FaceIdUrlAsync(const Model::CreateH5FaceIdUrlRequest& request, const CreateH5FaceIdUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateH5FaceIdUrlOutcomeCallable CreateH5FaceIdUrlCallable(const Model::CreateH5FaceIdUrlRequest& request);

                /**
                 *此接口（CreatePreviewSignUrl）用于生成生成预览签署URL。

注：调用此接口前，请确保您已提前调用了发送流程接口（SendFlow）指定相关签署方。
                 * @param req CreatePreviewSignUrlRequest
                 * @return CreatePreviewSignUrlOutcome
                 */
                CreatePreviewSignUrlOutcome CreatePreviewSignUrl(const Model::CreatePreviewSignUrlRequest &request);
                void CreatePreviewSignUrlAsync(const Model::CreatePreviewSignUrlRequest& request, const CreatePreviewSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePreviewSignUrlOutcomeCallable CreatePreviewSignUrlCallable(const Model::CreatePreviewSignUrlRequest& request);

                /**
                 *此接口（CreateSeal）用于创建个人/企业印章。

注意：使用FileId参数指定印章，需先调用多文件上传 (UploadFiles) 上传印章图片。
                 * @param req CreateSealRequest
                 * @return CreateSealOutcome
                 */
                CreateSealOutcome CreateSeal(const Model::CreateSealRequest &request);
                void CreateSealAsync(const Model::CreateSealRequest& request, const CreateSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSealOutcomeCallable CreateSealCallable(const Model::CreateSealRequest& request);

                /**
                 *此接口（CreateServerFlowSign）用于静默签署文件。

注：
1、此接口为白名单接口，调用前请提前与客服经理或邮件至e-contract@tencent.com进行联系。
2、仅合同发起者可使用流程静默签署能力。
                 * @param req CreateServerFlowSignRequest
                 * @return CreateServerFlowSignOutcome
                 */
                CreateServerFlowSignOutcome CreateServerFlowSign(const Model::CreateServerFlowSignRequest &request);
                void CreateServerFlowSignAsync(const Model::CreateServerFlowSignRequest& request, const CreateServerFlowSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServerFlowSignOutcomeCallable CreateServerFlowSignCallable(const Model::CreateServerFlowSignRequest& request);

                /**
                 *此接口（CreateSignUrl）用于生成指定用户的签署URL。

注：调用此接口前，请确保您已提前调用了发送流程接口（SendFlow）指定相关签署方。
                 * @param req CreateSignUrlRequest
                 * @return CreateSignUrlOutcome
                 */
                CreateSignUrlOutcome CreateSignUrl(const Model::CreateSignUrlRequest &request);
                void CreateSignUrlAsync(const Model::CreateSignUrlRequest& request, const CreateSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSignUrlOutcomeCallable CreateSignUrlCallable(const Model::CreateSignUrlRequest& request);

                /**
                 *此接口（CreateSubOrganization）用于在腾讯电子签内注册子机构。
                 * @param req CreateSubOrganizationRequest
                 * @return CreateSubOrganizationOutcome
                 */
                CreateSubOrganizationOutcome CreateSubOrganization(const Model::CreateSubOrganizationRequest &request);
                void CreateSubOrganizationAsync(const Model::CreateSubOrganizationRequest& request, const CreateSubOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubOrganizationOutcomeCallable CreateSubOrganizationCallable(const Model::CreateSubOrganizationRequest& request);

                /**
                 *此接口（CreateSubOrganizationAndSeal）用于注册子机构，同时系统将为该子企业自动生成一个默认电子印章图片。

注意：
1. 在后续的签署流程中，若未指定签署使用的印章ID，则默认调用自动生成的印章图片进行签署。
2. 此接口为白名单接口，如您需要使用此能力，请提前与客户经理沟通或邮件至e-contract@tencent.com与我们联系。
                 * @param req CreateSubOrganizationAndSealRequest
                 * @return CreateSubOrganizationAndSealOutcome
                 */
                CreateSubOrganizationAndSealOutcome CreateSubOrganizationAndSeal(const Model::CreateSubOrganizationAndSealRequest &request);
                void CreateSubOrganizationAndSealAsync(const Model::CreateSubOrganizationAndSealRequest& request, const CreateSubOrganizationAndSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubOrganizationAndSealOutcomeCallable CreateSubOrganizationAndSealCallable(const Model::CreateSubOrganizationAndSealRequest& request);

                /**
                 *此接口（CreateUser）用于注册腾讯电子签个人用户。
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *第三方应用可通过此接口（CreateUserAndSeal）注册腾讯电子签实名个人用户，同时系统将为该用户自动生成一个默认电子签名图片。

注意：
1. 在后续的签署流程中，若未指定签署使用的印章ID，则默认调用自动生成的签名图片进行签署。
2. 此接口为白名单接口，如您需要使用此能力，请提前与客户经理沟通或邮件至e-contract@tencent.com与我们联系。
                 * @param req CreateUserAndSealRequest
                 * @return CreateUserAndSealOutcome
                 */
                CreateUserAndSealOutcome CreateUserAndSeal(const Model::CreateUserAndSealRequest &request);
                void CreateUserAndSealAsync(const Model::CreateUserAndSealRequest& request, const CreateUserAndSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserAndSealOutcomeCallable CreateUserAndSealCallable(const Model::CreateUserAndSealRequest& request);

                /**
                 *此接口 (DeleteSeal) 用于删除指定ID的印章。

注意：默认印章不支持删除
                 * @param req DeleteSealRequest
                 * @return DeleteSealOutcome
                 */
                DeleteSealOutcome DeleteSeal(const Model::DeleteSealRequest &request);
                void DeleteSealAsync(const Model::DeleteSealRequest& request, const DeleteSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSealOutcomeCallable DeleteSealCallable(const Model::DeleteSealRequest& request);

                /**
                 *第三方应用可通过此接口（DescribeCatalogApprovers）查询指定目录的参与者列表
                 * @param req DescribeCatalogApproversRequest
                 * @return DescribeCatalogApproversOutcome
                 */
                DescribeCatalogApproversOutcome DescribeCatalogApprovers(const Model::DescribeCatalogApproversRequest &request);
                void DescribeCatalogApproversAsync(const Model::DescribeCatalogApproversRequest& request, const DescribeCatalogApproversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCatalogApproversOutcomeCallable DescribeCatalogApproversCallable(const Model::DescribeCatalogApproversRequest& request);

                /**
                 *第三方应用可通过此接口（DescribeCatalogSignComponents）拉取目录签署区
                 * @param req DescribeCatalogSignComponentsRequest
                 * @return DescribeCatalogSignComponentsOutcome
                 */
                DescribeCatalogSignComponentsOutcome DescribeCatalogSignComponents(const Model::DescribeCatalogSignComponentsRequest &request);
                void DescribeCatalogSignComponentsAsync(const Model::DescribeCatalogSignComponentsRequest& request, const DescribeCatalogSignComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCatalogSignComponentsOutcomeCallable DescribeCatalogSignComponentsCallable(const Model::DescribeCatalogSignComponentsRequest& request);

                /**
                 *此接口（DescribeCustomFlowIds）用于通过自定义流程id来查询对应的电子签流程id
                 * @param req DescribeCustomFlowIdsRequest
                 * @return DescribeCustomFlowIdsOutcome
                 */
                DescribeCustomFlowIdsOutcome DescribeCustomFlowIds(const Model::DescribeCustomFlowIdsRequest &request);
                void DescribeCustomFlowIdsAsync(const Model::DescribeCustomFlowIdsRequest& request, const DescribeCustomFlowIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomFlowIdsOutcomeCallable DescribeCustomFlowIdsCallable(const Model::DescribeCustomFlowIdsRequest& request);

                /**
                 *此接口（DescribeCustomFlowIdsByFlowId）用于根据流程id反查自定义流程id
                 * @param req DescribeCustomFlowIdsByFlowIdRequest
                 * @return DescribeCustomFlowIdsByFlowIdOutcome
                 */
                DescribeCustomFlowIdsByFlowIdOutcome DescribeCustomFlowIdsByFlowId(const Model::DescribeCustomFlowIdsByFlowIdRequest &request);
                void DescribeCustomFlowIdsByFlowIdAsync(const Model::DescribeCustomFlowIdsByFlowIdRequest& request, const DescribeCustomFlowIdsByFlowIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomFlowIdsByFlowIdOutcomeCallable DescribeCustomFlowIdsByFlowIdCallable(const Model::DescribeCustomFlowIdsByFlowIdRequest& request);

                /**
                 *该接口为第三方平台向电子签平台获取慧眼人脸核身照片
                 * @param req DescribeFaceIdPhotosRequest
                 * @return DescribeFaceIdPhotosOutcome
                 */
                DescribeFaceIdPhotosOutcome DescribeFaceIdPhotos(const Model::DescribeFaceIdPhotosRequest &request);
                void DescribeFaceIdPhotosAsync(const Model::DescribeFaceIdPhotosRequest& request, const DescribeFaceIdPhotosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFaceIdPhotosOutcomeCallable DescribeFaceIdPhotosCallable(const Model::DescribeFaceIdPhotosRequest& request);

                /**
                 *该接口为第三方平台向电子签平台获取慧眼人脸核身结果
                 * @param req DescribeFaceIdResultsRequest
                 * @return DescribeFaceIdResultsOutcome
                 */
                DescribeFaceIdResultsOutcome DescribeFaceIdResults(const Model::DescribeFaceIdResultsRequest &request);
                void DescribeFaceIdResultsAsync(const Model::DescribeFaceIdResultsRequest& request, const DescribeFaceIdResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFaceIdResultsOutcomeCallable DescribeFaceIdResultsCallable(const Model::DescribeFaceIdResultsRequest& request);

                /**
                 *根据用户自定义id查询文件id
                 * @param req DescribeFileIdsByCustomIdsRequest
                 * @return DescribeFileIdsByCustomIdsOutcome
                 */
                DescribeFileIdsByCustomIdsOutcome DescribeFileIdsByCustomIds(const Model::DescribeFileIdsByCustomIdsRequest &request);
                void DescribeFileIdsByCustomIdsAsync(const Model::DescribeFileIdsByCustomIdsRequest& request, const DescribeFileIdsByCustomIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileIdsByCustomIdsOutcomeCallable DescribeFileIdsByCustomIdsCallable(const Model::DescribeFileIdsByCustomIdsRequest& request);

                /**
                 *此接口（DescribeFileUrls）用于获取签署文件下载的URL。
                 * @param req DescribeFileUrlsRequest
                 * @return DescribeFileUrlsOutcome
                 */
                DescribeFileUrlsOutcome DescribeFileUrls(const Model::DescribeFileUrlsRequest &request);
                void DescribeFileUrlsAsync(const Model::DescribeFileUrlsRequest& request, const DescribeFileUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileUrlsOutcomeCallable DescribeFileUrlsCallable(const Model::DescribeFileUrlsRequest& request);

                /**
                 *通过此接口（DescribeFlow）可查询签署流程的详细信息。
                 * @param req DescribeFlowRequest
                 * @return DescribeFlowOutcome
                 */
                DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest &request);
                void DescribeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowOutcomeCallable DescribeFlowCallable(const Model::DescribeFlowRequest& request);

                /**
                 *第三方应用可通过此接口（DescribeFlowApprovers）查询流程参与者信息。
                 * @param req DescribeFlowApproversRequest
                 * @return DescribeFlowApproversOutcome
                 */
                DescribeFlowApproversOutcome DescribeFlowApprovers(const Model::DescribeFlowApproversRequest &request);
                void DescribeFlowApproversAsync(const Model::DescribeFlowApproversRequest& request, const DescribeFlowApproversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowApproversOutcomeCallable DescribeFlowApproversCallable(const Model::DescribeFlowApproversRequest& request);

                /**
                 *查询流程文件
                 * @param req DescribeFlowFilesRequest
                 * @return DescribeFlowFilesOutcome
                 */
                DescribeFlowFilesOutcome DescribeFlowFiles(const Model::DescribeFlowFilesRequest &request);
                void DescribeFlowFilesAsync(const Model::DescribeFlowFilesRequest& request, const DescribeFlowFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowFilesOutcomeCallable DescribeFlowFilesCallable(const Model::DescribeFlowFilesRequest& request);

                /**
                 *此接口（DescribeSeals）用于查询指定ID的印章信息。
                 * @param req DescribeSealsRequest
                 * @return DescribeSealsOutcome
                 */
                DescribeSealsOutcome DescribeSeals(const Model::DescribeSealsRequest &request);
                void DescribeSealsAsync(const Model::DescribeSealsRequest& request, const DescribeSealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSealsOutcomeCallable DescribeSealsCallable(const Model::DescribeSealsRequest& request);

                /**
                 *此接口（DescribeSubOrganizations）用于查询子机构信息。

注：此接口仅可查询您所属机构应用号创建的子机构信息，不可跨应用/跨机构查询。
                 * @param req DescribeSubOrganizationsRequest
                 * @return DescribeSubOrganizationsOutcome
                 */
                DescribeSubOrganizationsOutcome DescribeSubOrganizations(const Model::DescribeSubOrganizationsRequest &request);
                void DescribeSubOrganizationsAsync(const Model::DescribeSubOrganizationsRequest& request, const DescribeSubOrganizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubOrganizationsOutcomeCallable DescribeSubOrganizationsCallable(const Model::DescribeSubOrganizationsRequest& request);

                /**
                 *此接口（DescribeUsers）用于查询应用号下的个人用户信息。

注：此接口仅可查询您所属机构应用号创建的个人用户信息，不可跨应用/跨机构查询。
                 * @param req DescribeUsersRequest
                 * @return DescribeUsersOutcome
                 */
                DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest &request);
                void DescribeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsersOutcomeCallable DescribeUsersCallable(const Model::DescribeUsersRequest& request);

                /**
                 *通过此接口（DestroyFlowFile）可删除指定流程中的合同文件。

注：调用此接口前，请确保此流程已属于归档状态。您可通过查询流程信息接口（DescribeFlow）进行查询。
                 * @param req DestroyFlowFileRequest
                 * @return DestroyFlowFileOutcome
                 */
                DestroyFlowFileOutcome DestroyFlowFile(const Model::DestroyFlowFileRequest &request);
                void DestroyFlowFileAsync(const Model::DestroyFlowFileRequest& request, const DestroyFlowFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyFlowFileOutcomeCallable DestroyFlowFileCallable(const Model::DestroyFlowFileRequest& request);

                /**
                 *生成企业电子印章
                 * @param req GenerateOrganizationSealRequest
                 * @return GenerateOrganizationSealOutcome
                 */
                GenerateOrganizationSealOutcome GenerateOrganizationSeal(const Model::GenerateOrganizationSealRequest &request);
                void GenerateOrganizationSealAsync(const Model::GenerateOrganizationSealRequest& request, const GenerateOrganizationSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateOrganizationSealOutcomeCallable GenerateOrganizationSealCallable(const Model::GenerateOrganizationSealRequest& request);

                /**
                 *此接口（GenerateUserSeal）用于生成个人签名图片。

注意：
1. 个人签名由用户注册时预留的姓名信息生成，不支持自定义签名内容。
2. 个人用户仅支持拥有一个系统生成的电子签名。
                 * @param req GenerateUserSealRequest
                 * @return GenerateUserSealOutcome
                 */
                GenerateUserSealOutcome GenerateUserSeal(const Model::GenerateUserSealRequest &request);
                void GenerateUserSealAsync(const Model::GenerateUserSealRequest& request, const GenerateUserSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateUserSealOutcomeCallable GenerateUserSealCallable(const Model::GenerateUserSealRequest& request);

                /**
                 *此接口 (ModifyOrganizationDefaultSeal) 用于重新指定企业默认印章。
                 * @param req ModifyOrganizationDefaultSealRequest
                 * @return ModifyOrganizationDefaultSealOutcome
                 */
                ModifyOrganizationDefaultSealOutcome ModifyOrganizationDefaultSeal(const Model::ModifyOrganizationDefaultSealRequest &request);
                void ModifyOrganizationDefaultSealAsync(const Model::ModifyOrganizationDefaultSealRequest& request, const ModifyOrganizationDefaultSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOrganizationDefaultSealOutcomeCallable ModifyOrganizationDefaultSealCallable(const Model::ModifyOrganizationDefaultSealRequest& request);

                /**
                 *此接口（ModifySeal）用于修改指定印章ID的印章图片和名称。

注：印章类型暂不支持修改，如需调整，请联系客服经理或通过创建印章接口（CreateSeal）进行创建新印章。
                 * @param req ModifySealRequest
                 * @return ModifySealOutcome
                 */
                ModifySealOutcome ModifySeal(const Model::ModifySealRequest &request);
                void ModifySealAsync(const Model::ModifySealRequest& request, const ModifySealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySealOutcomeCallable ModifySealCallable(const Model::ModifySealRequest& request);

                /**
                 *此接口（ModifySubOrganizationInfo）用于更新子机构信息。

注：若修改子机构名称或更新机构证件照片，需要重新通过子机构实名接口（VerifySubOrganization）进行重新实名。
                 * @param req ModifySubOrganizationInfoRequest
                 * @return ModifySubOrganizationInfoOutcome
                 */
                ModifySubOrganizationInfoOutcome ModifySubOrganizationInfo(const Model::ModifySubOrganizationInfoRequest &request);
                void ModifySubOrganizationInfoAsync(const Model::ModifySubOrganizationInfoRequest& request, const ModifySubOrganizationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubOrganizationInfoOutcomeCallable ModifySubOrganizationInfoCallable(const Model::ModifySubOrganizationInfoRequest& request);

                /**
                 *此接口（ModifyUser）用于更新个人用户信息。

注：若修改用户姓名，需要重新通过个人用户实名接口（VerifyUser）进行重新实名。
                 * @param req ModifyUserRequest
                 * @return ModifyUserOutcome
                 */
                ModifyUserOutcome ModifyUser(const Model::ModifyUserRequest &request);
                void ModifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserOutcomeCallable ModifyUserCallable(const Model::ModifyUserRequest& request);

                /**
                 *此接口 (ModifyUserDefaultSeal) 用于重新指定个人默认印章。
                 * @param req ModifyUserDefaultSealRequest
                 * @return ModifyUserDefaultSealOutcome
                 */
                ModifyUserDefaultSealOutcome ModifyUserDefaultSeal(const Model::ModifyUserDefaultSealRequest &request);
                void ModifyUserDefaultSealAsync(const Model::ModifyUserDefaultSealRequest& request, const ModifyUserDefaultSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserDefaultSealOutcomeCallable ModifyUserDefaultSealCallable(const Model::ModifyUserDefaultSealRequest& request);

                /**
                 *此接口（RejectFlow）用于用户拒绝签署合同流程。
                 * @param req RejectFlowRequest
                 * @return RejectFlowOutcome
                 */
                RejectFlowOutcome RejectFlow(const Model::RejectFlowRequest &request);
                void RejectFlowAsync(const Model::RejectFlowRequest& request, const RejectFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RejectFlowOutcomeCallable RejectFlowCallable(const Model::RejectFlowRequest& request);

                /**
                 *此接口（SendFlow）用于指定签署者及签署内容，后续可通过生成签署接口（CreateSignUrl）获取签署url。
                 * @param req SendFlowRequest
                 * @return SendFlowOutcome
                 */
                SendFlowOutcome SendFlow(const Model::SendFlowRequest &request);
                void SendFlowAsync(const Model::SendFlowRequest& request, const SendFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendFlowOutcomeCallable SendFlowCallable(const Model::SendFlowRequest& request);

                /**
                 *发送流程并获取签署URL
                 * @param req SendFlowUrlRequest
                 * @return SendFlowUrlOutcome
                 */
                SendFlowUrlOutcome SendFlowUrl(const Model::SendFlowUrlRequest &request);
                void SendFlowUrlAsync(const Model::SendFlowUrlRequest& request, const SendFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendFlowUrlOutcomeCallable SendFlowUrlCallable(const Model::SendFlowUrlRequest& request);

                /**
                 *此接口用于发送签署验证码
                 * @param req SendSignInnerVerifyCodeRequest
                 * @return SendSignInnerVerifyCodeOutcome
                 */
                SendSignInnerVerifyCodeOutcome SendSignInnerVerifyCode(const Model::SendSignInnerVerifyCodeRequest &request);
                void SendSignInnerVerifyCodeAsync(const Model::SendSignInnerVerifyCodeRequest& request, const SendSignInnerVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendSignInnerVerifyCodeOutcomeCallable SendSignInnerVerifyCodeCallable(const Model::SendSignInnerVerifyCodeRequest& request);

                /**
                 *此接口（SignFlow）可用于对流程文件进行签署。
                 * @param req SignFlowRequest
                 * @return SignFlowOutcome
                 */
                SignFlowOutcome SignFlow(const Model::SignFlowRequest &request);
                void SignFlowAsync(const Model::SignFlowRequest& request, const SignFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SignFlowOutcomeCallable SignFlowCallable(const Model::SignFlowRequest& request);

                /**
                 *此接口（UploadFiles）用于文件上传。
                 * @param req UploadFilesRequest
                 * @return UploadFilesOutcome
                 */
                UploadFilesOutcome UploadFiles(const Model::UploadFilesRequest &request);
                void UploadFilesAsync(const Model::UploadFilesRequest& request, const UploadFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadFilesOutcomeCallable UploadFilesCallable(const Model::UploadFilesRequest& request);

                /**
                 *此接口（VerifySubOrganization）用于通过子机构的实名认证。

注：此接口为白名单接口，如您需要使用此能力，请提前与客户经理沟通或邮件至e-contract@tencent.com与我们联系。
                 * @param req VerifySubOrganizationRequest
                 * @return VerifySubOrganizationOutcome
                 */
                VerifySubOrganizationOutcome VerifySubOrganization(const Model::VerifySubOrganizationRequest &request);
                void VerifySubOrganizationAsync(const Model::VerifySubOrganizationRequest& request, const VerifySubOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifySubOrganizationOutcomeCallable VerifySubOrganizationCallable(const Model::VerifySubOrganizationRequest& request);

                /**
                 *第三方应用可通过此接口（VerifyUser）将腾讯电子签个人用户的实名认证状态设为通过。

注：此接口为白名单接口，如您需要使用此能力，请提前与客户经理沟通或邮件至e-contract@tencent.com与我们联系。
                 * @param req VerifyUserRequest
                 * @return VerifyUserOutcome
                 */
                VerifyUserOutcome VerifyUser(const Model::VerifyUserRequest &request);
                void VerifyUserAsync(const Model::VerifyUserRequest& request, const VerifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyUserOutcomeCallable VerifyUserCallable(const Model::VerifyUserRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_ESSBASICCLIENT_H_
