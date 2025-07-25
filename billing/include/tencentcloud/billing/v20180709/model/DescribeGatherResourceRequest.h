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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEGATHERRESOURCEREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEGATHERRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeGatherResource请求参数结构体
                */
                class DescribeGatherResourceRequest : public AbstractModel
                {
                public:
                    DescribeGatherResourceRequest();
                    ~DescribeGatherResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数量，最大值为1000
                     * @return Limit 数量，最大值为1000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置数量，最大值为1000
                     * @param _limit 数量，最大值为1000
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
                     * 获取分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，以此类推
                     * @return Offset 分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，以此类推
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，以此类推
                     * @param _offset 分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，以此类推
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
                     * 获取账单月份，格式为2024-02，不传默认当前月
                     * @return Month 账单月份，格式为2024-02，不传默认当前月
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置账单月份，格式为2024-02，不传默认当前月
                     * @param _month 账单月份，格式为2024-02，不传默认当前月
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取分账单元唯一标识，用作筛选
                     * @return TreeNodeUniqKey 分账单元唯一标识，用作筛选
                     * 
                     */
                    std::string GetTreeNodeUniqKey() const;

                    /**
                     * 设置分账单元唯一标识，用作筛选
                     * @param _treeNodeUniqKey 分账单元唯一标识，用作筛选
                     * 
                     */
                    void SetTreeNodeUniqKey(const std::string& _treeNodeUniqKey);

                    /**
                     * 判断参数 TreeNodeUniqKey 是否已赋值
                     * @return TreeNodeUniqKey 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeyHasBeenSet() const;

                    /**
                     * 获取资源目录类别，枚举值如下：
all - 全部 
none - 未归集
                     * @return GatherType 资源目录类别，枚举值如下：
all - 全部 
none - 未归集
                     * 
                     */
                    std::string GetGatherType() const;

                    /**
                     * 设置资源目录类别，枚举值如下：
all - 全部 
none - 未归集
                     * @param _gatherType 资源目录类别，枚举值如下：
all - 全部 
none - 未归集
                     * 
                     */
                    void SetGatherType(const std::string& _gatherType);

                    /**
                     * 判断参数 GatherType 是否已赋值
                     * @return GatherType 是否已赋值
                     * 
                     */
                    bool GatherTypeHasBeenSet() const;

                    /**
                     * 获取排序字段，枚举值如下：
realCost  - 折后总价
cashPayAmount - 现金金额
voucherPayAmount - 代金券金额
incentivePayAmount  - 赠送金金额
transferPayAmount -分成金金额
                     * @return Sort 排序字段，枚举值如下：
realCost  - 折后总价
cashPayAmount - 现金金额
voucherPayAmount - 代金券金额
incentivePayAmount  - 赠送金金额
transferPayAmount -分成金金额
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序字段，枚举值如下：
realCost  - 折后总价
cashPayAmount - 现金金额
voucherPayAmount - 代金券金额
incentivePayAmount  - 赠送金金额
transferPayAmount -分成金金额
                     * @param _sort 排序字段，枚举值如下：
realCost  - 折后总价
cashPayAmount - 现金金额
voucherPayAmount - 代金券金额
incentivePayAmount  - 赠送金金额
transferPayAmount -分成金金额
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取排序类型，枚举值如下：
asc - 升序
desc - 降序
                     * @return SortType 排序类型，枚举值如下：
asc - 升序
desc - 降序
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置排序类型，枚举值如下：
asc - 升序
desc - 降序
                     * @param _sortType 排序类型，枚举值如下：
asc - 升序
desc - 降序
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取产品编码，用作筛选
                     * @return BusinessCodes 产品编码，用作筛选
                     * 
                     */
                    std::vector<std::string> GetBusinessCodes() const;

                    /**
                     * 设置产品编码，用作筛选
                     * @param _businessCodes 产品编码，用作筛选
                     * 
                     */
                    void SetBusinessCodes(const std::vector<std::string>& _businessCodes);

                    /**
                     * 判断参数 BusinessCodes 是否已赋值
                     * @return BusinessCodes 是否已赋值
                     * 
                     */
                    bool BusinessCodesHasBeenSet() const;

                    /**
                     * 获取子产品编码，用作筛选
                     * @return ProductCodes 子产品编码，用作筛选
                     * 
                     */
                    std::vector<std::string> GetProductCodes() const;

                    /**
                     * 设置子产品编码，用作筛选
                     * @param _productCodes 子产品编码，用作筛选
                     * 
                     */
                    void SetProductCodes(const std::vector<std::string>& _productCodes);

                    /**
                     * 判断参数 ProductCodes 是否已赋值
                     * @return ProductCodes 是否已赋值
                     * 
                     */
                    bool ProductCodesHasBeenSet() const;

                    /**
                     * 获取组件名称编码，用作筛选
                     * @return ItemCodes 组件名称编码，用作筛选
                     * 
                     */
                    std::vector<std::string> GetItemCodes() const;

                    /**
                     * 设置组件名称编码，用作筛选
                     * @param _itemCodes 组件名称编码，用作筛选
                     * 
                     */
                    void SetItemCodes(const std::vector<std::string>& _itemCodes);

                    /**
                     * 判断参数 ItemCodes 是否已赋值
                     * @return ItemCodes 是否已赋值
                     * 
                     */
                    bool ItemCodesHasBeenSet() const;

                    /**
                     * 获取地域ID，用作筛选
                     * @return RegionIds 地域ID，用作筛选
                     * 
                     */
                    std::vector<uint64_t> GetRegionIds() const;

                    /**
                     * 设置地域ID，用作筛选
                     * @param _regionIds 地域ID，用作筛选
                     * 
                     */
                    void SetRegionIds(const std::vector<uint64_t>& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     * 
                     */
                    bool RegionIdsHasBeenSet() const;

                    /**
                     * 获取实例类型编码，用作筛选
                     * @return InstanceTypes 实例类型编码，用作筛选
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置实例类型编码，用作筛选
                     * @param _instanceTypes 实例类型编码，用作筛选
                     * 
                     */
                    void SetInstanceTypes(const std::vector<std::string>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     * 
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取计费模式编码，用作筛选
                     * @return PayModes 计费模式编码，用作筛选
                     * 
                     */
                    std::vector<std::string> GetPayModes() const;

                    /**
                     * 设置计费模式编码，用作筛选
                     * @param _payModes 计费模式编码，用作筛选
                     * 
                     */
                    void SetPayModes(const std::vector<std::string>& _payModes);

                    /**
                     * 判断参数 PayModes 是否已赋值
                     * @return PayModes 是否已赋值
                     * 
                     */
                    bool PayModesHasBeenSet() const;

                    /**
                     * 获取操作者UIN，用作筛选
                     * @return OperateUins 操作者UIN，用作筛选
                     * 
                     */
                    std::vector<std::string> GetOperateUins() const;

                    /**
                     * 设置操作者UIN，用作筛选
                     * @param _operateUins 操作者UIN，用作筛选
                     * 
                     */
                    void SetOperateUins(const std::vector<std::string>& _operateUins);

                    /**
                     * 判断参数 OperateUins 是否已赋值
                     * @return OperateUins 是否已赋值
                     * 
                     */
                    bool OperateUinsHasBeenSet() const;

                    /**
                     * 获取使用者UIN，用作筛选
                     * @return OwnerUins 使用者UIN，用作筛选
                     * 
                     */
                    std::vector<std::string> GetOwnerUins() const;

                    /**
                     * 设置使用者UIN，用作筛选
                     * @param _ownerUins 使用者UIN，用作筛选
                     * 
                     */
                    void SetOwnerUins(const std::vector<std::string>& _ownerUins);

                    /**
                     * 判断参数 OwnerUins 是否已赋值
                     * @return OwnerUins 是否已赋值
                     * 
                     */
                    bool OwnerUinsHasBeenSet() const;

                    /**
                     * 获取模糊搜索：支持标签、资源id、资源别名
                     * @return SearchKey 模糊搜索：支持标签、资源id、资源别名
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置模糊搜索：支持标签、资源id、资源别名
                     * @param _searchKey 模糊搜索：支持标签、资源id、资源别名
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取标签，用作筛选
                     * @return Tag 标签，用作筛选
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置标签，用作筛选
                     * @param _tag 标签，用作筛选
                     * 
                     */
                    void SetTag(const std::vector<std::string>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取项目ID，用作筛选
                     * @return ProjectIds 项目ID，用作筛选
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目ID，用作筛选
                     * @param _projectIds 项目ID，用作筛选
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取交易类型编码，用作筛选
                     * @return ActionTypes 交易类型编码，用作筛选
                     * 
                     */
                    std::vector<std::string> GetActionTypes() const;

                    /**
                     * 设置交易类型编码，用作筛选
                     * @param _actionTypes 交易类型编码，用作筛选
                     * 
                     */
                    void SetActionTypes(const std::vector<std::string>& _actionTypes);

                    /**
                     * 判断参数 ActionTypes 是否已赋值
                     * @return ActionTypes 是否已赋值
                     * 
                     */
                    bool ActionTypesHasBeenSet() const;

                private:

                    /**
                     * 数量，最大值为1000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，以此类推
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 账单月份，格式为2024-02，不传默认当前月
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 分账单元唯一标识，用作筛选
                     */
                    std::string m_treeNodeUniqKey;
                    bool m_treeNodeUniqKeyHasBeenSet;

                    /**
                     * 资源目录类别，枚举值如下：
all - 全部 
none - 未归集
                     */
                    std::string m_gatherType;
                    bool m_gatherTypeHasBeenSet;

                    /**
                     * 排序字段，枚举值如下：
realCost  - 折后总价
cashPayAmount - 现金金额
voucherPayAmount - 代金券金额
incentivePayAmount  - 赠送金金额
transferPayAmount -分成金金额
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 排序类型，枚举值如下：
asc - 升序
desc - 降序
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 产品编码，用作筛选
                     */
                    std::vector<std::string> m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * 子产品编码，用作筛选
                     */
                    std::vector<std::string> m_productCodes;
                    bool m_productCodesHasBeenSet;

                    /**
                     * 组件名称编码，用作筛选
                     */
                    std::vector<std::string> m_itemCodes;
                    bool m_itemCodesHasBeenSet;

                    /**
                     * 地域ID，用作筛选
                     */
                    std::vector<uint64_t> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * 实例类型编码，用作筛选
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * 计费模式编码，用作筛选
                     */
                    std::vector<std::string> m_payModes;
                    bool m_payModesHasBeenSet;

                    /**
                     * 操作者UIN，用作筛选
                     */
                    std::vector<std::string> m_operateUins;
                    bool m_operateUinsHasBeenSet;

                    /**
                     * 使用者UIN，用作筛选
                     */
                    std::vector<std::string> m_ownerUins;
                    bool m_ownerUinsHasBeenSet;

                    /**
                     * 模糊搜索：支持标签、资源id、资源别名
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 标签，用作筛选
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 项目ID，用作筛选
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 交易类型编码，用作筛选
                     */
                    std::vector<std::string> m_actionTypes;
                    bool m_actionTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEGATHERRESOURCEREQUEST_H_
