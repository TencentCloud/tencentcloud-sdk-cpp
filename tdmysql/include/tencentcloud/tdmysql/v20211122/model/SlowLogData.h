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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_SLOWLOGDATA_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_SLOWLOGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/Explain.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 慢日志信息
                */
                class SlowLogData : public AbstractModel
                {
                public:
                    SlowLogData();
                    ~SlowLogData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Sql的执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp <p>Sql的执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置<p>Sql的执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp <p>Sql的执行时间</p>
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
                     * 获取<p>Sql的执行时长（秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryTime <p>Sql的执行时长（秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetQueryTime() const;

                    /**
                     * 设置<p>Sql的执行时长（秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryTime <p>Sql的执行时长（秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryTime(const double& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     * 
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取<p>Sql语句</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlText <p>Sql语句</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置<p>Sql语句</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlText <p>Sql语句</p>
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
                     * 获取<p>客户端地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserHost <p>客户端地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserHost() const;

                    /**
                     * 设置<p>客户端地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userHost <p>客户端地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserHost(const std::string& _userHost);

                    /**
                     * 判断参数 UserHost 是否已赋值
                     * @return UserHost 是否已赋值
                     * 
                     */
                    bool UserHostHasBeenSet() const;

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
                     * 获取<p>数据库名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Database <p>数据库名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>数据库名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _database <p>数据库名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取<p>锁时长（秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockTime <p>锁时长（秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLockTime() const;

                    /**
                     * 设置<p>锁时长（秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockTime <p>锁时长（秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLockTime(const double& _lockTime);

                    /**
                     * 判断参数 LockTime 是否已赋值
                     * @return LockTime 是否已赋值
                     * 
                     */
                    bool LockTimeHasBeenSet() const;

                    /**
                     * 获取<p>扫描行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RowsExamined <p>扫描行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRowsExamined() const;

                    /**
                     * 设置<p>扫描行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rowsExamined <p>扫描行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRowsExamined(const uint64_t& _rowsExamined);

                    /**
                     * 判断参数 RowsExamined 是否已赋值
                     * @return RowsExamined 是否已赋值
                     * 
                     */
                    bool RowsExaminedHasBeenSet() const;

                    /**
                     * 获取<p>结果集行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RowsSent <p>结果集行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRowsSent() const;

                    /**
                     * 设置<p>结果集行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rowsSent <p>结果集行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRowsSent(const uint64_t& _rowsSent);

                    /**
                     * 判断参数 RowsSent 是否已赋值
                     * @return RowsSent 是否已赋值
                     * 
                     */
                    bool RowsSentHasBeenSet() const;

                    /**
                     * 获取<p>事物ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransactionId <p>事物ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置<p>事物ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transactionId <p>事物ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransactionId(const std::string& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取<p>rpc耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RpcTime <p>rpc耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRpcTime() const;

                    /**
                     * 设置<p>rpc耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rpcTime <p>rpc耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRpcTime(const double& _rpcTime);

                    /**
                     * 判断参数 RpcTime 是否已赋值
                     * @return RpcTime 是否已赋值
                     * 
                     */
                    bool RpcTimeHasBeenSet() const;

                    /**
                     * 获取<p>与存储节点交互rpc耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageRpcTime <p>与存储节点交互rpc耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetStorageRpcTime() const;

                    /**
                     * 设置<p>与存储节点交互rpc耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageRpcTime <p>与存储节点交互rpc耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageRpcTime(const double& _storageRpcTime);

                    /**
                     * 判断参数 StorageRpcTime 是否已赋值
                     * @return StorageRpcTime 是否已赋值
                     * 
                     */
                    bool StorageRpcTimeHasBeenSet() const;

                    /**
                     * 获取<p>rpc重试延迟耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RpcRetryDelayTime <p>rpc重试延迟耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRpcRetryDelayTime() const;

                    /**
                     * 设置<p>rpc重试延迟耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rpcRetryDelayTime <p>rpc重试延迟耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRpcRetryDelayTime(const double& _rpcRetryDelayTime);

                    /**
                     * 判断参数 RpcRetryDelayTime 是否已赋值
                     * @return RpcRetryDelayTime 是否已赋值
                     * 
                     */
                    bool RpcRetryDelayTimeHasBeenSet() const;

                    /**
                     * 获取<p>node名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeId <p>node名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>node名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeId <p>node名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>rpc 链路追踪</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RpcTrace <p>rpc 链路追踪</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRpcTrace() const;

                    /**
                     * 设置<p>rpc 链路追踪</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rpcTrace <p>rpc 链路追踪</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRpcTrace(const std::string& _rpcTrace);

                    /**
                     * 判断参数 RpcTrace 是否已赋值
                     * @return RpcTrace 是否已赋值
                     * 
                     */
                    bool RpcTraceHasBeenSet() const;

                    /**
                     * 获取<p>TDStore锁时长</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TDStoreLockTime <p>TDStore锁时长</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTDStoreLockTime() const;

                    /**
                     * 设置<p>TDStore锁时长</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tDStoreLockTime <p>TDStore锁时长</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTDStoreLockTime(const double& _tDStoreLockTime);

                    /**
                     * 判断参数 TDStoreLockTime 是否已赋值
                     * @return TDStoreLockTime 是否已赋值
                     * 
                     */
                    bool TDStoreLockTimeHasBeenSet() const;

                    /**
                     * 获取<p>全局标识ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TraceId <p>全局标识ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置<p>全局标识ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _traceId <p>全局标识ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                    /**
                     * 获取<p>执行计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Explain <p>执行计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Explain> GetExplain() const;

                    /**
                     * 设置<p>执行计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _explain <p>执行计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExplain(const std::vector<Explain>& _explain);

                    /**
                     * 判断参数 Explain 是否已赋值
                     * @return Explain 是否已赋值
                     * 
                     */
                    bool ExplainHasBeenSet() const;

                private:

                    /**
                     * <p>Sql的执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>Sql的执行时长（秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * <p>Sql语句</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * <p>客户端地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userHost;
                    bool m_userHostHasBeenSet;

                    /**
                     * <p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>数据库名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>锁时长（秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * <p>扫描行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rowsExamined;
                    bool m_rowsExaminedHasBeenSet;

                    /**
                     * <p>结果集行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rowsSent;
                    bool m_rowsSentHasBeenSet;

                    /**
                     * <p>事物ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * <p>rpc耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_rpcTime;
                    bool m_rpcTimeHasBeenSet;

                    /**
                     * <p>与存储节点交互rpc耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_storageRpcTime;
                    bool m_storageRpcTimeHasBeenSet;

                    /**
                     * <p>rpc重试延迟耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_rpcRetryDelayTime;
                    bool m_rpcRetryDelayTimeHasBeenSet;

                    /**
                     * <p>node名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>rpc 链路追踪</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rpcTrace;
                    bool m_rpcTraceHasBeenSet;

                    /**
                     * <p>TDStore锁时长</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_tDStoreLockTime;
                    bool m_tDStoreLockTimeHasBeenSet;

                    /**
                     * <p>全局标识ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * <p>执行计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Explain> m_explain;
                    bool m_explainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_SLOWLOGDATA_H_
