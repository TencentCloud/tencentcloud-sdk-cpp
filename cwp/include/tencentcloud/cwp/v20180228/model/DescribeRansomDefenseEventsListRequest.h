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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSEEVENTSLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSEEVENTSLISTREQUEST_H_

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
                * DescribeRansomDefenseEventsList请求参数结构体
                */
                class DescribeRansomDefenseEventsListRequest : public AbstractModel
                {
                public:
                    DescribeRansomDefenseEventsListRequest();
                    ~DescribeRansomDefenseEventsListRequest() = default;
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
                     * 获取过滤条件。
<li>HostName- string- 主机名称</li>
<li>Status - Uint64 - 0待处理，1已处理，2已信任</li>
<li>HostIp- String - 主机ip</li>
                     * @return Filters 过滤条件。
<li>HostName- string- 主机名称</li>
<li>Status - Uint64 - 0待处理，1已处理，2已信任</li>
<li>HostIp- String - 主机ip</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>HostName- string- 主机名称</li>
<li>Status - Uint64 - 0待处理，1已处理，2已信任</li>
<li>HostIp- String - 主机ip</li>
                     * @param _filters 过滤条件。
<li>HostName- string- 主机名称</li>
<li>Status - Uint64 - 0待处理，1已处理，2已信任</li>
<li>HostIp- String - 主机ip</li>
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
                     * 获取排序方法 ASC DESC
                     * @return Order 排序方法 ASC DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方法 ASC DESC
                     * @param _order 排序方法 ASC DESC
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
                     * 获取排序字段支持CreateTime
                     * @return By 排序字段支持CreateTime
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段支持CreateTime
                     * @param _by 排序字段支持CreateTime
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取事件创建起始时间
                     * @return CreateBeginTime 事件创建起始时间
                     * 
                     */
                    std::string GetCreateBeginTime() const;

                    /**
                     * 设置事件创建起始时间
                     * @param _createBeginTime 事件创建起始时间
                     * 
                     */
                    void SetCreateBeginTime(const std::string& _createBeginTime);

                    /**
                     * 判断参数 CreateBeginTime 是否已赋值
                     * @return CreateBeginTime 是否已赋值
                     * 
                     */
                    bool CreateBeginTimeHasBeenSet() const;

                    /**
                     * 获取事件创建结束时间
                     * @return CreateEndTime 事件创建结束时间
                     * 
                     */
                    std::string GetCreateEndTime() const;

                    /**
                     * 设置事件创建结束时间
                     * @param _createEndTime 事件创建结束时间
                     * 
                     */
                    void SetCreateEndTime(const std::string& _createEndTime);

                    /**
                     * 判断参数 CreateEndTime 是否已赋值
                     * @return CreateEndTime 是否已赋值
                     * 
                     */
                    bool CreateEndTimeHasBeenSet() const;

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
                     * 过滤条件。
<li>HostName- string- 主机名称</li>
<li>Status - Uint64 - 0待处理，1已处理，2已信任</li>
<li>HostIp- String - 主机ip</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方法 ASC DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段支持CreateTime
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 事件创建起始时间
                     */
                    std::string m_createBeginTime;
                    bool m_createBeginTimeHasBeenSet;

                    /**
                     * 事件创建结束时间
                     */
                    std::string m_createEndTime;
                    bool m_createEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSEEVENTSLISTREQUEST_H_
