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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DEADLOCKSESSION_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DEADLOCKSESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/DeadlockFrame.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 参与死锁的单个进程/会话。
                */
                class DeadlockSession : public AbstractModel
                {
                public:
                    DeadlockSession();
                    ~DeadlockSession() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>SQL 归一化后的指纹（SHA-1 前 16 位）。去掉字面量、注释、参数名、空白差异后计算，抗字面量差异，用于聚合相同 SQL 模板。SqlText 为空时为 null。</p>
                     * @return SqlFingerprint <p>SQL 归一化后的指纹（SHA-1 前 16 位）。去掉字面量、注释、参数名、空白差异后计算，抗字面量差异，用于聚合相同 SQL 模板。SqlText 为空时为 null。</p>
                     * 
                     */
                    std::string GetSqlFingerprint() const;

                    /**
                     * 设置<p>SQL 归一化后的指纹（SHA-1 前 16 位）。去掉字面量、注释、参数名、空白差异后计算，抗字面量差异，用于聚合相同 SQL 模板。SqlText 为空时为 null。</p>
                     * @param _sqlFingerprint <p>SQL 归一化后的指纹（SHA-1 前 16 位）。去掉字面量、注释、参数名、空白差异后计算，抗字面量差异，用于聚合相同 SQL 模板。SqlText 为空时为 null。</p>
                     * 
                     */
                    void SetSqlFingerprint(const std::string& _sqlFingerprint);

                    /**
                     * 判断参数 SqlFingerprint 是否已赋值
                     * @return SqlFingerprint 是否已赋值
                     * 
                     */
                    bool SqlFingerprintHasBeenSet() const;

                    /**
                     * 获取<p>SQL Server 登录账号，用于权限归因。可判断是 SQLAgent、业务账号还是 DBA 账号。</p>
                     * @return LoginName <p>SQL Server 登录账号，用于权限归因。可判断是 SQLAgent、业务账号还是 DBA 账号。</p>
                     * 
                     */
                    std::string GetLoginName() const;

                    /**
                     * 设置<p>SQL Server 登录账号，用于权限归因。可判断是 SQLAgent、业务账号还是 DBA 账号。</p>
                     * @param _loginName <p>SQL Server 登录账号，用于权限归因。可判断是 SQLAgent、业务账号还是 DBA 账号。</p>
                     * 
                     */
                    void SetLoginName(const std::string& _loginName);

                    /**
                     * 判断参数 LoginName 是否已赋值
                     * @return LoginName 是否已赋值
                     * 
                     */
                    bool LoginNameHasBeenSet() const;

                    /**
                     * 获取<p>会话执行栈帧列表（xml 的 executionStack.frame），用于定位到存储过程内的具体语句区间。partial 事件为空数组。</p>
                     * @return Frames <p>会话执行栈帧列表（xml 的 executionStack.frame），用于定位到存储过程内的具体语句区间。partial 事件为空数组。</p>
                     * 
                     */
                    std::vector<DeadlockFrame> GetFrames() const;

                    /**
                     * 设置<p>会话执行栈帧列表（xml 的 executionStack.frame），用于定位到存储过程内的具体语句区间。partial 事件为空数组。</p>
                     * @param _frames <p>会话执行栈帧列表（xml 的 executionStack.frame），用于定位到存储过程内的具体语句区间。partial 事件为空数组。</p>
                     * 
                     */
                    void SetFrames(const std::vector<DeadlockFrame>& _frames);

                    /**
                     * 判断参数 Frames 是否已赋值
                     * @return Frames 是否已赋值
                     * 
                     */
                    bool FramesHasBeenSet() const;

                    /**
                     * 获取<p>事务隔离级别，例如 &#39;read committed (2)&#39;、&#39;repeatable read (3)&#39;、&#39;serializable (4)&#39; 等。显著影响锁形态和死锁模式。</p>
                     * @return IsolationLevel <p>事务隔离级别，例如 &#39;read committed (2)&#39;、&#39;repeatable read (3)&#39;、&#39;serializable (4)&#39; 等。显著影响锁形态和死锁模式。</p>
                     * 
                     */
                    std::string GetIsolationLevel() const;

                    /**
                     * 设置<p>事务隔离级别，例如 &#39;read committed (2)&#39;、&#39;repeatable read (3)&#39;、&#39;serializable (4)&#39; 等。显著影响锁形态和死锁模式。</p>
                     * @param _isolationLevel <p>事务隔离级别，例如 &#39;read committed (2)&#39;、&#39;repeatable read (3)&#39;、&#39;serializable (4)&#39; 等。显著影响锁形态和死锁模式。</p>
                     * 
                     */
                    void SetIsolationLevel(const std::string& _isolationLevel);

                    /**
                     * 判断参数 IsolationLevel 是否已赋值
                     * @return IsolationLevel 是否已赋值
                     * 
                     */
                    bool IsolationLevelHasBeenSet() const;

                    /**
                     * 获取<p>进程状态。常见值：suspended（挂起等锁）/ running / background。判断是否运行中被检测终止。</p>
                     * @return ProcessStatus <p>进程状态。常见值：suspended（挂起等锁）/ running / background。判断是否运行中被检测终止。</p>
                     * 
                     */
                    std::string GetProcessStatus() const;

                    /**
                     * 设置<p>进程状态。常见值：suspended（挂起等锁）/ running / background。判断是否运行中被检测终止。</p>
                     * @param _processStatus <p>进程状态。常见值：suspended（挂起等锁）/ running / background。判断是否运行中被检测终止。</p>
                     * 
                     */
                    void SetProcessStatus(const std::string& _processStatus);

                    /**
                     * 判断参数 ProcessStatus 是否已赋值
                     * @return ProcessStatus 是否已赋值
                     * 
                     */
                    bool ProcessStatusHasBeenSet() const;

                    /**
                     * 获取<p>客户端应用名（xml 的 clientapp）。判断连接来源，例如 SQLAgent Job、ORM、SSMS、业务服务名等。</p>
                     * @return ClientApp <p>客户端应用名（xml 的 clientapp）。判断连接来源，例如 SQLAgent Job、ORM、SSMS、业务服务名等。</p>
                     * 
                     */
                    std::string GetClientApp() const;

                    /**
                     * 设置<p>客户端应用名（xml 的 clientapp）。判断连接来源，例如 SQLAgent Job、ORM、SSMS、业务服务名等。</p>
                     * @param _clientApp <p>客户端应用名（xml 的 clientapp）。判断连接来源，例如 SQLAgent Job、ORM、SSMS、业务服务名等。</p>
                     * 
                     */
                    void SetClientApp(const std::string& _clientApp);

                    /**
                     * 判断参数 ClientApp 是否已赋值
                     * @return ClientApp 是否已赋值
                     * 
                     */
                    bool ClientAppHasBeenSet() const;

                    /**
                     * 获取<p>会话的 DEADLOCK_PRIORITY 设置。-10 表示主动降级为牺牲者候选；10 表示优先级更高。可解释为何这一方成为牺牲品。</p>
                     * @return Priority <p>会话的 DEADLOCK_PRIORITY 设置。-10 表示主动降级为牺牲者候选；10 表示优先级更高。可解释为何这一方成为牺牲品。</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>会话的 DEADLOCK_PRIORITY 设置。-10 表示主动降级为牺牲者候选；10 表示优先级更高。可解释为何这一方成为牺牲品。</p>
                     * @param _priority <p>会话的 DEADLOCK_PRIORITY 设置。-10 表示主动降级为牺牲者候选；10 表示优先级更高。可解释为何这一方成为牺牲品。</p>
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取<p>会话当前活跃的数据库名（xml 的 currentdbname）。</p>
                     * @return DatabaseName <p>会话当前活跃的数据库名（xml 的 currentdbname）。</p>
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>会话当前活跃的数据库名（xml 的 currentdbname）。</p>
                     * @param _databaseName <p>会话当前活跃的数据库名（xml 的 currentdbname）。</p>
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
                     * 获取<p>本进程当前持有的锁资源描述列表（死锁环的持有边）。格式同 LockRequest 但结尾为 &#39;holding&#39;。partial 事件为空数组。</p>
                     * @return LockHold <p>本进程当前持有的锁资源描述列表（死锁环的持有边）。格式同 LockRequest 但结尾为 &#39;holding&#39;。partial 事件为空数组。</p>
                     * 
                     */
                    std::vector<std::string> GetLockHold() const;

                    /**
                     * 设置<p>本进程当前持有的锁资源描述列表（死锁环的持有边）。格式同 LockRequest 但结尾为 &#39;holding&#39;。partial 事件为空数组。</p>
                     * @param _lockHold <p>本进程当前持有的锁资源描述列表（死锁环的持有边）。格式同 LockRequest 但结尾为 &#39;holding&#39;。partial 事件为空数组。</p>
                     * 
                     */
                    void SetLockHold(const std::vector<std::string>& _lockHold);

                    /**
                     * 判断参数 LockHold 是否已赋值
                     * @return LockHold 是否已赋值
                     * 
                     */
                    bool LockHoldHasBeenSet() const;

                    /**
                     * 获取<p>会话最近执行的 SQL 文本（xml 的 InputBuf）。是 AI 诊断的主输入与 SqlFingerprint 的来源。</p>
                     * @return SqlText <p>会话最近执行的 SQL 文本（xml 的 InputBuf）。是 AI 诊断的主输入与 SqlFingerprint 的来源。</p>
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置<p>会话最近执行的 SQL 文本（xml 的 InputBuf）。是 AI 诊断的主输入与 SqlFingerprint 的来源。</p>
                     * @param _sqlText <p>会话最近执行的 SQL 文本（xml 的 InputBuf）。是 AI 诊断的主输入与 SqlFingerprint 的来源。</p>
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
                     * 获取<p>客户端主机的 IP 地址（点分十进制，来自 message.ip）。判断是否来自同一台机器、批处理源。</p>
                     * @return Host <p>客户端主机的 IP 地址（点分十进制，来自 message.ip）。判断是否来自同一台机器、批处理源。</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>客户端主机的 IP 地址（点分十进制，来自 message.ip）。判断是否来自同一台机器、批处理源。</p>
                     * @param _host <p>客户端主机的 IP 地址（点分十进制，来自 message.ip）。判断是否来自同一台机器、批处理源。</p>
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
                     * 获取<p>会话当前活跃的数据库 ID（xml 的 currentdb）。</p>
                     * @return DatabaseId <p>会话当前活跃的数据库 ID（xml 的 currentdb）。</p>
                     * 
                     */
                    int64_t GetDatabaseId() const;

                    /**
                     * 设置<p>会话当前活跃的数据库 ID（xml 的 currentdb）。</p>
                     * @param _databaseId <p>会话当前活跃的数据库 ID（xml 的 currentdb）。</p>
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
                     * 获取<p>本事务是否为牺牲事务。true 表示 SQL Server 已回滚该事务；false 表示正常提交；null 表示 XML 缺 VictimProcessIds 无法判定。</p>
                     * @return IsVictim <p>本事务是否为牺牲事务。true 表示 SQL Server 已回滚该事务；false 表示正常提交；null 表示 XML 缺 VictimProcessIds 无法判定。</p>
                     * 
                     */
                    bool GetIsVictim() const;

                    /**
                     * 设置<p>本事务是否为牺牲事务。true 表示 SQL Server 已回滚该事务；false 表示正常提交；null 表示 XML 缺 VictimProcessIds 无法判定。</p>
                     * @param _isVictim <p>本事务是否为牺牲事务。true 表示 SQL Server 已回滚该事务；false 表示正常提交；null 表示 XML 缺 VictimProcessIds 无法判定。</p>
                     * 
                     */
                    void SetIsVictim(const bool& _isVictim);

                    /**
                     * 判断参数 IsVictim 是否已赋值
                     * @return IsVictim 是否已赋值
                     * 
                     */
                    bool IsVictimHasBeenSet() const;

                    /**
                     * 获取<p>等锁时长，单位毫秒。判断死锁检测延迟、事务超时的辅助指标。</p>
                     * @return WaitTimeMs <p>等锁时长，单位毫秒。判断死锁检测延迟、事务超时的辅助指标。</p>
                     * 
                     */
                    int64_t GetWaitTimeMs() const;

                    /**
                     * 设置<p>等锁时长，单位毫秒。判断死锁检测延迟、事务超时的辅助指标。</p>
                     * @param _waitTimeMs <p>等锁时长，单位毫秒。判断死锁检测延迟、事务超时的辅助指标。</p>
                     * 
                     */
                    void SetWaitTimeMs(const int64_t& _waitTimeMs);

                    /**
                     * 判断参数 WaitTimeMs 是否已赋值
                     * @return WaitTimeMs 是否已赋值
                     * 
                     */
                    bool WaitTimeMsHasBeenSet() const;

                    /**
                     * 获取<p>事务开始时间（xml 里的 lasttranstarted，本地时间字符串，如 2026-09-16T14:58:23.840）。用于分析长事务、锁持有时长。</p>
                     * @return LastTransStarted <p>事务开始时间（xml 里的 lasttranstarted，本地时间字符串，如 2026-09-16T14:58:23.840）。用于分析长事务、锁持有时长。</p>
                     * 
                     */
                    std::string GetLastTransStarted() const;

                    /**
                     * 设置<p>事务开始时间（xml 里的 lasttranstarted，本地时间字符串，如 2026-09-16T14:58:23.840）。用于分析长事务、锁持有时长。</p>
                     * @param _lastTransStarted <p>事务开始时间（xml 里的 lasttranstarted，本地时间字符串，如 2026-09-16T14:58:23.840）。用于分析长事务、锁持有时长。</p>
                     * 
                     */
                    void SetLastTransStarted(const std::string& _lastTransStarted);

                    /**
                     * 判断参数 LastTransStarted 是否已赋值
                     * @return LastTransStarted 是否已赋值
                     * 
                     */
                    bool LastTransStartedHasBeenSet() const;

                    /**
                     * 获取<p>该边对应进程的并行执行子线程 ID。</p>
                     * @return ExecutionContextId <p>该边对应进程的并行执行子线程 ID。</p>
                     * 
                     */
                    int64_t GetExecutionContextId() const;

                    /**
                     * 设置<p>该边对应进程的并行执行子线程 ID。</p>
                     * @param _executionContextId <p>该边对应进程的并行执行子线程 ID。</p>
                     * 
                     */
                    void SetExecutionContextId(const int64_t& _executionContextId);

                    /**
                     * 判断参数 ExecutionContextId 是否已赋值
                     * @return ExecutionContextId 是否已赋值
                     * 
                     */
                    bool ExecutionContextIdHasBeenSet() const;

                    /**
                     * 获取<p>SQL Server 引擎内的进程指针，例如 process260256c7468。与 Resources.Owners/Waiters.ProcessId 拼接死锁环。partial 事件为 null。</p>
                     * @return ProcessId <p>SQL Server 引擎内的进程指针，例如 process260256c7468。与 Resources.Owners/Waiters.ProcessId 拼接死锁环。partial 事件为 null。</p>
                     * 
                     */
                    std::string GetProcessId() const;

                    /**
                     * 设置<p>SQL Server 引擎内的进程指针，例如 process260256c7468。与 Resources.Owners/Waiters.ProcessId 拼接死锁环。partial 事件为 null。</p>
                     * @param _processId <p>SQL Server 引擎内的进程指针，例如 process260256c7468。与 Resources.Owners/Waiters.ProcessId 拼接死锁环。partial 事件为 null。</p>
                     * 
                     */
                    void SetProcessId(const std::string& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取<p>归一化后的客户端应用名。去掉 SQLAgent 的 JobId（16-64 位十六进制串）、Step 号、GUID、末尾进程号等易变部分，用于按应用类别聚合。</p>
                     * @return ClientAppNormalized <p>归一化后的客户端应用名。去掉 SQLAgent 的 JobId（16-64 位十六进制串）、Step 号、GUID、末尾进程号等易变部分，用于按应用类别聚合。</p>
                     * 
                     */
                    std::string GetClientAppNormalized() const;

                    /**
                     * 设置<p>归一化后的客户端应用名。去掉 SQLAgent 的 JobId（16-64 位十六进制串）、Step 号、GUID、末尾进程号等易变部分，用于按应用类别聚合。</p>
                     * @param _clientAppNormalized <p>归一化后的客户端应用名。去掉 SQLAgent 的 JobId（16-64 位十六进制串）、Step 号、GUID、末尾进程号等易变部分，用于按应用类别聚合。</p>
                     * 
                     */
                    void SetClientAppNormalized(const std::string& _clientAppNormalized);

                    /**
                     * 判断参数 ClientAppNormalized 是否已赋值
                     * @return ClientAppNormalized 是否已赋值
                     * 
                     */
                    bool ClientAppNormalizedHasBeenSet() const;

                    /**
                     * 获取<p>本进程正在等待的锁资源描述列表（死锁环的等待边）。每条形如 &#39;keylock on tempdb.dbo.dl_a mode X waiting&#39;。applicationlock 会展示原始资源名（如 &#39;lock_a&#39;）。partial 事件为空数组。</p>
                     * @return LockRequest <p>本进程正在等待的锁资源描述列表（死锁环的等待边）。每条形如 &#39;keylock on tempdb.dbo.dl_a mode X waiting&#39;。applicationlock 会展示原始资源名（如 &#39;lock_a&#39;）。partial 事件为空数组。</p>
                     * 
                     */
                    std::vector<std::string> GetLockRequest() const;

                    /**
                     * 设置<p>本进程正在等待的锁资源描述列表（死锁环的等待边）。每条形如 &#39;keylock on tempdb.dbo.dl_a mode X waiting&#39;。applicationlock 会展示原始资源名（如 &#39;lock_a&#39;）。partial 事件为空数组。</p>
                     * @param _lockRequest <p>本进程正在等待的锁资源描述列表（死锁环的等待边）。每条形如 &#39;keylock on tempdb.dbo.dl_a mode X waiting&#39;。applicationlock 会展示原始资源名（如 &#39;lock_a&#39;）。partial 事件为空数组。</p>
                     * 
                     */
                    void SetLockRequest(const std::vector<std::string>& _lockRequest);

                    /**
                     * 判断参数 LockRequest 是否已赋值
                     * @return LockRequest 是否已赋值
                     * 
                     */
                    bool LockRequestHasBeenSet() const;

                    /**
                     * 获取<p>SQL Server 会话 ID。日志排查主键。</p>
                     * @return SessionId <p>SQL Server 会话 ID。日志排查主键。</p>
                     * 
                     */
                    int64_t GetSessionId() const;

                    /**
                     * 设置<p>SQL Server 会话 ID。日志排查主键。</p>
                     * @param _sessionId <p>SQL Server 会话 ID。日志排查主键。</p>
                     * 
                     */
                    void SetSessionId(const int64_t& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * <p>SQL 归一化后的指纹（SHA-1 前 16 位）。去掉字面量、注释、参数名、空白差异后计算，抗字面量差异，用于聚合相同 SQL 模板。SqlText 为空时为 null。</p>
                     */
                    std::string m_sqlFingerprint;
                    bool m_sqlFingerprintHasBeenSet;

                    /**
                     * <p>SQL Server 登录账号，用于权限归因。可判断是 SQLAgent、业务账号还是 DBA 账号。</p>
                     */
                    std::string m_loginName;
                    bool m_loginNameHasBeenSet;

                    /**
                     * <p>会话执行栈帧列表（xml 的 executionStack.frame），用于定位到存储过程内的具体语句区间。partial 事件为空数组。</p>
                     */
                    std::vector<DeadlockFrame> m_frames;
                    bool m_framesHasBeenSet;

                    /**
                     * <p>事务隔离级别，例如 &#39;read committed (2)&#39;、&#39;repeatable read (3)&#39;、&#39;serializable (4)&#39; 等。显著影响锁形态和死锁模式。</p>
                     */
                    std::string m_isolationLevel;
                    bool m_isolationLevelHasBeenSet;

                    /**
                     * <p>进程状态。常见值：suspended（挂起等锁）/ running / background。判断是否运行中被检测终止。</p>
                     */
                    std::string m_processStatus;
                    bool m_processStatusHasBeenSet;

                    /**
                     * <p>客户端应用名（xml 的 clientapp）。判断连接来源，例如 SQLAgent Job、ORM、SSMS、业务服务名等。</p>
                     */
                    std::string m_clientApp;
                    bool m_clientAppHasBeenSet;

                    /**
                     * <p>会话的 DEADLOCK_PRIORITY 设置。-10 表示主动降级为牺牲者候选；10 表示优先级更高。可解释为何这一方成为牺牲品。</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>会话当前活跃的数据库名（xml 的 currentdbname）。</p>
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>本进程当前持有的锁资源描述列表（死锁环的持有边）。格式同 LockRequest 但结尾为 &#39;holding&#39;。partial 事件为空数组。</p>
                     */
                    std::vector<std::string> m_lockHold;
                    bool m_lockHoldHasBeenSet;

                    /**
                     * <p>会话最近执行的 SQL 文本（xml 的 InputBuf）。是 AI 诊断的主输入与 SqlFingerprint 的来源。</p>
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * <p>客户端主机的 IP 地址（点分十进制，来自 message.ip）。判断是否来自同一台机器、批处理源。</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>会话当前活跃的数据库 ID（xml 的 currentdb）。</p>
                     */
                    int64_t m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * <p>本事务是否为牺牲事务。true 表示 SQL Server 已回滚该事务；false 表示正常提交；null 表示 XML 缺 VictimProcessIds 无法判定。</p>
                     */
                    bool m_isVictim;
                    bool m_isVictimHasBeenSet;

                    /**
                     * <p>等锁时长，单位毫秒。判断死锁检测延迟、事务超时的辅助指标。</p>
                     */
                    int64_t m_waitTimeMs;
                    bool m_waitTimeMsHasBeenSet;

                    /**
                     * <p>事务开始时间（xml 里的 lasttranstarted，本地时间字符串，如 2026-09-16T14:58:23.840）。用于分析长事务、锁持有时长。</p>
                     */
                    std::string m_lastTransStarted;
                    bool m_lastTransStartedHasBeenSet;

                    /**
                     * <p>该边对应进程的并行执行子线程 ID。</p>
                     */
                    int64_t m_executionContextId;
                    bool m_executionContextIdHasBeenSet;

                    /**
                     * <p>SQL Server 引擎内的进程指针，例如 process260256c7468。与 Resources.Owners/Waiters.ProcessId 拼接死锁环。partial 事件为 null。</p>
                     */
                    std::string m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * <p>归一化后的客户端应用名。去掉 SQLAgent 的 JobId（16-64 位十六进制串）、Step 号、GUID、末尾进程号等易变部分，用于按应用类别聚合。</p>
                     */
                    std::string m_clientAppNormalized;
                    bool m_clientAppNormalizedHasBeenSet;

                    /**
                     * <p>本进程正在等待的锁资源描述列表（死锁环的等待边）。每条形如 &#39;keylock on tempdb.dbo.dl_a mode X waiting&#39;。applicationlock 会展示原始资源名（如 &#39;lock_a&#39;）。partial 事件为空数组。</p>
                     */
                    std::vector<std::string> m_lockRequest;
                    bool m_lockRequestHasBeenSet;

                    /**
                     * <p>SQL Server 会话 ID。日志排查主键。</p>
                     */
                    int64_t m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DEADLOCKSESSION_H_
