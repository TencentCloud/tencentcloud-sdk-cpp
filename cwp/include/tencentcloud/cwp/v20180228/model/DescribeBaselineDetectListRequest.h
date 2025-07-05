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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEDETECTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEDETECTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBaselineDetectList请求参数结构体
                */
                class DescribeBaselineDetectListRequest : public AbstractModel
                {
                public:
                    DescribeBaselineDetectListRequest();
                    ~DescribeBaselineDetectListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li>PolicyName - string - 是否必填：否 - 策略名称</li>
<li>PolicyDetectStatus - int - 是否必填：否 - 1:检测中 2:检测完成</li>
<li>FirstTime - string - 是否必填：否 - 开始时间</li>
<li>LastTime - string - 是否必填：否 - 结束时间</li>
                     * @return Filters <li>PolicyName - string - 是否必填：否 - 策略名称</li>
<li>PolicyDetectStatus - int - 是否必填：否 - 1:检测中 2:检测完成</li>
<li>FirstTime - string - 是否必填：否 - 开始时间</li>
<li>LastTime - string - 是否必填：否 - 结束时间</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>PolicyName - string - 是否必填：否 - 策略名称</li>
<li>PolicyDetectStatus - int - 是否必填：否 - 1:检测中 2:检测完成</li>
<li>FirstTime - string - 是否必填：否 - 开始时间</li>
<li>LastTime - string - 是否必填：否 - 结束时间</li>
                     * @param _filters <li>PolicyName - string - 是否必填：否 - 策略名称</li>
<li>PolicyDetectStatus - int - 是否必填：否 - 1:检测中 2:检测完成</li>
<li>FirstTime - string - 是否必填：否 - 开始时间</li>
<li>LastTime - string - 是否必填：否 - 结束时间</li>
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
                     * 获取限制条数,默认10,最大100
                     * @return Limit 限制条数,默认10,最大100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制条数,默认10,最大100
                     * @param _limit 限制条数,默认10,最大100
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
                     * 获取偏移量,默认0
                     * @return Offset 偏移量,默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量,默认0
                     * @param _offset 偏移量,默认0
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
                     * 获取排序方式: [ASC:升序|DESC:降序]
                     * @return Order 排序方式: [ASC:升序|DESC:降序]
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式: [ASC:升序|DESC:降序]
                     * @param _order 排序方式: [ASC:升序|DESC:降序]
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
                     * 获取可选排序列: [HostCount|StartTime|StopTime]
                     * @return By 可选排序列: [HostCount|StartTime|StopTime]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置可选排序列: [HostCount|StartTime|StopTime]
                     * @param _by 可选排序列: [HostCount|StartTime|StopTime]
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
                     * <li>PolicyName - string - 是否必填：否 - 策略名称</li>
<li>PolicyDetectStatus - int - 是否必填：否 - 1:检测中 2:检测完成</li>
<li>FirstTime - string - 是否必填：否 - 开始时间</li>
<li>LastTime - string - 是否必填：否 - 结束时间</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 限制条数,默认10,最大100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量,默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序方式: [ASC:升序|DESC:降序]
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 可选排序列: [HostCount|StartTime|StopTime]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEDETECTLISTREQUEST_H_
