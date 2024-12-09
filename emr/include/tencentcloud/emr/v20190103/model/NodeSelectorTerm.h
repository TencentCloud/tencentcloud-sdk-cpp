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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODESELECTORTERM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODESELECTORTERM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeSelectorRequirement.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Pod节点选择项集合
                */
                class NodeSelectorTerm : public AbstractModel
                {
                public:
                    NodeSelectorTerm();
                    ~NodeSelectorTerm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点选择项表达式集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchExpressions 节点选择项表达式集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeSelectorRequirement> GetMatchExpressions() const;

                    /**
                     * 设置节点选择项表达式集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _matchExpressions 节点选择项表达式集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMatchExpressions(const std::vector<NodeSelectorRequirement>& _matchExpressions);

                    /**
                     * 判断参数 MatchExpressions 是否已赋值
                     * @return MatchExpressions 是否已赋值
                     * 
                     */
                    bool MatchExpressionsHasBeenSet() const;

                private:

                    /**
                     * 节点选择项表达式集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeSelectorRequirement> m_matchExpressions;
                    bool m_matchExpressionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODESELECTORTERM_H_
