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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERISKDNSLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERISKDNSLISTREQUEST_H_

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
                * DescribeRiskDnsList请求参数结构体
                */
                class DescribeRiskDnsListRequest : public AbstractModel
                {
                public:
                    DescribeRiskDnsListRequest();
                    ~DescribeRiskDnsListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取过滤条件。
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>Url - String - 是否必填：否 - Url筛选</li>
<li>Status - String - 是否必填：否 - 状态筛选0:待处理；2:信任；3:不信任</li>
<li>MergeBeginTime - String - 是否必填：否 - 最近访问开始时间</li>
<li>MergeEndTime - String - 是否必填：否 - 最近访问结束时间</li>
                     * @return Filters 过滤条件。
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>Url - String - 是否必填：否 - Url筛选</li>
<li>Status - String - 是否必填：否 - 状态筛选0:待处理；2:信任；3:不信任</li>
<li>MergeBeginTime - String - 是否必填：否 - 最近访问开始时间</li>
<li>MergeEndTime - String - 是否必填：否 - 最近访问结束时间</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>Url - String - 是否必填：否 - Url筛选</li>
<li>Status - String - 是否必填：否 - 状态筛选0:待处理；2:信任；3:不信任</li>
<li>MergeBeginTime - String - 是否必填：否 - 最近访问开始时间</li>
<li>MergeEndTime - String - 是否必填：否 - 最近访问结束时间</li>
                     * @param _filters 过滤条件。
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>Url - String - 是否必填：否 - Url筛选</li>
<li>Status - String - 是否必填：否 - 状态筛选0:待处理；2:信任；3:不信任</li>
<li>MergeBeginTime - String - 是否必填：否 - 最近访问开始时间</li>
<li>MergeEndTime - String - 是否必填：否 - 最近访问结束时间</li>
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
                     * 获取排序方式：根据请求次数排序：asc-升序/desc-降序
                     * @return Order 排序方式：根据请求次数排序：asc-升序/desc-降序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式：根据请求次数排序：asc-升序/desc-降序
                     * @param _order 排序方式：根据请求次数排序：asc-升序/desc-降序
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
                     * 获取排序字段：AccessCount-请求次数。MergeTime-最近请求时间
                     * @return By 排序字段：AccessCount-请求次数。MergeTime-最近请求时间
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段：AccessCount-请求次数。MergeTime-最近请求时间
                     * @param _by 排序字段：AccessCount-请求次数。MergeTime-最近请求时间
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
                     * 需要返回的数量，默认为10，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件。
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>Url - String - 是否必填：否 - Url筛选</li>
<li>Status - String - 是否必填：否 - 状态筛选0:待处理；2:信任；3:不信任</li>
<li>MergeBeginTime - String - 是否必填：否 - 最近访问开始时间</li>
<li>MergeEndTime - String - 是否必填：否 - 最近访问结束时间</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方式：根据请求次数排序：asc-升序/desc-降序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段：AccessCount-请求次数。MergeTime-最近请求时间
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERISKDNSLISTREQUEST_H_
