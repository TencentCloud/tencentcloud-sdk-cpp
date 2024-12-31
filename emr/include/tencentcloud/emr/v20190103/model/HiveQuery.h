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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_HIVEQUERY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_HIVEQUERY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Hive查询详情
                */
                class HiveQuery : public AbstractModel
                {
                public:
                    HiveQuery();
                    ~HiveQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询语句
                     * @return Statement 查询语句
                     * 
                     */
                    std::string GetStatement() const;

                    /**
                     * 设置查询语句
                     * @param _statement 查询语句
                     * 
                     */
                    void SetStatement(const std::string& _statement);

                    /**
                     * 判断参数 Statement 是否已赋值
                     * @return Statement 是否已赋值
                     * 
                     */
                    bool StatementHasBeenSet() const;

                    /**
                     * 获取执行时长
                     * @return Duration 执行时长
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置执行时长
                     * @param _duration 执行时长
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取开始时间毫秒
                     * @return StartTime 开始时间毫秒
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间毫秒
                     * @param _startTime 开始时间毫秒
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间毫秒
                     * @return EndTime 结束时间毫秒
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间毫秒
                     * @param _endTime 结束时间毫秒
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return State 状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态
                     * @param _state 状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取用户
                     * @return User 用户
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户
                     * @param _user 用户
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取appId列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobIds appId列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetJobIds() const;

                    /**
                     * 设置appId列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobIds appId列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobIds(const std::vector<std::string>& _jobIds);

                    /**
                     * 判断参数 JobIds 是否已赋值
                     * @return JobIds 是否已赋值
                     * 
                     */
                    bool JobIdsHasBeenSet() const;

                    /**
                     * 获取执行引擎
                     * @return ExecutionEngine 执行引擎
                     * 
                     */
                    std::string GetExecutionEngine() const;

                    /**
                     * 设置执行引擎
                     * @param _executionEngine 执行引擎
                     * 
                     */
                    void SetExecutionEngine(const std::string& _executionEngine);

                    /**
                     * 判断参数 ExecutionEngine 是否已赋值
                     * @return ExecutionEngine 是否已赋值
                     * 
                     */
                    bool ExecutionEngineHasBeenSet() const;

                    /**
                     * 获取查询ID
                     * @return Id 查询ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置查询ID
                     * @param _id 查询ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 查询语句
                     */
                    std::string m_statement;
                    bool m_statementHasBeenSet;

                    /**
                     * 执行时长
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 开始时间毫秒
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间毫秒
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * appId列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_jobIds;
                    bool m_jobIdsHasBeenSet;

                    /**
                     * 执行引擎
                     */
                    std::string m_executionEngine;
                    bool m_executionEngineHasBeenSet;

                    /**
                     * 查询ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_HIVEQUERY_H_
