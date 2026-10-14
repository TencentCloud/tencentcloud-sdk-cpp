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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITDBLOGITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITDBLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DB 层审计日志单条明细。字段由 DruidCommonUtil#changeLogsTdsqlDB 和 BusinessCodeUtils 固定输出。LogType=All 时额外追加 FlowTime。
                */
                class AuditDBLogItem : public AbstractModel
                {
                public:
                    AuditDBLogItem();
                    ~AuditDBLogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>SQL 执行时间点（格式化字符串，yyyy-MM-dd HH:mm:ss）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp <p>SQL 执行时间点（格式化字符串，yyyy-MM-dd HH:mm:ss）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置<p>SQL 执行时间点（格式化字符串，yyyy-MM-dd HH:mm:ss）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp <p>SQL 执行时间点（格式化字符串，yyyy-MM-dd HH:mm:ss）。</p>
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
                     * 获取<p>集群 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId <p>集群 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId <p>集群 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>影响行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AffectRows <p>影响行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAffectRows() const;

                    /**
                     * 设置<p>影响行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affectRows <p>影响行数。</p>
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
                     * 获取<p>扫描行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckRows <p>扫描行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCheckRows() const;

                    /**
                     * 设置<p>扫描行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkRows <p>扫描行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckRows(const int64_t& _checkRows);

                    /**
                     * 判断参数 CheckRows 是否已赋值
                     * @return CheckRows 是否已赋值
                     * 
                     */
                    bool CheckRowsHasBeenSet() const;

                    /**
                     * 获取<p>CPU 耗时（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuTime <p>CPU 耗时（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCpuTime() const;

                    /**
                     * 设置<p>CPU 耗时（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuTime <p>CPU 耗时（微秒）。</p>
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
                     * 获取<p>后端 Set Host（源字段 dbHost）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetHost <p>后端 Set Host（源字段 dbHost）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSetHost() const;

                    /**
                     * 设置<p>后端 Set Host（源字段 dbHost）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setHost <p>后端 Set Host（源字段 dbHost）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSetHost(const std::string& _setHost);

                    /**
                     * 判断参数 SetHost 是否已赋值
                     * @return SetHost 是否已赋值
                     * 
                     */
                    bool SetHostHasBeenSet() const;

                    /**
                     * 获取<p>SQL 执行所在的数据库名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBName <p>SQL 执行所在的数据库名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置<p>SQL 执行所在的数据库名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dBName <p>SQL 执行所在的数据库名。</p>
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
                     * 获取<p>SQL 执行返回的错误码，0 表示成功。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrCode <p>SQL 执行返回的错误码，0 表示成功。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置<p>SQL 执行返回的错误码，0 表示成功。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errCode <p>SQL 执行返回的错误码，0 表示成功。</p>
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
                     * 获取<p>SQL 执行耗时（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecTime <p>SQL 执行耗时（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置<p>SQL 执行耗时（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execTime <p>SQL 执行耗时（微秒）。</p>
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
                     * 获取<p>客户端来源 IP。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Host <p>客户端来源 IP。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>客户端来源 IP。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _host <p>客户端来源 IP。</p>
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
                     * 获取<p>Set 名称（源字段 instanceId）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetName <p>Set 名称（源字段 instanceId）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSetName() const;

                    /**
                     * 设置<p>Set 名称（源字段 instanceId）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setName <p>Set 名称（源字段 instanceId）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSetName(const std::string& _setName);

                    /**
                     * 判断参数 SetName 是否已赋值
                     * @return SetName 是否已赋值
                     * 
                     */
                    bool SetNameHasBeenSet() const;

                    /**
                     * 获取<p>IO 等待时间（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IoWaitTime <p>IO 等待时间（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIoWaitTime() const;

                    /**
                     * 设置<p>IO 等待时间（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ioWaitTime <p>IO 等待时间（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIoWaitTime(const int64_t& _ioWaitTime);

                    /**
                     * 判断参数 IoWaitTime 是否已赋值
                     * @return IoWaitTime 是否已赋值
                     * 
                     */
                    bool IoWaitTimeHasBeenSet() const;

                    /**
                     * 获取<p>锁等待时间（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockWaitTime <p>锁等待时间（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLockWaitTime() const;

                    /**
                     * 设置<p>锁等待时间（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockWaitTime <p>锁等待时间（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLockWaitTime(const int64_t& _lockWaitTime);

                    /**
                     * 判断参数 LockWaitTime 是否已赋值
                     * @return LockWaitTime 是否已赋值
                     * 
                     */
                    bool LockWaitTimeHasBeenSet() const;

                    /**
                     * 获取<p>SQL 开始时间（纳秒级时间戳）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlStartTimeNs <p>SQL 开始时间（纳秒级时间戳）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSqlStartTimeNs() const;

                    /**
                     * 设置<p>SQL 开始时间（纳秒级时间戳）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlStartTimeNs <p>SQL 开始时间（纳秒级时间戳）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlStartTimeNs(const int64_t& _sqlStartTimeNs);

                    /**
                     * 判断参数 SqlStartTimeNs 是否已赋值
                     * @return SqlStartTimeNs 是否已赋值
                     * 
                     */
                    bool SqlStartTimeNsHasBeenSet() const;

                    /**
                     * 获取<p>查询 ID（用于关联查询）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryId <p>查询 ID（用于关联查询）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueryId() const;

                    /**
                     * 设置<p>查询 ID（用于关联查询）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryId <p>查询 ID（用于关联查询）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryId(const std::string& _queryId);

                    /**
                     * 判断参数 QueryId 是否已赋值
                     * @return QueryId 是否已赋值
                     * 
                     */
                    bool QueryIdHasBeenSet() const;

                    /**
                     * 获取<p>查询序号（同一事务内 SQL 的序列号）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryNo <p>查询序号（同一事务内 SQL 的序列号）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQueryNo() const;

                    /**
                     * 设置<p>查询序号（同一事务内 SQL 的序列号）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryNo <p>查询序号（同一事务内 SQL 的序列号）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryNo(const int64_t& _queryNo);

                    /**
                     * 判断参数 QueryNo 是否已赋值
                     * @return QueryNo 是否已赋值
                     * 
                     */
                    bool QueryNoHasBeenSet() const;

                    /**
                     * 获取<p>返回行数（扫描结果集行数）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SentRows <p>返回行数（扫描结果集行数）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSentRows() const;

                    /**
                     * 设置<p>返回行数（扫描结果集行数）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sentRows <p>返回行数（扫描结果集行数）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSentRows(const int64_t& _sentRows);

                    /**
                     * 判断参数 SentRows 是否已赋值
                     * @return SentRows 是否已赋值
                     * 
                     */
                    bool SentRowsHasBeenSet() const;

                    /**
                     * 获取<p>执行的 SQL 语句原文。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sql <p>执行的 SQL 语句原文。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置<p>执行的 SQL 语句原文。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sql <p>执行的 SQL 语句原文。</p>
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
                     * 获取<p>SQL 模板 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlTemplateId <p>SQL 模板 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlTemplateId() const;

                    /**
                     * 设置<p>SQL 模板 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlTemplateId <p>SQL 模板 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlTemplateId(const std::string& _sqlTemplateId);

                    /**
                     * 判断参数 SqlTemplateId 是否已赋值
                     * @return SqlTemplateId 是否已赋值
                     * 
                     */
                    bool SqlTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>SQL 类型（如 Select、Insert、Update、Delete 等）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlType <p>SQL 类型（如 Select、Insert、Update、Delete 等）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置<p>SQL 类型（如 Select、Insert、Update、Delete 等）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlType <p>SQL 类型（如 Select、Insert、Update、Delete 等）。</p>
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
                     * 获取<p>涉及的表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tables <p>涉及的表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTables() const;

                    /**
                     * 设置<p>涉及的表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tables <p>涉及的表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTables(const std::string& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取<p>线程 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThreadId <p>线程 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThreadId() const;

                    /**
                     * 设置<p>线程 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _threadId <p>线程 ID。</p>
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
                     * 获取<p>SQL 开始时间（毫秒级时间戳）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlStartTime <p>SQL 开始时间（毫秒级时间戳）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSqlStartTime() const;

                    /**
                     * 设置<p>SQL 开始时间（毫秒级时间戳）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlStartTime <p>SQL 开始时间（毫秒级时间戳）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlStartTime(const int64_t& _sqlStartTime);

                    /**
                     * 判断参数 SqlStartTime 是否已赋值
                     * @return SqlStartTime 是否已赋值
                     * 
                     */
                    bool SqlStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>事务存活时间（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrxLivingTime <p>事务存活时间（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTrxLivingTime() const;

                    /**
                     * 设置<p>事务存活时间（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trxLivingTime <p>事务存活时间（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrxLivingTime(const int64_t& _trxLivingTime);

                    /**
                     * 判断参数 TrxLivingTime 是否已赋值
                     * @return TrxLivingTime 是否已赋值
                     * 
                     */
                    bool TrxLivingTimeHasBeenSet() const;

                    /**
                     * 获取<p>执行 SQL 的数据库用户名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return User <p>执行 SQL 的数据库用户名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>执行 SQL 的数据库用户名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _user <p>执行 SQL 的数据库用户名。</p>
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

                    /**
                     * 获取<p>事务 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrxId <p>事务 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrxId() const;

                    /**
                     * 设置<p>事务 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trxId <p>事务 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrxId(const std::string& _trxId);

                    /**
                     * 判断参数 TrxId 是否已赋值
                     * @return TrxId 是否已赋值
                     * 
                     */
                    bool TrxIdHasBeenSet() const;

                    /**
                     * 获取<p>内部 XID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternalXId <p>内部 XID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInternalXId() const;

                    /**
                     * 设置<p>内部 XID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internalXId <p>内部 XID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternalXId(const std::string& _internalXId);

                    /**
                     * 判断参数 InternalXId 是否已赋值
                     * @return InternalXId 是否已赋值
                     * 
                     */
                    bool InternalXIdHasBeenSet() const;

                    /**
                     * 获取<p>业务码（由业务侧 SQL 注释中 i/o/p 等 KV 提取）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessCode <p>业务码（由业务侧 SQL 注释中 i/o/p 等 KV 提取）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置<p>业务码（由业务侧 SQL 注释中 i/o/p 等 KV 提取）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessCode <p>业务码（由业务侧 SQL 注释中 i/o/p 等 KV 提取）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取<p>网关流转耗时（毫秒），仅 LogType=All 时由 Gateway 日志关联后返回；LogType=DB 时该字段不下发。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowTime <p>网关流转耗时（毫秒），仅 LogType=All 时由 Gateway 日志关联后返回；LogType=DB 时该字段不下发。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFlowTime() const;

                    /**
                     * 设置<p>网关流转耗时（毫秒），仅 LogType=All 时由 Gateway 日志关联后返回；LogType=DB 时该字段不下发。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flowTime <p>网关流转耗时（毫秒），仅 LogType=All 时由 Gateway 日志关联后返回；LogType=DB 时该字段不下发。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlowTime(const int64_t& _flowTime);

                    /**
                     * 判断参数 FlowTime 是否已赋值
                     * @return FlowTime 是否已赋值
                     * 
                     */
                    bool FlowTimeHasBeenSet() const;

                private:

                    /**
                     * <p>SQL 执行时间点（格式化字符串，yyyy-MM-dd HH:mm:ss）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>集群 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>影响行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * <p>扫描行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_checkRows;
                    bool m_checkRowsHasBeenSet;

                    /**
                     * <p>CPU 耗时（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpuTime;
                    bool m_cpuTimeHasBeenSet;

                    /**
                     * <p>后端 Set Host（源字段 dbHost）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_setHost;
                    bool m_setHostHasBeenSet;

                    /**
                     * <p>SQL 执行所在的数据库名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * <p>SQL 执行返回的错误码，0 表示成功。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>SQL 执行耗时（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * <p>客户端来源 IP。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>Set 名称（源字段 instanceId）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_setName;
                    bool m_setNameHasBeenSet;

                    /**
                     * <p>IO 等待时间（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ioWaitTime;
                    bool m_ioWaitTimeHasBeenSet;

                    /**
                     * <p>锁等待时间（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lockWaitTime;
                    bool m_lockWaitTimeHasBeenSet;

                    /**
                     * <p>SQL 开始时间（纳秒级时间戳）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sqlStartTimeNs;
                    bool m_sqlStartTimeNsHasBeenSet;

                    /**
                     * <p>查询 ID（用于关联查询）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queryId;
                    bool m_queryIdHasBeenSet;

                    /**
                     * <p>查询序号（同一事务内 SQL 的序列号）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_queryNo;
                    bool m_queryNoHasBeenSet;

                    /**
                     * <p>返回行数（扫描结果集行数）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sentRows;
                    bool m_sentRowsHasBeenSet;

                    /**
                     * <p>执行的 SQL 语句原文。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * <p>SQL 模板 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlTemplateId;
                    bool m_sqlTemplateIdHasBeenSet;

                    /**
                     * <p>SQL 类型（如 Select、Insert、Update、Delete 等）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * <p>涉及的表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * <p>线程 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * <p>SQL 开始时间（毫秒级时间戳）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sqlStartTime;
                    bool m_sqlStartTimeHasBeenSet;

                    /**
                     * <p>事务存活时间（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_trxLivingTime;
                    bool m_trxLivingTimeHasBeenSet;

                    /**
                     * <p>执行 SQL 的数据库用户名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>事务 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trxId;
                    bool m_trxIdHasBeenSet;

                    /**
                     * <p>内部 XID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_internalXId;
                    bool m_internalXIdHasBeenSet;

                    /**
                     * <p>业务码（由业务侧 SQL 注释中 i/o/p 等 KV 提取）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * <p>网关流转耗时（毫秒），仅 LogType=All 时由 Gateway 日志关联后返回；LogType=DB 时该字段不下发。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_flowTime;
                    bool m_flowTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITDBLOGITEM_H_
