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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPROMETHEUSCONFIGREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPROMETHEUSCONFIGREQUEST_H_

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
                * CreatePrometheusConfig请求参数结构体
                */
                class CreatePrometheusConfigRequest : public AbstractModel
                {
                public:
                    CreatePrometheusConfigRequest();
                    ~CreatePrometheusConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取集群类型
                     * @return ClusterType 集群类型
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型
                     * @param _clusterType 集群类型
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取ServiceMonitors配置
                     * @return ServiceMonitors ServiceMonitors配置
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetServiceMonitors() const;

                    /**
                     * 设置ServiceMonitors配置
                     * @param _serviceMonitors ServiceMonitors配置
                     * 
                     */
                    void SetServiceMonitors(const std::vector<PrometheusConfigItem>& _serviceMonitors);

                    /**
                     * 判断参数 ServiceMonitors 是否已赋值
                     * @return ServiceMonitors 是否已赋值
                     * 
                     */
                    bool ServiceMonitorsHasBeenSet() const;

                    /**
                     * 获取PodMonitors配置
                     * @return PodMonitors PodMonitors配置
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetPodMonitors() const;

                    /**
                     * 设置PodMonitors配置
                     * @param _podMonitors PodMonitors配置
                     * 
                     */
                    void SetPodMonitors(const std::vector<PrometheusConfigItem>& _podMonitors);

                    /**
                     * 判断参数 PodMonitors 是否已赋值
                     * @return PodMonitors 是否已赋值
                     * 
                     */
                    bool PodMonitorsHasBeenSet() const;

                    /**
                     * 获取prometheus原生Job配置
                     * @return RawJobs prometheus原生Job配置
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetRawJobs() const;

                    /**
                     * 设置prometheus原生Job配置
                     * @param _rawJobs prometheus原生Job配置
                     * 
                     */
                    void SetRawJobs(const std::vector<PrometheusConfigItem>& _rawJobs);

                    /**
                     * 判断参数 RawJobs 是否已赋值
                     * @return RawJobs 是否已赋值
                     * 
                     */
                    bool RawJobsHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 集群类型
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * ServiceMonitors配置
                     */
                    std::vector<PrometheusConfigItem> m_serviceMonitors;
                    bool m_serviceMonitorsHasBeenSet;

                    /**
                     * PodMonitors配置
                     */
                    std::vector<PrometheusConfigItem> m_podMonitors;
                    bool m_podMonitorsHasBeenSet;

                    /**
                     * prometheus原生Job配置
                     */
                    std::vector<PrometheusConfigItem> m_rawJobs;
                    bool m_rawJobsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPROMETHEUSCONFIGREQUEST_H_
