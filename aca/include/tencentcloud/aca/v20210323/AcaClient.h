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

#ifndef TENCENTCLOUD_ACA_V20210323_ACACLIENT_H_
#define TENCENTCLOUD_ACA_V20210323_ACACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/aca/v20210323/model/GetDrugIndicationsRequest.h>
#include <tencentcloud/aca/v20210323/model/GetDrugIndicationsResponse.h>
#include <tencentcloud/aca/v20210323/model/LoginHisToolRequest.h>
#include <tencentcloud/aca/v20210323/model/LoginHisToolResponse.h>
#include <tencentcloud/aca/v20210323/model/LoginOutHisToolRequest.h>
#include <tencentcloud/aca/v20210323/model/LoginOutHisToolResponse.h>
#include <tencentcloud/aca/v20210323/model/SmartDrugInfoRequest.h>
#include <tencentcloud/aca/v20210323/model/SmartDrugInfoResponse.h>
#include <tencentcloud/aca/v20210323/model/SmartPredictRequest.h>
#include <tencentcloud/aca/v20210323/model/SmartPredictResponse.h>
#include <tencentcloud/aca/v20210323/model/SyncDepartmentRequest.h>
#include <tencentcloud/aca/v20210323/model/SyncDepartmentResponse.h>
#include <tencentcloud/aca/v20210323/model/SyncStandardDictRequest.h>
#include <tencentcloud/aca/v20210323/model/SyncStandardDictResponse.h>
#include <tencentcloud/aca/v20210323/model/UploadDrugsRequest.h>
#include <tencentcloud/aca/v20210323/model/UploadDrugsResponse.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            class AcaClient : public AbstractClient
            {
            public:
                AcaClient(const Credential &credential, const std::string &region);
                AcaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::GetDrugIndicationsResponse> GetDrugIndicationsOutcome;
                typedef std::future<GetDrugIndicationsOutcome> GetDrugIndicationsOutcomeCallable;
                typedef std::function<void(const AcaClient*, const Model::GetDrugIndicationsRequest&, GetDrugIndicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDrugIndicationsAsyncHandler;
                typedef Outcome<Core::Error, Model::LoginHisToolResponse> LoginHisToolOutcome;
                typedef std::future<LoginHisToolOutcome> LoginHisToolOutcomeCallable;
                typedef std::function<void(const AcaClient*, const Model::LoginHisToolRequest&, LoginHisToolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LoginHisToolAsyncHandler;
                typedef Outcome<Core::Error, Model::LoginOutHisToolResponse> LoginOutHisToolOutcome;
                typedef std::future<LoginOutHisToolOutcome> LoginOutHisToolOutcomeCallable;
                typedef std::function<void(const AcaClient*, const Model::LoginOutHisToolRequest&, LoginOutHisToolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LoginOutHisToolAsyncHandler;
                typedef Outcome<Core::Error, Model::SmartDrugInfoResponse> SmartDrugInfoOutcome;
                typedef std::future<SmartDrugInfoOutcome> SmartDrugInfoOutcomeCallable;
                typedef std::function<void(const AcaClient*, const Model::SmartDrugInfoRequest&, SmartDrugInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SmartDrugInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::SmartPredictResponse> SmartPredictOutcome;
                typedef std::future<SmartPredictOutcome> SmartPredictOutcomeCallable;
                typedef std::function<void(const AcaClient*, const Model::SmartPredictRequest&, SmartPredictOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SmartPredictAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncDepartmentResponse> SyncDepartmentOutcome;
                typedef std::future<SyncDepartmentOutcome> SyncDepartmentOutcomeCallable;
                typedef std::function<void(const AcaClient*, const Model::SyncDepartmentRequest&, SyncDepartmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncDepartmentAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncStandardDictResponse> SyncStandardDictOutcome;
                typedef std::future<SyncStandardDictOutcome> SyncStandardDictOutcomeCallable;
                typedef std::function<void(const AcaClient*, const Model::SyncStandardDictRequest&, SyncStandardDictOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncStandardDictAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadDrugsResponse> UploadDrugsOutcome;
                typedef std::future<UploadDrugsOutcome> UploadDrugsOutcomeCallable;
                typedef std::function<void(const AcaClient*, const Model::UploadDrugsRequest&, UploadDrugsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadDrugsAsyncHandler;



                /**
                 *药品适应症接口
                 * @param req GetDrugIndicationsRequest
                 * @return GetDrugIndicationsOutcome
                 */
                GetDrugIndicationsOutcome GetDrugIndications(const Model::GetDrugIndicationsRequest &request);
                void GetDrugIndicationsAsync(const Model::GetDrugIndicationsRequest& request, const GetDrugIndicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDrugIndicationsOutcomeCallable GetDrugIndicationsCallable(const Model::GetDrugIndicationsRequest& request);

                /**
                 *登录获取token
                 * @param req LoginHisToolRequest
                 * @return LoginHisToolOutcome
                 */
                LoginHisToolOutcome LoginHisTool(const Model::LoginHisToolRequest &request);
                void LoginHisToolAsync(const Model::LoginHisToolRequest& request, const LoginHisToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LoginHisToolOutcomeCallable LoginHisToolCallable(const Model::LoginHisToolRequest& request);

                /**
                 *登出
                 * @param req LoginOutHisToolRequest
                 * @return LoginOutHisToolOutcome
                 */
                LoginOutHisToolOutcome LoginOutHisTool(const Model::LoginOutHisToolRequest &request);
                void LoginOutHisToolAsync(const Model::LoginOutHisToolRequest& request, const LoginOutHisToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LoginOutHisToolOutcomeCallable LoginOutHisToolCallable(const Model::LoginOutHisToolRequest& request);

                /**
                 *智能用药接口
                 * @param req SmartDrugInfoRequest
                 * @return SmartDrugInfoOutcome
                 */
                SmartDrugInfoOutcome SmartDrugInfo(const Model::SmartDrugInfoRequest &request);
                void SmartDrugInfoAsync(const Model::SmartDrugInfoRequest& request, const SmartDrugInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SmartDrugInfoOutcomeCallable SmartDrugInfoCallable(const Model::SmartDrugInfoRequest& request);

                /**
                 *辅诊智能预测接口
                 * @param req SmartPredictRequest
                 * @return SmartPredictOutcome
                 */
                SmartPredictOutcome SmartPredict(const Model::SmartPredictRequest &request);
                void SmartPredictAsync(const Model::SmartPredictRequest& request, const SmartPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SmartPredictOutcomeCallable SmartPredictCallable(const Model::SmartPredictRequest& request);

                /**
                 *用于院方科室管理，获取科室列表和状态、新增或修改科室信息、删除科室。
                 * @param req SyncDepartmentRequest
                 * @return SyncDepartmentOutcome
                 */
                SyncDepartmentOutcome SyncDepartment(const Model::SyncDepartmentRequest &request);
                void SyncDepartmentAsync(const Model::SyncDepartmentRequest& request, const SyncDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncDepartmentOutcomeCallable SyncDepartmentCallable(const Model::SyncDepartmentRequest& request);

                /**
                 *同步标准字典，如给药频次、给药途径、科室、诊断等
                 * @param req SyncStandardDictRequest
                 * @return SyncStandardDictOutcome
                 */
                SyncStandardDictOutcome SyncStandardDict(const Model::SyncStandardDictRequest &request);
                void SyncStandardDictAsync(const Model::SyncStandardDictRequest& request, const SyncStandardDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncStandardDictOutcomeCallable SyncStandardDictCallable(const Model::SyncStandardDictRequest& request);

                /**
                 *药品同步，一次同步数据不要超过500个
                 * @param req UploadDrugsRequest
                 * @return UploadDrugsOutcome
                 */
                UploadDrugsOutcome UploadDrugs(const Model::UploadDrugsRequest &request);
                void UploadDrugsAsync(const Model::UploadDrugsRequest& request, const UploadDrugsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadDrugsOutcomeCallable UploadDrugsCallable(const Model::UploadDrugsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_ACACLIENT_H_
