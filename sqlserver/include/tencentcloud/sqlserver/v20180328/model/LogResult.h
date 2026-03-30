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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_LOGRESULT_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_LOGRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 日志结果
                */
                class LogResult : public AbstractModel
                {
                public:
                    LogResult();
                    ~LogResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取错误类别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Category 错误类别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置错误类别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _category 错误类别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取客户端应用程序名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientAppName 客户端应用程序名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientAppName() const;

                    /**
                     * 设置客户端应用程序名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientAppName 客户端应用程序名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientAppName(const std::string& _clientAppName);

                    /**
                     * 判断参数 ClientAppName 是否已赋值
                     * @return ClientAppName 是否已赋值
                     * 
                     */
                    bool ClientAppNameHasBeenSet() const;

                    /**
                     * 获取客户端主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientHostName 客户端主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientHostName() const;

                    /**
                     * 设置客户端主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientHostName 客户端主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientHostName(const std::string& _clientHostName);

                    /**
                     * 判断参数 ClientHostName 是否已赋值
                     * @return ClientHostName 是否已赋值
                     * 
                     */
                    bool ClientHostNameHasBeenSet() const;

                    /**
                     * 获取CPU 时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuTime CPU 时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCpuTime() const;

                    /**
                     * 设置CPU 时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuTime CPU 时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuTime(const int64_t& _cpuTime);

                    /**
                     * 判断参数 CpuTime 是否已赋值
                     * @return CpuTime 是否已赋值
                     * 
                     */
                    bool CpuTimeHasBeenSet() const;

                    /**
                     * 获取数据库 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId 数据库 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDatabaseId() const;

                    /**
                     * 设置数据库 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseId 数据库 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseId(const int64_t& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 执行时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取错误编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorNumber 错误编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetErrorNumber() const;

                    /**
                     * 设置错误编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorNumber 错误编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorNumber(const int64_t& _errorNumber);

                    /**
                     * 判断参数 ErrorNumber 是否已赋值
                     * @return ErrorNumber 是否已赋值
                     * 
                     */
                    bool ErrorNumberHasBeenSet() const;

                    /**
                     * 获取是否被拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsIntercepted 是否被拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsIntercepted() const;

                    /**
                     * 设置是否被拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isIntercepted 是否被拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsIntercepted(const std::string& _isIntercepted);

                    /**
                     * 判断参数 IsIntercepted 是否已赋值
                     * @return IsIntercepted 是否已赋值
                     * 
                     */
                    bool IsInterceptedHasBeenSet() const;

                    /**
                     * 获取最后行计数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastRowCount 最后行计数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastRowCount() const;

                    /**
                     * 设置最后行计数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastRowCount 最后行计数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastRowCount(const int64_t& _lastRowCount);

                    /**
                     * 判断参数 LastRowCount 是否已赋值
                     * @return LastRowCount 是否已赋值
                     * 
                     */
                    bool LastRowCountHasBeenSet() const;

                    /**
                     * 获取逻辑读取
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogicalReads 逻辑读取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLogicalReads() const;

                    /**
                     * 设置逻辑读取
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logicalReads 逻辑读取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogicalReads(const int64_t& _logicalReads);

                    /**
                     * 判断参数 LogicalReads 是否已赋值
                     * @return LogicalReads 是否已赋值
                     * 
                     */
                    bool LogicalReadsHasBeenSet() const;

                    /**
                     * 获取消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 消息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 消息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取对象 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectId 对象 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetObjectId() const;

                    /**
                     * 设置对象 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectId 对象 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjectId(const int64_t& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取对象名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectName 对象名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObjectName() const;

                    /**
                     * 设置对象名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectName 对象名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjectName(const std::string& _objectName);

                    /**
                     * 判断参数 ObjectName 是否已赋值
                     * @return ObjectName 是否已赋值
                     * 
                     */
                    bool ObjectNameHasBeenSet() const;

                    /**
                     * 获取对象类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectType 对象类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置对象类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectType 对象类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjectType(const std::string& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                    /**
                     * 获取输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputParameters 输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputParameters() const;

                    /**
                     * 设置输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputParameters 输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputParameters(const std::string& _outputParameters);

                    /**
                     * 判断参数 OutputParameters 是否已赋值
                     * @return OutputParameters 是否已赋值
                     * 
                     */
                    bool OutputParametersHasBeenSet() const;

                    /**
                     * 获取参数化计划句柄
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParameterizedPlanHandle 参数化计划句柄
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParameterizedPlanHandle() const;

                    /**
                     * 设置参数化计划句柄
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parameterizedPlanHandle 参数化计划句柄
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParameterizedPlanHandle(const std::string& _parameterizedPlanHandle);

                    /**
                     * 判断参数 ParameterizedPlanHandle 是否已赋值
                     * @return ParameterizedPlanHandle 是否已赋值
                     * 
                     */
                    bool ParameterizedPlanHandleHasBeenSet() const;

                    /**
                     * 获取物理读取
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhysicalReads 物理读取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPhysicalReads() const;

                    /**
                     * 设置物理读取
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _physicalReads 物理读取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhysicalReads(const int64_t& _physicalReads);

                    /**
                     * 判断参数 PhysicalReads 是否已赋值
                     * @return PhysicalReads 是否已赋值
                     * 
                     */
                    bool PhysicalReadsHasBeenSet() const;

                    /**
                     * 获取结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取行计数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RowCount 行计数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRowCount() const;

                    /**
                     * 设置行计数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rowCount 行计数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRowCount(const int64_t& _rowCount);

                    /**
                     * 判断参数 RowCount 是否已赋值
                     * @return RowCount 是否已赋值
                     * 
                     */
                    bool RowCountHasBeenSet() const;

                    /**
                     * 获取服务器主体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerPrincipalName 服务器主体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServerPrincipalName() const;

                    /**
                     * 设置服务器主体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverPrincipalName 服务器主体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServerPrincipalName(const std::string& _serverPrincipalName);

                    /**
                     * 判断参数 ServerPrincipalName 是否已赋值
                     * @return ServerPrincipalName 是否已赋值
                     * 
                     */
                    bool ServerPrincipalNameHasBeenSet() const;

                    /**
                     * 获取会话服务器主体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionServerPrincipalName 会话服务器主体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionServerPrincipalName() const;

                    /**
                     * 设置会话服务器主体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionServerPrincipalName 会话服务器主体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionServerPrincipalName(const std::string& _sessionServerPrincipalName);

                    /**
                     * 判断参数 SessionServerPrincipalName 是否已赋值
                     * @return SessionServerPrincipalName 是否已赋值
                     * 
                     */
                    bool SessionServerPrincipalNameHasBeenSet() const;

                    /**
                     * 获取严重性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Severity 严重性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSeverity() const;

                    /**
                     * 设置严重性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _severity 严重性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeverity(const int64_t& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取源数据库 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceDatabaseId 源数据库 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSourceDatabaseId() const;

                    /**
                     * 设置源数据库 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceDatabaseId 源数据库 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceDatabaseId(const int64_t& _sourceDatabaseId);

                    /**
                     * 判断参数 SourceDatabaseId 是否已赋值
                     * @return SourceDatabaseId 是否已赋值
                     * 
                     */
                    bool SourceDatabaseIdHasBeenSet() const;

                    /**
                     * 获取SQL 文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlText SQL 文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置SQL 文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlText SQL 文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlText(const std::string& _sqlText);

                    /**
                     * 判断参数 SqlText 是否已赋值
                     * @return SqlText 是否已赋值
                     * 
                     */
                    bool SqlTextHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取语句
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Statement 语句
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatement() const;

                    /**
                     * 设置语句
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statement 语句
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取系统线程 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemThreadId 系统线程 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSystemThreadId() const;

                    /**
                     * 设置系统线程 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemThreadId 系统线程 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSystemThreadId(const int64_t& _systemThreadId);

                    /**
                     * 判断参数 SystemThreadId 是否已赋值
                     * @return SystemThreadId 是否已赋值
                     * 
                     */
                    bool SystemThreadIdHasBeenSet() const;

                    /**
                     * 获取事务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransactionId 事务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTransactionId() const;

                    /**
                     * 设置事务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transactionId 事务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransactionId(const int64_t& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取用户定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserDefined 用户定义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserDefined() const;

                    /**
                     * 设置用户定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userDefined 用户定义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserDefined(const std::string& _userDefined);

                    /**
                     * 判断参数 UserDefined 是否已赋值
                     * @return UserDefined 是否已赋值
                     * 
                     */
                    bool UserDefinedHasBeenSet() const;

                    /**
                     * 获取用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取写入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Writes 写入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWrites() const;

                    /**
                     * 设置写入
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _writes 写入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWrites(const int64_t& _writes);

                    /**
                     * 判断参数 Writes 是否已赋值
                     * @return Writes 是否已赋值
                     * 
                     */
                    bool WritesHasBeenSet() const;

                    /**
                     * 获取目标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Destination 目标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置目标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _destination 目标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDestination(const std::string& _destination);

                    /**
                     * 判断参数 Destination 是否已赋值
                     * @return Destination 是否已赋值
                     * 
                     */
                    bool DestinationHasBeenSet() const;

                private:

                    /**
                     * 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 错误类别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 客户端应用程序名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientAppName;
                    bool m_clientAppNameHasBeenSet;

                    /**
                     * 客户端主机名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientHostName;
                    bool m_clientHostNameHasBeenSet;

                    /**
                     * CPU 时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpuTime;
                    bool m_cpuTimeHasBeenSet;

                    /**
                     * 数据库 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 错误编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errorNumber;
                    bool m_errorNumberHasBeenSet;

                    /**
                     * 是否被拦截
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isIntercepted;
                    bool m_isInterceptedHasBeenSet;

                    /**
                     * 最后行计数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastRowCount;
                    bool m_lastRowCountHasBeenSet;

                    /**
                     * 逻辑读取
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_logicalReads;
                    bool m_logicalReadsHasBeenSet;

                    /**
                     * 消息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 对象 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * 对象名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_objectName;
                    bool m_objectNameHasBeenSet;

                    /**
                     * 对象类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * 输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputParameters;
                    bool m_outputParametersHasBeenSet;

                    /**
                     * 参数化计划句柄
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parameterizedPlanHandle;
                    bool m_parameterizedPlanHandleHasBeenSet;

                    /**
                     * 物理读取
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_physicalReads;
                    bool m_physicalReadsHasBeenSet;

                    /**
                     * 结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 行计数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rowCount;
                    bool m_rowCountHasBeenSet;

                    /**
                     * 服务器主体名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverPrincipalName;
                    bool m_serverPrincipalNameHasBeenSet;

                    /**
                     * 会话服务器主体名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionServerPrincipalName;
                    bool m_sessionServerPrincipalNameHasBeenSet;

                    /**
                     * 严重性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * 源数据库 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sourceDatabaseId;
                    bool m_sourceDatabaseIdHasBeenSet;

                    /**
                     * SQL 文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 语句
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statement;
                    bool m_statementHasBeenSet;

                    /**
                     * 系统线程 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_systemThreadId;
                    bool m_systemThreadIdHasBeenSet;

                    /**
                     * 事务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * 用户定义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userDefined;
                    bool m_userDefinedHasBeenSet;

                    /**
                     * 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 写入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_writes;
                    bool m_writesHasBeenSet;

                    /**
                     * 目标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_LOGRESULT_H_
