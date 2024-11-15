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

#ifndef TENCENTCLOUD_BDA_V20200324_BDACLIENT_H_
#define TENCENTCLOUD_BDA_V20200324_BDACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bda/v20200324/model/CreateGroupRequest.h>
#include <tencentcloud/bda/v20200324/model/CreateGroupResponse.h>
#include <tencentcloud/bda/v20200324/model/CreatePersonRequest.h>
#include <tencentcloud/bda/v20200324/model/CreatePersonResponse.h>
#include <tencentcloud/bda/v20200324/model/CreateSegmentationTaskRequest.h>
#include <tencentcloud/bda/v20200324/model/CreateSegmentationTaskResponse.h>
#include <tencentcloud/bda/v20200324/model/CreateTraceRequest.h>
#include <tencentcloud/bda/v20200324/model/CreateTraceResponse.h>
#include <tencentcloud/bda/v20200324/model/DeleteGroupRequest.h>
#include <tencentcloud/bda/v20200324/model/DeleteGroupResponse.h>
#include <tencentcloud/bda/v20200324/model/DeletePersonRequest.h>
#include <tencentcloud/bda/v20200324/model/DeletePersonResponse.h>
#include <tencentcloud/bda/v20200324/model/DescribeSegmentationTaskRequest.h>
#include <tencentcloud/bda/v20200324/model/DescribeSegmentationTaskResponse.h>
#include <tencentcloud/bda/v20200324/model/DetectBodyRequest.h>
#include <tencentcloud/bda/v20200324/model/DetectBodyResponse.h>
#include <tencentcloud/bda/v20200324/model/DetectBodyJointsRequest.h>
#include <tencentcloud/bda/v20200324/model/DetectBodyJointsResponse.h>
#include <tencentcloud/bda/v20200324/model/GetGroupListRequest.h>
#include <tencentcloud/bda/v20200324/model/GetGroupListResponse.h>
#include <tencentcloud/bda/v20200324/model/GetPersonListRequest.h>
#include <tencentcloud/bda/v20200324/model/GetPersonListResponse.h>
#include <tencentcloud/bda/v20200324/model/GetSummaryInfoRequest.h>
#include <tencentcloud/bda/v20200324/model/GetSummaryInfoResponse.h>
#include <tencentcloud/bda/v20200324/model/ModifyGroupRequest.h>
#include <tencentcloud/bda/v20200324/model/ModifyGroupResponse.h>
#include <tencentcloud/bda/v20200324/model/ModifyPersonInfoRequest.h>
#include <tencentcloud/bda/v20200324/model/ModifyPersonInfoResponse.h>
#include <tencentcloud/bda/v20200324/model/SearchTraceRequest.h>
#include <tencentcloud/bda/v20200324/model/SearchTraceResponse.h>
#include <tencentcloud/bda/v20200324/model/SegmentCustomizedPortraitPicRequest.h>
#include <tencentcloud/bda/v20200324/model/SegmentCustomizedPortraitPicResponse.h>
#include <tencentcloud/bda/v20200324/model/SegmentPortraitPicRequest.h>
#include <tencentcloud/bda/v20200324/model/SegmentPortraitPicResponse.h>
#include <tencentcloud/bda/v20200324/model/TerminateSegmentationTaskRequest.h>
#include <tencentcloud/bda/v20200324/model/TerminateSegmentationTaskResponse.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            class BdaClient : public AbstractClient
            {
            public:
                BdaClient(const Credential &credential, const std::string &region);
                BdaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateGroupResponse> CreateGroupOutcome;
                typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::CreateGroupRequest&, CreateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePersonResponse> CreatePersonOutcome;
                typedef std::future<CreatePersonOutcome> CreatePersonOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::CreatePersonRequest&, CreatePersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersonAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSegmentationTaskResponse> CreateSegmentationTaskOutcome;
                typedef std::future<CreateSegmentationTaskOutcome> CreateSegmentationTaskOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::CreateSegmentationTaskRequest&, CreateSegmentationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSegmentationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTraceResponse> CreateTraceOutcome;
                typedef std::future<CreateTraceOutcome> CreateTraceOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::CreateTraceRequest&, CreateTraceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTraceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGroupResponse> DeleteGroupOutcome;
                typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::DeleteGroupRequest&, DeleteGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePersonResponse> DeletePersonOutcome;
                typedef std::future<DeletePersonOutcome> DeletePersonOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::DeletePersonRequest&, DeletePersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSegmentationTaskResponse> DescribeSegmentationTaskOutcome;
                typedef std::future<DescribeSegmentationTaskOutcome> DescribeSegmentationTaskOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::DescribeSegmentationTaskRequest&, DescribeSegmentationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSegmentationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectBodyResponse> DetectBodyOutcome;
                typedef std::future<DetectBodyOutcome> DetectBodyOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::DetectBodyRequest&, DetectBodyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectBodyAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectBodyJointsResponse> DetectBodyJointsOutcome;
                typedef std::future<DetectBodyJointsOutcome> DetectBodyJointsOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::DetectBodyJointsRequest&, DetectBodyJointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectBodyJointsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetGroupListResponse> GetGroupListOutcome;
                typedef std::future<GetGroupListOutcome> GetGroupListOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::GetGroupListRequest&, GetGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPersonListResponse> GetPersonListOutcome;
                typedef std::future<GetPersonListOutcome> GetPersonListOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::GetPersonListRequest&, GetPersonListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSummaryInfoResponse> GetSummaryInfoOutcome;
                typedef std::future<GetSummaryInfoOutcome> GetSummaryInfoOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::GetSummaryInfoRequest&, GetSummaryInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSummaryInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGroupResponse> ModifyGroupOutcome;
                typedef std::future<ModifyGroupOutcome> ModifyGroupOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::ModifyGroupRequest&, ModifyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPersonInfoResponse> ModifyPersonInfoOutcome;
                typedef std::future<ModifyPersonInfoOutcome> ModifyPersonInfoOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::ModifyPersonInfoRequest&, ModifyPersonInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchTraceResponse> SearchTraceOutcome;
                typedef std::future<SearchTraceOutcome> SearchTraceOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::SearchTraceRequest&, SearchTraceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchTraceAsyncHandler;
                typedef Outcome<Core::Error, Model::SegmentCustomizedPortraitPicResponse> SegmentCustomizedPortraitPicOutcome;
                typedef std::future<SegmentCustomizedPortraitPicOutcome> SegmentCustomizedPortraitPicOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::SegmentCustomizedPortraitPicRequest&, SegmentCustomizedPortraitPicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SegmentCustomizedPortraitPicAsyncHandler;
                typedef Outcome<Core::Error, Model::SegmentPortraitPicResponse> SegmentPortraitPicOutcome;
                typedef std::future<SegmentPortraitPicOutcome> SegmentPortraitPicOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::SegmentPortraitPicRequest&, SegmentPortraitPicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SegmentPortraitPicAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateSegmentationTaskResponse> TerminateSegmentationTaskOutcome;
                typedef std::future<TerminateSegmentationTaskOutcome> TerminateSegmentationTaskOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::TerminateSegmentationTaskRequest&, TerminateSegmentationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateSegmentationTaskAsyncHandler;



                /**
                 *用于创建一个空的人体库，如果人体库已存在返回错误。

1个APPID下最多有2000W个人体动作轨迹（Trace），最多1W个人体库（Group）。

单个人体库（Group）最多10W个人体动作轨迹（Trace）。

单个人员（Person）最多添加 5 个人体动作轨迹（Trace）。
                 * @param req CreateGroupRequest
                 * @return CreateGroupOutcome
                 */
                CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest &request);
                void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request);

                /**
                 *创建人员，添加对应人员的人体动作轨迹信息。

请注意：
- 我们希望您的输入为 严格符合动作轨迹图片 要求的图片。如果您输入的图片不符合动作轨迹图片要求，会对最终效果产生较大负面影响。请您尽量保证一个Trace中的图片人体清晰、无遮挡、连贯；
- 一个人体动作轨迹（Trace）可以包含1-5张人体图片。提供越多质量高的人体图片有助于提升最终识别结果；
- 无论您在单个Trace中提供了多少张人体图片，我们都将生成一个对应的动作轨迹（Trace）信息。即，Trace仅和本次输入的图片序列相关，和图片的个数无关；
- 输入的图片组中，若有部分图片输入不合法（如图片大小过大、分辨率过大、无法解码等），我们将舍弃这部分图片，确保合法图片被正确搜索。即，我们将尽可能保证请求成功，去除不合法的输入；
- 构成人体动作轨迹单张图片大小不得超过2M，分辨率不得超过1920*1080。
                 * @param req CreatePersonRequest
                 * @return CreatePersonOutcome
                 */
                CreatePersonOutcome CreatePerson(const Model::CreatePersonRequest &request);
                void CreatePersonAsync(const Model::CreatePersonRequest& request, const CreatePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePersonOutcomeCallable CreatePersonCallable(const Model::CreatePersonRequest& request);

                /**
                 *本接口为人像分割在线处理接口组中的提交任务接口，可以对提交的资源进行处理视频流/图片流识别视频作品中的人像区域，进行一键抠像、背景替换、人像虚化等后期处理。
                 * @param req CreateSegmentationTaskRequest
                 * @return CreateSegmentationTaskOutcome
                 */
                CreateSegmentationTaskOutcome CreateSegmentationTask(const Model::CreateSegmentationTaskRequest &request);
                void CreateSegmentationTaskAsync(const Model::CreateSegmentationTaskRequest& request, const CreateSegmentationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSegmentationTaskOutcomeCallable CreateSegmentationTaskCallable(const Model::CreateSegmentationTaskRequest& request);

                /**
                 *将一个人体动作轨迹添加到一个人员中。一个人员最多允许包含 5 个人体动作轨迹。同一人的人体动作轨迹越多，搜索识别效果越好。

>请注意：
- 我们希望您的输入为 严格符合动作轨迹图片 要求的图片。如果您输入的图片不符合动作轨迹图片要求，会对最终效果产生较大负面影响。请您尽量保证一个Trace中的图片人体清晰、无遮挡、连贯。
- 一个人体动作轨迹（Trace）可以包含1-5张人体图片。提供越多质量高的人体图片有助于提升最终识别结果。
- 无论您在单个Trace中提供了多少张人体图片，我们都将生成一个对应的动作轨迹（Trace）信息。即，Trace仅和本次输入的图片序列相关，和图片的个数无关。
- 输入的图片组中，若有部分图片输入不合法（如图片大小过大、分辨率过大、无法解码等），我们将舍弃这部分图片，确保合法图片被正确搜索。即，我们将尽可能保证请求成功，去除不合法的输入；
- 构成人体动作轨迹单张图片大小限制为2M，分辨率限制为1920*1080。
                 * @param req CreateTraceRequest
                 * @return CreateTraceOutcome
                 */
                CreateTraceOutcome CreateTrace(const Model::CreateTraceRequest &request);
                void CreateTraceAsync(const Model::CreateTraceRequest& request, const CreateTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTraceOutcomeCallable CreateTraceCallable(const Model::CreateTraceRequest& request);

                /**
                 *删除该人体库及包含的所有的人员。
                 * @param req DeleteGroupRequest
                 * @return DeleteGroupOutcome
                 */
                DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest &request);
                void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request);

                /**
                 *删除人员。
                 * @param req DeletePersonRequest
                 * @return DeletePersonOutcome
                 */
                DeletePersonOutcome DeletePerson(const Model::DeletePersonRequest &request);
                void DeletePersonAsync(const Model::DeletePersonRequest& request, const DeletePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePersonOutcomeCallable DeletePersonCallable(const Model::DeletePersonRequest& request);

                /**
                 *可以查看单条任务的处理情况，包括处理状态，处理结果。
                 * @param req DescribeSegmentationTaskRequest
                 * @return DescribeSegmentationTaskOutcome
                 */
                DescribeSegmentationTaskOutcome DescribeSegmentationTask(const Model::DescribeSegmentationTaskRequest &request);
                void DescribeSegmentationTaskAsync(const Model::DescribeSegmentationTaskRequest& request, const DescribeSegmentationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSegmentationTaskOutcomeCallable DescribeSegmentationTaskCallable(const Model::DescribeSegmentationTaskRequest& request);

                /**
                 *检测给定图片中的人体（Body）的位置信息及属性信息。

                 * @param req DetectBodyRequest
                 * @return DetectBodyOutcome
                 */
                DetectBodyOutcome DetectBody(const Model::DetectBodyRequest &request);
                void DetectBodyAsync(const Model::DetectBodyRequest& request, const DetectBodyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectBodyOutcomeCallable DetectBodyCallable(const Model::DetectBodyRequest& request);

                /**
                 *检测图片中人体的14个关键点。建议用于人体图像清晰、无遮挡的场景。支持一张图片中存在多个人体的识别。

                 * @param req DetectBodyJointsRequest
                 * @return DetectBodyJointsOutcome
                 */
                DetectBodyJointsOutcome DetectBodyJoints(const Model::DetectBodyJointsRequest &request);
                void DetectBodyJointsAsync(const Model::DetectBodyJointsRequest& request, const DetectBodyJointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectBodyJointsOutcomeCallable DetectBodyJointsCallable(const Model::DetectBodyJointsRequest& request);

                /**
                 *获取人体库列表。
                 * @param req GetGroupListRequest
                 * @return GetGroupListOutcome
                 */
                GetGroupListOutcome GetGroupList(const Model::GetGroupListRequest &request);
                void GetGroupListAsync(const Model::GetGroupListRequest& request, const GetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGroupListOutcomeCallable GetGroupListCallable(const Model::GetGroupListRequest& request);

                /**
                 *获取指定人体库中的人员列表。
                 * @param req GetPersonListRequest
                 * @return GetPersonListOutcome
                 */
                GetPersonListOutcome GetPersonList(const Model::GetPersonListRequest &request);
                void GetPersonListAsync(const Model::GetPersonListRequest& request, const GetPersonListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPersonListOutcomeCallable GetPersonListCallable(const Model::GetPersonListRequest& request);

                /**
                 *获取人体库汇总信息。
                 * @param req GetSummaryInfoRequest
                 * @return GetSummaryInfoOutcome
                 */
                GetSummaryInfoOutcome GetSummaryInfo(const Model::GetSummaryInfoRequest &request);
                void GetSummaryInfoAsync(const Model::GetSummaryInfoRequest& request, const GetSummaryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSummaryInfoOutcomeCallable GetSummaryInfoCallable(const Model::GetSummaryInfoRequest& request);

                /**
                 *修改人体库名称、备注。
                 * @param req ModifyGroupRequest
                 * @return ModifyGroupOutcome
                 */
                ModifyGroupOutcome ModifyGroup(const Model::ModifyGroupRequest &request);
                void ModifyGroupAsync(const Model::ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGroupOutcomeCallable ModifyGroupCallable(const Model::ModifyGroupRequest& request);

                /**
                 *修改人员信息。
                 * @param req ModifyPersonInfoRequest
                 * @return ModifyPersonInfoOutcome
                 */
                ModifyPersonInfoOutcome ModifyPersonInfo(const Model::ModifyPersonInfoRequest &request);
                void ModifyPersonInfoAsync(const Model::ModifyPersonInfoRequest& request, const ModifyPersonInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonInfoOutcomeCallable ModifyPersonInfoCallable(const Model::ModifyPersonInfoRequest& request);

                /**
                 *本接口用于对一组待识别的人体动作轨迹（Trace）图片，在人体库中识别出最相似的 TopK 人体，按照相似度从大到小排列。

人体动作轨迹（Trace）图片要求：图片中当且仅包含一个人体。人体完整、无遮挡。

> 请注意：
- 我们希望您的输入为严格符合动作轨迹图片要求的图片。如果您输入的图片不符合动作轨迹图片要求，会对最终效果产生较大负面影响；
- 人体动作轨迹，是一个包含1-5张图片的图片序列。您可以输入1张图片作为动作轨迹，也可以输入多张。单个动作轨迹中包含越多符合质量的图片，搜索效果越好。
- 构成人体动作轨迹单张图片大小不得超过2M，分辨率不得超过1920*1080。
                 * @param req SearchTraceRequest
                 * @return SearchTraceOutcome
                 */
                SearchTraceOutcome SearchTrace(const Model::SearchTraceRequest &request);
                void SearchTraceAsync(const Model::SearchTraceRequest& request, const SearchTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchTraceOutcomeCallable SearchTraceCallable(const Model::SearchTraceRequest& request);

                /**
                 *在前后景分割的基础上优化多分类分割，支持对头发、五官等的分割，既作为换发型、挂件等底层技术，也可用于抠人头、抠人脸等玩法
                 * @param req SegmentCustomizedPortraitPicRequest
                 * @return SegmentCustomizedPortraitPicOutcome
                 */
                SegmentCustomizedPortraitPicOutcome SegmentCustomizedPortraitPic(const Model::SegmentCustomizedPortraitPicRequest &request);
                void SegmentCustomizedPortraitPicAsync(const Model::SegmentCustomizedPortraitPicRequest& request, const SegmentCustomizedPortraitPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SegmentCustomizedPortraitPicOutcomeCallable SegmentCustomizedPortraitPicCallable(const Model::SegmentCustomizedPortraitPicRequest& request);

                /**
                 *即二分类人像分割，识别传入图片中人体的完整轮廓，进行抠像。
                 * @param req SegmentPortraitPicRequest
                 * @return SegmentPortraitPicOutcome
                 */
                SegmentPortraitPicOutcome SegmentPortraitPic(const Model::SegmentPortraitPicRequest &request);
                void SegmentPortraitPicAsync(const Model::SegmentPortraitPicRequest& request, const SegmentPortraitPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SegmentPortraitPicOutcomeCallable SegmentPortraitPicCallable(const Model::SegmentPortraitPicRequest& request);

                /**
                 *终止指定视频人像分割处理任务
                 * @param req TerminateSegmentationTaskRequest
                 * @return TerminateSegmentationTaskOutcome
                 */
                TerminateSegmentationTaskOutcome TerminateSegmentationTask(const Model::TerminateSegmentationTaskRequest &request);
                void TerminateSegmentationTaskAsync(const Model::TerminateSegmentationTaskRequest& request, const TerminateSegmentationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateSegmentationTaskOutcomeCallable TerminateSegmentationTaskCallable(const Model::TerminateSegmentationTaskRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_BDACLIENT_H_
