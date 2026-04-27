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
                     * 获取<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @return TiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @param _tiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，默认为0</p>
                     * @return Offset <p>偏移量，默认为0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0</p>
                     * @param _offset <p>偏移量，默认为0</p>
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
                     * 获取<p>返回数量，默认为20，最大值为100</p>
                     * @return Limit <p>返回数量，默认为20，最大值为100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为100</p>
                     * @param _limit <p>返回数量，默认为20，最大值为100</p>
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
                     * 获取<p>输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列</p>
                     * @return Order <p>输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列</p>
                     * @param _order <p>输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列</p>
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
                     * 获取<p>排序的依据字段， 取值范围 &quot;CreateTime&quot; &quot;UpdateTime&quot;</p>
                     * @return OrderField <p>排序的依据字段， 取值范围 &quot;CreateTime&quot; &quot;UpdateTime&quot;</p>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置<p>排序的依据字段， 取值范围 &quot;CreateTime&quot; &quot;UpdateTime&quot;</p>
                     * @param _orderField <p>排序的依据字段， 取值范围 &quot;CreateTime&quot; &quot;UpdateTime&quot;</p>
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
                     * 获取<p>分页参数，支持的分页过滤Name包括：<br>[&quot;ClusterId&quot;, &quot;ServiceId&quot;, &quot;ServiceGroupName&quot;, &quot;ServiceGroupId&quot;,&quot;Status&quot;,&quot;CreatedBy&quot;,&quot;ModelVersionId&quot;]</p>
                     * @return Filters <p>分页参数，支持的分页过滤Name包括：<br>[&quot;ClusterId&quot;, &quot;ServiceId&quot;, &quot;ServiceGroupName&quot;, &quot;ServiceGroupId&quot;,&quot;Status&quot;,&quot;CreatedBy&quot;,&quot;ModelVersionId&quot;]</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>分页参数，支持的分页过滤Name包括：<br>[&quot;ClusterId&quot;, &quot;ServiceId&quot;, &quot;ServiceGroupName&quot;, &quot;ServiceGroupId&quot;,&quot;Status&quot;,&quot;CreatedBy&quot;,&quot;ModelVersionId&quot;]</p>
                     * @param _filters <p>分页参数，支持的分页过滤Name包括：<br>[&quot;ClusterId&quot;, &quot;ServiceId&quot;, &quot;ServiceGroupName&quot;, &quot;ServiceGroupId&quot;,&quot;Status&quot;,&quot;CreatedBy&quot;,&quot;ModelVersionId&quot;]</p>
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
                     * 获取<p>标签过滤参数</p>
                     * @return TagFilters <p>标签过滤参数</p>
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置<p>标签过滤参数</p>
                     * @param _tagFilters <p>标签过滤参数</p>
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
                     * 获取<p>服务分类</p>
                     * @return ServiceCategory <p>服务分类</p>
                     * @deprecated
                     */
                    std::string GetServiceCategory() const;

                    /**
                     * 设置<p>服务分类</p>
                     * @param _serviceCategory <p>服务分类</p>
                     * @deprecated
                     */
                    void SetServiceCategory(const std::string& _serviceCategory);

                    /**
                     * 判断参数 ServiceCategory 是否已赋值
                     * @return ServiceCategory 是否已赋值
                     * @deprecated
                     */
                    bool ServiceCategoryHasBeenSet() const;

                private:

                    /**
                     * <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>偏移量，默认为0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认为20，最大值为100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序的依据字段， 取值范围 &quot;CreateTime&quot; &quot;UpdateTime&quot;</p>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * <p>分页参数，支持的分页过滤Name包括：<br>[&quot;ClusterId&quot;, &quot;ServiceId&quot;, &quot;ServiceGroupName&quot;, &quot;ServiceGroupId&quot;,&quot;Status&quot;,&quot;CreatedBy&quot;,&quot;ModelVersionId&quot;]</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>标签过滤参数</p>
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * <p>服务分类</p>
                     */
                    std::string m_serviceCategory;
                    bool m_serviceCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEGROUPSREQUEST_H_
