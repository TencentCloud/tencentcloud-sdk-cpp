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

#ifndef TENCENTCLOUD_TDS_V20220801_TDSCLIENT_H_
#define TENCENTCLOUD_TDS_V20220801_TDSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tds/v20220801/model/DescribeFinanceFraudUltimateRequest.h>
#include <tencentcloud/tds/v20220801/model/DescribeFinanceFraudUltimateResponse.h>
#include <tencentcloud/tds/v20220801/model/DescribeFraudBaseRequest.h>
#include <tencentcloud/tds/v20220801/model/DescribeFraudBaseResponse.h>
#include <tencentcloud/tds/v20220801/model/DescribeFraudPremiumRequest.h>
#include <tencentcloud/tds/v20220801/model/DescribeFraudPremiumResponse.h>
#include <tencentcloud/tds/v20220801/model/DescribeFraudUltimateRequest.h>
#include <tencentcloud/tds/v20220801/model/DescribeFraudUltimateResponse.h>
#include <tencentcloud/tds/v20220801/model/DescribeTrustedIDRequest.h>
#include <tencentcloud/tds/v20220801/model/DescribeTrustedIDResponse.h>


namespace TencentCloud
{
    namespace Tds
    {
        namespace V20220801
        {
            class TdsClient : public AbstractClient
            {
            public:
                TdsClient(const Credential &credential, const std::string &region);
                TdsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeFinanceFraudUltimateResponse> DescribeFinanceFraudUltimateOutcome;
                typedef std::future<DescribeFinanceFraudUltimateOutcome> DescribeFinanceFraudUltimateOutcomeCallable;
                typedef std::function<void(const TdsClient*, const Model::DescribeFinanceFraudUltimateRequest&, DescribeFinanceFraudUltimateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFinanceFraudUltimateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFraudBaseResponse> DescribeFraudBaseOutcome;
                typedef std::future<DescribeFraudBaseOutcome> DescribeFraudBaseOutcomeCallable;
                typedef std::function<void(const TdsClient*, const Model::DescribeFraudBaseRequest&, DescribeFraudBaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFraudBaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFraudPremiumResponse> DescribeFraudPremiumOutcome;
                typedef std::future<DescribeFraudPremiumOutcome> DescribeFraudPremiumOutcomeCallable;
                typedef std::function<void(const TdsClient*, const Model::DescribeFraudPremiumRequest&, DescribeFraudPremiumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFraudPremiumAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFraudUltimateResponse> DescribeFraudUltimateOutcome;
                typedef std::future<DescribeFraudUltimateOutcome> DescribeFraudUltimateOutcomeCallable;
                typedef std::function<void(const TdsClient*, const Model::DescribeFraudUltimateRequest&, DescribeFraudUltimateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFraudUltimateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrustedIDResponse> DescribeTrustedIDOutcome;
                typedef std::future<DescribeTrustedIDOutcome> DescribeTrustedIDOutcomeCallable;
                typedef std::function<void(const TdsClient*, const Model::DescribeTrustedIDRequest&, DescribeTrustedIDOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrustedIDAsyncHandler;



                /**
                 *查询设备标识及风险（金融旗舰版）
                 * @param req DescribeFinanceFraudUltimateRequest
                 * @return DescribeFinanceFraudUltimateOutcome
                 */
                DescribeFinanceFraudUltimateOutcome DescribeFinanceFraudUltimate(const Model::DescribeFinanceFraudUltimateRequest &request);
                void DescribeFinanceFraudUltimateAsync(const Model::DescribeFinanceFraudUltimateRequest& request, const DescribeFinanceFraudUltimateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFinanceFraudUltimateOutcomeCallable DescribeFinanceFraudUltimateCallable(const Model::DescribeFinanceFraudUltimateRequest& request);

                /**
                 *查询设备风险
                 * @param req DescribeFraudBaseRequest
                 * @return DescribeFraudBaseOutcome
                 */
                DescribeFraudBaseOutcome DescribeFraudBase(const Model::DescribeFraudBaseRequest &request);
                void DescribeFraudBaseAsync(const Model::DescribeFraudBaseRequest& request, const DescribeFraudBaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFraudBaseOutcomeCallable DescribeFraudBaseCallable(const Model::DescribeFraudBaseRequest& request);

                /**
                 *查询设备标识及风险
                 * @param req DescribeFraudPremiumRequest
                 * @return DescribeFraudPremiumOutcome
                 */
                DescribeFraudPremiumOutcome DescribeFraudPremium(const Model::DescribeFraudPremiumRequest &request);
                void DescribeFraudPremiumAsync(const Model::DescribeFraudPremiumRequest& request, const DescribeFraudPremiumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFraudPremiumOutcomeCallable DescribeFraudPremiumCallable(const Model::DescribeFraudPremiumRequest& request);

                /**
                 *查询设备标识及风险（旗舰版）
                 * @param req DescribeFraudUltimateRequest
                 * @return DescribeFraudUltimateOutcome
                 */
                DescribeFraudUltimateOutcome DescribeFraudUltimate(const Model::DescribeFraudUltimateRequest &request);
                void DescribeFraudUltimateAsync(const Model::DescribeFraudUltimateRequest& request, const DescribeFraudUltimateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFraudUltimateOutcomeCallable DescribeFraudUltimateCallable(const Model::DescribeFraudUltimateRequest& request);

                /**
                 *查询设备标识
                 * @param req DescribeTrustedIDRequest
                 * @return DescribeTrustedIDOutcome
                 */
                DescribeTrustedIDOutcome DescribeTrustedID(const Model::DescribeTrustedIDRequest &request);
                void DescribeTrustedIDAsync(const Model::DescribeTrustedIDRequest& request, const DescribeTrustedIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrustedIDOutcomeCallable DescribeTrustedIDCallable(const Model::DescribeTrustedIDRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TDS_V20220801_TDSCLIENT_H_
