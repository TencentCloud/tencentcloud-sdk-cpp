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

#ifndef TENCENTCLOUD_IRP_V20220324_IRPCLIENT_H_
#define TENCENTCLOUD_IRP_V20220324_IRPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/irp/v20220324/model/RecommendContentRequest.h>
#include <tencentcloud/irp/v20220324/model/RecommendContentResponse.h>
#include <tencentcloud/irp/v20220324/model/ReportActionRequest.h>
#include <tencentcloud/irp/v20220324/model/ReportActionResponse.h>
#include <tencentcloud/irp/v20220324/model/ReportMaterialRequest.h>
#include <tencentcloud/irp/v20220324/model/ReportMaterialResponse.h>
#include <tencentcloud/irp/v20220324/model/ReportPortraitRequest.h>
#include <tencentcloud/irp/v20220324/model/ReportPortraitResponse.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220324
        {
            class IrpClient : public AbstractClient
            {
            public:
                IrpClient(const Credential &credential, const std::string &region);
                IrpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::RecommendContentResponse> RecommendContentOutcome;
                typedef std::future<RecommendContentOutcome> RecommendContentOutcomeCallable;
                typedef std::function<void(const IrpClient*, const Model::RecommendContentRequest&, RecommendContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecommendContentAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportActionResponse> ReportActionOutcome;
                typedef std::future<ReportActionOutcome> ReportActionOutcomeCallable;
                typedef std::function<void(const IrpClient*, const Model::ReportActionRequest&, ReportActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportActionAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportMaterialResponse> ReportMaterialOutcome;
                typedef std::future<ReportMaterialOutcome> ReportMaterialOutcomeCallable;
                typedef std::function<void(const IrpClient*, const Model::ReportMaterialRequest&, ReportMaterialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportMaterialAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportPortraitResponse> ReportPortraitOutcome;
                typedef std::future<ReportPortraitOutcome> ReportPortraitOutcomeCallable;
                typedef std::function<void(const IrpClient*, const Model::ReportPortraitRequest&, ReportPortraitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportPortraitAsyncHandler;



                /**
                 *获取推荐结果
                 * @param req RecommendContentRequest
                 * @return RecommendContentOutcome
                 */
                RecommendContentOutcome RecommendContent(const Model::RecommendContentRequest &request);
                void RecommendContentAsync(const Model::RecommendContentRequest& request, const RecommendContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecommendContentOutcomeCallable RecommendContentCallable(const Model::RecommendContentRequest& request);

                /**
                 *上报行为
                 * @param req ReportActionRequest
                 * @return ReportActionOutcome
                 */
                ReportActionOutcome ReportAction(const Model::ReportActionRequest &request);
                void ReportActionAsync(const Model::ReportActionRequest& request, const ReportActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportActionOutcomeCallable ReportActionCallable(const Model::ReportActionRequest& request);

                /**
                 *上报物料
                 * @param req ReportMaterialRequest
                 * @return ReportMaterialOutcome
                 */
                ReportMaterialOutcome ReportMaterial(const Model::ReportMaterialRequest &request);
                void ReportMaterialAsync(const Model::ReportMaterialRequest& request, const ReportMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportMaterialOutcomeCallable ReportMaterialCallable(const Model::ReportMaterialRequest& request);

                /**
                 *上报用户画像
                 * @param req ReportPortraitRequest
                 * @return ReportPortraitOutcome
                 */
                ReportPortraitOutcome ReportPortrait(const Model::ReportPortraitRequest &request);
                void ReportPortraitAsync(const Model::ReportPortraitRequest& request, const ReportPortraitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportPortraitOutcomeCallable ReportPortraitCallable(const Model::ReportPortraitRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220324_IRPCLIENT_H_
