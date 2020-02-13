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

#ifndef TENCENTCLOUD_CME_V20191029_CMECLIENT_H_
#define TENCENTCLOUD_CME_V20191029_CMECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cme/v20191029/model/CreateProjectRequest.h>
#include <tencentcloud/cme/v20191029/model/CreateProjectResponse.h>
#include <tencentcloud/cme/v20191029/model/DeleteLoginStatusRequest.h>
#include <tencentcloud/cme/v20191029/model/DeleteLoginStatusResponse.h>
#include <tencentcloud/cme/v20191029/model/DeleteProjectRequest.h>
#include <tencentcloud/cme/v20191029/model/DeleteProjectResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeLoginStatusRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeLoginStatusResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeProjectsRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeProjectsResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeTasksRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeTasksResponse.h>
#include <tencentcloud/cme/v20191029/model/ExportVideoEditProjectRequest.h>
#include <tencentcloud/cme/v20191029/model/ExportVideoEditProjectResponse.h>
#include <tencentcloud/cme/v20191029/model/ImportMediaToProjectRequest.h>
#include <tencentcloud/cme/v20191029/model/ImportMediaToProjectResponse.h>
#include <tencentcloud/cme/v20191029/model/ModifyProjectRequest.h>
#include <tencentcloud/cme/v20191029/model/ModifyProjectResponse.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            class CmeClient : public AbstractClient
            {
            public:
                CmeClient(const Credential &credential, const std::string &region);
                CmeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
                typedef Outcome<Error, Model::DeleteLoginStatusResponse> DeleteLoginStatusOutcome;
                typedef std::future<DeleteLoginStatusOutcome> DeleteLoginStatusOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DeleteLoginStatusRequest&, DeleteLoginStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoginStatusAsyncHandler;
                typedef Outcome<Error, Model::DeleteProjectResponse> DeleteProjectOutcome;
                typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DeleteProjectRequest&, DeleteProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
                typedef Outcome<Error, Model::DescribeLoginStatusResponse> DescribeLoginStatusOutcome;
                typedef std::future<DescribeLoginStatusOutcome> DescribeLoginStatusOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeLoginStatusRequest&, DescribeLoginStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeProjectsResponse> DescribeProjectsOutcome;
                typedef std::future<DescribeProjectsOutcome> DescribeProjectsOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeProjectsRequest&, DescribeProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Error, Model::ExportVideoEditProjectResponse> ExportVideoEditProjectOutcome;
                typedef std::future<ExportVideoEditProjectOutcome> ExportVideoEditProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ExportVideoEditProjectRequest&, ExportVideoEditProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVideoEditProjectAsyncHandler;
                typedef Outcome<Error, Model::ImportMediaToProjectResponse> ImportMediaToProjectOutcome;
                typedef std::future<ImportMediaToProjectOutcome> ImportMediaToProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ImportMediaToProjectRequest&, ImportMediaToProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportMediaToProjectAsyncHandler;
                typedef Outcome<Error, Model::ModifyProjectResponse> ModifyProjectOutcome;
                typedef std::future<ModifyProjectOutcome> ModifyProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ModifyProjectRequest&, ModifyProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectAsyncHandler;



                /**
                 *创建云剪的编辑项目，支持创建视频剪辑及直播剪辑两大类项目。

                 * @param req CreateProjectRequest
                 * @return CreateProjectOutcome
                 */
                CreateProjectOutcome CreateProject(const Model::CreateProjectRequest &request);
                void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request);

                /**
                 *删除用户登录态，使用户登出云剪平台。
                 * @param req DeleteLoginStatusRequest
                 * @return DeleteLoginStatusOutcome
                 */
                DeleteLoginStatusOutcome DeleteLoginStatus(const Model::DeleteLoginStatusRequest &request);
                void DeleteLoginStatusAsync(const Model::DeleteLoginStatusRequest& request, const DeleteLoginStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoginStatusOutcomeCallable DeleteLoginStatusCallable(const Model::DeleteLoginStatusRequest& request);

                /**
                 *删除云剪编辑项目。
                 * @param req DeleteProjectRequest
                 * @return DeleteProjectOutcome
                 */
                DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest &request);
                void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request);

                /**
                 *查询指定用户的登录态。
                 * @param req DescribeLoginStatusRequest
                 * @return DescribeLoginStatusOutcome
                 */
                DescribeLoginStatusOutcome DescribeLoginStatus(const Model::DescribeLoginStatusRequest &request);
                void DescribeLoginStatusAsync(const Model::DescribeLoginStatusRequest& request, const DescribeLoginStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginStatusOutcomeCallable DescribeLoginStatusCallable(const Model::DescribeLoginStatusRequest& request);

                /**
                 *支持根据多种条件过滤出项目列表。
                 * @param req DescribeProjectsRequest
                 * @return DescribeProjectsOutcome
                 */
                DescribeProjectsOutcome DescribeProjects(const Model::DescribeProjectsRequest &request);
                void DescribeProjectsAsync(const Model::DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectsOutcomeCallable DescribeProjectsCallable(const Model::DescribeProjectsRequest& request);

                /**
                 *获取任务详情信息，包含下面几个部分：
<li>任务基础信息：包括任务状态、错误信息、创建时间等；</li>
<li>导出项目输出信息：包括输出的素材 Id 等。</li>
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 *支持各种条件筛选，返回对应的任务基础信息列表。
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *导出视频编辑项目，支持指定输出的模板。
                 * @param req ExportVideoEditProjectRequest
                 * @return ExportVideoEditProjectOutcome
                 */
                ExportVideoEditProjectOutcome ExportVideoEditProject(const Model::ExportVideoEditProjectRequest &request);
                void ExportVideoEditProjectAsync(const Model::ExportVideoEditProjectRequest& request, const ExportVideoEditProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVideoEditProjectOutcomeCallable ExportVideoEditProjectCallable(const Model::ExportVideoEditProjectRequest& request);

                /**
                 *将云点播中的媒资添加到素材库中，提供给后续的视频编辑。
                 * @param req ImportMediaToProjectRequest
                 * @return ImportMediaToProjectOutcome
                 */
                ImportMediaToProjectOutcome ImportMediaToProject(const Model::ImportMediaToProjectRequest &request);
                void ImportMediaToProjectAsync(const Model::ImportMediaToProjectRequest& request, const ImportMediaToProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportMediaToProjectOutcomeCallable ImportMediaToProjectCallable(const Model::ImportMediaToProjectRequest& request);

                /**
                 *修改云剪编辑项目的信息。
                 * @param req ModifyProjectRequest
                 * @return ModifyProjectOutcome
                 */
                ModifyProjectOutcome ModifyProject(const Model::ModifyProjectRequest &request);
                void ModifyProjectAsync(const Model::ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProjectOutcomeCallable ModifyProjectCallable(const Model::ModifyProjectRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_CMECLIENT_H_
