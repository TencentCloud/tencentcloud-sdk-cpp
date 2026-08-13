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
                     * 获取<p>数据集id列表</p>
                     * @return DatasetIds <p>数据集id列表</p>
                     * 
                     */
                    std::vector<std::string> GetDatasetIds() const;

                    /**
                     * 设置<p>数据集id列表</p>
                     * @param _datasetIds <p>数据集id列表</p>
                     * 
                     */
                    void SetDatasetIds(const std::vector<std::string>& _datasetIds);

                    /**
                     * 判断参数 DatasetIds 是否已赋值
                     * @return DatasetIds 是否已赋值
                     * 
                     */
                    bool DatasetIdsHasBeenSet() const;

                    /**
                     * 获取<p>数据集查询过滤条件，多个Filter之间的关系为逻辑与（AND）关系，过滤字段Filter.Name，类型为String<br>DatasetName，数据集名称<br>DatasetScope，数据集范围，SCOPE_DATASET_PRIVATE或SCOPE_DATASET_PUBLIC</p>
                     * @return Filters <p>数据集查询过滤条件，多个Filter之间的关系为逻辑与（AND）关系，过滤字段Filter.Name，类型为String<br>DatasetName，数据集名称<br>DatasetScope，数据集范围，SCOPE_DATASET_PRIVATE或SCOPE_DATASET_PUBLIC</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>数据集查询过滤条件，多个Filter之间的关系为逻辑与（AND）关系，过滤字段Filter.Name，类型为String<br>DatasetName，数据集名称<br>DatasetScope，数据集范围，SCOPE_DATASET_PRIVATE或SCOPE_DATASET_PUBLIC</p>
                     * @param _filters <p>数据集查询过滤条件，多个Filter之间的关系为逻辑与（AND）关系，过滤字段Filter.Name，类型为String<br>DatasetName，数据集名称<br>DatasetScope，数据集范围，SCOPE_DATASET_PRIVATE或SCOPE_DATASET_PUBLIC</p>
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
                     * 获取<p>标签过滤条件</p>
                     * @return TagFilters <p>标签过滤条件</p>
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置<p>标签过滤条件</p>
                     * @param _tagFilters <p>标签过滤条件</p>
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
                     * 获取<p>排序值，支持Asc或Desc，默认Desc</p>
                     * @return Order <p>排序值，支持Asc或Desc，默认Desc</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序值，支持Asc或Desc，默认Desc</p>
                     * @param _order <p>排序值，支持Asc或Desc，默认Desc</p>
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
                     * 获取<p>排序字段，支持CreateTime或UpdateTime，默认CreateTime</p>
                     * @return OrderField <p>排序字段，支持CreateTime或UpdateTime，默认CreateTime</p>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置<p>排序字段，支持CreateTime或UpdateTime，默认CreateTime</p>
                     * @param _orderField <p>排序字段，支持CreateTime或UpdateTime，默认CreateTime</p>
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
                     * 获取<p>偏移值</p>
                     * @return Offset <p>偏移值</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移值</p>
                     * @param _offset <p>偏移值</p>
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
                     * 获取<p>返回数据个数，默认20，最大支持200</p>
                     * @return Limit <p>返回数据个数，默认20，最大支持200</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数据个数，默认20，最大支持200</p>
                     * @param _limit <p>返回数据个数，默认20，最大支持200</p>
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
                     * 获取<p>是否检查CFS。若开启，则在CFS挂载好之前，不会返回数据集列表。</p>
                     * @return CFSChecking <p>是否检查CFS。若开启，则在CFS挂载好之前，不会返回数据集列表。</p>
                     * 
                     */
                    bool GetCFSChecking() const;

                    /**
                     * 设置<p>是否检查CFS。若开启，则在CFS挂载好之前，不会返回数据集列表。</p>
                     * @param _cFSChecking <p>是否检查CFS。若开启，则在CFS挂载好之前，不会返回数据集列表。</p>
                     * 
                     */
                    void SetCFSChecking(const bool& _cFSChecking);

                    /**
                     * 判断参数 CFSChecking 是否已赋值
                     * @return CFSChecking 是否已赋值
                     * 
                     */
                    bool CFSCheckingHasBeenSet() const;

                    /**
                     * 获取<p>是否返回CFS详情。</p>
                     * @return CFSDetail <p>是否返回CFS详情。</p>
                     * 
                     */
                    bool GetCFSDetail() const;

                    /**
                     * 设置<p>是否返回CFS详情。</p>
                     * @param _cFSDetail <p>是否返回CFS详情。</p>
                     * 
                     */
                    void SetCFSDetail(const bool& _cFSDetail);

                    /**
                     * 判断参数 CFSDetail 是否已赋值
                     * @return CFSDetail 是否已赋值
                     * 
                     */
                    bool CFSDetailHasBeenSet() const;

                private:

                    /**
                     * <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>数据集id列表</p>
                     */
                    std::vector<std::string> m_datasetIds;
                    bool m_datasetIdsHasBeenSet;

                    /**
                     * <p>数据集查询过滤条件，多个Filter之间的关系为逻辑与（AND）关系，过滤字段Filter.Name，类型为String<br>DatasetName，数据集名称<br>DatasetScope，数据集范围，SCOPE_DATASET_PRIVATE或SCOPE_DATASET_PUBLIC</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>标签过滤条件</p>
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * <p>排序值，支持Asc或Desc，默认Desc</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序字段，支持CreateTime或UpdateTime，默认CreateTime</p>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * <p>偏移值</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数据个数，默认20，最大支持200</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>是否检查CFS。若开启，则在CFS挂载好之前，不会返回数据集列表。</p>
                     */
                    bool m_cFSChecking;
                    bool m_cFSCheckingHasBeenSet;

                    /**
                     * <p>是否返回CFS详情。</p>
                     */
                    bool m_cFSDetail;
                    bool m_cFSDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETSREQUEST_H_
