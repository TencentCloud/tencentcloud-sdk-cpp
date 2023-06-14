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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DELETEEDGENODEUNITTEMPLATESREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DELETEEDGENODEUNITTEMPLATESREQUEST_H_

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
                * DeleteEdgeNodeUnitTemplates请求参数结构体
                */
                class DeleteEdgeNodeUnitTemplatesRequest : public AbstractModel
                {
                public:
                    DeleteEdgeNodeUnitTemplatesRequest();
                    ~DeleteEdgeNodeUnitTemplatesRequest() = default;
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
                     * 获取删除的NodeUnit模板ID列表
                     * @return NodeUnitTemplateIDs 删除的NodeUnit模板ID列表
                     * 
                     */
                    std::vector<uint64_t> GetNodeUnitTemplateIDs() const;

                    /**
                     * 设置删除的NodeUnit模板ID列表
                     * @param _nodeUnitTemplateIDs 删除的NodeUnit模板ID列表
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
                     * 删除的NodeUnit模板ID列表
                     */
                    std::vector<uint64_t> m_nodeUnitTemplateIDs;
                    bool m_nodeUnitTemplateIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DELETEEDGENODEUNITTEMPLATESREQUEST_H_
