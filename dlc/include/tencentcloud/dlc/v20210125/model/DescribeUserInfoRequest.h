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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERINFOREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeUserInfo请求参数结构体
                */
                class DescribeUserInfoRequest : public AbstractModel
                {
                public:
                    DescribeUserInfoRequest();
                    ~DescribeUserInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户Id</p>
                     * @return UserId <p>用户Id</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户Id</p>
                     * @param _userId <p>用户Id</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>必传字段，查询的信息类型，Group：工作组 DataAuth：数据权限 EngineAuth:引擎权限 RowFilter：行级别权限</p>
                     * @return Type <p>必传字段，查询的信息类型，Group：工作组 DataAuth：数据权限 EngineAuth:引擎权限 RowFilter：行级别权限</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>必传字段，查询的信息类型，Group：工作组 DataAuth：数据权限 EngineAuth:引擎权限 RowFilter：行级别权限</p>
                     * @param _type <p>必传字段，查询的信息类型，Group：工作组 DataAuth：数据权限 EngineAuth:引擎权限 RowFilter：行级别权限</p>
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
                     * 获取<p>查询的过滤条件。</p><p>当Type为Group时，支持Key为workgroup-name的模糊搜索；</p><p>当Type为DataAuth时，支持key：</p><p>policy-type：权限类型。</p><p>policy-source：数据来源。</p><p>data-name：库表的模糊搜索。</p><p>当Type为EngineAuth时，支持key：</p><p>policy-type：权限类型。</p><p>policy-source：数据来源。</p><p>engine-name：库表的模糊搜索。</p>
                     * @return Filters <p>查询的过滤条件。</p><p>当Type为Group时，支持Key为workgroup-name的模糊搜索；</p><p>当Type为DataAuth时，支持key：</p><p>policy-type：权限类型。</p><p>policy-source：数据来源。</p><p>data-name：库表的模糊搜索。</p><p>当Type为EngineAuth时，支持key：</p><p>policy-type：权限类型。</p><p>policy-source：数据来源。</p><p>engine-name：库表的模糊搜索。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>查询的过滤条件。</p><p>当Type为Group时，支持Key为workgroup-name的模糊搜索；</p><p>当Type为DataAuth时，支持key：</p><p>policy-type：权限类型。</p><p>policy-source：数据来源。</p><p>data-name：库表的模糊搜索。</p><p>当Type为EngineAuth时，支持key：</p><p>policy-type：权限类型。</p><p>policy-source：数据来源。</p><p>engine-name：库表的模糊搜索。</p>
                     * @param _filters <p>查询的过滤条件。</p><p>当Type为Group时，支持Key为workgroup-name的模糊搜索；</p><p>当Type为DataAuth时，支持key：</p><p>policy-type：权限类型。</p><p>policy-source：数据来源。</p><p>data-name：库表的模糊搜索。</p><p>当Type为EngineAuth时，支持key：</p><p>policy-type：权限类型。</p><p>policy-source：数据来源。</p><p>engine-name：库表的模糊搜索。</p>
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
                     * 获取<p>排序字段。</p><p>当Type为Group时，支持create-time、group-name</p><p>当Type为DataAuth时，支持create-time</p><p>当Type为EngineAuth时，支持create-time</p>
                     * @return SortBy <p>排序字段。</p><p>当Type为Group时，支持create-time、group-name</p><p>当Type为DataAuth时，支持create-time</p><p>当Type为EngineAuth时，支持create-time</p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>排序字段。</p><p>当Type为Group时，支持create-time、group-name</p><p>当Type为DataAuth时，支持create-time</p><p>当Type为EngineAuth时，支持create-time</p>
                     * @param _sortBy <p>排序字段。</p><p>当Type为Group时，支持create-time、group-name</p><p>当Type为DataAuth时，支持create-time</p><p>当Type为EngineAuth时，支持create-time</p>
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取<p>排序方式，desc表示正序，asc表示反序， 默认为asc</p>
                     * @return Sorting <p>排序方式，desc表示正序，asc表示反序， 默认为asc</p>
                     * 
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置<p>排序方式，desc表示正序，asc表示反序， 默认为asc</p>
                     * @param _sorting <p>排序方式，desc表示正序，asc表示反序， 默认为asc</p>
                     * 
                     */
                    void SetSorting(const std::string& _sorting);

                    /**
                     * 判断参数 Sorting 是否已赋值
                     * @return Sorting 是否已赋值
                     * 
                     */
                    bool SortingHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，默认20，最大值100</p>
                     * @return Limit <p>返回数量，默认20，最大值100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认20，最大值100</p>
                     * @param _limit <p>返回数量，默认20，最大值100</p>
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
                     * 获取<p>用户来源类型TencentAccount（普通腾讯云用户） / EntraAccount（微软用户）</p>
                     * @return AccountType <p>用户来源类型TencentAccount（普通腾讯云用户） / EntraAccount（微软用户）</p>
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置<p>用户来源类型TencentAccount（普通腾讯云用户） / EntraAccount（微软用户）</p>
                     * @param _accountType <p>用户来源类型TencentAccount（普通腾讯云用户） / EntraAccount（微软用户）</p>
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取<p>TF 资源 ID</p>
                     * @return PolicyId <p>TF 资源 ID</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>TF 资源 ID</p>
                     * @param _policyId <p>TF 资源 ID</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * <p>用户Id</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>必传字段，查询的信息类型，Group：工作组 DataAuth：数据权限 EngineAuth:引擎权限 RowFilter：行级别权限</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>查询的过滤条件。</p><p>当Type为Group时，支持Key为workgroup-name的模糊搜索；</p><p>当Type为DataAuth时，支持key：</p><p>policy-type：权限类型。</p><p>policy-source：数据来源。</p><p>data-name：库表的模糊搜索。</p><p>当Type为EngineAuth时，支持key：</p><p>policy-type：权限类型。</p><p>policy-source：数据来源。</p><p>engine-name：库表的模糊搜索。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>排序字段。</p><p>当Type为Group时，支持create-time、group-name</p><p>当Type为DataAuth时，支持create-time</p><p>当Type为EngineAuth时，支持create-time</p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>排序方式，desc表示正序，asc表示反序， 默认为asc</p>
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                    /**
                     * <p>返回数量，默认20，最大值100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认为0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>用户来源类型TencentAccount（普通腾讯云用户） / EntraAccount（微软用户）</p>
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * <p>TF 资源 ID</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERINFOREQUEST_H_
