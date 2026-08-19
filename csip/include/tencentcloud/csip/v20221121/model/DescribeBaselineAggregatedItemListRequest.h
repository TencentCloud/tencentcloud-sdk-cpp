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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEAGGREGATEDITEMLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEAGGREGATEDITEMLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeBaselineAggregatedItemList请求参数结构体
                */
                class DescribeBaselineAggregatedItemListRequest : public AbstractModel
                {
                public:
                    DescribeBaselineAggregatedItemListRequest();
                    ~DescribeBaselineAggregatedItemListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>基线策略 ID 列表（可同时传多条做联合统计）。</p>
                     * @return PolicyID <p>基线策略 ID 列表（可同时传多条做联合统计）。</p>
                     * 
                     */
                    std::vector<uint64_t> GetPolicyID() const;

                    /**
                     * 设置<p>基线策略 ID 列表（可同时传多条做联合统计）。</p>
                     * @param _policyID <p>基线策略 ID 列表（可同时传多条做联合统计）。</p>
                     * 
                     */
                    void SetPolicyID(const std::vector<uint64_t>& _policyID);

                    /**
                     * 判断参数 PolicyID 是否已赋值
                     * @return PolicyID 是否已赋值
                     * 
                     */
                    bool PolicyIDHasBeenSet() const;

                    /**
                     * 获取<p>基线系统父分类 ID。</p>
                     * @return ParentCategoryID <p>基线系统父分类 ID。</p>
                     * 
                     */
                    uint64_t GetParentCategoryID() const;

                    /**
                     * 设置<p>基线系统父分类 ID。</p>
                     * @param _parentCategoryID <p>基线系统父分类 ID。</p>
                     * 
                     */
                    void SetParentCategoryID(const uint64_t& _parentCategoryID);

                    /**
                     * 判断参数 ParentCategoryID 是否已赋值
                     * @return ParentCategoryID 是否已赋值
                     * 
                     */
                    bool ParentCategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * @return CheckAssetType <p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * 
                     */
                    std::string GetCheckAssetType() const;

                    /**
                     * 设置<p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * @param _checkAssetType <p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * 
                     */
                    void SetCheckAssetType(const std::string& _checkAssetType);

                    /**
                     * 判断参数 CheckAssetType 是否已赋值
                     * @return CheckAssetType 是否已赋值
                     * 
                     */
                    bool CheckAssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>基线子分类 ID。</p>
                     * @return CategoryID <p>基线子分类 ID。</p>
                     * 
                     */
                    uint64_t GetCategoryID() const;

                    /**
                     * 设置<p>基线子分类 ID。</p>
                     * @param _categoryID <p>基线子分类 ID。</p>
                     * 
                     */
                    void SetCategoryID(const uint64_t& _categoryID);

                    /**
                     * 判断参数 CategoryID 是否已赋值
                     * @return CategoryID 是否已赋值
                     * 
                     */
                    bool CategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>通用过滤条件。支持的 Name：ResultStatus（结果状态 PASS/NOT_PASS/CHECKING/CHECK_FAILED/NOT_INVOLVED）、Name（检测项名称，模糊搜索）、RiskLevel（风险等级 CRITICAL/HIGH/MEDIUM/LOW）、PolicyName（所属基线/策略名称，模糊搜索）。</p>
                     * @return Filters <p>通用过滤条件。支持的 Name：ResultStatus（结果状态 PASS/NOT_PASS/CHECKING/CHECK_FAILED/NOT_INVOLVED）、Name（检测项名称，模糊搜索）、RiskLevel（风险等级 CRITICAL/HIGH/MEDIUM/LOW）、PolicyName（所属基线/策略名称，模糊搜索）。</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>通用过滤条件。支持的 Name：ResultStatus（结果状态 PASS/NOT_PASS/CHECKING/CHECK_FAILED/NOT_INVOLVED）、Name（检测项名称，模糊搜索）、RiskLevel（风险等级 CRITICAL/HIGH/MEDIUM/LOW）、PolicyName（所属基线/策略名称，模糊搜索）。</p>
                     * @param _filters <p>通用过滤条件。支持的 Name：ResultStatus（结果状态 PASS/NOT_PASS/CHECKING/CHECK_FAILED/NOT_INVOLVED）、Name（检测项名称，模糊搜索）、RiskLevel（风险等级 CRITICAL/HIGH/MEDIUM/LOW）、PolicyName（所属基线/策略名称，模糊搜索）。</p>
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
                     * 获取<p>分页查询每页数量，最大值 100；超过时服务端将自动回退为默认值 10。</p>
                     * @return Limit <p>分页查询每页数量，最大值 100；超过时服务端将自动回退为默认值 10。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页查询每页数量，最大值 100；超过时服务端将自动回退为默认值 10。</p>
                     * @param _limit <p>分页查询每页数量，最大值 100；超过时服务端将自动回退为默认值 10。</p>
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
                     * 获取<p>分页查询起始偏移量，从 0 开始。</p>
                     * @return Offset <p>分页查询起始偏移量，从 0 开始。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页查询起始偏移量，从 0 开始。</p>
                     * @param _offset <p>分页查询起始偏移量，从 0 开始。</p>
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
                     * 获取<p>排序方向，取值 asc（升序）或 desc（降序），默认 desc。</p>
                     * @return Order <p>排序方向，取值 asc（升序）或 desc（降序），默认 desc。</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序方向，取值 asc（升序）或 desc（降序），默认 desc。</p>
                     * @param _order <p>排序方向，取值 asc（升序）或 desc（降序），默认 desc。</p>
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
                     * 获取<p>排序字段名，由具体接口定义可选字段。</p>
                     * @return By <p>排序字段名，由具体接口定义可选字段。</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>排序字段名，由具体接口定义可选字段。</p>
                     * @param _by <p>排序字段名，由具体接口定义可选字段。</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * <p>基线策略 ID 列表（可同时传多条做联合统计）。</p>
                     */
                    std::vector<uint64_t> m_policyID;
                    bool m_policyIDHasBeenSet;

                    /**
                     * <p>基线系统父分类 ID。</p>
                     */
                    uint64_t m_parentCategoryID;
                    bool m_parentCategoryIDHasBeenSet;

                    /**
                     * <p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     */
                    std::string m_checkAssetType;
                    bool m_checkAssetTypeHasBeenSet;

                    /**
                     * <p>基线子分类 ID。</p>
                     */
                    uint64_t m_categoryID;
                    bool m_categoryIDHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>通用过滤条件。支持的 Name：ResultStatus（结果状态 PASS/NOT_PASS/CHECKING/CHECK_FAILED/NOT_INVOLVED）、Name（检测项名称，模糊搜索）、RiskLevel（风险等级 CRITICAL/HIGH/MEDIUM/LOW）、PolicyName（所属基线/策略名称，模糊搜索）。</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页查询每页数量，最大值 100；超过时服务端将自动回退为默认值 10。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页查询起始偏移量，从 0 开始。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>排序方向，取值 asc（升序）或 desc（降序），默认 desc。</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序字段名，由具体接口定义可选字段。</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEAGGREGATEDITEMLISTREQUEST_H_
