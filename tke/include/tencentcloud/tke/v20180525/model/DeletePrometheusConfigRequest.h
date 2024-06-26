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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETEPROMETHEUSCONFIGREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETEPROMETHEUSCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeletePrometheusConfig请求参数结构体
                */
                class DeletePrometheusConfigRequest : public AbstractModel
                {
                public:
                    DeletePrometheusConfigRequest();
                    ~DeletePrometheusConfigRequest() = default;
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
                     * 获取要删除的ServiceMonitor名字列表
                     * @return ServiceMonitors 要删除的ServiceMonitor名字列表
                     * 
                     */
                    std::vector<std::string> GetServiceMonitors() const;

                    /**
                     * 设置要删除的ServiceMonitor名字列表
                     * @param _serviceMonitors 要删除的ServiceMonitor名字列表
                     * 
                     */
                    void SetServiceMonitors(const std::vector<std::string>& _serviceMonitors);

                    /**
                     * 判断参数 ServiceMonitors 是否已赋值
                     * @return ServiceMonitors 是否已赋值
                     * 
                     */
                    bool ServiceMonitorsHasBeenSet() const;

                    /**
                     * 获取要删除的PodMonitor名字列表
                     * @return PodMonitors 要删除的PodMonitor名字列表
                     * 
                     */
                    std::vector<std::string> GetPodMonitors() const;

                    /**
                     * 设置要删除的PodMonitor名字列表
                     * @param _podMonitors 要删除的PodMonitor名字列表
                     * 
                     */
                    void SetPodMonitors(const std::vector<std::string>& _podMonitors);

                    /**
                     * 判断参数 PodMonitors 是否已赋值
                     * @return PodMonitors 是否已赋值
                     * 
                     */
                    bool PodMonitorsHasBeenSet() const;

                    /**
                     * 获取要删除的RawJobs名字列表
                     * @return RawJobs 要删除的RawJobs名字列表
                     * 
                     */
                    std::vector<std::string> GetRawJobs() const;

                    /**
                     * 设置要删除的RawJobs名字列表
                     * @param _rawJobs 要删除的RawJobs名字列表
                     * 
                     */
                    void SetRawJobs(const std::vector<std::string>& _rawJobs);

                    /**
                     * 判断参数 RawJobs 是否已赋值
                     * @return RawJobs 是否已赋值
                     * 
                     */
                    bool RawJobsHasBeenSet() const;

                    /**
                     * 获取要删除的Probe名字列表
                     * @return Probes 要删除的Probe名字列表
                     * 
                     */
                    std::vector<std::string> GetProbes() const;

                    /**
                     * 设置要删除的Probe名字列表
                     * @param _probes 要删除的Probe名字列表
                     * 
                     */
                    void SetProbes(const std::vector<std::string>& _probes);

                    /**
                     * 判断参数 Probes 是否已赋值
                     * @return Probes 是否已赋值
                     * 
                     */
                    bool ProbesHasBeenSet() const;

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
                     * 要删除的ServiceMonitor名字列表
                     */
                    std::vector<std::string> m_serviceMonitors;
                    bool m_serviceMonitorsHasBeenSet;

                    /**
                     * 要删除的PodMonitor名字列表
                     */
                    std::vector<std::string> m_podMonitors;
                    bool m_podMonitorsHasBeenSet;

                    /**
                     * 要删除的RawJobs名字列表
                     */
                    std::vector<std::string> m_rawJobs;
                    bool m_rawJobsHasBeenSet;

                    /**
                     * 要删除的Probe名字列表
                     */
                    std::vector<std::string> m_probes;
                    bool m_probesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETEPROMETHEUSCONFIGREQUEST_H_
