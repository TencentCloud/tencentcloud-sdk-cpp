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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYSECRETREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYSECRETREQUEST_H_

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
                * DescribeTokenPlanApiKeySecret请求参数结构体
                */
                class DescribeTokenPlanApiKeySecretRequest : public AbstractModel
                {
                public:
                    DescribeTokenPlanApiKeySecretRequest();
                    ~DescribeTokenPlanApiKeySecretRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API Key ID。可通过DescribeTokenPlanApiKeyList接口获取。
                     * @return ApiKeyId API Key ID。可通过DescribeTokenPlanApiKeyList接口获取。
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 设置API Key ID。可通过DescribeTokenPlanApiKeyList接口获取。
                     * @param _apiKeyId API Key ID。可通过DescribeTokenPlanApiKeyList接口获取。
                     * 
                     */
                    void SetApiKeyId(const std::string& _apiKeyId);

                    /**
                     * 判断参数 ApiKeyId 是否已赋值
                     * @return ApiKeyId 是否已赋值
                     * 
                     */
                    bool ApiKeyIdHasBeenSet() const;

                private:

                    /**
                     * API Key ID。可通过DescribeTokenPlanApiKeyList接口获取。
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYSECRETREQUEST_H_
