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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_RUNNODEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_RUNNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/InvokeAPI.h>
#include <tencentcloud/lke/v20231130/model/ValueInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 节点信息
                */
                class RunNodeInfo : public AbstractModel
                {
                public:
                    RunNodeInfo();
                    ~RunNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点类型，0:未指定，1:开始节点，2:API节点，3:询问节点，4:答案节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeType 节点类型，0:未指定，1:开始节点，2:API节点，3:询问节点，4:答案节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNodeType() const;

                    /**
                     * 设置节点类型，0:未指定，1:开始节点，2:API节点，3:询问节点，4:答案节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeType 节点类型，0:未指定，1:开始节点，2:API节点，3:询问节点，4:答案节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeType(const int64_t& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeId 节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeId 节点ID
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

                    /**
                     * 获取请求的API
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvokeApi 请求的API
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InvokeAPI GetInvokeApi() const;

                    /**
                     * 设置请求的API
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invokeApi 请求的API
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvokeApi(const InvokeAPI& _invokeApi);

                    /**
                     * 判断参数 InvokeApi 是否已赋值
                     * @return InvokeApi 是否已赋值
                     * 
                     */
                    bool InvokeApiHasBeenSet() const;

                    /**
                     * 获取当前节点的所有槽位的值，key：SlotID。没有值的时候也要返回空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlotValues 当前节点的所有槽位的值，key：SlotID。没有值的时候也要返回空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ValueInfo> GetSlotValues() const;

                    /**
                     * 设置当前节点的所有槽位的值，key：SlotID。没有值的时候也要返回空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slotValues 当前节点的所有槽位的值，key：SlotID。没有值的时候也要返回空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSlotValues(const std::vector<ValueInfo>& _slotValues);

                    /**
                     * 判断参数 SlotValues 是否已赋值
                     * @return SlotValues 是否已赋值
                     * 
                     */
                    bool SlotValuesHasBeenSet() const;

                private:

                    /**
                     * 节点类型，0:未指定，1:开始节点，2:API节点，3:询问节点，4:答案节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点ID
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

                    /**
                     * 请求的API
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InvokeAPI m_invokeApi;
                    bool m_invokeApiHasBeenSet;

                    /**
                     * 当前节点的所有槽位的值，key：SlotID。没有值的时候也要返回空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ValueInfo> m_slotValues;
                    bool m_slotValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_RUNNODEINFO_H_
