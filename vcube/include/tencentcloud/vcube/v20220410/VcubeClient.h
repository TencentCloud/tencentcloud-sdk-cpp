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

#ifndef TENCENTCLOUD_VCUBE_V20220410_VCUBECLIENT_H_
#define TENCENTCLOUD_VCUBE_V20220410_VCUBECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vcube/v20220410/model/CreateActivityLicenseRequest.h>
#include <tencentcloud/vcube/v20220410/model/CreateActivityLicenseResponse.h>
#include <tencentcloud/vcube/v20220410/model/CreateApplicationAndBindLicenseRequest.h>
#include <tencentcloud/vcube/v20220410/model/CreateApplicationAndBindLicenseResponse.h>
#include <tencentcloud/vcube/v20220410/model/CreateApplicationAndVideoRequest.h>
#include <tencentcloud/vcube/v20220410/model/CreateApplicationAndVideoResponse.h>
#include <tencentcloud/vcube/v20220410/model/CreateApplicationAndWebPlayerLicenseRequest.h>
#include <tencentcloud/vcube/v20220410/model/CreateApplicationAndWebPlayerLicenseResponse.h>
#include <tencentcloud/vcube/v20220410/model/CreateLicenseRequest.h>
#include <tencentcloud/vcube/v20220410/model/CreateLicenseResponse.h>
#include <tencentcloud/vcube/v20220410/model/CreateTestXMagicRequest.h>
#include <tencentcloud/vcube/v20220410/model/CreateTestXMagicResponse.h>
#include <tencentcloud/vcube/v20220410/model/CreateTrialApplicationAndLicenseRequest.h>
#include <tencentcloud/vcube/v20220410/model/CreateTrialApplicationAndLicenseResponse.h>
#include <tencentcloud/vcube/v20220410/model/CreateTrialLicenseRequest.h>
#include <tencentcloud/vcube/v20220410/model/CreateTrialLicenseResponse.h>
#include <tencentcloud/vcube/v20220410/model/CreateXMagicRequest.h>
#include <tencentcloud/vcube/v20220410/model/CreateXMagicResponse.h>
#include <tencentcloud/vcube/v20220410/model/DescribeFeatureListRequest.h>
#include <tencentcloud/vcube/v20220410/model/DescribeFeatureListResponse.h>
#include <tencentcloud/vcube/v20220410/model/DescribeLicenseListRequest.h>
#include <tencentcloud/vcube/v20220410/model/DescribeLicenseListResponse.h>
#include <tencentcloud/vcube/v20220410/model/DescribeNewsRequest.h>
#include <tencentcloud/vcube/v20220410/model/DescribeNewsResponse.h>
#include <tencentcloud/vcube/v20220410/model/DescribeSTSRequest.h>
#include <tencentcloud/vcube/v20220410/model/DescribeSTSResponse.h>
#include <tencentcloud/vcube/v20220410/model/DescribeTrialFeatureRequest.h>
#include <tencentcloud/vcube/v20220410/model/DescribeTrialFeatureResponse.h>
#include <tencentcloud/vcube/v20220410/model/DescribeUserConfigRequest.h>
#include <tencentcloud/vcube/v20220410/model/DescribeUserConfigResponse.h>
#include <tencentcloud/vcube/v20220410/model/DescribeVcubeApplicationAndLicenseRequest.h>
#include <tencentcloud/vcube/v20220410/model/DescribeVcubeApplicationAndLicenseResponse.h>
#include <tencentcloud/vcube/v20220410/model/DescribeVcubeApplicationAndPlayListRequest.h>
#include <tencentcloud/vcube/v20220410/model/DescribeVcubeApplicationAndPlayListResponse.h>
#include <tencentcloud/vcube/v20220410/model/DescribeVcubeApplicationAndXMagicListRequest.h>
#include <tencentcloud/vcube/v20220410/model/DescribeVcubeApplicationAndXMagicListResponse.h>
#include <tencentcloud/vcube/v20220410/model/DescribeVcubeResourcesRequest.h>
#include <tencentcloud/vcube/v20220410/model/DescribeVcubeResourcesResponse.h>
#include <tencentcloud/vcube/v20220410/model/DescribeVcubeResourcesListRequest.h>
#include <tencentcloud/vcube/v20220410/model/DescribeVcubeResourcesListResponse.h>
#include <tencentcloud/vcube/v20220410/model/DescribeXMagicResourceRequest.h>
#include <tencentcloud/vcube/v20220410/model/DescribeXMagicResourceResponse.h>
#include <tencentcloud/vcube/v20220410/model/DescribeXMagicResourceListRequest.h>
#include <tencentcloud/vcube/v20220410/model/DescribeXMagicResourceListResponse.h>
#include <tencentcloud/vcube/v20220410/model/ModifyApplicationRequest.h>
#include <tencentcloud/vcube/v20220410/model/ModifyApplicationResponse.h>
#include <tencentcloud/vcube/v20220410/model/ModifyFormalApplicationRequest.h>
#include <tencentcloud/vcube/v20220410/model/ModifyFormalApplicationResponse.h>
#include <tencentcloud/vcube/v20220410/model/ModifyLicenseRequest.h>
#include <tencentcloud/vcube/v20220410/model/ModifyLicenseResponse.h>
#include <tencentcloud/vcube/v20220410/model/ModifyPresetApplicationRequest.h>
#include <tencentcloud/vcube/v20220410/model/ModifyPresetApplicationResponse.h>
#include <tencentcloud/vcube/v20220410/model/ModifyTrialLicenseRequest.h>
#include <tencentcloud/vcube/v20220410/model/ModifyTrialLicenseResponse.h>
#include <tencentcloud/vcube/v20220410/model/ModifyXMagicRequest.h>
#include <tencentcloud/vcube/v20220410/model/ModifyXMagicResponse.h>
#include <tencentcloud/vcube/v20220410/model/RenewLicenseRequest.h>
#include <tencentcloud/vcube/v20220410/model/RenewLicenseResponse.h>
#include <tencentcloud/vcube/v20220410/model/RenewTestXMagicRequest.h>
#include <tencentcloud/vcube/v20220410/model/RenewTestXMagicResponse.h>
#include <tencentcloud/vcube/v20220410/model/RenewVideoRequest.h>
#include <tencentcloud/vcube/v20220410/model/RenewVideoResponse.h>
#include <tencentcloud/vcube/v20220410/model/UpdateTestXMagicRequest.h>
#include <tencentcloud/vcube/v20220410/model/UpdateTestXMagicResponse.h>
#include <tencentcloud/vcube/v20220410/model/UpdateTrialLicenseRequest.h>
#include <tencentcloud/vcube/v20220410/model/UpdateTrialLicenseResponse.h>
#include <tencentcloud/vcube/v20220410/model/UpdateXMagicRequest.h>
#include <tencentcloud/vcube/v20220410/model/UpdateXMagicResponse.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            class VcubeClient : public AbstractClient
            {
            public:
                VcubeClient(const Credential &credential, const std::string &region);
                VcubeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateActivityLicenseResponse> CreateActivityLicenseOutcome;
                typedef std::future<CreateActivityLicenseOutcome> CreateActivityLicenseOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::CreateActivityLicenseRequest&, CreateActivityLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateActivityLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationAndBindLicenseResponse> CreateApplicationAndBindLicenseOutcome;
                typedef std::future<CreateApplicationAndBindLicenseOutcome> CreateApplicationAndBindLicenseOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::CreateApplicationAndBindLicenseRequest&, CreateApplicationAndBindLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAndBindLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationAndVideoResponse> CreateApplicationAndVideoOutcome;
                typedef std::future<CreateApplicationAndVideoOutcome> CreateApplicationAndVideoOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::CreateApplicationAndVideoRequest&, CreateApplicationAndVideoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAndVideoAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationAndWebPlayerLicenseResponse> CreateApplicationAndWebPlayerLicenseOutcome;
                typedef std::future<CreateApplicationAndWebPlayerLicenseOutcome> CreateApplicationAndWebPlayerLicenseOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::CreateApplicationAndWebPlayerLicenseRequest&, CreateApplicationAndWebPlayerLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAndWebPlayerLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLicenseResponse> CreateLicenseOutcome;
                typedef std::future<CreateLicenseOutcome> CreateLicenseOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::CreateLicenseRequest&, CreateLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTestXMagicResponse> CreateTestXMagicOutcome;
                typedef std::future<CreateTestXMagicOutcome> CreateTestXMagicOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::CreateTestXMagicRequest&, CreateTestXMagicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTestXMagicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTrialApplicationAndLicenseResponse> CreateTrialApplicationAndLicenseOutcome;
                typedef std::future<CreateTrialApplicationAndLicenseOutcome> CreateTrialApplicationAndLicenseOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::CreateTrialApplicationAndLicenseRequest&, CreateTrialApplicationAndLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrialApplicationAndLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTrialLicenseResponse> CreateTrialLicenseOutcome;
                typedef std::future<CreateTrialLicenseOutcome> CreateTrialLicenseOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::CreateTrialLicenseRequest&, CreateTrialLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrialLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateXMagicResponse> CreateXMagicOutcome;
                typedef std::future<CreateXMagicOutcome> CreateXMagicOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::CreateXMagicRequest&, CreateXMagicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateXMagicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFeatureListResponse> DescribeFeatureListOutcome;
                typedef std::future<DescribeFeatureListOutcome> DescribeFeatureListOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::DescribeFeatureListRequest&, DescribeFeatureListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFeatureListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseListResponse> DescribeLicenseListOutcome;
                typedef std::future<DescribeLicenseListOutcome> DescribeLicenseListOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::DescribeLicenseListRequest&, DescribeLicenseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNewsResponse> DescribeNewsOutcome;
                typedef std::future<DescribeNewsOutcome> DescribeNewsOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::DescribeNewsRequest&, DescribeNewsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNewsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSTSResponse> DescribeSTSOutcome;
                typedef std::future<DescribeSTSOutcome> DescribeSTSOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::DescribeSTSRequest&, DescribeSTSOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSTSAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrialFeatureResponse> DescribeTrialFeatureOutcome;
                typedef std::future<DescribeTrialFeatureOutcome> DescribeTrialFeatureOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::DescribeTrialFeatureRequest&, DescribeTrialFeatureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrialFeatureAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserConfigResponse> DescribeUserConfigOutcome;
                typedef std::future<DescribeUserConfigOutcome> DescribeUserConfigOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::DescribeUserConfigRequest&, DescribeUserConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVcubeApplicationAndLicenseResponse> DescribeVcubeApplicationAndLicenseOutcome;
                typedef std::future<DescribeVcubeApplicationAndLicenseOutcome> DescribeVcubeApplicationAndLicenseOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::DescribeVcubeApplicationAndLicenseRequest&, DescribeVcubeApplicationAndLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVcubeApplicationAndLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVcubeApplicationAndPlayListResponse> DescribeVcubeApplicationAndPlayListOutcome;
                typedef std::future<DescribeVcubeApplicationAndPlayListOutcome> DescribeVcubeApplicationAndPlayListOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::DescribeVcubeApplicationAndPlayListRequest&, DescribeVcubeApplicationAndPlayListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVcubeApplicationAndPlayListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVcubeApplicationAndXMagicListResponse> DescribeVcubeApplicationAndXMagicListOutcome;
                typedef std::future<DescribeVcubeApplicationAndXMagicListOutcome> DescribeVcubeApplicationAndXMagicListOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::DescribeVcubeApplicationAndXMagicListRequest&, DescribeVcubeApplicationAndXMagicListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVcubeApplicationAndXMagicListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVcubeResourcesResponse> DescribeVcubeResourcesOutcome;
                typedef std::future<DescribeVcubeResourcesOutcome> DescribeVcubeResourcesOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::DescribeVcubeResourcesRequest&, DescribeVcubeResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVcubeResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVcubeResourcesListResponse> DescribeVcubeResourcesListOutcome;
                typedef std::future<DescribeVcubeResourcesListOutcome> DescribeVcubeResourcesListOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::DescribeVcubeResourcesListRequest&, DescribeVcubeResourcesListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVcubeResourcesListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeXMagicResourceResponse> DescribeXMagicResourceOutcome;
                typedef std::future<DescribeXMagicResourceOutcome> DescribeXMagicResourceOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::DescribeXMagicResourceRequest&, DescribeXMagicResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeXMagicResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeXMagicResourceListResponse> DescribeXMagicResourceListOutcome;
                typedef std::future<DescribeXMagicResourceListOutcome> DescribeXMagicResourceListOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::DescribeXMagicResourceListRequest&, DescribeXMagicResourceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeXMagicResourceListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationResponse> ModifyApplicationOutcome;
                typedef std::future<ModifyApplicationOutcome> ModifyApplicationOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::ModifyApplicationRequest&, ModifyApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFormalApplicationResponse> ModifyFormalApplicationOutcome;
                typedef std::future<ModifyFormalApplicationOutcome> ModifyFormalApplicationOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::ModifyFormalApplicationRequest&, ModifyFormalApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFormalApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLicenseResponse> ModifyLicenseOutcome;
                typedef std::future<ModifyLicenseOutcome> ModifyLicenseOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::ModifyLicenseRequest&, ModifyLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPresetApplicationResponse> ModifyPresetApplicationOutcome;
                typedef std::future<ModifyPresetApplicationOutcome> ModifyPresetApplicationOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::ModifyPresetApplicationRequest&, ModifyPresetApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPresetApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTrialLicenseResponse> ModifyTrialLicenseOutcome;
                typedef std::future<ModifyTrialLicenseOutcome> ModifyTrialLicenseOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::ModifyTrialLicenseRequest&, ModifyTrialLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTrialLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyXMagicResponse> ModifyXMagicOutcome;
                typedef std::future<ModifyXMagicOutcome> ModifyXMagicOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::ModifyXMagicRequest&, ModifyXMagicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyXMagicAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewLicenseResponse> RenewLicenseOutcome;
                typedef std::future<RenewLicenseOutcome> RenewLicenseOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::RenewLicenseRequest&, RenewLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewTestXMagicResponse> RenewTestXMagicOutcome;
                typedef std::future<RenewTestXMagicOutcome> RenewTestXMagicOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::RenewTestXMagicRequest&, RenewTestXMagicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewTestXMagicAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewVideoResponse> RenewVideoOutcome;
                typedef std::future<RenewVideoOutcome> RenewVideoOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::RenewVideoRequest&, RenewVideoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewVideoAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateTestXMagicResponse> UpdateTestXMagicOutcome;
                typedef std::future<UpdateTestXMagicOutcome> UpdateTestXMagicOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::UpdateTestXMagicRequest&, UpdateTestXMagicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTestXMagicAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateTrialLicenseResponse> UpdateTrialLicenseOutcome;
                typedef std::future<UpdateTrialLicenseOutcome> UpdateTrialLicenseOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::UpdateTrialLicenseRequest&, UpdateTrialLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTrialLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateXMagicResponse> UpdateXMagicOutcome;
                typedef std::future<UpdateXMagicOutcome> UpdateXMagicOutcomeCallable;
                typedef std::function<void(const VcubeClient*, const Model::UpdateXMagicRequest&, UpdateXMagicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateXMagicAsyncHandler;



                /**
                 *创建活动license
                 * @param req CreateActivityLicenseRequest
                 * @return CreateActivityLicenseOutcome
                 */
                CreateActivityLicenseOutcome CreateActivityLicense(const Model::CreateActivityLicenseRequest &request);
                void CreateActivityLicenseAsync(const Model::CreateActivityLicenseRequest& request, const CreateActivityLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateActivityLicenseOutcomeCallable CreateActivityLicenseCallable(const Model::CreateActivityLicenseRequest& request);

                /**
                 *创建应用并绑定license或者XMagic
                 * @param req CreateApplicationAndBindLicenseRequest
                 * @return CreateApplicationAndBindLicenseOutcome
                 */
                CreateApplicationAndBindLicenseOutcome CreateApplicationAndBindLicense(const Model::CreateApplicationAndBindLicenseRequest &request);
                void CreateApplicationAndBindLicenseAsync(const Model::CreateApplicationAndBindLicenseRequest& request, const CreateApplicationAndBindLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationAndBindLicenseOutcomeCallable CreateApplicationAndBindLicenseCallable(const Model::CreateApplicationAndBindLicenseRequest& request);

                /**
                 *创建应用和视频播放license 目前只有国际站可以用
                 * @param req CreateApplicationAndVideoRequest
                 * @return CreateApplicationAndVideoOutcome
                 */
                CreateApplicationAndVideoOutcome CreateApplicationAndVideo(const Model::CreateApplicationAndVideoRequest &request);
                void CreateApplicationAndVideoAsync(const Model::CreateApplicationAndVideoRequest& request, const CreateApplicationAndVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationAndVideoOutcomeCallable CreateApplicationAndVideoCallable(const Model::CreateApplicationAndVideoRequest& request);

                /**
                 *创建 web 播放器基础版
                 * @param req CreateApplicationAndWebPlayerLicenseRequest
                 * @return CreateApplicationAndWebPlayerLicenseOutcome
                 */
                CreateApplicationAndWebPlayerLicenseOutcome CreateApplicationAndWebPlayerLicense(const Model::CreateApplicationAndWebPlayerLicenseRequest &request);
                void CreateApplicationAndWebPlayerLicenseAsync(const Model::CreateApplicationAndWebPlayerLicenseRequest& request, const CreateApplicationAndWebPlayerLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationAndWebPlayerLicenseOutcomeCallable CreateApplicationAndWebPlayerLicenseCallable(const Model::CreateApplicationAndWebPlayerLicenseRequest& request);

                /**
                 *绑定license
                 * @param req CreateLicenseRequest
                 * @return CreateLicenseOutcome
                 */
                CreateLicenseOutcome CreateLicense(const Model::CreateLicenseRequest &request);
                void CreateLicenseAsync(const Model::CreateLicenseRequest& request, const CreateLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLicenseOutcomeCallable CreateLicenseCallable(const Model::CreateLicenseRequest& request);

                /**
                 *申请开通测试版腾讯特效
                 * @param req CreateTestXMagicRequest
                 * @return CreateTestXMagicOutcome
                 */
                CreateTestXMagicOutcome CreateTestXMagic(const Model::CreateTestXMagicRequest &request);
                void CreateTestXMagicAsync(const Model::CreateTestXMagicRequest& request, const CreateTestXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTestXMagicOutcomeCallable CreateTestXMagicCallable(const Model::CreateTestXMagicRequest& request);

                /**
                 *创建测试应用并开通测试 license
                 * @param req CreateTrialApplicationAndLicenseRequest
                 * @return CreateTrialApplicationAndLicenseOutcome
                 */
                CreateTrialApplicationAndLicenseOutcome CreateTrialApplicationAndLicense(const Model::CreateTrialApplicationAndLicenseRequest &request);
                void CreateTrialApplicationAndLicenseAsync(const Model::CreateTrialApplicationAndLicenseRequest& request, const CreateTrialApplicationAndLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTrialApplicationAndLicenseOutcomeCallable CreateTrialApplicationAndLicenseCallable(const Model::CreateTrialApplicationAndLicenseRequest& request);

                /**
                 *开通测试license
                 * @param req CreateTrialLicenseRequest
                 * @return CreateTrialLicenseOutcome
                 */
                CreateTrialLicenseOutcome CreateTrialLicense(const Model::CreateTrialLicenseRequest &request);
                void CreateTrialLicenseAsync(const Model::CreateTrialLicenseRequest& request, const CreateTrialLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTrialLicenseOutcomeCallable CreateTrialLicenseCallable(const Model::CreateTrialLicenseRequest& request);

                /**
                 *x08开通正式版优图美视功能，针对已经有Application的情况
                 * @param req CreateXMagicRequest
                 * @return CreateXMagicOutcome
                 */
                CreateXMagicOutcome CreateXMagic(const Model::CreateXMagicRequest &request);
                void CreateXMagicAsync(const Model::CreateXMagicRequest& request, const CreateXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateXMagicOutcomeCallable CreateXMagicCallable(const Model::CreateXMagicRequest& request);

                /**
                 *查询功能列表
                 * @param req DescribeFeatureListRequest
                 * @return DescribeFeatureListOutcome
                 */
                DescribeFeatureListOutcome DescribeFeatureList(const Model::DescribeFeatureListRequest &request);
                void DescribeFeatureListAsync(const Model::DescribeFeatureListRequest& request, const DescribeFeatureListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFeatureListOutcomeCallable DescribeFeatureListCallable(const Model::DescribeFeatureListRequest& request);

                /**
                 *总览页查询临期License列表，和统计数据
                 * @param req DescribeLicenseListRequest
                 * @return DescribeLicenseListOutcome
                 */
                DescribeLicenseListOutcome DescribeLicenseList(const Model::DescribeLicenseListRequest &request);
                void DescribeLicenseListAsync(const Model::DescribeLicenseListRequest& request, const DescribeLicenseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseListOutcomeCallable DescribeLicenseListCallable(const Model::DescribeLicenseListRequest& request);

                /**
                 *查询产品动态
                 * @param req DescribeNewsRequest
                 * @return DescribeNewsOutcome
                 */
                DescribeNewsOutcome DescribeNews(const Model::DescribeNewsRequest &request);
                void DescribeNewsAsync(const Model::DescribeNewsRequest& request, const DescribeNewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNewsOutcomeCallable DescribeNewsCallable(const Model::DescribeNewsRequest& request);

                /**
                 *获取临时秘钥，用于图片，特效包上传
                 * @param req DescribeSTSRequest
                 * @return DescribeSTSOutcome
                 */
                DescribeSTSOutcome DescribeSTS(const Model::DescribeSTSRequest &request);
                void DescribeSTSAsync(const Model::DescribeSTSRequest& request, const DescribeSTSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSTSOutcomeCallable DescribeSTSCallable(const Model::DescribeSTSRequest& request);

                /**
                 *查询测试应用可以开通的功能
                 * @param req DescribeTrialFeatureRequest
                 * @return DescribeTrialFeatureOutcome
                 */
                DescribeTrialFeatureOutcome DescribeTrialFeature(const Model::DescribeTrialFeatureRequest &request);
                void DescribeTrialFeatureAsync(const Model::DescribeTrialFeatureRequest& request, const DescribeTrialFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrialFeatureOutcomeCallable DescribeTrialFeatureCallable(const Model::DescribeTrialFeatureRequest& request);

                /**
                 *查询用户个性配置
                 * @param req DescribeUserConfigRequest
                 * @return DescribeUserConfigOutcome
                 */
                DescribeUserConfigOutcome DescribeUserConfig(const Model::DescribeUserConfigRequest &request);
                void DescribeUserConfigAsync(const Model::DescribeUserConfigRequest& request, const DescribeUserConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserConfigOutcomeCallable DescribeUserConfigCallable(const Model::DescribeUserConfigRequest& request);

                /**
                 *查询用户license， 按照应用分类
                 * @param req DescribeVcubeApplicationAndLicenseRequest
                 * @return DescribeVcubeApplicationAndLicenseOutcome
                 */
                DescribeVcubeApplicationAndLicenseOutcome DescribeVcubeApplicationAndLicense(const Model::DescribeVcubeApplicationAndLicenseRequest &request);
                void DescribeVcubeApplicationAndLicenseAsync(const Model::DescribeVcubeApplicationAndLicenseRequest& request, const DescribeVcubeApplicationAndLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVcubeApplicationAndLicenseOutcomeCallable DescribeVcubeApplicationAndLicenseCallable(const Model::DescribeVcubeApplicationAndLicenseRequest& request);

                /**
                 *查询用户点播直播等license， 按照应用分类,国际站专用
                 * @param req DescribeVcubeApplicationAndPlayListRequest
                 * @return DescribeVcubeApplicationAndPlayListOutcome
                 */
                DescribeVcubeApplicationAndPlayListOutcome DescribeVcubeApplicationAndPlayList(const Model::DescribeVcubeApplicationAndPlayListRequest &request);
                void DescribeVcubeApplicationAndPlayListAsync(const Model::DescribeVcubeApplicationAndPlayListRequest& request, const DescribeVcubeApplicationAndPlayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVcubeApplicationAndPlayListOutcomeCallable DescribeVcubeApplicationAndPlayListCallable(const Model::DescribeVcubeApplicationAndPlayListRequest& request);

                /**
                 *查询用户优图license， 按照应用分类
                 * @param req DescribeVcubeApplicationAndXMagicListRequest
                 * @return DescribeVcubeApplicationAndXMagicListOutcome
                 */
                DescribeVcubeApplicationAndXMagicListOutcome DescribeVcubeApplicationAndXMagicList(const Model::DescribeVcubeApplicationAndXMagicListRequest &request);
                void DescribeVcubeApplicationAndXMagicListAsync(const Model::DescribeVcubeApplicationAndXMagicListRequest& request, const DescribeVcubeApplicationAndXMagicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVcubeApplicationAndXMagicListOutcomeCallable DescribeVcubeApplicationAndXMagicListCallable(const Model::DescribeVcubeApplicationAndXMagicListRequest& request);

                /**
                 *查询视立方 license 资源，所有的资源包
                 * @param req DescribeVcubeResourcesRequest
                 * @return DescribeVcubeResourcesOutcome
                 */
                DescribeVcubeResourcesOutcome DescribeVcubeResources(const Model::DescribeVcubeResourcesRequest &request);
                void DescribeVcubeResourcesAsync(const Model::DescribeVcubeResourcesRequest& request, const DescribeVcubeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVcubeResourcesOutcomeCallable DescribeVcubeResourcesCallable(const Model::DescribeVcubeResourcesRequest& request);

                /**
                 *查询视立方 license 资源，包括资源包赠送和直接购买的资源
                 * @param req DescribeVcubeResourcesListRequest
                 * @return DescribeVcubeResourcesListOutcome
                 */
                DescribeVcubeResourcesListOutcome DescribeVcubeResourcesList(const Model::DescribeVcubeResourcesListRequest &request);
                void DescribeVcubeResourcesListAsync(const Model::DescribeVcubeResourcesListRequest& request, const DescribeVcubeResourcesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVcubeResourcesListOutcomeCallable DescribeVcubeResourcesListCallable(const Model::DescribeVcubeResourcesListRequest& request);

                /**
                 *用途美视资源包用于开通正式优图美视
                 * @param req DescribeXMagicResourceRequest
                 * @return DescribeXMagicResourceOutcome
                 */
                DescribeXMagicResourceOutcome DescribeXMagicResource(const Model::DescribeXMagicResourceRequest &request);
                void DescribeXMagicResourceAsync(const Model::DescribeXMagicResourceRequest& request, const DescribeXMagicResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeXMagicResourceOutcomeCallable DescribeXMagicResourceCallable(const Model::DescribeXMagicResourceRequest& request);

                /**
                 *用于优图美视资源列表展示
                 * @param req DescribeXMagicResourceListRequest
                 * @return DescribeXMagicResourceListOutcome
                 */
                DescribeXMagicResourceListOutcome DescribeXMagicResourceList(const Model::DescribeXMagicResourceListRequest &request);
                void DescribeXMagicResourceListAsync(const Model::DescribeXMagicResourceListRequest& request, const DescribeXMagicResourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeXMagicResourceListOutcomeCallable DescribeXMagicResourceListCallable(const Model::DescribeXMagicResourceListRequest& request);

                /**
                 *更改测试包名信息
                 * @param req ModifyApplicationRequest
                 * @return ModifyApplicationOutcome
                 */
                ModifyApplicationOutcome ModifyApplication(const Model::ModifyApplicationRequest &request);
                void ModifyApplicationAsync(const Model::ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationOutcomeCallable ModifyApplicationCallable(const Model::ModifyApplicationRequest& request);

                /**
                 *修改正式应用的包名称
                 * @param req ModifyFormalApplicationRequest
                 * @return ModifyFormalApplicationOutcome
                 */
                ModifyFormalApplicationOutcome ModifyFormalApplication(const Model::ModifyFormalApplicationRequest &request);
                void ModifyFormalApplicationAsync(const Model::ModifyFormalApplicationRequest& request, const ModifyFormalApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFormalApplicationOutcomeCallable ModifyFormalApplicationCallable(const Model::ModifyFormalApplicationRequest& request);

                /**
                 *正式license 升降配，点播精简版、基础版
                 * @param req ModifyLicenseRequest
                 * @return ModifyLicenseOutcome
                 */
                ModifyLicenseOutcome ModifyLicense(const Model::ModifyLicenseRequest &request);
                void ModifyLicenseAsync(const Model::ModifyLicenseRequest& request, const ModifyLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLicenseOutcomeCallable ModifyLicenseCallable(const Model::ModifyLicenseRequest& request);

                /**
                 *修改内置应用包名
                 * @param req ModifyPresetApplicationRequest
                 * @return ModifyPresetApplicationOutcome
                 */
                ModifyPresetApplicationOutcome ModifyPresetApplication(const Model::ModifyPresetApplicationRequest &request);
                void ModifyPresetApplicationAsync(const Model::ModifyPresetApplicationRequest& request, const ModifyPresetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPresetApplicationOutcomeCallable ModifyPresetApplicationCallable(const Model::ModifyPresetApplicationRequest& request);

                /**
                 *续期测试license
                 * @param req ModifyTrialLicenseRequest
                 * @return ModifyTrialLicenseOutcome
                 */
                ModifyTrialLicenseOutcome ModifyTrialLicense(const Model::ModifyTrialLicenseRequest &request);
                void ModifyTrialLicenseAsync(const Model::ModifyTrialLicenseRequest& request, const ModifyTrialLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTrialLicenseOutcomeCallable ModifyTrialLicenseCallable(const Model::ModifyTrialLicenseRequest& request);

                /**
                 *使用一个腾讯特效资源，更新现在的腾讯特效license，license功能和到期时间会以新的资源为准，老资源会被替换下来
                 * @param req ModifyXMagicRequest
                 * @return ModifyXMagicOutcome
                 */
                ModifyXMagicOutcome ModifyXMagic(const Model::ModifyXMagicRequest &request);
                void ModifyXMagicAsync(const Model::ModifyXMagicRequest& request, const ModifyXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyXMagicOutcomeCallable ModifyXMagicCallable(const Model::ModifyXMagicRequest& request);

                /**
                 *正式license 续期与变更有效期
                 * @param req RenewLicenseRequest
                 * @return RenewLicenseOutcome
                 */
                RenewLicenseOutcome RenewLicense(const Model::RenewLicenseRequest &request);
                void RenewLicenseAsync(const Model::RenewLicenseRequest& request, const RenewLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewLicenseOutcomeCallable RenewLicenseCallable(const Model::RenewLicenseRequest& request);

                /**
                 *续期测试版优图美视
                 * @param req RenewTestXMagicRequest
                 * @return RenewTestXMagicOutcome
                 */
                RenewTestXMagicOutcome RenewTestXMagic(const Model::RenewTestXMagicRequest &request);
                void RenewTestXMagicAsync(const Model::RenewTestXMagicRequest& request, const RenewTestXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewTestXMagicOutcomeCallable RenewTestXMagicCallable(const Model::RenewTestXMagicRequest& request);

                /**
                 *续期国际站视频播放功能和中国站web基础版
                 * @param req RenewVideoRequest
                 * @return RenewVideoOutcome
                 */
                RenewVideoOutcome RenewVideo(const Model::RenewVideoRequest &request);
                void RenewVideoAsync(const Model::RenewVideoRequest& request, const RenewVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewVideoOutcomeCallable RenewVideoCallable(const Model::RenewVideoRequest& request);

                /**
                 *将测试xmagic升级到正式版
                 * @param req UpdateTestXMagicRequest
                 * @return UpdateTestXMagicOutcome
                 */
                UpdateTestXMagicOutcome UpdateTestXMagic(const Model::UpdateTestXMagicRequest &request);
                void UpdateTestXMagicAsync(const Model::UpdateTestXMagicRequest& request, const UpdateTestXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateTestXMagicOutcomeCallable UpdateTestXMagicCallable(const Model::UpdateTestXMagicRequest& request);

                /**
                 *测试 license 升级为正式 license
                 * @param req UpdateTrialLicenseRequest
                 * @return UpdateTrialLicenseOutcome
                 */
                UpdateTrialLicenseOutcome UpdateTrialLicense(const Model::UpdateTrialLicenseRequest &request);
                void UpdateTrialLicenseAsync(const Model::UpdateTrialLicenseRequest& request, const UpdateTrialLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateTrialLicenseOutcomeCallable UpdateTrialLicenseCallable(const Model::UpdateTrialLicenseRequest& request);

                /**
                 *更新优图美视的申请信息 Status 为2，3的时候可用
                 * @param req UpdateXMagicRequest
                 * @return UpdateXMagicOutcome
                 */
                UpdateXMagicOutcome UpdateXMagic(const Model::UpdateXMagicRequest &request);
                void UpdateXMagicAsync(const Model::UpdateXMagicRequest& request, const UpdateXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateXMagicOutcomeCallable UpdateXMagicCallable(const Model::UpdateXMagicRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_VCUBECLIENT_H_
