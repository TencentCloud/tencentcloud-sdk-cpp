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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEAPIKEYREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEAPIKEYREQUEST_H_

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
                * DescribeApiKey请求参数结构体
                */
                class DescribeApiKeyRequest : public AbstractModel
                {
                public:
                    DescribeApiKeyRequest();
                    ~DescribeApiKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台类型。当前支持填值：maas
                     * @return Platform 平台类型。当前支持填值：maas
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台类型。当前支持填值：maas
                     * @param _platform 平台类型。当前支持填值：maas
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取API 密钥 ID，与 ApiKey 至少需传入其一，优先使用 ApiKeyId。
                     * @return ApiKeyId API 密钥 ID，与 ApiKey 至少需传入其一，优先使用 ApiKeyId。
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 设置API 密钥 ID，与 ApiKey 至少需传入其一，优先使用 ApiKeyId。
                     * @param _apiKeyId API 密钥 ID，与 ApiKey 至少需传入其一，优先使用 ApiKeyId。
                     * 
                     */
                    void SetApiKeyId(const std::string& _apiKeyId);

                    /**
                     * 判断参数 ApiKeyId 是否已赋值
                     * @return ApiKeyId 是否已赋值
                     * 
                     */
                    bool ApiKeyIdHasBeenSet() const;

                    /**
                     * 获取API 密钥明文，与 ApiKeyId 至少需传入其一。
                     * @return ApiKey API 密钥明文，与 ApiKeyId 至少需传入其一。
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置API 密钥明文，与 ApiKeyId 至少需传入其一。
                     * @param _apiKey API 密钥明文，与 ApiKeyId 至少需传入其一。
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
                     * 平台类型。当前支持填值：maas
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * API 密钥 ID，与 ApiKey 至少需传入其一，优先使用 ApiKeyId。
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * API 密钥明文，与 ApiKeyId 至少需传入其一。
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEAPIKEYREQUEST_H_
