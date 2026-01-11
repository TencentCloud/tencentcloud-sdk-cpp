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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_DATAAGENTCLIENT_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_DATAAGENTCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dataagent/v20250513/model/AddChunkRequest.h>
#include <tencentcloud/dataagent/v20250513/model/AddChunkResponse.h>
#include <tencentcloud/dataagent/v20250513/model/ChatAIRequest.h>
#include <tencentcloud/dataagent/v20250513/model/ChatAIResponse.h>
#include <tencentcloud/dataagent/v20250513/model/CreateDataAgentSessionRequest.h>
#include <tencentcloud/dataagent/v20250513/model/CreateDataAgentSessionResponse.h>
#include <tencentcloud/dataagent/v20250513/model/DeleteChunkRequest.h>
#include <tencentcloud/dataagent/v20250513/model/DeleteChunkResponse.h>
#include <tencentcloud/dataagent/v20250513/model/DeleteDataAgentSessionRequest.h>
#include <tencentcloud/dataagent/v20250513/model/DeleteDataAgentSessionResponse.h>
#include <tencentcloud/dataagent/v20250513/model/GetJobsByKnowledgeBaseIdRequest.h>
#include <tencentcloud/dataagent/v20250513/model/GetJobsByKnowledgeBaseIdResponse.h>
#include <tencentcloud/dataagent/v20250513/model/GetKnowledgeBaseFileListRequest.h>
#include <tencentcloud/dataagent/v20250513/model/GetKnowledgeBaseFileListResponse.h>
#include <tencentcloud/dataagent/v20250513/model/GetKnowledgeBaseListRequest.h>
#include <tencentcloud/dataagent/v20250513/model/GetKnowledgeBaseListResponse.h>
#include <tencentcloud/dataagent/v20250513/model/GetSessionDetailsRequest.h>
#include <tencentcloud/dataagent/v20250513/model/GetSessionDetailsResponse.h>
#include <tencentcloud/dataagent/v20250513/model/GetUploadJobDetailsRequest.h>
#include <tencentcloud/dataagent/v20250513/model/GetUploadJobDetailsResponse.h>
#include <tencentcloud/dataagent/v20250513/model/ModifyChunkRequest.h>
#include <tencentcloud/dataagent/v20250513/model/ModifyChunkResponse.h>
#include <tencentcloud/dataagent/v20250513/model/ModifyKnowledgeBaseRequest.h>
#include <tencentcloud/dataagent/v20250513/model/ModifyKnowledgeBaseResponse.h>
#include <tencentcloud/dataagent/v20250513/model/ModifyUserAuthorityRequest.h>
#include <tencentcloud/dataagent/v20250513/model/ModifyUserAuthorityResponse.h>
#include <tencentcloud/dataagent/v20250513/model/QueryChunkListRequest.h>
#include <tencentcloud/dataagent/v20250513/model/QueryChunkListResponse.h>
#include <tencentcloud/dataagent/v20250513/model/QueryUserAuthorityRequest.h>
#include <tencentcloud/dataagent/v20250513/model/QueryUserAuthorityResponse.h>
#include <tencentcloud/dataagent/v20250513/model/StopChatAIRequest.h>
#include <tencentcloud/dataagent/v20250513/model/StopChatAIResponse.h>
#include <tencentcloud/dataagent/v20250513/model/UploadAndCommitFileRequest.h>
#include <tencentcloud/dataagent/v20250513/model/UploadAndCommitFileResponse.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            class DataagentClient : public AbstractClient
            {
            public:
                DataagentClient(const Credential &credential, const std::string &region);
                DataagentClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddChunkResponse> AddChunkOutcome;
                typedef std::future<AddChunkOutcome> AddChunkOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::AddChunkRequest&, AddChunkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddChunkAsyncHandler;
                typedef Outcome<Core::Error, Model::ChatAIResponse> ChatAIOutcome;
                typedef std::future<ChatAIOutcome> ChatAIOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::ChatAIRequest&, ChatAIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChatAIAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataAgentSessionResponse> CreateDataAgentSessionOutcome;
                typedef std::future<CreateDataAgentSessionOutcome> CreateDataAgentSessionOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::CreateDataAgentSessionRequest&, CreateDataAgentSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataAgentSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteChunkResponse> DeleteChunkOutcome;
                typedef std::future<DeleteChunkOutcome> DeleteChunkOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::DeleteChunkRequest&, DeleteChunkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteChunkAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDataAgentSessionResponse> DeleteDataAgentSessionOutcome;
                typedef std::future<DeleteDataAgentSessionOutcome> DeleteDataAgentSessionOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::DeleteDataAgentSessionRequest&, DeleteDataAgentSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataAgentSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::GetJobsByKnowledgeBaseIdResponse> GetJobsByKnowledgeBaseIdOutcome;
                typedef std::future<GetJobsByKnowledgeBaseIdOutcome> GetJobsByKnowledgeBaseIdOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::GetJobsByKnowledgeBaseIdRequest&, GetJobsByKnowledgeBaseIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetJobsByKnowledgeBaseIdAsyncHandler;
                typedef Outcome<Core::Error, Model::GetKnowledgeBaseFileListResponse> GetKnowledgeBaseFileListOutcome;
                typedef std::future<GetKnowledgeBaseFileListOutcome> GetKnowledgeBaseFileListOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::GetKnowledgeBaseFileListRequest&, GetKnowledgeBaseFileListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetKnowledgeBaseFileListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetKnowledgeBaseListResponse> GetKnowledgeBaseListOutcome;
                typedef std::future<GetKnowledgeBaseListOutcome> GetKnowledgeBaseListOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::GetKnowledgeBaseListRequest&, GetKnowledgeBaseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetKnowledgeBaseListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSessionDetailsResponse> GetSessionDetailsOutcome;
                typedef std::future<GetSessionDetailsOutcome> GetSessionDetailsOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::GetSessionDetailsRequest&, GetSessionDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSessionDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUploadJobDetailsResponse> GetUploadJobDetailsOutcome;
                typedef std::future<GetUploadJobDetailsOutcome> GetUploadJobDetailsOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::GetUploadJobDetailsRequest&, GetUploadJobDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUploadJobDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyChunkResponse> ModifyChunkOutcome;
                typedef std::future<ModifyChunkOutcome> ModifyChunkOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::ModifyChunkRequest&, ModifyChunkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyChunkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyKnowledgeBaseResponse> ModifyKnowledgeBaseOutcome;
                typedef std::future<ModifyKnowledgeBaseOutcome> ModifyKnowledgeBaseOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::ModifyKnowledgeBaseRequest&, ModifyKnowledgeBaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyKnowledgeBaseAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserAuthorityResponse> ModifyUserAuthorityOutcome;
                typedef std::future<ModifyUserAuthorityOutcome> ModifyUserAuthorityOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::ModifyUserAuthorityRequest&, ModifyUserAuthorityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAuthorityAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryChunkListResponse> QueryChunkListOutcome;
                typedef std::future<QueryChunkListOutcome> QueryChunkListOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::QueryChunkListRequest&, QueryChunkListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryChunkListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryUserAuthorityResponse> QueryUserAuthorityOutcome;
                typedef std::future<QueryUserAuthorityOutcome> QueryUserAuthorityOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::QueryUserAuthorityRequest&, QueryUserAuthorityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserAuthorityAsyncHandler;
                typedef Outcome<Core::Error, Model::StopChatAIResponse> StopChatAIOutcome;
                typedef std::future<StopChatAIOutcome> StopChatAIOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::StopChatAIRequest&, StopChatAIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopChatAIAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadAndCommitFileResponse> UploadAndCommitFileOutcome;
                typedef std::future<UploadAndCommitFileOutcome> UploadAndCommitFileOutcomeCallable;
                typedef std::function<void(const DataagentClient*, const Model::UploadAndCommitFileRequest&, UploadAndCommitFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadAndCommitFileAsyncHandler;



                /**
                 *文档切片新增
                 * @param req AddChunkRequest
                 * @return AddChunkOutcome
                 */
                AddChunkOutcome AddChunk(const Model::AddChunkRequest &request);
                void AddChunkAsync(const Model::AddChunkRequest& request, const AddChunkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddChunkOutcomeCallable AddChunkCallable(const Model::AddChunkRequest& request);

                /**
                 *提供DataAgent 产品服务API
                 * @param req ChatAIRequest
                 * @return ChatAIOutcome
                 */
                ChatAIOutcome ChatAI(const Model::ChatAIRequest &request);
                void ChatAIAsync(const Model::ChatAIRequest& request, const ChatAIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChatAIOutcomeCallable ChatAICallable(const Model::ChatAIRequest& request);

                /**
                 *生成DataAgent 会话ID
                 * @param req CreateDataAgentSessionRequest
                 * @return CreateDataAgentSessionOutcome
                 */
                CreateDataAgentSessionOutcome CreateDataAgentSession(const Model::CreateDataAgentSessionRequest &request);
                void CreateDataAgentSessionAsync(const Model::CreateDataAgentSessionRequest& request, const CreateDataAgentSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataAgentSessionOutcomeCallable CreateDataAgentSessionCallable(const Model::CreateDataAgentSessionRequest& request);

                /**
                 *文档切片删除
                 * @param req DeleteChunkRequest
                 * @return DeleteChunkOutcome
                 */
                DeleteChunkOutcome DeleteChunk(const Model::DeleteChunkRequest &request);
                void DeleteChunkAsync(const Model::DeleteChunkRequest& request, const DeleteChunkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteChunkOutcomeCallable DeleteChunkCallable(const Model::DeleteChunkRequest& request);

                /**
                 *删除会话
                 * @param req DeleteDataAgentSessionRequest
                 * @return DeleteDataAgentSessionOutcome
                 */
                DeleteDataAgentSessionOutcome DeleteDataAgentSession(const Model::DeleteDataAgentSessionRequest &request);
                void DeleteDataAgentSessionAsync(const Model::DeleteDataAgentSessionRequest& request, const DeleteDataAgentSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDataAgentSessionOutcomeCallable DeleteDataAgentSessionCallable(const Model::DeleteDataAgentSessionRequest& request);

                /**
                 *根据知识库id查询jobs 列表
                 * @param req GetJobsByKnowledgeBaseIdRequest
                 * @return GetJobsByKnowledgeBaseIdOutcome
                 */
                GetJobsByKnowledgeBaseIdOutcome GetJobsByKnowledgeBaseId(const Model::GetJobsByKnowledgeBaseIdRequest &request);
                void GetJobsByKnowledgeBaseIdAsync(const Model::GetJobsByKnowledgeBaseIdRequest& request, const GetJobsByKnowledgeBaseIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetJobsByKnowledgeBaseIdOutcomeCallable GetJobsByKnowledgeBaseIdCallable(const Model::GetJobsByKnowledgeBaseIdRequest& request);

                /**
                 *获取知识库文件信息列表
                 * @param req GetKnowledgeBaseFileListRequest
                 * @return GetKnowledgeBaseFileListOutcome
                 */
                GetKnowledgeBaseFileListOutcome GetKnowledgeBaseFileList(const Model::GetKnowledgeBaseFileListRequest &request);
                void GetKnowledgeBaseFileListAsync(const Model::GetKnowledgeBaseFileListRequest& request, const GetKnowledgeBaseFileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetKnowledgeBaseFileListOutcomeCallable GetKnowledgeBaseFileListCallable(const Model::GetKnowledgeBaseFileListRequest& request);

                /**
                 *获取知识库列表
                 * @param req GetKnowledgeBaseListRequest
                 * @return GetKnowledgeBaseListOutcome
                 */
                GetKnowledgeBaseListOutcome GetKnowledgeBaseList(const Model::GetKnowledgeBaseListRequest &request);
                void GetKnowledgeBaseListAsync(const Model::GetKnowledgeBaseListRequest& request, const GetKnowledgeBaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetKnowledgeBaseListOutcomeCallable GetKnowledgeBaseListCallable(const Model::GetKnowledgeBaseListRequest& request);

                /**
                 *获取用户会话记录详情列表
                 * @param req GetSessionDetailsRequest
                 * @return GetSessionDetailsOutcome
                 */
                GetSessionDetailsOutcome GetSessionDetails(const Model::GetSessionDetailsRequest &request);
                void GetSessionDetailsAsync(const Model::GetSessionDetailsRequest& request, const GetSessionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSessionDetailsOutcomeCallable GetSessionDetailsCallable(const Model::GetSessionDetailsRequest& request);

                /**
                 *查询上传任务
                 * @param req GetUploadJobDetailsRequest
                 * @return GetUploadJobDetailsOutcome
                 */
                GetUploadJobDetailsOutcome GetUploadJobDetails(const Model::GetUploadJobDetailsRequest &request);
                void GetUploadJobDetailsAsync(const Model::GetUploadJobDetailsRequest& request, const GetUploadJobDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUploadJobDetailsOutcomeCallable GetUploadJobDetailsCallable(const Model::GetUploadJobDetailsRequest& request);

                /**
                 *编辑修改分片
                 * @param req ModifyChunkRequest
                 * @return ModifyChunkOutcome
                 */
                ModifyChunkOutcome ModifyChunk(const Model::ModifyChunkRequest &request);
                void ModifyChunkAsync(const Model::ModifyChunkRequest& request, const ModifyChunkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyChunkOutcomeCallable ModifyChunkCallable(const Model::ModifyChunkRequest& request);

                /**
                 *操作知识库
                 * @param req ModifyKnowledgeBaseRequest
                 * @return ModifyKnowledgeBaseOutcome
                 */
                ModifyKnowledgeBaseOutcome ModifyKnowledgeBase(const Model::ModifyKnowledgeBaseRequest &request);
                void ModifyKnowledgeBaseAsync(const Model::ModifyKnowledgeBaseRequest& request, const ModifyKnowledgeBaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyKnowledgeBaseOutcomeCallable ModifyKnowledgeBaseCallable(const Model::ModifyKnowledgeBaseRequest& request);

                /**
                 *修改对象权限
                 * @param req ModifyUserAuthorityRequest
                 * @return ModifyUserAuthorityOutcome
                 */
                ModifyUserAuthorityOutcome ModifyUserAuthority(const Model::ModifyUserAuthorityRequest &request);
                void ModifyUserAuthorityAsync(const Model::ModifyUserAuthorityRequest& request, const ModifyUserAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserAuthorityOutcomeCallable ModifyUserAuthorityCallable(const Model::ModifyUserAuthorityRequest& request);

                /**
                 *文档切片查询
                 * @param req QueryChunkListRequest
                 * @return QueryChunkListOutcome
                 */
                QueryChunkListOutcome QueryChunkList(const Model::QueryChunkListRequest &request);
                void QueryChunkListAsync(const Model::QueryChunkListRequest& request, const QueryChunkListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryChunkListOutcomeCallable QueryChunkListCallable(const Model::QueryChunkListRequest& request);

                /**
                 *查询对象权限
                 * @param req QueryUserAuthorityRequest
                 * @return QueryUserAuthorityOutcome
                 */
                QueryUserAuthorityOutcome QueryUserAuthority(const Model::QueryUserAuthorityRequest &request);
                void QueryUserAuthorityAsync(const Model::QueryUserAuthorityRequest& request, const QueryUserAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryUserAuthorityOutcomeCallable QueryUserAuthorityCallable(const Model::QueryUserAuthorityRequest& request);

                /**
                 *中断DataAgent的回答输出
                 * @param req StopChatAIRequest
                 * @return StopChatAIOutcome
                 */
                StopChatAIOutcome StopChatAI(const Model::StopChatAIRequest &request);
                void StopChatAIAsync(const Model::StopChatAIRequest& request, const StopChatAIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopChatAIOutcomeCallable StopChatAICallable(const Model::StopChatAIRequest& request);

                /**
                 *上传提交文件
                 * @param req UploadAndCommitFileRequest
                 * @return UploadAndCommitFileOutcome
                 */
                UploadAndCommitFileOutcome UploadAndCommitFile(const Model::UploadAndCommitFileRequest &request);
                void UploadAndCommitFileAsync(const Model::UploadAndCommitFileRequest& request, const UploadAndCommitFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadAndCommitFileOutcomeCallable UploadAndCommitFileCallable(const Model::UploadAndCommitFileRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_DATAAGENTCLIENT_H_
