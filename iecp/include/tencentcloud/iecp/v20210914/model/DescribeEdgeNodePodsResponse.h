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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGENODEPODSRESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGENODEPODSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/EdgeNodePodInfo.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeEdgeNodePods返回参数结构体
                */
                class DescribeEdgeNodePodsResponse : public AbstractModel
                {
                public:
                    DescribeEdgeNodePodsResponse();
                    ~DescribeEdgeNodePodsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Pod列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodSet Pod列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EdgeNodePodInfo> GetPodSet() const;

                    /**
                     * 判断参数 PodSet 是否已赋值
                     * @return PodSet 是否已赋值
                     * 
                     */
                    bool PodSetHasBeenSet() const;

                private:

                    /**
                     * Pod列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EdgeNodePodInfo> m_podSet;
                    bool m_podSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGENODEPODSRESPONSE_H_
