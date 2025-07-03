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

#ifndef TENCENTCLOUD_SECURITYLAKE_V20240117_MODEL_DESCRIBESECURITYALARMTABLELISTREQUEST_H_
#define TENCENTCLOUD_SECURITYLAKE_V20240117_MODEL_DESCRIBESECURITYALARMTABLELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/securitylake/v20240117/model/WebSearchFilter.h>


namespace TencentCloud
{
    namespace Securitylake
    {
        namespace V20240117
        {
            namespace Model
            {
                /**
                * DescribeSecurityAlarmTableList请求参数结构体
                */
                class DescribeSecurityAlarmTableListRequest : public AbstractModel
                {
                public:
                    DescribeSecurityAlarmTableListRequest();
                    ~DescribeSecurityAlarmTableListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return SdlId 实例ID
                     * 
                     */
                    std::string GetSdlId() const;

                    /**
                     * 设置实例ID
                     * @param _sdlId 实例ID
                     * 
                     */
                    void SetSdlId(const std::string& _sdlId);

                    /**
                     * 判断参数 SdlId 是否已赋值
                     * @return SdlId 是否已赋值
                     * 
                     */
                    bool SdlIdHasBeenSet() const;

                    /**
                     * 获取过滤条件
                     * @return Filters 过滤条件
                     * 
                     */
                    std::vector<WebSearchFilter> GetFilters() const;

                    /**
                     * 设置过滤条件
                     * @param _filters 过滤条件
                     * 
                     */
                    void SetFilters(const std::vector<WebSearchFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取长度
                     * @return Limit 长度
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置长度
                     * @param _limit 长度
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
                     * 获取偏移
                     * @return Offset 偏移
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移
                     * @param _offset 偏移
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
                     * 获取排序
                     * @return Order 排序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序
                     * @param _order 排序
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
                     * 获取排序字段
                     * @return By 排序字段
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
                     * @param _by 排序字段
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
                     * 获取开始时间,毫秒
                     * @return StartTime 开始时间,毫秒
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间,毫秒
                     * @param _startTime 开始时间,毫秒
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_sdlId;
                    bool m_sdlIdHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    std::vector<WebSearchFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 长度
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 开始时间,毫秒
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SECURITYLAKE_V20240117_MODEL_DESCRIBESECURITYALARMTABLELISTREQUEST_H_
