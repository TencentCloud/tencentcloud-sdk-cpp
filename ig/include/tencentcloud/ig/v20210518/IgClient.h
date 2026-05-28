/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IG_V20210518_IGCLIENT_H_
#define TENCENTCLOUD_IG_V20210518_IGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ig/v20210518/model/DescribeIgOrderListRequest.h>
#include <tencentcloud/ig/v20210518/model/DescribeIgOrderListResponse.h>
#include <tencentcloud/ig/v20210518/model/GetLLMDiagnosisDrugRequest.h>
#include <tencentcloud/ig/v20210518/model/GetLLMDiagnosisDrugResponse.h>
#include <tencentcloud/ig/v20210518/model/GetLLMDiagnosisDrugChatRequest.h>
#include <tencentcloud/ig/v20210518/model/GetLLMDiagnosisDrugChatResponse.h>
#include <tencentcloud/ig/v20210518/model/GetLLMDiagnosisHealthRequest.h>
#include <tencentcloud/ig/v20210518/model/GetLLMDiagnosisHealthResponse.h>
#include <tencentcloud/ig/v20210518/model/GetLLMReportInterpretationRequest.h>
#include <tencentcloud/ig/v20210518/model/GetLLMReportInterpretationResponse.h>
#include <tencentcloud/ig/v20210518/model/QueryDrugInstructionsRequest.h>
#include <tencentcloud/ig/v20210518/model/QueryDrugInstructionsResponse.h>


namespace TencentCloud
{
    namespace Ig
    {
        namespace V20210518
        {
            class IgClient : public AbstractClient
            {
            public:
                IgClient(const Credential &credential, const std::string &region);
                IgClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeIgOrderListResponse> DescribeIgOrderListOutcome;
                typedef std::future<DescribeIgOrderListOutcome> DescribeIgOrderListOutcomeCallable;
                typedef std::function<void(const IgClient*, const Model::DescribeIgOrderListRequest&, DescribeIgOrderListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIgOrderListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLLMDiagnosisDrugResponse> GetLLMDiagnosisDrugOutcome;
                typedef std::future<GetLLMDiagnosisDrugOutcome> GetLLMDiagnosisDrugOutcomeCallable;
                typedef std::function<void(const IgClient*, const Model::GetLLMDiagnosisDrugRequest&, GetLLMDiagnosisDrugOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLLMDiagnosisDrugAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLLMDiagnosisDrugChatResponse> GetLLMDiagnosisDrugChatOutcome;
                typedef std::future<GetLLMDiagnosisDrugChatOutcome> GetLLMDiagnosisDrugChatOutcomeCallable;
                typedef std::function<void(const IgClient*, const Model::GetLLMDiagnosisDrugChatRequest&, GetLLMDiagnosisDrugChatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLLMDiagnosisDrugChatAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLLMDiagnosisHealthResponse> GetLLMDiagnosisHealthOutcome;
                typedef std::future<GetLLMDiagnosisHealthOutcome> GetLLMDiagnosisHealthOutcomeCallable;
                typedef std::function<void(const IgClient*, const Model::GetLLMDiagnosisHealthRequest&, GetLLMDiagnosisHealthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLLMDiagnosisHealthAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLLMReportInterpretationResponse> GetLLMReportInterpretationOutcome;
                typedef std::future<GetLLMReportInterpretationOutcome> GetLLMReportInterpretationOutcomeCallable;
                typedef std::function<void(const IgClient*, const Model::GetLLMReportInterpretationRequest&, GetLLMReportInterpretationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLLMReportInterpretationAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryDrugInstructionsResponse> QueryDrugInstructionsOutcome;
                typedef std::future<QueryDrugInstructionsOutcome> QueryDrugInstructionsOutcomeCallable;
                typedef std::function<void(const IgClient*, const Model::QueryDrugInstructionsRequest&, QueryDrugInstructionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryDrugInstructionsAsyncHandler;



                /**
                 *查询智能导诊订单列表
                 * @param req DescribeIgOrderListRequest
                 * @return DescribeIgOrderListOutcome
                 */
                DescribeIgOrderListOutcome DescribeIgOrderList(const Model::DescribeIgOrderListRequest &request);
                void DescribeIgOrderListAsync(const Model::DescribeIgOrderListRequest& request, const DescribeIgOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIgOrderListOutcomeCallable DescribeIgOrderListCallable(const Model::DescribeIgOrderListRequest& request);

                /**
                 *大模型问药拍药盒
                 * @param req GetLLMDiagnosisDrugRequest
                 * @return GetLLMDiagnosisDrugOutcome
                 */
                GetLLMDiagnosisDrugOutcome GetLLMDiagnosisDrug(const Model::GetLLMDiagnosisDrugRequest &request);
                void GetLLMDiagnosisDrugAsync(const Model::GetLLMDiagnosisDrugRequest& request, const GetLLMDiagnosisDrugAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLLMDiagnosisDrugOutcomeCallable GetLLMDiagnosisDrugCallable(const Model::GetLLMDiagnosisDrugRequest& request);

                /**
                 *大模型问药问答
                 * @param req GetLLMDiagnosisDrugChatRequest
                 * @return GetLLMDiagnosisDrugChatOutcome
                 */
                GetLLMDiagnosisDrugChatOutcome GetLLMDiagnosisDrugChat(const Model::GetLLMDiagnosisDrugChatRequest &request);
                void GetLLMDiagnosisDrugChatAsync(const Model::GetLLMDiagnosisDrugChatRequest& request, const GetLLMDiagnosisDrugChatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLLMDiagnosisDrugChatOutcomeCallable GetLLMDiagnosisDrugChatCallable(const Model::GetLLMDiagnosisDrugChatRequest& request);

                /**
                 *大模型健康自诊
                 * @param req GetLLMDiagnosisHealthRequest
                 * @return GetLLMDiagnosisHealthOutcome
                 */
                GetLLMDiagnosisHealthOutcome GetLLMDiagnosisHealth(const Model::GetLLMDiagnosisHealthRequest &request);
                void GetLLMDiagnosisHealthAsync(const Model::GetLLMDiagnosisHealthRequest& request, const GetLLMDiagnosisHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLLMDiagnosisHealthOutcomeCallable GetLLMDiagnosisHealthCallable(const Model::GetLLMDiagnosisHealthRequest& request);

                /**
                 *大模型报告解读
                 * @param req GetLLMReportInterpretationRequest
                 * @return GetLLMReportInterpretationOutcome
                 */
                GetLLMReportInterpretationOutcome GetLLMReportInterpretation(const Model::GetLLMReportInterpretationRequest &request);
                void GetLLMReportInterpretationAsync(const Model::GetLLMReportInterpretationRequest& request, const GetLLMReportInterpretationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLLMReportInterpretationOutcomeCallable GetLLMReportInterpretationCallable(const Model::GetLLMReportInterpretationRequest& request);

                /**
                 *查询药品说明书
                 * @param req QueryDrugInstructionsRequest
                 * @return QueryDrugInstructionsOutcome
                 */
                QueryDrugInstructionsOutcome QueryDrugInstructions(const Model::QueryDrugInstructionsRequest &request);
                void QueryDrugInstructionsAsync(const Model::QueryDrugInstructionsRequest& request, const QueryDrugInstructionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryDrugInstructionsOutcomeCallable QueryDrugInstructionsCallable(const Model::QueryDrugInstructionsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IG_V20210518_IGCLIENT_H_
