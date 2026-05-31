/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYRESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/TokenPlanApiKeyInfo.h>
#include <tencentcloud/tokenhub/v20260322/model/SubPackageBalance.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeTokenPlanApiKey返回参数结构体
                */
                class DescribeTokenPlanApiKeyResponse : public AbstractModel
                {
                public:
                    DescribeTokenPlanApiKeyResponse();
                    ~DescribeTokenPlanApiKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取API Key 详情信息。
                     * @return ApiKey API Key 详情信息。
                     * 
                     */
                    TokenPlanApiKeyInfo GetApiKey() const;

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                    /**
                     * 获取API Key 额度及用量信息。
                     * @return Balance API Key 额度及用量信息。
                     * 
                     */
                    SubPackageBalance GetBalance() const;

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                private:

                    /**
                     * API Key 详情信息。
                     */
                    TokenPlanApiKeyInfo m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * API Key 额度及用量信息。
                     */
                    SubPackageBalance m_balance;
                    bool m_balanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYRESPONSE_H_
