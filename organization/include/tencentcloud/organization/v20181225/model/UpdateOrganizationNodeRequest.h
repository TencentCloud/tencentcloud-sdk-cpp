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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_UPDATEORGANIZATIONNODEREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_UPDATEORGANIZATIONNODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20181225
        {
            namespace Model
            {
                /**
                * UpdateOrganizationNode请求参数结构体
                */
                class UpdateOrganizationNodeRequest : public AbstractModel
                {
                public:
                    UpdateOrganizationNodeRequest();
                    ~UpdateOrganizationNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业组织单元ID
                     * @return NodeId 企业组织单元ID
                     * 
                     */
                    uint64_t GetNodeId() const;

                    /**
                     * 设置企业组织单元ID
                     * @param _nodeId 企业组织单元ID
                     * 
                     */
                    void SetNodeId(const uint64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取父单元ID
                     * @return ParentNodeId 父单元ID
                     * 
                     */
                    uint64_t GetParentNodeId() const;

                    /**
                     * 设置父单元ID
                     * @param _parentNodeId 父单元ID
                     * 
                     */
                    void SetParentNodeId(const uint64_t& _parentNodeId);

                    /**
                     * 判断参数 ParentNodeId 是否已赋值
                     * @return ParentNodeId 是否已赋值
                     * 
                     */
                    bool ParentNodeIdHasBeenSet() const;

                private:

                    /**
                     * 企业组织单元ID
                     */
                    uint64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 父单元ID
                     */
                    uint64_t m_parentNodeId;
                    bool m_parentNodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_UPDATEORGANIZATIONNODEREQUEST_H_
