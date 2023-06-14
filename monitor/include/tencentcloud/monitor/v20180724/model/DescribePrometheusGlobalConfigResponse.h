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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSGLOBALCONFIGRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSGLOBALCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusConfigItem.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusGlobalConfig返回参数结构体
                */
                class DescribePrometheusGlobalConfigResponse : public AbstractModel
                {
                public:
                    DescribePrometheusGlobalConfigResponse();
                    ~DescribePrometheusGlobalConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取配置内容
                     * @return Config 配置内容
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取ServiceMonitors列表以及对应targets信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceMonitors ServiceMonitors列表以及对应targets信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetServiceMonitors() const;

                    /**
                     * 判断参数 ServiceMonitors 是否已赋值
                     * @return ServiceMonitors 是否已赋值
                     * 
                     */
                    bool ServiceMonitorsHasBeenSet() const;

                    /**
                     * 获取PodMonitors列表以及对应targets信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodMonitors PodMonitors列表以及对应targets信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetPodMonitors() const;

                    /**
                     * 判断参数 PodMonitors 是否已赋值
                     * @return PodMonitors 是否已赋值
                     * 
                     */
                    bool PodMonitorsHasBeenSet() const;

                    /**
                     * 获取RawJobs列表以及对应targets信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RawJobs RawJobs列表以及对应targets信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetRawJobs() const;

                    /**
                     * 判断参数 RawJobs 是否已赋值
                     * @return RawJobs 是否已赋值
                     * 
                     */
                    bool RawJobsHasBeenSet() const;

                    /**
                     * 获取Probes列表以及对应targets信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Probes Probes列表以及对应targets信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetProbes() const;

                    /**
                     * 判断参数 Probes 是否已赋值
                     * @return Probes 是否已赋值
                     * 
                     */
                    bool ProbesHasBeenSet() const;

                private:

                    /**
                     * 配置内容
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * ServiceMonitors列表以及对应targets信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusConfigItem> m_serviceMonitors;
                    bool m_serviceMonitorsHasBeenSet;

                    /**
                     * PodMonitors列表以及对应targets信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusConfigItem> m_podMonitors;
                    bool m_podMonitorsHasBeenSet;

                    /**
                     * RawJobs列表以及对应targets信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusConfigItem> m_rawJobs;
                    bool m_rawJobsHasBeenSet;

                    /**
                     * Probes列表以及对应targets信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusConfigItem> m_probes;
                    bool m_probesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSGLOBALCONFIGRESPONSE_H_
