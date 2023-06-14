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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERAGENTPODCONFIG_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERAGENTPODCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Label.h>
#include <tencentcloud/monitor/v20180724/model/Toleration.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 关联集群时在集群内部署组件的pod额外配置
                */
                class PrometheusClusterAgentPodConfig : public AbstractModel
                {
                public:
                    PrometheusClusterAgentPodConfig();
                    ~PrometheusClusterAgentPodConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否使用HostNetWork
                     * @return HostNet 是否使用HostNetWork
                     * 
                     */
                    bool GetHostNet() const;

                    /**
                     * 设置是否使用HostNetWork
                     * @param _hostNet 是否使用HostNetWork
                     * 
                     */
                    void SetHostNet(const bool& _hostNet);

                    /**
                     * 判断参数 HostNet 是否已赋值
                     * @return HostNet 是否已赋值
                     * 
                     */
                    bool HostNetHasBeenSet() const;

                    /**
                     * 获取指定pod运行节点
                     * @return NodeSelector 指定pod运行节点
                     * 
                     */
                    std::vector<Label> GetNodeSelector() const;

                    /**
                     * 设置指定pod运行节点
                     * @param _nodeSelector 指定pod运行节点
                     * 
                     */
                    void SetNodeSelector(const std::vector<Label>& _nodeSelector);

                    /**
                     * 判断参数 NodeSelector 是否已赋值
                     * @return NodeSelector 是否已赋值
                     * 
                     */
                    bool NodeSelectorHasBeenSet() const;

                    /**
                     * 获取容忍污点
                     * @return Tolerations 容忍污点
                     * 
                     */
                    std::vector<Toleration> GetTolerations() const;

                    /**
                     * 设置容忍污点
                     * @param _tolerations 容忍污点
                     * 
                     */
                    void SetTolerations(const std::vector<Toleration>& _tolerations);

                    /**
                     * 判断参数 Tolerations 是否已赋值
                     * @return Tolerations 是否已赋值
                     * 
                     */
                    bool TolerationsHasBeenSet() const;

                private:

                    /**
                     * 是否使用HostNetWork
                     */
                    bool m_hostNet;
                    bool m_hostNetHasBeenSet;

                    /**
                     * 指定pod运行节点
                     */
                    std::vector<Label> m_nodeSelector;
                    bool m_nodeSelectorHasBeenSet;

                    /**
                     * 容忍污点
                     */
                    std::vector<Toleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERAGENTPODCONFIG_H_
