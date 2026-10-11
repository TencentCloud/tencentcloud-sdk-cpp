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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPROMETHEUSCONFIGREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPROMETHEUSCONFIGREQUEST_H_

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
                * ModifyPrometheusConfig请求参数结构体
                */
                class ModifyPrometheusConfigRequest : public AbstractModel
                {
                public:
                    ModifyPrometheusConfigRequest();
                    ~ModifyPrometheusConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
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
                     * 获取<p>集群类型</p>
                     * @return ClusterType <p>集群类型</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型</p>
                     * @param _clusterType <p>集群类型</p>
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
                     * 获取<p>集群id</p>
                     * @return ClusterId <p>集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterId <p>集群id</p>
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
                     * 获取<p>ServiceMonitors配置</p>
                     * @return ServiceMonitors <p>ServiceMonitors配置</p>
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetServiceMonitors() const;

                    /**
                     * 设置<p>ServiceMonitors配置</p>
                     * @param _serviceMonitors <p>ServiceMonitors配置</p>
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
                     * 获取<p>PodMonitors配置</p>
                     * @return PodMonitors <p>PodMonitors配置</p>
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetPodMonitors() const;

                    /**
                     * 设置<p>PodMonitors配置</p>
                     * @param _podMonitors <p>PodMonitors配置</p>
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
                     * 获取<p>prometheus原生Job配置</p>
                     * @return RawJobs <p>prometheus原生Job配置</p>
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetRawJobs() const;

                    /**
                     * 设置<p>prometheus原生Job配置</p>
                     * @param _rawJobs <p>prometheus原生Job配置</p>
                     * 
                     */
                    void SetRawJobs(const std::vector<PrometheusConfigItem>& _rawJobs);

                    /**
                     * 判断参数 RawJobs 是否已赋值
                     * @return RawJobs 是否已赋值
                     * 
                     */
                    bool RawJobsHasBeenSet() const;

                    /**
                     * 获取<p>0: 更新实例组件镜像版本；<br>1: 不更新实例组件镜像版本</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @return UpdateImage <p>0: 更新实例组件镜像版本；<br>1: 不更新实例组件镜像版本</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @deprecated
                     */
                    int64_t GetUpdateImage() const;

                    /**
                     * 设置<p>0: 更新实例组件镜像版本；<br>1: 不更新实例组件镜像版本</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @param _updateImage <p>0: 更新实例组件镜像版本；<br>1: 不更新实例组件镜像版本</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @deprecated
                     */
                    void SetUpdateImage(const int64_t& _updateImage);

                    /**
                     * 判断参数 UpdateImage 是否已赋值
                     * @return UpdateImage 是否已赋值
                     * @deprecated
                     */
                    bool UpdateImageHasBeenSet() const;

                private:

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>集群类型</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>ServiceMonitors配置</p>
                     */
                    std::vector<PrometheusConfigItem> m_serviceMonitors;
                    bool m_serviceMonitorsHasBeenSet;

                    /**
                     * <p>PodMonitors配置</p>
                     */
                    std::vector<PrometheusConfigItem> m_podMonitors;
                    bool m_podMonitorsHasBeenSet;

                    /**
                     * <p>prometheus原生Job配置</p>
                     */
                    std::vector<PrometheusConfigItem> m_rawJobs;
                    bool m_rawJobsHasBeenSet;

                    /**
                     * <p>0: 更新实例组件镜像版本；<br>1: 不更新实例组件镜像版本</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     */
                    int64_t m_updateImage;
                    bool m_updateImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPROMETHEUSCONFIGREQUEST_H_
