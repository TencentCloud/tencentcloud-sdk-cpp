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

#ifndef TENCENTCLOUD_TCI_V20190318_TCICLIENT_H_
#define TENCENTCLOUD_TCI_V20190318_TCICLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tci/v20190318/model/AIAssistantRequest.h>
#include <tencentcloud/tci/v20190318/model/AIAssistantResponse.h>
#include <tencentcloud/tci/v20190318/model/CancelTaskRequest.h>
#include <tencentcloud/tci/v20190318/model/CancelTaskResponse.h>
#include <tencentcloud/tci/v20190318/model/CheckAttendanceRequest.h>
#include <tencentcloud/tci/v20190318/model/CheckAttendanceResponse.h>
#include <tencentcloud/tci/v20190318/model/CheckFacePhotoRequest.h>
#include <tencentcloud/tci/v20190318/model/CheckFacePhotoResponse.h>
#include <tencentcloud/tci/v20190318/model/CreateFaceRequest.h>
#include <tencentcloud/tci/v20190318/model/CreateFaceResponse.h>
#include <tencentcloud/tci/v20190318/model/CreateLibraryRequest.h>
#include <tencentcloud/tci/v20190318/model/CreateLibraryResponse.h>
#include <tencentcloud/tci/v20190318/model/CreatePersonRequest.h>
#include <tencentcloud/tci/v20190318/model/CreatePersonResponse.h>
#include <tencentcloud/tci/v20190318/model/CreateVocabRequest.h>
#include <tencentcloud/tci/v20190318/model/CreateVocabResponse.h>
#include <tencentcloud/tci/v20190318/model/CreateVocabLibRequest.h>
#include <tencentcloud/tci/v20190318/model/CreateVocabLibResponse.h>
#include <tencentcloud/tci/v20190318/model/DeleteFaceRequest.h>
#include <tencentcloud/tci/v20190318/model/DeleteFaceResponse.h>
#include <tencentcloud/tci/v20190318/model/DeleteLibraryRequest.h>
#include <tencentcloud/tci/v20190318/model/DeleteLibraryResponse.h>
#include <tencentcloud/tci/v20190318/model/DeletePersonRequest.h>
#include <tencentcloud/tci/v20190318/model/DeletePersonResponse.h>
#include <tencentcloud/tci/v20190318/model/DeleteVocabRequest.h>
#include <tencentcloud/tci/v20190318/model/DeleteVocabResponse.h>
#include <tencentcloud/tci/v20190318/model/DeleteVocabLibRequest.h>
#include <tencentcloud/tci/v20190318/model/DeleteVocabLibResponse.h>
#include <tencentcloud/tci/v20190318/model/DescribeAITaskResultRequest.h>
#include <tencentcloud/tci/v20190318/model/DescribeAITaskResultResponse.h>
#include <tencentcloud/tci/v20190318/model/DescribeAttendanceResultRequest.h>
#include <tencentcloud/tci/v20190318/model/DescribeAttendanceResultResponse.h>
#include <tencentcloud/tci/v20190318/model/DescribeAudioTaskRequest.h>
#include <tencentcloud/tci/v20190318/model/DescribeAudioTaskResponse.h>
#include <tencentcloud/tci/v20190318/model/DescribeConversationTaskRequest.h>
#include <tencentcloud/tci/v20190318/model/DescribeConversationTaskResponse.h>
#include <tencentcloud/tci/v20190318/model/DescribeHighlightResultRequest.h>
#include <tencentcloud/tci/v20190318/model/DescribeHighlightResultResponse.h>
#include <tencentcloud/tci/v20190318/model/DescribeImageTaskRequest.h>
#include <tencentcloud/tci/v20190318/model/DescribeImageTaskResponse.h>
#include <tencentcloud/tci/v20190318/model/DescribeImageTaskStatisticRequest.h>
#include <tencentcloud/tci/v20190318/model/DescribeImageTaskStatisticResponse.h>
#include <tencentcloud/tci/v20190318/model/DescribeLibrariesRequest.h>
#include <tencentcloud/tci/v20190318/model/DescribeLibrariesResponse.h>
#include <tencentcloud/tci/v20190318/model/DescribePersonRequest.h>
#include <tencentcloud/tci/v20190318/model/DescribePersonResponse.h>
#include <tencentcloud/tci/v20190318/model/DescribePersonsRequest.h>
#include <tencentcloud/tci/v20190318/model/DescribePersonsResponse.h>
#include <tencentcloud/tci/v20190318/model/DescribeVocabRequest.h>
#include <tencentcloud/tci/v20190318/model/DescribeVocabResponse.h>
#include <tencentcloud/tci/v20190318/model/DescribeVocabLibRequest.h>
#include <tencentcloud/tci/v20190318/model/DescribeVocabLibResponse.h>
#include <tencentcloud/tci/v20190318/model/ModifyLibraryRequest.h>
#include <tencentcloud/tci/v20190318/model/ModifyLibraryResponse.h>
#include <tencentcloud/tci/v20190318/model/ModifyPersonRequest.h>
#include <tencentcloud/tci/v20190318/model/ModifyPersonResponse.h>
#include <tencentcloud/tci/v20190318/model/SubmitAudioTaskRequest.h>
#include <tencentcloud/tci/v20190318/model/SubmitAudioTaskResponse.h>
#include <tencentcloud/tci/v20190318/model/SubmitCheckAttendanceTaskRequest.h>
#include <tencentcloud/tci/v20190318/model/SubmitCheckAttendanceTaskResponse.h>
#include <tencentcloud/tci/v20190318/model/SubmitConversationTaskRequest.h>
#include <tencentcloud/tci/v20190318/model/SubmitConversationTaskResponse.h>
#include <tencentcloud/tci/v20190318/model/SubmitDoubleVideoHighlightsRequest.h>
#include <tencentcloud/tci/v20190318/model/SubmitDoubleVideoHighlightsResponse.h>
#include <tencentcloud/tci/v20190318/model/SubmitHighlightsRequest.h>
#include <tencentcloud/tci/v20190318/model/SubmitHighlightsResponse.h>
#include <tencentcloud/tci/v20190318/model/SubmitImageTaskRequest.h>
#include <tencentcloud/tci/v20190318/model/SubmitImageTaskResponse.h>
#include <tencentcloud/tci/v20190318/model/TransmitAudioStreamRequest.h>
#include <tencentcloud/tci/v20190318/model/TransmitAudioStreamResponse.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            class TciClient : public AbstractClient
            {
            public:
                TciClient(const Credential &credential, const std::string &region);
                TciClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AIAssistantResponse> AIAssistantOutcome;
                typedef std::future<AIAssistantOutcome> AIAssistantOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::AIAssistantRequest&, AIAssistantOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AIAssistantAsyncHandler;
                typedef Outcome<Error, Model::CancelTaskResponse> CancelTaskOutcome;
                typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::CancelTaskRequest&, CancelTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelTaskAsyncHandler;
                typedef Outcome<Error, Model::CheckAttendanceResponse> CheckAttendanceOutcome;
                typedef std::future<CheckAttendanceOutcome> CheckAttendanceOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::CheckAttendanceRequest&, CheckAttendanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAttendanceAsyncHandler;
                typedef Outcome<Error, Model::CheckFacePhotoResponse> CheckFacePhotoOutcome;
                typedef std::future<CheckFacePhotoOutcome> CheckFacePhotoOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::CheckFacePhotoRequest&, CheckFacePhotoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckFacePhotoAsyncHandler;
                typedef Outcome<Error, Model::CreateFaceResponse> CreateFaceOutcome;
                typedef std::future<CreateFaceOutcome> CreateFaceOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::CreateFaceRequest&, CreateFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFaceAsyncHandler;
                typedef Outcome<Error, Model::CreateLibraryResponse> CreateLibraryOutcome;
                typedef std::future<CreateLibraryOutcome> CreateLibraryOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::CreateLibraryRequest&, CreateLibraryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLibraryAsyncHandler;
                typedef Outcome<Error, Model::CreatePersonResponse> CreatePersonOutcome;
                typedef std::future<CreatePersonOutcome> CreatePersonOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::CreatePersonRequest&, CreatePersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersonAsyncHandler;
                typedef Outcome<Error, Model::CreateVocabResponse> CreateVocabOutcome;
                typedef std::future<CreateVocabOutcome> CreateVocabOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::CreateVocabRequest&, CreateVocabOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVocabAsyncHandler;
                typedef Outcome<Error, Model::CreateVocabLibResponse> CreateVocabLibOutcome;
                typedef std::future<CreateVocabLibOutcome> CreateVocabLibOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::CreateVocabLibRequest&, CreateVocabLibOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVocabLibAsyncHandler;
                typedef Outcome<Error, Model::DeleteFaceResponse> DeleteFaceOutcome;
                typedef std::future<DeleteFaceOutcome> DeleteFaceOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DeleteFaceRequest&, DeleteFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceAsyncHandler;
                typedef Outcome<Error, Model::DeleteLibraryResponse> DeleteLibraryOutcome;
                typedef std::future<DeleteLibraryOutcome> DeleteLibraryOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DeleteLibraryRequest&, DeleteLibraryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLibraryAsyncHandler;
                typedef Outcome<Error, Model::DeletePersonResponse> DeletePersonOutcome;
                typedef std::future<DeletePersonOutcome> DeletePersonOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DeletePersonRequest&, DeletePersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonAsyncHandler;
                typedef Outcome<Error, Model::DeleteVocabResponse> DeleteVocabOutcome;
                typedef std::future<DeleteVocabOutcome> DeleteVocabOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DeleteVocabRequest&, DeleteVocabOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVocabAsyncHandler;
                typedef Outcome<Error, Model::DeleteVocabLibResponse> DeleteVocabLibOutcome;
                typedef std::future<DeleteVocabLibOutcome> DeleteVocabLibOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DeleteVocabLibRequest&, DeleteVocabLibOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVocabLibAsyncHandler;
                typedef Outcome<Error, Model::DescribeAITaskResultResponse> DescribeAITaskResultOutcome;
                typedef std::future<DescribeAITaskResultOutcome> DescribeAITaskResultOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DescribeAITaskResultRequest&, DescribeAITaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAITaskResultAsyncHandler;
                typedef Outcome<Error, Model::DescribeAttendanceResultResponse> DescribeAttendanceResultOutcome;
                typedef std::future<DescribeAttendanceResultOutcome> DescribeAttendanceResultOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DescribeAttendanceResultRequest&, DescribeAttendanceResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttendanceResultAsyncHandler;
                typedef Outcome<Error, Model::DescribeAudioTaskResponse> DescribeAudioTaskOutcome;
                typedef std::future<DescribeAudioTaskOutcome> DescribeAudioTaskOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DescribeAudioTaskRequest&, DescribeAudioTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAudioTaskAsyncHandler;
                typedef Outcome<Error, Model::DescribeConversationTaskResponse> DescribeConversationTaskOutcome;
                typedef std::future<DescribeConversationTaskOutcome> DescribeConversationTaskOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DescribeConversationTaskRequest&, DescribeConversationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConversationTaskAsyncHandler;
                typedef Outcome<Error, Model::DescribeHighlightResultResponse> DescribeHighlightResultOutcome;
                typedef std::future<DescribeHighlightResultOutcome> DescribeHighlightResultOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DescribeHighlightResultRequest&, DescribeHighlightResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHighlightResultAsyncHandler;
                typedef Outcome<Error, Model::DescribeImageTaskResponse> DescribeImageTaskOutcome;
                typedef std::future<DescribeImageTaskOutcome> DescribeImageTaskOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DescribeImageTaskRequest&, DescribeImageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageTaskAsyncHandler;
                typedef Outcome<Error, Model::DescribeImageTaskStatisticResponse> DescribeImageTaskStatisticOutcome;
                typedef std::future<DescribeImageTaskStatisticOutcome> DescribeImageTaskStatisticOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DescribeImageTaskStatisticRequest&, DescribeImageTaskStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageTaskStatisticAsyncHandler;
                typedef Outcome<Error, Model::DescribeLibrariesResponse> DescribeLibrariesOutcome;
                typedef std::future<DescribeLibrariesOutcome> DescribeLibrariesOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DescribeLibrariesRequest&, DescribeLibrariesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLibrariesAsyncHandler;
                typedef Outcome<Error, Model::DescribePersonResponse> DescribePersonOutcome;
                typedef std::future<DescribePersonOutcome> DescribePersonOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DescribePersonRequest&, DescribePersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonAsyncHandler;
                typedef Outcome<Error, Model::DescribePersonsResponse> DescribePersonsOutcome;
                typedef std::future<DescribePersonsOutcome> DescribePersonsOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DescribePersonsRequest&, DescribePersonsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonsAsyncHandler;
                typedef Outcome<Error, Model::DescribeVocabResponse> DescribeVocabOutcome;
                typedef std::future<DescribeVocabOutcome> DescribeVocabOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DescribeVocabRequest&, DescribeVocabOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVocabAsyncHandler;
                typedef Outcome<Error, Model::DescribeVocabLibResponse> DescribeVocabLibOutcome;
                typedef std::future<DescribeVocabLibOutcome> DescribeVocabLibOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::DescribeVocabLibRequest&, DescribeVocabLibOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVocabLibAsyncHandler;
                typedef Outcome<Error, Model::ModifyLibraryResponse> ModifyLibraryOutcome;
                typedef std::future<ModifyLibraryOutcome> ModifyLibraryOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::ModifyLibraryRequest&, ModifyLibraryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLibraryAsyncHandler;
                typedef Outcome<Error, Model::ModifyPersonResponse> ModifyPersonOutcome;
                typedef std::future<ModifyPersonOutcome> ModifyPersonOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::ModifyPersonRequest&, ModifyPersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonAsyncHandler;
                typedef Outcome<Error, Model::SubmitAudioTaskResponse> SubmitAudioTaskOutcome;
                typedef std::future<SubmitAudioTaskOutcome> SubmitAudioTaskOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::SubmitAudioTaskRequest&, SubmitAudioTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAudioTaskAsyncHandler;
                typedef Outcome<Error, Model::SubmitCheckAttendanceTaskResponse> SubmitCheckAttendanceTaskOutcome;
                typedef std::future<SubmitCheckAttendanceTaskOutcome> SubmitCheckAttendanceTaskOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::SubmitCheckAttendanceTaskRequest&, SubmitCheckAttendanceTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCheckAttendanceTaskAsyncHandler;
                typedef Outcome<Error, Model::SubmitConversationTaskResponse> SubmitConversationTaskOutcome;
                typedef std::future<SubmitConversationTaskOutcome> SubmitConversationTaskOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::SubmitConversationTaskRequest&, SubmitConversationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitConversationTaskAsyncHandler;
                typedef Outcome<Error, Model::SubmitDoubleVideoHighlightsResponse> SubmitDoubleVideoHighlightsOutcome;
                typedef std::future<SubmitDoubleVideoHighlightsOutcome> SubmitDoubleVideoHighlightsOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::SubmitDoubleVideoHighlightsRequest&, SubmitDoubleVideoHighlightsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitDoubleVideoHighlightsAsyncHandler;
                typedef Outcome<Error, Model::SubmitHighlightsResponse> SubmitHighlightsOutcome;
                typedef std::future<SubmitHighlightsOutcome> SubmitHighlightsOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::SubmitHighlightsRequest&, SubmitHighlightsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHighlightsAsyncHandler;
                typedef Outcome<Error, Model::SubmitImageTaskResponse> SubmitImageTaskOutcome;
                typedef std::future<SubmitImageTaskOutcome> SubmitImageTaskOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::SubmitImageTaskRequest&, SubmitImageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitImageTaskAsyncHandler;
                typedef Outcome<Error, Model::TransmitAudioStreamResponse> TransmitAudioStreamOutcome;
                typedef std::future<TransmitAudioStreamOutcome> TransmitAudioStreamOutcomeCallable;
                typedef std::function<void(const TciClient*, const Model::TransmitAudioStreamRequest&, TransmitAudioStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransmitAudioStreamAsyncHandler;



                /**
                 *提供 AI 助教基础版本功能接口
                 * @param req AIAssistantRequest
                 * @return AIAssistantOutcome
                 */
                AIAssistantOutcome AIAssistant(const Model::AIAssistantRequest &request);
                void AIAssistantAsync(const Model::AIAssistantRequest& request, const AIAssistantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AIAssistantOutcomeCallable AIAssistantCallable(const Model::AIAssistantRequest& request);

                /**
                 *用于取消已经提交的任务
                 * @param req CancelTaskRequest
                 * @return CancelTaskOutcome
                 */
                CancelTaskOutcome CancelTask(const Model::CancelTaskRequest &request);
                void CancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelTaskOutcomeCallable CancelTaskCallable(const Model::CancelTaskRequest& request);

                /**
                 *人员考勤
                 * @param req CheckAttendanceRequest
                 * @return CheckAttendanceOutcome
                 */
                CheckAttendanceOutcome CheckAttendance(const Model::CheckAttendanceRequest &request);
                void CheckAttendanceAsync(const Model::CheckAttendanceRequest& request, const CheckAttendanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAttendanceOutcomeCallable CheckAttendanceCallable(const Model::CheckAttendanceRequest& request);

                /**
                 *检查人脸图片是否合法
                 * @param req CheckFacePhotoRequest
                 * @return CheckFacePhotoOutcome
                 */
                CheckFacePhotoOutcome CheckFacePhoto(const Model::CheckFacePhotoRequest &request);
                void CheckFacePhotoAsync(const Model::CheckFacePhotoRequest& request, const CheckFacePhotoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckFacePhotoOutcomeCallable CheckFacePhotoCallable(const Model::CheckFacePhotoRequest& request);

                /**
                 *创建人脸
                 * @param req CreateFaceRequest
                 * @return CreateFaceOutcome
                 */
                CreateFaceOutcome CreateFace(const Model::CreateFaceRequest &request);
                void CreateFaceAsync(const Model::CreateFaceRequest& request, const CreateFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFaceOutcomeCallable CreateFaceCallable(const Model::CreateFaceRequest& request);

                /**
                 *创建人员库
                 * @param req CreateLibraryRequest
                 * @return CreateLibraryOutcome
                 */
                CreateLibraryOutcome CreateLibrary(const Model::CreateLibraryRequest &request);
                void CreateLibraryAsync(const Model::CreateLibraryRequest& request, const CreateLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLibraryOutcomeCallable CreateLibraryCallable(const Model::CreateLibraryRequest& request);

                /**
                 *创建人员
                 * @param req CreatePersonRequest
                 * @return CreatePersonOutcome
                 */
                CreatePersonOutcome CreatePerson(const Model::CreatePersonRequest &request);
                void CreatePersonAsync(const Model::CreatePersonRequest& request, const CreatePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePersonOutcomeCallable CreatePersonCallable(const Model::CreatePersonRequest& request);

                /**
                 *创建词汇
                 * @param req CreateVocabRequest
                 * @return CreateVocabOutcome
                 */
                CreateVocabOutcome CreateVocab(const Model::CreateVocabRequest &request);
                void CreateVocabAsync(const Model::CreateVocabRequest& request, const CreateVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVocabOutcomeCallable CreateVocabCallable(const Model::CreateVocabRequest& request);

                /**
                 *建立词汇库
                 * @param req CreateVocabLibRequest
                 * @return CreateVocabLibOutcome
                 */
                CreateVocabLibOutcome CreateVocabLib(const Model::CreateVocabLibRequest &request);
                void CreateVocabLibAsync(const Model::CreateVocabLibRequest& request, const CreateVocabLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVocabLibOutcomeCallable CreateVocabLibCallable(const Model::CreateVocabLibRequest& request);

                /**
                 *删除人脸
                 * @param req DeleteFaceRequest
                 * @return DeleteFaceOutcome
                 */
                DeleteFaceOutcome DeleteFace(const Model::DeleteFaceRequest &request);
                void DeleteFaceAsync(const Model::DeleteFaceRequest& request, const DeleteFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFaceOutcomeCallable DeleteFaceCallable(const Model::DeleteFaceRequest& request);

                /**
                 *删除人员库
                 * @param req DeleteLibraryRequest
                 * @return DeleteLibraryOutcome
                 */
                DeleteLibraryOutcome DeleteLibrary(const Model::DeleteLibraryRequest &request);
                void DeleteLibraryAsync(const Model::DeleteLibraryRequest& request, const DeleteLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLibraryOutcomeCallable DeleteLibraryCallable(const Model::DeleteLibraryRequest& request);

                /**
                 *删除人员
                 * @param req DeletePersonRequest
                 * @return DeletePersonOutcome
                 */
                DeletePersonOutcome DeletePerson(const Model::DeletePersonRequest &request);
                void DeletePersonAsync(const Model::DeletePersonRequest& request, const DeletePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePersonOutcomeCallable DeletePersonCallable(const Model::DeletePersonRequest& request);

                /**
                 *删除词汇
                 * @param req DeleteVocabRequest
                 * @return DeleteVocabOutcome
                 */
                DeleteVocabOutcome DeleteVocab(const Model::DeleteVocabRequest &request);
                void DeleteVocabAsync(const Model::DeleteVocabRequest& request, const DeleteVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVocabOutcomeCallable DeleteVocabCallable(const Model::DeleteVocabRequest& request);

                /**
                 *删除词汇库
                 * @param req DeleteVocabLibRequest
                 * @return DeleteVocabLibOutcome
                 */
                DeleteVocabLibOutcome DeleteVocabLib(const Model::DeleteVocabLibRequest &request);
                void DeleteVocabLibAsync(const Model::DeleteVocabLibRequest& request, const DeleteVocabLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVocabLibOutcomeCallable DeleteVocabLibCallable(const Model::DeleteVocabLibRequest& request);

                /**
                 *获取标准化接口任务结果
                 * @param req DescribeAITaskResultRequest
                 * @return DescribeAITaskResultOutcome
                 */
                DescribeAITaskResultOutcome DescribeAITaskResult(const Model::DescribeAITaskResultRequest &request);
                void DescribeAITaskResultAsync(const Model::DescribeAITaskResultRequest& request, const DescribeAITaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAITaskResultOutcomeCallable DescribeAITaskResultCallable(const Model::DescribeAITaskResultRequest& request);

                /**
                 *人脸考勤查询结果
                 * @param req DescribeAttendanceResultRequest
                 * @return DescribeAttendanceResultOutcome
                 */
                DescribeAttendanceResultOutcome DescribeAttendanceResult(const Model::DescribeAttendanceResultRequest &request);
                void DescribeAttendanceResultAsync(const Model::DescribeAttendanceResultRequest& request, const DescribeAttendanceResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttendanceResultOutcomeCallable DescribeAttendanceResultCallable(const Model::DescribeAttendanceResultRequest& request);

                /**
                 *音频评估任务信息查询接口，异步查询客户提交的请求的结果。
                 * @param req DescribeAudioTaskRequest
                 * @return DescribeAudioTaskOutcome
                 */
                DescribeAudioTaskOutcome DescribeAudioTask(const Model::DescribeAudioTaskRequest &request);
                void DescribeAudioTaskAsync(const Model::DescribeAudioTaskRequest& request, const DescribeAudioTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAudioTaskOutcomeCallable DescribeAudioTaskCallable(const Model::DescribeAudioTaskRequest& request);

                /**
                 *音频对话任务评估任务信息查询接口，异步查询客户提交的请求的结果。
                 * @param req DescribeConversationTaskRequest
                 * @return DescribeConversationTaskOutcome
                 */
                DescribeConversationTaskOutcome DescribeConversationTask(const Model::DescribeConversationTaskRequest &request);
                void DescribeConversationTaskAsync(const Model::DescribeConversationTaskRequest& request, const DescribeConversationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConversationTaskOutcomeCallable DescribeConversationTaskCallable(const Model::DescribeConversationTaskRequest& request);

                /**
                 *视频精彩集锦结果查询接口，异步查询客户提交的请求的结果。
                 * @param req DescribeHighlightResultRequest
                 * @return DescribeHighlightResultOutcome
                 */
                DescribeHighlightResultOutcome DescribeHighlightResult(const Model::DescribeHighlightResultRequest &request);
                void DescribeHighlightResultAsync(const Model::DescribeHighlightResultRequest& request, const DescribeHighlightResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHighlightResultOutcomeCallable DescribeHighlightResultCallable(const Model::DescribeHighlightResultRequest& request);

                /**
                 *拉取任务详情
                 * @param req DescribeImageTaskRequest
                 * @return DescribeImageTaskOutcome
                 */
                DescribeImageTaskOutcome DescribeImageTask(const Model::DescribeImageTaskRequest &request);
                void DescribeImageTaskAsync(const Model::DescribeImageTaskRequest& request, const DescribeImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageTaskOutcomeCallable DescribeImageTaskCallable(const Model::DescribeImageTaskRequest& request);

                /**
                 *获取图像任务统计信息
                 * @param req DescribeImageTaskStatisticRequest
                 * @return DescribeImageTaskStatisticOutcome
                 */
                DescribeImageTaskStatisticOutcome DescribeImageTaskStatistic(const Model::DescribeImageTaskStatisticRequest &request);
                void DescribeImageTaskStatisticAsync(const Model::DescribeImageTaskStatisticRequest& request, const DescribeImageTaskStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageTaskStatisticOutcomeCallable DescribeImageTaskStatisticCallable(const Model::DescribeImageTaskStatisticRequest& request);

                /**
                 *获取人员库列表
                 * @param req DescribeLibrariesRequest
                 * @return DescribeLibrariesOutcome
                 */
                DescribeLibrariesOutcome DescribeLibraries(const Model::DescribeLibrariesRequest &request);
                void DescribeLibrariesAsync(const Model::DescribeLibrariesRequest& request, const DescribeLibrariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLibrariesOutcomeCallable DescribeLibrariesCallable(const Model::DescribeLibrariesRequest& request);

                /**
                 *获取人员详情
                 * @param req DescribePersonRequest
                 * @return DescribePersonOutcome
                 */
                DescribePersonOutcome DescribePerson(const Model::DescribePersonRequest &request);
                void DescribePersonAsync(const Model::DescribePersonRequest& request, const DescribePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonOutcomeCallable DescribePersonCallable(const Model::DescribePersonRequest& request);

                /**
                 *拉取人员列表
                 * @param req DescribePersonsRequest
                 * @return DescribePersonsOutcome
                 */
                DescribePersonsOutcome DescribePersons(const Model::DescribePersonsRequest &request);
                void DescribePersonsAsync(const Model::DescribePersonsRequest& request, const DescribePersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonsOutcomeCallable DescribePersonsCallable(const Model::DescribePersonsRequest& request);

                /**
                 *查询词汇
                 * @param req DescribeVocabRequest
                 * @return DescribeVocabOutcome
                 */
                DescribeVocabOutcome DescribeVocab(const Model::DescribeVocabRequest &request);
                void DescribeVocabAsync(const Model::DescribeVocabRequest& request, const DescribeVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVocabOutcomeCallable DescribeVocabCallable(const Model::DescribeVocabRequest& request);

                /**
                 *查询词汇库
                 * @param req DescribeVocabLibRequest
                 * @return DescribeVocabLibOutcome
                 */
                DescribeVocabLibOutcome DescribeVocabLib(const Model::DescribeVocabLibRequest &request);
                void DescribeVocabLibAsync(const Model::DescribeVocabLibRequest& request, const DescribeVocabLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVocabLibOutcomeCallable DescribeVocabLibCallable(const Model::DescribeVocabLibRequest& request);

                /**
                 *修改人员库信息
                 * @param req ModifyLibraryRequest
                 * @return ModifyLibraryOutcome
                 */
                ModifyLibraryOutcome ModifyLibrary(const Model::ModifyLibraryRequest &request);
                void ModifyLibraryAsync(const Model::ModifyLibraryRequest& request, const ModifyLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLibraryOutcomeCallable ModifyLibraryCallable(const Model::ModifyLibraryRequest& request);

                /**
                 *修改人员信息
                 * @param req ModifyPersonRequest
                 * @return ModifyPersonOutcome
                 */
                ModifyPersonOutcome ModifyPerson(const Model::ModifyPersonRequest &request);
                void ModifyPersonAsync(const Model::ModifyPersonRequest& request, const ModifyPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonOutcomeCallable ModifyPersonCallable(const Model::ModifyPersonRequest& request);

                /**
                 *音频任务提交接口
                 * @param req SubmitAudioTaskRequest
                 * @return SubmitAudioTaskOutcome
                 */
                SubmitAudioTaskOutcome SubmitAudioTask(const Model::SubmitAudioTaskRequest &request);
                void SubmitAudioTaskAsync(const Model::SubmitAudioTaskRequest& request, const SubmitAudioTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitAudioTaskOutcomeCallable SubmitAudioTaskCallable(const Model::SubmitAudioTaskRequest& request);

                /**
                 *提交人员考勤任务
                 * @param req SubmitCheckAttendanceTaskRequest
                 * @return SubmitCheckAttendanceTaskOutcome
                 */
                SubmitCheckAttendanceTaskOutcome SubmitCheckAttendanceTask(const Model::SubmitCheckAttendanceTaskRequest &request);
                void SubmitCheckAttendanceTaskAsync(const Model::SubmitCheckAttendanceTaskRequest& request, const SubmitCheckAttendanceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitCheckAttendanceTaskOutcomeCallable SubmitCheckAttendanceTaskCallable(const Model::SubmitCheckAttendanceTaskRequest& request);

                /**
                 *对话任务分析接口
                 * @param req SubmitConversationTaskRequest
                 * @return SubmitConversationTaskOutcome
                 */
                SubmitConversationTaskOutcome SubmitConversationTask(const Model::SubmitConversationTaskRequest &request);
                void SubmitConversationTaskAsync(const Model::SubmitConversationTaskRequest& request, const SubmitConversationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitConversationTaskOutcomeCallable SubmitConversationTaskCallable(const Model::SubmitConversationTaskRequest& request);

                /**
                 *发起双路视频生成精彩集锦接口。该接口可以通过客户传入的学生音视频及老师视频两路Url，自动生成一堂课程的精彩集锦。需要通过SubmitDoubleVideoHighlights接口获取生成结果。
                 * @param req SubmitDoubleVideoHighlightsRequest
                 * @return SubmitDoubleVideoHighlightsOutcome
                 */
                SubmitDoubleVideoHighlightsOutcome SubmitDoubleVideoHighlights(const Model::SubmitDoubleVideoHighlightsRequest &request);
                void SubmitDoubleVideoHighlightsAsync(const Model::SubmitDoubleVideoHighlightsRequest& request, const SubmitDoubleVideoHighlightsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitDoubleVideoHighlightsOutcomeCallable SubmitDoubleVideoHighlightsCallable(const Model::SubmitDoubleVideoHighlightsRequest& request);

                /**
                 *发起视频生成精彩集锦接口。该接口可以通过客户传入的课程音频数据及相关策略（如微笑抽取，专注抽取等），自动生成一堂课程的精彩集锦。需要通过QueryHighlightResult接口获取生成结果。
                 * @param req SubmitHighlightsRequest
                 * @return SubmitHighlightsOutcome
                 */
                SubmitHighlightsOutcome SubmitHighlights(const Model::SubmitHighlightsRequest &request);
                void SubmitHighlightsAsync(const Model::SubmitHighlightsRequest& request, const SubmitHighlightsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHighlightsOutcomeCallable SubmitHighlightsCallable(const Model::SubmitHighlightsRequest& request);

                /**
                 *提交图像分析任务
                 * @param req SubmitImageTaskRequest
                 * @return SubmitImageTaskOutcome
                 */
                SubmitImageTaskOutcome SubmitImageTask(const Model::SubmitImageTaskRequest &request);
                void SubmitImageTaskAsync(const Model::SubmitImageTaskRequest& request, const SubmitImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitImageTaskOutcomeCallable SubmitImageTaskCallable(const Model::SubmitImageTaskRequest& request);

                /**
                 *分析音频信息
                 * @param req TransmitAudioStreamRequest
                 * @return TransmitAudioStreamOutcome
                 */
                TransmitAudioStreamOutcome TransmitAudioStream(const Model::TransmitAudioStreamRequest &request);
                void TransmitAudioStreamAsync(const Model::TransmitAudioStreamRequest& request, const TransmitAudioStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransmitAudioStreamOutcomeCallable TransmitAudioStreamCallable(const Model::TransmitAudioStreamRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_TCICLIENT_H_
