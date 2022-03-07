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

#ifndef TENCENTCLOUD_CASB_V20200507_CASBCLIENT_H_
#define TENCENTCLOUD_CASB_V20200507_CASBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/casb/v20200507/model/CopyCryptoColumnPolicyRequest.h>
#include <tencentcloud/casb/v20200507/model/CopyCryptoColumnPolicyResponse.h>


namespace TencentCloud
{
    namespace Casb
    {
        namespace V20200507
        {
            class CasbClient : public AbstractClient
            {
            public:
                CasbClient(const Credential &credential, const std::string &region);
                CasbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CopyCryptoColumnPolicyResponse> CopyCryptoColumnPolicyOutcome;
                typedef std::future<CopyCryptoColumnPolicyOutcome> CopyCryptoColumnPolicyOutcomeCallable;
                typedef std::function<void(const CasbClient*, const Model::CopyCryptoColumnPolicyRequest&, CopyCryptoColumnPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyCryptoColumnPolicyAsyncHandler;



                /**
                 *同region下 根据用户输入的CasbId,MetaDataId 复制策略到DstCasbId,MetaDataId中。
场景1：
相同CasbId，不同MetadataId 下策略复制
场景2：
不同Casbid,不同MetaDataId 下策略复制
场景3:
相同CasbId,相同MetaDataId 且 DatabaseName不同 策略复制

                 * @param req CopyCryptoColumnPolicyRequest
                 * @return CopyCryptoColumnPolicyOutcome
                 */
                CopyCryptoColumnPolicyOutcome CopyCryptoColumnPolicy(const Model::CopyCryptoColumnPolicyRequest &request);
                void CopyCryptoColumnPolicyAsync(const Model::CopyCryptoColumnPolicyRequest& request, const CopyCryptoColumnPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyCryptoColumnPolicyOutcomeCallable CopyCryptoColumnPolicyCallable(const Model::CopyCryptoColumnPolicyRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CASB_V20200507_CASBCLIENT_H_
