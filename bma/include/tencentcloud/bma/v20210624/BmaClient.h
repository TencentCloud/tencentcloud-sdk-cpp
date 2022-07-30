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

#ifndef TENCENTCLOUD_BMA_V20210624_BMACLIENT_H_
#define TENCENTCLOUD_BMA_V20210624_BMACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bma/v20210624/model/CreateCRBlockRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateCRBlockResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateCRCompanyVerifyRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateCRCompanyVerifyResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateCRRightRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateCRRightResponse.h>
#include <tencentcloud/bma/v20210624/model/CreateCRWorkRequest.h>
#include <tencentcloud/bma/v20210624/model/CreateCRWorkResponse.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRMonitorDetailRequest.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRMonitorDetailResponse.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRMonitorsRequest.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRMonitorsResponse.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRWorkInfoRequest.h>
#include <tencentcloud/bma/v20210624/model/DescribeCRWorkInfoResponse.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRBlockStatusRequest.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRBlockStatusResponse.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRMonitorRequest.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRMonitorResponse.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRObtainStatusRequest.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRObtainStatusResponse.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRRightStatusRequest.h>
#include <tencentcloud/bma/v20210624/model/ModifyCRRightStatusResponse.h>
#include <tencentcloud/bma/v20210624/model/UpdateCRWorkRequest.h>
#include <tencentcloud/bma/v20210624/model/UpdateCRWorkResponse.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            class BmaClient : public AbstractClient
            {
            public:
                BmaClient(const Credential &credential, const std::string &region);
                BmaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateCRBlockResponse> CreateCRBlockOutcome;
                typedef std::future<CreateCRBlockOutcome> CreateCRBlockOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateCRBlockRequest&, CreateCRBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCRBlockAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCRCompanyVerifyResponse> CreateCRCompanyVerifyOutcome;
                typedef std::future<CreateCRCompanyVerifyOutcome> CreateCRCompanyVerifyOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateCRCompanyVerifyRequest&, CreateCRCompanyVerifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCRCompanyVerifyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCRRightResponse> CreateCRRightOutcome;
                typedef std::future<CreateCRRightOutcome> CreateCRRightOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateCRRightRequest&, CreateCRRightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCRRightAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCRWorkResponse> CreateCRWorkOutcome;
                typedef std::future<CreateCRWorkOutcome> CreateCRWorkOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::CreateCRWorkRequest&, CreateCRWorkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCRWorkAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCRMonitorDetailResponse> DescribeCRMonitorDetailOutcome;
                typedef std::future<DescribeCRMonitorDetailOutcome> DescribeCRMonitorDetailOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeCRMonitorDetailRequest&, DescribeCRMonitorDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCRMonitorDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCRMonitorsResponse> DescribeCRMonitorsOutcome;
                typedef std::future<DescribeCRMonitorsOutcome> DescribeCRMonitorsOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeCRMonitorsRequest&, DescribeCRMonitorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCRMonitorsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCRWorkInfoResponse> DescribeCRWorkInfoOutcome;
                typedef std::future<DescribeCRWorkInfoOutcome> DescribeCRWorkInfoOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::DescribeCRWorkInfoRequest&, DescribeCRWorkInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCRWorkInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCRBlockStatusResponse> ModifyCRBlockStatusOutcome;
                typedef std::future<ModifyCRBlockStatusOutcome> ModifyCRBlockStatusOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::ModifyCRBlockStatusRequest&, ModifyCRBlockStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCRBlockStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCRMonitorResponse> ModifyCRMonitorOutcome;
                typedef std::future<ModifyCRMonitorOutcome> ModifyCRMonitorOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::ModifyCRMonitorRequest&, ModifyCRMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCRMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCRObtainStatusResponse> ModifyCRObtainStatusOutcome;
                typedef std::future<ModifyCRObtainStatusOutcome> ModifyCRObtainStatusOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::ModifyCRObtainStatusRequest&, ModifyCRObtainStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCRObtainStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCRRightStatusResponse> ModifyCRRightStatusOutcome;
                typedef std::future<ModifyCRRightStatusOutcome> ModifyCRRightStatusOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::ModifyCRRightStatusRequest&, ModifyCRRightStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCRRightStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCRWorkResponse> UpdateCRWorkOutcome;
                typedef std::future<UpdateCRWorkOutcome> UpdateCRWorkOutcomeCallable;
                typedef std::function<void(const BmaClient*, const Model::UpdateCRWorkRequest&, UpdateCRWorkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCRWorkAsyncHandler;



                /**
                 *版权保护-新建拦截接口
                 * @param req CreateCRBlockRequest
                 * @return CreateCRBlockOutcome
                 */
                CreateCRBlockOutcome CreateCRBlock(const Model::CreateCRBlockRequest &request);
                void CreateCRBlockAsync(const Model::CreateCRBlockRequest& request, const CreateCRBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCRBlockOutcomeCallable CreateCRBlockCallable(const Model::CreateCRBlockRequest& request);

                /**
                 *品牌经营管家-版权保护模块企业认证接口
                 * @param req CreateCRCompanyVerifyRequest
                 * @return CreateCRCompanyVerifyOutcome
                 */
                CreateCRCompanyVerifyOutcome CreateCRCompanyVerify(const Model::CreateCRCompanyVerifyRequest &request);
                void CreateCRCompanyVerifyAsync(const Model::CreateCRCompanyVerifyRequest& request, const CreateCRCompanyVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCRCompanyVerifyOutcomeCallable CreateCRCompanyVerifyCallable(const Model::CreateCRCompanyVerifyRequest& request);

                /**
                 *版权保护-新建发函接口
                 * @param req CreateCRRightRequest
                 * @return CreateCRRightOutcome
                 */
                CreateCRRightOutcome CreateCRRight(const Model::CreateCRRightRequest &request);
                void CreateCRRightAsync(const Model::CreateCRRightRequest& request, const CreateCRRightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCRRightOutcomeCallable CreateCRRightCallable(const Model::CreateCRRightRequest& request);

                /**
                 *版权保护-添加作品接口
                 * @param req CreateCRWorkRequest
                 * @return CreateCRWorkOutcome
                 */
                CreateCRWorkOutcome CreateCRWork(const Model::CreateCRWorkRequest &request);
                void CreateCRWorkAsync(const Model::CreateCRWorkRequest& request, const CreateCRWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCRWorkOutcomeCallable CreateCRWorkCallable(const Model::CreateCRWorkRequest& request);

                /**
                 *版权保护-查询作品监测详情接口
                 * @param req DescribeCRMonitorDetailRequest
                 * @return DescribeCRMonitorDetailOutcome
                 */
                DescribeCRMonitorDetailOutcome DescribeCRMonitorDetail(const Model::DescribeCRMonitorDetailRequest &request);
                void DescribeCRMonitorDetailAsync(const Model::DescribeCRMonitorDetailRequest& request, const DescribeCRMonitorDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCRMonitorDetailOutcomeCallable DescribeCRMonitorDetailCallable(const Model::DescribeCRMonitorDetailRequest& request);

                /**
                 *版权保护-查询监测列表接口
                 * @param req DescribeCRMonitorsRequest
                 * @return DescribeCRMonitorsOutcome
                 */
                DescribeCRMonitorsOutcome DescribeCRMonitors(const Model::DescribeCRMonitorsRequest &request);
                void DescribeCRMonitorsAsync(const Model::DescribeCRMonitorsRequest& request, const DescribeCRMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCRMonitorsOutcomeCallable DescribeCRMonitorsCallable(const Model::DescribeCRMonitorsRequest& request);

                /**
                 *查询作品基本信息
                 * @param req DescribeCRWorkInfoRequest
                 * @return DescribeCRWorkInfoOutcome
                 */
                DescribeCRWorkInfoOutcome DescribeCRWorkInfo(const Model::DescribeCRWorkInfoRequest &request);
                void DescribeCRWorkInfoAsync(const Model::DescribeCRWorkInfoRequest& request, const DescribeCRWorkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCRWorkInfoOutcomeCallable DescribeCRWorkInfoCallable(const Model::DescribeCRWorkInfoRequest& request);

                /**
                 *版权保护-拦截申请接口
                 * @param req ModifyCRBlockStatusRequest
                 * @return ModifyCRBlockStatusOutcome
                 */
                ModifyCRBlockStatusOutcome ModifyCRBlockStatus(const Model::ModifyCRBlockStatusRequest &request);
                void ModifyCRBlockStatusAsync(const Model::ModifyCRBlockStatusRequest& request, const ModifyCRBlockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCRBlockStatusOutcomeCallable ModifyCRBlockStatusCallable(const Model::ModifyCRBlockStatusRequest& request);

                /**
                 *版权保护-修改监测状态接口
                 * @param req ModifyCRMonitorRequest
                 * @return ModifyCRMonitorOutcome
                 */
                ModifyCRMonitorOutcome ModifyCRMonitor(const Model::ModifyCRMonitorRequest &request);
                void ModifyCRMonitorAsync(const Model::ModifyCRMonitorRequest& request, const ModifyCRMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCRMonitorOutcomeCallable ModifyCRMonitorCallable(const Model::ModifyCRMonitorRequest& request);

                /**
                 *申请取证
                 * @param req ModifyCRObtainStatusRequest
                 * @return ModifyCRObtainStatusOutcome
                 */
                ModifyCRObtainStatusOutcome ModifyCRObtainStatus(const Model::ModifyCRObtainStatusRequest &request);
                void ModifyCRObtainStatusAsync(const Model::ModifyCRObtainStatusRequest& request, const ModifyCRObtainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCRObtainStatusOutcomeCallable ModifyCRObtainStatusCallable(const Model::ModifyCRObtainStatusRequest& request);

                /**
                 *版权保护-维权申请接口
                 * @param req ModifyCRRightStatusRequest
                 * @return ModifyCRRightStatusOutcome
                 */
                ModifyCRRightStatusOutcome ModifyCRRightStatus(const Model::ModifyCRRightStatusRequest &request);
                void ModifyCRRightStatusAsync(const Model::ModifyCRRightStatusRequest& request, const ModifyCRRightStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCRRightStatusOutcomeCallable ModifyCRRightStatusCallable(const Model::ModifyCRRightStatusRequest& request);

                /**
                 *更新作品
                 * @param req UpdateCRWorkRequest
                 * @return UpdateCRWorkOutcome
                 */
                UpdateCRWorkOutcome UpdateCRWork(const Model::UpdateCRWorkRequest &request);
                void UpdateCRWorkAsync(const Model::UpdateCRWorkRequest& request, const UpdateCRWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCRWorkOutcomeCallable UpdateCRWorkCallable(const Model::UpdateCRWorkRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_BMACLIENT_H_
