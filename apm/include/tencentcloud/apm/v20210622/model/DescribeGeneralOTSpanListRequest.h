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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALOTSPANLISTREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALOTSPANLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Filter.h>
#include <tencentcloud/apm/v20210622/model/OrderBy.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeGeneralOTSpanList请求参数结构体
                */
                class DescribeGeneralOTSpanListRequest : public AbstractModel
                {
                public:
                    DescribeGeneralOTSpanListRequest();
                    ~DescribeGeneralOTSpanListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>业务系统 ID</p>
                     * @return InstanceId <p>业务系统 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>业务系统 ID</p>
                     * @param _instanceId <p>业务系统 ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Span 查询开始时间戳（单位：秒）</p>
                     * @return StartTime <p>Span 查询开始时间戳（单位：秒）</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>Span 查询开始时间戳（单位：秒）</p>
                     * @param _startTime <p>Span 查询开始时间戳（单位：秒）</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Span 查询结束时间戳（单位：秒）</p>
                     * @return EndTime <p>Span 查询结束时间戳（单位：秒）</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>Span 查询结束时间戳（单位：秒）</p>
                     * @param _endTime <p>Span 查询结束时间戳（单位：秒）</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>通用过滤参数 支持的过滤key如service.name</p>
                     * @return Filters <p>通用过滤参数 支持的过滤key如service.name</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>通用过滤参数 支持的过滤key如service.name</p>
                     * @param _filters <p>通用过滤参数 支持的过滤key如service.name</p>
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
                     * 获取<p>排序<br>现支持的 Key 有：</p><ul><li>startTime(开始时间)</li><li>endTime(结束时间)</li><li>duration(响应时间)</li></ul><p>现支持的 Value 有：</p><ul><li>desc(降序排序)</li><li>asc(升序排序)</li></ul>
                     * @return OrderBy <p>排序<br>现支持的 Key 有：</p><ul><li>startTime(开始时间)</li><li>endTime(结束时间)</li><li>duration(响应时间)</li></ul><p>现支持的 Value 有：</p><ul><li>desc(降序排序)</li><li>asc(升序排序)</li></ul>
                     * 
                     */
                    OrderBy GetOrderBy() const;

                    /**
                     * 设置<p>排序<br>现支持的 Key 有：</p><ul><li>startTime(开始时间)</li><li>endTime(结束时间)</li><li>duration(响应时间)</li></ul><p>现支持的 Value 有：</p><ul><li>desc(降序排序)</li><li>asc(升序排序)</li></ul>
                     * @param _orderBy <p>排序<br>现支持的 Key 有：</p><ul><li>startTime(开始时间)</li><li>endTime(结束时间)</li><li>duration(响应时间)</li></ul><p>现支持的 Value 有：</p><ul><li>desc(降序排序)</li><li>asc(升序排序)</li></ul>
                     * 
                     */
                    void SetOrderBy(const OrderBy& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>业务自身服务名，控制台用户请填写taw</p>
                     * @return BusinessName <p>业务自身服务名，控制台用户请填写taw</p>
                     * 
                     */
                    std::string GetBusinessName() const;

                    /**
                     * 设置<p>业务自身服务名，控制台用户请填写taw</p>
                     * @param _businessName <p>业务自身服务名，控制台用户请填写taw</p>
                     * 
                     */
                    void SetBusinessName(const std::string& _businessName);

                    /**
                     * 判断参数 BusinessName 是否已赋值
                     * @return BusinessName 是否已赋值
                     * 
                     */
                    bool BusinessNameHasBeenSet() const;

                    /**
                     * 获取<p>单页项目个数，默认为10000，合法取值范围为0～10000</p>
                     * @return Limit <p>单页项目个数，默认为10000，合法取值范围为0～10000</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单页项目个数，默认为10000，合法取值范围为0～10000</p>
                     * @param _limit <p>单页项目个数，默认为10000，合法取值范围为0～10000</p>
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
                     * 获取<p>分页</p>
                     * @return Offset <p>分页</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页</p>
                     * @param _offset <p>分页</p>
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
                     * <p>业务系统 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Span 查询开始时间戳（单位：秒）</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Span 查询结束时间戳（单位：秒）</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>通用过滤参数 支持的过滤key如service.name</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>排序<br>现支持的 Key 有：</p><ul><li>startTime(开始时间)</li><li>endTime(结束时间)</li><li>duration(响应时间)</li></ul><p>现支持的 Value 有：</p><ul><li>desc(降序排序)</li><li>asc(升序排序)</li></ul>
                     */
                    OrderBy m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>业务自身服务名，控制台用户请填写taw</p>
                     */
                    std::string m_businessName;
                    bool m_businessNameHasBeenSet;

                    /**
                     * <p>单页项目个数，默认为10000，合法取值范围为0～10000</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALOTSPANLISTREQUEST_H_
