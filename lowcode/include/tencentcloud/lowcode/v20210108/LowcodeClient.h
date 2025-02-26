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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_LOWCODECLIENT_H_
#define TENCENTCLOUD_LOWCODE_V20210108_LOWCODECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/lowcode/v20210108/model/CreateKnowledgeSetRequest.h>
#include <tencentcloud/lowcode/v20210108/model/CreateKnowledgeSetResponse.h>
#include <tencentcloud/lowcode/v20210108/model/DeleteKnowledgeDocumentSetRequest.h>
#include <tencentcloud/lowcode/v20210108/model/DeleteKnowledgeDocumentSetResponse.h>
#include <tencentcloud/lowcode/v20210108/model/DeleteKnowledgeSetRequest.h>
#include <tencentcloud/lowcode/v20210108/model/DeleteKnowledgeSetResponse.h>
#include <tencentcloud/lowcode/v20210108/model/DescribeDataSourceListRequest.h>
#include <tencentcloud/lowcode/v20210108/model/DescribeDataSourceListResponse.h>
#include <tencentcloud/lowcode/v20210108/model/DescribeKnowledgeDocumentSetDetailRequest.h>
#include <tencentcloud/lowcode/v20210108/model/DescribeKnowledgeDocumentSetDetailResponse.h>
#include <tencentcloud/lowcode/v20210108/model/DescribeKnowledgeDocumentSetListRequest.h>
#include <tencentcloud/lowcode/v20210108/model/DescribeKnowledgeDocumentSetListResponse.h>
#include <tencentcloud/lowcode/v20210108/model/DescribeKnowledgeSetListRequest.h>
#include <tencentcloud/lowcode/v20210108/model/DescribeKnowledgeSetListResponse.h>
#include <tencentcloud/lowcode/v20210108/model/SearchDocListRequest.h>
#include <tencentcloud/lowcode/v20210108/model/SearchDocListResponse.h>
#include <tencentcloud/lowcode/v20210108/model/UpdateKnowledgeSetRequest.h>
#include <tencentcloud/lowcode/v20210108/model/UpdateKnowledgeSetResponse.h>
#include <tencentcloud/lowcode/v20210108/model/UploadKnowledgeDocumentSetRequest.h>
#include <tencentcloud/lowcode/v20210108/model/UploadKnowledgeDocumentSetResponse.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            class LowcodeClient : public AbstractClient
            {
            public:
                LowcodeClient(const Credential &credential, const std::string &region);
                LowcodeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateKnowledgeSetResponse> CreateKnowledgeSetOutcome;
                typedef std::future<CreateKnowledgeSetOutcome> CreateKnowledgeSetOutcomeCallable;
                typedef std::function<void(const LowcodeClient*, const Model::CreateKnowledgeSetRequest&, CreateKnowledgeSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKnowledgeSetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteKnowledgeDocumentSetResponse> DeleteKnowledgeDocumentSetOutcome;
                typedef std::future<DeleteKnowledgeDocumentSetOutcome> DeleteKnowledgeDocumentSetOutcomeCallable;
                typedef std::function<void(const LowcodeClient*, const Model::DeleteKnowledgeDocumentSetRequest&, DeleteKnowledgeDocumentSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKnowledgeDocumentSetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteKnowledgeSetResponse> DeleteKnowledgeSetOutcome;
                typedef std::future<DeleteKnowledgeSetOutcome> DeleteKnowledgeSetOutcomeCallable;
                typedef std::function<void(const LowcodeClient*, const Model::DeleteKnowledgeSetRequest&, DeleteKnowledgeSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKnowledgeSetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataSourceListResponse> DescribeDataSourceListOutcome;
                typedef std::future<DescribeDataSourceListOutcome> DescribeDataSourceListOutcomeCallable;
                typedef std::function<void(const LowcodeClient*, const Model::DescribeDataSourceListRequest&, DescribeDataSourceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKnowledgeDocumentSetDetailResponse> DescribeKnowledgeDocumentSetDetailOutcome;
                typedef std::future<DescribeKnowledgeDocumentSetDetailOutcome> DescribeKnowledgeDocumentSetDetailOutcomeCallable;
                typedef std::function<void(const LowcodeClient*, const Model::DescribeKnowledgeDocumentSetDetailRequest&, DescribeKnowledgeDocumentSetDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKnowledgeDocumentSetDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKnowledgeDocumentSetListResponse> DescribeKnowledgeDocumentSetListOutcome;
                typedef std::future<DescribeKnowledgeDocumentSetListOutcome> DescribeKnowledgeDocumentSetListOutcomeCallable;
                typedef std::function<void(const LowcodeClient*, const Model::DescribeKnowledgeDocumentSetListRequest&, DescribeKnowledgeDocumentSetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKnowledgeDocumentSetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKnowledgeSetListResponse> DescribeKnowledgeSetListOutcome;
                typedef std::future<DescribeKnowledgeSetListOutcome> DescribeKnowledgeSetListOutcomeCallable;
                typedef std::function<void(const LowcodeClient*, const Model::DescribeKnowledgeSetListRequest&, DescribeKnowledgeSetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKnowledgeSetListAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchDocListResponse> SearchDocListOutcome;
                typedef std::future<SearchDocListOutcome> SearchDocListOutcomeCallable;
                typedef std::function<void(const LowcodeClient*, const Model::SearchDocListRequest&, SearchDocListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchDocListAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateKnowledgeSetResponse> UpdateKnowledgeSetOutcome;
                typedef std::future<UpdateKnowledgeSetOutcome> UpdateKnowledgeSetOutcomeCallable;
                typedef std::function<void(const LowcodeClient*, const Model::UpdateKnowledgeSetRequest&, UpdateKnowledgeSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateKnowledgeSetAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadKnowledgeDocumentSetResponse> UploadKnowledgeDocumentSetOutcome;
                typedef std::future<UploadKnowledgeDocumentSetOutcome> UploadKnowledgeDocumentSetOutcomeCallable;
                typedef std::function<void(const LowcodeClient*, const Model::UploadKnowledgeDocumentSetRequest&, UploadKnowledgeDocumentSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadKnowledgeDocumentSetAsyncHandler;



                /**
                 *创建知识库
                 * @param req CreateKnowledgeSetRequest
                 * @return CreateKnowledgeSetOutcome
                 */
                CreateKnowledgeSetOutcome CreateKnowledgeSet(const Model::CreateKnowledgeSetRequest &request);
                void CreateKnowledgeSetAsync(const Model::CreateKnowledgeSetRequest& request, const CreateKnowledgeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKnowledgeSetOutcomeCallable CreateKnowledgeSetCallable(const Model::CreateKnowledgeSetRequest& request);

                /**
                 *删除知识库下文档
                 * @param req DeleteKnowledgeDocumentSetRequest
                 * @return DeleteKnowledgeDocumentSetOutcome
                 */
                DeleteKnowledgeDocumentSetOutcome DeleteKnowledgeDocumentSet(const Model::DeleteKnowledgeDocumentSetRequest &request);
                void DeleteKnowledgeDocumentSetAsync(const Model::DeleteKnowledgeDocumentSetRequest& request, const DeleteKnowledgeDocumentSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteKnowledgeDocumentSetOutcomeCallable DeleteKnowledgeDocumentSetCallable(const Model::DeleteKnowledgeDocumentSetRequest& request);

                /**
                 *删除知识库
                 * @param req DeleteKnowledgeSetRequest
                 * @return DeleteKnowledgeSetOutcome
                 */
                DeleteKnowledgeSetOutcome DeleteKnowledgeSet(const Model::DeleteKnowledgeSetRequest &request);
                void DeleteKnowledgeSetAsync(const Model::DeleteKnowledgeSetRequest& request, const DeleteKnowledgeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteKnowledgeSetOutcomeCallable DeleteKnowledgeSetCallable(const Model::DeleteKnowledgeSetRequest& request);

                /**
                 *获取数据源详情列表
                 * @param req DescribeDataSourceListRequest
                 * @return DescribeDataSourceListOutcome
                 */
                DescribeDataSourceListOutcome DescribeDataSourceList(const Model::DescribeDataSourceListRequest &request);
                void DescribeDataSourceListAsync(const Model::DescribeDataSourceListRequest& request, const DescribeDataSourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataSourceListOutcomeCallable DescribeDataSourceListCallable(const Model::DescribeDataSourceListRequest& request);

                /**
                 *获取知识库下文档详情
                 * @param req DescribeKnowledgeDocumentSetDetailRequest
                 * @return DescribeKnowledgeDocumentSetDetailOutcome
                 */
                DescribeKnowledgeDocumentSetDetailOutcome DescribeKnowledgeDocumentSetDetail(const Model::DescribeKnowledgeDocumentSetDetailRequest &request);
                void DescribeKnowledgeDocumentSetDetailAsync(const Model::DescribeKnowledgeDocumentSetDetailRequest& request, const DescribeKnowledgeDocumentSetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKnowledgeDocumentSetDetailOutcomeCallable DescribeKnowledgeDocumentSetDetailCallable(const Model::DescribeKnowledgeDocumentSetDetailRequest& request);

                /**
                 *查询知识库下文件集合
                 * @param req DescribeKnowledgeDocumentSetListRequest
                 * @return DescribeKnowledgeDocumentSetListOutcome
                 */
                DescribeKnowledgeDocumentSetListOutcome DescribeKnowledgeDocumentSetList(const Model::DescribeKnowledgeDocumentSetListRequest &request);
                void DescribeKnowledgeDocumentSetListAsync(const Model::DescribeKnowledgeDocumentSetListRequest& request, const DescribeKnowledgeDocumentSetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKnowledgeDocumentSetListOutcomeCallable DescribeKnowledgeDocumentSetListCallable(const Model::DescribeKnowledgeDocumentSetListRequest& request);

                /**
                 *查询知识库
                 * @param req DescribeKnowledgeSetListRequest
                 * @return DescribeKnowledgeSetListOutcome
                 */
                DescribeKnowledgeSetListOutcome DescribeKnowledgeSetList(const Model::DescribeKnowledgeSetListRequest &request);
                void DescribeKnowledgeSetListAsync(const Model::DescribeKnowledgeSetListRequest& request, const DescribeKnowledgeSetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKnowledgeSetListOutcomeCallable DescribeKnowledgeSetListCallable(const Model::DescribeKnowledgeSetListRequest& request);

                /**
                 *知识库文档搜索接口
                 * @param req SearchDocListRequest
                 * @return SearchDocListOutcome
                 */
                SearchDocListOutcome SearchDocList(const Model::SearchDocListRequest &request);
                void SearchDocListAsync(const Model::SearchDocListRequest& request, const SearchDocListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchDocListOutcomeCallable SearchDocListCallable(const Model::SearchDocListRequest& request);

                /**
                 *更新知识库
                 * @param req UpdateKnowledgeSetRequest
                 * @return UpdateKnowledgeSetOutcome
                 */
                UpdateKnowledgeSetOutcome UpdateKnowledgeSet(const Model::UpdateKnowledgeSetRequest &request);
                void UpdateKnowledgeSetAsync(const Model::UpdateKnowledgeSetRequest& request, const UpdateKnowledgeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateKnowledgeSetOutcomeCallable UpdateKnowledgeSetCallable(const Model::UpdateKnowledgeSetRequest& request);

                /**
                 *更新知识库
                 * @param req UploadKnowledgeDocumentSetRequest
                 * @return UploadKnowledgeDocumentSetOutcome
                 */
                UploadKnowledgeDocumentSetOutcome UploadKnowledgeDocumentSet(const Model::UploadKnowledgeDocumentSetRequest &request);
                void UploadKnowledgeDocumentSetAsync(const Model::UploadKnowledgeDocumentSetRequest& request, const UploadKnowledgeDocumentSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadKnowledgeDocumentSetOutcomeCallable UploadKnowledgeDocumentSetCallable(const Model::UploadKnowledgeDocumentSetRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_LOWCODECLIENT_H_
