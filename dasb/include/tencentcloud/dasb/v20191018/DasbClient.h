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

#ifndef TENCENTCLOUD_DASB_V20191018_DASBCLIENT_H_
#define TENCENTCLOUD_DASB_V20191018_DASBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dasb/v20191018/model/CreateAclRequest.h>
#include <tencentcloud/dasb/v20191018/model/CreateAclResponse.h>
#include <tencentcloud/dasb/v20191018/model/CreateUserRequest.h>
#include <tencentcloud/dasb/v20191018/model/CreateUserResponse.h>
#include <tencentcloud/dasb/v20191018/model/DeleteAclsRequest.h>
#include <tencentcloud/dasb/v20191018/model/DeleteAclsResponse.h>
#include <tencentcloud/dasb/v20191018/model/DeleteUsersRequest.h>
#include <tencentcloud/dasb/v20191018/model/DeleteUsersResponse.h>
#include <tencentcloud/dasb/v20191018/model/DescribeAclsRequest.h>
#include <tencentcloud/dasb/v20191018/model/DescribeAclsResponse.h>
#include <tencentcloud/dasb/v20191018/model/DescribeDasbImageIdsRequest.h>
#include <tencentcloud/dasb/v20191018/model/DescribeDasbImageIdsResponse.h>
#include <tencentcloud/dasb/v20191018/model/DescribeDevicesRequest.h>
#include <tencentcloud/dasb/v20191018/model/DescribeDevicesResponse.h>
#include <tencentcloud/dasb/v20191018/model/DescribeUsersRequest.h>
#include <tencentcloud/dasb/v20191018/model/DescribeUsersResponse.h>
#include <tencentcloud/dasb/v20191018/model/ModifyAclRequest.h>
#include <tencentcloud/dasb/v20191018/model/ModifyAclResponse.h>
#include <tencentcloud/dasb/v20191018/model/ModifyUserRequest.h>
#include <tencentcloud/dasb/v20191018/model/ModifyUserResponse.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            class DasbClient : public AbstractClient
            {
            public:
                DasbClient(const Credential &credential, const std::string &region);
                DasbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAclResponse> CreateAclOutcome;
                typedef std::future<CreateAclOutcome> CreateAclOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::CreateAclRequest&, CreateAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAclAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAclsResponse> DeleteAclsOutcome;
                typedef std::future<DeleteAclsOutcome> DeleteAclsOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DeleteAclsRequest&, DeleteAclsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAclsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUsersResponse> DeleteUsersOutcome;
                typedef std::future<DeleteUsersOutcome> DeleteUsersOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DeleteUsersRequest&, DeleteUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAclsResponse> DescribeAclsOutcome;
                typedef std::future<DescribeAclsOutcome> DescribeAclsOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DescribeAclsRequest&, DescribeAclsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAclsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDasbImageIdsResponse> DescribeDasbImageIdsOutcome;
                typedef std::future<DescribeDasbImageIdsOutcome> DescribeDasbImageIdsOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DescribeDasbImageIdsRequest&, DescribeDasbImageIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDasbImageIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicesResponse> DescribeDevicesOutcome;
                typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DescribeDevicesRequest&, DescribeDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsersResponse> DescribeUsersOutcome;
                typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DescribeUsersRequest&, DescribeUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAclResponse> ModifyAclOutcome;
                typedef std::future<ModifyAclOutcome> ModifyAclOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::ModifyAclRequest&, ModifyAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAclAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserResponse> ModifyUserOutcome;
                typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::ModifyUserRequest&, ModifyUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;



                /**
                 *新建访问权限
                 * @param req CreateAclRequest
                 * @return CreateAclOutcome
                 */
                CreateAclOutcome CreateAcl(const Model::CreateAclRequest &request);
                void CreateAclAsync(const Model::CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAclOutcomeCallable CreateAclCallable(const Model::CreateAclRequest& request);

                /**
                 *新建用户
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *删除访问权限
                 * @param req DeleteAclsRequest
                 * @return DeleteAclsOutcome
                 */
                DeleteAclsOutcome DeleteAcls(const Model::DeleteAclsRequest &request);
                void DeleteAclsAsync(const Model::DeleteAclsRequest& request, const DeleteAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAclsOutcomeCallable DeleteAclsCallable(const Model::DeleteAclsRequest& request);

                /**
                 *删除用户
                 * @param req DeleteUsersRequest
                 * @return DeleteUsersOutcome
                 */
                DeleteUsersOutcome DeleteUsers(const Model::DeleteUsersRequest &request);
                void DeleteUsersAsync(const Model::DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUsersOutcomeCallable DeleteUsersCallable(const Model::DeleteUsersRequest& request);

                /**
                 *查询访问权限列表
                 * @param req DescribeAclsRequest
                 * @return DescribeAclsOutcome
                 */
                DescribeAclsOutcome DescribeAcls(const Model::DescribeAclsRequest &request);
                void DescribeAclsAsync(const Model::DescribeAclsRequest& request, const DescribeAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAclsOutcomeCallable DescribeAclsCallable(const Model::DescribeAclsRequest& request);

                /**
                 *获取镜像列表
                 * @param req DescribeDasbImageIdsRequest
                 * @return DescribeDasbImageIdsOutcome
                 */
                DescribeDasbImageIdsOutcome DescribeDasbImageIds(const Model::DescribeDasbImageIdsRequest &request);
                void DescribeDasbImageIdsAsync(const Model::DescribeDasbImageIdsRequest& request, const DescribeDasbImageIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDasbImageIdsOutcomeCallable DescribeDasbImageIdsCallable(const Model::DescribeDasbImageIdsRequest& request);

                /**
                 *查询资产列表
                 * @param req DescribeDevicesRequest
                 * @return DescribeDevicesOutcome
                 */
                DescribeDevicesOutcome DescribeDevices(const Model::DescribeDevicesRequest &request);
                void DescribeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicesOutcomeCallable DescribeDevicesCallable(const Model::DescribeDevicesRequest& request);

                /**
                 *查询用户列表
                 * @param req DescribeUsersRequest
                 * @return DescribeUsersOutcome
                 */
                DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest &request);
                void DescribeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsersOutcomeCallable DescribeUsersCallable(const Model::DescribeUsersRequest& request);

                /**
                 *修改访问权限
                 * @param req ModifyAclRequest
                 * @return ModifyAclOutcome
                 */
                ModifyAclOutcome ModifyAcl(const Model::ModifyAclRequest &request);
                void ModifyAclAsync(const Model::ModifyAclRequest& request, const ModifyAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAclOutcomeCallable ModifyAclCallable(const Model::ModifyAclRequest& request);

                /**
                 *修改用户信息
                 * @param req ModifyUserRequest
                 * @return ModifyUserOutcome
                 */
                ModifyUserOutcome ModifyUser(const Model::ModifyUserRequest &request);
                void ModifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserOutcomeCallable ModifyUserCallable(const Model::ModifyUserRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_DASBCLIENT_H_
