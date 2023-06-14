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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITNODEGROUPRESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITNODEGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/NodeGroupInfo.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeEdgeUnitNodeGroup返回参数结构体
                */
                class DescribeEdgeUnitNodeGroupResponse : public AbstractModel
                {
                public:
                    DescribeEdgeUnitNodeGroupResponse();
                    ~DescribeEdgeUnitNodeGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录总数
                     * @return Total 记录总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取NodeGroup数组
                     * @return NodeGroupInfo NodeGroup数组
                     * 
                     */
                    std::vector<NodeGroupInfo> GetNodeGroupInfo() const;

                    /**
                     * 判断参数 NodeGroupInfo 是否已赋值
                     * @return NodeGroupInfo 是否已赋值
                     * 
                     */
                    bool NodeGroupInfoHasBeenSet() const;

                private:

                    /**
                     * 记录总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * NodeGroup数组
                     */
                    std::vector<NodeGroupInfo> m_nodeGroupInfo;
                    bool m_nodeGroupInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITNODEGROUPRESPONSE_H_
