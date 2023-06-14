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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMMETRICSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMMETRICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlarmMetrics请求参数结构体
                */
                class DescribeAlarmMetricsRequest : public AbstractModel
                {
                public:
                    DescribeAlarmMetricsRequest();
                    ~DescribeAlarmMetricsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取固定值，为"monitor"
                     * @return Module 固定值，为"monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定值，为"monitor"
                     * @param _module 固定值，为"monitor"
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取监控类型过滤 "MT_QCE"=云产品监控
                     * @return MonitorType 监控类型过滤 "MT_QCE"=云产品监控
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置监控类型过滤 "MT_QCE"=云产品监控
                     * @param _monitorType 监控类型过滤 "MT_QCE"=云产品监控
                     * 
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取告警策略类型，由 DescribeAllNamespaces 获得，例如 cvm_device
                     * @return Namespace 告警策略类型，由 DescribeAllNamespaces 获得，例如 cvm_device
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置告警策略类型，由 DescribeAllNamespaces 获得，例如 cvm_device
                     * @param _namespace 告警策略类型，由 DescribeAllNamespaces 获得，例如 cvm_device
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * 固定值，为"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 监控类型过滤 "MT_QCE"=云产品监控
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 告警策略类型，由 DescribeAllNamespaces 获得，例如 cvm_device
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMMETRICSREQUEST_H_
