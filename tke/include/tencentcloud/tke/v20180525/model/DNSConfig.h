/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DNSCONFIG_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DNSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/DNSConfigOption.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 自定义DNS配置
                */
                class DNSConfig : public AbstractModel
                {
                public:
                    DNSConfig();
                    ~DNSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DNS 服务器IP地址列表
                     * @return Nameservers DNS 服务器IP地址列表
                     * 
                     */
                    std::vector<std::string> GetNameservers() const;

                    /**
                     * 设置DNS 服务器IP地址列表
                     * @param _nameservers DNS 服务器IP地址列表
                     * 
                     */
                    void SetNameservers(const std::vector<std::string>& _nameservers);

                    /**
                     * 判断参数 Nameservers 是否已赋值
                     * @return Nameservers 是否已赋值
                     * 
                     */
                    bool NameserversHasBeenSet() const;

                    /**
                     * 获取对象选项列表，每个对象由name和value（可选）构成
                     * @return Options 对象选项列表，每个对象由name和value（可选）构成
                     * 
                     */
                    std::vector<DNSConfigOption> GetOptions() const;

                    /**
                     * 设置对象选项列表，每个对象由name和value（可选）构成
                     * @param _options 对象选项列表，每个对象由name和value（可选）构成
                     * 
                     */
                    void SetOptions(const std::vector<DNSConfigOption>& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取DNS搜索域列表
                     * @return Searches DNS搜索域列表
                     * 
                     */
                    std::vector<std::string> GetSearches() const;

                    /**
                     * 设置DNS搜索域列表
                     * @param _searches DNS搜索域列表
                     * 
                     */
                    void SetSearches(const std::vector<std::string>& _searches);

                    /**
                     * 判断参数 Searches 是否已赋值
                     * @return Searches 是否已赋值
                     * 
                     */
                    bool SearchesHasBeenSet() const;

                private:

                    /**
                     * DNS 服务器IP地址列表
                     */
                    std::vector<std::string> m_nameservers;
                    bool m_nameserversHasBeenSet;

                    /**
                     * 对象选项列表，每个对象由name和value（可选）构成
                     */
                    std::vector<DNSConfigOption> m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * DNS搜索域列表
                     */
                    std::vector<std::string> m_searches;
                    bool m_searchesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DNSCONFIG_H_
