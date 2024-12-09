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

#ifndef TENCENTCLOUD_IVLD_V20210903_IVLDCLIENT_H_
#define TENCENTCLOUD_IVLD_V20210903_IVLDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ivld/v20210903/model/AddCustomPersonImageRequest.h>
#include <tencentcloud/ivld/v20210903/model/AddCustomPersonImageResponse.h>
#include <tencentcloud/ivld/v20210903/model/CreateCustomCategoryRequest.h>
#include <tencentcloud/ivld/v20210903/model/CreateCustomCategoryResponse.h>
#include <tencentcloud/ivld/v20210903/model/CreateCustomGroupRequest.h>
#include <tencentcloud/ivld/v20210903/model/CreateCustomGroupResponse.h>
#include <tencentcloud/ivld/v20210903/model/CreateCustomPersonRequest.h>
#include <tencentcloud/ivld/v20210903/model/CreateCustomPersonResponse.h>
#include <tencentcloud/ivld/v20210903/model/CreateDefaultCategoriesRequest.h>
#include <tencentcloud/ivld/v20210903/model/CreateDefaultCategoriesResponse.h>
#include <tencentcloud/ivld/v20210903/model/CreateTaskRequest.h>
#include <tencentcloud/ivld/v20210903/model/CreateTaskResponse.h>
#include <tencentcloud/ivld/v20210903/model/CreateVideoSummaryTaskRequest.h>
#include <tencentcloud/ivld/v20210903/model/CreateVideoSummaryTaskResponse.h>
#include <tencentcloud/ivld/v20210903/model/DeleteCustomCategoryRequest.h>
#include <tencentcloud/ivld/v20210903/model/DeleteCustomCategoryResponse.h>
#include <tencentcloud/ivld/v20210903/model/DeleteCustomPersonRequest.h>
#include <tencentcloud/ivld/v20210903/model/DeleteCustomPersonResponse.h>
#include <tencentcloud/ivld/v20210903/model/DeleteCustomPersonImageRequest.h>
#include <tencentcloud/ivld/v20210903/model/DeleteCustomPersonImageResponse.h>
#include <tencentcloud/ivld/v20210903/model/DeleteMediaRequest.h>
#include <tencentcloud/ivld/v20210903/model/DeleteMediaResponse.h>
#include <tencentcloud/ivld/v20210903/model/DeleteTaskRequest.h>
#include <tencentcloud/ivld/v20210903/model/DeleteTaskResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeCustomCategoriesRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeCustomCategoriesResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeCustomGroupRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeCustomGroupResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeCustomPersonDetailRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeCustomPersonDetailResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeCustomPersonsRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeCustomPersonsResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeMediaRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeMediaResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeMediasRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeMediasResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeTaskRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeTaskResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeTasksRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeTasksResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeUsageAmountRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeUsageAmountResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeVideoSummaryDetailRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeVideoSummaryDetailResponse.h>
#include <tencentcloud/ivld/v20210903/model/ImportMediaRequest.h>
#include <tencentcloud/ivld/v20210903/model/ImportMediaResponse.h>
#include <tencentcloud/ivld/v20210903/model/ModifyCallbackRequest.h>
#include <tencentcloud/ivld/v20210903/model/ModifyCallbackResponse.h>
#include <tencentcloud/ivld/v20210903/model/QueryCallbackRequest.h>
#include <tencentcloud/ivld/v20210903/model/QueryCallbackResponse.h>
#include <tencentcloud/ivld/v20210903/model/UpdateCustomCategoryRequest.h>
#include <tencentcloud/ivld/v20210903/model/UpdateCustomCategoryResponse.h>
#include <tencentcloud/ivld/v20210903/model/UpdateCustomPersonRequest.h>
#include <tencentcloud/ivld/v20210903/model/UpdateCustomPersonResponse.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            class IvldClient : public AbstractClient
            {
            public:
                IvldClient(const Credential &credential, const std::string &region);
                IvldClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddCustomPersonImageResponse> AddCustomPersonImageOutcome;
                typedef std::future<AddCustomPersonImageOutcome> AddCustomPersonImageOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::AddCustomPersonImageRequest&, AddCustomPersonImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCustomPersonImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomCategoryResponse> CreateCustomCategoryOutcome;
                typedef std::future<CreateCustomCategoryOutcome> CreateCustomCategoryOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::CreateCustomCategoryRequest&, CreateCustomCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomGroupResponse> CreateCustomGroupOutcome;
                typedef std::future<CreateCustomGroupOutcome> CreateCustomGroupOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::CreateCustomGroupRequest&, CreateCustomGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomPersonResponse> CreateCustomPersonOutcome;
                typedef std::future<CreateCustomPersonOutcome> CreateCustomPersonOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::CreateCustomPersonRequest&, CreateCustomPersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomPersonAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDefaultCategoriesResponse> CreateDefaultCategoriesOutcome;
                typedef std::future<CreateDefaultCategoriesOutcome> CreateDefaultCategoriesOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::CreateDefaultCategoriesRequest&, CreateDefaultCategoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDefaultCategoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskResponse> CreateTaskOutcome;
                typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::CreateTaskRequest&, CreateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVideoSummaryTaskResponse> CreateVideoSummaryTaskOutcome;
                typedef std::future<CreateVideoSummaryTaskOutcome> CreateVideoSummaryTaskOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::CreateVideoSummaryTaskRequest&, CreateVideoSummaryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoSummaryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomCategoryResponse> DeleteCustomCategoryOutcome;
                typedef std::future<DeleteCustomCategoryOutcome> DeleteCustomCategoryOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DeleteCustomCategoryRequest&, DeleteCustomCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomPersonResponse> DeleteCustomPersonOutcome;
                typedef std::future<DeleteCustomPersonOutcome> DeleteCustomPersonOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DeleteCustomPersonRequest&, DeleteCustomPersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomPersonAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomPersonImageResponse> DeleteCustomPersonImageOutcome;
                typedef std::future<DeleteCustomPersonImageOutcome> DeleteCustomPersonImageOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DeleteCustomPersonImageRequest&, DeleteCustomPersonImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomPersonImageAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMediaResponse> DeleteMediaOutcome;
                typedef std::future<DeleteMediaOutcome> DeleteMediaOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DeleteMediaRequest&, DeleteMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTaskResponse> DeleteTaskOutcome;
                typedef std::future<DeleteTaskOutcome> DeleteTaskOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DeleteTaskRequest&, DeleteTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomCategoriesResponse> DescribeCustomCategoriesOutcome;
                typedef std::future<DescribeCustomCategoriesOutcome> DescribeCustomCategoriesOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeCustomCategoriesRequest&, DescribeCustomCategoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomCategoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomGroupResponse> DescribeCustomGroupOutcome;
                typedef std::future<DescribeCustomGroupOutcome> DescribeCustomGroupOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeCustomGroupRequest&, DescribeCustomGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomPersonDetailResponse> DescribeCustomPersonDetailOutcome;
                typedef std::future<DescribeCustomPersonDetailOutcome> DescribeCustomPersonDetailOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeCustomPersonDetailRequest&, DescribeCustomPersonDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomPersonDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomPersonsResponse> DescribeCustomPersonsOutcome;
                typedef std::future<DescribeCustomPersonsOutcome> DescribeCustomPersonsOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeCustomPersonsRequest&, DescribeCustomPersonsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomPersonsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMediaResponse> DescribeMediaOutcome;
                typedef std::future<DescribeMediaOutcome> DescribeMediaOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeMediaRequest&, DescribeMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMediasResponse> DescribeMediasOutcome;
                typedef std::future<DescribeMediasOutcome> DescribeMediasOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeMediasRequest&, DescribeMediasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResponse> DescribeTaskOutcome;
                typedef std::future<DescribeTaskOutcome> DescribeTaskOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeTaskRequest&, DescribeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsageAmountResponse> DescribeUsageAmountOutcome;
                typedef std::future<DescribeUsageAmountOutcome> DescribeUsageAmountOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeUsageAmountRequest&, DescribeUsageAmountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsageAmountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoSummaryDetailResponse> DescribeVideoSummaryDetailOutcome;
                typedef std::future<DescribeVideoSummaryDetailOutcome> DescribeVideoSummaryDetailOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeVideoSummaryDetailRequest&, DescribeVideoSummaryDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoSummaryDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportMediaResponse> ImportMediaOutcome;
                typedef std::future<ImportMediaOutcome> ImportMediaOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::ImportMediaRequest&, ImportMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCallbackResponse> ModifyCallbackOutcome;
                typedef std::future<ModifyCallbackOutcome> ModifyCallbackOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::ModifyCallbackRequest&, ModifyCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCallbackResponse> QueryCallbackOutcome;
                typedef std::future<QueryCallbackOutcome> QueryCallbackOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::QueryCallbackRequest&, QueryCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCustomCategoryResponse> UpdateCustomCategoryOutcome;
                typedef std::future<UpdateCustomCategoryOutcome> UpdateCustomCategoryOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::UpdateCustomCategoryRequest&, UpdateCustomCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCustomPersonResponse> UpdateCustomPersonOutcome;
                typedef std::future<UpdateCustomPersonOutcome> UpdateCustomPersonOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::UpdateCustomPersonRequest&, UpdateCustomPersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomPersonAsyncHandler;



                /**
                 *增加自定义人脸图片，每个自定义人物最多可包含10张人脸图片

请注意，与创建自定义人物一样，图片数据优先级优于图片URL优先级
                 * @param req AddCustomPersonImageRequest
                 * @return AddCustomPersonImageOutcome
                 */
                AddCustomPersonImageOutcome AddCustomPersonImage(const Model::AddCustomPersonImageRequest &request);
                void AddCustomPersonImageAsync(const Model::AddCustomPersonImageRequest& request, const AddCustomPersonImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCustomPersonImageOutcomeCallable AddCustomPersonImageCallable(const Model::AddCustomPersonImageRequest& request);

                /**
                 *创建自定义人物分类信息

当L2Category为空时，将创建一级自定义分类。
当L1Category与L2Category均不为空时，将创建二级自定义分类。请注意，**只有当一级自定义分类存在时，才可创建二级自定义分类**。
                 * @param req CreateCustomCategoryRequest
                 * @return CreateCustomCategoryOutcome
                 */
                CreateCustomCategoryOutcome CreateCustomCategory(const Model::CreateCustomCategoryRequest &request);
                void CreateCustomCategoryAsync(const Model::CreateCustomCategoryRequest& request, const CreateCustomCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomCategoryOutcomeCallable CreateCustomCategoryCallable(const Model::CreateCustomCategoryRequest& request);

                /**
                 *创建自定义人物库

Bucket的格式参考为 `bucketName-123456.cos.ap-shanghai.myqcloud.com`

在调用CreateCustomPerson和AddCustomPersonImage接口之前，请先确保本接口成功调用。当前每个用户只支持一个自定义人物库，一旦自定义人物库创建成功，后续接口调用均会返回人物库已存在错误。

由于人脸图片对于自定义人物识别至关重要，因此自定义人物识别功能需要用户显式指定COS存储桶方可使用。具体来说，自定义人物识别功能接口(主要是CreateCustomPerson和AddCustomPersonImage)会在此COS桶下面新建IVLDCustomPersonImage目录，并在此目录下存储自定义人物图片数据以支持后续潜在的特征更新。

请注意：本接口指定的COS桶仅用于**备份存储自定义人物图片**，CreateCustomPerson和AddCustomPersonImage接口入参URL可使用任意COS存储桶下的任意图片。

**重要**：请务必确保本接口指定的COS存储桶存在(不要手动删除COS桶)。COS存储桶一旦指定，将不能修改。

                 * @param req CreateCustomGroupRequest
                 * @return CreateCustomGroupOutcome
                 */
                CreateCustomGroupOutcome CreateCustomGroup(const Model::CreateCustomGroupRequest &request);
                void CreateCustomGroupAsync(const Model::CreateCustomGroupRequest& request, const CreateCustomGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomGroupOutcomeCallable CreateCustomGroupCallable(const Model::CreateCustomGroupRequest& request);

                /**
                 *创建自定义人物。

输入人物名称，基本信息，分类信息与人脸图片，创建自定义人物

人脸图片可使用图片数据(base64编码的图片数据)或者图片URL(推荐使用COS以减少下载时间，其他地址也支持)，原始图片优先，也即如果同时指定了图片数据和图片URL，接口将仅使用图片数据
                 * @param req CreateCustomPersonRequest
                 * @return CreateCustomPersonOutcome
                 */
                CreateCustomPersonOutcome CreateCustomPerson(const Model::CreateCustomPersonRequest &request);
                void CreateCustomPersonAsync(const Model::CreateCustomPersonRequest& request, const CreateCustomPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomPersonOutcomeCallable CreateCustomPersonCallable(const Model::CreateCustomPersonRequest& request);

                /**
                 *创建默认自定义人物类型
                 * @param req CreateDefaultCategoriesRequest
                 * @return CreateDefaultCategoriesOutcome
                 */
                CreateDefaultCategoriesOutcome CreateDefaultCategories(const Model::CreateDefaultCategoriesRequest &request);
                void CreateDefaultCategoriesAsync(const Model::CreateDefaultCategoriesRequest& request, const CreateDefaultCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDefaultCategoriesOutcomeCallable CreateDefaultCategoriesCallable(const Model::CreateDefaultCategoriesRequest& request);

                /**
                 *创建智能标签任务。

请注意，本接口为异步接口，**返回TaskId只代表任务创建成功，不代表任务执行成功**。
                 * @param req CreateTaskRequest
                 * @return CreateTaskOutcome
                 */
                CreateTaskOutcome CreateTask(const Model::CreateTaskRequest &request);
                void CreateTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request);

                /**
                 *创建一个视频缩编任务。

### 回调事件消息通知协议

#### 网络协议
- 回调接口协议目前仅支持http/https协议；
- 请求：HTTP POST 请求，包体内容为 JSON，每一种消息的具体包体内容参见后文。
- 应答：HTTP STATUS CODE = 200，服务端忽略应答包具体内容，为了协议友好，建议客户应答内容携带 JSON： `{"code":0}`

#### 通知可靠性

事件通知服务具备重试能力，事件通知失败后会总计重试3次；
为了避免重试对您的服务器以及网络带宽造成冲击，请保持正常回包。触发重试条件如下：
- 长时间（5 秒）未回包应答。
- 应答 HTTP STATUS 不为200。


#### 回调接口协议

##### 分析任务完成消息回调
| 参数名称 | 必选 | 类型 | 描述 |
|---------|---------|---------|---------|
| TaskId | 是 | String | 任务ID |
| TaskStatus | 是 | Integer | 任务执行状态 |
| FailedReason | 是 | String | 若任务失败，该字段为失败原因 |
                 * @param req CreateVideoSummaryTaskRequest
                 * @return CreateVideoSummaryTaskOutcome
                 */
                CreateVideoSummaryTaskOutcome CreateVideoSummaryTask(const Model::CreateVideoSummaryTaskRequest &request);
                void CreateVideoSummaryTaskAsync(const Model::CreateVideoSummaryTaskRequest& request, const CreateVideoSummaryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVideoSummaryTaskOutcomeCallable CreateVideoSummaryTaskCallable(const Model::CreateVideoSummaryTaskRequest& request);

                /**
                 *删除自定义分类信息
                 * @param req DeleteCustomCategoryRequest
                 * @return DeleteCustomCategoryOutcome
                 */
                DeleteCustomCategoryOutcome DeleteCustomCategory(const Model::DeleteCustomCategoryRequest &request);
                void DeleteCustomCategoryAsync(const Model::DeleteCustomCategoryRequest& request, const DeleteCustomCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomCategoryOutcomeCallable DeleteCustomCategoryCallable(const Model::DeleteCustomCategoryRequest& request);

                /**
                 *删除自定义人物
                 * @param req DeleteCustomPersonRequest
                 * @return DeleteCustomPersonOutcome
                 */
                DeleteCustomPersonOutcome DeleteCustomPerson(const Model::DeleteCustomPersonRequest &request);
                void DeleteCustomPersonAsync(const Model::DeleteCustomPersonRequest& request, const DeleteCustomPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomPersonOutcomeCallable DeleteCustomPersonCallable(const Model::DeleteCustomPersonRequest& request);

                /**
                 *删除自定义人脸数据
                 * @param req DeleteCustomPersonImageRequest
                 * @return DeleteCustomPersonImageOutcome
                 */
                DeleteCustomPersonImageOutcome DeleteCustomPersonImage(const Model::DeleteCustomPersonImageRequest &request);
                void DeleteCustomPersonImageAsync(const Model::DeleteCustomPersonImageRequest& request, const DeleteCustomPersonImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomPersonImageOutcomeCallable DeleteCustomPersonImageCallable(const Model::DeleteCustomPersonImageRequest& request);

                /**
                 *将MediaId对应的媒资文件从系统中删除。

**请注意，本接口仅删除媒资文件，媒资文件对应的视频分析结果不会被删除**。如您需要删除结构化分析结果，请调用DeleteTask接口。
                 * @param req DeleteMediaRequest
                 * @return DeleteMediaOutcome
                 */
                DeleteMediaOutcome DeleteMedia(const Model::DeleteMediaRequest &request);
                void DeleteMediaAsync(const Model::DeleteMediaRequest& request, const DeleteMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMediaOutcomeCallable DeleteMediaCallable(const Model::DeleteMediaRequest& request);

                /**
                 *删除任务信息

请注意，本接口**不会**删除媒资文件

只有已完成(成功或者失败)的任务可以删除，**正在执行中的任务不支持删除**
                 * @param req DeleteTaskRequest
                 * @return DeleteTaskOutcome
                 */
                DeleteTaskOutcome DeleteTask(const Model::DeleteTaskRequest &request);
                void DeleteTaskAsync(const Model::DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskOutcomeCallable DeleteTaskCallable(const Model::DeleteTaskRequest& request);

                /**
                 *批量描述自定义人物分类信息
                 * @param req DescribeCustomCategoriesRequest
                 * @return DescribeCustomCategoriesOutcome
                 */
                DescribeCustomCategoriesOutcome DescribeCustomCategories(const Model::DescribeCustomCategoriesRequest &request);
                void DescribeCustomCategoriesAsync(const Model::DescribeCustomCategoriesRequest& request, const DescribeCustomCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomCategoriesOutcomeCallable DescribeCustomCategoriesCallable(const Model::DescribeCustomCategoriesRequest& request);

                /**
                 *描述自定义人物库信息，当前库大小(库中有多少人脸)，以及库中的存储桶
                 * @param req DescribeCustomGroupRequest
                 * @return DescribeCustomGroupOutcome
                 */
                DescribeCustomGroupOutcome DescribeCustomGroup(const Model::DescribeCustomGroupRequest &request);
                void DescribeCustomGroupAsync(const Model::DescribeCustomGroupRequest& request, const DescribeCustomGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomGroupOutcomeCallable DescribeCustomGroupCallable(const Model::DescribeCustomGroupRequest& request);

                /**
                 *描述自定义人物详细信息，包括人物信息与人物信息
                 * @param req DescribeCustomPersonDetailRequest
                 * @return DescribeCustomPersonDetailOutcome
                 */
                DescribeCustomPersonDetailOutcome DescribeCustomPersonDetail(const Model::DescribeCustomPersonDetailRequest &request);
                void DescribeCustomPersonDetailAsync(const Model::DescribeCustomPersonDetailRequest& request, const DescribeCustomPersonDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomPersonDetailOutcomeCallable DescribeCustomPersonDetailCallable(const Model::DescribeCustomPersonDetailRequest& request);

                /**
                 *批量描述自定义人物
                 * @param req DescribeCustomPersonsRequest
                 * @return DescribeCustomPersonsOutcome
                 */
                DescribeCustomPersonsOutcome DescribeCustomPersons(const Model::DescribeCustomPersonsRequest &request);
                void DescribeCustomPersonsAsync(const Model::DescribeCustomPersonsRequest& request, const DescribeCustomPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomPersonsOutcomeCallable DescribeCustomPersonsCallable(const Model::DescribeCustomPersonsRequest& request);

                /**
                 *描述媒资文件信息，包括媒资状态，分辨率，帧率等。

如果媒资文件未完成导入，本接口将仅输出媒资文件的状态信息；导入完成后，本接口还将输出媒资文件的其他元信息。
                 * @param req DescribeMediaRequest
                 * @return DescribeMediaOutcome
                 */
                DescribeMediaOutcome DescribeMedia(const Model::DescribeMediaRequest &request);
                void DescribeMediaAsync(const Model::DescribeMediaRequest& request, const DescribeMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaOutcomeCallable DescribeMediaCallable(const Model::DescribeMediaRequest& request);

                /**
                 *依照输入条件，描述命中的媒资文件信息，包括媒资状态，分辨率，帧率等。

请注意，本接口最多支持同时描述**50**个媒资文件

如果媒资文件未完成导入，本接口将仅输出媒资文件的状态信息；导入完成后，本接口还将输出媒资文件的其他元信息。
                 * @param req DescribeMediasRequest
                 * @return DescribeMediasOutcome
                 */
                DescribeMediasOutcome DescribeMedias(const Model::DescribeMediasRequest &request);
                void DescribeMediasAsync(const Model::DescribeMediasRequest& request, const DescribeMediasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediasOutcomeCallable DescribeMediasCallable(const Model::DescribeMediasRequest& request);

                /**
                 *描述智能标签任务进度。

请注意，**此接口仅返回任务执行状态信息，不返回任务执行结果**
                 * @param req DescribeTaskRequest
                 * @return DescribeTaskOutcome
                 */
                DescribeTaskOutcome DescribeTask(const Model::DescribeTaskRequest &request);
                void DescribeTaskAsync(const Model::DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskOutcomeCallable DescribeTaskCallable(const Model::DescribeTaskRequest& request);

                /**
                 *描述任务信息，如果任务成功完成，还将返回任务结果
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 *依照输入条件，描述命中的任务信息，包括任务创建时间，处理时间信息等。

请注意，本接口最多支持同时描述**50**个任务信息
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *获取用户资源使用量
                 * @param req DescribeUsageAmountRequest
                 * @return DescribeUsageAmountOutcome
                 */
                DescribeUsageAmountOutcome DescribeUsageAmount(const Model::DescribeUsageAmountRequest &request);
                void DescribeUsageAmountAsync(const Model::DescribeUsageAmountRequest& request, const DescribeUsageAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsageAmountOutcomeCallable DescribeUsageAmountCallable(const Model::DescribeUsageAmountRequest& request);

                /**
                 *描述任务信息，如果任务成功完成，还将返回任务结果
                 * @param req DescribeVideoSummaryDetailRequest
                 * @return DescribeVideoSummaryDetailOutcome
                 */
                DescribeVideoSummaryDetailOutcome DescribeVideoSummaryDetail(const Model::DescribeVideoSummaryDetailRequest &request);
                void DescribeVideoSummaryDetailAsync(const Model::DescribeVideoSummaryDetailRequest& request, const DescribeVideoSummaryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoSummaryDetailOutcomeCallable DescribeVideoSummaryDetailCallable(const Model::DescribeVideoSummaryDetailRequest& request);

                /**
                 *将URL指向的媒资视频文件导入系统之中。

**请注意，本接口为异步接口**。接口返回MediaId仅代表导入视频任务发起，不代表任务完成，您可调用读接口(DescribeMedia/DescribeMedias)接口查询MediaId

URL字段推荐您使用COS地址，其形式为`https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${ObjectKey}`，其中`${Bucket}`为您的COS桶名称，Region为COS桶所在[可用区](https://cloud.tencent.com/document/product/213/6091)，`${ObjectKey}`为指向存储在COS桶内的待分析的视频的[ObjectKey](https://cloud.tencent.com/document/product/436/13324)

另外，目前产品也支持使用外部URL地址，但是当传入URL为非COS地址时，需要您指定额外的WriteBackCosPath以供产品回写结果数据。

分析完成后，本产品将在您的`${Bucket}`桶内创建名为`${ObjectKey}_${task-create-time}`的目录(`task-create-time`形式为1970-01-01T08:08:08)并将分析结果将回传回该目录，也即，结构化分析结果(包括图片，JSON等数据)将会写回`https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${ObjectKey}_${task-create-time}`目录
                 * @param req ImportMediaRequest
                 * @return ImportMediaOutcome
                 */
                ImportMediaOutcome ImportMedia(const Model::ImportMediaRequest &request);
                void ImportMediaAsync(const Model::ImportMediaRequest& request, const ImportMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportMediaOutcomeCallable ImportMediaCallable(const Model::ImportMediaRequest& request);

                /**
                 *用户设置对应事件的回调地址

### 回调事件消息通知协议

#### 网络协议
- 回调接口协议目前仅支持http/https协议；
- 请求：HTTP POST 请求，包体内容为 JSON，每一种消息的具体包体内容参见后文。
- 应答：HTTP STATUS CODE = 200，服务端忽略应答包具体内容，为了协议友好，建议客户应答内容携带 JSON： `{"code":0}`

#### 通知可靠性

事件通知服务具备重试能力，事件通知失败后会总计重试3次；
为了避免重试对您的服务器以及网络带宽造成冲击，请保持正常回包。触发重试条件如下：
- 长时间（5 秒）未回包应答。
- 应答 HTTP STATUS 不为200。


#### 回调接口协议

##### 分析任务完成消息回调
| 参数名称 | 必选 | 类型 | 描述 |
|---------|---------|---------|---------|
| EventType | 是 | int | 回调时间类型，1-任务分析完成，2-媒资导入完成 |
| TaskId | 是 | String | 任务ID |
| TaskStatus | 是 | [TaskStatus](/document/product/1509/65063#TaskInfo) | 任务执行状态 |
| FailedReason | 是 | String | 若任务失败，该字段为失败原因 |


##### 导入媒资完成消息回调
| 参数名称 | 必选 | 类型 | 描述 |
|---------|---------|---------|---------|
| EventType | 是 | int | 回调时间类型，1-任务分析完成，2-媒资导入完成 |
| MediaId | 是 | String | 媒资ID |
| MediaStatus | 是 | [MediaStatus](/document/product/1509/65063#MediaInfo) | 媒资导入状态|
| FailedReason | 是 | String | 若任务失败，该字段为失败原因 |
                 * @param req ModifyCallbackRequest
                 * @return ModifyCallbackOutcome
                 */
                ModifyCallbackOutcome ModifyCallback(const Model::ModifyCallbackRequest &request);
                void ModifyCallbackAsync(const Model::ModifyCallbackRequest& request, const ModifyCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCallbackOutcomeCallable ModifyCallbackCallable(const Model::ModifyCallbackRequest& request);

                /**
                 *查询用户回调设置
                 * @param req QueryCallbackRequest
                 * @return QueryCallbackOutcome
                 */
                QueryCallbackOutcome QueryCallback(const Model::QueryCallbackRequest &request);
                void QueryCallbackAsync(const Model::QueryCallbackRequest& request, const QueryCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCallbackOutcomeCallable QueryCallbackCallable(const Model::QueryCallbackRequest& request);

                /**
                 *更新自定义人物分类

当L2Category为空时，代表更新CategoryId对应的一级自定义人物类型以及所有二级自定义人物类型所从属的一级自定义人物类型；
当L2Category非空时，仅更新CategoryId对应的二级自定义人物类型
                 * @param req UpdateCustomCategoryRequest
                 * @return UpdateCustomCategoryOutcome
                 */
                UpdateCustomCategoryOutcome UpdateCustomCategory(const Model::UpdateCustomCategoryRequest &request);
                void UpdateCustomCategoryAsync(const Model::UpdateCustomCategoryRequest& request, const UpdateCustomCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCustomCategoryOutcomeCallable UpdateCustomCategoryCallable(const Model::UpdateCustomCategoryRequest& request);

                /**
                 *更新自定义人物信息，包括姓名，简要信息，分类信息等
                 * @param req UpdateCustomPersonRequest
                 * @return UpdateCustomPersonOutcome
                 */
                UpdateCustomPersonOutcome UpdateCustomPerson(const Model::UpdateCustomPersonRequest &request);
                void UpdateCustomPersonAsync(const Model::UpdateCustomPersonRequest& request, const UpdateCustomPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCustomPersonOutcomeCallable UpdateCustomPersonCallable(const Model::UpdateCustomPersonRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_IVLDCLIENT_H_
