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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DEADLOCKLOGITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DEADLOCKLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/DeadlockTransaction.h>
#include <tencentcloud/dbbrain/v20210527/model/DeadlockResource.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 死锁事件列表。按事件时间倒序排列（最近的死锁在前）。
                */
                class DeadLockLogItem : public AbstractModel
                {
                public:
                    DeadLockLogItem();
                    ~DeadLockLogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例 ID，例如 mssql-ks3s56dj。</p>
                     * @return InstanceId <p>实例 ID，例如 mssql-ks3s56dj。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，例如 mssql-ks3s56dj。</p>
                     * @param _instanceId <p>实例 ID，例如 mssql-ks3s56dj。</p>
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
                     * 获取<p>时间字段来源。XML_EVENT 表示时间来自 xml_deadlock_report 的引擎打点；OBSERVED_LOG 表示时间来自 chain/lock 观测记录（partial 事件）。</p>
                     * @return TimestampSource <p>时间字段来源。XML_EVENT 表示时间来自 xml_deadlock_report 的引擎打点；OBSERVED_LOG 表示时间来自 chain/lock 观测记录（partial 事件）。</p>
                     * 
                     */
                    std::string GetTimestampSource() const;

                    /**
                     * 设置<p>时间字段来源。XML_EVENT 表示时间来自 xml_deadlock_report 的引擎打点；OBSERVED_LOG 表示时间来自 chain/lock 观测记录（partial 事件）。</p>
                     * @param _timestampSource <p>时间字段来源。XML_EVENT 表示时间来自 xml_deadlock_report 的引擎打点；OBSERVED_LOG 表示时间来自 chain/lock 观测记录（partial 事件）。</p>
                     * 
                     */
                    void SetTimestampSource(const std::string& _timestampSource);

                    /**
                     * 判断参数 TimestampSource 是否已赋值
                     * @return TimestampSource 是否已赋值
                     * 
                     */
                    bool TimestampSourceHasBeenSet() const;

                    /**
                     * 获取<p>降级原因码。IsPartial=true 时值为 XML_NOT_AVAILABLE；否则为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartialReasonCode <p>降级原因码。IsPartial=true 时值为 XML_NOT_AVAILABLE；否则为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPartialReasonCode() const;

                    /**
                     * 设置<p>降级原因码。IsPartial=true 时值为 XML_NOT_AVAILABLE；否则为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partialReasonCode <p>降级原因码。IsPartial=true 时值为 XML_NOT_AVAILABLE；否则为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartialReasonCode(const std::string& _partialReasonCode);

                    /**
                     * 判断参数 PartialReasonCode 是否已赋值
                     * @return PartialReasonCode 是否已赋值
                     * 
                     */
                    bool PartialReasonCodeHasBeenSet() const;

                    /**
                     * 获取<p>被回滚的进程内部指针列表，例如 process260256c7468。与 Resources.Owners/Waiters.ProcessId 对齐，可用于死锁环节点定位。</p>
                     * @return VictimProcessIds <p>被回滚的进程内部指针列表，例如 process260256c7468。与 Resources.Owners/Waiters.ProcessId 对齐，可用于死锁环节点定位。</p>
                     * 
                     */
                    std::vector<std::string> GetVictimProcessIds() const;

                    /**
                     * 设置<p>被回滚的进程内部指针列表，例如 process260256c7468。与 Resources.Owners/Waiters.ProcessId 对齐，可用于死锁环节点定位。</p>
                     * @param _victimProcessIds <p>被回滚的进程内部指针列表，例如 process260256c7468。与 Resources.Owners/Waiters.ProcessId 对齐，可用于死锁环节点定位。</p>
                     * 
                     */
                    void SetVictimProcessIds(const std::vector<std::string>& _victimProcessIds);

                    /**
                     * 判断参数 VictimProcessIds 是否已赋值
                     * @return VictimProcessIds 是否已赋值
                     * 
                     */
                    bool VictimProcessIdsHasBeenSet() const;

                    /**
                     * 获取<p>原始负载是否被上游截断。true 表示 XmlReport 或 chain/lock payload 有过截断，会影响诊断可信度。</p>
                     * @return PayloadTruncated <p>原始负载是否被上游截断。true 表示 XmlReport 或 chain/lock payload 有过截断，会影响诊断可信度。</p>
                     * 
                     */
                    bool GetPayloadTruncated() const;

                    /**
                     * 设置<p>原始负载是否被上游截断。true 表示 XmlReport 或 chain/lock payload 有过截断，会影响诊断可信度。</p>
                     * @param _payloadTruncated <p>原始负载是否被上游截断。true 表示 XmlReport 或 chain/lock payload 有过截断，会影响诊断可信度。</p>
                     * 
                     */
                    void SetPayloadTruncated(const bool& _payloadTruncated);

                    /**
                     * 判断参数 PayloadTruncated 是否已赋值
                     * @return PayloadTruncated 是否已赋值
                     * 
                     */
                    bool PayloadTruncatedHasBeenSet() const;

                    /**
                     * 获取<p>组成本事件的所有 XEvent 原始消息 UUID 列表（去重后按字典序排序），用于多源溯源、审计、补数。</p>
                     * @return SourceUuids <p>组成本事件的所有 XEvent 原始消息 UUID 列表（去重后按字典序排序），用于多源溯源、审计、补数。</p>
                     * 
                     */
                    std::vector<std::string> GetSourceUuids() const;

                    /**
                     * 设置<p>组成本事件的所有 XEvent 原始消息 UUID 列表（去重后按字典序排序），用于多源溯源、审计、补数。</p>
                     * @param _sourceUuids <p>组成本事件的所有 XEvent 原始消息 UUID 列表（去重后按字典序排序），用于多源溯源、审计、补数。</p>
                     * 
                     */
                    void SetSourceUuids(const std::vector<std::string>& _sourceUuids);

                    /**
                     * 判断参数 SourceUuids 是否已赋值
                     * @return SourceUuids 是否已赋值
                     * 
                     */
                    bool SourceUuidsHasBeenSet() const;

                    /**
                     * 获取<p>实际可归因（有 TransactionId）的事务数量。</p>
                     * @return ObservedTransactionCount <p>实际可归因（有 TransactionId）的事务数量。</p>
                     * 
                     */
                    int64_t GetObservedTransactionCount() const;

                    /**
                     * 设置<p>实际可归因（有 TransactionId）的事务数量。</p>
                     * @param _observedTransactionCount <p>实际可归因（有 TransactionId）的事务数量。</p>
                     * 
                     */
                    void SetObservedTransactionCount(const int64_t& _observedTransactionCount);

                    /**
                     * 判断参数 ObservedTransactionCount 是否已赋值
                     * @return ObservedTransactionCount 是否已赋值
                     * 
                     */
                    bool ObservedTransactionCountHasBeenSet() const;

                    /**
                     * 获取<p>死锁发生时间。ISO-8601 带偏移格式，例如 2026-09-16T06:58:52.611+00:00。来源于 XEvent 原始 timestamp。</p>
                     * @return EventTimestamp <p>死锁发生时间。ISO-8601 带偏移格式，例如 2026-09-16T06:58:52.611+00:00。来源于 XEvent 原始 timestamp。</p>
                     * 
                     */
                    std::string GetEventTimestamp() const;

                    /**
                     * 设置<p>死锁发生时间。ISO-8601 带偏移格式，例如 2026-09-16T06:58:52.611+00:00。来源于 XEvent 原始 timestamp。</p>
                     * @param _eventTimestamp <p>死锁发生时间。ISO-8601 带偏移格式，例如 2026-09-16T06:58:52.611+00:00。来源于 XEvent 原始 timestamp。</p>
                     * 
                     */
                    void SetEventTimestamp(const std::string& _eventTimestamp);

                    /**
                     * 判断参数 EventTimestamp 是否已赋值
                     * @return EventTimestamp 是否已赋值
                     * 
                     */
                    bool EventTimestampHasBeenSet() const;

                    /**
                     * 获取<p>死锁图完整性。COMPLETE 表示成功装配 xml_deadlock_report；MISSING 表示无 xml 只有 chain/lock 消息（对应 IsPartial=true）。</p>
                     * @return GraphStatus <p>死锁图完整性。COMPLETE 表示成功装配 xml_deadlock_report；MISSING 表示无 xml 只有 chain/lock 消息（对应 IsPartial=true）。</p>
                     * 
                     */
                    std::string GetGraphStatus() const;

                    /**
                     * 设置<p>死锁图完整性。COMPLETE 表示成功装配 xml_deadlock_report；MISSING 表示无 xml 只有 chain/lock 消息（对应 IsPartial=true）。</p>
                     * @param _graphStatus <p>死锁图完整性。COMPLETE 表示成功装配 xml_deadlock_report；MISSING 表示无 xml 只有 chain/lock 消息（对应 IsPartial=true）。</p>
                     * 
                     */
                    void SetGraphStatus(const std::string& _graphStatus);

                    /**
                     * 判断参数 GraphStatus 是否已赋值
                     * @return GraphStatus 是否已赋值
                     * 
                     */
                    bool GraphStatusHasBeenSet() const;

                    /**
                     * 获取<p>本次响应中是否内联了原始死锁 XML。仅当请求参数 IncludeXml=true 且事件为 COMPLETE 时为 true。</p>
                     * @return XmlIncluded <p>本次响应中是否内联了原始死锁 XML。仅当请求参数 IncludeXml=true 且事件为 COMPLETE 时为 true。</p>
                     * 
                     */
                    bool GetXmlIncluded() const;

                    /**
                     * 设置<p>本次响应中是否内联了原始死锁 XML。仅当请求参数 IncludeXml=true 且事件为 COMPLETE 时为 true。</p>
                     * @param _xmlIncluded <p>本次响应中是否内联了原始死锁 XML。仅当请求参数 IncludeXml=true 且事件为 COMPLETE 时为 true。</p>
                     * 
                     */
                    void SetXmlIncluded(const bool& _xmlIncluded);

                    /**
                     * 判断参数 XmlIncluded 是否已赋值
                     * @return XmlIncluded 是否已赋值
                     * 
                     */
                    bool XmlIncludedHasBeenSet() const;

                    /**
                     * 获取<p>参与死锁的进程总数。2 方死锁最常见，N 方死锁更严重。</p>
                     * @return ProcessCount <p>参与死锁的进程总数。2 方死锁最常见，N 方死锁更严重。</p>
                     * 
                     */
                    int64_t GetProcessCount() const;

                    /**
                     * 设置<p>参与死锁的进程总数。2 方死锁最常见，N 方死锁更严重。</p>
                     * @param _processCount <p>参与死锁的进程总数。2 方死锁最常见，N 方死锁更严重。</p>
                     * 
                     */
                    void SetProcessCount(const int64_t& _processCount);

                    /**
                     * 判断参数 ProcessCount 是否已赋值
                     * @return ProcessCount 是否已赋值
                     * 
                     */
                    bool ProcessCountHasBeenSet() const;

                    /**
                     * 获取<p>参与死锁的事务列表（按 IsVictim=true 排前、TransactionId 升序）。每个事务下可能有多个 Session（例如并行执行 worker）。</p>
                     * @return Transactions <p>参与死锁的事务列表（按 IsVictim=true 排前、TransactionId 升序）。每个事务下可能有多个 Session（例如并行执行 worker）。</p>
                     * 
                     */
                    std::vector<DeadlockTransaction> GetTransactions() const;

                    /**
                     * 设置<p>参与死锁的事务列表（按 IsVictim=true 排前、TransactionId 升序）。每个事务下可能有多个 Session（例如并行执行 worker）。</p>
                     * @param _transactions <p>参与死锁的事务列表（按 IsVictim=true 排前、TransactionId 升序）。每个事务下可能有多个 Session（例如并行执行 worker）。</p>
                     * 
                     */
                    void SetTransactions(const std::vector<DeadlockTransaction>& _transactions);

                    /**
                     * 判断参数 Transactions 是否已赋值
                     * @return Transactions 是否已赋值
                     * 
                     */
                    bool TransactionsHasBeenSet() const;

                    /**
                     * 获取<p>引擎内的死锁编号，例如 84。与 SQL Server 端 xml_deadlock_report 对齐。同实例短期内可辨识，重启后会复用。若上游数据缺失则为 null。</p>
                     * @return DeadlockId <p>引擎内的死锁编号，例如 84。与 SQL Server 端 xml_deadlock_report 对齐。同实例短期内可辨识，重启后会复用。若上游数据缺失则为 null。</p>
                     * 
                     */
                    std::string GetDeadlockId() const;

                    /**
                     * 设置<p>引擎内的死锁编号，例如 84。与 SQL Server 端 xml_deadlock_report 对齐。同实例短期内可辨识，重启后会复用。若上游数据缺失则为 null。</p>
                     * @param _deadlockId <p>引擎内的死锁编号，例如 84。与 SQL Server 端 xml_deadlock_report 对齐。同实例短期内可辨识，重启后会复用。若上游数据缺失则为 null。</p>
                     * 
                     */
                    void SetDeadlockId(const std::string& _deadlockId);

                    /**
                     * 判断参数 DeadlockId 是否已赋值
                     * @return DeadlockId 是否已赋值
                     * 
                     */
                    bool DeadlockIdHasBeenSet() const;

                    /**
                     * 获取<p>原始 SQL Server 死锁图 XML 字符串（xml_deadlock_report 输出）。IncludeXml=false 或事件为 partial 时为 null。可用于前端直接绘制死锁环、AI 深度诊断，或落到对象存储做冷归档。</p>
                     * @return XmlReport <p>原始 SQL Server 死锁图 XML 字符串（xml_deadlock_report 输出）。IncludeXml=false 或事件为 partial 时为 null。可用于前端直接绘制死锁环、AI 深度诊断，或落到对象存储做冷归档。</p>
                     * 
                     */
                    std::string GetXmlReport() const;

                    /**
                     * 设置<p>原始 SQL Server 死锁图 XML 字符串（xml_deadlock_report 输出）。IncludeXml=false 或事件为 partial 时为 null。可用于前端直接绘制死锁环、AI 深度诊断，或落到对象存储做冷归档。</p>
                     * @param _xmlReport <p>原始 SQL Server 死锁图 XML 字符串（xml_deadlock_report 输出）。IncludeXml=false 或事件为 partial 时为 null。可用于前端直接绘制死锁环、AI 深度诊断，或落到对象存储做冷归档。</p>
                     * 
                     */
                    void SetXmlReport(const std::string& _xmlReport);

                    /**
                     * 判断参数 XmlReport 是否已赋值
                     * @return XmlReport 是否已赋值
                     * 
                     */
                    bool XmlReportHasBeenSet() const;

                    /**
                     * 获取<p>原始 XML 字节数，用于采集侧健康度评估。partial 事件为 null。</p>
                     * @return OriginalXmlBytes <p>原始 XML 字节数，用于采集侧健康度评估。partial 事件为 null。</p>
                     * 
                     */
                    int64_t GetOriginalXmlBytes() const;

                    /**
                     * 设置<p>原始 XML 字节数，用于采集侧健康度评估。partial 事件为 null。</p>
                     * @param _originalXmlBytes <p>原始 XML 字节数，用于采集侧健康度评估。partial 事件为 null。</p>
                     * 
                     */
                    void SetOriginalXmlBytes(const int64_t& _originalXmlBytes);

                    /**
                     * 判断参数 OriginalXmlBytes 是否已赋值
                     * @return OriginalXmlBytes 是否已赋值
                     * 
                     */
                    bool OriginalXmlBytesHasBeenSet() const;

                    /**
                     * 获取<p>被 SQL Server 选中回滚的会话 SPID 列表（去重）。DBA 复盘定位牺牲者的核心字段。</p>
                     * @return VictimSessionIds <p>被 SQL Server 选中回滚的会话 SPID 列表（去重）。DBA 复盘定位牺牲者的核心字段。</p>
                     * 
                     */
                    std::vector<int64_t> GetVictimSessionIds() const;

                    /**
                     * 设置<p>被 SQL Server 选中回滚的会话 SPID 列表（去重）。DBA 复盘定位牺牲者的核心字段。</p>
                     * @param _victimSessionIds <p>被 SQL Server 选中回滚的会话 SPID 列表（去重）。DBA 复盘定位牺牲者的核心字段。</p>
                     * 
                     */
                    void SetVictimSessionIds(const std::vector<int64_t>& _victimSessionIds);

                    /**
                     * 判断参数 VictimSessionIds 是否已赋值
                     * @return VictimSessionIds 是否已赋值
                     * 
                     */
                    bool VictimSessionIdsHasBeenSet() const;

                    /**
                     * 获取<p>是否为降级 partial 事件。true 表示无 xml_deadlock_report，Transactions/Resources 只能从 chain/lock 消息尽力还原。AI 诊断前建议过滤 IsPartial=true 的记录。</p>
                     * @return IsPartial <p>是否为降级 partial 事件。true 表示无 xml_deadlock_report，Transactions/Resources 只能从 chain/lock 消息尽力还原。AI 诊断前建议过滤 IsPartial=true 的记录。</p>
                     * 
                     */
                    bool GetIsPartial() const;

                    /**
                     * 设置<p>是否为降级 partial 事件。true 表示无 xml_deadlock_report，Transactions/Resources 只能从 chain/lock 消息尽力还原。AI 诊断前建议过滤 IsPartial=true 的记录。</p>
                     * @param _isPartial <p>是否为降级 partial 事件。true 表示无 xml_deadlock_report，Transactions/Resources 只能从 chain/lock 消息尽力还原。AI 诊断前建议过滤 IsPartial=true 的记录。</p>
                     * 
                     */
                    void SetIsPartial(const bool& _isPartial);

                    /**
                     * 判断参数 IsPartial 是否已赋值
                     * @return IsPartial 是否已赋值
                     * 
                     */
                    bool IsPartialHasBeenSet() const;

                    /**
                     * 获取<p>涉及的数据库名去重列表，用于分库聚合与影响范围判断。</p>
                     * @return DatabaseNames <p>涉及的数据库名去重列表，用于分库聚合与影响范围判断。</p>
                     * 
                     */
                    std::vector<std::string> GetDatabaseNames() const;

                    /**
                     * 设置<p>涉及的数据库名去重列表，用于分库聚合与影响范围判断。</p>
                     * @param _databaseNames <p>涉及的数据库名去重列表，用于分库聚合与影响范围判断。</p>
                     * 
                     */
                    void SetDatabaseNames(const std::vector<std::string>& _databaseNames);

                    /**
                     * 判断参数 DatabaseNames 是否已赋值
                     * @return DatabaseNames 是否已赋值
                     * 
                     */
                    bool DatabaseNamesHasBeenSet() const;

                    /**
                     * 获取<p>事件唯一 ID，格式为 xml:&lt;uuid&gt; 或 partial:&lt;uuid&gt;。前缀 xml 表示由 xml_deadlock_report 装配的完整事件；partial 表示只有 chain/lock 消息的降级事件。可作为幂等主键。</p>
                     * @return EventId <p>事件唯一 ID，格式为 xml:&lt;uuid&gt; 或 partial:&lt;uuid&gt;。前缀 xml 表示由 xml_deadlock_report 装配的完整事件；partial 表示只有 chain/lock 消息的降级事件。可作为幂等主键。</p>
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置<p>事件唯一 ID，格式为 xml:&lt;uuid&gt; 或 partial:&lt;uuid&gt;。前缀 xml 表示由 xml_deadlock_report 装配的完整事件；partial 表示只有 chain/lock 消息的降级事件。可作为幂等主键。</p>
                     * @param _eventId <p>事件唯一 ID，格式为 xml:&lt;uuid&gt; 或 partial:&lt;uuid&gt;。前缀 xml 表示由 xml_deadlock_report 装配的完整事件；partial 表示只有 chain/lock 消息的降级事件。可作为幂等主键。</p>
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取<p>死锁事件级签名（SHA-1 前 16 位）。基于参与死锁的所有锁资源三元组 (Kind, ObjectName, IndexName, Mode) 排序后计算，用于聚合相同锁冲突模式的死锁模板。partial 事件无 Resources 时为 null。</p>
                     * @return DeadlockSignature <p>死锁事件级签名（SHA-1 前 16 位）。基于参与死锁的所有锁资源三元组 (Kind, ObjectName, IndexName, Mode) 排序后计算，用于聚合相同锁冲突模式的死锁模板。partial 事件无 Resources 时为 null。</p>
                     * 
                     */
                    std::string GetDeadlockSignature() const;

                    /**
                     * 设置<p>死锁事件级签名（SHA-1 前 16 位）。基于参与死锁的所有锁资源三元组 (Kind, ObjectName, IndexName, Mode) 排序后计算，用于聚合相同锁冲突模式的死锁模板。partial 事件无 Resources 时为 null。</p>
                     * @param _deadlockSignature <p>死锁事件级签名（SHA-1 前 16 位）。基于参与死锁的所有锁资源三元组 (Kind, ObjectName, IndexName, Mode) 排序后计算，用于聚合相同锁冲突模式的死锁模板。partial 事件无 Resources 时为 null。</p>
                     * 
                     */
                    void SetDeadlockSignature(const std::string& _deadlockSignature);

                    /**
                     * 判断参数 DeadlockSignature 是否已赋值
                     * @return DeadlockSignature 是否已赋值
                     * 
                     */
                    bool DeadlockSignatureHasBeenSet() const;

                    /**
                     * 获取<p>死锁涉及的锁资源节点列表。每个资源节点有若干 Owners（持有边）与 Waiters（等待边），二者组合构成死锁环。partial 事件为空数组。</p>
                     * @return Resources <p>死锁涉及的锁资源节点列表。每个资源节点有若干 Owners（持有边）与 Waiters（等待边），二者组合构成死锁环。partial 事件为空数组。</p>
                     * 
                     */
                    std::vector<DeadlockResource> GetResources() const;

                    /**
                     * 设置<p>死锁涉及的锁资源节点列表。每个资源节点有若干 Owners（持有边）与 Waiters（等待边），二者组合构成死锁环。partial 事件为空数组。</p>
                     * @param _resources <p>死锁涉及的锁资源节点列表。每个资源节点有若干 Owners（持有边）与 Waiters（等待边），二者组合构成死锁环。partial 事件为空数组。</p>
                     * 
                     */
                    void SetResources(const std::vector<DeadlockResource>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取<p>XE 辅助事件（chain/lock）与 XML 图的关联状态。MATCHED 表示至少一个 chain/lock 消息已关联到该 xml；UNMATCHED 表示只有孤立 xml 或降级 partial 事件。</p>
                     * @return AssociationStatus <p>XE 辅助事件（chain/lock）与 XML 图的关联状态。MATCHED 表示至少一个 chain/lock 消息已关联到该 xml；UNMATCHED 表示只有孤立 xml 或降级 partial 事件。</p>
                     * 
                     */
                    std::string GetAssociationStatus() const;

                    /**
                     * 设置<p>XE 辅助事件（chain/lock）与 XML 图的关联状态。MATCHED 表示至少一个 chain/lock 消息已关联到该 xml；UNMATCHED 表示只有孤立 xml 或降级 partial 事件。</p>
                     * @param _associationStatus <p>XE 辅助事件（chain/lock）与 XML 图的关联状态。MATCHED 表示至少一个 chain/lock 消息已关联到该 xml；UNMATCHED 表示只有孤立 xml 或降级 partial 事件。</p>
                     * 
                     */
                    void SetAssociationStatus(const std::string& _associationStatus);

                    /**
                     * 判断参数 AssociationStatus 是否已赋值
                     * @return AssociationStatus 是否已赋值
                     * 
                     */
                    bool AssociationStatusHasBeenSet() const;

                    /**
                     * 获取<p>参与死锁的事务总数（有 TransactionId 的会话按事务分组后的数量）。当存在无 TransactionId 的会话时为 null，通过 ObservedTransactionCount 与该字段的差值可以判断归因缺失情况。</p>
                     * @return TransactionCount <p>参与死锁的事务总数（有 TransactionId 的会话按事务分组后的数量）。当存在无 TransactionId 的会话时为 null，通过 ObservedTransactionCount 与该字段的差值可以判断归因缺失情况。</p>
                     * 
                     */
                    int64_t GetTransactionCount() const;

                    /**
                     * 设置<p>参与死锁的事务总数（有 TransactionId 的会话按事务分组后的数量）。当存在无 TransactionId 的会话时为 null，通过 ObservedTransactionCount 与该字段的差值可以判断归因缺失情况。</p>
                     * @param _transactionCount <p>参与死锁的事务总数（有 TransactionId 的会话按事务分组后的数量）。当存在无 TransactionId 的会话时为 null，通过 ObservedTransactionCount 与该字段的差值可以判断归因缺失情况。</p>
                     * 
                     */
                    void SetTransactionCount(const int64_t& _transactionCount);

                    /**
                     * 判断参数 TransactionCount 是否已赋值
                     * @return TransactionCount 是否已赋值
                     * 
                     */
                    bool TransactionCountHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，例如 mssql-ks3s56dj。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>时间字段来源。XML_EVENT 表示时间来自 xml_deadlock_report 的引擎打点；OBSERVED_LOG 表示时间来自 chain/lock 观测记录（partial 事件）。</p>
                     */
                    std::string m_timestampSource;
                    bool m_timestampSourceHasBeenSet;

                    /**
                     * <p>降级原因码。IsPartial=true 时值为 XML_NOT_AVAILABLE；否则为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_partialReasonCode;
                    bool m_partialReasonCodeHasBeenSet;

                    /**
                     * <p>被回滚的进程内部指针列表，例如 process260256c7468。与 Resources.Owners/Waiters.ProcessId 对齐，可用于死锁环节点定位。</p>
                     */
                    std::vector<std::string> m_victimProcessIds;
                    bool m_victimProcessIdsHasBeenSet;

                    /**
                     * <p>原始负载是否被上游截断。true 表示 XmlReport 或 chain/lock payload 有过截断，会影响诊断可信度。</p>
                     */
                    bool m_payloadTruncated;
                    bool m_payloadTruncatedHasBeenSet;

                    /**
                     * <p>组成本事件的所有 XEvent 原始消息 UUID 列表（去重后按字典序排序），用于多源溯源、审计、补数。</p>
                     */
                    std::vector<std::string> m_sourceUuids;
                    bool m_sourceUuidsHasBeenSet;

                    /**
                     * <p>实际可归因（有 TransactionId）的事务数量。</p>
                     */
                    int64_t m_observedTransactionCount;
                    bool m_observedTransactionCountHasBeenSet;

                    /**
                     * <p>死锁发生时间。ISO-8601 带偏移格式，例如 2026-09-16T06:58:52.611+00:00。来源于 XEvent 原始 timestamp。</p>
                     */
                    std::string m_eventTimestamp;
                    bool m_eventTimestampHasBeenSet;

                    /**
                     * <p>死锁图完整性。COMPLETE 表示成功装配 xml_deadlock_report；MISSING 表示无 xml 只有 chain/lock 消息（对应 IsPartial=true）。</p>
                     */
                    std::string m_graphStatus;
                    bool m_graphStatusHasBeenSet;

                    /**
                     * <p>本次响应中是否内联了原始死锁 XML。仅当请求参数 IncludeXml=true 且事件为 COMPLETE 时为 true。</p>
                     */
                    bool m_xmlIncluded;
                    bool m_xmlIncludedHasBeenSet;

                    /**
                     * <p>参与死锁的进程总数。2 方死锁最常见，N 方死锁更严重。</p>
                     */
                    int64_t m_processCount;
                    bool m_processCountHasBeenSet;

                    /**
                     * <p>参与死锁的事务列表（按 IsVictim=true 排前、TransactionId 升序）。每个事务下可能有多个 Session（例如并行执行 worker）。</p>
                     */
                    std::vector<DeadlockTransaction> m_transactions;
                    bool m_transactionsHasBeenSet;

                    /**
                     * <p>引擎内的死锁编号，例如 84。与 SQL Server 端 xml_deadlock_report 对齐。同实例短期内可辨识，重启后会复用。若上游数据缺失则为 null。</p>
                     */
                    std::string m_deadlockId;
                    bool m_deadlockIdHasBeenSet;

                    /**
                     * <p>原始 SQL Server 死锁图 XML 字符串（xml_deadlock_report 输出）。IncludeXml=false 或事件为 partial 时为 null。可用于前端直接绘制死锁环、AI 深度诊断，或落到对象存储做冷归档。</p>
                     */
                    std::string m_xmlReport;
                    bool m_xmlReportHasBeenSet;

                    /**
                     * <p>原始 XML 字节数，用于采集侧健康度评估。partial 事件为 null。</p>
                     */
                    int64_t m_originalXmlBytes;
                    bool m_originalXmlBytesHasBeenSet;

                    /**
                     * <p>被 SQL Server 选中回滚的会话 SPID 列表（去重）。DBA 复盘定位牺牲者的核心字段。</p>
                     */
                    std::vector<int64_t> m_victimSessionIds;
                    bool m_victimSessionIdsHasBeenSet;

                    /**
                     * <p>是否为降级 partial 事件。true 表示无 xml_deadlock_report，Transactions/Resources 只能从 chain/lock 消息尽力还原。AI 诊断前建议过滤 IsPartial=true 的记录。</p>
                     */
                    bool m_isPartial;
                    bool m_isPartialHasBeenSet;

                    /**
                     * <p>涉及的数据库名去重列表，用于分库聚合与影响范围判断。</p>
                     */
                    std::vector<std::string> m_databaseNames;
                    bool m_databaseNamesHasBeenSet;

                    /**
                     * <p>事件唯一 ID，格式为 xml:&lt;uuid&gt; 或 partial:&lt;uuid&gt;。前缀 xml 表示由 xml_deadlock_report 装配的完整事件；partial 表示只有 chain/lock 消息的降级事件。可作为幂等主键。</p>
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>死锁事件级签名（SHA-1 前 16 位）。基于参与死锁的所有锁资源三元组 (Kind, ObjectName, IndexName, Mode) 排序后计算，用于聚合相同锁冲突模式的死锁模板。partial 事件无 Resources 时为 null。</p>
                     */
                    std::string m_deadlockSignature;
                    bool m_deadlockSignatureHasBeenSet;

                    /**
                     * <p>死锁涉及的锁资源节点列表。每个资源节点有若干 Owners（持有边）与 Waiters（等待边），二者组合构成死锁环。partial 事件为空数组。</p>
                     */
                    std::vector<DeadlockResource> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * <p>XE 辅助事件（chain/lock）与 XML 图的关联状态。MATCHED 表示至少一个 chain/lock 消息已关联到该 xml；UNMATCHED 表示只有孤立 xml 或降级 partial 事件。</p>
                     */
                    std::string m_associationStatus;
                    bool m_associationStatusHasBeenSet;

                    /**
                     * <p>参与死锁的事务总数（有 TransactionId 的会话按事务分组后的数量）。当存在无 TransactionId 的会话时为 null，通过 ObservedTransactionCount 与该字段的差值可以判断归因缺失情况。</p>
                     */
                    int64_t m_transactionCount;
                    bool m_transactionCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DEADLOCKLOGITEM_H_
