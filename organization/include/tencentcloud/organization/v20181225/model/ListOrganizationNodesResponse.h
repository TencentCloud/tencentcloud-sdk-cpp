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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_LISTORGANIZATIONNODESRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_LISTORGANIZATIONNODESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20181225/model/OrgNode.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20181225
        {
            namespace Model
            {
                /**
                * ListOrganizationNodes返回参数结构体
                */
                class ListOrganizationNodesResponse : public AbstractModel
                {
                public:
                    ListOrganizationNodesResponse();
                    ~ListOrganizationNodesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取企业组织单元列表
                     * @return Nodes 企业组织单元列表
                     * 
                     */
                    std::vector<OrgNode> GetNodes() const;

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                private:

                    /**
                     * 企业组织单元列表
                     */
                    std::vector<OrgNode> m_nodes;
                    bool m_nodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_LISTORGANIZATIONNODESRESPONSE_H_
