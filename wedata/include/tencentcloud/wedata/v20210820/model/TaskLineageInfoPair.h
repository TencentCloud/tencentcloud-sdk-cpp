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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLINEAGEINFOPAIR_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLINEAGEINFOPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskLineageInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务血缘信息，包括源表和目标表
                */
                class TaskLineageInfoPair : public AbstractModel
                {
                public:
                    TaskLineageInfoPair();
                    ~TaskLineageInfoPair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表血缘-源表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceTable 表血缘-源表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskLineageInfo GetSourceTable() const;

                    /**
                     * 设置表血缘-源表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceTable 表血缘-源表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceTable(const TaskLineageInfo& _sourceTable);

                    /**
                     * 判断参数 SourceTable 是否已赋值
                     * @return SourceTable 是否已赋值
                     * 
                     */
                    bool SourceTableHasBeenSet() const;

                    /**
                     * 获取表血缘-目标表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetTable 表血缘-目标表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskLineageInfo GetTargetTable() const;

                    /**
                     * 设置表血缘-目标表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetTable 表血缘-目标表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetTable(const TaskLineageInfo& _targetTable);

                    /**
                     * 判断参数 TargetTable 是否已赋值
                     * @return TargetTable 是否已赋值
                     * 
                     */
                    bool TargetTableHasBeenSet() const;

                private:

                    /**
                     * 表血缘-源表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskLineageInfo m_sourceTable;
                    bool m_sourceTableHasBeenSet;

                    /**
                     * 表血缘-目标表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskLineageInfo m_targetTable;
                    bool m_targetTableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLINEAGEINFOPAIR_H_
