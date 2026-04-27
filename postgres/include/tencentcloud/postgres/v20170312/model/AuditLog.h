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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITLOG_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 审计日志详情
                */
                class AuditLog : public AbstractModel
                {
                public:
                    AuditLog();
                    ~AuditLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日志时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp <p>日志时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置<p>日志时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp <p>日志时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取<p>影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AffectRows <p>影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAffectRows() const;

                    /**
                     * 设置<p>影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affectRows <p>影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAffectRows(const int64_t& _affectRows);

                    /**
                     * 判断参数 AffectRows 是否已赋值
                     * @return AffectRows 是否已赋值
                     * 
                     */
                    bool AffectRowsHasBeenSet() const;

                    /**
                     * 获取<p>数据库</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBName <p>数据库</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置<p>数据库</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dBName <p>数据库</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取<p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrCode <p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置<p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errCode <p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrCode(const std::string& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecTime <p>执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置<p>执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execTime <p>执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecTime(const int64_t& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取<p>访问来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Host <p>访问来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>访问来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _host <p>访问来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>实例Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId <p>实例Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId <p>实例Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * 获取<p>sql</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sql <p>sql</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置<p>sql</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sql <p>sql</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取<p>sql类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlType <p>sql类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置<p>sql类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlType <p>sql类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlType(const std::string& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取<p>线程ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThreadId <p>线程ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThreadId() const;

                    /**
                     * 设置<p>线程ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _threadId <p>线程ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThreadId(const std::string& _threadId);

                    /**
                     * 判断参数 ThreadId 是否已赋值
                     * @return ThreadId 是否已赋值
                     * 
                     */
                    bool ThreadIdHasBeenSet() const;

                    /**
                     * 获取<p>用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return User <p>用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _user <p>用户</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * <p>日志时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * <p>数据库</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * <p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * <p>访问来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>实例Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

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
                     * <p>sql</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * <p>sql类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * <p>线程ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * <p>用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITLOG_H_
