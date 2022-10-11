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

#ifndef TENCENTCLOUD_TCM_V20210413_TCMCLIENT_H_
#define TENCENTCLOUD_TCM_V20210413_TCMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcm/v20210413/model/CreateMeshRequest.h>
#include <tencentcloud/tcm/v20210413/model/CreateMeshResponse.h>
#include <tencentcloud/tcm/v20210413/model/DeleteMeshRequest.h>
#include <tencentcloud/tcm/v20210413/model/DeleteMeshResponse.h>
#include <tencentcloud/tcm/v20210413/model/DescribeMeshRequest.h>
#include <tencentcloud/tcm/v20210413/model/DescribeMeshResponse.h>
#include <tencentcloud/tcm/v20210413/model/DescribeMeshListRequest.h>
#include <tencentcloud/tcm/v20210413/model/DescribeMeshListResponse.h>
#include <tencentcloud/tcm/v20210413/model/ModifyMeshRequest.h>
#include <tencentcloud/tcm/v20210413/model/ModifyMeshResponse.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            class TcmClient : public AbstractClient
            {
            public:
                TcmClient(const Credential &credential, const std::string &region);
                TcmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateMeshResponse> CreateMeshOutcome;
                typedef std::future<CreateMeshOutcome> CreateMeshOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::CreateMeshRequest&, CreateMeshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMeshAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMeshResponse> DeleteMeshOutcome;
                typedef std::future<DeleteMeshOutcome> DeleteMeshOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::DeleteMeshRequest&, DeleteMeshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMeshAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMeshResponse> DescribeMeshOutcome;
                typedef std::future<DescribeMeshOutcome> DescribeMeshOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::DescribeMeshRequest&, DescribeMeshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeshAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMeshListResponse> DescribeMeshListOutcome;
                typedef std::future<DescribeMeshListOutcome> DescribeMeshListOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::DescribeMeshListRequest&, DescribeMeshListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeshListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMeshResponse> ModifyMeshOutcome;
                typedef std::future<ModifyMeshOutcome> ModifyMeshOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::ModifyMeshRequest&, ModifyMeshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMeshAsyncHandler;



                /**
                 *创建网格
                 * @param req CreateMeshRequest
                 * @return CreateMeshOutcome
                 */
                CreateMeshOutcome CreateMesh(const Model::CreateMeshRequest &request);
                void CreateMeshAsync(const Model::CreateMeshRequest& request, const CreateMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMeshOutcomeCallable CreateMeshCallable(const Model::CreateMeshRequest& request);

                /**
                 *删除网格
                 * @param req DeleteMeshRequest
                 * @return DeleteMeshOutcome
                 */
                DeleteMeshOutcome DeleteMesh(const Model::DeleteMeshRequest &request);
                void DeleteMeshAsync(const Model::DeleteMeshRequest& request, const DeleteMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMeshOutcomeCallable DeleteMeshCallable(const Model::DeleteMeshRequest& request);

                /**
                 *查询网格详情
                 * @param req DescribeMeshRequest
                 * @return DescribeMeshOutcome
                 */
                DescribeMeshOutcome DescribeMesh(const Model::DescribeMeshRequest &request);
                void DescribeMeshAsync(const Model::DescribeMeshRequest& request, const DescribeMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMeshOutcomeCallable DescribeMeshCallable(const Model::DescribeMeshRequest& request);

                /**
                 *查询网格列表
                 * @param req DescribeMeshListRequest
                 * @return DescribeMeshListOutcome
                 */
                DescribeMeshListOutcome DescribeMeshList(const Model::DescribeMeshListRequest &request);
                void DescribeMeshListAsync(const Model::DescribeMeshListRequest& request, const DescribeMeshListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMeshListOutcomeCallable DescribeMeshListCallable(const Model::DescribeMeshListRequest& request);

                /**
                 *修改网格
                 * @param req ModifyMeshRequest
                 * @return ModifyMeshOutcome
                 */
                ModifyMeshOutcome ModifyMesh(const Model::ModifyMeshRequest &request);
                void ModifyMeshAsync(const Model::ModifyMeshRequest& request, const ModifyMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMeshOutcomeCallable ModifyMeshCallable(const Model::ModifyMeshRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_TCMCLIENT_H_
