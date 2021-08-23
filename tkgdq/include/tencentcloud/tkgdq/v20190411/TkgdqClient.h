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

#ifndef TENCENTCLOUD_TKGDQ_V20190411_TKGDQCLIENT_H_
#define TENCENTCLOUD_TKGDQ_V20190411_TKGDQCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tkgdq/v20190411/model/DescribeEntityRequest.h>
#include <tencentcloud/tkgdq/v20190411/model/DescribeEntityResponse.h>
#include <tencentcloud/tkgdq/v20190411/model/DescribeRelationRequest.h>
#include <tencentcloud/tkgdq/v20190411/model/DescribeRelationResponse.h>
#include <tencentcloud/tkgdq/v20190411/model/DescribeTripleRequest.h>
#include <tencentcloud/tkgdq/v20190411/model/DescribeTripleResponse.h>


namespace TencentCloud
{
    namespace Tkgdq
    {
        namespace V20190411
        {
            class TkgdqClient : public AbstractClient
            {
            public:
                TkgdqClient(const Credential &credential, const std::string &region);
                TkgdqClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeEntityResponse> DescribeEntityOutcome;
                typedef std::future<DescribeEntityOutcome> DescribeEntityOutcomeCallable;
                typedef std::function<void(const TkgdqClient*, const Model::DescribeEntityRequest&, DescribeEntityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEntityAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRelationResponse> DescribeRelationOutcome;
                typedef std::future<DescribeRelationOutcome> DescribeRelationOutcomeCallable;
                typedef std::function<void(const TkgdqClient*, const Model::DescribeRelationRequest&, DescribeRelationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRelationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTripleResponse> DescribeTripleOutcome;
                typedef std::future<DescribeTripleOutcome> DescribeTripleOutcomeCallable;
                typedef std::function<void(const TkgdqClient*, const Model::DescribeTripleRequest&, DescribeTripleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTripleAsyncHandler;



                /**
                 *输入实体名称，返回实体相关的信息如实体别名、实体英文名、实体详细信息、相关实体等
                 * @param req DescribeEntityRequest
                 * @return DescribeEntityOutcome
                 */
                DescribeEntityOutcome DescribeEntity(const Model::DescribeEntityRequest &request);
                void DescribeEntityAsync(const Model::DescribeEntityRequest& request, const DescribeEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEntityOutcomeCallable DescribeEntityCallable(const Model::DescribeEntityRequest& request);

                /**
                 *输入两个实体，返回两个实体间的关系，例如马化腾与腾讯公司不仅是相关实体，二者还存在隶属关系（马化腾属于腾讯公司）。
                 * @param req DescribeRelationRequest
                 * @return DescribeRelationOutcome
                 */
                DescribeRelationOutcome DescribeRelation(const Model::DescribeRelationRequest &request);
                void DescribeRelationAsync(const Model::DescribeRelationRequest& request, const DescribeRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRelationOutcomeCallable DescribeRelationCallable(const Model::DescribeRelationRequest& request);

                /**
                 *三元组查询，主要分为两类，SP查询和PO查询。SP查询表示已知主语和谓语查询宾语，PO查询表示已知宾语和谓语查询主语。每一个SP或PO查询都是一个可独立执行的查询，TQL支持SP查询的嵌套查询，即主语可以是一个嵌套的子查询。其他复杂的三元组查询方法，请参考官网API文档示例。
                 * @param req DescribeTripleRequest
                 * @return DescribeTripleOutcome
                 */
                DescribeTripleOutcome DescribeTriple(const Model::DescribeTripleRequest &request);
                void DescribeTripleAsync(const Model::DescribeTripleRequest& request, const DescribeTripleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTripleOutcomeCallable DescribeTripleCallable(const Model::DescribeTripleRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TKGDQ_V20190411_TKGDQCLIENT_H_
