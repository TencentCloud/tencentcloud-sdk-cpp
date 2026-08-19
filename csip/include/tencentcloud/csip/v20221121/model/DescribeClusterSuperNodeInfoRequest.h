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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSUPERNODEINFOREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSUPERNODEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterSuperNodeInfo请求参数结构体
                */
                class DescribeClusterSuperNodeInfoRequest : public AbstractModel
                {
                public:
                    DescribeClusterSuperNodeInfoRequest();
                    ~DescribeClusterSuperNodeInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>超级节点唯一 ID（对应集群节点表 unique_id）。<br>取值参考：通过 DescribeClusterNodeList 接口返回的 UniqueID 字段获取（节点类型为 SUPER 的节点）</p>
                     * @return NodeUniqueID <p>超级节点唯一 ID（对应集群节点表 unique_id）。<br>取值参考：通过 DescribeClusterNodeList 接口返回的 UniqueID 字段获取（节点类型为 SUPER 的节点）</p>
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置<p>超级节点唯一 ID（对应集群节点表 unique_id）。<br>取值参考：通过 DescribeClusterNodeList 接口返回的 UniqueID 字段获取（节点类型为 SUPER 的节点）</p>
                     * @param _nodeUniqueID <p>超级节点唯一 ID（对应集群节点表 unique_id）。<br>取值参考：通过 DescribeClusterNodeList 接口返回的 UniqueID 字段获取（节点类型为 SUPER 的节点）</p>
                     * 
                     */
                    void SetNodeUniqueID(const std::string& _nodeUniqueID);

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>超级节点唯一 ID（对应集群节点表 unique_id）。<br>取值参考：通过 DescribeClusterNodeList 接口返回的 UniqueID 字段获取（节点类型为 SUPER 的节点）</p>
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSUPERNODEINFOREQUEST_H_
