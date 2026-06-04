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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPWEBSEARCHCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPWEBSEARCHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 联网搜索配置(国际版使用)
                */
                class AppWebSearchConfig : public AbstractModel
                {
                public:
                    AppWebSearchConfig();
                    ~AppWebSearchConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API密钥
                     * @return ApiKey API密钥
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置API密钥
                     * @param _apiKey API密钥
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                    /**
                     * 获取是否开启
                     * @return Enabled 是否开启
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启
                     * @param _enabled 是否开启
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取服务提供商
                     * @return Provider 服务提供商
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置服务提供商
                     * @param _provider 服务提供商
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取返回结果数量
                     * @return TopN 返回结果数量
                     * 
                     */
                    uint64_t GetTopN() const;

                    /**
                     * 设置返回结果数量
                     * @param _topN 返回结果数量
                     * 
                     */
                    void SetTopN(const uint64_t& _topN);

                    /**
                     * 判断参数 TopN 是否已赋值
                     * @return TopN 是否已赋值
                     * 
                     */
                    bool TopNHasBeenSet() const;

                private:

                    /**
                     * API密钥
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * 是否开启
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 服务提供商
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * 返回结果数量
                     */
                    uint64_t m_topN;
                    bool m_topNHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPWEBSEARCHCONFIG_H_
