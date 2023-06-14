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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEAPPSINGLECASELISTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEAPPSINGLECASELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeAppSingleCaseList请求参数结构体
                */
                class DescribeAppSingleCaseListRequest : public AbstractModel
                {
                public:
                    DescribeAppSingleCaseListRequest();
                    ~DescribeAppSingleCaseListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取app 项目 ID
                     * @return ProjectID app 项目 ID
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置app 项目 ID
                     * @param _projectID app 项目 ID
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取查询的表名
                     * @return From 查询的表名
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置查询的表名
                     * @param _from 查询的表名
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取查询指标 field
                     * @return Fields 查询指标 field
                     * 
                     */
                    std::string GetFields() const;

                    /**
                     * 设置查询指标 field
                     * @param _fields 查询指标 field
                     * 
                     */
                    void SetFields(const std::string& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取查询的过滤条件
                     * @return Filter 查询的过滤条件
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置查询的过滤条件
                     * @param _filter 查询的过滤条件
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取查询简单过滤条件
                     * @return FilterSimple 查询简单过滤条件
                     * 
                     */
                    std::string GetFilterSimple() const;

                    /**
                     * 设置查询简单过滤条件
                     * @param _filterSimple 查询简单过滤条件
                     * 
                     */
                    void SetFilterSimple(const std::string& _filterSimple);

                    /**
                     * 判断参数 FilterSimple 是否已赋值
                     * @return FilterSimple 是否已赋值
                     * 
                     */
                    bool FilterSimpleHasBeenSet() const;

                    /**
                     * 获取group by 条件
                     * @return GroupBy group by 条件
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置group by 条件
                     * @param _groupBy group by 条件
                     * 
                     */
                    void SetGroupBy(const std::vector<std::string>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     * 
                     */
                    bool GroupByHasBeenSet() const;

                    /**
                     * 获取order by 条件
                     * @return OrderBy order by 条件
                     * 
                     */
                    std::vector<std::string> GetOrderBy() const;

                    /**
                     * 设置order by 条件
                     * @param _orderBy order by 条件
                     * 
                     */
                    void SetOrderBy(const std::vector<std::string>& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取limit 参数
                     * @return Limit limit 参数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置limit 参数
                     * @param _limit limit 参数
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
                     * 获取offset 参数
                     * @return Offset offset 参数
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置offset 参数
                     * @param _offset offset 参数
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
                     * app 项目 ID
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * 查询的表名
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 查询指标 field
                     */
                    std::string m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * 查询的过滤条件
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 查询简单过滤条件
                     */
                    std::string m_filterSimple;
                    bool m_filterSimpleHasBeenSet;

                    /**
                     * group by 条件
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * order by 条件
                     */
                    std::vector<std::string> m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * limit 参数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * offset 参数
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEAPPSINGLECASELISTREQUEST_H_
