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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBENODEUNITTEMPLATEONNODEGROUPRESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBENODEUNITTEMPLATEONNODEGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/NodeGroupNodeUnitTemplateInfo.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeNodeUnitTemplateOnNodeGroup返回参数结构体
                */
                class DescribeNodeUnitTemplateOnNodeGroupResponse : public AbstractModel
                {
                public:
                    DescribeNodeUnitTemplateOnNodeGroupResponse();
                    ~DescribeNodeUnitTemplateOnNodeGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录总数
                     * @return Total 记录总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取NodeUnit模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeUnitTemplates NodeUnit模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeGroupNodeUnitTemplateInfo> GetNodeUnitTemplates() const;

                    /**
                     * 判断参数 NodeUnitTemplates 是否已赋值
                     * @return NodeUnitTemplates 是否已赋值
                     * 
                     */
                    bool NodeUnitTemplatesHasBeenSet() const;

                private:

                    /**
                     * 记录总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * NodeUnit模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeGroupNodeUnitTemplateInfo> m_nodeUnitTemplates;
                    bool m_nodeUnitTemplatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBENODEUNITTEMPLATEONNODEGROUPRESPONSE_H_
