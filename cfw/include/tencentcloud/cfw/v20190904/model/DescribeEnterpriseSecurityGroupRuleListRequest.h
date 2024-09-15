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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULELISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CommonFilter.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeEnterpriseSecurityGroupRuleList请求参数结构体
                */
                class DescribeEnterpriseSecurityGroupRuleListRequest : public AbstractModel
                {
                public:
                    DescribeEnterpriseSecurityGroupRuleListRequest();
                    ~DescribeEnterpriseSecurityGroupRuleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页每页数量
                     * @return Limit 分页每页数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页每页数量
                     * @param _limit 分页每页数量
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
                     * 获取分页当前页
                     * @return Offset 分页当前页
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页当前页
                     * @param _offset 分页当前页
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
                     * 获取启用状态 1启用 0 未启用
                     * @return Status 启用状态 1启用 0 未启用
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置启用状态 1启用 0 未启用
                     * @param _status 启用状态 1启用 0 未启用
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Area 地域
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域
                     * @param _area 地域
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取规则下发方式筛选  1 新规则和延迟下发  2  仅看新规则  
                     * @return Filter 规则下发方式筛选  1 新规则和延迟下发  2  仅看新规则  
                     * 
                     */
                    int64_t GetFilter() const;

                    /**
                     * 设置规则下发方式筛选  1 新规则和延迟下发  2  仅看新规则  
                     * @param _filter 规则下发方式筛选  1 新规则和延迟下发  2  仅看新规则  
                     * 
                     */
                    void SetFilter(const int64_t& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取查询条件
                     * @return SearchValue 查询条件
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置查询条件
                     * @param _searchValue 查询条件
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取查询条件新
                     * @return SearchFilters 查询条件新
                     * 
                     */
                    std::vector<CommonFilter> GetSearchFilters() const;

                    /**
                     * 设置查询条件新
                     * @param _searchFilters 查询条件新
                     * 
                     */
                    void SetSearchFilters(const std::vector<CommonFilter>& _searchFilters);

                    /**
                     * 判断参数 SearchFilters 是否已赋值
                     * @return SearchFilters 是否已赋值
                     * 
                     */
                    bool SearchFiltersHasBeenSet() const;

                private:

                    /**
                     * 分页每页数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页当前页
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 启用状态 1启用 0 未启用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 规则下发方式筛选  1 新规则和延迟下发  2  仅看新规则  
                     */
                    int64_t m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 查询条件
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * 查询条件新
                     */
                    std::vector<CommonFilter> m_searchFilters;
                    bool m_searchFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULELISTREQUEST_H_
