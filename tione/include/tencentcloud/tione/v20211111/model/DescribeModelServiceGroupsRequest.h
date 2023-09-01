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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEGROUPSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Filter.h>
#include <tencentcloud/tione/v20211111/model/TagFilter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeModelServiceGroups请求参数结构体
                */
                class DescribeModelServiceGroupsRequest : public AbstractModel
                {
                public:
                    DescribeModelServiceGroupsRequest();
                    ~DescribeModelServiceGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取返回数量，默认为20，最大值为100
                     * @return Limit 返回数量，默认为20，最大值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100
                     * @param _limit 返回数量，默认为20，最大值为100
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
                     * 获取排序的依据字段， 取值范围 "CreateTime" "UpdateTime"
                     * @return OrderField 排序的依据字段， 取值范围 "CreateTime" "UpdateTime"
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序的依据字段， 取值范围 "CreateTime" "UpdateTime"
                     * @param _orderField 排序的依据字段， 取值范围 "CreateTime" "UpdateTime"
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
                     * 获取分页参数，支持的分页过滤Name包括：
["ClusterId", "ServiceId", "ServiceGroupName", "ServiceGroupId","Status","CreatedBy","ModelVersionId"]
                     * @return Filters 分页参数，支持的分页过滤Name包括：
["ClusterId", "ServiceId", "ServiceGroupName", "ServiceGroupId","Status","CreatedBy","ModelVersionId"]
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置分页参数，支持的分页过滤Name包括：
["ClusterId", "ServiceId", "ServiceGroupName", "ServiceGroupId","Status","CreatedBy","ModelVersionId"]
                     * @param _filters 分页参数，支持的分页过滤Name包括：
["ClusterId", "ServiceId", "ServiceGroupName", "ServiceGroupId","Status","CreatedBy","ModelVersionId"]
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
                     * 获取标签过滤参数
                     * @return TagFilters 标签过滤参数
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签过滤参数
                     * @param _tagFilters 标签过滤参数
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取服务分类
                     * @return ServiceCategory 服务分类
                     * 
                     */
                    std::string GetServiceCategory() const;

                    /**
                     * 设置服务分类
                     * @param _serviceCategory 服务分类
                     * 
                     */
                    void SetServiceCategory(const std::string& _serviceCategory);

                    /**
                     * 判断参数 ServiceCategory 是否已赋值
                     * @return ServiceCategory 是否已赋值
                     * 
                     */
                    bool ServiceCategoryHasBeenSet() const;

                private:

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序的依据字段， 取值范围 "CreateTime" "UpdateTime"
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 分页参数，支持的分页过滤Name包括：
["ClusterId", "ServiceId", "ServiceGroupName", "ServiceGroupId","Status","CreatedBy","ModelVersionId"]
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 标签过滤参数
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * 服务分类
                     */
                    std::string m_serviceCategory;
                    bool m_serviceCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEGROUPSREQUEST_H_
