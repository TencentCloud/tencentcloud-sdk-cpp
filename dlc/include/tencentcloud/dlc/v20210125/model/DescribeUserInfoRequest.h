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
                     * 获取用户Id
                     * @return UserId 用户Id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户Id
                     * @param _userId 用户Id
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
                     * 获取必传字段，查询的信息类型，Group：工作组 DataAuth：数据权限 EngineAuth:引擎权限 RowFilter：行级别权限
                     * @return Type 必传字段，查询的信息类型，Group：工作组 DataAuth：数据权限 EngineAuth:引擎权限 RowFilter：行级别权限
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置必传字段，查询的信息类型，Group：工作组 DataAuth：数据权限 EngineAuth:引擎权限 RowFilter：行级别权限
                     * @param _type 必传字段，查询的信息类型，Group：工作组 DataAuth：数据权限 EngineAuth:引擎权限 RowFilter：行级别权限
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
                     * 获取查询的过滤条件。

当Type为Group时，支持Key为workgroup-name的模糊搜索；

当Type为DataAuth时，支持key：

policy-type：权限类型。

policy-source：数据来源。

data-name：库表的模糊搜索。

当Type为EngineAuth时，支持key：

policy-type：权限类型。

policy-source：数据来源。

engine-name：库表的模糊搜索。
                     * @return Filters 查询的过滤条件。

当Type为Group时，支持Key为workgroup-name的模糊搜索；

当Type为DataAuth时，支持key：

policy-type：权限类型。

policy-source：数据来源。

data-name：库表的模糊搜索。

当Type为EngineAuth时，支持key：

policy-type：权限类型。

policy-source：数据来源。

engine-name：库表的模糊搜索。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询的过滤条件。

当Type为Group时，支持Key为workgroup-name的模糊搜索；

当Type为DataAuth时，支持key：

policy-type：权限类型。

policy-source：数据来源。

data-name：库表的模糊搜索。

当Type为EngineAuth时，支持key：

policy-type：权限类型。

policy-source：数据来源。

engine-name：库表的模糊搜索。
                     * @param _filters 查询的过滤条件。

当Type为Group时，支持Key为workgroup-name的模糊搜索；

当Type为DataAuth时，支持key：

policy-type：权限类型。

policy-source：数据来源。

data-name：库表的模糊搜索。

当Type为EngineAuth时，支持key：

policy-type：权限类型。

policy-source：数据来源。

engine-name：库表的模糊搜索。
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
                     * 获取排序字段。

当Type为Group时，支持create-time、group-name

当Type为DataAuth时，支持create-time

当Type为EngineAuth时，支持create-time
                     * @return SortBy 排序字段。

当Type为Group时，支持create-time、group-name

当Type为DataAuth时，支持create-time

当Type为EngineAuth时，支持create-time
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序字段。

当Type为Group时，支持create-time、group-name

当Type为DataAuth时，支持create-time

当Type为EngineAuth时，支持create-time
                     * @param _sortBy 排序字段。

当Type为Group时，支持create-time、group-name

当Type为DataAuth时，支持create-time

当Type为EngineAuth时，支持create-time
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
                     * 获取排序方式，desc表示正序，asc表示反序， 默认为asc
                     * @return Sorting 排序方式，desc表示正序，asc表示反序， 默认为asc
                     * 
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置排序方式，desc表示正序，asc表示反序， 默认为asc
                     * @param _sorting 排序方式，desc表示正序，asc表示反序， 默认为asc
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
                     * 获取返回数量，默认20，最大值100
                     * @return Limit 返回数量，默认20，最大值100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认20，最大值100
                     * @param _limit 返回数量，默认20，最大值100
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

                private:

                    /**
                     * 用户Id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 必传字段，查询的信息类型，Group：工作组 DataAuth：数据权限 EngineAuth:引擎权限 RowFilter：行级别权限
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 查询的过滤条件。

当Type为Group时，支持Key为workgroup-name的模糊搜索；

当Type为DataAuth时，支持key：

policy-type：权限类型。

policy-source：数据来源。

data-name：库表的模糊搜索。

当Type为EngineAuth时，支持key：

policy-type：权限类型。

policy-source：数据来源。

engine-name：库表的模糊搜索。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段。

当Type为Group时，支持create-time、group-name

当Type为DataAuth时，支持create-time

当Type为EngineAuth时，支持create-time
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 排序方式，desc表示正序，asc表示反序， 默认为asc
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                    /**
                     * 返回数量，默认20，最大值100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERINFOREQUEST_H_
