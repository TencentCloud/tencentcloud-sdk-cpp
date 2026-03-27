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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEEXPORTTASKREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEEXPORTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/LogFilter.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * CreateExportTask请求参数结构体
                */
                class CreateExportTaskRequest : public AbstractModel
                {
                public:
                    CreateExportTaskRequest();
                    ~CreateExportTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * @return LogType <p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * @param _logType <p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>日志检索的起始时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 00:00:00。返回结果中仅包含该时间点及之后的日志。</p>
                     * @return StartTime <p>日志检索的起始时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 00:00:00。返回结果中仅包含该时间点及之后的日志。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>日志检索的起始时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 00:00:00。返回结果中仅包含该时间点及之后的日志。</p>
                     * @param _startTime <p>日志检索的起始时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 00:00:00。返回结果中仅包含该时间点及之后的日志。</p>
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
                     * 获取<p>日志检索的结束时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 23:59:59。返回结果中仅包含该时间点及之前的日志。</p>
                     * @return EndTime <p>日志检索的结束时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 23:59:59。返回结果中仅包含该时间点及之前的日志。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>日志检索的结束时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 23:59:59。返回结果中仅包含该时间点及之前的日志。</p>
                     * @param _endTime <p>日志检索的结束时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 23:59:59。返回结果中仅包含该时间点及之前的日志。</p>
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
                     * 获取<p>设置日志筛选字段，过滤并下载符合条件的日志。</p>
                     * @return LogFilter <p>设置日志筛选字段，过滤并下载符合条件的日志。</p>
                     * 
                     */
                    std::vector<LogFilter> GetLogFilter() const;

                    /**
                     * 设置<p>设置日志筛选字段，过滤并下载符合条件的日志。</p>
                     * @param _logFilter <p>设置日志筛选字段，过滤并下载符合条件的日志。</p>
                     * 
                     */
                    void SetLogFilter(const std::vector<LogFilter>& _logFilter);

                    /**
                     * 判断参数 LogFilter 是否已赋值
                     * @return LogFilter 是否已赋值
                     * 
                     */
                    bool LogFilterHasBeenSet() const;

                    /**
                     * 获取<p>自定义下载的日志字段，多个字段以逗号分隔，例如 &quot;timestamp,operation,user&quot;。指定后仅下载所选字段的数据。不传该参数时，默认下载所有字段。</p>
                     * @return ColumnFilter <p>自定义下载的日志字段，多个字段以逗号分隔，例如 &quot;timestamp,operation,user&quot;。指定后仅下载所选字段的数据。不传该参数时，默认下载所有字段。</p>
                     * 
                     */
                    std::vector<std::string> GetColumnFilter() const;

                    /**
                     * 设置<p>自定义下载的日志字段，多个字段以逗号分隔，例如 &quot;timestamp,operation,user&quot;。指定后仅下载所选字段的数据。不传该参数时，默认下载所有字段。</p>
                     * @param _columnFilter <p>自定义下载的日志字段，多个字段以逗号分隔，例如 &quot;timestamp,operation,user&quot;。指定后仅下载所选字段的数据。不传该参数时，默认下载所有字段。</p>
                     * 
                     */
                    void SetColumnFilter(const std::vector<std::string>& _columnFilter);

                    /**
                     * 判断参数 ColumnFilter 是否已赋值
                     * @return ColumnFilter 是否已赋值
                     * 
                     */
                    bool ColumnFilterHasBeenSet() const;

                private:

                    /**
                     * <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>日志检索的起始时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 00:00:00。返回结果中仅包含该时间点及之后的日志。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>日志检索的结束时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 23:59:59。返回结果中仅包含该时间点及之前的日志。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>设置日志筛选字段，过滤并下载符合条件的日志。</p>
                     */
                    std::vector<LogFilter> m_logFilter;
                    bool m_logFilterHasBeenSet;

                    /**
                     * <p>自定义下载的日志字段，多个字段以逗号分隔，例如 &quot;timestamp,operation,user&quot;。指定后仅下载所选字段的数据。不传该参数时，默认下载所有字段。</p>
                     */
                    std::vector<std::string> m_columnFilter;
                    bool m_columnFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEEXPORTTASKREQUEST_H_
