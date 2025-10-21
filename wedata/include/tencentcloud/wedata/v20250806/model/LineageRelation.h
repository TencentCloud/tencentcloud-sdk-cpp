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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGERELATION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGERELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/LineageProcess.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * LineageRelation 血缘关系
                */
                class LineageRelation : public AbstractModel
                {
                public:
                    LineageRelation();
                    ~LineageRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关联ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelationId 关联ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRelationId() const;

                    /**
                     * 设置关联ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relationId 关联ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelationId(const std::string& _relationId);

                    /**
                     * 判断参数 RelationId 是否已赋值
                     * @return RelationId 是否已赋值
                     * 
                     */
                    bool RelationIdHasBeenSet() const;

                    /**
                     * 获取源端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceUniqueId 源端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceUniqueId() const;

                    /**
                     * 设置源端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceUniqueId 源端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceUniqueId(const std::string& _sourceUniqueId);

                    /**
                     * 判断参数 SourceUniqueId 是否已赋值
                     * @return SourceUniqueId 是否已赋值
                     * 
                     */
                    bool SourceUniqueIdHasBeenSet() const;

                    /**
                     * 获取目标端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetUniqueId 目标端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetUniqueId() const;

                    /**
                     * 设置目标端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetUniqueId 目标端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetUniqueId(const std::string& _targetUniqueId);

                    /**
                     * 判断参数 TargetUniqueId 是否已赋值
                     * @return TargetUniqueId 是否已赋值
                     * 
                     */
                    bool TargetUniqueIdHasBeenSet() const;

                    /**
                     * 获取血缘加工过程
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Processes 血缘加工过程
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LineageProcess> GetProcesses() const;

                    /**
                     * 设置血缘加工过程
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processes 血缘加工过程
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcesses(const std::vector<LineageProcess>& _processes);

                    /**
                     * 判断参数 Processes 是否已赋值
                     * @return Processes 是否已赋值
                     * 
                     */
                    bool ProcessesHasBeenSet() const;

                private:

                    /**
                     * 关联ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relationId;
                    bool m_relationIdHasBeenSet;

                    /**
                     * 源端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceUniqueId;
                    bool m_sourceUniqueIdHasBeenSet;

                    /**
                     * 目标端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetUniqueId;
                    bool m_targetUniqueIdHasBeenSet;

                    /**
                     * 血缘加工过程
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LineageProcess> m_processes;
                    bool m_processesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGERELATION_H_
