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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_BLOCKINGCHAINNODE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_BLOCKINGCHAINNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/BlockingChainNode.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 阻塞树节点，表示一个被阻塞会话。若该会话又阻塞了其它会话，则通过children递归表达。
                */
                class BlockingChainNode : public AbstractModel
                {
                public:
                    BlockingChainNode();
                    ~BlockingChainNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>被阻塞会话 ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedSessionId <p>被阻塞会话 ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBlockedSessionId() const;

                    /**
                     * 设置<p>被阻塞会话 ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedSessionId <p>被阻塞会话 ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedSessionId(const int64_t& _blockedSessionId);

                    /**
                     * 判断参数 BlockedSessionId 是否已赋值
                     * @return BlockedSessionId 是否已赋值
                     * 
                     */
                    bool BlockedSessionIdHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞会话事务ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedTransactionId <p>被阻塞会话事务ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBlockedTransactionId() const;

                    /**
                     * 设置<p>被阻塞会话事务ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedTransactionId <p>被阻塞会话事务ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedTransactionId(const int64_t& _blockedTransactionId);

                    /**
                     * 判断参数 BlockedTransactionId 是否已赋值
                     * @return BlockedTransactionId 是否已赋值
                     * 
                     */
                    bool BlockedTransactionIdHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞会话等待时长（毫秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedWaitTimeMs <p>被阻塞会话等待时长（毫秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBlockedWaitTimeMs() const;

                    /**
                     * 设置<p>被阻塞会话等待时长（毫秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedWaitTimeMs <p>被阻塞会话等待时长（毫秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedWaitTimeMs(const int64_t& _blockedWaitTimeMs);

                    /**
                     * 判断参数 BlockedWaitTimeMs 是否已赋值
                     * @return BlockedWaitTimeMs 是否已赋值
                     * 
                     */
                    bool BlockedWaitTimeMsHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞会话正在等待的锁模式（SQL Server原生lock_mode枚举，常见取值：S、U、X、IS、IU、IX、SIU、SIX、UIX、Sch-S、Sch-M）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedLockMode <p>被阻塞会话正在等待的锁模式（SQL Server原生lock_mode枚举，常见取值：S、U、X、IS、IU、IX、SIU、SIX、UIX、Sch-S、Sch-M）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedLockMode() const;

                    /**
                     * 设置<p>被阻塞会话正在等待的锁模式（SQL Server原生lock_mode枚举，常见取值：S、U、X、IS、IU、IX、SIU、SIX、UIX、Sch-S、Sch-M）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedLockMode <p>被阻塞会话正在等待的锁模式（SQL Server原生lock_mode枚举，常见取值：S、U、X、IS、IU、IX、SIU、SIX、UIX、Sch-S、Sch-M）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedLockMode(const std::string& _blockedLockMode);

                    /**
                     * 判断参数 BlockedLockMode 是否已赋值
                     * @return BlockedLockMode 是否已赋值
                     * 
                     */
                    bool BlockedLockModeHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞会话等待资源。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedWaitResource <p>被阻塞会话等待资源。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedWaitResource() const;

                    /**
                     * 设置<p>被阻塞会话等待资源。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedWaitResource <p>被阻塞会话等待资源。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedWaitResource(const std::string& _blockedWaitResource);

                    /**
                     * 判断参数 BlockedWaitResource 是否已赋值
                     * @return BlockedWaitResource 是否已赋值
                     * 
                     */
                    bool BlockedWaitResourceHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞会话数据库用户。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedLoginName <p>被阻塞会话数据库用户。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedLoginName() const;

                    /**
                     * 设置<p>被阻塞会话数据库用户。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedLoginName <p>被阻塞会话数据库用户。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedLoginName(const std::string& _blockedLoginName);

                    /**
                     * 判断参数 BlockedLoginName 是否已赋值
                     * @return BlockedLoginName 是否已赋值
                     * 
                     */
                    bool BlockedLoginNameHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞会话客户端主机。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedHostName <p>被阻塞会话客户端主机。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedHostName() const;

                    /**
                     * 设置<p>被阻塞会话客户端主机。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedHostName <p>被阻塞会话客户端主机。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedHostName(const std::string& _blockedHostName);

                    /**
                     * 判断参数 BlockedHostName 是否已赋值
                     * @return BlockedHostName 是否已赋值
                     * 
                     */
                    bool BlockedHostNameHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞会话客户端应用名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedClientApp <p>被阻塞会话客户端应用名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedClientApp() const;

                    /**
                     * 设置<p>被阻塞会话客户端应用名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedClientApp <p>被阻塞会话客户端应用名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedClientApp(const std::string& _blockedClientApp);

                    /**
                     * 判断参数 BlockedClientApp 是否已赋值
                     * @return BlockedClientApp 是否已赋值
                     * 
                     */
                    bool BlockedClientAppHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status 文本），常见取值：running / sleeping / suspended / background。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedStatus <p>被阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status 文本），常见取值：running / sleeping / suspended / background。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedStatus() const;

                    /**
                     * 设置<p>被阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status 文本），常见取值：running / sleeping / suspended / background。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedStatus <p>被阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status 文本），常见取值：running / sleeping / suspended / background。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedStatus(const std::string& _blockedStatus);

                    /**
                     * 判断参数 BlockedStatus 是否已赋值
                     * @return BlockedStatus 是否已赋值
                     * 
                     */
                    bool BlockedStatusHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞会话事务隔离级别（SQL Server 原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedIsolationLevel <p>被阻塞会话事务隔离级别（SQL Server 原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedIsolationLevel() const;

                    /**
                     * 设置<p>被阻塞会话事务隔离级别（SQL Server 原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedIsolationLevel <p>被阻塞会话事务隔离级别（SQL Server 原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedIsolationLevel(const std::string& _blockedIsolationLevel);

                    /**
                     * 判断参数 BlockedIsolationLevel 是否已赋值
                     * @return BlockedIsolationLevel 是否已赋值
                     * 
                     */
                    bool BlockedIsolationLevelHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞会话当前显式事务名（XEvent transactionname）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedTransactionName <p>被阻塞会话当前显式事务名（XEvent transactionname）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedTransactionName() const;

                    /**
                     * 设置<p>被阻塞会话当前显式事务名（XEvent transactionname）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedTransactionName <p>被阻塞会话当前显式事务名（XEvent transactionname）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedTransactionName(const std::string& _blockedTransactionName);

                    /**
                     * 判断参数 BlockedTransactionName 是否已赋值
                     * @return BlockedTransactionName 是否已赋值
                     * 
                     */
                    bool BlockedTransactionNameHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞会话当前显式事务嵌套层数（XEvent trancount）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedTranCount <p>被阻塞会话当前显式事务嵌套层数（XEvent trancount）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBlockedTranCount() const;

                    /**
                     * 设置<p>被阻塞会话当前显式事务嵌套层数（XEvent trancount）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedTranCount <p>被阻塞会话当前显式事务嵌套层数（XEvent trancount）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedTranCount(const int64_t& _blockedTranCount);

                    /**
                     * 判断参数 BlockedTranCount 是否已赋值
                     * @return BlockedTranCount 是否已赋值
                     * 
                     */
                    bool BlockedTranCountHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞会话显式事务 BEGIN TRAN 时刻（XEvent lasttranstarted，SQL Server 服务端本地时区的 ISO 8601 字符串，无时区后缀）。多语句事务场景下比 lastbatchstarted 更稳定。咨视值 1900-01-01T00:00:00 表示未知。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedLastTranStarted <p>被阻塞会话显式事务 BEGIN TRAN 时刻（XEvent lasttranstarted，SQL Server 服务端本地时区的 ISO 8601 字符串，无时区后缀）。多语句事务场景下比 lastbatchstarted 更稳定。咨视值 1900-01-01T00:00:00 表示未知。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedLastTranStarted() const;

                    /**
                     * 设置<p>被阻塞会话显式事务 BEGIN TRAN 时刻（XEvent lasttranstarted，SQL Server 服务端本地时区的 ISO 8601 字符串，无时区后缀）。多语句事务场景下比 lastbatchstarted 更稳定。咨视值 1900-01-01T00:00:00 表示未知。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedLastTranStarted <p>被阻塞会话显式事务 BEGIN TRAN 时刻（XEvent lasttranstarted，SQL Server 服务端本地时区的 ISO 8601 字符串，无时区后缀）。多语句事务场景下比 lastbatchstarted 更稳定。咨视值 1900-01-01T00:00:00 表示未知。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedLastTranStarted(const std::string& _blockedLastTranStarted);

                    /**
                     * 判断参数 BlockedLastTranStarted 是否已赋值
                     * @return BlockedLastTranStarted 是否已赋值
                     * 
                     */
                    bool BlockedLastTranStartedHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞会话正在执行的 SQL 原文（对应 DBCC INPUTBUFFER 返回内容，单条最长 16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedInputBuffer <p>被阻塞会话正在执行的 SQL 原文（对应 DBCC INPUTBUFFER 返回内容，单条最长 16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedInputBuffer() const;

                    /**
                     * 设置<p>被阻塞会话正在执行的 SQL 原文（对应 DBCC INPUTBUFFER 返回内容，单条最长 16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedInputBuffer <p>被阻塞会话正在执行的 SQL 原文（对应 DBCC INPUTBUFFER 返回内容，单条最长 16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedInputBuffer(const std::string& _blockedInputBuffer);

                    /**
                     * 判断参数 BlockedInputBuffer 是否已赋值
                     * @return BlockedInputBuffer 是否已赋值
                     * 
                     */
                    bool BlockedInputBufferHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞SQL归一化模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedSqlTemplate <p>被阻塞SQL归一化模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedSqlTemplate() const;

                    /**
                     * 设置<p>被阻塞SQL归一化模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedSqlTemplate <p>被阻塞SQL归一化模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedSqlTemplate(const std::string& _blockedSqlTemplate);

                    /**
                     * 判断参数 BlockedSqlTemplate 是否已赋值
                     * @return BlockedSqlTemplate 是否已赋值
                     * 
                     */
                    bool BlockedSqlTemplateHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞SQL模板MD5。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedSqlMd5 <p>被阻塞SQL模板MD5。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedSqlMd5() const;

                    /**
                     * 设置<p>被阻塞SQL模板MD5。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedSqlMd5 <p>被阻塞SQL模板MD5。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedSqlMd5(const std::string& _blockedSqlMd5);

                    /**
                     * 判断参数 BlockedSqlMd5 是否已赋值
                     * @return BlockedSqlMd5 是否已赋值
                     * 
                     */
                    bool BlockedSqlMd5HasBeenSet() const;

                    /**
                     * 获取<p>根因分类（继承自所属报告的rootCause）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootCause <p>根因分类（继承自所属报告的rootCause）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRootCause() const;

                    /**
                     * 设置<p>根因分类（继承自所属报告的rootCause）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rootCause <p>根因分类（继承自所属报告的rootCause）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRootCause(const std::string& _rootCause);

                    /**
                     * 判断参数 RootCause 是否已赋值
                     * @return RootCause 是否已赋值
                     * 
                     */
                    bool RootCauseHasBeenSet() const;

                    /**
                     * 获取<p>本节点上报事件时间（__time），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportTime <p>本节点上报事件时间（__time），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReportTime() const;

                    /**
                     * 设置<p>本节点上报事件时间（__time），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reportTime <p>本节点上报事件时间（__time），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReportTime(const std::string& _reportTime);

                    /**
                     * 判断参数 ReportTime 是否已赋值
                     * @return ReportTime 是否已赋值
                     * 
                     */
                    bool ReportTimeHasBeenSet() const;

                    /**
                     * 获取<p>本节点又阻塞的下级会话（可能为空）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Children <p>本节点又阻塞的下级会话（可能为空）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BlockingChainNode> GetChildren() const;

                    /**
                     * 设置<p>本节点又阻塞的下级会话（可能为空）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _children <p>本节点又阻塞的下级会话（可能为空）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChildren(const std::vector<BlockingChainNode>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * <p>被阻塞会话 ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockedSessionId;
                    bool m_blockedSessionIdHasBeenSet;

                    /**
                     * <p>被阻塞会话事务ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockedTransactionId;
                    bool m_blockedTransactionIdHasBeenSet;

                    /**
                     * <p>被阻塞会话等待时长（毫秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockedWaitTimeMs;
                    bool m_blockedWaitTimeMsHasBeenSet;

                    /**
                     * <p>被阻塞会话正在等待的锁模式（SQL Server原生lock_mode枚举，常见取值：S、U、X、IS、IU、IX、SIU、SIX、UIX、Sch-S、Sch-M）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockedLockMode;
                    bool m_blockedLockModeHasBeenSet;

                    /**
                     * <p>被阻塞会话等待资源。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockedWaitResource;
                    bool m_blockedWaitResourceHasBeenSet;

                    /**
                     * <p>被阻塞会话数据库用户。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockedLoginName;
                    bool m_blockedLoginNameHasBeenSet;

                    /**
                     * <p>被阻塞会话客户端主机。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockedHostName;
                    bool m_blockedHostNameHasBeenSet;

                    /**
                     * <p>被阻塞会话客户端应用名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockedClientApp;
                    bool m_blockedClientAppHasBeenSet;

                    /**
                     * <p>被阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status 文本），常见取值：running / sleeping / suspended / background。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockedStatus;
                    bool m_blockedStatusHasBeenSet;

                    /**
                     * <p>被阻塞会话事务隔离级别（SQL Server 原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockedIsolationLevel;
                    bool m_blockedIsolationLevelHasBeenSet;

                    /**
                     * <p>被阻塞会话当前显式事务名（XEvent transactionname）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockedTransactionName;
                    bool m_blockedTransactionNameHasBeenSet;

                    /**
                     * <p>被阻塞会话当前显式事务嵌套层数（XEvent trancount）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockedTranCount;
                    bool m_blockedTranCountHasBeenSet;

                    /**
                     * <p>被阻塞会话显式事务 BEGIN TRAN 时刻（XEvent lasttranstarted，SQL Server 服务端本地时区的 ISO 8601 字符串，无时区后缀）。多语句事务场景下比 lastbatchstarted 更稳定。咨视值 1900-01-01T00:00:00 表示未知。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockedLastTranStarted;
                    bool m_blockedLastTranStartedHasBeenSet;

                    /**
                     * <p>被阻塞会话正在执行的 SQL 原文（对应 DBCC INPUTBUFFER 返回内容，单条最长 16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockedInputBuffer;
                    bool m_blockedInputBufferHasBeenSet;

                    /**
                     * <p>被阻塞SQL归一化模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockedSqlTemplate;
                    bool m_blockedSqlTemplateHasBeenSet;

                    /**
                     * <p>被阻塞SQL模板MD5。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockedSqlMd5;
                    bool m_blockedSqlMd5HasBeenSet;

                    /**
                     * <p>根因分类（继承自所属报告的rootCause）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rootCause;
                    bool m_rootCauseHasBeenSet;

                    /**
                     * <p>本节点上报事件时间（__time），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportTime;
                    bool m_reportTimeHasBeenSet;

                    /**
                     * <p>本节点又阻塞的下级会话（可能为空）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BlockingChainNode> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_BLOCKINGCHAINNODE_H_
