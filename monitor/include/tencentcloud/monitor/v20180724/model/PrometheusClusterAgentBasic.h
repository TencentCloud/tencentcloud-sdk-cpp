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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERAGENTBASIC_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERAGENTBASIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusClusterAgentPodConfig.h>
#include <tencentcloud/monitor/v20180724/model/Label.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 与腾讯云可观测平台融合托管 Prometheus 实例，关联集群基础信息
                */
                class PrometheusClusterAgentBasic : public AbstractModel
                {
                public:
                    PrometheusClusterAgentBasic();
                    ~PrometheusClusterAgentBasic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return Region 集群ID
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置集群ID
                     * @param _region 集群ID
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取集群类型。可填入tke、eks、tkeedge、tdcc，分别代表标准集群、弹性集群、边缘集群、注册集群
                     * @return ClusterType 集群类型。可填入tke、eks、tkeedge、tdcc，分别代表标准集群、弹性集群、边缘集群、注册集群
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型。可填入tke、eks、tkeedge、tdcc，分别代表标准集群、弹性集群、边缘集群、注册集群
                     * @param _clusterType 集群类型。可填入tke、eks、tkeedge、tdcc，分别代表标准集群、弹性集群、边缘集群、注册集群
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
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取是否开启公网CLB
                     * @return EnableExternal 是否开启公网CLB
                     * 
                     */
                    bool GetEnableExternal() const;

                    /**
                     * 设置是否开启公网CLB
                     * @param _enableExternal 是否开启公网CLB
                     * 
                     */
                    void SetEnableExternal(const bool& _enableExternal);

                    /**
                     * 判断参数 EnableExternal 是否已赋值
                     * @return EnableExternal 是否已赋值
                     * 
                     */
                    bool EnableExternalHasBeenSet() const;

                    /**
                     * 获取集群内部署组件的pod配置
                     * @return InClusterPodConfig 集群内部署组件的pod配置
                     * 
                     */
                    PrometheusClusterAgentPodConfig GetInClusterPodConfig() const;

                    /**
                     * 设置集群内部署组件的pod配置
                     * @param _inClusterPodConfig 集群内部署组件的pod配置
                     * 
                     */
                    void SetInClusterPodConfig(const PrometheusClusterAgentPodConfig& _inClusterPodConfig);

                    /**
                     * 判断参数 InClusterPodConfig 是否已赋值
                     * @return InClusterPodConfig 是否已赋值
                     * 
                     */
                    bool InClusterPodConfigHasBeenSet() const;

                    /**
                     * 获取该集群采集的所有指标都会带上这些labels
                     * @return ExternalLabels 该集群采集的所有指标都会带上这些labels
                     * 
                     */
                    std::vector<Label> GetExternalLabels() const;

                    /**
                     * 设置该集群采集的所有指标都会带上这些labels
                     * @param _externalLabels 该集群采集的所有指标都会带上这些labels
                     * 
                     */
                    void SetExternalLabels(const std::vector<Label>& _externalLabels);

                    /**
                     * 判断参数 ExternalLabels 是否已赋值
                     * @return ExternalLabels 是否已赋值
                     * 
                     */
                    bool ExternalLabelsHasBeenSet() const;

                    /**
                     * 获取是否安装默认采集配置
                     * @return NotInstallBasicScrape 是否安装默认采集配置
                     * 
                     */
                    bool GetNotInstallBasicScrape() const;

                    /**
                     * 设置是否安装默认采集配置
                     * @param _notInstallBasicScrape 是否安装默认采集配置
                     * 
                     */
                    void SetNotInstallBasicScrape(const bool& _notInstallBasicScrape);

                    /**
                     * 判断参数 NotInstallBasicScrape 是否已赋值
                     * @return NotInstallBasicScrape 是否已赋值
                     * 
                     */
                    bool NotInstallBasicScrapeHasBeenSet() const;

                    /**
                     * 获取是否采集指标，true代表drop所有指标，false代表采集默认指标
                     * @return NotScrape 是否采集指标，true代表drop所有指标，false代表采集默认指标
                     * 
                     */
                    bool GetNotScrape() const;

                    /**
                     * 设置是否采集指标，true代表drop所有指标，false代表采集默认指标
                     * @param _notScrape 是否采集指标，true代表drop所有指标，false代表采集默认指标
                     * 
                     */
                    void SetNotScrape(const bool& _notScrape);

                    /**
                     * 判断参数 NotScrape 是否已赋值
                     * @return NotScrape 是否已赋值
                     * 
                     */
                    bool NotScrapeHasBeenSet() const;

                    /**
                     * 获取是否开启默认预聚合规则
                     * @return OpenDefaultRecord 是否开启默认预聚合规则
                     * 
                     */
                    bool GetOpenDefaultRecord() const;

                    /**
                     * 设置是否开启默认预聚合规则
                     * @param _openDefaultRecord 是否开启默认预聚合规则
                     * 
                     */
                    void SetOpenDefaultRecord(const bool& _openDefaultRecord);

                    /**
                     * 判断参数 OpenDefaultRecord 是否已赋值
                     * @return OpenDefaultRecord 是否已赋值
                     * 
                     */
                    bool OpenDefaultRecordHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 集群类型。可填入tke、eks、tkeedge、tdcc，分别代表标准集群、弹性集群、边缘集群、注册集群
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 是否开启公网CLB
                     */
                    bool m_enableExternal;
                    bool m_enableExternalHasBeenSet;

                    /**
                     * 集群内部署组件的pod配置
                     */
                    PrometheusClusterAgentPodConfig m_inClusterPodConfig;
                    bool m_inClusterPodConfigHasBeenSet;

                    /**
                     * 该集群采集的所有指标都会带上这些labels
                     */
                    std::vector<Label> m_externalLabels;
                    bool m_externalLabelsHasBeenSet;

                    /**
                     * 是否安装默认采集配置
                     */
                    bool m_notInstallBasicScrape;
                    bool m_notInstallBasicScrapeHasBeenSet;

                    /**
                     * 是否采集指标，true代表drop所有指标，false代表采集默认指标
                     */
                    bool m_notScrape;
                    bool m_notScrapeHasBeenSet;

                    /**
                     * 是否开启默认预聚合规则
                     */
                    bool m_openDefaultRecord;
                    bool m_openDefaultRecordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERAGENTBASIC_H_
