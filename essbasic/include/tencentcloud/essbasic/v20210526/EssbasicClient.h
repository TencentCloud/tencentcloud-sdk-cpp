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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_ESSBASICCLIENT_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_ESSBASICCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/essbasic/v20210526/model/CreateConsoleLoginUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateConsoleLoginUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateFlowsByTemplatesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateFlowsByTemplatesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateSignUrlsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateSignUrlsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeResourceUrlsByFlowsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeResourceUrlsByFlowsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeTemplatesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeTemplatesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeUsageRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeUsageResponse.h>
#include <tencentcloud/essbasic/v20210526/model/PrepareFlowsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/PrepareFlowsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/SyncProxyOrganizationRequest.h>
#include <tencentcloud/essbasic/v20210526/model/SyncProxyOrganizationResponse.h>
#include <tencentcloud/essbasic/v20210526/model/SyncProxyOrganizationOperatorsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/SyncProxyOrganizationOperatorsResponse.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            class EssbasicClient : public AbstractClient
            {
            public:
                EssbasicClient(const Credential &credential, const std::string &region);
                EssbasicClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateConsoleLoginUrlResponse> CreateConsoleLoginUrlOutcome;
                typedef std::future<CreateConsoleLoginUrlOutcome> CreateConsoleLoginUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateConsoleLoginUrlRequest&, CreateConsoleLoginUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsoleLoginUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowsByTemplatesResponse> CreateFlowsByTemplatesOutcome;
                typedef std::future<CreateFlowsByTemplatesOutcome> CreateFlowsByTemplatesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateFlowsByTemplatesRequest&, CreateFlowsByTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowsByTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSignUrlsResponse> CreateSignUrlsOutcome;
                typedef std::future<CreateSignUrlsOutcome> CreateSignUrlsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateSignUrlsRequest&, CreateSignUrlsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSignUrlsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceUrlsByFlowsResponse> DescribeResourceUrlsByFlowsOutcome;
                typedef std::future<DescribeResourceUrlsByFlowsOutcome> DescribeResourceUrlsByFlowsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeResourceUrlsByFlowsRequest&, DescribeResourceUrlsByFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceUrlsByFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTemplatesResponse> DescribeTemplatesOutcome;
                typedef std::future<DescribeTemplatesOutcome> DescribeTemplatesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeTemplatesRequest&, DescribeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsageResponse> DescribeUsageOutcome;
                typedef std::future<DescribeUsageOutcome> DescribeUsageOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeUsageRequest&, DescribeUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::PrepareFlowsResponse> PrepareFlowsOutcome;
                typedef std::future<PrepareFlowsOutcome> PrepareFlowsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::PrepareFlowsRequest&, PrepareFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PrepareFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncProxyOrganizationResponse> SyncProxyOrganizationOutcome;
                typedef std::future<SyncProxyOrganizationOutcome> SyncProxyOrganizationOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::SyncProxyOrganizationRequest&, SyncProxyOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncProxyOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncProxyOrganizationOperatorsResponse> SyncProxyOrganizationOperatorsOutcome;
                typedef std::future<SyncProxyOrganizationOperatorsOutcome> SyncProxyOrganizationOperatorsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::SyncProxyOrganizationOperatorsRequest&, SyncProxyOrganizationOperatorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncProxyOrganizationOperatorsAsyncHandler;



                /**
                 *此接口（CreateConsoleLoginUrl）用于创建电子签控制台登录链接。若企业未激活，调用同步企业信息、同步经办人信息

                 * @param req CreateConsoleLoginUrlRequest
                 * @return CreateConsoleLoginUrlOutcome
                 */
                CreateConsoleLoginUrlOutcome CreateConsoleLoginUrl(const Model::CreateConsoleLoginUrlRequest &request);
                void CreateConsoleLoginUrlAsync(const Model::CreateConsoleLoginUrlRequest& request, const CreateConsoleLoginUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsoleLoginUrlOutcomeCallable CreateConsoleLoginUrlCallable(const Model::CreateConsoleLoginUrlRequest& request);

                /**
                 *接口（CreateFlowsByTemplates）用于使用多个模板批量创建流程
                 * @param req CreateFlowsByTemplatesRequest
                 * @return CreateFlowsByTemplatesOutcome
                 */
                CreateFlowsByTemplatesOutcome CreateFlowsByTemplates(const Model::CreateFlowsByTemplatesRequest &request);
                void CreateFlowsByTemplatesAsync(const Model::CreateFlowsByTemplatesRequest& request, const CreateFlowsByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowsByTemplatesOutcomeCallable CreateFlowsByTemplatesCallable(const Model::CreateFlowsByTemplatesRequest& request);

                /**
                 *根据流程Id批量创建签署参与者签署H5链接
                 * @param req CreateSignUrlsRequest
                 * @return CreateSignUrlsOutcome
                 */
                CreateSignUrlsOutcome CreateSignUrls(const Model::CreateSignUrlsRequest &request);
                void CreateSignUrlsAsync(const Model::CreateSignUrlsRequest& request, const CreateSignUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSignUrlsOutcomeCallable CreateSignUrlsCallable(const Model::CreateSignUrlsRequest& request);

                /**
                 *根据流程信息批量获取资源下载链接
                 * @param req DescribeResourceUrlsByFlowsRequest
                 * @return DescribeResourceUrlsByFlowsOutcome
                 */
                DescribeResourceUrlsByFlowsOutcome DescribeResourceUrlsByFlows(const Model::DescribeResourceUrlsByFlowsRequest &request);
                void DescribeResourceUrlsByFlowsAsync(const Model::DescribeResourceUrlsByFlowsRequest& request, const DescribeResourceUrlsByFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceUrlsByFlowsOutcomeCallable DescribeResourceUrlsByFlowsCallable(const Model::DescribeResourceUrlsByFlowsRequest& request);

                /**
                 *通过此接口（DescribeTemplates）查询该企业在电子签渠道版中配置的有效模板列表
                 * @param req DescribeTemplatesRequest
                 * @return DescribeTemplatesOutcome
                 */
                DescribeTemplatesOutcome DescribeTemplates(const Model::DescribeTemplatesRequest &request);
                void DescribeTemplatesAsync(const Model::DescribeTemplatesRequest& request, const DescribeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTemplatesOutcomeCallable DescribeTemplatesCallable(const Model::DescribeTemplatesRequest& request);

                /**
                 *此接口（DescribeUsage）用于获取渠道所有合作企业流量消耗情况。
 注: 此接口每日限频2次，若要扩大限制次数,请提前与客服经理或邮件至e-contract@tencent.com进行联系。
                 * @param req DescribeUsageRequest
                 * @return DescribeUsageOutcome
                 */
                DescribeUsageOutcome DescribeUsage(const Model::DescribeUsageRequest &request);
                void DescribeUsageAsync(const Model::DescribeUsageRequest& request, const DescribeUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsageOutcomeCallable DescribeUsageCallable(const Model::DescribeUsageRequest& request);

                /**
                 *该接口 (PrepareFlows) 用于创建待发起文件
                 * @param req PrepareFlowsRequest
                 * @return PrepareFlowsOutcome
                 */
                PrepareFlowsOutcome PrepareFlows(const Model::PrepareFlowsRequest &request);
                void PrepareFlowsAsync(const Model::PrepareFlowsRequest& request, const PrepareFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PrepareFlowsOutcomeCallable PrepareFlowsCallable(const Model::PrepareFlowsRequest& request);

                /**
                 *此接口（SyncProxyOrganization）用于同步渠道侧企业信息
                 * @param req SyncProxyOrganizationRequest
                 * @return SyncProxyOrganizationOutcome
                 */
                SyncProxyOrganizationOutcome SyncProxyOrganization(const Model::SyncProxyOrganizationRequest &request);
                void SyncProxyOrganizationAsync(const Model::SyncProxyOrganizationRequest& request, const SyncProxyOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncProxyOrganizationOutcomeCallable SyncProxyOrganizationCallable(const Model::SyncProxyOrganizationRequest& request);

                /**
                 *此接口（SyncProxyOrganizationOperators）用于同步渠道合作企业经办人列表
                 * @param req SyncProxyOrganizationOperatorsRequest
                 * @return SyncProxyOrganizationOperatorsOutcome
                 */
                SyncProxyOrganizationOperatorsOutcome SyncProxyOrganizationOperators(const Model::SyncProxyOrganizationOperatorsRequest &request);
                void SyncProxyOrganizationOperatorsAsync(const Model::SyncProxyOrganizationOperatorsRequest& request, const SyncProxyOrganizationOperatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncProxyOrganizationOperatorsOutcomeCallable SyncProxyOrganizationOperatorsCallable(const Model::SyncProxyOrganizationOperatorsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_ESSBASICCLIENT_H_
