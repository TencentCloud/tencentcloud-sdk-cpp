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
                     * 获取<p>时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp <p>时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置<p>时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp <p>时间戳</p>
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
                     * 获取<p>错误类别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Category <p>错误类别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>错误类别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _category <p>错误类别</p>
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
                     * 获取<p>客户端应用程序名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientAppName <p>客户端应用程序名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientAppName() const;

                    /**
                     * 设置<p>客户端应用程序名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientAppName <p>客户端应用程序名称</p>
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
                     * 获取<p>客户端主机名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientHostName <p>客户端主机名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientHostName() const;

                    /**
                     * 设置<p>客户端主机名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientHostName <p>客户端主机名</p>
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
                     * 获取<p>CPU 时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuTime <p>CPU 时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCpuTime() const;

                    /**
                     * 设置<p>CPU 时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuTime <p>CPU 时间</p>
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
                     * 获取<p>数据库 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId <p>数据库 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDatabaseId() const;

                    /**
                     * 设置<p>数据库 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseId <p>数据库 ID</p>
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
                     * 获取<p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName <p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName <p>数据库名称</p>
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
                     * 获取<p>执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration <p>执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration <p>执行时间</p>
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
                     * 获取<p>错误编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorNumber <p>错误编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetErrorNumber() const;

                    /**
                     * 设置<p>错误编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorNumber <p>错误编号</p>
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
                     * 获取<p>是否被拦截</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsIntercepted <p>是否被拦截</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsIntercepted() const;

                    /**
                     * 设置<p>是否被拦截</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isIntercepted <p>是否被拦截</p>
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
                     * 获取<p>最后行计数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastRowCount <p>最后行计数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastRowCount() const;

                    /**
                     * 设置<p>最后行计数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastRowCount <p>最后行计数</p>
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
                     * 获取<p>逻辑读取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogicalReads <p>逻辑读取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLogicalReads() const;

                    /**
                     * 设置<p>逻辑读取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logicalReads <p>逻辑读取</p>
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
                     * 获取<p>消息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message <p>消息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>消息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message <p>消息</p>
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
                     * 获取<p>对象 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectId <p>对象 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetObjectId() const;

                    /**
                     * 设置<p>对象 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectId <p>对象 ID</p>
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
                     * 获取<p>对象名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectName <p>对象名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObjectName() const;

                    /**
                     * 设置<p>对象名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectName <p>对象名称</p>
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
                     * 获取<p>对象类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectType <p>对象类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置<p>对象类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectType <p>对象类型</p>
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
                     * 获取<p>输出参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputParameters <p>输出参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputParameters() const;

                    /**
                     * 设置<p>输出参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputParameters <p>输出参数</p>
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
                     * 获取<p>参数化计划句柄</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParameterizedPlanHandle <p>参数化计划句柄</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParameterizedPlanHandle() const;

                    /**
                     * 设置<p>参数化计划句柄</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parameterizedPlanHandle <p>参数化计划句柄</p>
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
                     * 获取<p>物理读取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhysicalReads <p>物理读取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPhysicalReads() const;

                    /**
                     * 设置<p>物理读取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _physicalReads <p>物理读取</p>
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
                     * 获取<p>结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result <p>结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置<p>结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result <p>结果</p>
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
                     * 获取<p>行计数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RowCount <p>行计数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRowCount() const;

                    /**
                     * 设置<p>行计数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rowCount <p>行计数</p>
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
                     * 获取<p>服务器主体名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerPrincipalName <p>服务器主体名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServerPrincipalName() const;

                    /**
                     * 设置<p>服务器主体名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverPrincipalName <p>服务器主体名称</p>
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
                     * 获取<p>会话服务器主体名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionServerPrincipalName <p>会话服务器主体名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionServerPrincipalName() const;

                    /**
                     * 设置<p>会话服务器主体名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionServerPrincipalName <p>会话服务器主体名称</p>
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
                     * 获取<p>严重性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Severity <p>严重性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSeverity() const;

                    /**
                     * 设置<p>严重性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _severity <p>严重性</p>
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
                     * 获取<p>源数据库 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceDatabaseId <p>源数据库 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSourceDatabaseId() const;

                    /**
                     * 设置<p>源数据库 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceDatabaseId <p>源数据库 ID</p>
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
                     * 获取<p>SQL 文本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlText <p>SQL 文本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置<p>SQL 文本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlText <p>SQL 文本</p>
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
                     * 获取<p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置<p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state <p>状态</p>
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
                     * 获取<p>语句</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Statement <p>语句</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatement() const;

                    /**
                     * 设置<p>语句</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statement <p>语句</p>
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
                     * 获取<p>系统线程 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemThreadId <p>系统线程 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSystemThreadId() const;

                    /**
                     * 设置<p>系统线程 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemThreadId <p>系统线程 ID</p>
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
                     * 获取<p>事务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransactionId <p>事务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTransactionId() const;

                    /**
                     * 设置<p>事务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transactionId <p>事务 ID</p>
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
                     * 获取<p>用户定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserDefined <p>用户定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserDefined() const;

                    /**
                     * 设置<p>用户定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userDefined <p>用户定义</p>
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
                     * 获取<p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName <p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName <p>用户名</p>
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
                     * 获取<p>写入</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Writes <p>写入</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWrites() const;

                    /**
                     * 设置<p>写入</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _writes <p>写入</p>
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
                     * 获取<p>目标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Destination <p>目标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置<p>目标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _destination <p>目标</p>
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

                    /**
                     * 获取<p>事件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventName <p>事件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置<p>事件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventName <p>事件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                private:

                    /**
                     * <p>时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>错误类别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>客户端应用程序名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientAppName;
                    bool m_clientAppNameHasBeenSet;

                    /**
                     * <p>客户端主机名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientHostName;
                    bool m_clientHostNameHasBeenSet;

                    /**
                     * <p>CPU 时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpuTime;
                    bool m_cpuTimeHasBeenSet;

                    /**
                     * <p>数据库 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * <p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>错误编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errorNumber;
                    bool m_errorNumberHasBeenSet;

                    /**
                     * <p>是否被拦截</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isIntercepted;
                    bool m_isInterceptedHasBeenSet;

                    /**
                     * <p>最后行计数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastRowCount;
                    bool m_lastRowCountHasBeenSet;

                    /**
                     * <p>逻辑读取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_logicalReads;
                    bool m_logicalReadsHasBeenSet;

                    /**
                     * <p>消息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>对象 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * <p>对象名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_objectName;
                    bool m_objectNameHasBeenSet;

                    /**
                     * <p>对象类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * <p>输出参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputParameters;
                    bool m_outputParametersHasBeenSet;

                    /**
                     * <p>参数化计划句柄</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parameterizedPlanHandle;
                    bool m_parameterizedPlanHandleHasBeenSet;

                    /**
                     * <p>物理读取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_physicalReads;
                    bool m_physicalReadsHasBeenSet;

                    /**
                     * <p>结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>行计数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rowCount;
                    bool m_rowCountHasBeenSet;

                    /**
                     * <p>服务器主体名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverPrincipalName;
                    bool m_serverPrincipalNameHasBeenSet;

                    /**
                     * <p>会话服务器主体名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionServerPrincipalName;
                    bool m_sessionServerPrincipalNameHasBeenSet;

                    /**
                     * <p>严重性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * <p>源数据库 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sourceDatabaseId;
                    bool m_sourceDatabaseIdHasBeenSet;

                    /**
                     * <p>SQL 文本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>语句</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statement;
                    bool m_statementHasBeenSet;

                    /**
                     * <p>系统线程 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_systemThreadId;
                    bool m_systemThreadIdHasBeenSet;

                    /**
                     * <p>事务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * <p>用户定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userDefined;
                    bool m_userDefinedHasBeenSet;

                    /**
                     * <p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>写入</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_writes;
                    bool m_writesHasBeenSet;

                    /**
                     * <p>目标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * <p>事件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_LOGRESULT_H_
