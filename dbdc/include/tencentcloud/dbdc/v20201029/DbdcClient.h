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

#ifndef TENCENTCLOUD_DBDC_V20201029_DBDCCLIENT_H_
#define TENCENTCLOUD_DBDC_V20201029_DBDCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeHostListRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeHostListResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeInstanceDetailRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeInstanceDetailResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeInstanceListRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeInstanceListResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeInstancesRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeInstancesResponse.h>
#include <tencentcloud/dbdc/v20201029/model/ModifyInstanceNameRequest.h>
#include <tencentcloud/dbdc/v20201029/model/ModifyInstanceNameResponse.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            class DbdcClient : public AbstractClient
            {
            public:
                DbdcClient(const Credential &credential, const std::string &region);
                DbdcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostListResponse> DescribeHostListOutcome;
                typedef std::future<DescribeHostListOutcome> DescribeHostListOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeHostListRequest&, DescribeHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceDetailResponse> DescribeInstanceDetailOutcome;
                typedef std::future<DescribeInstanceDetailOutcome> DescribeInstanceDetailOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeInstanceDetailRequest&, DescribeInstanceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceListResponse> DescribeInstanceListOutcome;
                typedef std::future<DescribeInstanceListOutcome> DescribeInstanceListOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeInstanceListRequest&, DescribeInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceNameResponse> ModifyInstanceNameOutcome;
                typedef std::future<ModifyInstanceNameOutcome> ModifyInstanceNameOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::ModifyInstanceNameRequest&, ModifyInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNameAsyncHandler;



                /**
                 *本接口用于查询独享集群内的DB实例列表
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *本接口用于查询主机列表
                 * @param req DescribeHostListRequest
                 * @return DescribeHostListOutcome
                 */
                DescribeHostListOutcome DescribeHostList(const Model::DescribeHostListRequest &request);
                void DescribeHostListAsync(const Model::DescribeHostListRequest& request, const DescribeHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostListOutcomeCallable DescribeHostListCallable(const Model::DescribeHostListRequest& request);

                /**
                 *本接口用于查询独享集群详情
                 * @param req DescribeInstanceDetailRequest
                 * @return DescribeInstanceDetailOutcome
                 */
                DescribeInstanceDetailOutcome DescribeInstanceDetail(const Model::DescribeInstanceDetailRequest &request);
                void DescribeInstanceDetailAsync(const Model::DescribeInstanceDetailRequest& request, const DescribeInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceDetailOutcomeCallable DescribeInstanceDetailCallable(const Model::DescribeInstanceDetailRequest& request);

                /**
                 *本接口用于查询独享集群实例列表
                 * @param req DescribeInstanceListRequest
                 * @return DescribeInstanceListOutcome
                 */
                DescribeInstanceListOutcome DescribeInstanceList(const Model::DescribeInstanceListRequest &request);
                void DescribeInstanceListAsync(const Model::DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceListOutcomeCallable DescribeInstanceListCallable(const Model::DescribeInstanceListRequest& request);

                /**
                 *根据不同地域不同用户，获取集群列表信息
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *本接口用于修改集群名称
                 * @param req ModifyInstanceNameRequest
                 * @return ModifyInstanceNameOutcome
                 */
                ModifyInstanceNameOutcome ModifyInstanceName(const Model::ModifyInstanceNameRequest &request);
                void ModifyInstanceNameAsync(const Model::ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceNameOutcomeCallable ModifyInstanceNameCallable(const Model::ModifyInstanceNameRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_DBDCCLIENT_H_
