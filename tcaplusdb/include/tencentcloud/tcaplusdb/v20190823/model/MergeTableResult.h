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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MERGETABLERESULT_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MERGETABLERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CompareTablesInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 合服结果
                */
                class MergeTableResult : public AbstractModel
                {
                public:
                    MergeTableResult();
                    ~MergeTableResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取成功时此字段返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Error 成功时此字段返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置成功时此字段返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _error 成功时此字段返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取对比的表格信息
                     * @return Table 对比的表格信息
                     * 
                     */
                    CompareTablesInfo GetTable() const;

                    /**
                     * 设置对比的表格信息
                     * @param _table 对比的表格信息
                     * 
                     */
                    void SetTable(const CompareTablesInfo& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取申请单Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 申请单Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置申请单Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationId 申请单Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                private:

                    /**
                     * 任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 成功时此字段返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * 对比的表格信息
                     */
                    CompareTablesInfo m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 申请单Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MERGETABLERESULT_H_
