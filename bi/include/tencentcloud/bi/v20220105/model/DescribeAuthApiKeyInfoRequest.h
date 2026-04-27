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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEAUTHAPIKEYINFOREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEAUTHAPIKEYINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeAuthApiKeyInfo请求参数结构体
                */
                class DescribeAuthApiKeyInfoRequest : public AbstractModel
                {
                public:
                    DescribeAuthApiKeyInfoRequest();
                    ~DescribeAuthApiKeyInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ApiKey</p>
                     * @return ApiKey <p>ApiKey</p>
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置<p>ApiKey</p>
                     * @param _apiKey <p>ApiKey</p>
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                private:

                    /**
                     * <p>ApiKey</p>
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEAUTHAPIKEYINFOREQUEST_H_
