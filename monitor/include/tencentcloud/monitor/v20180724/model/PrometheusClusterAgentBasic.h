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
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
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
                     * 获取<p>集群类型。可填入tke、eks、tkeedge、tdcc、external，分别代表标准集群、弹性集群、边缘集群、注册集群 和外部集群</p>
                     * @return ClusterType <p>集群类型。可填入tke、eks、tkeedge、tdcc、external，分别代表标准集群、弹性集群、边缘集群、注册集群 和外部集群</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型。可填入tke、eks、tkeedge、tdcc、external，分别代表标准集群、弹性集群、边缘集群、注册集群 和外部集群</p>
                     * @param _clusterType <p>集群类型。可填入tke、eks、tkeedge、tdcc、external，分别代表标准集群、弹性集群、边缘集群、注册集群 和外部集群</p>
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
                     * 获取<p>集群 ID</p>
                     * @return ClusterId <p>集群 ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID</p>
                     * @param _clusterId <p>集群 ID</p>
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
                     * 获取<p>是否开启公网 CLB</p>
                     * @return EnableExternal <p>是否开启公网 CLB</p>
                     * 
                     */
                    bool GetEnableExternal() const;

                    /**
                     * 设置<p>是否开启公网 CLB</p>
                     * @param _enableExternal <p>是否开启公网 CLB</p>
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
                     * 获取<p>集群内部署组件的pod 配置</p>
                     * @return InClusterPodConfig <p>集群内部署组件的pod 配置</p>
                     * 
                     */
                    PrometheusClusterAgentPodConfig GetInClusterPodConfig() const;

                    /**
                     * 设置<p>集群内部署组件的pod 配置</p>
                     * @param _inClusterPodConfig <p>集群内部署组件的pod 配置</p>
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
                     * 获取<p>该集群采集的所有指标都会带上这些labels</p>
                     * @return ExternalLabels <p>该集群采集的所有指标都会带上这些labels</p>
                     * 
                     */
                    std::vector<Label> GetExternalLabels() const;

                    /**
                     * 设置<p>该集群采集的所有指标都会带上这些labels</p>
                     * @param _externalLabels <p>该集群采集的所有指标都会带上这些labels</p>
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
                     * 获取<p>是否安装默认采集 exporter 和采集配置</p>
                     * @return NotInstallBasicScrape <p>是否安装默认采集 exporter 和采集配置</p>
                     * 
                     */
                    bool GetNotInstallBasicScrape() const;

                    /**
                     * 设置<p>是否安装默认采集 exporter 和采集配置</p>
                     * @param _notInstallBasicScrape <p>是否安装默认采集 exporter 和采集配置</p>
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
                     * 获取<p>是否安装采集配置，true 只安装采集 exporter 不会安装采集配置，false 会同时安装采集配置</p>
                     * @return NotScrape <p>是否安装采集配置，true 只安装采集 exporter 不会安装采集配置，false 会同时安装采集配置</p>
                     * 
                     */
                    bool GetNotScrape() const;

                    /**
                     * 设置<p>是否安装采集配置，true 只安装采集 exporter 不会安装采集配置，false 会同时安装采集配置</p>
                     * @param _notScrape <p>是否安装采集配置，true 只安装采集 exporter 不会安装采集配置，false 会同时安装采集配置</p>
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
                     * 获取<p>是否丢弃所有指标，true 代表丢弃所有指标，false 代表采集默认指标</p>
                     * @return DropAll <p>是否丢弃所有指标，true 代表丢弃所有指标，false 代表采集默认指标</p>
                     * 
                     */
                    bool GetDropAll() const;

                    /**
                     * 设置<p>是否丢弃所有指标，true 代表丢弃所有指标，false 代表采集默认指标</p>
                     * @param _dropAll <p>是否丢弃所有指标，true 代表丢弃所有指标，false 代表采集默认指标</p>
                     * 
                     */
                    void SetDropAll(const bool& _dropAll);

                    /**
                     * 判断参数 DropAll 是否已赋值
                     * @return DropAll 是否已赋值
                     * 
                     */
                    bool DropAllHasBeenSet() const;

                    /**
                     * 获取<p>是否采集全部指标</p><p>枚举值：</p><ul><li>false： 不采集</li><li>true： 采集</li></ul><p>默认值：false</p>
                     * @return CollectAll <p>是否采集全部指标</p><p>枚举值：</p><ul><li>false： 不采集</li><li>true： 采集</li></ul><p>默认值：false</p>
                     * 
                     */
                    bool GetCollectAll() const;

                    /**
                     * 设置<p>是否采集全部指标</p><p>枚举值：</p><ul><li>false： 不采集</li><li>true： 采集</li></ul><p>默认值：false</p>
                     * @param _collectAll <p>是否采集全部指标</p><p>枚举值：</p><ul><li>false： 不采集</li><li>true： 采集</li></ul><p>默认值：false</p>
                     * 
                     */
                    void SetCollectAll(const bool& _collectAll);

                    /**
                     * 判断参数 CollectAll 是否已赋值
                     * @return CollectAll 是否已赋值
                     * 
                     */
                    bool CollectAllHasBeenSet() const;

                    /**
                     * 获取<p>是否开启默认预聚合规则</p>
                     * @return OpenDefaultRecord <p>是否开启默认预聚合规则</p>
                     * 
                     */
                    bool GetOpenDefaultRecord() const;

                    /**
                     * 设置<p>是否开启默认预聚合规则</p>
                     * @param _openDefaultRecord <p>是否开启默认预聚合规则</p>
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
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>集群类型。可填入tke、eks、tkeedge、tdcc、external，分别代表标准集群、弹性集群、边缘集群、注册集群 和外部集群</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>集群 ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>是否开启公网 CLB</p>
                     */
                    bool m_enableExternal;
                    bool m_enableExternalHasBeenSet;

                    /**
                     * <p>集群内部署组件的pod 配置</p>
                     */
                    PrometheusClusterAgentPodConfig m_inClusterPodConfig;
                    bool m_inClusterPodConfigHasBeenSet;

                    /**
                     * <p>该集群采集的所有指标都会带上这些labels</p>
                     */
                    std::vector<Label> m_externalLabels;
                    bool m_externalLabelsHasBeenSet;

                    /**
                     * <p>是否安装默认采集 exporter 和采集配置</p>
                     */
                    bool m_notInstallBasicScrape;
                    bool m_notInstallBasicScrapeHasBeenSet;

                    /**
                     * <p>是否安装采集配置，true 只安装采集 exporter 不会安装采集配置，false 会同时安装采集配置</p>
                     */
                    bool m_notScrape;
                    bool m_notScrapeHasBeenSet;

                    /**
                     * <p>是否丢弃所有指标，true 代表丢弃所有指标，false 代表采集默认指标</p>
                     */
                    bool m_dropAll;
                    bool m_dropAllHasBeenSet;

                    /**
                     * <p>是否采集全部指标</p><p>枚举值：</p><ul><li>false： 不采集</li><li>true： 采集</li></ul><p>默认值：false</p>
                     */
                    bool m_collectAll;
                    bool m_collectAllHasBeenSet;

                    /**
                     * <p>是否开启默认预聚合规则</p>
                     */
                    bool m_openDefaultRecord;
                    bool m_openDefaultRecordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERAGENTBASIC_H_
