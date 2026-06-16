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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_ISOLATEDBCUSTOMNODEREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_ISOLATEDBCUSTOMNODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * IsolateDBCustomNode请求参数结构体
                */
                class IsolateDBCustomNodeRequest : public AbstractModel
                {
                public:
                    IsolateDBCustomNodeRequest();
                    ~IsolateDBCustomNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>DB Custom 节点ID</p>
                     * @return NodeId <p>DB Custom 节点ID</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>DB Custom 节点ID</p>
                     * @param _nodeId <p>DB Custom 节点ID</p>
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
                     * <p>DB Custom 节点ID</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_ISOLATEDBCUSTOMNODEREQUEST_H_
