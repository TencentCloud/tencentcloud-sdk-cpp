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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERNODESRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERNODESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeHardwareInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeClusterNodes返回参数结构体
                */
                class DescribeClusterNodesResponse : public AbstractModel
                {
                public:
                    DescribeClusterNodesResponse();
                    ~DescribeClusterNodesResponse() = default;
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
                    std::vector<NodeHardwareInfo> GetNodeList() const;

                    /**
                     * 判断参数 NodeList 是否已赋值
                     * @return NodeList 是否已赋值
                     * 
                     */
                    bool NodeListHasBeenSet() const;

                    /**
                     * 获取用户所有的标签键列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagKeys 用户所有的标签键列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     * 
                     */
                    bool TagKeysHasBeenSet() const;

                    /**
                     * 获取资源类型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HardwareResourceTypeList 资源类型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetHardwareResourceTypeList() const;

                    /**
                     * 判断参数 HardwareResourceTypeList 是否已赋值
                     * @return HardwareResourceTypeList 是否已赋值
                     * 
                     */
                    bool HardwareResourceTypeListHasBeenSet() const;

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
                    std::vector<NodeHardwareInfo> m_nodeList;
                    bool m_nodeListHasBeenSet;

                    /**
                     * 用户所有的标签键列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * 资源类型列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_hardwareResourceTypeList;
                    bool m_hardwareResourceTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERNODESRESPONSE_H_
