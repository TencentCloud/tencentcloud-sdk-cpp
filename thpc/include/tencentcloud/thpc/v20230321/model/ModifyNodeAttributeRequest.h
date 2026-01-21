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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_MODIFYNODEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_MODIFYNODEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * ModifyNodeAttribute请求参数结构体
                */
                class ModifyNodeAttributeRequest : public AbstractModel
                {
                public:
                    ModifyNodeAttributeRequest();
                    ~ModifyNodeAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>节点ID，节点ID通过调用接口 <a href="https://cloud.tencent.com/document/api/1527/89569">DescribeNodes</a>获取。</p>
                     * @return NodeId <p>节点ID，节点ID通过调用接口 <a href="https://cloud.tencent.com/document/api/1527/89569">DescribeNodes</a>获取。</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>节点ID，节点ID通过调用接口 <a href="https://cloud.tencent.com/document/api/1527/89569">DescribeNodes</a>获取。</p>
                     * @param _nodeId <p>节点ID，节点ID通过调用接口 <a href="https://cloud.tencent.com/document/api/1527/89569">DescribeNodes</a>获取。</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>节点别名</p>
                     * @return NodeName <p>节点别名</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>节点别名</p>
                     * @param _nodeName <p>节点别名</p>
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取<p>资源的分配状态:  - IDLE: 资源空闲 - ISOLATE: 资源隔离</p>
                     * @return NodeAllocateState <p>资源的分配状态:  - IDLE: 资源空闲 - ISOLATE: 资源隔离</p>
                     * 
                     */
                    std::string GetNodeAllocateState() const;

                    /**
                     * 设置<p>资源的分配状态:  - IDLE: 资源空闲 - ISOLATE: 资源隔离</p>
                     * @param _nodeAllocateState <p>资源的分配状态:  - IDLE: 资源空闲 - ISOLATE: 资源隔离</p>
                     * 
                     */
                    void SetNodeAllocateState(const std::string& _nodeAllocateState);

                    /**
                     * 判断参数 NodeAllocateState 是否已赋值
                     * @return NodeAllocateState 是否已赋值
                     * 
                     */
                    bool NodeAllocateStateHasBeenSet() const;

                    /**
                     * 获取<p>目标队列名</p>
                     * @return QueueName <p>目标队列名</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>目标队列名</p>
                     * @param _queueName <p>目标队列名</p>
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                private:

                    /**
                     * <p>节点ID，节点ID通过调用接口 <a href="https://cloud.tencent.com/document/api/1527/89569">DescribeNodes</a>获取。</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>节点别名</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>资源的分配状态:  - IDLE: 资源空闲 - ISOLATE: 资源隔离</p>
                     */
                    std::string m_nodeAllocateState;
                    bool m_nodeAllocateStateHasBeenSet;

                    /**
                     * <p>目标队列名</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_MODIFYNODEATTRIBUTEREQUEST_H_
