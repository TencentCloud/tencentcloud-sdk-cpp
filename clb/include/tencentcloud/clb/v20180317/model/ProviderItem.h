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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_PROVIDERITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_PROVIDERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Provider 信息
                */
                class ProviderItem : public AbstractModel
                {
                public:
                    ProviderItem();
                    ~ProviderItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Provider 标识（如 openai）</p>
                     * @return Provider <p>Provider 标识（如 openai）</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>Provider 标识（如 openai）</p>
                     * @param _provider <p>Provider 标识（如 openai）</p>
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
                     * 获取<p>显示名称（如 OpenAI）</p>
                     * @return DisplayName <p>显示名称（如 OpenAI）</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>显示名称（如 OpenAI）</p>
                     * @param _displayName <p>显示名称（如 OpenAI）</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>模型协议列表</p>
                     * @return Protocols <p>模型协议列表</p>
                     * 
                     */
                    std::vector<std::string> GetProtocols() const;

                    /**
                     * 设置<p>模型协议列表</p>
                     * @param _protocols <p>模型协议列表</p>
                     * 
                     */
                    void SetProtocols(const std::vector<std::string>& _protocols);

                    /**
                     * 判断参数 Protocols 是否已赋值
                     * @return Protocols 是否已赋值
                     * 
                     */
                    bool ProtocolsHasBeenSet() const;

                    /**
                     * 获取<p>英文显示名称</p>
                     * @return EnglishDisplayName <p>英文显示名称</p>
                     * 
                     */
                    std::string GetEnglishDisplayName() const;

                    /**
                     * 设置<p>英文显示名称</p>
                     * @param _englishDisplayName <p>英文显示名称</p>
                     * 
                     */
                    void SetEnglishDisplayName(const std::string& _englishDisplayName);

                    /**
                     * 判断参数 EnglishDisplayName 是否已赋值
                     * @return EnglishDisplayName 是否已赋值
                     * 
                     */
                    bool EnglishDisplayNameHasBeenSet() const;

                private:

                    /**
                     * <p>Provider 标识（如 openai）</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>显示名称（如 OpenAI）</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>模型协议列表</p>
                     */
                    std::vector<std::string> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * <p>英文显示名称</p>
                     */
                    std::string m_englishDisplayName;
                    bool m_englishDisplayNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_PROVIDERITEM_H_
