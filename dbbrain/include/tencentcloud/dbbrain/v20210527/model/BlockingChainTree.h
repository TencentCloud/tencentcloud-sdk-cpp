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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_BLOCKINGCHAINTREE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_BLOCKINGCHAINTREE_H_

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
                * 阻塞树，一棵阻塞链的完整视图。一棵树的定义：同一(instanceId, monitorLoop)下，通过blocker/blocked边可达构成的一个连通分量。根节点是入度为0的会话（即从未被任何会话阻塞的头blocker）。一个monitorLoop可能对应多棵独立阻塞树。
                */
                class BlockingChainTree : public AbstractModel
                {
                public:
                    BlockingChainTree();
                    ~BlockingChainTree() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>监控轮次ID（同一实例内唯一标识一次采集快照，同一快照可包含多棵独立阻塞树）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorLoop <p>监控轮次ID（同一实例内唯一标识一次采集快照，同一快照可包含多棵独立阻塞树）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMonitorLoop() const;

                    /**
                     * 设置<p>监控轮次ID（同一实例内唯一标识一次采集快照，同一快照可包含多棵独立阻塞树）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorLoop <p>监控轮次ID（同一实例内唯一标识一次采集快照，同一快照可包含多棵独立阻塞树）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorLoop(const std::string& _monitorLoop);

                    /**
                     * 判断参数 MonitorLoop 是否已赋值
                     * @return MonitorLoop 是否已赋值
                     * 
                     */
                    bool MonitorLoopHasBeenSet() const;

                    /**
                     * 获取<p>阻塞发生所在的数据库名称（整条链路隶属同一 database，放在树级返回一次即可）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName <p>阻塞发生所在的数据库名称（整条链路隶属同一 database，放在树级返回一次即可）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>阻塞发生所在的数据库名称（整条链路隶属同一 database，放在树级返回一次即可）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName <p>阻塞发生所在的数据库名称（整条链路隶属同一 database，放在树级返回一次即可）。</p>
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
                     * 获取<p>头阻塞会话ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingSessionId <p>头阻塞会话ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBlockingSessionId() const;

                    /**
                     * 设置<p>头阻塞会话ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingSessionId <p>头阻塞会话ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockingSessionId(const int64_t& _blockingSessionId);

                    /**
                     * 判断参数 BlockingSessionId 是否已赋值
                     * @return BlockingSessionId 是否已赋值
                     * 
                     */
                    bool BlockingSessionIdHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞会话事务ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingTransactionId <p>头阻塞会话事务ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBlockingTransactionId() const;

                    /**
                     * 设置<p>头阻塞会话事务ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingTransactionId <p>头阻塞会话事务ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockingTransactionId(const int64_t& _blockingTransactionId);

                    /**
                     * 判断参数 BlockingTransactionId 是否已赋值
                     * @return BlockingTransactionId 是否已赋值
                     * 
                     */
                    bool BlockingTransactionIdHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞会话数据库用户。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingLoginName <p>头阻塞会话数据库用户。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockingLoginName() const;

                    /**
                     * 设置<p>头阻塞会话数据库用户。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingLoginName <p>头阻塞会话数据库用户。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockingLoginName(const std::string& _blockingLoginName);

                    /**
                     * 判断参数 BlockingLoginName 是否已赋值
                     * @return BlockingLoginName 是否已赋值
                     * 
                     */
                    bool BlockingLoginNameHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞会话客户端主机。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingHostName <p>头阻塞会话客户端主机。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockingHostName() const;

                    /**
                     * 设置<p>头阻塞会话客户端主机。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingHostName <p>头阻塞会话客户端主机。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockingHostName(const std::string& _blockingHostName);

                    /**
                     * 判断参数 BlockingHostName 是否已赋值
                     * @return BlockingHostName 是否已赋值
                     * 
                     */
                    bool BlockingHostNameHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞会话客户端应用名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingClientApp <p>头阻塞会话客户端应用名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockingClientApp() const;

                    /**
                     * 设置<p>头阻塞会话客户端应用名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingClientApp <p>头阻塞会话客户端应用名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockingClientApp(const std::string& _blockingClientApp);

                    /**
                     * 判断参数 BlockingClientApp 是否已赋值
                     * @return BlockingClientApp 是否已赋值
                     * 
                     */
                    bool BlockingClientAppHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status 文本），常见取值：running / sleeping / suspended / background。sleeping + BlockingTranCount&gt;0 是 C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingStatus <p>头阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status 文本），常见取值：running / sleeping / suspended / background。sleeping + BlockingTranCount&gt;0 是 C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockingStatus() const;

                    /**
                     * 设置<p>头阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status 文本），常见取值：running / sleeping / suspended / background。sleeping + BlockingTranCount&gt;0 是 C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingStatus <p>头阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status 文本），常见取值：running / sleeping / suspended / background。sleeping + BlockingTranCount&gt;0 是 C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockingStatus(const std::string& _blockingStatus);

                    /**
                     * 判断参数 BlockingStatus 是否已赋值
                     * @return BlockingStatus 是否已赋值
                     * 
                     */
                    bool BlockingStatusHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞会话事务隔离级别（SQL Server 原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingIsolationLevel <p>头阻塞会话事务隔离级别（SQL Server 原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockingIsolationLevel() const;

                    /**
                     * 设置<p>头阻塞会话事务隔离级别（SQL Server 原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingIsolationLevel <p>头阻塞会话事务隔离级别（SQL Server 原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockingIsolationLevel(const std::string& _blockingIsolationLevel);

                    /**
                     * 判断参数 BlockingIsolationLevel 是否已赋值
                     * @return BlockingIsolationLevel 是否已赋值
                     * 
                     */
                    bool BlockingIsolationLevelHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞会话当前显式事务嵌套层数（XEvent trancount）。&gt;0 表示持有显式事务；与 BlockingStatus=sleeping 组合是 C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingTranCount <p>头阻塞会话当前显式事务嵌套层数（XEvent trancount）。&gt;0 表示持有显式事务；与 BlockingStatus=sleeping 组合是 C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBlockingTranCount() const;

                    /**
                     * 设置<p>头阻塞会话当前显式事务嵌套层数（XEvent trancount）。&gt;0 表示持有显式事务；与 BlockingStatus=sleeping 组合是 C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingTranCount <p>头阻塞会话当前显式事务嵌套层数（XEvent trancount）。&gt;0 表示持有显式事务；与 BlockingStatus=sleeping 组合是 C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockingTranCount(const int64_t& _blockingTranCount);

                    /**
                     * 判断参数 BlockingTranCount 是否已赋值
                     * @return BlockingTranCount 是否已赋值
                     * 
                     */
                    bool BlockingTranCountHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞会话正在执行的 SQL 原文（对应 DBCC INPUTBUFFER 返回内容，单条最长 16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingInputBuffer <p>头阻塞会话正在执行的 SQL 原文（对应 DBCC INPUTBUFFER 返回内容，单条最长 16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockingInputBuffer() const;

                    /**
                     * 设置<p>头阻塞会话正在执行的 SQL 原文（对应 DBCC INPUTBUFFER 返回内容，单条最长 16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingInputBuffer <p>头阻塞会话正在执行的 SQL 原文（对应 DBCC INPUTBUFFER 返回内容，单条最长 16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockingInputBuffer(const std::string& _blockingInputBuffer);

                    /**
                     * 判断参数 BlockingInputBuffer 是否已赋值
                     * @return BlockingInputBuffer 是否已赋值
                     * 
                     */
                    bool BlockingInputBufferHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞SQL归一化模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingSqlTemplate <p>头阻塞SQL归一化模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockingSqlTemplate() const;

                    /**
                     * 设置<p>头阻塞SQL归一化模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingSqlTemplate <p>头阻塞SQL归一化模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockingSqlTemplate(const std::string& _blockingSqlTemplate);

                    /**
                     * 判断参数 BlockingSqlTemplate 是否已赋值
                     * @return BlockingSqlTemplate 是否已赋值
                     * 
                     */
                    bool BlockingSqlTemplateHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞SQL模板MD5。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingSqlMd5 <p>头阻塞SQL模板MD5。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockingSqlMd5() const;

                    /**
                     * 设置<p>头阻塞SQL模板MD5。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingSqlMd5 <p>头阻塞SQL模板MD5。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockingSqlMd5(const std::string& _blockingSqlMd5);

                    /**
                     * 判断参数 BlockingSqlMd5 是否已赋值
                     * @return BlockingSqlMd5 是否已赋值
                     * 
                     */
                    bool BlockingSqlMd5HasBeenSet() const;

                    /**
                     * 获取<p>头阻塞会话自身的等待时长（毫秒，来自XML blocking-process/process的waittime属性）。多数场景为0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingWaitTimeMs <p>头阻塞会话自身的等待时长（毫秒，来自XML blocking-process/process的waittime属性）。多数场景为0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBlockingWaitTimeMs() const;

                    /**
                     * 设置<p>头阻塞会话自身的等待时长（毫秒，来自XML blocking-process/process的waittime属性）。多数场景为0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingWaitTimeMs <p>头阻塞会话自身的等待时长（毫秒，来自XML blocking-process/process的waittime属性）。多数场景为0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockingWaitTimeMs(const int64_t& _blockingWaitTimeMs);

                    /**
                     * 判断参数 BlockingWaitTimeMs 是否已赋值
                     * @return BlockingWaitTimeMs 是否已赋值
                     * 
                     */
                    bool BlockingWaitTimeMsHasBeenSet() const;

                    /**
                     * 获取<p>根因分类。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootCause <p>根因分类。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRootCause() const;

                    /**
                     * 设置<p>根因分类。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rootCause <p>根因分类。</p>
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
                     * 获取<p>根因分类的可读中文描述（服务端已完成中文化，前端可直接展示；与 RootCause 代号一一对应；未识别或空值统一返回“未识别”）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootCauseDesc <p>根因分类的可读中文描述（服务端已完成中文化，前端可直接展示；与 RootCause 代号一一对应；未识别或空值统一返回“未识别”）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRootCauseDesc() const;

                    /**
                     * 设置<p>根因分类的可读中文描述（服务端已完成中文化，前端可直接展示；与 RootCause 代号一一对应；未识别或空值统一返回“未识别”）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rootCauseDesc <p>根因分类的可读中文描述（服务端已完成中文化，前端可直接展示；与 RootCause 代号一一对应；未识别或空值统一返回“未识别”）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRootCauseDesc(const std::string& _rootCauseDesc);

                    /**
                     * 判断参数 RootCauseDesc 是否已赋值
                     * @return RootCauseDesc 是否已赋值
                     * 
                     */
                    bool RootCauseDescHasBeenSet() const;

                    /**
                     * 获取<p>该链路阻塞事件的起始时间（该树内__time最小值），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>该链路阻塞事件的起始时间（该树内__time最小值），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>该链路阻塞事件的起始时间（该树内__time最小值），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>该链路阻塞事件的起始时间（该树内__time最小值），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>该链路阻塞事件的结束时间（该树内__time最大值），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>该链路阻塞事件的结束时间（该树内__time最大值），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>该链路阻塞事件的结束时间（该树内__time最大值），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>该链路阻塞事件的结束时间（该树内__time最大值），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>该链路最长等待时长（毫秒），作为链路影响时长。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DurationMs <p>该链路最长等待时长（毫秒），作为链路影响时长。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDurationMs() const;

                    /**
                     * 设置<p>该链路最长等待时长（毫秒），作为链路影响时长。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _durationMs <p>该链路最长等待时长（毫秒），作为链路影响时长。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDurationMs(const int64_t& _durationMs);

                    /**
                     * 判断参数 DurationMs 是否已赋值
                     * @return DurationMs 是否已赋值
                     * 
                     */
                    bool DurationMsHasBeenSet() const;

                    /**
                     * 获取<p>该链路被阻塞会话数（等价于树节点数-1，即受影响会话数）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChainLength <p>该链路被阻塞会话数（等价于树节点数-1，即受影响会话数）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChainLength() const;

                    /**
                     * 设置<p>该链路被阻塞会话数（等价于树节点数-1，即受影响会话数）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chainLength <p>该链路被阻塞会话数（等价于树节点数-1，即受影响会话数）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChainLength(const int64_t& _chainLength);

                    /**
                     * 判断参数 ChainLength 是否已赋值
                     * @return ChainLength 是否已赋值
                     * 
                     */
                    bool ChainLengthHasBeenSet() const;

                    /**
                     * 获取<p>树深度（根节点为0，最长路径的深度）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChainDepth <p>树深度（根节点为0，最长路径的深度）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChainDepth() const;

                    /**
                     * 设置<p>树深度（根节点为0，最长路径的深度）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chainDepth <p>树深度（根节点为0，最长路径的深度）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChainDepth(const int64_t& _chainDepth);

                    /**
                     * 判断参数 ChainDepth 是否已赋值
                     * @return ChainDepth 是否已赋值
                     * 
                     */
                    bool ChainDepthHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞节点子树（可能为空，也可能多叉或多层）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Details <p>被阻塞节点子树（可能为空，也可能多叉或多层）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BlockingChainNode> GetDetails() const;

                    /**
                     * 设置<p>被阻塞节点子树（可能为空，也可能多叉或多层）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _details <p>被阻塞节点子树（可能为空，也可能多叉或多层）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetails(const std::vector<BlockingChainNode>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * <p>监控轮次ID（同一实例内唯一标识一次采集快照，同一快照可包含多棵独立阻塞树）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_monitorLoop;
                    bool m_monitorLoopHasBeenSet;

                    /**
                     * <p>阻塞发生所在的数据库名称（整条链路隶属同一 database，放在树级返回一次即可）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>头阻塞会话ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockingSessionId;
                    bool m_blockingSessionIdHasBeenSet;

                    /**
                     * <p>头阻塞会话事务ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockingTransactionId;
                    bool m_blockingTransactionIdHasBeenSet;

                    /**
                     * <p>头阻塞会话数据库用户。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockingLoginName;
                    bool m_blockingLoginNameHasBeenSet;

                    /**
                     * <p>头阻塞会话客户端主机。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockingHostName;
                    bool m_blockingHostNameHasBeenSet;

                    /**
                     * <p>头阻塞会话客户端应用名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockingClientApp;
                    bool m_blockingClientAppHasBeenSet;

                    /**
                     * <p>头阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status 文本），常见取值：running / sleeping / suspended / background。sleeping + BlockingTranCount&gt;0 是 C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockingStatus;
                    bool m_blockingStatusHasBeenSet;

                    /**
                     * <p>头阻塞会话事务隔离级别（SQL Server 原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockingIsolationLevel;
                    bool m_blockingIsolationLevelHasBeenSet;

                    /**
                     * <p>头阻塞会话当前显式事务嵌套层数（XEvent trancount）。&gt;0 表示持有显式事务；与 BlockingStatus=sleeping 组合是 C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockingTranCount;
                    bool m_blockingTranCountHasBeenSet;

                    /**
                     * <p>头阻塞会话正在执行的 SQL 原文（对应 DBCC INPUTBUFFER 返回内容，单条最长 16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockingInputBuffer;
                    bool m_blockingInputBufferHasBeenSet;

                    /**
                     * <p>头阻塞SQL归一化模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockingSqlTemplate;
                    bool m_blockingSqlTemplateHasBeenSet;

                    /**
                     * <p>头阻塞SQL模板MD5。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockingSqlMd5;
                    bool m_blockingSqlMd5HasBeenSet;

                    /**
                     * <p>头阻塞会话自身的等待时长（毫秒，来自XML blocking-process/process的waittime属性）。多数场景为0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockingWaitTimeMs;
                    bool m_blockingWaitTimeMsHasBeenSet;

                    /**
                     * <p>根因分类。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rootCause;
                    bool m_rootCauseHasBeenSet;

                    /**
                     * <p>根因分类的可读中文描述（服务端已完成中文化，前端可直接展示；与 RootCause 代号一一对应；未识别或空值统一返回“未识别”）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rootCauseDesc;
                    bool m_rootCauseDescHasBeenSet;

                    /**
                     * <p>该链路阻塞事件的起始时间（该树内__time最小值），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>该链路阻塞事件的结束时间（该树内__time最大值），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>该链路最长等待时长（毫秒），作为链路影响时长。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_durationMs;
                    bool m_durationMsHasBeenSet;

                    /**
                     * <p>该链路被阻塞会话数（等价于树节点数-1，即受影响会话数）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_chainLength;
                    bool m_chainLengthHasBeenSet;

                    /**
                     * <p>树深度（根节点为0，最长路径的深度）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_chainDepth;
                    bool m_chainDepthHasBeenSet;

                    /**
                     * <p>被阻塞节点子树（可能为空，也可能多叉或多层）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BlockingChainNode> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_BLOCKINGCHAINTREE_H_
