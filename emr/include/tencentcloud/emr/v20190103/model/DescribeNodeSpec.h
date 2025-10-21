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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODESPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeSpecType.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 节点规格
                */
                class DescribeNodeSpec : public AbstractModel
                {
                public:
                    DescribeNodeSpec();
                    ~DescribeNodeSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点类型
                     * @return NodeType 节点类型
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型
                     * @param _nodeType 节点类型
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
                     * 获取节点类型名称
                     * @return NodeName 节点类型名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点类型名称
                     * @param _nodeName 节点类型名称
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
                     * 获取Types数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Types Types数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeSpecType> GetTypes() const;

                    /**
                     * 设置Types数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _types Types数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypes(const std::vector<NodeSpecType>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取云托管节点机型规格列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CmnTypes 云托管节点机型规格列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeSpecType> GetCmnTypes() const;

                    /**
                     * 设置云托管节点机型规格列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cmnTypes 云托管节点机型规格列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCmnTypes(const std::vector<NodeSpecType>& _cmnTypes);

                    /**
                     * 判断参数 CmnTypes 是否已赋值
                     * @return CmnTypes 是否已赋值
                     * 
                     */
                    bool CmnTypesHasBeenSet() const;

                private:

                    /**
                     * 节点类型
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点类型名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Types数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeSpecType> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * 云托管节点机型规格列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeSpecType> m_cmnTypes;
                    bool m_cmnTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODESPEC_H_
