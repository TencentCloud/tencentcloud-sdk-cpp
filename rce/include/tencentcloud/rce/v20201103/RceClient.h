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

#ifndef TENCENTCLOUD_RCE_V20201103_RCECLIENT_H_
#define TENCENTCLOUD_RCE_V20201103_RCECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/rce/v20201103/model/CreateNameListRequest.h>
#include <tencentcloud/rce/v20201103/model/CreateNameListResponse.h>
#include <tencentcloud/rce/v20201103/model/DeleteNameListRequest.h>
#include <tencentcloud/rce/v20201103/model/DeleteNameListResponse.h>
#include <tencentcloud/rce/v20201103/model/DeleteNameListDataRequest.h>
#include <tencentcloud/rce/v20201103/model/DeleteNameListDataResponse.h>
#include <tencentcloud/rce/v20201103/model/DescribeNameListRequest.h>
#include <tencentcloud/rce/v20201103/model/DescribeNameListResponse.h>
#include <tencentcloud/rce/v20201103/model/DescribeNameListDataListRequest.h>
#include <tencentcloud/rce/v20201103/model/DescribeNameListDataListResponse.h>
#include <tencentcloud/rce/v20201103/model/DescribeNameListDetailRequest.h>
#include <tencentcloud/rce/v20201103/model/DescribeNameListDetailResponse.h>
#include <tencentcloud/rce/v20201103/model/DescribeUserUsageCntRequest.h>
#include <tencentcloud/rce/v20201103/model/DescribeUserUsageCntResponse.h>
#include <tencentcloud/rce/v20201103/model/ImportNameListDataRequest.h>
#include <tencentcloud/rce/v20201103/model/ImportNameListDataResponse.h>
#include <tencentcloud/rce/v20201103/model/ManageMarketingRiskRequest.h>
#include <tencentcloud/rce/v20201103/model/ManageMarketingRiskResponse.h>
#include <tencentcloud/rce/v20201103/model/ModifyNameListRequest.h>
#include <tencentcloud/rce/v20201103/model/ModifyNameListResponse.h>
#include <tencentcloud/rce/v20201103/model/ModifyNameListDataRequest.h>
#include <tencentcloud/rce/v20201103/model/ModifyNameListDataResponse.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            class RceClient : public AbstractClient
            {
            public:
                RceClient(const Credential &credential, const std::string &region);
                RceClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateNameListResponse> CreateNameListOutcome;
                typedef std::future<CreateNameListOutcome> CreateNameListOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::CreateNameListRequest&, CreateNameListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNameListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNameListResponse> DeleteNameListOutcome;
                typedef std::future<DeleteNameListOutcome> DeleteNameListOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::DeleteNameListRequest&, DeleteNameListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNameListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNameListDataResponse> DeleteNameListDataOutcome;
                typedef std::future<DeleteNameListDataOutcome> DeleteNameListDataOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::DeleteNameListDataRequest&, DeleteNameListDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNameListDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNameListResponse> DescribeNameListOutcome;
                typedef std::future<DescribeNameListOutcome> DescribeNameListOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::DescribeNameListRequest&, DescribeNameListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNameListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNameListDataListResponse> DescribeNameListDataListOutcome;
                typedef std::future<DescribeNameListDataListOutcome> DescribeNameListDataListOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::DescribeNameListDataListRequest&, DescribeNameListDataListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNameListDataListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNameListDetailResponse> DescribeNameListDetailOutcome;
                typedef std::future<DescribeNameListDetailOutcome> DescribeNameListDetailOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::DescribeNameListDetailRequest&, DescribeNameListDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNameListDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserUsageCntResponse> DescribeUserUsageCntOutcome;
                typedef std::future<DescribeUserUsageCntOutcome> DescribeUserUsageCntOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::DescribeUserUsageCntRequest&, DescribeUserUsageCntOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserUsageCntAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportNameListDataResponse> ImportNameListDataOutcome;
                typedef std::future<ImportNameListDataOutcome> ImportNameListDataOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::ImportNameListDataRequest&, ImportNameListDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportNameListDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageMarketingRiskResponse> ManageMarketingRiskOutcome;
                typedef std::future<ManageMarketingRiskOutcome> ManageMarketingRiskOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::ManageMarketingRiskRequest&, ManageMarketingRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageMarketingRiskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNameListResponse> ModifyNameListOutcome;
                typedef std::future<ModifyNameListOutcome> ModifyNameListOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::ModifyNameListRequest&, ModifyNameListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNameListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNameListDataResponse> ModifyNameListDataOutcome;
                typedef std::future<ModifyNameListDataOutcome> ModifyNameListDataOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::ModifyNameListDataRequest&, ModifyNameListDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNameListDataAsyncHandler;



                /**
                 *创建黑白名单，黑白名单数量上限为100
                 * @param req CreateNameListRequest
                 * @return CreateNameListOutcome
                 */
                CreateNameListOutcome CreateNameList(const Model::CreateNameListRequest &request);
                void CreateNameListAsync(const Model::CreateNameListRequest& request, const CreateNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNameListOutcomeCallable CreateNameListCallable(const Model::CreateNameListRequest& request);

                /**
                 *修改黑白名单状态 关闭 开启 删除
                 * @param req DeleteNameListRequest
                 * @return DeleteNameListOutcome
                 */
                DeleteNameListOutcome DeleteNameList(const Model::DeleteNameListRequest &request);
                void DeleteNameListAsync(const Model::DeleteNameListRequest& request, const DeleteNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNameListOutcomeCallable DeleteNameListCallable(const Model::DeleteNameListRequest& request);

                /**
                 *删除黑白名单数据
                 * @param req DeleteNameListDataRequest
                 * @return DeleteNameListDataOutcome
                 */
                DeleteNameListDataOutcome DeleteNameListData(const Model::DeleteNameListDataRequest &request);
                void DeleteNameListDataAsync(const Model::DeleteNameListDataRequest& request, const DeleteNameListDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNameListDataOutcomeCallable DeleteNameListDataCallable(const Model::DeleteNameListDataRequest& request);

                /**
                 *列表展示黑白名单列表数据, 包含列表名称, 名单类型, 数据类型, 数据来源, 描述, 状态等
                 * @param req DescribeNameListRequest
                 * @return DescribeNameListOutcome
                 */
                DescribeNameListOutcome DescribeNameList(const Model::DescribeNameListRequest &request);
                void DescribeNameListAsync(const Model::DescribeNameListRequest& request, const DescribeNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNameListOutcomeCallable DescribeNameListCallable(const Model::DescribeNameListRequest& request);

                /**
                 *黑白名单详情数据展示 名单id 客户appid uin 数据内容 开始时间和结束时间 状态 描述
                 * @param req DescribeNameListDataListRequest
                 * @return DescribeNameListDataListOutcome
                 */
                DescribeNameListDataListOutcome DescribeNameListDataList(const Model::DescribeNameListDataListRequest &request);
                void DescribeNameListDataListAsync(const Model::DescribeNameListDataListRequest& request, const DescribeNameListDataListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNameListDataListOutcomeCallable DescribeNameListDataListCallable(const Model::DescribeNameListDataListRequest& request);

                /**
                 *查询黑白名单列表详情
                 * @param req DescribeNameListDetailRequest
                 * @return DescribeNameListDetailOutcome
                 */
                DescribeNameListDetailOutcome DescribeNameListDetail(const Model::DescribeNameListDetailRequest &request);
                void DescribeNameListDetailAsync(const Model::DescribeNameListDetailRequest& request, const DescribeNameListDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNameListDetailOutcomeCallable DescribeNameListDetailCallable(const Model::DescribeNameListDetailRequest& request);

                /**
                 *RCE控制台预付费和后付费次数展示
                 * @param req DescribeUserUsageCntRequest
                 * @return DescribeUserUsageCntOutcome
                 */
                DescribeUserUsageCntOutcome DescribeUserUsageCnt(const Model::DescribeUserUsageCntRequest &request);
                void DescribeUserUsageCntAsync(const Model::DescribeUserUsageCntRequest& request, const DescribeUserUsageCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserUsageCntOutcomeCallable DescribeUserUsageCntCallable(const Model::DescribeUserUsageCntRequest& request);

                /**
                 *新增黑白名单数据，所有黑白名单数据总量上限为10000
                 * @param req ImportNameListDataRequest
                 * @return ImportNameListDataOutcome
                 */
                ImportNameListDataOutcome ImportNameListData(const Model::ImportNameListDataRequest &request);
                void ImportNameListDataAsync(const Model::ImportNameListDataRequest& request, const ImportNameListDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportNameListDataOutcomeCallable ImportNameListDataCallable(const Model::ImportNameListDataRequest& request);

                /**
                 *全栈式风控引擎（RiskControlEngine，RCE）是基于人工智能技术和腾讯20年风控实战沉淀，依托腾讯海量业务构建的风控引擎，以轻量级的 SaaS 服务方式接入，帮助您快速解决注册、登录、营销活动等关键场景遇到的欺诈问题，实时防御黑灰产作恶。
                 * @param req ManageMarketingRiskRequest
                 * @return ManageMarketingRiskOutcome
                 */
                ManageMarketingRiskOutcome ManageMarketingRisk(const Model::ManageMarketingRiskRequest &request);
                void ManageMarketingRiskAsync(const Model::ManageMarketingRiskRequest& request, const ManageMarketingRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageMarketingRiskOutcomeCallable ManageMarketingRiskCallable(const Model::ManageMarketingRiskRequest& request);

                /**
                 *修改列表数据 列表名称 列表类型 数据类型 状态 备注
                 * @param req ModifyNameListRequest
                 * @return ModifyNameListOutcome
                 */
                ModifyNameListOutcome ModifyNameList(const Model::ModifyNameListRequest &request);
                void ModifyNameListAsync(const Model::ModifyNameListRequest& request, const ModifyNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNameListOutcomeCallable ModifyNameListCallable(const Model::ModifyNameListRequest& request);

                /**
                 *修改黑白名单列表详情 详情内容 开始和结束时间 状态 备注等
                 * @param req ModifyNameListDataRequest
                 * @return ModifyNameListDataOutcome
                 */
                ModifyNameListDataOutcome ModifyNameListData(const Model::ModifyNameListDataRequest &request);
                void ModifyNameListDataAsync(const Model::ModifyNameListDataRequest& request, const ModifyNameListDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNameListDataOutcomeCallable ModifyNameListDataCallable(const Model::ModifyNameListDataRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_RCECLIENT_H_
