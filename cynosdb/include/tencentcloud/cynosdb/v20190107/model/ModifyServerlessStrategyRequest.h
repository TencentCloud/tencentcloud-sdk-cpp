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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSERVERLESSSTRATEGYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSERVERLESSSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyServerlessStrategy请求参数结构体
                */
                class ModifyServerlessStrategyRequest : public AbstractModel
                {
                public:
                    ModifyServerlessStrategyRequest();
                    ~ModifyServerlessStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>serverless集群id</p>
                     * @return ClusterId <p>serverless集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>serverless集群id</p>
                     * @param _clusterId <p>serverless集群id</p>
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
                     * 获取<p>集群是否自动暂停，可选范围</p><li>yes</li><li>no</li>
                     * @return AutoPause <p>集群是否自动暂停，可选范围</p><li>yes</li><li>no</li>
                     * 
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 设置<p>集群是否自动暂停，可选范围</p><li>yes</li><li>no</li>
                     * @param _autoPause <p>集群是否自动暂停，可选范围</p><li>yes</li><li>no</li>
                     * 
                     */
                    void SetAutoPause(const std::string& _autoPause);

                    /**
                     * 判断参数 AutoPause 是否已赋值
                     * @return AutoPause 是否已赋值
                     * 
                     */
                    bool AutoPauseHasBeenSet() const;

                    /**
                     * 获取<p>集群自动暂停的延迟，单位秒，可选范围[600,691200]，默认600</p>
                     * @return AutoPauseDelay <p>集群自动暂停的延迟，单位秒，可选范围[600,691200]，默认600</p>
                     * 
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 设置<p>集群自动暂停的延迟，单位秒，可选范围[600,691200]，默认600</p>
                     * @param _autoPauseDelay <p>集群自动暂停的延迟，单位秒，可选范围[600,691200]，默认600</p>
                     * 
                     */
                    void SetAutoPauseDelay(const int64_t& _autoPauseDelay);

                    /**
                     * 判断参数 AutoPauseDelay 是否已赋值
                     * @return AutoPauseDelay 是否已赋值
                     * 
                     */
                    bool AutoPauseDelayHasBeenSet() const;

                    /**
                     * 获取<p>该参数暂时无效</p>
                     * @return AutoScaleUpDelay <p>该参数暂时无效</p>
                     * 
                     */
                    int64_t GetAutoScaleUpDelay() const;

                    /**
                     * 设置<p>该参数暂时无效</p>
                     * @param _autoScaleUpDelay <p>该参数暂时无效</p>
                     * 
                     */
                    void SetAutoScaleUpDelay(const int64_t& _autoScaleUpDelay);

                    /**
                     * 判断参数 AutoScaleUpDelay 是否已赋值
                     * @return AutoScaleUpDelay 是否已赋值
                     * 
                     */
                    bool AutoScaleUpDelayHasBeenSet() const;

                    /**
                     * 获取<p>该参数暂时无效</p>
                     * @return AutoScaleDownDelay <p>该参数暂时无效</p>
                     * 
                     */
                    int64_t GetAutoScaleDownDelay() const;

                    /**
                     * 设置<p>该参数暂时无效</p>
                     * @param _autoScaleDownDelay <p>该参数暂时无效</p>
                     * 
                     */
                    void SetAutoScaleDownDelay(const int64_t& _autoScaleDownDelay);

                    /**
                     * 判断参数 AutoScaleDownDelay 是否已赋值
                     * @return AutoScaleDownDelay 是否已赋值
                     * 
                     */
                    bool AutoScaleDownDelayHasBeenSet() const;

                    /**
                     * 获取<p>cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @return MinCpu <p>cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置<p>cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @param _minCpu <p>cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * 
                     */
                    void SetMinCpu(const double& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     * 
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取<p>cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @return MaxCpu <p>cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置<p>cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @param _maxCpu <p>cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * 
                     */
                    void SetMaxCpu(const double& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
                     * 
                     */
                    bool MaxCpuHasBeenSet() const;

                    /**
                     * 获取<p>只读实例cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @return MinRoCpu <p>只读实例cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * 
                     */
                    double GetMinRoCpu() const;

                    /**
                     * 设置<p>只读实例cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @param _minRoCpu <p>只读实例cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * 
                     */
                    void SetMinRoCpu(const double& _minRoCpu);

                    /**
                     * 判断参数 MinRoCpu 是否已赋值
                     * @return MinRoCpu 是否已赋值
                     * 
                     */
                    bool MinRoCpuHasBeenSet() const;

                    /**
                     * 获取<p>只读cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @return MaxRoCpu <p>只读cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * 
                     */
                    double GetMaxRoCpu() const;

                    /**
                     * 设置<p>只读cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @param _maxRoCpu <p>只读cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * 
                     */
                    void SetMaxRoCpu(const double& _maxRoCpu);

                    /**
                     * 判断参数 MaxRoCpu 是否已赋值
                     * @return MaxRoCpu 是否已赋值
                     * 
                     */
                    bool MaxRoCpuHasBeenSet() const;

                    /**
                     * 获取<p>只读节点最小个数</p>
                     * @return MinRoCount <p>只读节点最小个数</p>
                     * 
                     */
                    int64_t GetMinRoCount() const;

                    /**
                     * 设置<p>只读节点最小个数</p>
                     * @param _minRoCount <p>只读节点最小个数</p>
                     * 
                     */
                    void SetMinRoCount(const int64_t& _minRoCount);

                    /**
                     * 判断参数 MinRoCount 是否已赋值
                     * @return MinRoCount 是否已赋值
                     * 
                     */
                    bool MinRoCountHasBeenSet() const;

                    /**
                     * 获取<p>只读节点最大个数</p>
                     * @return MaxRoCount <p>只读节点最大个数</p>
                     * 
                     */
                    int64_t GetMaxRoCount() const;

                    /**
                     * 设置<p>只读节点最大个数</p>
                     * @param _maxRoCount <p>只读节点最大个数</p>
                     * 
                     */
                    void SetMaxRoCount(const int64_t& _maxRoCount);

                    /**
                     * 判断参数 MaxRoCount 是否已赋值
                     * @return MaxRoCount 是否已赋值
                     * 
                     */
                    bool MaxRoCountHasBeenSet() const;

                    /**
                     * 获取<p>是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes</p>
                     * @return AutoArchive <p>是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes</p>
                     * 
                     */
                    std::string GetAutoArchive() const;

                    /**
                     * 设置<p>是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes</p>
                     * @param _autoArchive <p>是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes</p>
                     * 
                     */
                    void SetAutoArchive(const std::string& _autoArchive);

                    /**
                     * 判断参数 AutoArchive 是否已赋值
                     * @return AutoArchive 是否已赋值
                     * 
                     */
                    bool AutoArchiveHasBeenSet() const;

                    /**
                     * 获取<p>升级类型。 默认值：upgradeImmediate。 可选值： upgradeImmediate：立即完成修改 upgradeInMaintain：在维护时间窗口内完成修改</p>
                     * @return UpgradeType <p>升级类型。 默认值：upgradeImmediate。 可选值： upgradeImmediate：立即完成修改 upgradeInMaintain：在维护时间窗口内完成修改</p>
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置<p>升级类型。 默认值：upgradeImmediate。 可选值： upgradeImmediate：立即完成修改 upgradeInMaintain：在维护时间窗口内完成修改</p>
                     * @param _upgradeType <p>升级类型。 默认值：upgradeImmediate。 可选值： upgradeImmediate：立即完成修改 upgradeInMaintain：在维护时间窗口内完成修改</p>
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取<p>新增的只读实例需要绑定的安全组列表。仅仅针对于在这次调整策略过程中新产生的只读实例绑定安全组，存量的实例不绑定。</p>
                     * @return SecurityGroupIdsForNewRo <p>新增的只读实例需要绑定的安全组列表。仅仅针对于在这次调整策略过程中新产生的只读实例绑定安全组，存量的实例不绑定。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIdsForNewRo() const;

                    /**
                     * 设置<p>新增的只读实例需要绑定的安全组列表。仅仅针对于在这次调整策略过程中新产生的只读实例绑定安全组，存量的实例不绑定。</p>
                     * @param _securityGroupIdsForNewRo <p>新增的只读实例需要绑定的安全组列表。仅仅针对于在这次调整策略过程中新产生的只读实例绑定安全组，存量的实例不绑定。</p>
                     * 
                     */
                    void SetSecurityGroupIdsForNewRo(const std::vector<std::string>& _securityGroupIdsForNewRo);

                    /**
                     * 判断参数 SecurityGroupIdsForNewRo 是否已赋值
                     * @return SecurityGroupIdsForNewRo 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsForNewRoHasBeenSet() const;

                private:

                    /**
                     * <p>serverless集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群是否自动暂停，可选范围</p><li>yes</li><li>no</li>
                     */
                    std::string m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * <p>集群自动暂停的延迟，单位秒，可选范围[600,691200]，默认600</p>
                     */
                    int64_t m_autoPauseDelay;
                    bool m_autoPauseDelayHasBeenSet;

                    /**
                     * <p>该参数暂时无效</p>
                     */
                    int64_t m_autoScaleUpDelay;
                    bool m_autoScaleUpDelayHasBeenSet;

                    /**
                     * <p>该参数暂时无效</p>
                     */
                    int64_t m_autoScaleDownDelay;
                    bool m_autoScaleDownDelayHasBeenSet;

                    /**
                     * <p>cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * <p>cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * <p>只读实例cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     */
                    double m_minRoCpu;
                    bool m_minRoCpuHasBeenSet;

                    /**
                     * <p>只读cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     */
                    double m_maxRoCpu;
                    bool m_maxRoCpuHasBeenSet;

                    /**
                     * <p>只读节点最小个数</p>
                     */
                    int64_t m_minRoCount;
                    bool m_minRoCountHasBeenSet;

                    /**
                     * <p>只读节点最大个数</p>
                     */
                    int64_t m_maxRoCount;
                    bool m_maxRoCountHasBeenSet;

                    /**
                     * <p>是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes</p>
                     */
                    std::string m_autoArchive;
                    bool m_autoArchiveHasBeenSet;

                    /**
                     * <p>升级类型。 默认值：upgradeImmediate。 可选值： upgradeImmediate：立即完成修改 upgradeInMaintain：在维护时间窗口内完成修改</p>
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * <p>新增的只读实例需要绑定的安全组列表。仅仅针对于在这次调整策略过程中新产生的只读实例绑定安全组，存量的实例不绑定。</p>
                     */
                    std::vector<std::string> m_securityGroupIdsForNewRo;
                    bool m_securityGroupIdsForNewRoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSERVERLESSSTRATEGYREQUEST_H_
