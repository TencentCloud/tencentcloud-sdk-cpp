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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DELETEAPIKEYREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DELETEAPIKEYREQUEST_H_

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
                * DeleteApiKey请求参数结构体
                */
                class DeleteApiKeyRequest : public AbstractModel
                {
                public:
                    DeleteApiKeyRequest();
                    ~DeleteApiKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>API 密钥 ID。</p>
                     * @return ApiKeyId <p>API 密钥 ID。</p>
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 设置<p>API 密钥 ID。</p>
                     * @param _apiKeyId <p>API 密钥 ID。</p>
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
                     * 获取<p>平台类型。取值：maas。</p>
                     * @return Platform <p>平台类型。取值：maas。</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>平台类型。取值：maas。</p>
                     * @param _platform <p>平台类型。取值：maas。</p>
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                private:

                    /**
                     * <p>API 密钥 ID。</p>
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * <p>平台类型。取值：maas。</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DELETEAPIKEYREQUEST_H_
