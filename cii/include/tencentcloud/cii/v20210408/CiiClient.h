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

#ifndef TENCENTCLOUD_CII_V20210408_CIICLIENT_H_
#define TENCENTCLOUD_CII_V20210408_CIICLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cii/v20210408/model/AddSubStructureTasksRequest.h>
#include <tencentcloud/cii/v20210408/model/AddSubStructureTasksResponse.h>
#include <tencentcloud/cii/v20210408/model/CreateAutoClassifyStructureTaskRequest.h>
#include <tencentcloud/cii/v20210408/model/CreateAutoClassifyStructureTaskResponse.h>
#include <tencentcloud/cii/v20210408/model/CreateStructureTaskRequest.h>
#include <tencentcloud/cii/v20210408/model/CreateStructureTaskResponse.h>
#include <tencentcloud/cii/v20210408/model/CreateUnderwriteTaskByIdRequest.h>
#include <tencentcloud/cii/v20210408/model/CreateUnderwriteTaskByIdResponse.h>
#include <tencentcloud/cii/v20210408/model/DescribeMachineUnderwriteRequest.h>
#include <tencentcloud/cii/v20210408/model/DescribeMachineUnderwriteResponse.h>
#include <tencentcloud/cii/v20210408/model/DescribeQualityScoreRequest.h>
#include <tencentcloud/cii/v20210408/model/DescribeQualityScoreResponse.h>
#include <tencentcloud/cii/v20210408/model/DescribeReportClassifyRequest.h>
#include <tencentcloud/cii/v20210408/model/DescribeReportClassifyResponse.h>
#include <tencentcloud/cii/v20210408/model/DescribeStructCompareDataRequest.h>
#include <tencentcloud/cii/v20210408/model/DescribeStructCompareDataResponse.h>
#include <tencentcloud/cii/v20210408/model/DescribeStructureDifferenceRequest.h>
#include <tencentcloud/cii/v20210408/model/DescribeStructureDifferenceResponse.h>
#include <tencentcloud/cii/v20210408/model/DescribeStructureResultRequest.h>
#include <tencentcloud/cii/v20210408/model/DescribeStructureResultResponse.h>
#include <tencentcloud/cii/v20210408/model/DescribeStructureTaskResultRequest.h>
#include <tencentcloud/cii/v20210408/model/DescribeStructureTaskResultResponse.h>
#include <tencentcloud/cii/v20210408/model/DescribeUnderwriteTaskRequest.h>
#include <tencentcloud/cii/v20210408/model/DescribeUnderwriteTaskResponse.h>
#include <tencentcloud/cii/v20210408/model/UploadMedicalFileRequest.h>
#include <tencentcloud/cii/v20210408/model/UploadMedicalFileResponse.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            class CiiClient : public AbstractClient
            {
            public:
                CiiClient(const Credential &credential, const std::string &region);
                CiiClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddSubStructureTasksResponse> AddSubStructureTasksOutcome;
                typedef std::future<AddSubStructureTasksOutcome> AddSubStructureTasksOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::AddSubStructureTasksRequest&, AddSubStructureTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddSubStructureTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAutoClassifyStructureTaskResponse> CreateAutoClassifyStructureTaskOutcome;
                typedef std::future<CreateAutoClassifyStructureTaskOutcome> CreateAutoClassifyStructureTaskOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::CreateAutoClassifyStructureTaskRequest&, CreateAutoClassifyStructureTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoClassifyStructureTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStructureTaskResponse> CreateStructureTaskOutcome;
                typedef std::future<CreateStructureTaskOutcome> CreateStructureTaskOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::CreateStructureTaskRequest&, CreateStructureTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStructureTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUnderwriteTaskByIdResponse> CreateUnderwriteTaskByIdOutcome;
                typedef std::future<CreateUnderwriteTaskByIdOutcome> CreateUnderwriteTaskByIdOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::CreateUnderwriteTaskByIdRequest&, CreateUnderwriteTaskByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUnderwriteTaskByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineUnderwriteResponse> DescribeMachineUnderwriteOutcome;
                typedef std::future<DescribeMachineUnderwriteOutcome> DescribeMachineUnderwriteOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::DescribeMachineUnderwriteRequest&, DescribeMachineUnderwriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineUnderwriteAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQualityScoreResponse> DescribeQualityScoreOutcome;
                typedef std::future<DescribeQualityScoreOutcome> DescribeQualityScoreOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::DescribeQualityScoreRequest&, DescribeQualityScoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQualityScoreAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReportClassifyResponse> DescribeReportClassifyOutcome;
                typedef std::future<DescribeReportClassifyOutcome> DescribeReportClassifyOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::DescribeReportClassifyRequest&, DescribeReportClassifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReportClassifyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStructCompareDataResponse> DescribeStructCompareDataOutcome;
                typedef std::future<DescribeStructCompareDataOutcome> DescribeStructCompareDataOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::DescribeStructCompareDataRequest&, DescribeStructCompareDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStructCompareDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStructureDifferenceResponse> DescribeStructureDifferenceOutcome;
                typedef std::future<DescribeStructureDifferenceOutcome> DescribeStructureDifferenceOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::DescribeStructureDifferenceRequest&, DescribeStructureDifferenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStructureDifferenceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStructureResultResponse> DescribeStructureResultOutcome;
                typedef std::future<DescribeStructureResultOutcome> DescribeStructureResultOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::DescribeStructureResultRequest&, DescribeStructureResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStructureResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStructureTaskResultResponse> DescribeStructureTaskResultOutcome;
                typedef std::future<DescribeStructureTaskResultOutcome> DescribeStructureTaskResultOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::DescribeStructureTaskResultRequest&, DescribeStructureTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStructureTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnderwriteTaskResponse> DescribeUnderwriteTaskOutcome;
                typedef std::future<DescribeUnderwriteTaskOutcome> DescribeUnderwriteTaskOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::DescribeUnderwriteTaskRequest&, DescribeUnderwriteTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnderwriteTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadMedicalFileResponse> UploadMedicalFileOutcome;
                typedef std::future<UploadMedicalFileOutcome> UploadMedicalFileOutcomeCallable;
                typedef std::function<void(const CiiClient*, const Model::UploadMedicalFileRequest&, UploadMedicalFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadMedicalFileAsyncHandler;



                /**
                 *如果主任务下的报告不满足需求，可以基于主任务批量添加子任务
                 * @param req AddSubStructureTasksRequest
                 * @return AddSubStructureTasksOutcome
                 */
                AddSubStructureTasksOutcome AddSubStructureTasks(const Model::AddSubStructureTasksRequest &request);
                void AddSubStructureTasksAsync(const Model::AddSubStructureTasksRequest& request, const AddSubStructureTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddSubStructureTasksOutcomeCallable AddSubStructureTasksCallable(const Model::AddSubStructureTasksRequest& request);

                /**
                 *本接口(CreateAutoClassifyStructureTask)基于提供的客户及保单信息，创建并启动结构化识别任务。
                 * @param req CreateAutoClassifyStructureTaskRequest
                 * @return CreateAutoClassifyStructureTaskOutcome
                 */
                CreateAutoClassifyStructureTaskOutcome CreateAutoClassifyStructureTask(const Model::CreateAutoClassifyStructureTaskRequest &request);
                void CreateAutoClassifyStructureTaskAsync(const Model::CreateAutoClassifyStructureTaskRequest& request, const CreateAutoClassifyStructureTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAutoClassifyStructureTaskOutcomeCallable CreateAutoClassifyStructureTaskCallable(const Model::CreateAutoClassifyStructureTaskRequest& request);

                /**
                 *本接口(CreateStructureTask)基于提供的客户及保单信息，创建并启动结构化识别任务。
                 * @param req CreateStructureTaskRequest
                 * @return CreateStructureTaskOutcome
                 */
                CreateStructureTaskOutcome CreateStructureTask(const Model::CreateStructureTaskRequest &request);
                void CreateStructureTaskAsync(const Model::CreateStructureTaskRequest& request, const CreateStructureTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStructureTaskOutcomeCallable CreateStructureTaskCallable(const Model::CreateStructureTaskRequest& request);

                /**
                 *本接口(CreateUnderwriteTaskById)用于根据结构化任务ID创建核保任务
                 * @param req CreateUnderwriteTaskByIdRequest
                 * @return CreateUnderwriteTaskByIdOutcome
                 */
                CreateUnderwriteTaskByIdOutcome CreateUnderwriteTaskById(const Model::CreateUnderwriteTaskByIdRequest &request);
                void CreateUnderwriteTaskByIdAsync(const Model::CreateUnderwriteTaskByIdRequest& request, const CreateUnderwriteTaskByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUnderwriteTaskByIdOutcomeCallable CreateUnderwriteTaskByIdCallable(const Model::CreateUnderwriteTaskByIdRequest& request);

                /**
                 *本接口(DescribeMachineUnderwrite)用于查询机器核保任务数据
                 * @param req DescribeMachineUnderwriteRequest
                 * @return DescribeMachineUnderwriteOutcome
                 */
                DescribeMachineUnderwriteOutcome DescribeMachineUnderwrite(const Model::DescribeMachineUnderwriteRequest &request);
                void DescribeMachineUnderwriteAsync(const Model::DescribeMachineUnderwriteRequest& request, const DescribeMachineUnderwriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineUnderwriteOutcomeCallable DescribeMachineUnderwriteCallable(const Model::DescribeMachineUnderwriteRequest& request);

                /**
                 *获取图片质量分
                 * @param req DescribeQualityScoreRequest
                 * @return DescribeQualityScoreOutcome
                 */
                DescribeQualityScoreOutcome DescribeQualityScore(const Model::DescribeQualityScoreRequest &request);
                void DescribeQualityScoreAsync(const Model::DescribeQualityScoreRequest& request, const DescribeQualityScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQualityScoreOutcomeCallable DescribeQualityScoreCallable(const Model::DescribeQualityScoreRequest& request);

                /**
                 *辅助用户对批量报告自动分类
                 * @param req DescribeReportClassifyRequest
                 * @return DescribeReportClassifyOutcome
                 */
                DescribeReportClassifyOutcome DescribeReportClassify(const Model::DescribeReportClassifyRequest &request);
                void DescribeReportClassifyAsync(const Model::DescribeReportClassifyRequest& request, const DescribeReportClassifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReportClassifyOutcomeCallable DescribeReportClassifyCallable(const Model::DescribeReportClassifyRequest& request);

                /**
                 *结构化对比查询接口，对比结构化复核前后数据差异，查询识别正确率，召回率。
                 * @param req DescribeStructCompareDataRequest
                 * @return DescribeStructCompareDataOutcome
                 */
                DescribeStructCompareDataOutcome DescribeStructCompareData(const Model::DescribeStructCompareDataRequest &request);
                void DescribeStructCompareDataAsync(const Model::DescribeStructCompareDataRequest& request, const DescribeStructCompareDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStructCompareDataOutcomeCallable DescribeStructCompareDataCallable(const Model::DescribeStructCompareDataRequest& request);

                /**
                 *结构化复核差异查询接口，对比结构化复核前后数据差异，返回差异的部分。
                 * @param req DescribeStructureDifferenceRequest
                 * @return DescribeStructureDifferenceOutcome
                 */
                DescribeStructureDifferenceOutcome DescribeStructureDifference(const Model::DescribeStructureDifferenceRequest &request);
                void DescribeStructureDifferenceAsync(const Model::DescribeStructureDifferenceRequest& request, const DescribeStructureDifferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStructureDifferenceOutcomeCallable DescribeStructureDifferenceCallable(const Model::DescribeStructureDifferenceRequest& request);

                /**
                 *本接口(DescribeStructureResult)用于查询结构化结果接口
                 * @param req DescribeStructureResultRequest
                 * @return DescribeStructureResultOutcome
                 */
                DescribeStructureResultOutcome DescribeStructureResult(const Model::DescribeStructureResultRequest &request);
                void DescribeStructureResultAsync(const Model::DescribeStructureResultRequest& request, const DescribeStructureResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStructureResultOutcomeCallable DescribeStructureResultCallable(const Model::DescribeStructureResultRequest& request);

                /**
                 *依据任务ID获取结构化结果接口。
                 * @param req DescribeStructureTaskResultRequest
                 * @return DescribeStructureTaskResultOutcome
                 */
                DescribeStructureTaskResultOutcome DescribeStructureTaskResult(const Model::DescribeStructureTaskResultRequest &request);
                void DescribeStructureTaskResultAsync(const Model::DescribeStructureTaskResultRequest& request, const DescribeStructureTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStructureTaskResultOutcomeCallable DescribeStructureTaskResultCallable(const Model::DescribeStructureTaskResultRequest& request);

                /**
                 *本接口(DescribeUnderwriteTask)用于查询核保任务结果
                 * @param req DescribeUnderwriteTaskRequest
                 * @return DescribeUnderwriteTaskOutcome
                 */
                DescribeUnderwriteTaskOutcome DescribeUnderwriteTask(const Model::DescribeUnderwriteTaskRequest &request);
                void DescribeUnderwriteTaskAsync(const Model::DescribeUnderwriteTaskRequest& request, const DescribeUnderwriteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnderwriteTaskOutcomeCallable DescribeUnderwriteTaskCallable(const Model::DescribeUnderwriteTaskRequest& request);

                /**
                 *上传医疗影像文件，可以用来做结构化。
                 * @param req UploadMedicalFileRequest
                 * @return UploadMedicalFileOutcome
                 */
                UploadMedicalFileOutcome UploadMedicalFile(const Model::UploadMedicalFileRequest &request);
                void UploadMedicalFileAsync(const Model::UploadMedicalFileRequest& request, const UploadMedicalFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadMedicalFileOutcomeCallable UploadMedicalFileCallable(const Model::UploadMedicalFileRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_CIICLIENT_H_
