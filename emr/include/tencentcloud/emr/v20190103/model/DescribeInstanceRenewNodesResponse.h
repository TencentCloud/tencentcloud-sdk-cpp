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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCERENEWNODESRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCERENEWNODESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/RenewInstancesInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeInstanceRenewNodes返回参数结构体
                */
                class DescribeInstanceRenewNodesResponse : public AbstractModel
                {
                public:
                    DescribeInstanceRenewNodesResponse();
                    ~DescribeInstanceRenewNodesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询到的节点总数
                     * @return TotalCnt 查询到的节点总数
                     * 
                     */
                    int64_t GetTotalCnt() const;

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     * 
                     */
                    bool TotalCntHasBeenSet() const;

                    /**
                     * 获取节点详细信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeList 节点详细信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RenewInstancesInfo> GetNodeList() const;

                    /**
                     * 判断参数 NodeList 是否已赋值
                     * @return NodeList 是否已赋值
                     * 
                     */
                    bool NodeListHasBeenSet() const;

                    /**
                     * 获取用户所有的标签键列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaInfo 用户所有的标签键列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetMetaInfo() const;

                    /**
                     * 判断参数 MetaInfo 是否已赋值
                     * @return MetaInfo 是否已赋值
                     * 
                     */
                    bool MetaInfoHasBeenSet() const;

                private:

                    /**
                     * 查询到的节点总数
                     */
                    int64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                    /**
                     * 节点详细信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RenewInstancesInfo> m_nodeList;
                    bool m_nodeListHasBeenSet;

                    /**
                     * 用户所有的标签键列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_metaInfo;
                    bool m_metaInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCERENEWNODESRESPONSE_H_
