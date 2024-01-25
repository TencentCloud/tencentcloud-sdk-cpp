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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL4PROXYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL4PROXYREQUEST_H_

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
                * DescribeL4Proxy请求参数结构体
                */
                class DescribeL4ProxyRequest : public AbstractModel
                {
                public:
                    DescribeL4ProxyRequest();
                    ~DescribeL4ProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取四层代理实例所属站点的 ID。
                     * @return ZoneId 四层代理实例所属站点的 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置四层代理实例所属站点的 ID。
                     * @param _zoneId 四层代理实例所属站点的 ID。
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
                     * 获取分页查询偏移量，不填写时默认为 0。
                     * @return Offset 分页查询偏移量，不填写时默认为 0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量，不填写时默认为 0。
                     * @param _offset 分页查询偏移量，不填写时默认为 0。
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
                     * 获取分页查询限制数目。默认值：20，最大值：1000。	
                     * @return Limit 分页查询限制数目。默认值：20，最大值：1000。	
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页查询限制数目。默认值：20，最大值：1000。	
                     * @param _limit 分页查询限制数目。默认值：20，最大值：1000。	
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回当前 zone-id 下所有四层代理实例信息。详细的过滤条件如下：
<li>proxy-id：按照四层代理实例 ID 进行过滤；</li>
<li>ddos-protection-type：按照安全防护类型进行过滤。</li>


                     * @return Filters 过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回当前 zone-id 下所有四层代理实例信息。详细的过滤条件如下：
<li>proxy-id：按照四层代理实例 ID 进行过滤；</li>
<li>ddos-protection-type：按照安全防护类型进行过滤。</li>


                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回当前 zone-id 下所有四层代理实例信息。详细的过滤条件如下：
<li>proxy-id：按照四层代理实例 ID 进行过滤；</li>
<li>ddos-protection-type：按照安全防护类型进行过滤。</li>


                     * @param _filters 过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回当前 zone-id 下所有四层代理实例信息。详细的过滤条件如下：
<li>proxy-id：按照四层代理实例 ID 进行过滤；</li>
<li>ddos-protection-type：按照安全防护类型进行过滤。</li>


                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 四层代理实例所属站点的 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 分页查询偏移量，不填写时默认为 0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目。默认值：20，最大值：1000。	
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回当前 zone-id 下所有四层代理实例信息。详细的过滤条件如下：
<li>proxy-id：按照四层代理实例 ID 进行过滤；</li>
<li>ddos-protection-type：按照安全防护类型进行过滤。</li>


                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL4PROXYREQUEST_H_
