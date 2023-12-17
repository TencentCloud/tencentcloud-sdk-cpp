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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSCONFIGRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSCONFIGRESPONSE_H_

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
                * DescribePrometheusConfig返回参数结构体
                */
                class DescribePrometheusConfigResponse : public AbstractModel
                {
                public:
                    DescribePrometheusConfigResponse();
                    ~DescribePrometheusConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取全局配置
                     * @return Config 全局配置
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
                     * 获取ServiceMonitor配置
                     * @return ServiceMonitors ServiceMonitor配置
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
                     * 获取PodMonitor配置
                     * @return PodMonitors PodMonitor配置
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
                     * 获取原生Job
                     * @return RawJobs 原生Job
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
                     * 获取Probes
                     * @return Probes Probes
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetProbes() const;

                    /**
                     * 判断参数 Probes 是否已赋值
                     * @return Probes 是否已赋值
                     * 
                     */
                    bool ProbesHasBeenSet() const;

                    /**
                     * 获取实例组件是否需要升级
                     * @return ImageNeedUpdate 实例组件是否需要升级
                     * 
                     */
                    bool GetImageNeedUpdate() const;

                    /**
                     * 判断参数 ImageNeedUpdate 是否已赋值
                     * @return ImageNeedUpdate 是否已赋值
                     * 
                     */
                    bool ImageNeedUpdateHasBeenSet() const;

                private:

                    /**
                     * 全局配置
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * ServiceMonitor配置
                     */
                    std::vector<PrometheusConfigItem> m_serviceMonitors;
                    bool m_serviceMonitorsHasBeenSet;

                    /**
                     * PodMonitor配置
                     */
                    std::vector<PrometheusConfigItem> m_podMonitors;
                    bool m_podMonitorsHasBeenSet;

                    /**
                     * 原生Job
                     */
                    std::vector<PrometheusConfigItem> m_rawJobs;
                    bool m_rawJobsHasBeenSet;

                    /**
                     * Probes
                     */
                    std::vector<PrometheusConfigItem> m_probes;
                    bool m_probesHasBeenSet;

                    /**
                     * 实例组件是否需要升级
                     */
                    bool m_imageNeedUpdate;
                    bool m_imageNeedUpdateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSCONFIGRESPONSE_H_
