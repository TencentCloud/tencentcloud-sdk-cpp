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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKOPERATIONLOGSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKOPERATIONLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDiskOperationLogs请求参数结构体
                */
                class DescribeDiskOperationLogsRequest : public AbstractModel
                {
                public:
                    DescribeDiskOperationLogsRequest();
                    ~DescribeDiskOperationLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。支持以下条件：
<li>disk-id - Array of String - 是否必填：是 - 按云盘ID过滤，每个请求最多可指定10个云盘ID。
                     * @return Filters 过滤条件。支持以下条件：
<li>disk-id - Array of String - 是否必填：是 - 按云盘ID过滤，每个请求最多可指定10个云盘ID。
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。支持以下条件：
<li>disk-id - Array of String - 是否必填：是 - 按云盘ID过滤，每个请求最多可指定10个云盘ID。
                     * @param Filters 过滤条件。支持以下条件：
<li>disk-id - Array of String - 是否必填：是 - 按云盘ID过滤，每个请求最多可指定10个云盘ID。
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取要查询的操作日志的截止时间，例如：“2019-11-22 23:59:59"
                     * @return EndTime 要查询的操作日志的截止时间，例如：“2019-11-22 23:59:59"
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置要查询的操作日志的截止时间，例如：“2019-11-22 23:59:59"
                     * @param EndTime 要查询的操作日志的截止时间，例如：“2019-11-22 23:59:59"
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取要查询的操作日志的起始时间，例如：“2019-11-22 00:00:00"
                     * @return BeginTime 要查询的操作日志的起始时间，例如：“2019-11-22 00:00:00"
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置要查询的操作日志的起始时间，例如：“2019-11-22 00:00:00"
                     * @param BeginTime 要查询的操作日志的起始时间，例如：“2019-11-22 00:00:00"
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                private:

                    /**
                     * 过滤条件。支持以下条件：
<li>disk-id - Array of String - 是否必填：是 - 按云盘ID过滤，每个请求最多可指定10个云盘ID。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 要查询的操作日志的截止时间，例如：“2019-11-22 23:59:59"
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 要查询的操作日志的起始时间，例如：“2019-11-22 00:00:00"
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKOPERATIONLOGSREQUEST_H_
