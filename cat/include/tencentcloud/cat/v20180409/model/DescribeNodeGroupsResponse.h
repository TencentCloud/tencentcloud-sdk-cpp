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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBENODEGROUPSRESPONSE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBENODEGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/NodeTree.h>
#include <tencentcloud/cat/v20180409/model/DistinctOrNetServiceInfo.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeNodeGroups返回参数结构体
                */
                class DescribeNodeGroupsResponse : public AbstractModel
                {
                public:
                    DescribeNodeGroupsResponse();
                    ~DescribeNodeGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取树状节点列表，总共两级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeList 树状节点列表，总共两级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeTree> GetNodeList() const;

                    /**
                     * 判断参数 NodeList 是否已赋值
                     * @return NodeList 是否已赋值
                     * 
                     */
                    bool NodeListHasBeenSet() const;

                    /**
                     * 获取省份或国家列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DistrictList 省份或国家列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DistinctOrNetServiceInfo> GetDistrictList() const;

                    /**
                     * 判断参数 DistrictList 是否已赋值
                     * @return DistrictList 是否已赋值
                     * 
                     */
                    bool DistrictListHasBeenSet() const;

                    /**
                     * 获取运营商列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetServiceList 运营商列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DistinctOrNetServiceInfo> GetNetServiceList() const;

                    /**
                     * 判断参数 NetServiceList 是否已赋值
                     * @return NetServiceList 是否已赋值
                     * 
                     */
                    bool NetServiceListHasBeenSet() const;

                private:

                    /**
                     * 树状节点列表，总共两级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeTree> m_nodeList;
                    bool m_nodeListHasBeenSet;

                    /**
                     * 省份或国家列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DistinctOrNetServiceInfo> m_districtList;
                    bool m_districtListHasBeenSet;

                    /**
                     * 运营商列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DistinctOrNetServiceInfo> m_netServiceList;
                    bool m_netServiceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBENODEGROUPSRESPONSE_H_
