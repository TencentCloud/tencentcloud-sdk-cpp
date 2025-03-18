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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEMONITOR_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEMONITOR_H_

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
                class TemplateMonitor : public AbstractModel
                {
                public:
                    TemplateMonitor();
                    ~TemplateMonitor() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取pk
                     * @return MonitorId pk
                     * 
                     */
                    int64_t GetMonitorId() const;

                    /**
                     * 设置pk
                     * @param _monitorId pk
                     * 
                     */
                    void SetMonitorId(const int64_t& _monitorId);

                    /**
                     * 判断参数 MonitorId 是否已赋值
                     * @return MonitorId 是否已赋值
                     * 
                     */
                    bool MonitorIdHasBeenSet() const;

                    /**
                     * 获取监控指标ID
                     * @return MetricId 监控指标ID
                     * 
                     */
                    int64_t GetMetricId() const;

                    /**
                     * 设置监控指标ID
                     * @param _metricId 监控指标ID
                     * 
                     */
                    void SetMetricId(const int64_t& _metricId);

                    /**
                     * 判断参数 MetricId 是否已赋值
                     * @return MetricId 是否已赋值
                     * 
                     */
                    bool MetricIdHasBeenSet() const;

                    /**
                     * 获取监控指标对象类型ID
                     * @return ObjectTypeId 监控指标对象类型ID
                     * 
                     */
                    int64_t GetObjectTypeId() const;

                    /**
                     * 设置监控指标对象类型ID
                     * @param _objectTypeId 监控指标对象类型ID
                     * 
                     */
                    void SetObjectTypeId(const int64_t& _objectTypeId);

                    /**
                     * 判断参数 ObjectTypeId 是否已赋值
                     * @return ObjectTypeId 是否已赋值
                     * 
                     */
                    bool ObjectTypeIdHasBeenSet() const;

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

                private:

                    /**
                     * pk
                     */
                    int64_t m_monitorId;
                    bool m_monitorIdHasBeenSet;

                    /**
                     * 监控指标ID
                     */
                    int64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * 监控指标对象类型ID
                     */
                    int64_t m_objectTypeId;
                    bool m_objectTypeIdHasBeenSet;

                    /**
                     * 指标名称
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 中文指标
                     */
                    std::string m_metricChineseName;
                    bool m_metricChineseNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEMONITOR_H_
