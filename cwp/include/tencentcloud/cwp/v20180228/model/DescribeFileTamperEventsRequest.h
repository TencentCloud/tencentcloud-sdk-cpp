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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPEREVENTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPEREVENTSREQUEST_H_

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
                * DescribeFileTamperEvents请求参数结构体
                */
                class DescribeFileTamperEventsRequest : public AbstractModel
                {
                public:
                    DescribeFileTamperEventsRequest();
                    ~DescribeFileTamperEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。
<li>Status - String - 是否必填：否 - 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略</li>
<li>ModifyTime - String - 是否必填：否 - 最近发生时间</li>
<li>Uuid- String - 是否必填：否 - 主机uuid查询</li>
<li>RuleCategory- string - 是否必填：否 - 规则类别 0 系统规则 1 自定义规则</li>
<li>FileAction- string - 是否必填：否 - 威胁行为 read 读取文件 write 写文件</li>
                     * @return Filters 过滤条件。
<li>Status - String - 是否必填：否 - 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略</li>
<li>ModifyTime - String - 是否必填：否 - 最近发生时间</li>
<li>Uuid- String - 是否必填：否 - 主机uuid查询</li>
<li>RuleCategory- string - 是否必填：否 - 规则类别 0 系统规则 1 自定义规则</li>
<li>FileAction- string - 是否必填：否 - 威胁行为 read 读取文件 write 写文件</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>Status - String - 是否必填：否 - 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略</li>
<li>ModifyTime - String - 是否必填：否 - 最近发生时间</li>
<li>Uuid- String - 是否必填：否 - 主机uuid查询</li>
<li>RuleCategory- string - 是否必填：否 - 规则类别 0 系统规则 1 自定义规则</li>
<li>FileAction- string - 是否必填：否 - 威胁行为 read 读取文件 write 写文件</li>
                     * @param _filters 过滤条件。
<li>Status - String - 是否必填：否 - 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略</li>
<li>ModifyTime - String - 是否必填：否 - 最近发生时间</li>
<li>Uuid- String - 是否必填：否 - 主机uuid查询</li>
<li>RuleCategory- string - 是否必填：否 - 规则类别 0 系统规则 1 自定义规则</li>
<li>FileAction- string - 是否必填：否 - 威胁行为 read 读取文件 write 写文件</li>
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取需要返回的数量，默认为10，最大值为100
                     * @return Limit 需要返回的数量，默认为10，最大值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，默认为10，最大值为100
                     * @param _limit 需要返回的数量，默认为10，最大值为100
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
                     * 获取排序方式 ASC,DESC
                     * @return Order 排序方式 ASC,DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式 ASC,DESC
                     * @param _order 排序方式 ASC,DESC
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
                     * 获取排序字段 CreateTime、ModifyTime
                     * @return By 排序字段 CreateTime、ModifyTime
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段 CreateTime、ModifyTime
                     * @param _by 排序字段 CreateTime、ModifyTime
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
                     * 过滤条件。
<li>Status - String - 是否必填：否 - 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略</li>
<li>ModifyTime - String - 是否必填：否 - 最近发生时间</li>
<li>Uuid- String - 是否必填：否 - 主机uuid查询</li>
<li>RuleCategory- string - 是否必填：否 - 规则类别 0 系统规则 1 自定义规则</li>
<li>FileAction- string - 是否必填：否 - 威胁行为 read 读取文件 write 写文件</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 需要返回的数量，默认为10，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序方式 ASC,DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段 CreateTime、ModifyTime
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPEREVENTSREQUEST_H_
