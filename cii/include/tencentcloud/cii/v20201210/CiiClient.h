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

#ifndef TENCENTCLOUD_CII_V20201210_CIICLIENT_H_
#define TENCENTCLOUD_CII_V20201210_CIICLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cii/v20201210/model/CreateStructureTaskRequest.h>
#include <tencentcloud/cii/v20201210/model/CreateStructureTaskResponse.h>
#include <tencentcloud/cii/v20201210/model/DescribeStructCompareDataRequest.h>
#include <tencentcloud/cii/v20201210/model/DescribeStructCompareDataResponse.h>
#include <tencentcloud/cii/v20201210/model/DescribeStructureTaskResultRequest.h>
#include <tencentcloud/cii/v20201210/model/DescribeStructureTaskResultResponse.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20201210
        {
            class CiiClient : public AbstractClient
            {
            public:
                CiiClient(const Credential &credential, const std::string &region);
                CiiClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateStructureTaskResponse> CreateStructureTaskOutcome;
                typedef std::future<CreateStructureTaskOutcome> CreateStructureTaskOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::CreateStructureTaskRequest&, CreateStructureTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStructureTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStructCompareDataResponse> DescribeStructCompareDataOutcome;
                typedef std::future<DescribeStructCompareDataOutcome> DescribeStructCompareDataOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::DescribeStructCompareDataRequest&, DescribeStructCompareDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStructCompareDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStructureTaskResultResponse> DescribeStructureTaskResultOutcome;
                typedef std::future<DescribeStructureTaskResultOutcome> DescribeStructureTaskResultOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::DescribeStructureTaskResultRequest&, DescribeStructureTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStructureTaskResultAsyncHandler;



                /**
                 *基于提供的客户及保单信息，启动结构化识别任务。
                 * @param req CreateStructureTaskRequest
                 * @return CreateStructureTaskOutcome
                 */
                CreateStructureTaskOutcome CreateStructureTask(const Model::CreateStructureTaskRequest &request);
                void CreateStructureTaskAsync(const Model::CreateStructureTaskRequest& request, const CreateStructureTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStructureTaskOutcomeCallable CreateStructureTaskCallable(const Model::CreateStructureTaskRequest& request);

                /**
                 *结构化对比查询接口，对比结构化复核前后数据差异，查询识别正确率，召回率。
                 * @param req DescribeStructCompareDataRequest
                 * @return DescribeStructCompareDataOutcome
                 */
                DescribeStructCompareDataOutcome DescribeStructCompareData(const Model::DescribeStructCompareDataRequest &request);
                void DescribeStructCompareDataAsync(const Model::DescribeStructCompareDataRequest& request, const DescribeStructCompareDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStructCompareDataOutcomeCallable DescribeStructCompareDataCallable(const Model::DescribeStructCompareDataRequest& request);

                /**
                 *依据任务ID获取结构化结果接口。
                 * @param req DescribeStructureTaskResultRequest
                 * @return DescribeStructureTaskResultOutcome
                 */
                DescribeStructureTaskResultOutcome DescribeStructureTaskResult(const Model::DescribeStructureTaskResultRequest &request);
                void DescribeStructureTaskResultAsync(const Model::DescribeStructureTaskResultRequest& request, const DescribeStructureTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStructureTaskResultOutcomeCallable DescribeStructureTaskResultCallable(const Model::DescribeStructureTaskResultRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20201210_CIICLIENT_H_
