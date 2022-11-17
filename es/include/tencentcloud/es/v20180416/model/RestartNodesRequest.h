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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_RESTARTNODESREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_RESTARTNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * RestartNodes请求参数结构体
                */
                class RestartNodesRequest : public AbstractModel
                {
                public:
                    RestartNodesRequest();
                    ~RestartNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例ID
                     * @return InstanceId 集群实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例ID
                     * @param InstanceId 集群实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取节点名称列表
                     * @return NodeNames 节点名称列表
                     */
                    std::vector<std::string> GetNodeNames() const;

                    /**
                     * 设置节点名称列表
                     * @param NodeNames 节点名称列表
                     */
                    void SetNodeNames(const std::vector<std::string>& _nodeNames);

                    /**
                     * 判断参数 NodeNames 是否已赋值
                     * @return NodeNames 是否已赋值
                     */
                    bool NodeNamesHasBeenSet() const;

                    /**
                     * 获取是否强制重启
                     * @return ForceRestart 是否强制重启
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置是否强制重启
                     * @param ForceRestart 是否强制重启
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     */
                    bool ForceRestartHasBeenSet() const;

                    /**
                     * 获取可选重启模式"in-place","blue-green"，分别表示重启，蓝绿重启；默认值为"in-place"
                     * @return RestartMode 可选重启模式"in-place","blue-green"，分别表示重启，蓝绿重启；默认值为"in-place"
                     */
                    std::string GetRestartMode() const;

                    /**
                     * 设置可选重启模式"in-place","blue-green"，分别表示重启，蓝绿重启；默认值为"in-place"
                     * @param RestartMode 可选重启模式"in-place","blue-green"，分别表示重启，蓝绿重启；默认值为"in-place"
                     */
                    void SetRestartMode(const std::string& _restartMode);

                    /**
                     * 判断参数 RestartMode 是否已赋值
                     * @return RestartMode 是否已赋值
                     */
                    bool RestartModeHasBeenSet() const;

                    /**
                     * 获取节点状态，在蓝绿模式中使用；离线节点蓝绿有风险
                     * @return IsOffline 节点状态，在蓝绿模式中使用；离线节点蓝绿有风险
                     */
                    bool GetIsOffline() const;

                    /**
                     * 设置节点状态，在蓝绿模式中使用；离线节点蓝绿有风险
                     * @param IsOffline 节点状态，在蓝绿模式中使用；离线节点蓝绿有风险
                     */
                    void SetIsOffline(const bool& _isOffline);

                    /**
                     * 判断参数 IsOffline 是否已赋值
                     * @return IsOffline 是否已赋值
                     */
                    bool IsOfflineHasBeenSet() const;

                private:

                    /**
                     * 集群实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点名称列表
                     */
                    std::vector<std::string> m_nodeNames;
                    bool m_nodeNamesHasBeenSet;

                    /**
                     * 是否强制重启
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                    /**
                     * 可选重启模式"in-place","blue-green"，分别表示重启，蓝绿重启；默认值为"in-place"
                     */
                    std::string m_restartMode;
                    bool m_restartModeHasBeenSet;

                    /**
                     * 节点状态，在蓝绿模式中使用；离线节点蓝绿有风险
                     */
                    bool m_isOffline;
                    bool m_isOfflineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_RESTARTNODESREQUEST_H_
