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
#include <tencentcloud/cme/v20191029/model/AddTeamMemberRequest.h>
#include <tencentcloud/cme/v20191029/model/AddTeamMemberResponse.h>
#include <tencentcloud/cme/v20191029/model/CreateClassRequest.h>
#include <tencentcloud/cme/v20191029/model/CreateClassResponse.h>
#include <tencentcloud/cme/v20191029/model/CreateLinkRequest.h>
#include <tencentcloud/cme/v20191029/model/CreateLinkResponse.h>
#include <tencentcloud/cme/v20191029/model/CreateProjectRequest.h>
#include <tencentcloud/cme/v20191029/model/CreateProjectResponse.h>
#include <tencentcloud/cme/v20191029/model/CreateTeamRequest.h>
#include <tencentcloud/cme/v20191029/model/CreateTeamResponse.h>
#include <tencentcloud/cme/v20191029/model/DeleteClassRequest.h>
#include <tencentcloud/cme/v20191029/model/DeleteClassResponse.h>
#include <tencentcloud/cme/v20191029/model/DeleteLoginStatusRequest.h>
#include <tencentcloud/cme/v20191029/model/DeleteLoginStatusResponse.h>
#include <tencentcloud/cme/v20191029/model/DeleteMaterialRequest.h>
#include <tencentcloud/cme/v20191029/model/DeleteMaterialResponse.h>
#include <tencentcloud/cme/v20191029/model/DeleteProjectRequest.h>
#include <tencentcloud/cme/v20191029/model/DeleteProjectResponse.h>
#include <tencentcloud/cme/v20191029/model/DeleteTeamRequest.h>
#include <tencentcloud/cme/v20191029/model/DeleteTeamResponse.h>
#include <tencentcloud/cme/v20191029/model/DeleteTeamMembersRequest.h>
#include <tencentcloud/cme/v20191029/model/DeleteTeamMembersResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeClassRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeClassResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeJoinTeamsRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeJoinTeamsResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeLoginStatusRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeLoginStatusResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeMaterialsRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeMaterialsResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeProjectsRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeProjectsResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeResourceAuthorizationRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeResourceAuthorizationResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeSharedSpaceRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeSharedSpaceResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeTasksRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeTasksResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeTeamMembersRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeTeamMembersResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeTeamsRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeTeamsResponse.h>
#include <tencentcloud/cme/v20191029/model/ExportVideoByEditorTrackDataRequest.h>
#include <tencentcloud/cme/v20191029/model/ExportVideoByEditorTrackDataResponse.h>
#include <tencentcloud/cme/v20191029/model/ExportVideoEditProjectRequest.h>
#include <tencentcloud/cme/v20191029/model/ExportVideoEditProjectResponse.h>
#include <tencentcloud/cme/v20191029/model/FlattenListMediaRequest.h>
#include <tencentcloud/cme/v20191029/model/FlattenListMediaResponse.h>
#include <tencentcloud/cme/v20191029/model/GrantResourceAuthorizationRequest.h>
#include <tencentcloud/cme/v20191029/model/GrantResourceAuthorizationResponse.h>
#include <tencentcloud/cme/v20191029/model/ImportMaterialRequest.h>
#include <tencentcloud/cme/v20191029/model/ImportMaterialResponse.h>
#include <tencentcloud/cme/v20191029/model/ImportMediaToProjectRequest.h>
#include <tencentcloud/cme/v20191029/model/ImportMediaToProjectResponse.h>
#include <tencentcloud/cme/v20191029/model/ListMediaRequest.h>
#include <tencentcloud/cme/v20191029/model/ListMediaResponse.h>
#include <tencentcloud/cme/v20191029/model/ModifyMaterialRequest.h>
#include <tencentcloud/cme/v20191029/model/ModifyMaterialResponse.h>
#include <tencentcloud/cme/v20191029/model/ModifyProjectRequest.h>
#include <tencentcloud/cme/v20191029/model/ModifyProjectResponse.h>
#include <tencentcloud/cme/v20191029/model/ModifyTeamRequest.h>
#include <tencentcloud/cme/v20191029/model/ModifyTeamResponse.h>
#include <tencentcloud/cme/v20191029/model/ModifyTeamMemberRequest.h>
#include <tencentcloud/cme/v20191029/model/ModifyTeamMemberResponse.h>
#include <tencentcloud/cme/v20191029/model/MoveClassRequest.h>
#include <tencentcloud/cme/v20191029/model/MoveClassResponse.h>
#include <tencentcloud/cme/v20191029/model/RevokeResourceAuthorizationRequest.h>
#include <tencentcloud/cme/v20191029/model/RevokeResourceAuthorizationResponse.h>
#include <tencentcloud/cme/v20191029/model/SearchMaterialRequest.h>
#include <tencentcloud/cme/v20191029/model/SearchMaterialResponse.h>


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

                typedef Outcome<Error, Model::AddTeamMemberResponse> AddTeamMemberOutcome;
                typedef std::future<AddTeamMemberOutcome> AddTeamMemberOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::AddTeamMemberRequest&, AddTeamMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddTeamMemberAsyncHandler;
                typedef Outcome<Error, Model::CreateClassResponse> CreateClassOutcome;
                typedef std::future<CreateClassOutcome> CreateClassOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::CreateClassRequest&, CreateClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClassAsyncHandler;
                typedef Outcome<Error, Model::CreateLinkResponse> CreateLinkOutcome;
                typedef std::future<CreateLinkOutcome> CreateLinkOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::CreateLinkRequest&, CreateLinkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLinkAsyncHandler;
                typedef Outcome<Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
                typedef Outcome<Error, Model::CreateTeamResponse> CreateTeamOutcome;
                typedef std::future<CreateTeamOutcome> CreateTeamOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::CreateTeamRequest&, CreateTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTeamAsyncHandler;
                typedef Outcome<Error, Model::DeleteClassResponse> DeleteClassOutcome;
                typedef std::future<DeleteClassOutcome> DeleteClassOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DeleteClassRequest&, DeleteClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClassAsyncHandler;
                typedef Outcome<Error, Model::DeleteLoginStatusResponse> DeleteLoginStatusOutcome;
                typedef std::future<DeleteLoginStatusOutcome> DeleteLoginStatusOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DeleteLoginStatusRequest&, DeleteLoginStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoginStatusAsyncHandler;
                typedef Outcome<Error, Model::DeleteMaterialResponse> DeleteMaterialOutcome;
                typedef std::future<DeleteMaterialOutcome> DeleteMaterialOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DeleteMaterialRequest&, DeleteMaterialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMaterialAsyncHandler;
                typedef Outcome<Error, Model::DeleteProjectResponse> DeleteProjectOutcome;
                typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DeleteProjectRequest&, DeleteProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
                typedef Outcome<Error, Model::DeleteTeamResponse> DeleteTeamOutcome;
                typedef std::future<DeleteTeamOutcome> DeleteTeamOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DeleteTeamRequest&, DeleteTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTeamAsyncHandler;
                typedef Outcome<Error, Model::DeleteTeamMembersResponse> DeleteTeamMembersOutcome;
                typedef std::future<DeleteTeamMembersOutcome> DeleteTeamMembersOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DeleteTeamMembersRequest&, DeleteTeamMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTeamMembersAsyncHandler;
                typedef Outcome<Error, Model::DescribeClassResponse> DescribeClassOutcome;
                typedef std::future<DescribeClassOutcome> DescribeClassOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeClassRequest&, DescribeClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassAsyncHandler;
                typedef Outcome<Error, Model::DescribeJoinTeamsResponse> DescribeJoinTeamsOutcome;
                typedef std::future<DescribeJoinTeamsOutcome> DescribeJoinTeamsOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeJoinTeamsRequest&, DescribeJoinTeamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJoinTeamsAsyncHandler;
                typedef Outcome<Error, Model::DescribeLoginStatusResponse> DescribeLoginStatusOutcome;
                typedef std::future<DescribeLoginStatusOutcome> DescribeLoginStatusOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeLoginStatusRequest&, DescribeLoginStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeMaterialsResponse> DescribeMaterialsOutcome;
                typedef std::future<DescribeMaterialsOutcome> DescribeMaterialsOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeMaterialsRequest&, DescribeMaterialsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaterialsAsyncHandler;
                typedef Outcome<Error, Model::DescribeProjectsResponse> DescribeProjectsOutcome;
                typedef std::future<DescribeProjectsOutcome> DescribeProjectsOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeProjectsRequest&, DescribeProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectsAsyncHandler;
                typedef Outcome<Error, Model::DescribeResourceAuthorizationResponse> DescribeResourceAuthorizationOutcome;
                typedef std::future<DescribeResourceAuthorizationOutcome> DescribeResourceAuthorizationOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeResourceAuthorizationRequest&, DescribeResourceAuthorizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceAuthorizationAsyncHandler;
                typedef Outcome<Error, Model::DescribeSharedSpaceResponse> DescribeSharedSpaceOutcome;
                typedef std::future<DescribeSharedSpaceOutcome> DescribeSharedSpaceOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeSharedSpaceRequest&, DescribeSharedSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSharedSpaceAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Error, Model::DescribeTeamMembersResponse> DescribeTeamMembersOutcome;
                typedef std::future<DescribeTeamMembersOutcome> DescribeTeamMembersOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeTeamMembersRequest&, DescribeTeamMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTeamMembersAsyncHandler;
                typedef Outcome<Error, Model::DescribeTeamsResponse> DescribeTeamsOutcome;
                typedef std::future<DescribeTeamsOutcome> DescribeTeamsOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeTeamsRequest&, DescribeTeamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTeamsAsyncHandler;
                typedef Outcome<Error, Model::ExportVideoByEditorTrackDataResponse> ExportVideoByEditorTrackDataOutcome;
                typedef std::future<ExportVideoByEditorTrackDataOutcome> ExportVideoByEditorTrackDataOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ExportVideoByEditorTrackDataRequest&, ExportVideoByEditorTrackDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVideoByEditorTrackDataAsyncHandler;
                typedef Outcome<Error, Model::ExportVideoEditProjectResponse> ExportVideoEditProjectOutcome;
                typedef std::future<ExportVideoEditProjectOutcome> ExportVideoEditProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ExportVideoEditProjectRequest&, ExportVideoEditProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVideoEditProjectAsyncHandler;
                typedef Outcome<Error, Model::FlattenListMediaResponse> FlattenListMediaOutcome;
                typedef std::future<FlattenListMediaOutcome> FlattenListMediaOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::FlattenListMediaRequest&, FlattenListMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FlattenListMediaAsyncHandler;
                typedef Outcome<Error, Model::GrantResourceAuthorizationResponse> GrantResourceAuthorizationOutcome;
                typedef std::future<GrantResourceAuthorizationOutcome> GrantResourceAuthorizationOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::GrantResourceAuthorizationRequest&, GrantResourceAuthorizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantResourceAuthorizationAsyncHandler;
                typedef Outcome<Error, Model::ImportMaterialResponse> ImportMaterialOutcome;
                typedef std::future<ImportMaterialOutcome> ImportMaterialOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ImportMaterialRequest&, ImportMaterialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportMaterialAsyncHandler;
                typedef Outcome<Error, Model::ImportMediaToProjectResponse> ImportMediaToProjectOutcome;
                typedef std::future<ImportMediaToProjectOutcome> ImportMediaToProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ImportMediaToProjectRequest&, ImportMediaToProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportMediaToProjectAsyncHandler;
                typedef Outcome<Error, Model::ListMediaResponse> ListMediaOutcome;
                typedef std::future<ListMediaOutcome> ListMediaOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ListMediaRequest&, ListMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListMediaAsyncHandler;
                typedef Outcome<Error, Model::ModifyMaterialResponse> ModifyMaterialOutcome;
                typedef std::future<ModifyMaterialOutcome> ModifyMaterialOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ModifyMaterialRequest&, ModifyMaterialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMaterialAsyncHandler;
                typedef Outcome<Error, Model::ModifyProjectResponse> ModifyProjectOutcome;
                typedef std::future<ModifyProjectOutcome> ModifyProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ModifyProjectRequest&, ModifyProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectAsyncHandler;
                typedef Outcome<Error, Model::ModifyTeamResponse> ModifyTeamOutcome;
                typedef std::future<ModifyTeamOutcome> ModifyTeamOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ModifyTeamRequest&, ModifyTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTeamAsyncHandler;
                typedef Outcome<Error, Model::ModifyTeamMemberResponse> ModifyTeamMemberOutcome;
                typedef std::future<ModifyTeamMemberOutcome> ModifyTeamMemberOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ModifyTeamMemberRequest&, ModifyTeamMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTeamMemberAsyncHandler;
                typedef Outcome<Error, Model::MoveClassResponse> MoveClassOutcome;
                typedef std::future<MoveClassOutcome> MoveClassOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::MoveClassRequest&, MoveClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MoveClassAsyncHandler;
                typedef Outcome<Error, Model::RevokeResourceAuthorizationResponse> RevokeResourceAuthorizationOutcome;
                typedef std::future<RevokeResourceAuthorizationOutcome> RevokeResourceAuthorizationOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::RevokeResourceAuthorizationRequest&, RevokeResourceAuthorizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevokeResourceAuthorizationAsyncHandler;
                typedef Outcome<Error, Model::SearchMaterialResponse> SearchMaterialOutcome;
                typedef std::future<SearchMaterialOutcome> SearchMaterialOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::SearchMaterialRequest&, SearchMaterialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchMaterialAsyncHandler;



                /**
                 *向一个团队中团队成员，并且指定成员的角色。
                 * @param req AddTeamMemberRequest
                 * @return AddTeamMemberOutcome
                 */
                AddTeamMemberOutcome AddTeamMember(const Model::AddTeamMemberRequest &request);
                void AddTeamMemberAsync(const Model::AddTeamMemberRequest& request, const AddTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddTeamMemberOutcomeCallable AddTeamMemberCallable(const Model::AddTeamMemberRequest& request);

                /**
                 *新增分类，用于管理素材。
<li>分类层数不能超过10；</li>
<li>子分类数不能超过10。</li>
                 * @param req CreateClassRequest
                 * @return CreateClassOutcome
                 */
                CreateClassOutcome CreateClass(const Model::CreateClassRequest &request);
                void CreateClassAsync(const Model::CreateClassRequest& request, const CreateClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClassOutcomeCallable CreateClassCallable(const Model::CreateClassRequest& request);

                /**
                 * 创建素材链接或分类路径链接，将源资源信息链接到目标。
                 * @param req CreateLinkRequest
                 * @return CreateLinkOutcome
                 */
                CreateLinkOutcome CreateLink(const Model::CreateLinkRequest &request);
                void CreateLinkAsync(const Model::CreateLinkRequest& request, const CreateLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLinkOutcomeCallable CreateLinkCallable(const Model::CreateLinkRequest& request);

                /**
                 *创建云剪的编辑项目，支持创建视频剪辑、直播剪辑、导播台项目以及视频拆条项目。

                 * @param req CreateProjectRequest
                 * @return CreateProjectOutcome
                 */
                CreateProjectOutcome CreateProject(const Model::CreateProjectRequest &request);
                void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request);

                /**
                 *创建一个团队。
                 * @param req CreateTeamRequest
                 * @return CreateTeamOutcome
                 */
                CreateTeamOutcome CreateTeam(const Model::CreateTeamRequest &request);
                void CreateTeamAsync(const Model::CreateTeamRequest& request, const CreateTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTeamOutcomeCallable CreateTeamCallable(const Model::CreateTeamRequest& request);

                /**
                 *删除分类信息，删除时检验下述限制：
<li>分类路径必须存在；</li>
<li>分类下没有绑定素材。</li>
                 * @param req DeleteClassRequest
                 * @return DeleteClassOutcome
                 */
                DeleteClassOutcome DeleteClass(const Model::DeleteClassRequest &request);
                void DeleteClassAsync(const Model::DeleteClassRequest& request, const DeleteClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClassOutcomeCallable DeleteClassCallable(const Model::DeleteClassRequest& request);

                /**
                 *删除用户登录态，使用户登出云剪平台。
                 * @param req DeleteLoginStatusRequest
                 * @return DeleteLoginStatusOutcome
                 */
                DeleteLoginStatusOutcome DeleteLoginStatus(const Model::DeleteLoginStatusRequest &request);
                void DeleteLoginStatusAsync(const Model::DeleteLoginStatusRequest& request, const DeleteLoginStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoginStatusOutcomeCallable DeleteLoginStatusCallable(const Model::DeleteLoginStatusRequest& request);

                /**
                 *根据素材 Id 删除素材。
                 * @param req DeleteMaterialRequest
                 * @return DeleteMaterialOutcome
                 */
                DeleteMaterialOutcome DeleteMaterial(const Model::DeleteMaterialRequest &request);
                void DeleteMaterialAsync(const Model::DeleteMaterialRequest& request, const DeleteMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMaterialOutcomeCallable DeleteMaterialCallable(const Model::DeleteMaterialRequest& request);

                /**
                 *删除云剪编辑项目。
                 * @param req DeleteProjectRequest
                 * @return DeleteProjectOutcome
                 */
                DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest &request);
                void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request);

                /**
                 *删除一个团队。
<li>要删除的团队必须没有归属的素材；</li>
<li>要删除的团队必须没有归属的分类。</li>
                 * @param req DeleteTeamRequest
                 * @return DeleteTeamOutcome
                 */
                DeleteTeamOutcome DeleteTeam(const Model::DeleteTeamRequest &request);
                void DeleteTeamAsync(const Model::DeleteTeamRequest& request, const DeleteTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTeamOutcomeCallable DeleteTeamCallable(const Model::DeleteTeamRequest& request);

                /**
                 *将团队成员从团队中删除，默认只有 Owner 及管理员才有此权限。
                 * @param req DeleteTeamMembersRequest
                 * @return DeleteTeamMembersOutcome
                 */
                DeleteTeamMembersOutcome DeleteTeamMembers(const Model::DeleteTeamMembersRequest &request);
                void DeleteTeamMembersAsync(const Model::DeleteTeamMembersRequest& request, const DeleteTeamMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTeamMembersOutcomeCallable DeleteTeamMembersCallable(const Model::DeleteTeamMembersRequest& request);

                /**
                 *获取指定归属者下所有的分类信息。
                 * @param req DescribeClassRequest
                 * @return DescribeClassOutcome
                 */
                DescribeClassOutcome DescribeClass(const Model::DescribeClassRequest &request);
                void DescribeClassAsync(const Model::DescribeClassRequest& request, const DescribeClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassOutcomeCallable DescribeClassCallable(const Model::DescribeClassRequest& request);

                /**
                 *获取指定的团队成员所加入的团队列表。
                 * @param req DescribeJoinTeamsRequest
                 * @return DescribeJoinTeamsOutcome
                 */
                DescribeJoinTeamsOutcome DescribeJoinTeams(const Model::DescribeJoinTeamsRequest &request);
                void DescribeJoinTeamsAsync(const Model::DescribeJoinTeamsRequest& request, const DescribeJoinTeamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJoinTeamsOutcomeCallable DescribeJoinTeamsCallable(const Model::DescribeJoinTeamsRequest& request);

                /**
                 *查询指定用户的登录态。
                 * @param req DescribeLoginStatusRequest
                 * @return DescribeLoginStatusOutcome
                 */
                DescribeLoginStatusOutcome DescribeLoginStatus(const Model::DescribeLoginStatusRequest &request);
                void DescribeLoginStatusAsync(const Model::DescribeLoginStatusRequest& request, const DescribeLoginStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginStatusOutcomeCallable DescribeLoginStatusCallable(const Model::DescribeLoginStatusRequest& request);

                /**
                 *根据素材 Id 批量获取素材详情。
                 * @param req DescribeMaterialsRequest
                 * @return DescribeMaterialsOutcome
                 */
                DescribeMaterialsOutcome DescribeMaterials(const Model::DescribeMaterialsRequest &request);
                void DescribeMaterialsAsync(const Model::DescribeMaterialsRequest& request, const DescribeMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMaterialsOutcomeCallable DescribeMaterialsCallable(const Model::DescribeMaterialsRequest& request);

                /**
                 *支持根据多种条件过滤出项目列表。
                 * @param req DescribeProjectsRequest
                 * @return DescribeProjectsOutcome
                 */
                DescribeProjectsOutcome DescribeProjects(const Model::DescribeProjectsRequest &request);
                void DescribeProjectsAsync(const Model::DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectsOutcomeCallable DescribeProjectsCallable(const Model::DescribeProjectsRequest& request);

                /**
                 *查询指定资源的授权列表。
                 * @param req DescribeResourceAuthorizationRequest
                 * @return DescribeResourceAuthorizationOutcome
                 */
                DescribeResourceAuthorizationOutcome DescribeResourceAuthorization(const Model::DescribeResourceAuthorizationRequest &request);
                void DescribeResourceAuthorizationAsync(const Model::DescribeResourceAuthorizationRequest& request, const DescribeResourceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceAuthorizationOutcomeCallable DescribeResourceAuthorizationCallable(const Model::DescribeResourceAuthorizationRequest& request);

                /**
                 *获取共享空间。当实体A对实体B授权某资源以后，实体B的共享空间就会增加实体A。
                 * @param req DescribeSharedSpaceRequest
                 * @return DescribeSharedSpaceOutcome
                 */
                DescribeSharedSpaceOutcome DescribeSharedSpace(const Model::DescribeSharedSpaceRequest &request);
                void DescribeSharedSpaceAsync(const Model::DescribeSharedSpaceRequest& request, const DescribeSharedSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSharedSpaceOutcomeCallable DescribeSharedSpaceCallable(const Model::DescribeSharedSpaceRequest& request);

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
                 *获取任务列表，支持条件筛选，返回对应的任务基础信息列表。
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *获取指定成员 ID 的信息，同时支持拉取所有团队成员信息。
                 * @param req DescribeTeamMembersRequest
                 * @return DescribeTeamMembersOutcome
                 */
                DescribeTeamMembersOutcome DescribeTeamMembers(const Model::DescribeTeamMembersRequest &request);
                void DescribeTeamMembersAsync(const Model::DescribeTeamMembersRequest& request, const DescribeTeamMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTeamMembersOutcomeCallable DescribeTeamMembersCallable(const Model::DescribeTeamMembersRequest& request);

                /**
                 *获取指定团队的信息。
                 * @param req DescribeTeamsRequest
                 * @return DescribeTeamsOutcome
                 */
                DescribeTeamsOutcome DescribeTeams(const Model::DescribeTeamsRequest &request);
                void DescribeTeamsAsync(const Model::DescribeTeamsRequest& request, const DescribeTeamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTeamsOutcomeCallable DescribeTeamsCallable(const Model::DescribeTeamsRequest& request);

                /**
                 *使用在线编辑轨道数据直接导出视频。
                 * @param req ExportVideoByEditorTrackDataRequest
                 * @return ExportVideoByEditorTrackDataOutcome
                 */
                ExportVideoByEditorTrackDataOutcome ExportVideoByEditorTrackData(const Model::ExportVideoByEditorTrackDataRequest &request);
                void ExportVideoByEditorTrackDataAsync(const Model::ExportVideoByEditorTrackDataRequest& request, const ExportVideoByEditorTrackDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVideoByEditorTrackDataOutcomeCallable ExportVideoByEditorTrackDataCallable(const Model::ExportVideoByEditorTrackDataRequest& request);

                /**
                 *导出视频编辑项目，支持指定输出的模板。
                 * @param req ExportVideoEditProjectRequest
                 * @return ExportVideoEditProjectOutcome
                 */
                ExportVideoEditProjectOutcome ExportVideoEditProject(const Model::ExportVideoEditProjectRequest &request);
                void ExportVideoEditProjectAsync(const Model::ExportVideoEditProjectRequest& request, const ExportVideoEditProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVideoEditProjectOutcomeCallable ExportVideoEditProjectCallable(const Model::ExportVideoEditProjectRequest& request);

                /**
                 *平铺分类路径下及其子分类下的所有素材。
                 * @param req FlattenListMediaRequest
                 * @return FlattenListMediaOutcome
                 */
                FlattenListMediaOutcome FlattenListMedia(const Model::FlattenListMediaRequest &request);
                void FlattenListMediaAsync(const Model::FlattenListMediaRequest& request, const FlattenListMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FlattenListMediaOutcomeCallable FlattenListMediaCallable(const Model::FlattenListMediaRequest& request);

                /**
                 *资源所属实体对目标实体授予目标资源的相应权限。
                 * @param req GrantResourceAuthorizationRequest
                 * @return GrantResourceAuthorizationOutcome
                 */
                GrantResourceAuthorizationOutcome GrantResourceAuthorization(const Model::GrantResourceAuthorizationRequest &request);
                void GrantResourceAuthorizationAsync(const Model::GrantResourceAuthorizationRequest& request, const GrantResourceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GrantResourceAuthorizationOutcomeCallable GrantResourceAuthorizationCallable(const Model::GrantResourceAuthorizationRequest& request);

                /**
                 *将云点播媒资文件导入到云剪素材库。
                 * @param req ImportMaterialRequest
                 * @return ImportMaterialOutcome
                 */
                ImportMaterialOutcome ImportMaterial(const Model::ImportMaterialRequest &request);
                void ImportMaterialAsync(const Model::ImportMaterialRequest& request, const ImportMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportMaterialOutcomeCallable ImportMaterialCallable(const Model::ImportMaterialRequest& request);

                /**
                 *将云点播中的媒资添加到素材库中，供后续视频编辑使用。
                 * @param req ImportMediaToProjectRequest
                 * @return ImportMediaToProjectOutcome
                 */
                ImportMediaToProjectOutcome ImportMediaToProject(const Model::ImportMediaToProjectRequest &request);
                void ImportMediaToProjectAsync(const Model::ImportMediaToProjectRequest& request, const ImportMediaToProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportMediaToProjectOutcomeCallable ImportMediaToProjectCallable(const Model::ImportMediaToProjectRequest& request);

                /**
                 * 浏览当前分类路径下的资源，包括素材和子分类。
                 * @param req ListMediaRequest
                 * @return ListMediaOutcome
                 */
                ListMediaOutcome ListMedia(const Model::ListMediaRequest &request);
                void ListMediaAsync(const Model::ListMediaRequest& request, const ListMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListMediaOutcomeCallable ListMediaCallable(const Model::ListMediaRequest& request);

                /**
                 *修改素材信息，支持修改素材名称、分类路径、标签等信息。
                 * @param req ModifyMaterialRequest
                 * @return ModifyMaterialOutcome
                 */
                ModifyMaterialOutcome ModifyMaterial(const Model::ModifyMaterialRequest &request);
                void ModifyMaterialAsync(const Model::ModifyMaterialRequest& request, const ModifyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMaterialOutcomeCallable ModifyMaterialCallable(const Model::ModifyMaterialRequest& request);

                /**
                 *修改云剪编辑项目的信息。
                 * @param req ModifyProjectRequest
                 * @return ModifyProjectOutcome
                 */
                ModifyProjectOutcome ModifyProject(const Model::ModifyProjectRequest &request);
                void ModifyProjectAsync(const Model::ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProjectOutcomeCallable ModifyProjectCallable(const Model::ModifyProjectRequest& request);

                /**
                 *修改团队信息，目前支持修改的操作有：
<li>修改团队名称。</li>
                 * @param req ModifyTeamRequest
                 * @return ModifyTeamOutcome
                 */
                ModifyTeamOutcome ModifyTeam(const Model::ModifyTeamRequest &request);
                void ModifyTeamAsync(const Model::ModifyTeamRequest& request, const ModifyTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTeamOutcomeCallable ModifyTeamCallable(const Model::ModifyTeamRequest& request);

                /**
                 *修改团队成员信息，包括成员备注、角色等。
                 * @param req ModifyTeamMemberRequest
                 * @return ModifyTeamMemberOutcome
                 */
                ModifyTeamMemberOutcome ModifyTeamMember(const Model::ModifyTeamMemberRequest &request);
                void ModifyTeamMemberAsync(const Model::ModifyTeamMemberRequest& request, const ModifyTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTeamMemberOutcomeCallable ModifyTeamMemberCallable(const Model::ModifyTeamMemberRequest& request);

                /**
                 *移动某一个分类到另外一个分类下，也可用于分类重命名。
<li>如果 SourceClassPath = /素材/视频/NBA，DestinationClassPath = /素材/视频/篮球，当 DestinationClassPath 不存在时候，操作结果为重命名 ClassPath，如果 DestinationClassPath 存在时候，操作结果为产生新目录 /素材/视频/篮球/NBA。</li>
                 * @param req MoveClassRequest
                 * @return MoveClassOutcome
                 */
                MoveClassOutcome MoveClass(const Model::MoveClassRequest &request);
                void MoveClassAsync(const Model::MoveClassRequest& request, const MoveClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MoveClassOutcomeCallable MoveClassCallable(const Model::MoveClassRequest& request);

                /**
                 * 资源所属实体对目标实体回收目标资源的相应权限，若原本没有相应权限则不产生变更。
                 * @param req RevokeResourceAuthorizationRequest
                 * @return RevokeResourceAuthorizationOutcome
                 */
                RevokeResourceAuthorizationOutcome RevokeResourceAuthorization(const Model::RevokeResourceAuthorizationRequest &request);
                void RevokeResourceAuthorizationAsync(const Model::RevokeResourceAuthorizationRequest& request, const RevokeResourceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevokeResourceAuthorizationOutcomeCallable RevokeResourceAuthorizationCallable(const Model::RevokeResourceAuthorizationRequest& request);

                /**
                 *根据检索条件搜索素材，返回素材的基本信息。
                 * @param req SearchMaterialRequest
                 * @return SearchMaterialOutcome
                 */
                SearchMaterialOutcome SearchMaterial(const Model::SearchMaterialRequest &request);
                void SearchMaterialAsync(const Model::SearchMaterialRequest& request, const SearchMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchMaterialOutcomeCallable SearchMaterialCallable(const Model::SearchMaterialRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_CMECLIENT_H_
