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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGENODEUNITTEMPLATEREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGENODEUNITTEMPLATEREQUEST_H_

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
                * CreateEdgeNodeUnitTemplate请求参数结构体
                */
                class CreateEdgeNodeUnitTemplateRequest : public AbstractModel
                {
                public:
                    CreateEdgeNodeUnitTemplateRequest();
                    ~CreateEdgeNodeUnitTemplateRequest() = default;
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
                     * 获取NodeUnit模板名称
                     * @return Name NodeUnit模板名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置NodeUnit模板名称
                     * @param _name NodeUnit模板名称
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
                     * 获取命名空间，默认default
                     * @return Namespace 命名空间，默认default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，默认default
                     * @param _namespace 命名空间，默认default
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
                     * 获取包含的节点列表
                     * @return Nodes 包含的节点列表
                     * 
                     */
                    std::vector<std::string> GetNodes() const;

                    /**
                     * 设置包含的节点列表
                     * @param _nodes 包含的节点列表
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

                private:

                    /**
                     * IECP边缘单元ID
                     */
                    uint64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                    /**
                     * NodeUnit模板名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命名空间，默认default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 包含的节点列表
                     */
                    std::vector<std::string> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGENODEUNITTEMPLATEREQUEST_H_
