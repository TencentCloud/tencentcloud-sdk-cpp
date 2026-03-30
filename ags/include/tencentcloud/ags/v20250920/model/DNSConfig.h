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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DNSCONFIG_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DNSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 沙箱自定义 dns 配置
                */
                class DNSConfig : public AbstractModel
                {
                public:
                    DNSConfig();
                    ~DNSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>DNS 服务器地址</p><p>参数格式：需要有效 IP 地址</p><p>默认值：10.0.0.1</p>
                     * @return Servers <p>DNS 服务器地址</p><p>参数格式：需要有效 IP 地址</p><p>默认值：10.0.0.1</p>
                     * 
                     */
                    std::vector<std::string> GetServers() const;

                    /**
                     * 设置<p>DNS 服务器地址</p><p>参数格式：需要有效 IP 地址</p><p>默认值：10.0.0.1</p>
                     * @param _servers <p>DNS 服务器地址</p><p>参数格式：需要有效 IP 地址</p><p>默认值：10.0.0.1</p>
                     * 
                     */
                    void SetServers(const std::vector<std::string>& _servers);

                    /**
                     * 判断参数 Servers 是否已赋值
                     * @return Servers 是否已赋值
                     * 
                     */
                    bool ServersHasBeenSet() const;

                    /**
                     * 获取<p>搜索域(对应 resolv.conf 的 search 指令)</p>
                     * @return Searches <p>搜索域(对应 resolv.conf 的 search 指令)</p>
                     * 
                     */
                    std::vector<std::string> GetSearches() const;

                    /**
                     * 设置<p>搜索域(对应 resolv.conf 的 search 指令)</p>
                     * @param _searches <p>搜索域(对应 resolv.conf 的 search 指令)</p>
                     * 
                     */
                    void SetSearches(const std::vector<std::string>& _searches);

                    /**
                     * 判断参数 Searches 是否已赋值
                     * @return Searches 是否已赋值
                     * 
                     */
                    bool SearchesHasBeenSet() const;

                    /**
                     * 获取<p>配置项(对应  resolv.conf 选项)</p>
                     * @return Options <p>配置项(对应  resolv.conf 选项)</p>
                     * 
                     */
                    std::vector<std::string> GetOptions() const;

                    /**
                     * 设置<p>配置项(对应  resolv.conf 选项)</p>
                     * @param _options <p>配置项(对应  resolv.conf 选项)</p>
                     * 
                     */
                    void SetOptions(const std::vector<std::string>& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                private:

                    /**
                     * <p>DNS 服务器地址</p><p>参数格式：需要有效 IP 地址</p><p>默认值：10.0.0.1</p>
                     */
                    std::vector<std::string> m_servers;
                    bool m_serversHasBeenSet;

                    /**
                     * <p>搜索域(对应 resolv.conf 的 search 指令)</p>
                     */
                    std::vector<std::string> m_searches;
                    bool m_searchesHasBeenSet;

                    /**
                     * <p>配置项(对应  resolv.conf 选项)</p>
                     */
                    std::vector<std::string> m_options;
                    bool m_optionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DNSCONFIG_H_
