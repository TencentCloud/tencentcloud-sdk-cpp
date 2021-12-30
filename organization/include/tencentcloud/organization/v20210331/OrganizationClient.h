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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_ORGANIZATIONCLIENT_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_ORGANIZATIONCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/organization/v20210331/model/BindOrganizationMemberAuthAccountRequest.h>
#include <tencentcloud/organization/v20210331/model/BindOrganizationMemberAuthAccountResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMembersResponse.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            class OrganizationClient : public AbstractClient
            {
            public:
                OrganizationClient(const Credential &credential, const std::string &region);
                OrganizationClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindOrganizationMemberAuthAccountResponse> BindOrganizationMemberAuthAccountOutcome;
                typedef std::future<BindOrganizationMemberAuthAccountOutcome> BindOrganizationMemberAuthAccountOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::BindOrganizationMemberAuthAccountRequest&, BindOrganizationMemberAuthAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindOrganizationMemberAuthAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMemberResponse> CreateOrganizationMemberOutcome;
                typedef std::future<CreateOrganizationMemberOutcome> CreateOrganizationMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMemberRequest&, CreateOrganizationMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationResponse> DescribeOrganizationOutcome;
                typedef std::future<DescribeOrganizationOutcome> DescribeOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationRequest&, DescribeOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationMembersResponse> DescribeOrganizationMembersOutcome;
                typedef std::future<DescribeOrganizationMembersOutcome> DescribeOrganizationMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationMembersRequest&, DescribeOrganizationMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationMembersAsyncHandler;



                /**
                 *绑定组织成员和子账号的授权关系
                 * @param req BindOrganizationMemberAuthAccountRequest
                 * @return BindOrganizationMemberAuthAccountOutcome
                 */
                BindOrganizationMemberAuthAccountOutcome BindOrganizationMemberAuthAccount(const Model::BindOrganizationMemberAuthAccountRequest &request);
                void BindOrganizationMemberAuthAccountAsync(const Model::BindOrganizationMemberAuthAccountRequest& request, const BindOrganizationMemberAuthAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindOrganizationMemberAuthAccountOutcomeCallable BindOrganizationMemberAuthAccountCallable(const Model::BindOrganizationMemberAuthAccountRequest& request);

                /**
                 *创建组织成员
                 * @param req CreateOrganizationMemberRequest
                 * @return CreateOrganizationMemberOutcome
                 */
                CreateOrganizationMemberOutcome CreateOrganizationMember(const Model::CreateOrganizationMemberRequest &request);
                void CreateOrganizationMemberAsync(const Model::CreateOrganizationMemberRequest& request, const CreateOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationMemberOutcomeCallable CreateOrganizationMemberCallable(const Model::CreateOrganizationMemberRequest& request);

                /**
                 *获取企业组织信息
                 * @param req DescribeOrganizationRequest
                 * @return DescribeOrganizationOutcome
                 */
                DescribeOrganizationOutcome DescribeOrganization(const Model::DescribeOrganizationRequest &request);
                void DescribeOrganizationAsync(const Model::DescribeOrganizationRequest& request, const DescribeOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationOutcomeCallable DescribeOrganizationCallable(const Model::DescribeOrganizationRequest& request);

                /**
                 *获取企业组织成员列表
                 * @param req DescribeOrganizationMembersRequest
                 * @return DescribeOrganizationMembersOutcome
                 */
                DescribeOrganizationMembersOutcome DescribeOrganizationMembers(const Model::DescribeOrganizationMembersRequest &request);
                void DescribeOrganizationMembersAsync(const Model::DescribeOrganizationMembersRequest& request, const DescribeOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationMembersOutcomeCallable DescribeOrganizationMembersCallable(const Model::DescribeOrganizationMembersRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_ORGANIZATIONCLIENT_H_
