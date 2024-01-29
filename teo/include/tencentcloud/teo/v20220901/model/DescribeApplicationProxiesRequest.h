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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAPPLICATIONPROXIESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAPPLICATIONPROXIESREQUEST_H_

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
                * DescribeApplicationProxies请求参数结构体
                */
                class DescribeApplicationProxiesRequest : public AbstractModel
                {
                public:
                    DescribeApplicationProxiesRequest();
                    ~DescribeApplicationProxiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID。该参数必填。
                     * @return ZoneId 站点ID。该参数必填。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。该参数必填。
                     * @param _zoneId 站点ID。该参数必填。
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
                     * 获取过滤条件，Filters.Values的上限为20。详细的过滤条件如下：<li>proxy-id<br>   按照【<strong>代理ID</strong>】进行过滤。代理ID形如：proxy-ev2sawbwfd。<br>   类型：String<br>   必选：否</li><li>zone-id<br>   按照【<strong>站点ID</strong>】进行过滤。站点ID形如：zone-vawer2vadg。<br>   类型：String<br>   必选：否</li><li>rule-tag<br>   按照【<strong>规则标签</strong>】对应用代理下的规则进行过滤。规则标签形如：rule-service-1。<br>   类型：String<br>   必选：否</li>
                     * @return Filters 过滤条件，Filters.Values的上限为20。详细的过滤条件如下：<li>proxy-id<br>   按照【<strong>代理ID</strong>】进行过滤。代理ID形如：proxy-ev2sawbwfd。<br>   类型：String<br>   必选：否</li><li>zone-id<br>   按照【<strong>站点ID</strong>】进行过滤。站点ID形如：zone-vawer2vadg。<br>   类型：String<br>   必选：否</li><li>rule-tag<br>   按照【<strong>规则标签</strong>】对应用代理下的规则进行过滤。规则标签形如：rule-service-1。<br>   类型：String<br>   必选：否</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，Filters.Values的上限为20。详细的过滤条件如下：<li>proxy-id<br>   按照【<strong>代理ID</strong>】进行过滤。代理ID形如：proxy-ev2sawbwfd。<br>   类型：String<br>   必选：否</li><li>zone-id<br>   按照【<strong>站点ID</strong>】进行过滤。站点ID形如：zone-vawer2vadg。<br>   类型：String<br>   必选：否</li><li>rule-tag<br>   按照【<strong>规则标签</strong>】对应用代理下的规则进行过滤。规则标签形如：rule-service-1。<br>   类型：String<br>   必选：否</li>
                     * @param _filters 过滤条件，Filters.Values的上限为20。详细的过滤条件如下：<li>proxy-id<br>   按照【<strong>代理ID</strong>】进行过滤。代理ID形如：proxy-ev2sawbwfd。<br>   类型：String<br>   必选：否</li><li>zone-id<br>   按照【<strong>站点ID</strong>】进行过滤。站点ID形如：zone-vawer2vadg。<br>   类型：String<br>   必选：否</li><li>rule-tag<br>   按照【<strong>规则标签</strong>】对应用代理下的规则进行过滤。规则标签形如：rule-service-1。<br>   类型：String<br>   必选：否</li>
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
                     * 获取分页查询偏移量。默认为0。
                     * @return Offset 分页查询偏移量。默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量。默认为0。
                     * @param _offset 分页查询偏移量。默认为0。
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
                     * 获取分页查询限制数目。默认值：20，最大值：1000。
                     * @return Limit 分页查询限制数目。默认值：20，最大值：1000。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询限制数目。默认值：20，最大值：1000。
                     * @param _limit 分页查询限制数目。默认值：20，最大值：1000。
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
                     * 站点ID。该参数必填。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 过滤条件，Filters.Values的上限为20。详细的过滤条件如下：<li>proxy-id<br>   按照【<strong>代理ID</strong>】进行过滤。代理ID形如：proxy-ev2sawbwfd。<br>   类型：String<br>   必选：否</li><li>zone-id<br>   按照【<strong>站点ID</strong>】进行过滤。站点ID形如：zone-vawer2vadg。<br>   类型：String<br>   必选：否</li><li>rule-tag<br>   按照【<strong>规则标签</strong>】对应用代理下的规则进行过滤。规则标签形如：rule-service-1。<br>   类型：String<br>   必选：否</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页查询偏移量。默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目。默认值：20，最大值：1000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAPPLICATIONPROXIESREQUEST_H_
