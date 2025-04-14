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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEREQUESTDATAREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEREQUESTDATAREQUEST_H_

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
                * DescribeRequestData请求参数结构体
                */
                class DescribeRequestDataRequest : public AbstractModel
                {
                public:
                    DescribeRequestDataRequest();
                    ~DescribeRequestDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求量统计起始时间，格式：2020-11-22 00:00:00
                     * @return TimeRangeBegin 请求量统计起始时间，格式：2020-11-22 00:00:00
                     * 
                     */
                    std::string GetTimeRangeBegin() const;

                    /**
                     * 设置请求量统计起始时间，格式：2020-11-22 00:00:00
                     * @param _timeRangeBegin 请求量统计起始时间，格式：2020-11-22 00:00:00
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
                     * 获取筛选参数：
                     * @return Filters 筛选参数：
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置筛选参数：
                     * @param _filters 筛选参数：
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
                     * 获取请求量统计结束时间，格式：2020-11-22 23:59:59
                     * @return TimeRangeEnd 请求量统计结束时间，格式：2020-11-22 23:59:59
                     * 
                     */
                    std::string GetTimeRangeEnd() const;

                    /**
                     * 设置请求量统计结束时间，格式：2020-11-22 23:59:59
                     * @param _timeRangeEnd 请求量统计结束时间，格式：2020-11-22 23:59:59
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
                     * 获取是否导出：true导出，false不导出
                     * @return Export 是否导出：true导出，false不导出
                     * 
                     */
                    bool GetExport() const;

                    /**
                     * 设置是否导出：true导出，false不导出
                     * @param _export 是否导出：true导出，false不导出
                     * 
                     */
                    void SetExport(const bool& _export);

                    /**
                     * 判断参数 Export 是否已赋值
                     * @return Export 是否已赋值
                     * 
                     */
                    bool ExportHasBeenSet() const;

                private:

                    /**
                     * 请求量统计起始时间，格式：2020-11-22 00:00:00
                     */
                    std::string m_timeRangeBegin;
                    bool m_timeRangeBeginHasBeenSet;

                    /**
                     * 筛选参数：
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 请求量统计结束时间，格式：2020-11-22 23:59:59
                     */
                    std::string m_timeRangeEnd;
                    bool m_timeRangeEndHasBeenSet;

                    /**
                     * 是否导出：true导出，false不导出
                     */
                    bool m_export;
                    bool m_exportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEREQUESTDATAREQUEST_H_
