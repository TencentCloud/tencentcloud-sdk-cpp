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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LINEAGERELATIONVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LINEAGERELATIONVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/LineageProcessVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * LineageRelationVO
                */
                class LineageRelationVO : public AbstractModel
                {
                public:
                    LineageRelationVO();
                    ~LineageRelationVO() = default;
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
                     * @return SourceQualifiedId 源端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceQualifiedId() const;

                    /**
                     * 设置源端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceQualifiedId 源端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceQualifiedId(const std::string& _sourceQualifiedId);

                    /**
                     * 判断参数 SourceQualifiedId 是否已赋值
                     * @return SourceQualifiedId 是否已赋值
                     * 
                     */
                    bool SourceQualifiedIdHasBeenSet() const;

                    /**
                     * 获取目标端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetQualifiedId 目标端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetQualifiedId() const;

                    /**
                     * 设置目标端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetQualifiedId 目标端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetQualifiedId(const std::string& _targetQualifiedId);

                    /**
                     * 判断参数 TargetQualifiedId 是否已赋值
                     * @return TargetQualifiedId 是否已赋值
                     * 
                     */
                    bool TargetQualifiedIdHasBeenSet() const;

                    /**
                     * 获取血缘加工过程
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Processes 血缘加工过程
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LineageProcessVO> GetProcesses() const;

                    /**
                     * 设置血缘加工过程
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processes 血缘加工过程
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcesses(const std::vector<LineageProcessVO>& _processes);

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
                    std::string m_sourceQualifiedId;
                    bool m_sourceQualifiedIdHasBeenSet;

                    /**
                     * 目标端唯一血缘ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetQualifiedId;
                    bool m_targetQualifiedIdHasBeenSet;

                    /**
                     * 血缘加工过程
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LineageProcessVO> m_processes;
                    bool m_processesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LINEAGERELATIONVO_H_
