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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGLISTREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeCustomizedConfigList请求参数结构体
                */
                class DescribeCustomizedConfigListRequest : public AbstractModel
                {
                public:
                    DescribeCustomizedConfigListRequest();
                    ~DescribeCustomizedConfigListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置类型:CLB 负载均衡维度。 SERVER 域名维度。 LOCATION 规则维度。
                     * @return ConfigType 配置类型:CLB 负载均衡维度。 SERVER 域名维度。 LOCATION 规则维度。
                     */
                    std::string GetConfigType() const;

                    /**
                     * 设置配置类型:CLB 负载均衡维度。 SERVER 域名维度。 LOCATION 规则维度。
                     * @param ConfigType 配置类型:CLB 负载均衡维度。 SERVER 域名维度。 LOCATION 规则维度。
                     */
                    void SetConfigType(const std::string& _configType);

                    /**
                     * 判断参数 ConfigType 是否已赋值
                     * @return ConfigType 是否已赋值
                     */
                    bool ConfigTypeHasBeenSet() const;

                    /**
                     * 获取拉取页偏移，默认值0
                     * @return Offset 拉取页偏移，默认值0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置拉取页偏移，默认值0
                     * @param Offset 拉取页偏移，默认值0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取拉取数目，默认值20
                     * @return Limit 拉取数目，默认值20
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置拉取数目，默认值20
                     * @param Limit 拉取数目，默认值20
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取拉取指定配置名字，模糊匹配。
                     * @return ConfigName 拉取指定配置名字，模糊匹配。
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置拉取指定配置名字，模糊匹配。
                     * @param ConfigName 拉取指定配置名字，模糊匹配。
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取配置ID
                     * @return UconfigIds 配置ID
                     */
                    std::vector<std::string> GetUconfigIds() const;

                    /**
                     * 设置配置ID
                     * @param UconfigIds 配置ID
                     */
                    void SetUconfigIds(const std::vector<std::string>& _uconfigIds);

                    /**
                     * 判断参数 UconfigIds 是否已赋值
                     * @return UconfigIds 是否已赋值
                     */
                    bool UconfigIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件如下：
<li> loadbalancer-id - String - 是否必填：否 - （过滤条件）按照 负载均衡ID 过滤，如："lb-12345678"。</li>
<li> vip - String - 是否必填：否 - （过滤条件）按照 负载均衡Vip 过滤，如："1.1.1.1","2204::22:3"。</li>
                     * @return Filters 过滤条件如下：
<li> loadbalancer-id - String - 是否必填：否 - （过滤条件）按照 负载均衡ID 过滤，如："lb-12345678"。</li>
<li> vip - String - 是否必填：否 - （过滤条件）按照 负载均衡Vip 过滤，如："1.1.1.1","2204::22:3"。</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件如下：
<li> loadbalancer-id - String - 是否必填：否 - （过滤条件）按照 负载均衡ID 过滤，如："lb-12345678"。</li>
<li> vip - String - 是否必填：否 - （过滤条件）按照 负载均衡Vip 过滤，如："1.1.1.1","2204::22:3"。</li>
                     * @param Filters 过滤条件如下：
<li> loadbalancer-id - String - 是否必填：否 - （过滤条件）按照 负载均衡ID 过滤，如："lb-12345678"。</li>
<li> vip - String - 是否必填：否 - （过滤条件）按照 负载均衡Vip 过滤，如："1.1.1.1","2204::22:3"。</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 配置类型:CLB 负载均衡维度。 SERVER 域名维度。 LOCATION 规则维度。
                     */
                    std::string m_configType;
                    bool m_configTypeHasBeenSet;

                    /**
                     * 拉取页偏移，默认值0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 拉取数目，默认值20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 拉取指定配置名字，模糊匹配。
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 配置ID
                     */
                    std::vector<std::string> m_uconfigIds;
                    bool m_uconfigIdsHasBeenSet;

                    /**
                     * 过滤条件如下：
<li> loadbalancer-id - String - 是否必填：否 - （过滤条件）按照 负载均衡ID 过滤，如："lb-12345678"。</li>
<li> vip - String - 是否必填：否 - （过滤条件）按照 负载均衡Vip 过滤，如："1.1.1.1","2204::22:3"。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGLISTREQUEST_H_
