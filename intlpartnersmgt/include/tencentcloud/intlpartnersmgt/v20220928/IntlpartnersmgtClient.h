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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_INTLPARTNERSMGTCLIENT_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_INTLPARTNERSMGTCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/AllocateCustomerCreditRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/AllocateCustomerCreditResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/CreateAccountRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/CreateAccountResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/GetCountryCodesRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/GetCountryCodesResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditAllocationHistoryRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditAllocationHistoryResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditByUinListRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditByUinListResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomersCreditRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomersCreditResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryDirectCustomersCreditRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryDirectCustomersCreditResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryPartnerCreditRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryPartnerCreditResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherAmountByUinRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherAmountByUinResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherPoolRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherPoolResponse.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            class IntlpartnersmgtClient : public AbstractClient
            {
            public:
                IntlpartnersmgtClient(const Credential &credential, const std::string &region);
                IntlpartnersmgtClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AllocateCustomerCreditResponse> AllocateCustomerCreditOutcome;
                typedef std::future<AllocateCustomerCreditOutcome> AllocateCustomerCreditOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::AllocateCustomerCreditRequest&, AllocateCustomerCreditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateCustomerCreditAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccountResponse> CreateAccountOutcome;
                typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::CreateAccountRequest&, CreateAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCountryCodesResponse> GetCountryCodesOutcome;
                typedef std::future<GetCountryCodesOutcome> GetCountryCodesOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::GetCountryCodesRequest&, GetCountryCodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCountryCodesAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCreditAllocationHistoryResponse> QueryCreditAllocationHistoryOutcome;
                typedef std::future<QueryCreditAllocationHistoryOutcome> QueryCreditAllocationHistoryOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryCreditAllocationHistoryRequest&, QueryCreditAllocationHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCreditAllocationHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCreditByUinListResponse> QueryCreditByUinListOutcome;
                typedef std::future<QueryCreditByUinListOutcome> QueryCreditByUinListOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryCreditByUinListRequest&, QueryCreditByUinListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCreditByUinListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCustomersCreditResponse> QueryCustomersCreditOutcome;
                typedef std::future<QueryCustomersCreditOutcome> QueryCustomersCreditOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryCustomersCreditRequest&, QueryCustomersCreditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomersCreditAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryDirectCustomersCreditResponse> QueryDirectCustomersCreditOutcome;
                typedef std::future<QueryDirectCustomersCreditOutcome> QueryDirectCustomersCreditOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryDirectCustomersCreditRequest&, QueryDirectCustomersCreditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryDirectCustomersCreditAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryPartnerCreditResponse> QueryPartnerCreditOutcome;
                typedef std::future<QueryPartnerCreditOutcome> QueryPartnerCreditOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryPartnerCreditRequest&, QueryPartnerCreditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryPartnerCreditAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryVoucherAmountByUinResponse> QueryVoucherAmountByUinOutcome;
                typedef std::future<QueryVoucherAmountByUinOutcome> QueryVoucherAmountByUinOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryVoucherAmountByUinRequest&, QueryVoucherAmountByUinOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryVoucherAmountByUinAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryVoucherListByUinResponse> QueryVoucherListByUinOutcome;
                typedef std::future<QueryVoucherListByUinOutcome> QueryVoucherListByUinOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryVoucherListByUinRequest&, QueryVoucherListByUinOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryVoucherListByUinAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryVoucherPoolResponse> QueryVoucherPoolOutcome;
                typedef std::future<QueryVoucherPoolOutcome> QueryVoucherPoolOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryVoucherPoolRequest&, QueryVoucherPoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryVoucherPoolAsyncHandler;



                /**
                 *合作伙伴可以为关联客户设置信用额度，包括调高额度、降低额度、设置额度为0
1、信用额度长期有效，不会定期清0；
2、可用信用额度为0，会触发客户停服，请谨慎操作；
3、如需限制客户新购，但不影响已购产品使用，可与渠道经理申请客户欠费不停服特权后，设置可用信用额度为0；
4、设置的额度，为当前可用信用额度的增量，最大不能超过合作伙伴可分配的剩余额度，设置负数代表回收额度，可用信用额度最低设置为0。
                 * @param req AllocateCustomerCreditRequest
                 * @return AllocateCustomerCreditOutcome
                 */
                AllocateCustomerCreditOutcome AllocateCustomerCredit(const Model::AllocateCustomerCreditRequest &request);
                void AllocateCustomerCreditAsync(const Model::AllocateCustomerCreditRequest& request, const AllocateCustomerCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateCustomerCreditOutcomeCallable AllocateCustomerCreditCallable(const Model::AllocateCustomerCreditRequest& request);

                /**
                 *在合作伙伴平台，创建腾讯云账号，子客户注册完成后，自动与合作伙伴账号绑定。

注意事项：<br>
1、创建腾讯云账号，输入的邮箱、手机号，需要合作伙伴做有效性验证。<br>
2、客户首次登录需要补充个人信息
                 * @param req CreateAccountRequest
                 * @return CreateAccountOutcome
                 */
                CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest &request);
                void CreateAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountOutcomeCallable CreateAccountCallable(const Model::CreateAccountRequest& request);

                /**
                 *获取国家和地区的代码
                 * @param req GetCountryCodesRequest
                 * @return GetCountryCodesOutcome
                 */
                GetCountryCodesOutcome GetCountryCodes(const Model::GetCountryCodesRequest &request);
                void GetCountryCodesAsync(const Model::GetCountryCodesRequest& request, const GetCountryCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCountryCodesOutcomeCallable GetCountryCodesCallable(const Model::GetCountryCodesRequest& request);

                /**
                 *查询单个客户的全部历史分配记录
                 * @param req QueryCreditAllocationHistoryRequest
                 * @return QueryCreditAllocationHistoryOutcome
                 */
                QueryCreditAllocationHistoryOutcome QueryCreditAllocationHistory(const Model::QueryCreditAllocationHistoryRequest &request);
                void QueryCreditAllocationHistoryAsync(const Model::QueryCreditAllocationHistoryRequest& request, const QueryCreditAllocationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCreditAllocationHistoryOutcomeCallable QueryCreditAllocationHistoryCallable(const Model::QueryCreditAllocationHistoryRequest& request);

                /**
                 *查询用户列表信用
                 * @param req QueryCreditByUinListRequest
                 * @return QueryCreditByUinListOutcome
                 */
                QueryCreditByUinListOutcome QueryCreditByUinList(const Model::QueryCreditByUinListRequest &request);
                void QueryCreditByUinListAsync(const Model::QueryCreditByUinListRequest& request, const QueryCreditByUinListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCreditByUinListOutcomeCallable QueryCreditByUinListCallable(const Model::QueryCreditByUinListRequest& request);

                /**
                 *合作伙伴可以查询关联客户的信用额度，以及客户的基础信息
                 * @param req QueryCustomersCreditRequest
                 * @return QueryCustomersCreditOutcome
                 */
                QueryCustomersCreditOutcome QueryCustomersCredit(const Model::QueryCustomersCreditRequest &request);
                void QueryCustomersCreditAsync(const Model::QueryCustomersCreditRequest& request, const QueryCustomersCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCustomersCreditOutcomeCallable QueryCustomersCreditCallable(const Model::QueryCustomersCreditRequest& request);

                /**
                 *查询直接子客信用
                 * @param req QueryDirectCustomersCreditRequest
                 * @return QueryDirectCustomersCreditOutcome
                 */
                QueryDirectCustomersCreditOutcome QueryDirectCustomersCredit(const Model::QueryDirectCustomersCreditRequest &request);
                void QueryDirectCustomersCreditAsync(const Model::QueryDirectCustomersCreditRequest& request, const QueryDirectCustomersCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryDirectCustomersCreditOutcomeCallable QueryDirectCustomersCreditCallable(const Model::QueryDirectCustomersCreditRequest& request);

                /**
                 *查询合作伙伴自己的总信用额度、可用信用额度、已使用信用额度，单位为美元
                 * @param req QueryPartnerCreditRequest
                 * @return QueryPartnerCreditOutcome
                 */
                QueryPartnerCreditOutcome QueryPartnerCredit(const Model::QueryPartnerCreditRequest &request);
                void QueryPartnerCreditAsync(const Model::QueryPartnerCreditRequest& request, const QueryPartnerCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryPartnerCreditOutcomeCallable QueryPartnerCreditCallable(const Model::QueryPartnerCreditRequest& request);

                /**
                 *根据客户uin查询代金券额度
                 * @param req QueryVoucherAmountByUinRequest
                 * @return QueryVoucherAmountByUinOutcome
                 */
                QueryVoucherAmountByUinOutcome QueryVoucherAmountByUin(const Model::QueryVoucherAmountByUinRequest &request);
                void QueryVoucherAmountByUinAsync(const Model::QueryVoucherAmountByUinRequest& request, const QueryVoucherAmountByUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryVoucherAmountByUinOutcomeCallable QueryVoucherAmountByUinCallable(const Model::QueryVoucherAmountByUinRequest& request);

                /**
                 *根据客户uin查询代金券列表
                 * @param req QueryVoucherListByUinRequest
                 * @return QueryVoucherListByUinOutcome
                 */
                QueryVoucherListByUinOutcome QueryVoucherListByUin(const Model::QueryVoucherListByUinRequest &request);
                void QueryVoucherListByUinAsync(const Model::QueryVoucherListByUinRequest& request, const QueryVoucherListByUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryVoucherListByUinOutcomeCallable QueryVoucherListByUinCallable(const Model::QueryVoucherListByUinRequest& request);

                /**
                 *查询代金券额度池
                 * @param req QueryVoucherPoolRequest
                 * @return QueryVoucherPoolOutcome
                 */
                QueryVoucherPoolOutcome QueryVoucherPool(const Model::QueryVoucherPoolRequest &request);
                void QueryVoucherPoolAsync(const Model::QueryVoucherPoolRequest& request, const QueryVoucherPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryVoucherPoolOutcomeCallable QueryVoucherPoolCallable(const Model::QueryVoucherPoolRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_INTLPARTNERSMGTCLIENT_H_
