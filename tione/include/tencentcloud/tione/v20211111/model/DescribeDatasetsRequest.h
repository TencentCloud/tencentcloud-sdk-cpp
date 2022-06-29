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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETSREQUEST_H_

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
                * DescribeDatasets请求参数结构体
                */
                class DescribeDatasetsRequest : public AbstractModel
                {
                public:
                    DescribeDatasetsRequest();
                    ~DescribeDatasetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据集id列表
                     * @return DatasetIds 数据集id列表
                     */
                    std::vector<std::string> GetDatasetIds() const;

                    /**
                     * 设置数据集id列表
                     * @param DatasetIds 数据集id列表
                     */
                    void SetDatasetIds(const std::vector<std::string>& _datasetIds);

                    /**
                     * 判断参数 DatasetIds 是否已赋值
                     * @return DatasetIds 是否已赋值
                     */
                    bool DatasetIdsHasBeenSet() const;

                    /**
                     * 获取数据集查询过滤条件，多个Filter之间的关系为逻辑与（AND）关系，过滤字段Filter.Name，类型为String
DatasetName，数据集名称
DatasetScope，数据集范围，SCOPE_DATASET_PRIVATE或SCOPE_DATASET_PUBLIC
                     * @return Filters 数据集查询过滤条件，多个Filter之间的关系为逻辑与（AND）关系，过滤字段Filter.Name，类型为String
DatasetName，数据集名称
DatasetScope，数据集范围，SCOPE_DATASET_PRIVATE或SCOPE_DATASET_PUBLIC
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置数据集查询过滤条件，多个Filter之间的关系为逻辑与（AND）关系，过滤字段Filter.Name，类型为String
DatasetName，数据集名称
DatasetScope，数据集范围，SCOPE_DATASET_PRIVATE或SCOPE_DATASET_PUBLIC
                     * @param Filters 数据集查询过滤条件，多个Filter之间的关系为逻辑与（AND）关系，过滤字段Filter.Name，类型为String
DatasetName，数据集名称
DatasetScope，数据集范围，SCOPE_DATASET_PRIVATE或SCOPE_DATASET_PUBLIC
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取标签过滤条件
                     * @return TagFilters 标签过滤条件
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签过滤条件
                     * @param TagFilters 标签过滤条件
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取排序值，支持Asc或Desc，默认Desc
                     * @return Order 排序值，支持Asc或Desc，默认Desc
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序值，支持Asc或Desc，默认Desc
                     * @param Order 排序值，支持Asc或Desc，默认Desc
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序字段，支持CreateTime或UpdateTime，默认CreateTime
                     * @return OrderField 排序字段，支持CreateTime或UpdateTime，默认CreateTime
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段，支持CreateTime或UpdateTime，默认CreateTime
                     * @param OrderField 排序字段，支持CreateTime或UpdateTime，默认CreateTime
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取偏移值
                     * @return Offset 偏移值
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移值
                     * @param Offset 偏移值
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数据个数，默认20，最大支持200
                     * @return Limit 返回数据个数，默认20，最大支持200
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数据个数，默认20，最大支持200
                     * @param Limit 返回数据个数，默认20，最大支持200
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 数据集id列表
                     */
                    std::vector<std::string> m_datasetIds;
                    bool m_datasetIdsHasBeenSet;

                    /**
                     * 数据集查询过滤条件，多个Filter之间的关系为逻辑与（AND）关系，过滤字段Filter.Name，类型为String
DatasetName，数据集名称
DatasetScope，数据集范围，SCOPE_DATASET_PRIVATE或SCOPE_DATASET_PUBLIC
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 标签过滤条件
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * 排序值，支持Asc或Desc，默认Desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段，支持CreateTime或UpdateTime，默认CreateTime
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 偏移值
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数据个数，默认20，最大支持200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETSREQUEST_H_
