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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEMULTIPATHGATEWAYSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEMULTIPATHGATEWAYSREQUEST_H_

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
                * DescribeMultiPathGateways请求参数结构体
                */
                class DescribeMultiPathGatewaysRequest : public AbstractModel
                {
                public:
                    DescribeMultiPathGatewaysRequest();
                    ~DescribeMultiPathGatewaysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
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
                     * 获取分页查询偏移量。默认值：0。
                     * @return Offset 分页查询偏移量。默认值：0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量。默认值：0。
                     * @param _offset 分页查询偏移量。默认值：0。
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

                    /**
                     * 获取网关列表的过滤字段，该参数不填写时，返回当前 appid 下所有网关信息，详细的过滤条件如下：
<li> gateway-type：按照网关类型进行过滤，支持取值 cloud 和 private，分别代表过滤云上网关和自由网关；</li>
<li> keyword：按照网关名的关键字进行过滤。</li>
                     * @return Filters 网关列表的过滤字段，该参数不填写时，返回当前 appid 下所有网关信息，详细的过滤条件如下：
<li> gateway-type：按照网关类型进行过滤，支持取值 cloud 和 private，分别代表过滤云上网关和自由网关；</li>
<li> keyword：按照网关名的关键字进行过滤。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置网关列表的过滤字段，该参数不填写时，返回当前 appid 下所有网关信息，详细的过滤条件如下：
<li> gateway-type：按照网关类型进行过滤，支持取值 cloud 和 private，分别代表过滤云上网关和自由网关；</li>
<li> keyword：按照网关名的关键字进行过滤。</li>
                     * @param _filters 网关列表的过滤字段，该参数不填写时，返回当前 appid 下所有网关信息，详细的过滤条件如下：
<li> gateway-type：按照网关类型进行过滤，支持取值 cloud 和 private，分别代表过滤云上网关和自由网关；</li>
<li> keyword：按照网关名的关键字进行过滤。</li>
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
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 分页查询偏移量。默认值：0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目。默认值：20，最大值：1000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 网关列表的过滤字段，该参数不填写时，返回当前 appid 下所有网关信息，详细的过滤条件如下：
<li> gateway-type：按照网关类型进行过滤，支持取值 cloud 和 private，分别代表过滤云上网关和自由网关；</li>
<li> keyword：按照网关名的关键字进行过滤。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEMULTIPATHGATEWAYSREQUEST_H_
