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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBENODESRESPONSE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBENODESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/NodeDefineExt.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
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
                     * 获取节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeSet 节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeDefineExt> GetNodeSet() const;

                    /**
                     * 判断参数 NodeSet 是否已赋值
                     * @return NodeSet 是否已赋值
                     * 
                     */
                    bool NodeSetHasBeenSet() const;

                private:

                    /**
                     * 节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeDefineExt> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBENODESRESPONSE_H_
