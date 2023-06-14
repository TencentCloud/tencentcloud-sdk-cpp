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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEXPERTSERVICEORDERLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEXPERTSERVICEORDERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeExpertServiceOrderList请求参数结构体
                */
                class DescribeExpertServiceOrderListRequest : public AbstractModel
                {
                public:
                    DescribeExpertServiceOrderListRequest();
                    ~DescribeExpertServiceOrderListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li>InquireType- String - 是否必填：否 - 订单类型过滤，</li>
                     * @return Filters <li>InquireType- String - 是否必填：否 - 订单类型过滤，</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<li>InquireType- String - 是否必填：否 - 订单类型过滤，</li>
                     * @param _filters <li>InquireType- String - 是否必填：否 - 订单类型过滤，</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取分页条数 最大100条
                     * @return Limit 分页条数 最大100条
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页条数 最大100条
                     * @param _limit 分页条数 最大100条
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
                     * 获取分页步长
                     * @return Offset 分页步长
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页步长
                     * @param _offset 分页步长
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <li>InquireType- String - 是否必填：否 - 订单类型过滤，</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页条数 最大100条
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页步长
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEXPERTSERVICEORDERLISTREQUEST_H_
