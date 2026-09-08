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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_EBPFDNSFILTER_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_EBPFDNSFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * eBPF DNS 过滤器
                */
                class EBPFDNSFilter : public AbstractModel
                {
                public:
                    EBPFDNSFilter();
                    ~EBPFDNSFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>过滤模式</p><p>枚举值：</p><ul><li>0： 不过滤</li><li>1： 白名单</li><li>2： 黑名单</li></ul>
                     * @return Mode <p>过滤模式</p><p>枚举值：</p><ul><li>0： 不过滤</li><li>1： 白名单</li><li>2： 黑名单</li></ul>
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置<p>过滤模式</p><p>枚举值：</p><ul><li>0： 不过滤</li><li>1： 白名单</li><li>2： 黑名单</li></ul>
                     * @param _mode <p>过滤模式</p><p>枚举值：</p><ul><li>0： 不过滤</li><li>1： 白名单</li><li>2： 黑名单</li></ul>
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>域名列表，支持 *.example.com 通配</p>
                     * @return Domains <p>域名列表，支持 *.example.com 通配</p>
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置<p>域名列表，支持 *.example.com 通配</p>
                     * @param _domains <p>域名列表，支持 *.example.com 通配</p>
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                private:

                    /**
                     * <p>过滤模式</p><p>枚举值：</p><ul><li>0： 不过滤</li><li>1： 白名单</li><li>2： 黑名单</li></ul>
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>域名列表，支持 *.example.com 通配</p>
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EBPFDNSFILTER_H_
