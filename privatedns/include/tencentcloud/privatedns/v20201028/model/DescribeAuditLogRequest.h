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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEAUDITLOGREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEAUDITLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/Filter.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeAuditLog请求参数结构体
                */
                class DescribeAuditLogRequest : public AbstractModel
                {
                public:
                    DescribeAuditLogRequest();
                    ~DescribeAuditLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求量统计起始时间
                     * @return TimeRangeBegin 请求量统计起始时间
                     * 
                     */
                    std::string GetTimeRangeBegin() const;

                    /**
                     * 设置请求量统计起始时间
                     * @param _timeRangeBegin 请求量统计起始时间
                     * 
                     */
                    void SetTimeRangeBegin(const std::string& _timeRangeBegin);

                    /**
                     * 判断参数 TimeRangeBegin 是否已赋值
                     * @return TimeRangeBegin 是否已赋值
                     * 
                     */
                    bool TimeRangeBeginHasBeenSet() const;

                    /**
                     * 获取筛选参数：ZoneId：私有域ID；Domain：私有域；OperatorUin：操作者账号ID
                     * @return Filters 筛选参数：ZoneId：私有域ID；Domain：私有域；OperatorUin：操作者账号ID
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置筛选参数：ZoneId：私有域ID；Domain：私有域；OperatorUin：操作者账号ID
                     * @param _filters 筛选参数：ZoneId：私有域ID；Domain：私有域；OperatorUin：操作者账号ID
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
                     * 获取请求量统计结束时间
                     * @return TimeRangeEnd 请求量统计结束时间
                     * 
                     */
                    std::string GetTimeRangeEnd() const;

                    /**
                     * 设置请求量统计结束时间
                     * @param _timeRangeEnd 请求量统计结束时间
                     * 
                     */
                    void SetTimeRangeEnd(const std::string& _timeRangeEnd);

                    /**
                     * 判断参数 TimeRangeEnd 是否已赋值
                     * @return TimeRangeEnd 是否已赋值
                     * 
                     */
                    bool TimeRangeEndHasBeenSet() const;

                    /**
                     * 获取分页偏移量，从0开始
                     * @return Offset 分页偏移量，从0开始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，从0开始
                     * @param _offset 分页偏移量，从0开始
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
                     * 获取分页限制数目， 最大100，默认20
                     * @return Limit 分页限制数目， 最大100，默认20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页限制数目， 最大100，默认20
                     * @param _limit 分页限制数目， 最大100，默认20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 请求量统计起始时间
                     */
                    std::string m_timeRangeBegin;
                    bool m_timeRangeBeginHasBeenSet;

                    /**
                     * 筛选参数：ZoneId：私有域ID；Domain：私有域；OperatorUin：操作者账号ID
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 请求量统计结束时间
                     */
                    std::string m_timeRangeEnd;
                    bool m_timeRangeEndHasBeenSet;

                    /**
                     * 分页偏移量，从0开始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页限制数目， 最大100，默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEAUDITLOGREQUEST_H_
