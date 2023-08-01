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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBGRAPHEDGE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBGRAPHEDGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * Flink Job 运行图的边信息
                */
                class JobGraphEdge : public AbstractModel
                {
                public:
                    JobGraphEdge();
                    ~JobGraphEdge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取边的起始节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 边的起始节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置边的起始节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 边的起始节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取边的目标节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Target 边的目标节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTarget() const;

                    /**
                     * 设置边的目标节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _target 边的目标节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTarget(const int64_t& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                private:

                    /**
                     * 边的起始节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 边的目标节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_target;
                    bool m_targetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBGRAPHEDGE_H_
