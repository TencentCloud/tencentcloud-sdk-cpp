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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCENODEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCENODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 查询实时任务实例当前的节点信息
                */
                class InstanceNodeInfo : public AbstractModel
                {
                public:
                    InstanceNodeInfo();
                    ~InstanceNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取读取节点SOURCE 写入节点SINK
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeType 读取节点SOURCE 写入节点SINK
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置读取节点SOURCE 写入节点SINK
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeType 读取节点SOURCE 写入节点SINK
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeId 节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeId 节点id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeName 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                private:

                    /**
                     * 读取节点SOURCE 写入节点SINK
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCENODEINFO_H_
