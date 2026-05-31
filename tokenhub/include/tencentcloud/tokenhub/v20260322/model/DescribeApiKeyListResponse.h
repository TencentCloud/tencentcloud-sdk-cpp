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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEAPIKEYLISTRESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEAPIKEYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/ApiKeyDetail.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeApiKeyList返回参数结构体
                */
                class DescribeApiKeyListResponse : public AbstractModel
                {
                public:
                    DescribeApiKeyListResponse();
                    ~DescribeApiKeyListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取API 密钥列表。
                     * @return ApiKeySet API 密钥列表。
                     * 
                     */
                    std::vector<ApiKeyDetail> GetApiKeySet() const;

                    /**
                     * 判断参数 ApiKeySet 是否已赋值
                     * @return ApiKeySet 是否已赋值
                     * 
                     */
                    bool ApiKeySetHasBeenSet() const;

                    /**
                     * 获取符合条件的 API 密钥总数。
                     * @return TotalCount 符合条件的 API 密钥总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * API 密钥列表。
                     */
                    std::vector<ApiKeyDetail> m_apiKeySet;
                    bool m_apiKeySetHasBeenSet;

                    /**
                     * 符合条件的 API 密钥总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEAPIKEYLISTRESPONSE_H_
