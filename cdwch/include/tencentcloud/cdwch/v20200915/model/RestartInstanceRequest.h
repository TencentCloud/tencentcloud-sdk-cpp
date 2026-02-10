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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_RESTARTINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_RESTARTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * RestartInstance请求参数结构体
                */
                class RestartInstanceRequest : public AbstractModel
                {
                public:
                    RestartInstanceRequest();
                    ~RestartInstanceRequest() = default;
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
                     * 获取节点类型，可选值：CK / ZK / CHPROXY
                     * @return NodeType 节点类型，可选值：CK / ZK / CHPROXY
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型，可选值：CK / ZK / CHPROXY
                     * @param _nodeType 节点类型，可选值：CK / ZK / CHPROXY
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取符合节点类型的要重启的节点ip列表
                     * @return NodeIpList 符合节点类型的要重启的节点ip列表
                     * 
                     */
                    std::vector<std::string> GetNodeIpList() const;

                    /**
                     * 设置符合节点类型的要重启的节点ip列表
                     * @param _nodeIpList 符合节点类型的要重启的节点ip列表
                     * 
                     */
                    void SetNodeIpList(const std::vector<std::string>& _nodeIpList);

                    /**
                     * 判断参数 NodeIpList 是否已赋值
                     * @return NodeIpList 是否已赋值
                     * 
                     */
                    bool NodeIpListHasBeenSet() const;

                    /**
                     * 获取是否滚动重启，默认为true
                     * @return RollingRestart 是否滚动重启，默认为true
                     * 
                     */
                    bool GetRollingRestart() const;

                    /**
                     * 设置是否滚动重启，默认为true
                     * @param _rollingRestart 是否滚动重启，默认为true
                     * 
                     */
                    void SetRollingRestart(const bool& _rollingRestart);

                    /**
                     * 判断参数 RollingRestart 是否已赋值
                     * @return RollingRestart 是否已赋值
                     * 
                     */
                    bool RollingRestartHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点类型，可选值：CK / ZK / CHPROXY
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 符合节点类型的要重启的节点ip列表
                     */
                    std::vector<std::string> m_nodeIpList;
                    bool m_nodeIpListHasBeenSet;

                    /**
                     * 是否滚动重启，默认为true
                     */
                    bool m_rollingRestart;
                    bool m_rollingRestartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_RESTARTINSTANCEREQUEST_H_
