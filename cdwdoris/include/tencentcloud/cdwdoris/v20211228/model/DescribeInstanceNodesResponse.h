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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCENODESRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCENODESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/InstanceNode.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeInstanceNodes返回参数结构体
                */
                class DescribeInstanceNodesResponse : public AbstractModel
                {
                public:
                    DescribeInstanceNodesResponse();
                    ~DescribeInstanceNodesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取实例节点总数
                     * @return InstanceNodesList 实例节点总数
                     * 
                     */
                    std::vector<InstanceNode> GetInstanceNodesList() const;

                    /**
                     * 判断参数 InstanceNodesList 是否已赋值
                     * @return InstanceNodesList 是否已赋值
                     * 
                     */
                    bool InstanceNodesListHasBeenSet() const;

                    /**
                     * 获取节点类型
                     * @return NodeRoles 节点类型
                     * 
                     */
                    std::vector<std::string> GetNodeRoles() const;

                    /**
                     * 判断参数 NodeRoles 是否已赋值
                     * @return NodeRoles 是否已赋值
                     * 
                     */
                    bool NodeRolesHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 实例节点总数
                     */
                    std::vector<InstanceNode> m_instanceNodesList;
                    bool m_instanceNodesListHasBeenSet;

                    /**
                     * 节点类型
                     */
                    std::vector<std::string> m_nodeRoles;
                    bool m_nodeRolesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCENODESRESPONSE_H_
