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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEAUDITLOGFILEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEAUDITLOGFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/AuditLogFilter.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * CreateAuditLogFile请求参数结构体
                */
                class CreateAuditLogFileRequest : public AbstractModel
                {
                public:
                    CreateAuditLogFileRequest();
                    ~CreateAuditLogFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：cmgo-xfts****，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：cmgo-xfts****，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cmgo-xfts****，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：cmgo-xfts****，与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取开始时间，格式为："2021-07-12 10:29:20"。
                     * @return StartTime 开始时间，格式为："2021-07-12 10:29:20"。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，格式为："2021-07-12 10:29:20"。
                     * @param _startTime 开始时间，格式为："2021-07-12 10:29:20"。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，格式为："2021-07-12 10:39:20"。
                     * @return EndTime 结束时间，格式为："2021-07-12 10:39:20"。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，格式为："2021-07-12 10:39:20"。
                     * @param _endTime 结束时间，格式为："2021-07-12 10:39:20"。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取审计日志文件的排序方式。
<ul><li>ASC：升序。</li><li>DESC：降序。</li></ul>
                     * @return Order 审计日志文件的排序方式。
<ul><li>ASC：升序。</li><li>DESC：降序。</li></ul>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置审计日志文件的排序方式。
<ul><li>ASC：升序。</li><li>DESC：降序。</li></ul>
                     * @param _order 审计日志文件的排序方式。
<ul><li>ASC：升序。</li><li>DESC：降序。</li></ul>
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
                     * 获取审计日志文件的排序字段。当前支持的取值包括：
<ul><li>timestamp：时间戳。</li><li>affectRows：影响行数。</li><li>execTime：执行时间。</li></ul>
                     * @return OrderBy 审计日志文件的排序字段。当前支持的取值包括：
<ul><li>timestamp：时间戳。</li><li>affectRows：影响行数。</li><li>execTime：执行时间。</li></ul>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置审计日志文件的排序字段。当前支持的取值包括：
<ul><li>timestamp：时间戳。</li><li>affectRows：影响行数。</li><li>execTime：执行时间。</li></ul>
                     * @param _orderBy 审计日志文件的排序字段。当前支持的取值包括：
<ul><li>timestamp：时间戳。</li><li>affectRows：影响行数。</li><li>execTime：执行时间。</li></ul>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取过滤条件。可按设置的过滤条件过滤审计日志。
                     * @return Filter 过滤条件。可按设置的过滤条件过滤审计日志。
                     * 
                     */
                    AuditLogFilter GetFilter() const;

                    /**
                     * 设置过滤条件。可按设置的过滤条件过滤审计日志。
                     * @param _filter 过滤条件。可按设置的过滤条件过滤审计日志。
                     * 
                     */
                    void SetFilter(const AuditLogFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：cmgo-xfts****，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间，格式为："2021-07-12 10:29:20"。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，格式为："2021-07-12 10:39:20"。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 审计日志文件的排序方式。
<ul><li>ASC：升序。</li><li>DESC：降序。</li></ul>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 审计日志文件的排序字段。当前支持的取值包括：
<ul><li>timestamp：时间戳。</li><li>affectRows：影响行数。</li><li>execTime：执行时间。</li></ul>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 过滤条件。可按设置的过滤条件过滤审计日志。
                     */
                    AuditLogFilter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEAUDITLOGFILEREQUEST_H_
