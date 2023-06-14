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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBESERVICECONFIGSREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBESERVICECONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/Filter.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * DescribeServiceConfigs请求参数结构体
                */
                class DescribeServiceConfigsRequest : public AbstractModel
                {
                public:
                    DescribeServiceConfigsRequest();
                    ~DescribeServiceConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取筛选选项，支持按照name等进行筛选
                     * @return Filters 筛选选项，支持按照name等进行筛选
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置筛选选项，支持按照name等进行筛选
                     * @param _filters 筛选选项，支持按照name等进行筛选
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
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取返回数量，默认为20，最大值为1000
                     * @return Limit 返回数量，默认为20，最大值为1000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为1000
                     * @param _limit 返回数量，默认为20，最大值为1000
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
                     * 获取输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列
                     * @return Order 输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列
                     * @param _order 输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序的依据字段， 取值范围 "CREATE_TIME", "UPDATE_TIME", "NAME"
                     * @return OrderField 排序的依据字段， 取值范围 "CREATE_TIME", "UPDATE_TIME", "NAME"
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序的依据字段， 取值范围 "CREATE_TIME", "UPDATE_TIME", "NAME"
                     * @param _orderField 排序的依据字段， 取值范围 "CREATE_TIME", "UPDATE_TIME", "NAME"
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取是否按照配置名分页
                     * @return PageByName 是否按照配置名分页
                     * 
                     */
                    bool GetPageByName() const;

                    /**
                     * 设置是否按照配置名分页
                     * @param _pageByName 是否按照配置名分页
                     * 
                     */
                    void SetPageByName(const bool& _pageByName);

                    /**
                     * 判断参数 PageByName 是否已赋值
                     * @return PageByName 是否已赋值
                     * 
                     */
                    bool PageByNameHasBeenSet() const;

                private:

                    /**
                     * 筛选选项，支持按照name等进行筛选
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为1000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序的依据字段， 取值范围 "CREATE_TIME", "UPDATE_TIME", "NAME"
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 是否按照配置名分页
                     */
                    bool m_pageByName;
                    bool m_pageByNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBESERVICECONFIGSREQUEST_H_
