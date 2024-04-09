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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEORGANIZATIONNODESREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEORGANIZATIONNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
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
                     * 获取节点ID列表。可以通过[DescribeOrganizationNodes](https://cloud.tencent.com/document/product/850/82926)获取
                     * @return NodeId 节点ID列表。可以通过[DescribeOrganizationNodes](https://cloud.tencent.com/document/product/850/82926)获取
                     * 
                     */
                    std::vector<int64_t> GetNodeId() const;

                    /**
                     * 设置节点ID列表。可以通过[DescribeOrganizationNodes](https://cloud.tencent.com/document/product/850/82926)获取
                     * @param _nodeId 节点ID列表。可以通过[DescribeOrganizationNodes](https://cloud.tencent.com/document/product/850/82926)获取
                     * 
                     */
                    void SetNodeId(const std::vector<int64_t>& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                private:

                    /**
                     * 节点ID列表。可以通过[DescribeOrganizationNodes](https://cloud.tencent.com/document/product/850/82926)获取
                     */
                    std::vector<int64_t> m_nodeId;
                    bool m_nodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEORGANIZATIONNODESREQUEST_H_
