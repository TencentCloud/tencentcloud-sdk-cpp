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

#ifndef TENCENTCLOUD_APCAS_V20201127_APCASCLIENT_H_
#define TENCENTCLOUD_APCAS_V20201127_APCASCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/apcas/v20201127/model/GetTaskDetailRequest.h>
#include <tencentcloud/apcas/v20201127/model/GetTaskDetailResponse.h>
#include <tencentcloud/apcas/v20201127/model/GetTaskListRequest.h>
#include <tencentcloud/apcas/v20201127/model/GetTaskListResponse.h>
#include <tencentcloud/apcas/v20201127/model/PredictRatingRequest.h>
#include <tencentcloud/apcas/v20201127/model/PredictRatingResponse.h>
#include <tencentcloud/apcas/v20201127/model/QueryCallDetailsRequest.h>
#include <tencentcloud/apcas/v20201127/model/QueryCallDetailsResponse.h>
#include <tencentcloud/apcas/v20201127/model/QueryCallStatRequest.h>
#include <tencentcloud/apcas/v20201127/model/QueryCallStatResponse.h>
#include <tencentcloud/apcas/v20201127/model/QueryGeneralStatRequest.h>
#include <tencentcloud/apcas/v20201127/model/QueryGeneralStatResponse.h>
#include <tencentcloud/apcas/v20201127/model/UploadIdRequest.h>
#include <tencentcloud/apcas/v20201127/model/UploadIdResponse.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            class ApcasClient : public AbstractClient
            {
            public:
                ApcasClient(const Credential &credential, const std::string &region);
                ApcasClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::GetTaskDetailResponse> GetTaskDetailOutcome;
                typedef std::future<GetTaskDetailOutcome> GetTaskDetailOutcomeCallable;
                typedef std::function<void(const ApcasClient*, const Model::GetTaskDetailRequest&, GetTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskListResponse> GetTaskListOutcome;
                typedef std::future<GetTaskListOutcome> GetTaskListOutcomeCallable;
                typedef std::function<void(const ApcasClient*, const Model::GetTaskListRequest&, GetTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::PredictRatingResponse> PredictRatingOutcome;
                typedef std::future<PredictRatingOutcome> PredictRatingOutcomeCallable;
                typedef std::function<void(const ApcasClient*, const Model::PredictRatingRequest&, PredictRatingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PredictRatingAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCallDetailsResponse> QueryCallDetailsOutcome;
                typedef std::future<QueryCallDetailsOutcome> QueryCallDetailsOutcomeCallable;
                typedef std::function<void(const ApcasClient*, const Model::QueryCallDetailsRequest&, QueryCallDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCallDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCallStatResponse> QueryCallStatOutcome;
                typedef std::future<QueryCallStatOutcome> QueryCallStatOutcomeCallable;
                typedef std::function<void(const ApcasClient*, const Model::QueryCallStatRequest&, QueryCallStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCallStatAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryGeneralStatResponse> QueryGeneralStatOutcome;
                typedef std::future<QueryGeneralStatOutcome> QueryGeneralStatOutcomeCallable;
                typedef std::function<void(const ApcasClient*, const Model::QueryGeneralStatRequest&, QueryGeneralStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryGeneralStatAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadIdResponse> UploadIdOutcome;
                typedef std::future<UploadIdOutcome> UploadIdOutcomeCallable;
                typedef std::function<void(const ApcasClient*, const Model::UploadIdRequest&, UploadIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadIdAsyncHandler;



                /**
                 *查询画像洞察任务详情
                 * @param req GetTaskDetailRequest
                 * @return GetTaskDetailOutcome
                 */
                GetTaskDetailOutcome GetTaskDetail(const Model::GetTaskDetailRequest &request);
                void GetTaskDetailAsync(const Model::GetTaskDetailRequest& request, const GetTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskDetailOutcomeCallable GetTaskDetailCallable(const Model::GetTaskDetailRequest& request);

                /**
                 *查询当前账号AppID下的画像洞察任务列表
                 * @param req GetTaskListRequest
                 * @return GetTaskListOutcome
                 */
                GetTaskListOutcome GetTaskList(const Model::GetTaskListRequest &request);
                void GetTaskListAsync(const Model::GetTaskListRequest& request, const GetTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskListOutcomeCallable GetTaskListCallable(const Model::GetTaskListRequest& request);

                /**
                 *根据传入的设备号（IMEI、IDFA、手机号、手机号MD5），返回意向评级结果
                 * @param req PredictRatingRequest
                 * @return PredictRatingOutcome
                 */
                PredictRatingOutcome PredictRating(const Model::PredictRatingRequest &request);
                void PredictRatingAsync(const Model::PredictRatingRequest& request, const PredictRatingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PredictRatingOutcomeCallable PredictRatingCallable(const Model::PredictRatingRequest& request);

                /**
                 *查询调用明细
                 * @param req QueryCallDetailsRequest
                 * @return QueryCallDetailsOutcome
                 */
                QueryCallDetailsOutcome QueryCallDetails(const Model::QueryCallDetailsRequest &request);
                void QueryCallDetailsAsync(const Model::QueryCallDetailsRequest& request, const QueryCallDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCallDetailsOutcomeCallable QueryCallDetailsCallable(const Model::QueryCallDetailsRequest& request);

                /**
                 *按时间维度获取调用量统计
                 * @param req QueryCallStatRequest
                 * @return QueryCallStatOutcome
                 */
                QueryCallStatOutcome QueryCallStat(const Model::QueryCallStatRequest &request);
                void QueryCallStatAsync(const Model::QueryCallStatRequest& request, const QueryCallStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCallStatOutcomeCallable QueryCallStatCallable(const Model::QueryCallStatRequest& request);

                /**
                 *获取日/月/周/总调用量统计数据
                 * @param req QueryGeneralStatRequest
                 * @return QueryGeneralStatOutcome
                 */
                QueryGeneralStatOutcome QueryGeneralStat(const Model::QueryGeneralStatRequest &request);
                void QueryGeneralStatAsync(const Model::QueryGeneralStatRequest& request, const QueryGeneralStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryGeneralStatOutcomeCallable QueryGeneralStatCallable(const Model::QueryGeneralStatRequest& request);

                /**
                 *上传群体画像的ID列表（支持的ID类型：0:imei 7:IDFA 8:MD5(imei)），后台返回生成的画像分析任务ID
                 * @param req UploadIdRequest
                 * @return UploadIdOutcome
                 */
                UploadIdOutcome UploadId(const Model::UploadIdRequest &request);
                void UploadIdAsync(const Model::UploadIdRequest& request, const UploadIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadIdOutcomeCallable UploadIdCallable(const Model::UploadIdRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_APCASCLIENT_H_
