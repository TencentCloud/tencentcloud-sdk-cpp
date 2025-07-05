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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_DELETEORGANIZATIONNODESREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_DELETEORGANIZATIONNODESREQUEST_H_

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
                * DeleteOrganizationNodes请求参数结构体
                */
                class DeleteOrganizationNodesRequest : public AbstractModel
                {
                public:
                    DeleteOrganizationNodesRequest();
                    ~DeleteOrganizationNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取组织单元ID列表
                     * @return NodeIds 组织单元ID列表
                     * 
                     */
                    std::vector<uint64_t> GetNodeIds() const;

                    /**
                     * 设置组织单元ID列表
                     * @param _nodeIds 组织单元ID列表
                     * 
                     */
                    void SetNodeIds(const std::vector<uint64_t>& _nodeIds);

                    /**
                     * 判断参数 NodeIds 是否已赋值
                     * @return NodeIds 是否已赋值
                     * 
                     */
                    bool NodeIdsHasBeenSet() const;

                private:

                    /**
                     * 组织单元ID列表
                     */
                    std::vector<uint64_t> m_nodeIds;
                    bool m_nodeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_DELETEORGANIZATIONNODESREQUEST_H_
