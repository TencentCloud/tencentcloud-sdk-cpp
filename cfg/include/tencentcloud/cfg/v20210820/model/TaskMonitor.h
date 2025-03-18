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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKMONITOR_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKMONITOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 监控指标
                */
                class TaskMonitor : public AbstractModel
                {
                public:
                    TaskMonitor();
                    ~TaskMonitor() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取演练监控指标ID
                     * @return TaskMonitorId 演练监控指标ID
                     * 
                     */
                    int64_t GetTaskMonitorId() const;

                    /**
                     * 设置演练监控指标ID
                     * @param _taskMonitorId 演练监控指标ID
                     * 
                     */
                    void SetTaskMonitorId(const int64_t& _taskMonitorId);

                    /**
                     * 判断参数 TaskMonitorId 是否已赋值
                     * @return TaskMonitorId 是否已赋值
                     * 
                     */
                    bool TaskMonitorIdHasBeenSet() const;

                    /**
                     * 获取监控指标ID
                     * @return MetricId 监控指标ID
                     * 
                     */
                    uint64_t GetMetricId() const;

                    /**
                     * 设置监控指标ID
                     * @param _metricId 监控指标ID
                     * 
                     */
                    void SetMetricId(const uint64_t& _metricId);

                    /**
                     * 判断参数 MetricId 是否已赋值
                     * @return MetricId 是否已赋值
                     * 
                     */
                    bool MetricIdHasBeenSet() const;

                    /**
                     * 获取监控指标对象类型ID
                     * @return TaskMonitorObjectTypeId 监控指标对象类型ID
                     * 
                     */
                    int64_t GetTaskMonitorObjectTypeId() const;

                    /**
                     * 设置监控指标对象类型ID
                     * @param _taskMonitorObjectTypeId 监控指标对象类型ID
                     * 
                     */
                    void SetTaskMonitorObjectTypeId(const int64_t& _taskMonitorObjectTypeId);

                    /**
                     * 判断参数 TaskMonitorObjectTypeId 是否已赋值
                     * @return TaskMonitorObjectTypeId 是否已赋值
                     * 
                     */
                    bool TaskMonitorObjectTypeIdHasBeenSet() const;

                    /**
                     * 获取指标名称
                     * @return MetricName 指标名称
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名称
                     * @param _metricName 指标名称
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取实例ID列表
                     * @return InstancesIds 实例ID列表
                     * 
                     */
                    std::vector<std::string> GetInstancesIds() const;

                    /**
                     * 设置实例ID列表
                     * @param _instancesIds 实例ID列表
                     * 
                     */
                    void SetInstancesIds(const std::vector<std::string>& _instancesIds);

                    /**
                     * 判断参数 InstancesIds 是否已赋值
                     * @return InstancesIds 是否已赋值
                     * 
                     */
                    bool InstancesIdsHasBeenSet() const;

                    /**
                     * 获取中文指标
                     * @return MetricChineseName 中文指标
                     * 
                     */
                    std::string GetMetricChineseName() const;

                    /**
                     * 设置中文指标
                     * @param _metricChineseName 中文指标
                     * 
                     */
                    void SetMetricChineseName(const std::string& _metricChineseName);

                    /**
                     * 判断参数 MetricChineseName 是否已赋值
                     * @return MetricChineseName 是否已赋值
                     * 
                     */
                    bool MetricChineseNameHasBeenSet() const;

                    /**
                     * 获取单位
                     * @return Unit 单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置单位
                     * @param _unit 单位
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                private:

                    /**
                     * 演练监控指标ID
                     */
                    int64_t m_taskMonitorId;
                    bool m_taskMonitorIdHasBeenSet;

                    /**
                     * 监控指标ID
                     */
                    uint64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * 监控指标对象类型ID
                     */
                    int64_t m_taskMonitorObjectTypeId;
                    bool m_taskMonitorObjectTypeIdHasBeenSet;

                    /**
                     * 指标名称
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 实例ID列表
                     */
                    std::vector<std::string> m_instancesIds;
                    bool m_instancesIdsHasBeenSet;

                    /**
                     * 中文指标
                     */
                    std::string m_metricChineseName;
                    bool m_metricChineseNameHasBeenSet;

                    /**
                     * 单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKMONITOR_H_
