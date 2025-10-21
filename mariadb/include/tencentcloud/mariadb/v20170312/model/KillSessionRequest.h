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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_KILLSESSIONREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_KILLSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * KillSession请求参数结构体
                */
                class KillSessionRequest : public AbstractModel
                {
                public:
                    KillSessionRequest();
                    ~KillSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取会话ID列表
                     * @return SessionId 会话ID列表
                     * 
                     */
                    std::vector<int64_t> GetSessionId() const;

                    /**
                     * 设置会话ID列表
                     * @param _sessionId 会话ID列表
                     * 
                     */
                    void SetSessionId(const std::vector<int64_t>& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取节点ID，可指定主节点或者备节点进行kill。可选参数，不传默认为主节点。
                     * @return NodeId 节点ID，可指定主节点或者备节点进行kill。可选参数，不传默认为主节点。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点ID，可指定主节点或者备节点进行kill。可选参数，不传默认为主节点。
                     * @param _nodeId 节点ID，可指定主节点或者备节点进行kill。可选参数，不传默认为主节点。
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 会话ID列表
                     */
                    std::vector<int64_t> m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 节点ID，可指定主节点或者备节点进行kill。可选参数，不传默认为主节点。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_KILLSESSIONREQUEST_H_
