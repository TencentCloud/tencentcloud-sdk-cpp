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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_KYUUBIQUERYINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_KYUUBIQUERYINFO_H_

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
                * Kyuubi查询信息
                */
                class KyuubiQueryInfo : public AbstractModel
                {
                public:
                    KyuubiQueryInfo();
                    ~KyuubiQueryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取提交IP
                     * @return ClientIP 提交IP
                     * 
                     */
                    std::string GetClientIP() const;

                    /**
                     * 设置提交IP
                     * @param _clientIP 提交IP
                     * 
                     */
                    void SetClientIP(const std::string& _clientIP);

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     * 
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取执行时长
                     * @return Duration 执行时长
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置执行时长
                     * @param _duration 执行时长
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取Engine Id
                     * @return EngineID Engine Id
                     * 
                     */
                    std::string GetEngineID() const;

                    /**
                     * 设置Engine Id
                     * @param _engineID Engine Id
                     * 
                     */
                    void SetEngineID(const std::string& _engineID);

                    /**
                     * 判断参数 EngineID 是否已赋值
                     * @return EngineID 是否已赋值
                     * 
                     */
                    bool EngineIDHasBeenSet() const;

                    /**
                     * 获取计算引擎
                     * @return EngineType 计算引擎
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置计算引擎
                     * @param _engineType 计算引擎
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取ID
                     * @return Id ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID
                     * @param _id ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Session Id
                     * @return SessionID Session Id
                     * 
                     */
                    std::string GetSessionID() const;

                    /**
                     * 设置Session Id
                     * @param _sessionID Session Id
                     * 
                     */
                    void SetSessionID(const std::string& _sessionID);

                    /**
                     * 判断参数 SessionID 是否已赋值
                     * @return SessionID 是否已赋值
                     * 
                     */
                    bool SessionIDHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return BeginTime 开始时间
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置开始时间
                     * @param _beginTime 开始时间
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取执行状态
                     * @return ExecutionState 执行状态
                     * 
                     */
                    std::string GetExecutionState() const;

                    /**
                     * 设置执行状态
                     * @param _executionState 执行状态
                     * 
                     */
                    void SetExecutionState(const std::string& _executionState);

                    /**
                     * 判断参数 ExecutionState 是否已赋值
                     * @return ExecutionState 是否已赋值
                     * 
                     */
                    bool ExecutionStateHasBeenSet() const;

                    /**
                     * 获取执行语句
                     * @return ExecutionStatement 执行语句
                     * 
                     */
                    std::string GetExecutionStatement() const;

                    /**
                     * 设置执行语句
                     * @param _executionStatement 执行语句
                     * 
                     */
                    void SetExecutionStatement(const std::string& _executionStatement);

                    /**
                     * 判断参数 ExecutionStatement 是否已赋值
                     * @return ExecutionStatement 是否已赋值
                     * 
                     */
                    bool ExecutionStatementHasBeenSet() const;

                    /**
                     * 获取Statement Id
                     * @return StatementID Statement Id
                     * 
                     */
                    std::string GetStatementID() const;

                    /**
                     * 设置Statement Id
                     * @param _statementID Statement Id
                     * 
                     */
                    void SetStatementID(const std::string& _statementID);

                    /**
                     * 判断参数 StatementID 是否已赋值
                     * @return StatementID 是否已赋值
                     * 
                     */
                    bool StatementIDHasBeenSet() const;

                    /**
                     * 获取提交用户
                     * @return User 提交用户
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置提交用户
                     * @param _user 提交用户
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                private:

                    /**
                     * 提交IP
                     */
                    std::string m_clientIP;
                    bool m_clientIPHasBeenSet;

                    /**
                     * 执行时长
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Engine Id
                     */
                    std::string m_engineID;
                    bool m_engineIDHasBeenSet;

                    /**
                     * 计算引擎
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Session Id
                     */
                    std::string m_sessionID;
                    bool m_sessionIDHasBeenSet;

                    /**
                     * 开始时间
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 执行状态
                     */
                    std::string m_executionState;
                    bool m_executionStateHasBeenSet;

                    /**
                     * 执行语句
                     */
                    std::string m_executionStatement;
                    bool m_executionStatementHasBeenSet;

                    /**
                     * Statement Id
                     */
                    std::string m_statementID;
                    bool m_statementIDHasBeenSet;

                    /**
                     * 提交用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_KYUUBIQUERYINFO_H_
