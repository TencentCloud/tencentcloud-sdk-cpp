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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBRESOURCEUSAGEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBRESOURCEUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBResourceUsage请求参数结构体
                */
                class DescribeDBResourceUsageRequest : public AbstractModel
                {
                public:
                    DescribeDBResourceUsageRequest();
                    ~DescribeDBResourceUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如：tdsql-ow728lmc。
                     * @return InstanceId 实例 ID，形如：tdsql-ow728lmc。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如：tdsql-ow728lmc。
                     * @param InstanceId 实例 ID，形如：tdsql-ow728lmc。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取开始日期，格式yyyy-mm-dd
                     * @return StartTime 开始日期，格式yyyy-mm-dd
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始日期，格式yyyy-mm-dd
                     * @param StartTime 开始日期，格式yyyy-mm-dd
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束日期，格式yyyy-mm-dd
                     * @return EndTime 结束日期，格式yyyy-mm-dd
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束日期，格式yyyy-mm-dd
                     * @param EndTime 结束日期，格式yyyy-mm-dd
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取拉取的指标名称，支持的值为：data_disk_available,binlog_disk_available,mem_available,cpu_usage_rate
                     * @return MetricName 拉取的指标名称，支持的值为：data_disk_available,binlog_disk_available,mem_available,cpu_usage_rate
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置拉取的指标名称，支持的值为：data_disk_available,binlog_disk_available,mem_available,cpu_usage_rate
                     * @param MetricName 拉取的指标名称，支持的值为：data_disk_available,binlog_disk_available,mem_available,cpu_usage_rate
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如：tdsql-ow728lmc。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始日期，格式yyyy-mm-dd
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束日期，格式yyyy-mm-dd
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 拉取的指标名称，支持的值为：data_disk_available,binlog_disk_available,mem_available,cpu_usage_rate
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBRESOURCEUSAGEREQUEST_H_
