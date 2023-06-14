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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECEXPORTRESULT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECEXPORTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ExportTaskInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 规则执行结果导出结果
                */
                class RuleExecExportResult : public AbstractModel
                {
                public:
                    RuleExecExportResult();
                    ~RuleExecExportResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则执行id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleExecId 规则执行id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleExecId() const;

                    /**
                     * 设置规则执行id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleExecId 规则执行id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleExecId(const uint64_t& _ruleExecId);

                    /**
                     * 判断参数 RuleExecId 是否已赋值
                     * @return RuleExecId 是否已赋值
                     * 
                     */
                    bool RuleExecIdHasBeenSet() const;

                    /**
                     * 获取导出任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExportTasks 导出任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExportTaskInfo> GetExportTasks() const;

                    /**
                     * 设置导出任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exportTasks 导出任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExportTasks(const std::vector<ExportTaskInfo>& _exportTasks);

                    /**
                     * 判断参数 ExportTasks 是否已赋值
                     * @return ExportTasks 是否已赋值
                     * 
                     */
                    bool ExportTasksHasBeenSet() const;

                private:

                    /**
                     * 规则执行id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleExecId;
                    bool m_ruleExecIdHasBeenSet;

                    /**
                     * 导出任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExportTaskInfo> m_exportTasks;
                    bool m_exportTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECEXPORTRESULT_H_
