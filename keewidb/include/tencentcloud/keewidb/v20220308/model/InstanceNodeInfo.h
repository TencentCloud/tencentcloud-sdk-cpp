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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_INSTANCENODEINFO_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_INSTANCENODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * 实例节点信息
                */
                class InstanceNodeInfo : public AbstractModel
                {
                public:
                    InstanceNodeInfo();
                    ~InstanceNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点ID
                     * @return NodeId 节点ID
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点ID
                     * @param _nodeId 节点ID
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
                     * 获取节点角色
                     * @return NodeRole 节点角色
                     * 
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置节点角色
                     * @param _nodeRole 节点角色
                     * 
                     */
                    void SetNodeRole(const std::string& _nodeRole);

                    /**
                     * 判断参数 NodeRole 是否已赋值
                     * @return NodeRole 是否已赋值
                     * 
                     */
                    bool NodeRoleHasBeenSet() const;

                private:

                    /**
                     * 节点ID
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点角色
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_INSTANCENODEINFO_H_
