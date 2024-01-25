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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LATESTANALYSEINFOTASK_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LATESTANALYSEINFOTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 最近一次开发空间运行记录信息任务体
                */
                class LatestAnalyseInfoTask : public AbstractModel
                {
                public:
                    LatestAnalyseInfoTask();
                    ~LatestAnalyseInfoTask() = default;
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
                     * 获取记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId 记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordId 记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取当前时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurRunDate 当前时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置当前时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _curRunDate 当前时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取请求脚本编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestScriptId 请求脚本编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestScriptId() const;

                    /**
                     * 设置请求脚本编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestScriptId 请求脚本编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestScriptId(const std::string& _requestScriptId);

                    /**
                     * 判断参数 RequestScriptId 是否已赋值
                     * @return RequestScriptId 是否已赋值
                     * 
                     */
                    bool RequestScriptIdHasBeenSet() const;

                    /**
                     * 获取任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskStatus 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskStatus 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取创建用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUser 创建用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置创建用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUser 创建用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取项目编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 当前时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 请求脚本编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestScriptId;
                    bool m_requestScriptIdHasBeenSet;

                    /**
                     * 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 创建用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * 项目编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LATESTANALYSEINFOTASK_H_
