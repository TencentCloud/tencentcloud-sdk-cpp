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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_CREATEUPDATENODEUNITREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_CREATEUPDATENODEUNITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * CreateUpdateNodeUnit请求参数结构体
                */
                class CreateUpdateNodeUnitRequest : public AbstractModel
                {
                public:
                    CreateUpdateNodeUnitRequest();
                    ~CreateUpdateNodeUnitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IECP边缘单元ID
                     * @return EdgeUnitId IECP边缘单元ID
                     * 
                     */
                    uint64_t GetEdgeUnitId() const;

                    /**
                     * 设置IECP边缘单元ID
                     * @param _edgeUnitId IECP边缘单元ID
                     * 
                     */
                    void SetEdgeUnitId(const uint64_t& _edgeUnitId);

                    /**
                     * 判断参数 EdgeUnitId 是否已赋值
                     * @return EdgeUnitId 是否已赋值
                     * 
                     */
                    bool EdgeUnitIdHasBeenSet() const;

                    /**
                     * 获取NodeUnit所属的NodeGroup名称
                     * @return NodeGroupName NodeUnit所属的NodeGroup名称
                     * 
                     */
                    std::string GetNodeGroupName() const;

                    /**
                     * 设置NodeUnit所属的NodeGroup名称
                     * @param _nodeGroupName NodeUnit所属的NodeGroup名称
                     * 
                     */
                    void SetNodeGroupName(const std::string& _nodeGroupName);

                    /**
                     * 判断参数 NodeGroupName 是否已赋值
                     * @return NodeGroupName 是否已赋值
                     * 
                     */
                    bool NodeGroupNameHasBeenSet() const;

                    /**
                     * 获取命名空间，默认为default
                     * @return Namespace 命名空间，默认为default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，默认为default
                     * @param _namespace 命名空间，默认为default
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
                     * 获取NodeUnit名称，通过模版创建可不填
                     * @return NodeUnitName NodeUnit名称，通过模版创建可不填
                     * 
                     */
                    std::string GetNodeUnitName() const;

                    /**
                     * 设置NodeUnit名称，通过模版创建可不填
                     * @param _nodeUnitName NodeUnit名称，通过模版创建可不填
                     * 
                     */
                    void SetNodeUnitName(const std::string& _nodeUnitName);

                    /**
                     * 判断参数 NodeUnitName 是否已赋值
                     * @return NodeUnitName 是否已赋值
                     * 
                     */
                    bool NodeUnitNameHasBeenSet() const;

                    /**
                     * 获取NodeUnit包含的节点列表，通过模版创建可不填
                     * @return Nodes NodeUnit包含的节点列表，通过模版创建可不填
                     * 
                     */
                    std::vector<std::string> GetNodes() const;

                    /**
                     * 设置NodeUnit包含的节点列表，通过模版创建可不填
                     * @param _nodes NodeUnit包含的节点列表，通过模版创建可不填
                     * 
                     */
                    void SetNodes(const std::vector<std::string>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取NodeUnit模版ID列表
                     * @return NodeUnitTemplateIDs NodeUnit模版ID列表
                     * 
                     */
                    std::vector<uint64_t> GetNodeUnitTemplateIDs() const;

                    /**
                     * 设置NodeUnit模版ID列表
                     * @param _nodeUnitTemplateIDs NodeUnit模版ID列表
                     * 
                     */
                    void SetNodeUnitTemplateIDs(const std::vector<uint64_t>& _nodeUnitTemplateIDs);

                    /**
                     * 判断参数 NodeUnitTemplateIDs 是否已赋值
                     * @return NodeUnitTemplateIDs 是否已赋值
                     * 
                     */
                    bool NodeUnitTemplateIDsHasBeenSet() const;

                private:

                    /**
                     * IECP边缘单元ID
                     */
                    uint64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                    /**
                     * NodeUnit所属的NodeGroup名称
                     */
                    std::string m_nodeGroupName;
                    bool m_nodeGroupNameHasBeenSet;

                    /**
                     * 命名空间，默认为default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * NodeUnit名称，通过模版创建可不填
                     */
                    std::string m_nodeUnitName;
                    bool m_nodeUnitNameHasBeenSet;

                    /**
                     * NodeUnit包含的节点列表，通过模版创建可不填
                     */
                    std::vector<std::string> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * NodeUnit模版ID列表
                     */
                    std::vector<uint64_t> m_nodeUnitTemplateIDs;
                    bool m_nodeUnitTemplateIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_CREATEUPDATENODEUNITREQUEST_H_
