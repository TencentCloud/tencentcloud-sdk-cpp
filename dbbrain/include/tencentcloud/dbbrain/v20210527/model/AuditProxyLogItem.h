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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITPROXYLOGITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITPROXYLOGITEM_H_

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
                * Proxy 层审计日志单条明细。字段由 DruidCommonUtil#changeLogsTdsqlProxy 和 BusinessCodeUtils 固定输出。
                */
                class AuditProxyLogItem : public AbstractModel
                {
                public:
                    AuditProxyLogItem();
                    ~AuditProxyLogItem() = default;
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
                     * 获取<p>集群 ID（dcdb/mariadb 集群标识，与 InstanceId 相同）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId <p>集群 ID（dcdb/mariadb 集群标识，与 InstanceId 相同）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID（dcdb/mariadb 集群标识，与 InstanceId 相同）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId <p>集群 ID（dcdb/mariadb 集群标识，与 InstanceId 相同）。</p>
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
                     * 获取<p>是否自动提交。1 表示开启，0 表示关闭。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Autocommit <p>是否自动提交。1 表示开启，0 表示关闭。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAutocommit() const;

                    /**
                     * 设置<p>是否自动提交。1 表示开启，0 表示关闭。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autocommit <p>是否自动提交。1 表示开启，0 表示关闭。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutocommit(const std::string& _autocommit);

                    /**
                     * 判断参数 Autocommit 是否已赋值
                     * @return Autocommit 是否已赋值
                     * 
                     */
                    bool AutocommitHasBeenSet() const;

                    /**
                     * 获取<p>MySQL 网络协议命令类型（如 COM_QUERY、COM_CONNECT 等）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComType <p>MySQL 网络协议命令类型（如 COM_QUERY、COM_CONNECT 等）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComType() const;

                    /**
                     * 设置<p>MySQL 网络协议命令类型（如 COM_QUERY、COM_CONNECT 等）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comType <p>MySQL 网络协议命令类型（如 COM_QUERY、COM_CONNECT 等）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComType(const std::string& _comType);

                    /**
                     * 判断参数 ComType 是否已赋值
                     * @return ComType 是否已赋值
                     * 
                     */
                    bool ComTypeHasBeenSet() const;

                    /**
                     * 获取<p>新建连接耗时。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnTc <p>新建连接耗时。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConnTc() const;

                    /**
                     * 设置<p>新建连接耗时。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connTc <p>新建连接耗时。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConnTc(const int64_t& _connTc);

                    /**
                     * 判断参数 ConnTc 是否已赋值
                     * @return ConnTc 是否已赋值
                     * 
                     */
                    bool ConnTcHasBeenSet() const;

                    /**
                     * 获取<p>后端 DB 实例地址（多个用英文逗号分隔）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBHost <p>后端 DB 实例地址（多个用英文逗号分隔）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDBHost() const;

                    /**
                     * 设置<p>后端 DB 实例地址（多个用英文逗号分隔）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dBHost <p>后端 DB 实例地址（多个用英文逗号分隔）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDBHost(const std::string& _dBHost);

                    /**
                     * 判断参数 DBHost 是否已赋值
                     * @return DBHost 是否已赋值
                     * 
                     */
                    bool DBHostHasBeenSet() const;

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
                     * 获取<p>错误信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrInfo <p>错误信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrInfo() const;

                    /**
                     * 设置<p>错误信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errInfo <p>错误信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrInfo(const std::string& _errInfo);

                    /**
                     * 判断参数 ErrInfo 是否已赋值
                     * @return ErrInfo 是否已赋值
                     * 
                     */
                    bool ErrInfoHasBeenSet() const;

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
                     * 获取<p>请求结束后仍占用的连接数（非事务请求通常为 0）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HoldConns <p>请求结束后仍占用的连接数（非事务请求通常为 0）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHoldConns() const;

                    /**
                     * 设置<p>请求结束后仍占用的连接数（非事务请求通常为 0）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _holdConns <p>请求结束后仍占用的连接数（非事务请求通常为 0）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHoldConns(const std::string& _holdConns);

                    /**
                     * 判断参数 HoldConns 是否已赋值
                     * @return HoldConns 是否已赋值
                     * 
                     */
                    bool HoldConnsHasBeenSet() const;

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
                     * 获取<p>是否开启全局一致性读（0 否、1 是）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mc <p>是否开启全局一致性读（0 否、1 是）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMc() const;

                    /**
                     * 设置<p>是否开启全局一致性读（0 否、1 是）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mc <p>是否开启全局一致性读（0 否、1 是）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMc(const std::string& _mc);

                    /**
                     * 判断参数 Mc 是否已赋值
                     * @return Mc 是否已赋值
                     * 
                     */
                    bool McHasBeenSet() const;

                    /**
                     * 获取<p>SQL 开始时间（微秒精度中的微秒部分）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlStartTimeUs <p>SQL 开始时间（微秒精度中的微秒部分）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSqlStartTimeUs() const;

                    /**
                     * 设置<p>SQL 开始时间（微秒精度中的微秒部分）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlStartTimeUs <p>SQL 开始时间（微秒精度中的微秒部分）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlStartTimeUs(const int64_t& _sqlStartTimeUs);

                    /**
                     * 判断参数 SqlStartTimeUs 是否已赋值
                     * @return SqlStartTimeUs 是否已赋值
                     * 
                     */
                    bool SqlStartTimeUsHasBeenSet() const;

                    /**
                     * 获取<p>本次请求新建的连接数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewConnNum <p>本次请求新建的连接数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNewConnNum() const;

                    /**
                     * 设置<p>本次请求新建的连接数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newConnNum <p>本次请求新建的连接数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewConnNum(const int64_t& _newConnNum);

                    /**
                     * 判断参数 NewConnNum 是否已赋值
                     * @return NewConnNum 是否已赋值
                     * 
                     */
                    bool NewConnNumHasBeenSet() const;

                    /**
                     * 获取<p>Proxy 代理节点地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyHost <p>Proxy 代理节点地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProxyHost() const;

                    /**
                     * 设置<p>Proxy 代理节点地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyHost <p>Proxy 代理节点地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyHost(const std::string& _proxyHost);

                    /**
                     * 判断参数 ProxyHost 是否已赋值
                     * @return ProxyHost 是否已赋值
                     * 
                     */
                    bool ProxyHostHasBeenSet() const;

                    /**
                     * 获取<p>Proxy ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyId <p>Proxy ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置<p>Proxy ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyId <p>Proxy ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

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
                     * 获取<p>是否为 Proxy 改写后的查询：0 原始查询，1 改写后查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Splited <p>是否为 Proxy 改写后的查询：0 原始查询，1 改写后查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSplited() const;

                    /**
                     * 设置<p>是否为 Proxy 改写后的查询：0 原始查询，1 改写后查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _splited <p>是否为 Proxy 改写后的查询：0 原始查询，1 改写后查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSplited(const int64_t& _splited);

                    /**
                     * 判断参数 Splited 是否已赋值
                     * @return Splited 是否已赋值
                     * 
                     */
                    bool SplitedHasBeenSet() const;

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
                     * 获取<p>SQL 模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlTemplate <p>SQL 模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlTemplate() const;

                    /**
                     * 设置<p>SQL 模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlTemplate <p>SQL 模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlTemplate(const std::string& _sqlTemplate);

                    /**
                     * 判断参数 SqlTemplate 是否已赋值
                     * @return SqlTemplate 是否已赋值
                     * 
                     */
                    bool SqlTemplateHasBeenSet() const;

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
                     * 获取<p>SQL 类型（如 Select、Insert、Create、Login、Set 等）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlType <p>SQL 类型（如 Select、Insert、Create、Login、Set 等）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置<p>SQL 类型（如 Select、Insert、Create、Login、Set 等）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlType <p>SQL 类型（如 Select、Insert、Create、Login、Set 等）。</p>
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
                     * 获取<p>涉及的表（多表以英文逗号分隔）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tables <p>涉及的表（多表以英文逗号分隔）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTables() const;

                    /**
                     * 设置<p>涉及的表（多表以英文逗号分隔）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tables <p>涉及的表（多表以英文逗号分隔）。</p>
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
                     * 获取<p>客户端连接的 HostPort。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostPort <p>客户端连接的 HostPort。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHostPort() const;

                    /**
                     * 设置<p>客户端连接的 HostPort。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostPort <p>客户端连接的 HostPort。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostPort(const std::string& _hostPort);

                    /**
                     * 判断参数 HostPort 是否已赋值
                     * @return HostPort 是否已赋值
                     * 
                     */
                    bool HostPortHasBeenSet() const;

                    /**
                     * 获取<p>Proxy 节点处理线程 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyThread <p>Proxy 节点处理线程 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProxyThread() const;

                    /**
                     * 设置<p>Proxy 节点处理线程 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyThread <p>Proxy 节点处理线程 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyThread(const std::string& _proxyThread);

                    /**
                     * 判断参数 ProxyThread 是否已赋值
                     * @return ProxyThread 是否已赋值
                     * 
                     */
                    bool ProxyThreadHasBeenSet() const;

                    /**
                     * 获取<p>后端 DB Host 数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbHostNum <p>后端 DB Host 数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbHostNum() const;

                    /**
                     * 设置<p>后端 DB Host 数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbHostNum <p>后端 DB Host 数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbHostNum(const std::string& _dbHostNum);

                    /**
                     * 判断参数 DbHostNum 是否已赋值
                     * @return DbHostNum 是否已赋值
                     * 
                     */
                    bool DbHostNumHasBeenSet() const;

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
                     * 获取<p>业务标签（根据业务码后置补齐）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessTag <p>业务标签（根据业务码后置补齐）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessTag() const;

                    /**
                     * 设置<p>业务标签（根据业务码后置补齐）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessTag <p>业务标签（根据业务码后置补齐）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessTag(const std::string& _businessTag);

                    /**
                     * 判断参数 BusinessTag 是否已赋值
                     * @return BusinessTag 是否已赋值
                     * 
                     */
                    bool BusinessTagHasBeenSet() const;

                private:

                    /**
                     * <p>SQL 执行时间点（格式化字符串，yyyy-MM-dd HH:mm:ss）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>集群 ID（dcdb/mariadb 集群标识，与 InstanceId 相同）。</p>
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
                     * <p>是否自动提交。1 表示开启，0 表示关闭。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autocommit;
                    bool m_autocommitHasBeenSet;

                    /**
                     * <p>MySQL 网络协议命令类型（如 COM_QUERY、COM_CONNECT 等）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comType;
                    bool m_comTypeHasBeenSet;

                    /**
                     * <p>新建连接耗时。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_connTc;
                    bool m_connTcHasBeenSet;

                    /**
                     * <p>后端 DB 实例地址（多个用英文逗号分隔）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dBHost;
                    bool m_dBHostHasBeenSet;

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
                     * <p>错误信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errInfo;
                    bool m_errInfoHasBeenSet;

                    /**
                     * <p>SQL 执行耗时（微秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * <p>请求结束后仍占用的连接数（非事务请求通常为 0）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_holdConns;
                    bool m_holdConnsHasBeenSet;

                    /**
                     * <p>客户端来源 IP。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>是否开启全局一致性读（0 否、1 是）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mc;
                    bool m_mcHasBeenSet;

                    /**
                     * <p>SQL 开始时间（微秒精度中的微秒部分）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sqlStartTimeUs;
                    bool m_sqlStartTimeUsHasBeenSet;

                    /**
                     * <p>本次请求新建的连接数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_newConnNum;
                    bool m_newConnNumHasBeenSet;

                    /**
                     * <p>Proxy 代理节点地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyHost;
                    bool m_proxyHostHasBeenSet;

                    /**
                     * <p>Proxy ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * <p>查询 ID（用于关联查询）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queryId;
                    bool m_queryIdHasBeenSet;

                    /**
                     * <p>返回行数（扫描结果集行数）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sentRows;
                    bool m_sentRowsHasBeenSet;

                    /**
                     * <p>是否为 Proxy 改写后的查询：0 原始查询，1 改写后查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_splited;
                    bool m_splitedHasBeenSet;

                    /**
                     * <p>执行的 SQL 语句原文。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * <p>SQL 模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlTemplate;
                    bool m_sqlTemplateHasBeenSet;

                    /**
                     * <p>SQL 模板 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlTemplateId;
                    bool m_sqlTemplateIdHasBeenSet;

                    /**
                     * <p>SQL 类型（如 Select、Insert、Create、Login、Set 等）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * <p>涉及的表（多表以英文逗号分隔）。</p>
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
                     * <p>执行 SQL 的数据库用户名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>客户端连接的 HostPort。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostPort;
                    bool m_hostPortHasBeenSet;

                    /**
                     * <p>Proxy 节点处理线程 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyThread;
                    bool m_proxyThreadHasBeenSet;

                    /**
                     * <p>后端 DB Host 数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbHostNum;
                    bool m_dbHostNumHasBeenSet;

                    /**
                     * <p>业务码（由业务侧 SQL 注释中 i/o/p 等 KV 提取）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * <p>业务标签（根据业务码后置补齐）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessTag;
                    bool m_businessTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITPROXYLOGITEM_H_
