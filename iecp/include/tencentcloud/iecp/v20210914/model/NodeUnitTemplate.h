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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_NODEUNITTEMPLATE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_NODEUNITTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/NodeSimpleInfo.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * NodeUnit模版信息
                */
                class NodeUnitTemplate : public AbstractModel
                {
                public:
                    NodeUnitTemplate();
                    ~NodeUnitTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取NodeUnit模版ID
                     * @return ID NodeUnit模版ID
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置NodeUnit模版ID
                     * @param _iD NodeUnit模版ID
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取NodeUnit模版名称
                     * @return Name NodeUnit模版名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置NodeUnit模版名称
                     * @param _name NodeUnit模版名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取包含节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeList 包含节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeSimpleInfo> GetNodeList() const;

                    /**
                     * 设置包含节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeList 包含节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeList(const std::vector<NodeSimpleInfo>& _nodeList);

                    /**
                     * 判断参数 NodeList 是否已赋值
                     * @return NodeList 是否已赋值
                     * 
                     */
                    bool NodeListHasBeenSet() const;

                    /**
                     * 获取NodeGroup列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeGroups NodeGroup列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNodeGroups() const;

                    /**
                     * 设置NodeGroup列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeGroups NodeGroup列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeGroups(const std::vector<std::string>& _nodeGroups);

                    /**
                     * 判断参数 NodeGroups 是否已赋值
                     * @return NodeGroups 是否已赋值
                     * 
                     */
                    bool NodeGroupsHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * NodeUnit模版ID
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * NodeUnit模版名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 包含节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeSimpleInfo> m_nodeList;
                    bool m_nodeListHasBeenSet;

                    /**
                     * NodeGroup列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_nodeGroups;
                    bool m_nodeGroupsHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_NODEUNITTEMPLATE_H_
