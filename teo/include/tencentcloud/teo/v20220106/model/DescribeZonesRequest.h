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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ZoneFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeZones请求参数结构体
                */
                class DescribeZonesRequest : public AbstractModel
                {
                public:
                    DescribeZonesRequest();
                    ~DescribeZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页查询偏移量。默认值：0，最小值：0。
                     * @return Offset 分页查询偏移量。默认值：0，最小值：0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量。默认值：0，最小值：0。
                     * @param _offset 分页查询偏移量。默认值：0，最小值：0。
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
                     * 获取分页查询限制数目。默认值：1000，最大值：1000。
                     * @return Limit 分页查询限制数目。默认值：1000，最大值：1000。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询限制数目。默认值：1000，最大值：1000。
                     * @param _limit 分页查询限制数目。默认值：1000，最大值：1000。
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
                     * 获取查询条件过滤器，复杂类型。
                     * @return Filters 查询条件过滤器，复杂类型。
                     * 
                     */
                    std::vector<ZoneFilter> GetFilters() const;

                    /**
                     * 设置查询条件过滤器，复杂类型。
                     * @param _filters 查询条件过滤器，复杂类型。
                     * 
                     */
                    void SetFilters(const std::vector<ZoneFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 分页查询偏移量。默认值：0，最小值：0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目。默认值：1000，最大值：1000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询条件过滤器，复杂类型。
                     */
                    std::vector<ZoneFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONESREQUEST_H_
