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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBENODESRESPONSE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBENODESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/NodeOverview.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * DescribeNodes返回参数结构体
                */
                class DescribeNodesResponse : public AbstractModel
                {
                public:
                    DescribeNodesResponse();
                    ~DescribeNodesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取节点概览信息列表。
                     * @return NodeSet 节点概览信息列表。
                     * 
                     */
                    std::vector<NodeOverview> GetNodeSet() const;

                    /**
                     * 判断参数 NodeSet 是否已赋值
                     * @return NodeSet 是否已赋值
                     * 
                     */
                    bool NodeSetHasBeenSet() const;

                    /**
                     * 获取符合条件的节点数量。
                     * @return TotalCount 符合条件的节点数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 节点概览信息列表。
                     */
                    std::vector<NodeOverview> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                    /**
                     * 符合条件的节点数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBENODESRESPONSE_H_
