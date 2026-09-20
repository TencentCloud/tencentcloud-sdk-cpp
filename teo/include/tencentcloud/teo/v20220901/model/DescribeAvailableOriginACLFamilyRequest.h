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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAVAILABLEORIGINACLFAMILYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAVAILABLEORIGINACLFAMILYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Filter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeAvailableOriginACLFamily请求参数结构体
                */
                class DescribeAvailableOriginACLFamilyRequest : public AbstractModel
                {
                public:
                    DescribeAvailableOriginACLFamilyRequest();
                    ~DescribeAvailableOriginACLFamilyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点ID。</p>
                     * @return ZoneId <p>站点ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点ID。</p>
                     * @param _zoneId <p>站点ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回当前站点下所有可用版本。源站防护的 IP 段控制域包含标准控制域和精简控制域。标准控制域和精简控制域主要区别在于提供的回源 IP 网段数量差异，后者数量更少,但是使用上有限制，如需使用请联系技术支持。具体取值说明如下：<br>详细的过滤条件如下：<br>OriginACLFamily：按照控制域进行过滤；</p><li>gaz：标准全球可用区控制域；</li><li>mlc：标准中国大陆可用区控制域；</li><li>emc：标准全球(不含中国大陆)可用区控制域；</li><li>plat-gaz：精简全球可用区控制域；</li><li>plat-mlc：精简中国大陆可用区控制域；</li><li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li><li>plat-specific-gaz：定制版控全球可用区制域；</li><li>plat-specific-mlc：定制版控中国大陆可用区控制域；</li><li>plat-specific-emc：定制版控全球（不含中国大陆）可用区控制域。</li>
                     * @return Filters <p>过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回当前站点下所有可用版本。源站防护的 IP 段控制域包含标准控制域和精简控制域。标准控制域和精简控制域主要区别在于提供的回源 IP 网段数量差异，后者数量更少,但是使用上有限制，如需使用请联系技术支持。具体取值说明如下：<br>详细的过滤条件如下：<br>OriginACLFamily：按照控制域进行过滤；</p><li>gaz：标准全球可用区控制域；</li><li>mlc：标准中国大陆可用区控制域；</li><li>emc：标准全球(不含中国大陆)可用区控制域；</li><li>plat-gaz：精简全球可用区控制域；</li><li>plat-mlc：精简中国大陆可用区控制域；</li><li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li><li>plat-specific-gaz：定制版控全球可用区制域；</li><li>plat-specific-mlc：定制版控中国大陆可用区控制域；</li><li>plat-specific-emc：定制版控全球（不含中国大陆）可用区控制域。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回当前站点下所有可用版本。源站防护的 IP 段控制域包含标准控制域和精简控制域。标准控制域和精简控制域主要区别在于提供的回源 IP 网段数量差异，后者数量更少,但是使用上有限制，如需使用请联系技术支持。具体取值说明如下：<br>详细的过滤条件如下：<br>OriginACLFamily：按照控制域进行过滤；</p><li>gaz：标准全球可用区控制域；</li><li>mlc：标准中国大陆可用区控制域；</li><li>emc：标准全球(不含中国大陆)可用区控制域；</li><li>plat-gaz：精简全球可用区控制域；</li><li>plat-mlc：精简中国大陆可用区控制域；</li><li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li><li>plat-specific-gaz：定制版控全球可用区制域；</li><li>plat-specific-mlc：定制版控中国大陆可用区控制域；</li><li>plat-specific-emc：定制版控全球（不含中国大陆）可用区控制域。</li>
                     * @param _filters <p>过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回当前站点下所有可用版本。源站防护的 IP 段控制域包含标准控制域和精简控制域。标准控制域和精简控制域主要区别在于提供的回源 IP 网段数量差异，后者数量更少,但是使用上有限制，如需使用请联系技术支持。具体取值说明如下：<br>详细的过滤条件如下：<br>OriginACLFamily：按照控制域进行过滤；</p><li>gaz：标准全球可用区控制域；</li><li>mlc：标准中国大陆可用区控制域；</li><li>emc：标准全球(不含中国大陆)可用区控制域；</li><li>plat-gaz：精简全球可用区控制域；</li><li>plat-mlc：精简中国大陆可用区控制域；</li><li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li><li>plat-specific-gaz：定制版控全球可用区制域；</li><li>plat-specific-mlc：定制版控中国大陆可用区控制域；</li><li>plat-specific-emc：定制版控全球（不含中国大陆）可用区控制域。</li>
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
                     * 获取<p>分页查询偏移量，默认为 0。</p>
                     * @return Offset <p>分页查询偏移量，默认为 0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页查询偏移量，默认为 0。</p>
                     * @param _offset <p>分页查询偏移量，默认为 0。</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>分页查询限制数目，默认值：20，最大值：100。</p>
                     * @return Limit <p>分页查询限制数目，默认值：20，最大值：100。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页查询限制数目，默认值：20，最大值：100。</p>
                     * @param _limit <p>分页查询限制数目，默认值：20，最大值：100。</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>站点ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回当前站点下所有可用版本。源站防护的 IP 段控制域包含标准控制域和精简控制域。标准控制域和精简控制域主要区别在于提供的回源 IP 网段数量差异，后者数量更少,但是使用上有限制，如需使用请联系技术支持。具体取值说明如下：<br>详细的过滤条件如下：<br>OriginACLFamily：按照控制域进行过滤；</p><li>gaz：标准全球可用区控制域；</li><li>mlc：标准中国大陆可用区控制域；</li><li>emc：标准全球(不含中国大陆)可用区控制域；</li><li>plat-gaz：精简全球可用区控制域；</li><li>plat-mlc：精简中国大陆可用区控制域；</li><li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li><li>plat-specific-gaz：定制版控全球可用区制域；</li><li>plat-specific-mlc：定制版控中国大陆可用区控制域；</li><li>plat-specific-emc：定制版控全球（不含中国大陆）可用区控制域。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页查询偏移量，默认为 0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页查询限制数目，默认值：20，最大值：100。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAVAILABLEORIGINACLFAMILYREQUEST_H_
