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
#include <tencentcloud/cme/v20191029/model/CopyProjectRequest.h>
#include <tencentcloud/cme/v20191029/model/CopyProjectResponse.h>
#include <tencentcloud/cme/v20191029/model/CreateClassRequest.h>
#include <tencentcloud/cme/v20191029/model/CreateClassResponse.h>
#include <tencentcloud/cme/v20191029/model/CreateLinkRequest.h>
#include <tencentcloud/cme/v20191029/model/CreateLinkResponse.h>
#include <tencentcloud/cme/v20191029/model/CreateProjectRequest.h>
#include <tencentcloud/cme/v20191029/model/CreateProjectResponse.h>
#include <tencentcloud/cme/v20191029/model/CreateTeamRequest.h>
#include <tencentcloud/cme/v20191029/model/CreateTeamResponse.h>
#include <tencentcloud/cme/v20191029/model/CreateVideoEncodingPresetRequest.h>
#include <tencentcloud/cme/v20191029/model/CreateVideoEncodingPresetResponse.h>
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
#include <tencentcloud/cme/v20191029/model/DeleteVideoEncodingPresetRequest.h>
#include <tencentcloud/cme/v20191029/model/DeleteVideoEncodingPresetResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeAccountsRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeAccountsResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeClassRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeClassResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeJoinTeamsRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeJoinTeamsResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeLoginStatusRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeLoginStatusResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribeMaterialsRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeMaterialsResponse.h>
#include <tencentcloud/cme/v20191029/model/DescribePlatformsRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribePlatformsResponse.h>
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
#include <tencentcloud/cme/v20191029/model/DescribeVideoEncodingPresetsRequest.h>
#include <tencentcloud/cme/v20191029/model/DescribeVideoEncodingPresetsResponse.h>
#include <tencentcloud/cme/v20191029/model/ExportVideoByEditorTrackDataRequest.h>
#include <tencentcloud/cme/v20191029/model/ExportVideoByEditorTrackDataResponse.h>
#include <tencentcloud/cme/v20191029/model/ExportVideoByTemplateRequest.h>
#include <tencentcloud/cme/v20191029/model/ExportVideoByTemplateResponse.h>
#include <tencentcloud/cme/v20191029/model/ExportVideoByVideoSegmentationDataRequest.h>
#include <tencentcloud/cme/v20191029/model/ExportVideoByVideoSegmentationDataResponse.h>
#include <tencentcloud/cme/v20191029/model/ExportVideoEditProjectRequest.h>
#include <tencentcloud/cme/v20191029/model/ExportVideoEditProjectResponse.h>
#include <tencentcloud/cme/v20191029/model/FlattenListMediaRequest.h>
#include <tencentcloud/cme/v20191029/model/FlattenListMediaResponse.h>
#include <tencentcloud/cme/v20191029/model/GenerateVideoSegmentationSchemeByAiRequest.h>
#include <tencentcloud/cme/v20191029/model/GenerateVideoSegmentationSchemeByAiResponse.h>
#include <tencentcloud/cme/v20191029/model/GrantResourceAuthorizationRequest.h>
#include <tencentcloud/cme/v20191029/model/GrantResourceAuthorizationResponse.h>
#include <tencentcloud/cme/v20191029/model/HandleMediaCastProjectRequest.h>
#include <tencentcloud/cme/v20191029/model/HandleMediaCastProjectResponse.h>
#include <tencentcloud/cme/v20191029/model/HandleStreamConnectProjectRequest.h>
#include <tencentcloud/cme/v20191029/model/HandleStreamConnectProjectResponse.h>
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
#include <tencentcloud/cme/v20191029/model/ModifyVideoEncodingPresetRequest.h>
#include <tencentcloud/cme/v20191029/model/ModifyVideoEncodingPresetResponse.h>
#include <tencentcloud/cme/v20191029/model/MoveClassRequest.h>
#include <tencentcloud/cme/v20191029/model/MoveClassResponse.h>
#include <tencentcloud/cme/v20191029/model/MoveResourceRequest.h>
#include <tencentcloud/cme/v20191029/model/MoveResourceResponse.h>
#include <tencentcloud/cme/v20191029/model/ParseEventRequest.h>
#include <tencentcloud/cme/v20191029/model/ParseEventResponse.h>
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

                typedef Outcome<Core::Error, Model::AddTeamMemberResponse> AddTeamMemberOutcome;
                typedef std::future<AddTeamMemberOutcome> AddTeamMemberOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::AddTeamMemberRequest&, AddTeamMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddTeamMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyProjectResponse> CopyProjectOutcome;
                typedef std::future<CopyProjectOutcome> CopyProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::CopyProjectRequest&, CopyProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClassResponse> CreateClassOutcome;
                typedef std::future<CreateClassOutcome> CreateClassOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::CreateClassRequest&, CreateClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClassAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLinkResponse> CreateLinkOutcome;
                typedef std::future<CreateLinkOutcome> CreateLinkOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::CreateLinkRequest&, CreateLinkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLinkAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTeamResponse> CreateTeamOutcome;
                typedef std::future<CreateTeamOutcome> CreateTeamOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::CreateTeamRequest&, CreateTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTeamAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVideoEncodingPresetResponse> CreateVideoEncodingPresetOutcome;
                typedef std::future<CreateVideoEncodingPresetOutcome> CreateVideoEncodingPresetOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::CreateVideoEncodingPresetRequest&, CreateVideoEncodingPresetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoEncodingPresetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClassResponse> DeleteClassOutcome;
                typedef std::future<DeleteClassOutcome> DeleteClassOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DeleteClassRequest&, DeleteClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClassAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoginStatusResponse> DeleteLoginStatusOutcome;
                typedef std::future<DeleteLoginStatusOutcome> DeleteLoginStatusOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DeleteLoginStatusRequest&, DeleteLoginStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoginStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMaterialResponse> DeleteMaterialOutcome;
                typedef std::future<DeleteMaterialOutcome> DeleteMaterialOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DeleteMaterialRequest&, DeleteMaterialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMaterialAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectResponse> DeleteProjectOutcome;
                typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DeleteProjectRequest&, DeleteProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTeamResponse> DeleteTeamOutcome;
                typedef std::future<DeleteTeamOutcome> DeleteTeamOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DeleteTeamRequest&, DeleteTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTeamAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTeamMembersResponse> DeleteTeamMembersOutcome;
                typedef std::future<DeleteTeamMembersOutcome> DeleteTeamMembersOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DeleteTeamMembersRequest&, DeleteTeamMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTeamMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVideoEncodingPresetResponse> DeleteVideoEncodingPresetOutcome;
                typedef std::future<DeleteVideoEncodingPresetOutcome> DeleteVideoEncodingPresetOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DeleteVideoEncodingPresetRequest&, DeleteVideoEncodingPresetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoEncodingPresetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassResponse> DescribeClassOutcome;
                typedef std::future<DescribeClassOutcome> DescribeClassOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeClassRequest&, DescribeClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJoinTeamsResponse> DescribeJoinTeamsOutcome;
                typedef std::future<DescribeJoinTeamsOutcome> DescribeJoinTeamsOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeJoinTeamsRequest&, DescribeJoinTeamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJoinTeamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginStatusResponse> DescribeLoginStatusOutcome;
                typedef std::future<DescribeLoginStatusOutcome> DescribeLoginStatusOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeLoginStatusRequest&, DescribeLoginStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMaterialsResponse> DescribeMaterialsOutcome;
                typedef std::future<DescribeMaterialsOutcome> DescribeMaterialsOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeMaterialsRequest&, DescribeMaterialsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaterialsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePlatformsResponse> DescribePlatformsOutcome;
                typedef std::future<DescribePlatformsOutcome> DescribePlatformsOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribePlatformsRequest&, DescribePlatformsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlatformsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectsResponse> DescribeProjectsOutcome;
                typedef std::future<DescribeProjectsOutcome> DescribeProjectsOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeProjectsRequest&, DescribeProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceAuthorizationResponse> DescribeResourceAuthorizationOutcome;
                typedef std::future<DescribeResourceAuthorizationOutcome> DescribeResourceAuthorizationOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeResourceAuthorizationRequest&, DescribeResourceAuthorizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceAuthorizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSharedSpaceResponse> DescribeSharedSpaceOutcome;
                typedef std::future<DescribeSharedSpaceOutcome> DescribeSharedSpaceOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeSharedSpaceRequest&, DescribeSharedSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSharedSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTeamMembersResponse> DescribeTeamMembersOutcome;
                typedef std::future<DescribeTeamMembersOutcome> DescribeTeamMembersOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeTeamMembersRequest&, DescribeTeamMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTeamMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTeamsResponse> DescribeTeamsOutcome;
                typedef std::future<DescribeTeamsOutcome> DescribeTeamsOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeTeamsRequest&, DescribeTeamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTeamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoEncodingPresetsResponse> DescribeVideoEncodingPresetsOutcome;
                typedef std::future<DescribeVideoEncodingPresetsOutcome> DescribeVideoEncodingPresetsOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::DescribeVideoEncodingPresetsRequest&, DescribeVideoEncodingPresetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoEncodingPresetsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVideoByEditorTrackDataResponse> ExportVideoByEditorTrackDataOutcome;
                typedef std::future<ExportVideoByEditorTrackDataOutcome> ExportVideoByEditorTrackDataOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ExportVideoByEditorTrackDataRequest&, ExportVideoByEditorTrackDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVideoByEditorTrackDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVideoByTemplateResponse> ExportVideoByTemplateOutcome;
                typedef std::future<ExportVideoByTemplateOutcome> ExportVideoByTemplateOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ExportVideoByTemplateRequest&, ExportVideoByTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVideoByTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVideoByVideoSegmentationDataResponse> ExportVideoByVideoSegmentationDataOutcome;
                typedef std::future<ExportVideoByVideoSegmentationDataOutcome> ExportVideoByVideoSegmentationDataOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ExportVideoByVideoSegmentationDataRequest&, ExportVideoByVideoSegmentationDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVideoByVideoSegmentationDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVideoEditProjectResponse> ExportVideoEditProjectOutcome;
                typedef std::future<ExportVideoEditProjectOutcome> ExportVideoEditProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ExportVideoEditProjectRequest&, ExportVideoEditProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVideoEditProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::FlattenListMediaResponse> FlattenListMediaOutcome;
                typedef std::future<FlattenListMediaOutcome> FlattenListMediaOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::FlattenListMediaRequest&, FlattenListMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FlattenListMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateVideoSegmentationSchemeByAiResponse> GenerateVideoSegmentationSchemeByAiOutcome;
                typedef std::future<GenerateVideoSegmentationSchemeByAiOutcome> GenerateVideoSegmentationSchemeByAiOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::GenerateVideoSegmentationSchemeByAiRequest&, GenerateVideoSegmentationSchemeByAiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateVideoSegmentationSchemeByAiAsyncHandler;
                typedef Outcome<Core::Error, Model::GrantResourceAuthorizationResponse> GrantResourceAuthorizationOutcome;
                typedef std::future<GrantResourceAuthorizationOutcome> GrantResourceAuthorizationOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::GrantResourceAuthorizationRequest&, GrantResourceAuthorizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantResourceAuthorizationAsyncHandler;
                typedef Outcome<Core::Error, Model::HandleMediaCastProjectResponse> HandleMediaCastProjectOutcome;
                typedef std::future<HandleMediaCastProjectOutcome> HandleMediaCastProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::HandleMediaCastProjectRequest&, HandleMediaCastProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HandleMediaCastProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::HandleStreamConnectProjectResponse> HandleStreamConnectProjectOutcome;
                typedef std::future<HandleStreamConnectProjectOutcome> HandleStreamConnectProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::HandleStreamConnectProjectRequest&, HandleStreamConnectProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HandleStreamConnectProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportMaterialResponse> ImportMaterialOutcome;
                typedef std::future<ImportMaterialOutcome> ImportMaterialOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ImportMaterialRequest&, ImportMaterialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportMaterialAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportMediaToProjectResponse> ImportMediaToProjectOutcome;
                typedef std::future<ImportMediaToProjectOutcome> ImportMediaToProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ImportMediaToProjectRequest&, ImportMediaToProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportMediaToProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ListMediaResponse> ListMediaOutcome;
                typedef std::future<ListMediaOutcome> ListMediaOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ListMediaRequest&, ListMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMaterialResponse> ModifyMaterialOutcome;
                typedef std::future<ModifyMaterialOutcome> ModifyMaterialOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ModifyMaterialRequest&, ModifyMaterialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMaterialAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProjectResponse> ModifyProjectOutcome;
                typedef std::future<ModifyProjectOutcome> ModifyProjectOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ModifyProjectRequest&, ModifyProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTeamResponse> ModifyTeamOutcome;
                typedef std::future<ModifyTeamOutcome> ModifyTeamOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ModifyTeamRequest&, ModifyTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTeamAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTeamMemberResponse> ModifyTeamMemberOutcome;
                typedef std::future<ModifyTeamMemberOutcome> ModifyTeamMemberOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ModifyTeamMemberRequest&, ModifyTeamMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTeamMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVideoEncodingPresetResponse> ModifyVideoEncodingPresetOutcome;
                typedef std::future<ModifyVideoEncodingPresetOutcome> ModifyVideoEncodingPresetOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ModifyVideoEncodingPresetRequest&, ModifyVideoEncodingPresetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVideoEncodingPresetAsyncHandler;
                typedef Outcome<Core::Error, Model::MoveClassResponse> MoveClassOutcome;
                typedef std::future<MoveClassOutcome> MoveClassOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::MoveClassRequest&, MoveClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MoveClassAsyncHandler;
                typedef Outcome<Core::Error, Model::MoveResourceResponse> MoveResourceOutcome;
                typedef std::future<MoveResourceOutcome> MoveResourceOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::MoveResourceRequest&, MoveResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MoveResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ParseEventResponse> ParseEventOutcome;
                typedef std::future<ParseEventOutcome> ParseEventOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::ParseEventRequest&, ParseEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseEventAsyncHandler;
                typedef Outcome<Core::Error, Model::RevokeResourceAuthorizationResponse> RevokeResourceAuthorizationOutcome;
                typedef std::future<RevokeResourceAuthorizationOutcome> RevokeResourceAuthorizationOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::RevokeResourceAuthorizationRequest&, RevokeResourceAuthorizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevokeResourceAuthorizationAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchMaterialResponse> SearchMaterialOutcome;
                typedef std::future<SearchMaterialOutcome> SearchMaterialOutcomeCallable;
                typedef std::function<void(const CmeClient*, const Model::SearchMaterialRequest&, SearchMaterialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchMaterialAsyncHandler;



                /**
                 *向一个团队中添加团队成员，并且指定成员的角色。
                 * @param req AddTeamMemberRequest
                 * @return AddTeamMemberOutcome
                 */
                AddTeamMemberOutcome AddTeamMember(const Model::AddTeamMemberRequest &request);
                void AddTeamMemberAsync(const Model::AddTeamMemberRequest& request, const AddTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddTeamMemberOutcomeCallable AddTeamMemberCallable(const Model::AddTeamMemberRequest& request);

                /**
                 *复制一个项目，包括项目素材及轨道数据。目前仅普通剪辑及模板制作项目可复制，其它类型的项目不支持复制。
                 * @param req CopyProjectRequest
                 * @return CopyProjectOutcome
                 */
                CopyProjectOutcome CopyProject(const Model::CopyProjectRequest &request);
                void CopyProjectAsync(const Model::CopyProjectRequest& request, const CopyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyProjectOutcomeCallable CopyProjectCallable(const Model::CopyProjectRequest& request);

                /**
                 *新增分类，用于管理素材。分类层数不能超过20。
                 * @param req CreateClassRequest
                 * @return CreateClassOutcome
                 */
                CreateClassOutcome CreateClass(const Model::CreateClassRequest &request);
                void CreateClassAsync(const Model::CreateClassRequest& request, const CreateClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClassOutcomeCallable CreateClassCallable(const Model::CreateClassRequest& request);

                /**
                 *创建媒体链接或分类路径链接，将资源信息链接到目标。
                 * @param req CreateLinkRequest
                 * @return CreateLinkOutcome
                 */
                CreateLinkOutcome CreateLink(const Model::CreateLinkRequest &request);
                void CreateLinkAsync(const Model::CreateLinkRequest& request, const CreateLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLinkOutcomeCallable CreateLinkCallable(const Model::CreateLinkRequest& request);

                /**
                 *创建多媒体创作引擎项目，目前支持的项目类型有：
<li>视频剪辑项目：用于普通视频剪辑；</li>
<li>直播剪辑项目：用于直播流剪辑；</li>
<li>导播台项目：用于云导播台；</li>
<li>视频拆条：用于视频拆条；</li>
<li>录制回放项目：用于直播录制回放；</li>
<li>媒体转推项目：用于媒体文件转直播输出。</li>
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
                 *指定导出的参数，创建一个视频编码配置
                 * @param req CreateVideoEncodingPresetRequest
                 * @return CreateVideoEncodingPresetOutcome
                 */
                CreateVideoEncodingPresetOutcome CreateVideoEncodingPreset(const Model::CreateVideoEncodingPresetRequest &request);
                void CreateVideoEncodingPresetAsync(const Model::CreateVideoEncodingPresetRequest& request, const CreateVideoEncodingPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVideoEncodingPresetOutcomeCallable CreateVideoEncodingPresetCallable(const Model::CreateVideoEncodingPresetRequest& request);

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
                 *删除用户登录态，使用户登出多媒体创作引擎平台。
                 * @param req DeleteLoginStatusRequest
                 * @return DeleteLoginStatusOutcome
                 */
                DeleteLoginStatusOutcome DeleteLoginStatus(const Model::DeleteLoginStatusRequest &request);
                void DeleteLoginStatusAsync(const Model::DeleteLoginStatusRequest& request, const DeleteLoginStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoginStatusOutcomeCallable DeleteLoginStatusCallable(const Model::DeleteLoginStatusRequest& request);

                /**
                 *根据媒体 Id 删除媒体。
                 * @param req DeleteMaterialRequest
                 * @return DeleteMaterialOutcome
                 */
                DeleteMaterialOutcome DeleteMaterial(const Model::DeleteMaterialRequest &request);
                void DeleteMaterialAsync(const Model::DeleteMaterialRequest& request, const DeleteMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMaterialOutcomeCallable DeleteMaterialCallable(const Model::DeleteMaterialRequest& request);

                /**
                 *删除项目。处于推流状态的云转推和点播转直播项目不允许删除，若强行调用删除项目接口会返回失败。
                 * @param req DeleteProjectRequest
                 * @return DeleteProjectOutcome
                 */
                DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest &request);
                void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request);

                /**
                 *删除一个团队。要删除团队，必须满足以下条件：
<li>要删除的团队必须没有归属的素材；</li>
<li>要删除的团队必须没有归属的分类。</li>
                 * @param req DeleteTeamRequest
                 * @return DeleteTeamOutcome
                 */
                DeleteTeamOutcome DeleteTeam(const Model::DeleteTeamRequest &request);
                void DeleteTeamAsync(const Model::DeleteTeamRequest& request, const DeleteTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTeamOutcomeCallable DeleteTeamCallable(const Model::DeleteTeamRequest& request);

                /**
                 *将团队成员从团队中删除。
                 * @param req DeleteTeamMembersRequest
                 * @return DeleteTeamMembersOutcome
                 */
                DeleteTeamMembersOutcome DeleteTeamMembers(const Model::DeleteTeamMembersRequest &request);
                void DeleteTeamMembersAsync(const Model::DeleteTeamMembersRequest& request, const DeleteTeamMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTeamMembersOutcomeCallable DeleteTeamMembersCallable(const Model::DeleteTeamMembersRequest& request);

                /**
                 *删除指定 ID 的视频编码配置
                 * @param req DeleteVideoEncodingPresetRequest
                 * @return DeleteVideoEncodingPresetOutcome
                 */
                DeleteVideoEncodingPresetOutcome DeleteVideoEncodingPreset(const Model::DeleteVideoEncodingPresetRequest &request);
                void DeleteVideoEncodingPresetAsync(const Model::DeleteVideoEncodingPresetRequest& request, const DeleteVideoEncodingPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVideoEncodingPresetOutcomeCallable DeleteVideoEncodingPresetCallable(const Model::DeleteVideoEncodingPresetRequest& request);

                /**
                 *获取平台中所有的已注册账号。
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *获取指定归属者下所有的分类信息。
                 * @param req DescribeClassRequest
                 * @return DescribeClassOutcome
                 */
                DescribeClassOutcome DescribeClass(const Model::DescribeClassRequest &request);
                void DescribeClassAsync(const Model::DescribeClassRequest& request, const DescribeClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassOutcomeCallable DescribeClassCallable(const Model::DescribeClassRequest& request);

                /**
                 *获取用户所加入的团队列表
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
                 *根据媒体 Id 批量获取媒体详情。
                 * @param req DescribeMaterialsRequest
                 * @return DescribeMaterialsOutcome
                 */
                DescribeMaterialsOutcome DescribeMaterials(const Model::DescribeMaterialsRequest &request);
                void DescribeMaterialsAsync(const Model::DescribeMaterialsRequest& request, const DescribeMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMaterialsOutcomeCallable DescribeMaterialsCallable(const Model::DescribeMaterialsRequest& request);

                /**
                 *<li>支持获取所创建的所有平台列表信息；</li>
<li>支持获取指定的平台列表信息。</li>

关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                 * @param req DescribePlatformsRequest
                 * @return DescribePlatformsOutcome
                 */
                DescribePlatformsOutcome DescribePlatforms(const Model::DescribePlatformsRequest &request);
                void DescribePlatformsAsync(const Model::DescribePlatformsRequest& request, const DescribePlatformsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePlatformsOutcomeCallable DescribePlatformsCallable(const Model::DescribePlatformsRequest& request);

                /**
                 *支持根据多种条件过滤出项目列表。
                 * @param req DescribeProjectsRequest
                 * @return DescribeProjectsOutcome
                 */
                DescribeProjectsOutcome DescribeProjects(const Model::DescribeProjectsRequest &request);
                void DescribeProjectsAsync(const Model::DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectsOutcomeCallable DescribeProjectsCallable(const Model::DescribeProjectsRequest& request);

                /**
                 *查询资源被授权的情况。
                 * @param req DescribeResourceAuthorizationRequest
                 * @return DescribeResourceAuthorizationOutcome
                 */
                DescribeResourceAuthorizationOutcome DescribeResourceAuthorization(const Model::DescribeResourceAuthorizationRequest &request);
                void DescribeResourceAuthorizationAsync(const Model::DescribeResourceAuthorizationRequest& request, const DescribeResourceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceAuthorizationOutcomeCallable DescribeResourceAuthorizationCallable(const Model::DescribeResourceAuthorizationRequest& request);

                /**
                 *获取共享空间。当个人或团队A对个人或团队B授权某资源以后，个人或团队B的共享空间就会增加个人或团队A。
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
                 *获取指定团队的成员信息。支持获取指定成员的信息，同时也支持分页拉取指定团队的所有成员信息。
                 * @param req DescribeTeamMembersRequest
                 * @return DescribeTeamMembersOutcome
                 */
                DescribeTeamMembersOutcome DescribeTeamMembers(const Model::DescribeTeamMembersRequest &request);
                void DescribeTeamMembersAsync(const Model::DescribeTeamMembersRequest& request, const DescribeTeamMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTeamMembersOutcomeCallable DescribeTeamMembersCallable(const Model::DescribeTeamMembersRequest& request);

                /**
                 *获取指定团队的信息，拉取团队信息列表。
                 * @param req DescribeTeamsRequest
                 * @return DescribeTeamsOutcome
                 */
                DescribeTeamsOutcome DescribeTeams(const Model::DescribeTeamsRequest &request);
                void DescribeTeamsAsync(const Model::DescribeTeamsRequest& request, const DescribeTeamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTeamsOutcomeCallable DescribeTeamsCallable(const Model::DescribeTeamsRequest& request);

                /**
                 *查询视频编码配置信息。
                 * @param req DescribeVideoEncodingPresetsRequest
                 * @return DescribeVideoEncodingPresetsOutcome
                 */
                DescribeVideoEncodingPresetsOutcome DescribeVideoEncodingPresets(const Model::DescribeVideoEncodingPresetsRequest &request);
                void DescribeVideoEncodingPresetsAsync(const Model::DescribeVideoEncodingPresetsRequest& request, const DescribeVideoEncodingPresetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoEncodingPresetsOutcomeCallable DescribeVideoEncodingPresetsCallable(const Model::DescribeVideoEncodingPresetsRequest& request);

                /**
                 *使用 [视频合成协议](https://cloud.tencent.com/document/product/1156/51225) 合成视频，支持导出视频到 CME 云媒资或者云点播媒资。
                 * @param req ExportVideoByEditorTrackDataRequest
                 * @return ExportVideoByEditorTrackDataOutcome
                 */
                ExportVideoByEditorTrackDataOutcome ExportVideoByEditorTrackData(const Model::ExportVideoByEditorTrackDataRequest &request);
                void ExportVideoByEditorTrackDataAsync(const Model::ExportVideoByEditorTrackDataRequest& request, const ExportVideoByEditorTrackDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVideoByEditorTrackDataOutcomeCallable ExportVideoByEditorTrackDataCallable(const Model::ExportVideoByEditorTrackDataRequest& request);

                /**
                 *使用视频剪辑模板直接导出视频。
                 * @param req ExportVideoByTemplateRequest
                 * @return ExportVideoByTemplateOutcome
                 */
                ExportVideoByTemplateOutcome ExportVideoByTemplate(const Model::ExportVideoByTemplateRequest &request);
                void ExportVideoByTemplateAsync(const Model::ExportVideoByTemplateRequest& request, const ExportVideoByTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVideoByTemplateOutcomeCallable ExportVideoByTemplateCallable(const Model::ExportVideoByTemplateRequest& request);

                /**
                 *使用视频智能拆条数据导出视频，将指定的视频拆条片段导出为一个视频(内测中，请勿使用)。
                 * @param req ExportVideoByVideoSegmentationDataRequest
                 * @return ExportVideoByVideoSegmentationDataOutcome
                 */
                ExportVideoByVideoSegmentationDataOutcome ExportVideoByVideoSegmentationData(const Model::ExportVideoByVideoSegmentationDataRequest &request);
                void ExportVideoByVideoSegmentationDataAsync(const Model::ExportVideoByVideoSegmentationDataRequest& request, const ExportVideoByVideoSegmentationDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVideoByVideoSegmentationDataOutcomeCallable ExportVideoByVideoSegmentationDataCallable(const Model::ExportVideoByVideoSegmentationDataRequest& request);

                /**
                 *导出视频编辑项目，支持指定输出的模板。
                 * @param req ExportVideoEditProjectRequest
                 * @return ExportVideoEditProjectOutcome
                 */
                ExportVideoEditProjectOutcome ExportVideoEditProject(const Model::ExportVideoEditProjectRequest &request);
                void ExportVideoEditProjectAsync(const Model::ExportVideoEditProjectRequest& request, const ExportVideoEditProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVideoEditProjectOutcomeCallable ExportVideoEditProjectCallable(const Model::ExportVideoEditProjectRequest& request);

                /**
                 *平铺分类路径下及其子分类下的所有媒体基础信息，返回当前分类及子分类中的所有媒体的基础信息。
                 * @param req FlattenListMediaRequest
                 * @return FlattenListMediaOutcome
                 */
                FlattenListMediaOutcome FlattenListMedia(const Model::FlattenListMediaRequest &request);
                void FlattenListMediaAsync(const Model::FlattenListMediaRequest& request, const FlattenListMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FlattenListMediaOutcomeCallable FlattenListMediaCallable(const Model::FlattenListMediaRequest& request);

                /**
                 *<li>发起视频智能拆条任务，支持智能生成和平精英集锦、王者荣耀集锦、足球集锦、篮球集锦 、人物集锦、新闻拆条等任务。</li>
<li>和平精英集锦和王者荣耀集锦根据击杀场景进行拆条，足球集锦和篮球集锦根据进球场景进行拆条，人物集锦根据人物人脸特征进行拆条，新闻拆条根据导播进行拆条。</li>
<li>【本接口内测中，暂不建议使用】</li>
                 * @param req GenerateVideoSegmentationSchemeByAiRequest
                 * @return GenerateVideoSegmentationSchemeByAiOutcome
                 */
                GenerateVideoSegmentationSchemeByAiOutcome GenerateVideoSegmentationSchemeByAi(const Model::GenerateVideoSegmentationSchemeByAiRequest &request);
                void GenerateVideoSegmentationSchemeByAiAsync(const Model::GenerateVideoSegmentationSchemeByAiRequest& request, const GenerateVideoSegmentationSchemeByAiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateVideoSegmentationSchemeByAiOutcomeCallable GenerateVideoSegmentationSchemeByAiCallable(const Model::GenerateVideoSegmentationSchemeByAiRequest& request);

                /**
                 *资源归属者对个人或团队授予目标资源的相应权限。
                 * @param req GrantResourceAuthorizationRequest
                 * @return GrantResourceAuthorizationOutcome
                 */
                GrantResourceAuthorizationOutcome GrantResourceAuthorization(const Model::GrantResourceAuthorizationRequest &request);
                void GrantResourceAuthorizationAsync(const Model::GrantResourceAuthorizationRequest& request, const GrantResourceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GrantResourceAuthorizationOutcomeCallable GrantResourceAuthorizationCallable(const Model::GrantResourceAuthorizationRequest& request);

                /**
                 *对媒体转推项目进行操作。
### 操作类型<a id="Operation"></a>
- `AddSource`（添加输入源），项目状态为 Idle、Working 时均可以操作。参见 [示例](#.E7.A4.BA.E4.BE.8B6-.E6.B7.BB.E5.8A.A0.E8.BE.93.E5.85.A5.E6.BA.90)；
- `DeleteSource`（删除输入源），项目状态为 Idle、Working 时均可以操作。参见 [示例](#.E7.A4.BA.E4.BE.8B3-.E5.88.A0.E9.99.A4.E8.BE.93.E5.85.A5.E6.BA.90)；
- `SwitchSource`（切换当前播放的输入源），项目状态为 Working 时可以操作。参见 [示例](#.E7.A4.BA.E4.BE.8B13-.E5.88.87.E6.8D.A2.E5.BD.93.E5.89.8D.E6.92.AD.E6.94.BE.E7.9A.84.E8.BE.93.E5.85.A5.E6.BA.90)
- `AddDestination`（ 添加输出源），项目状态为 Idle、Working 时均可以操作。参见 [示例](#.E7.A4.BA.E4.BE.8B7-.E6.B7.BB.E5.8A.A0.E8.BE.93.E5.87.BA.E6.BA.90)；
- `DeleteDestination`（删除输出源），项目状态为 Idle、Working 时均可以操作。参见 [示例](#.E7.A4.BA.E4.BE.8B4-.E5.88.A0.E9.99.A4.E8.BE.93.E5.87.BA.E6.BA.90)；
- `EnableDestination`（启动输出源），项目状态为 Working 时可以操作。参见 [示例](#.E7.A4.BA.E4.BE.8B5-.E5.90.AF.E5.8A.A8.E8.BE.93.E5.87.BA.E6.BA.90)；
- `DisableDestination`（停止输出源），项目状态为 Working 时可以操作。参见 [示例](#.E7.A4.BA.E4.BE.8B2-.E5.81.9C.E6.AD.A2.E8.BE.93.E5.87.BA.E6.BA.90)；
- `ModifyDestination`（修改输出源），项目状态为 Idle、Working 时均可以操作。参见 [示例](#.E7.A4.BA.E4.BE.8B1-.E4.BF.AE.E6.94.B9.E8.BE.93.E5.87.BA.E6.BA.90)；
- `Start`（启动媒体转推），项目状态为 Idle 时可以操作。参见 [示例](#.E7.A4.BA.E4.BE.8B10-.E5.90.AF.E5.8A.A8.E5.AA.92.E4.BD.93.E8.BD.AC.E6.8E.A8)。发起 Start 请求成功后，媒体转推项目开始启动，30秒内还需要再进行一次 Confirm操作进行确认；
- `Confirm`（确认媒体转推项目启动），项目状态为 Working 时可以操作。参见 [示例](#.E7.A4.BA.E4.BE.8B14-.E7.A1.AE.E8.AE.A4.E5.AA.92.E4.BD.93.E8.BD.AC.E6.8E.A8.E9.A1.B9.E7.9B.AE.E5.90.AF.E5.8A.A8)；
- `Stop`（停止媒体转推），项目状态为 Working 时可以操作。参见 [示例](#.E7.A4.BA.E4.BE.8B9-.E5.81.9C.E6.AD.A2.E5.AA.92.E4.BD.93.E8.BD.AC.E6.8E.A8)；
- `ModifyOutputMediaSetting`（修改媒体输出配置），项目状态为 Idle 时可以操作。参见 [示例](#.E7.A4.BA.E4.BE.8B12-.E4.BF.AE.E6.94.B9.E8.BE.93.E5.87.BA.E7.9A.84.E5.AA.92.E4.BD.93.E9.85.8D.E7.BD.AE)；
- `ModifyPlaySetting`（修改播放结束时间），项目状态为 Idle、Working 时均可以操作。参见 [示例](#.E7.A4.BA.E4.BE.8B8-.E4.BF.AE.E6.94.B9.E7.BB.93.E6.9D.9F.E6.97.B6.E9.97.B4);
- `DescribePlayInfo`（查询播放信息），项目状态为 Idle、Working 时均可以操作。参见 [示例](#.E7.A4.BA.E4.BE.8B15-.E6.9F.A5.E8.AF.A2.E5.AA.92.E4.BD.93.E8.BD.AC.E6.8E.A8.E9.A1.B9.E7.9B.AE.E7.9A.84.E6.92.AD.E6.94.BE.E4.BF.A1.E6.81.AF)。
                 * @param req HandleMediaCastProjectRequest
                 * @return HandleMediaCastProjectOutcome
                 */
                HandleMediaCastProjectOutcome HandleMediaCastProject(const Model::HandleMediaCastProjectRequest &request);
                void HandleMediaCastProjectAsync(const Model::HandleMediaCastProjectRequest& request, const HandleMediaCastProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HandleMediaCastProjectOutcomeCallable HandleMediaCastProjectCallable(const Model::HandleMediaCastProjectRequest& request);

                /**
                 *<font color=red>本接口废弃，可创建媒体转推项目替代，操作媒体转推项目可使用 <b>[HandleMediaCastProject 接口](/document/product/1156/87841) </b>实现。</font>

### 操作类型<a id="Operation"></a>
- `AddInput`（添加输入源），包括：
	- 添加直播拉流输入源，参见 [示例1](#.E7.A4.BA.E4.BE.8B1-.E6.B7.BB.E5.8A.A0.E7.9B.B4.E6.92.AD.E6.8B.89.E6.B5.81.E8.BE.93.E5.85.A5.E6.BA.90)；
	- 添加直播推流输入源，参见 [示例2](#.E7.A4.BA.E4.BE.8B2-.E6.B7.BB.E5.8A.A0.E7.9B.B4.E6.92.AD.E6.8E.A8.E6.B5.81.E8.BE.93.E5.85.A5.E6.BA.90)；
	- 添加点播拉流输入源，参见 [示例3](#.E7.A4.BA.E4.BE.8B3-.E6.B7.BB.E5.8A.A0.E7.82.B9.E6.92.AD.E6.8B.89.E6.B5.81.E8.BE.93.E5.85.A5.E6.BA.90.E4.B8.94.E5.BE.AA.E7.8E.AF.E6.92.AD.E6.94.BE)、[示例4](#.E7.A4.BA.E4.BE.8B4-.E6.B7.BB.E5.8A.A0.E7.82.B9.E6.92.AD.E6.8B.89.E6.B5.81.E8.BE.93.E5.85.A5.E6.BA.90.E4.B8.94.E5.8D.95.E6.AC.A1.E6.92.AD.E6.94.BE)；
- `DeleteInput`（删除输入源），参见 [示例5](#.E7.A4.BA.E4.BE.8B5-.E5.88.A0.E9.99.A4.E8.BE.93.E5.85.A5.E6.BA.90)；
- `ModifyInput`（修改输入源），参见 [示例6](#.E7.A4.BA.E4.BE.8B6-.E4.BF.AE.E6.94.B9.E8.BE.93.E5.85.A5.E6.BA.90)；
- `AddOutput`（ 添加输出源），参见 [示例7](#.E7.A4.BA.E4.BE.8B7-.E6.B7.BB.E5.8A.A0.E8.BE.93.E5.87.BA.E6.BA.90)；
- `DeleteOutput`（删除输出源），参见 [示例8](#.E7.A4.BA.E4.BE.8B8-.E5.88.A0.E9.99.A4.E8.BE.93.E5.87.BA.E6.BA.90)；
- `ModifyOutput`（修改输出源），参见 [示例9](#.E7.A4.BA.E4.BE.8B9-.E4.BF.AE.E6.94.B9.E8.BE.93.E5.87.BA.E6.BA.90)；
- `Start`（开启转推），参见 [示例10](#.E7.A4.BA.E4.BE.8B10-.E5.BC.80.E5.90.AF.E4.BA.91.E8.BD.AC.E6.8E.A8)；
- `Stop`（停止转推），参见 [示例11](#.E7.A4.BA.E4.BE.8B11-.E5.81.9C.E6.AD.A2.E4.BA.91.E8.BD.AC.E6.8E.A8)；
- `SwitchInput`（切换输入源），参见 [示例12](#.E7.A4.BA.E4.BE.8B12-.E5.88.87.E6.8D.A2.E8.BE.93.E5.85.A5.E6.BA.90)；
- `ModifyCurrentStopTime`（修改当前计划结束时间），参见 [示例13](#.E7.A4.BA.E4.BE.8B13-.E4.BF.AE.E6.94.B9.E8.BD.AC.E6.8E.A8.E7.BB.93.E6.9D.9F.E6.97.B6.E9.97.B4);
- `DescribeInputPlayInfo`（查询播放进度），参见 [示例14](#.E7.A4.BA.E4.BE.8B14-.E6.9F.A5.E8.AF.A2.E7.82.B9.E6.92.AD.E8.BE.93.E5.85.A5.E6.BA.90.E6.92.AD.E6.94.BE.E8.BF.9B.E5.BA.A6)。
                 * @param req HandleStreamConnectProjectRequest
                 * @return HandleStreamConnectProjectOutcome
                 */
                HandleStreamConnectProjectOutcome HandleStreamConnectProject(const Model::HandleStreamConnectProjectRequest &request);
                void HandleStreamConnectProjectAsync(const Model::HandleStreamConnectProjectRequest& request, const HandleStreamConnectProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HandleStreamConnectProjectOutcomeCallable HandleStreamConnectProjectCallable(const Model::HandleStreamConnectProjectRequest& request);

                /**
                 *将云点播媒资文件导入到多媒体创作引擎媒体资源库。支持导入媒体归属团队或者个人。
                 * @param req ImportMaterialRequest
                 * @return ImportMaterialOutcome
                 */
                ImportMaterialOutcome ImportMaterial(const Model::ImportMaterialRequest &request);
                void ImportMaterialAsync(const Model::ImportMaterialRequest& request, const ImportMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportMaterialOutcomeCallable ImportMaterialCallable(const Model::ImportMaterialRequest& request);

                /**
                 *将云点播中的媒资或者用户自有媒资文件添加到项目中与项目关联，供后续视频编辑使用。目前仅视频编辑项目和智能视频拆条项目有效。
                 * @param req ImportMediaToProjectRequest
                 * @return ImportMediaToProjectOutcome
                 */
                ImportMediaToProjectOutcome ImportMediaToProject(const Model::ImportMediaToProjectRequest &request);
                void ImportMediaToProjectAsync(const Model::ImportMediaToProjectRequest& request, const ImportMediaToProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportMediaToProjectOutcomeCallable ImportMediaToProjectCallable(const Model::ImportMediaToProjectRequest& request);

                /**
                 *浏览当前分类路径下的资源，包括媒体文件和子分类，返回媒资基础信息和分类信息。
                 * @param req ListMediaRequest
                 * @return ListMediaOutcome
                 */
                ListMediaOutcome ListMedia(const Model::ListMediaRequest &request);
                void ListMediaAsync(const Model::ListMediaRequest& request, const ListMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListMediaOutcomeCallable ListMediaCallable(const Model::ListMediaRequest& request);

                /**
                 *修改媒体信息，支持修改媒体名称、分类路径、标签等信息。
                 * @param req ModifyMaterialRequest
                 * @return ModifyMaterialOutcome
                 */
                ModifyMaterialOutcome ModifyMaterial(const Model::ModifyMaterialRequest &request);
                void ModifyMaterialAsync(const Model::ModifyMaterialRequest& request, const ModifyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMaterialOutcomeCallable ModifyMaterialCallable(const Model::ModifyMaterialRequest& request);

                /**
                 *修改项目信息。
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
                 *修改视频编码配置信息。
                 * @param req ModifyVideoEncodingPresetRequest
                 * @return ModifyVideoEncodingPresetOutcome
                 */
                ModifyVideoEncodingPresetOutcome ModifyVideoEncodingPreset(const Model::ModifyVideoEncodingPresetRequest &request);
                void ModifyVideoEncodingPresetAsync(const Model::ModifyVideoEncodingPresetRequest& request, const ModifyVideoEncodingPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVideoEncodingPresetOutcomeCallable ModifyVideoEncodingPresetCallable(const Model::ModifyVideoEncodingPresetRequest& request);

                /**
                 *移动某一个分类到另外一个分类下，也可用于分类重命名。
如果 SourceClassPath = /素材/视频/NBA，DestinationClassPath = /素材/视频/篮球
<li>当 DestinationClassPath 不存在时候，操作结果为重命名 ClassPath；</li>
<li>当 DestinationClassPath 存在时候，操作结果为产生新目录 /素材/视频/篮球/NBA</li>
                 * @param req MoveClassRequest
                 * @return MoveClassOutcome
                 */
                MoveClassOutcome MoveClass(const Model::MoveClassRequest &request);
                void MoveClassAsync(const Model::MoveClassRequest& request, const MoveClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MoveClassOutcomeCallable MoveClassCallable(const Model::MoveClassRequest& request);

                /**
                 *移动资源，支持跨个人或团队移动媒体以及分类。如果填写了Operator，则需要校验用户对媒体和分类资源的访问以及写权限。
<li>当原始资源为媒体时，该接口效果为将该媒体移动到目标分类下面；</li>
<li>当原始资源为分类时，该接口效果为将原始分类移动到目标分类或者是重命名。</li>
 如果 SourceResource.Resource.Id = /素材/视频/NBA，DestinationResource.Resource.Id= /素材/视频/篮球 
<li>当 DestinationResource.Resource.Id 不存在时候且原始资源与目标资源归属相同，操作结果为重命名原始分类；</li>
<li>当 DestinationResource.Resource.Id 存在时候，操作结果为产生新目录 /素材/视频/篮球/NBA</li>
                 * @param req MoveResourceRequest
                 * @return MoveResourceOutcome
                 */
                MoveResourceOutcome MoveResource(const Model::MoveResourceRequest &request);
                void MoveResourceAsync(const Model::MoveResourceRequest& request, const MoveResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MoveResourceOutcomeCallable MoveResourceCallable(const Model::MoveResourceRequest& request);

                /**
                 *该接口接受多媒体创作引擎回调给业务的事件内容，将其转化为对应的 EventContent 结构。请不要实际调用该接口，只需要将接收到的事件内容直接使用 JSON 解析到 EventContent  结构即可使用。
                 * @param req ParseEventRequest
                 * @return ParseEventOutcome
                 */
                ParseEventOutcome ParseEvent(const Model::ParseEventRequest &request);
                void ParseEventAsync(const Model::ParseEventRequest& request, const ParseEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseEventOutcomeCallable ParseEventCallable(const Model::ParseEventRequest& request);

                /**
                 *资源所属实体对目标实体撤销目标资源的相应权限，若原本没有相应权限则不产生变更。
                 * @param req RevokeResourceAuthorizationRequest
                 * @return RevokeResourceAuthorizationOutcome
                 */
                RevokeResourceAuthorizationOutcome RevokeResourceAuthorization(const Model::RevokeResourceAuthorizationRequest &request);
                void RevokeResourceAuthorizationAsync(const Model::RevokeResourceAuthorizationRequest& request, const RevokeResourceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevokeResourceAuthorizationOutcomeCallable RevokeResourceAuthorizationCallable(const Model::RevokeResourceAuthorizationRequest& request);

                /**
                 *根据检索条件搜索媒体，返回媒体的基本信息。
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
