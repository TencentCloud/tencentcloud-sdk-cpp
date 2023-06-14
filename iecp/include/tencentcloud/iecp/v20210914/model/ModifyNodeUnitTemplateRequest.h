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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYNODEUNITTEMPLATEREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYNODEUNITTEMPLATEREQUEST_H_

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
                * ModifyNodeUnitTemplate请求参数结构体
                */
                class ModifyNodeUnitTemplateRequest : public AbstractModel
                {
                public:
                    ModifyNodeUnitTemplateRequest();
                    ~ModifyNodeUnitTemplateRequest() = default;
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
                     * 获取NodeUnit模板ID
                     * @return NodeUnitTemplateID NodeUnit模板ID
                     * 
                     */
                    uint64_t GetNodeUnitTemplateID() const;

                    /**
                     * 设置NodeUnit模板ID
                     * @param _nodeUnitTemplateID NodeUnit模板ID
                     * 
                     */
                    void SetNodeUnitTemplateID(const uint64_t& _nodeUnitTemplateID);

                    /**
                     * 判断参数 NodeUnitTemplateID 是否已赋值
                     * @return NodeUnitTemplateID 是否已赋值
                     * 
                     */
                    bool NodeUnitTemplateIDHasBeenSet() const;

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

                private:

                    /**
                     * IECP边缘单元ID
                     */
                    uint64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                    /**
                     * NodeUnit模板ID
                     */
                    uint64_t m_nodeUnitTemplateID;
                    bool m_nodeUnitTemplateIDHasBeenSet;

                    /**
                     * 包含的节点列表
                     */
                    std::vector<std::string> m_nodes;
                    bool m_nodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYNODEUNITTEMPLATEREQUEST_H_
