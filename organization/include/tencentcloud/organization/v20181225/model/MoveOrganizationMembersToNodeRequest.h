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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_MOVEORGANIZATIONMEMBERSTONODEREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_MOVEORGANIZATIONMEMBERSTONODEREQUEST_H_

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
                * MoveOrganizationMembersToNode请求参数结构体
                */
                class MoveOrganizationMembersToNodeRequest : public AbstractModel
                {
                public:
                    MoveOrganizationMembersToNodeRequest();
                    ~MoveOrganizationMembersToNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取组织单元ID
                     * @return NodeId 组织单元ID
                     * 
                     */
                    uint64_t GetNodeId() const;

                    /**
                     * 设置组织单元ID
                     * @param _nodeId 组织单元ID
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
                     * 获取成员UIN列表
                     * @return Uins 成员UIN列表
                     * 
                     */
                    std::vector<uint64_t> GetUins() const;

                    /**
                     * 设置成员UIN列表
                     * @param _uins 成员UIN列表
                     * 
                     */
                    void SetUins(const std::vector<uint64_t>& _uins);

                    /**
                     * 判断参数 Uins 是否已赋值
                     * @return Uins 是否已赋值
                     * 
                     */
                    bool UinsHasBeenSet() const;

                private:

                    /**
                     * 组织单元ID
                     */
                    uint64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 成员UIN列表
                     */
                    std::vector<uint64_t> m_uins;
                    bool m_uinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_MOVEORGANIZATIONMEMBERSTONODEREQUEST_H_
