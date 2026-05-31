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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYSECRETRESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYSECRETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeTokenPlanApiKeySecret返回参数结构体
                */
                class DescribeTokenPlanApiKeySecretResponse : public AbstractModel
                {
                public:
                    DescribeTokenPlanApiKeySecretResponse();
                    ~DescribeTokenPlanApiKeySecretResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取APIKey ID。
                     * @return ApiKeyId APIKey ID。
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 判断参数 ApiKeyId 是否已赋值
                     * @return ApiKeyId 是否已赋值
                     * 
                     */
                    bool ApiKeyIdHasBeenSet() const;

                    /**
                     * 获取APIKey 密钥值（明文）。请妥善保管。
                     * @return ApiKey APIKey 密钥值（明文）。请妥善保管。
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                private:

                    /**
                     * APIKey ID。
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * APIKey 密钥值（明文）。请妥善保管。
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYSECRETRESPONSE_H_
