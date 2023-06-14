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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGENODEGROUPREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGENODEGROUPREQUEST_H_

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
                * CreateEdgeNodeGroup请求参数结构体
                */
                class CreateEdgeNodeGroupRequest : public AbstractModel
                {
                public:
                    CreateEdgeNodeGroupRequest();
                    ~CreateEdgeNodeGroupRequest() = default;
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
                     * 获取NodeGroup名称
                     * @return Name NodeGroup名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置NodeGroup名称
                     * @param _name NodeGroup名称
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
                     * 获取命名空间，不填默认为default
                     * @return Namespace 命名空间，不填默认为default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，不填默认为default
                     * @param _namespace 命名空间，不填默认为default
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
                     * 获取模版ID数组
                     * @return NodeUnitTemplateIDs 模版ID数组
                     * 
                     */
                    std::vector<uint64_t> GetNodeUnitTemplateIDs() const;

                    /**
                     * 设置模版ID数组
                     * @param _nodeUnitTemplateIDs 模版ID数组
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
                     * NodeGroup名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命名空间，不填默认为default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 模版ID数组
                     */
                    std::vector<uint64_t> m_nodeUnitTemplateIDs;
                    bool m_nodeUnitTemplateIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGENODEGROUPREQUEST_H_
