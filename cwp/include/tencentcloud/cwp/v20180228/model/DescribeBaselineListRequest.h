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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBaselineList请求参数结构体
                */
                class DescribeBaselineListRequest : public AbstractModel
                {
                public:
                    DescribeBaselineListRequest();
                    ~DescribeBaselineListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页参数 最大100条
                     * @return Limit 分页参数 最大100条
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页参数 最大100条
                     * @param _limit 分页参数 最大100条
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
                     * 获取分页参数
                     * @return Offset 分页参数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页参数
                     * @param _offset 分页参数
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
                     * 获取过滤条件 <li>StrategyId- Uint64 - 基线策略id</li> <li>Status - Uint64 - 处理状态 1-已通过 0-未通过</li> <li>Level - Uint64 - 威胁等级 1-低危 2-中危 3-高危 4-严重</li> <li>BaselineName  - String - 基线名称</li> <li>Quuid- String - 主机quuid</li> <li>Uuid- String - 主机uuid</li>
                     * @return Filters 过滤条件 <li>StrategyId- Uint64 - 基线策略id</li> <li>Status - Uint64 - 处理状态 1-已通过 0-未通过</li> <li>Level - Uint64 - 威胁等级 1-低危 2-中危 3-高危 4-严重</li> <li>BaselineName  - String - 基线名称</li> <li>Quuid- String - 主机quuid</li> <li>Uuid- String - 主机uuid</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件 <li>StrategyId- Uint64 - 基线策略id</li> <li>Status - Uint64 - 处理状态 1-已通过 0-未通过</li> <li>Level - Uint64 - 威胁等级 1-低危 2-中危 3-高危 4-严重</li> <li>BaselineName  - String - 基线名称</li> <li>Quuid- String - 主机quuid</li> <li>Uuid- String - 主机uuid</li>
                     * @param _filters 过滤条件 <li>StrategyId- Uint64 - 基线策略id</li> <li>Status - Uint64 - 处理状态 1-已通过 0-未通过</li> <li>Level - Uint64 - 威胁等级 1-低危 2-中危 3-高危 4-严重</li> <li>BaselineName  - String - 基线名称</li> <li>Quuid- String - 主机quuid</li> <li>Uuid- String - 主机uuid</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 分页参数 最大100条
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件 <li>StrategyId- Uint64 - 基线策略id</li> <li>Status - Uint64 - 处理状态 1-已通过 0-未通过</li> <li>Level - Uint64 - 威胁等级 1-低危 2-中危 3-高危 4-严重</li> <li>BaselineName  - String - 基线名称</li> <li>Quuid- String - 主机quuid</li> <li>Uuid- String - 主机uuid</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINELISTREQUEST_H_
