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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGRESOURCEGROUPSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGRESOURCEGROUPSREQUEST_H_

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
                * DescribeBillingResourceGroups请求参数结构体
                */
                class DescribeBillingResourceGroupsRequest : public AbstractModel
                {
                public:
                    DescribeBillingResourceGroupsRequest();
                    ~DescribeBillingResourceGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源组类型;
枚举值:
空: 通用, TRAIN: 训练, INFERENCE: 推理
                     * @return Type 资源组类型;
枚举值:
空: 通用, TRAIN: 训练, INFERENCE: 推理
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置资源组类型;
枚举值:
空: 通用, TRAIN: 训练, INFERENCE: 推理
                     * @param _type 资源组类型;
枚举值:
空: 通用, TRAIN: 训练, INFERENCE: 推理
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Filter.Name: 枚举值: ResourceGroupId (资源组id列表)                    ResourceGroupName (资源组名称列表)                    AvailableNodeCount（资源组中可用节点数量）Filter.Values: 长度为1且Filter.Fuzzy=true时，支持模糊查询; 不为1时，精确查询每次请求的Filters的上限为5，Filter.Values的上限为100
                     * @return Filters Filter.Name: 枚举值: ResourceGroupId (资源组id列表)                    ResourceGroupName (资源组名称列表)                    AvailableNodeCount（资源组中可用节点数量）Filter.Values: 长度为1且Filter.Fuzzy=true时，支持模糊查询; 不为1时，精确查询每次请求的Filters的上限为5，Filter.Values的上限为100
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter.Name: 枚举值: ResourceGroupId (资源组id列表)                    ResourceGroupName (资源组名称列表)                    AvailableNodeCount（资源组中可用节点数量）Filter.Values: 长度为1且Filter.Fuzzy=true时，支持模糊查询; 不为1时，精确查询每次请求的Filters的上限为5，Filter.Values的上限为100
                     * @param _filters Filter.Name: 枚举值: ResourceGroupId (资源组id列表)                    ResourceGroupName (资源组名称列表)                    AvailableNodeCount（资源组中可用节点数量）Filter.Values: 长度为1且Filter.Fuzzy=true时，支持模糊查询; 不为1时，精确查询每次请求的Filters的上限为5，Filter.Values的上限为100
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
                     * 获取标签过滤
                     * @return TagFilters 标签过滤
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签过滤
                     * @param _tagFilters 标签过滤
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
                     * 获取偏移量，默认为0；分页查询起始位置，如：Limit为100，第一页Offset为0，第二页OffSet为100....即每页左边为闭区间
                     * @return Offset 偏移量，默认为0；分页查询起始位置，如：Limit为100，第一页Offset为0，第二页OffSet为100....即每页左边为闭区间
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0；分页查询起始位置，如：Limit为100，第一页Offset为0，第二页OffSet为100....即每页左边为闭区间
                     * @param _offset 偏移量，默认为0；分页查询起始位置，如：Limit为100，第一页Offset为0，第二页OffSet为100....即每页左边为闭区间
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
                     * 获取分页查询每页大小，默认20
                     * @return Limit 分页查询每页大小，默认20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询每页大小，默认20
                     * @param _limit 分页查询每页大小，默认20
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
                     * 获取支持模糊查找资源组id和资源组名
                     * @return SearchWord 支持模糊查找资源组id和资源组名
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置支持模糊查找资源组id和资源组名
                     * @param _searchWord 支持模糊查找资源组id和资源组名
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取是否不展示节点列表; 
true: 不展示，false 展示；
默认为false
                     * @return DontShowInstanceSet 是否不展示节点列表; 
true: 不展示，false 展示；
默认为false
                     * 
                     */
                    bool GetDontShowInstanceSet() const;

                    /**
                     * 设置是否不展示节点列表; 
true: 不展示，false 展示；
默认为false
                     * @param _dontShowInstanceSet 是否不展示节点列表; 
true: 不展示，false 展示；
默认为false
                     * 
                     */
                    void SetDontShowInstanceSet(const bool& _dontShowInstanceSet);

                    /**
                     * 判断参数 DontShowInstanceSet 是否已赋值
                     * @return DontShowInstanceSet 是否已赋值
                     * 
                     */
                    bool DontShowInstanceSetHasBeenSet() const;

                private:

                    /**
                     * 资源组类型;
枚举值:
空: 通用, TRAIN: 训练, INFERENCE: 推理
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Filter.Name: 枚举值: ResourceGroupId (资源组id列表)                    ResourceGroupName (资源组名称列表)                    AvailableNodeCount（资源组中可用节点数量）Filter.Values: 长度为1且Filter.Fuzzy=true时，支持模糊查询; 不为1时，精确查询每次请求的Filters的上限为5，Filter.Values的上限为100
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 标签过滤
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * 偏移量，默认为0；分页查询起始位置，如：Limit为100，第一页Offset为0，第二页OffSet为100....即每页左边为闭区间
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询每页大小，默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 支持模糊查找资源组id和资源组名
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 是否不展示节点列表; 
true: 不展示，false 展示；
默认为false
                     */
                    bool m_dontShowInstanceSet;
                    bool m_dontShowInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGRESOURCEGROUPSREQUEST_H_
