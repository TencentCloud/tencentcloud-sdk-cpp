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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEFIREWALLTEMPLATESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEFIREWALLTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Filter.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeFirewallTemplates请求参数结构体
                */
                class DescribeFirewallTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeFirewallTemplatesRequest();
                    ~DescribeFirewallTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取防火墙模板ID列表。可通过[DescribeFirewallTemplates](https://cloud.tencent.com/document/product/1207/96874)接口返回值字段TemplateSet获取。列表长度最大值为100。
                     * @return TemplateIds 防火墙模板ID列表。可通过[DescribeFirewallTemplates](https://cloud.tencent.com/document/product/1207/96874)接口返回值字段TemplateSet获取。列表长度最大值为100。
                     * 
                     */
                    std::vector<std::string> GetTemplateIds() const;

                    /**
                     * 设置防火墙模板ID列表。可通过[DescribeFirewallTemplates](https://cloud.tencent.com/document/product/1207/96874)接口返回值字段TemplateSet获取。列表长度最大值为100。
                     * @param _templateIds 防火墙模板ID列表。可通过[DescribeFirewallTemplates](https://cloud.tencent.com/document/product/1207/96874)接口返回值字段TemplateSet获取。列表长度最大值为100。
                     * 
                     */
                    void SetTemplateIds(const std::vector<std::string>& _templateIds);

                    /**
                     * 判断参数 TemplateIds 是否已赋值
                     * @return TemplateIds 是否已赋值
                     * 
                     */
                    bool TemplateIdsHasBeenSet() const;

                    /**
                     * 获取过滤器列表。
<li>template-id</li>按照【防火墙模板所属的ID】进行过滤。
类型：String
必选：否
<li>template-name</li>按照【防火墙模板所属的名称】进行过滤。
类型：String
必选：否
<li>template-type</li>按照【防火墙模板的类型】进行过滤。
类型：String
必选：否
取值: "PRIVATE"(个人模板)
每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 TemplateIds 和 Filters。
                     * @return Filters 过滤器列表。
<li>template-id</li>按照【防火墙模板所属的ID】进行过滤。
类型：String
必选：否
<li>template-name</li>按照【防火墙模板所属的名称】进行过滤。
类型：String
必选：否
<li>template-type</li>按照【防火墙模板的类型】进行过滤。
类型：String
必选：否
取值: "PRIVATE"(个人模板)
每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 TemplateIds 和 Filters。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器列表。
<li>template-id</li>按照【防火墙模板所属的ID】进行过滤。
类型：String
必选：否
<li>template-name</li>按照【防火墙模板所属的名称】进行过滤。
类型：String
必选：否
<li>template-type</li>按照【防火墙模板的类型】进行过滤。
类型：String
必选：否
取值: "PRIVATE"(个人模板)
每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 TemplateIds 和 Filters。
                     * @param _filters 过滤器列表。
<li>template-id</li>按照【防火墙模板所属的ID】进行过滤。
类型：String
必选：否
<li>template-name</li>按照【防火墙模板所属的名称】进行过滤。
类型：String
必选：否
<li>template-type</li>按照【防火墙模板的类型】进行过滤。
类型：String
必选：否
取值: "PRIVATE"(个人模板)
每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 TemplateIds 和 Filters。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为 0。
                     * @return Offset 偏移量，默认为 0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0。
                     * @param _offset 偏移量，默认为 0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为 20，最大值为 100。
                     * @return Limit 返回数量，默认为 20，最大值为 100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，最大值为 100。
                     * @param _limit 返回数量，默认为 20，最大值为 100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 防火墙模板ID列表。可通过[DescribeFirewallTemplates](https://cloud.tencent.com/document/product/1207/96874)接口返回值字段TemplateSet获取。列表长度最大值为100。
                     */
                    std::vector<std::string> m_templateIds;
                    bool m_templateIdsHasBeenSet;

                    /**
                     * 过滤器列表。
<li>template-id</li>按照【防火墙模板所属的ID】进行过滤。
类型：String
必选：否
<li>template-name</li>按照【防火墙模板所属的名称】进行过滤。
类型：String
必选：否
<li>template-type</li>按照【防火墙模板的类型】进行过滤。
类型：String
必选：否
取值: "PRIVATE"(个人模板)
每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 TemplateIds 和 Filters。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为 20，最大值为 100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEFIREWALLTEMPLATESREQUEST_H_
