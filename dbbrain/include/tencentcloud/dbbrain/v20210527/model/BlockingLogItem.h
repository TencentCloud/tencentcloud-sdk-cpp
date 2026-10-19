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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_BLOCKINGLOGITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_BLOCKINGLOGITEM_H_

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
                * 阻塞日志扁平明细行：一次blocked_process_report（blocker→blocked边）在某一次monitorLoop内被lock monitor捕获的瞬时数据。
                */
                class BlockingLogItem : public AbstractModel
                {
                public:
                    BlockingLogItem();
                    ~BlockingLogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>本条明细行上报时间（事件时间，__time；时区UTC+8），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportTime <p>本条明细行上报时间（事件时间，__time；时区UTC+8），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReportTime() const;

                    /**
                     * 设置<p>本条明细行上报时间（事件时间，__time；时区UTC+8），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reportTime <p>本条明细行上报时间（事件时间，__time；时区UTC+8），格式：yyyy-MM-dd HH:mm:ss。</p>
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
                     * 获取<p>监控轮次ID（同一实例内唯一标识一次采集快照，可透传至DescribeBlockingLockTree下钻查看完整阻塞树）。文本承载数值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorLoop <p>监控轮次ID（同一实例内唯一标识一次采集快照，可透传至DescribeBlockingLockTree下钻查看完整阻塞树）。文本承载数值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMonitorLoop() const;

                    /**
                     * 设置<p>监控轮次ID（同一实例内唯一标识一次采集快照，可透传至DescribeBlockingLockTree下钻查看完整阻塞树）。文本承载数值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorLoop <p>监控轮次ID（同一实例内唯一标识一次采集快照，可透传至DescribeBlockingLockTree下钻查看完整阻塞树）。文本承载数值。</p>
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
                     * 获取<p>被阻塞方的等待时长（毫秒）。来源：Kafka顶层Fields.duration÷1000（微秒→毫秒），来自SQL Server内核XEvent事件的duration字段。与BlockedWaitTimeMs来源不同但通常非常接近（非严格相等，两者为同一事件的两个独立快照）；仅为OrderBy=durationMs排序别名保留。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DurationMs <p>被阻塞方的等待时长（毫秒）。来源：Kafka顶层Fields.duration÷1000（微秒→毫秒），来自SQL Server内核XEvent事件的duration字段。与BlockedWaitTimeMs来源不同但通常非常接近（非严格相等，两者为同一事件的两个独立快照）；仅为OrderBy=durationMs排序别名保留。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDurationMs() const;

                    /**
                     * 设置<p>被阻塞方的等待时长（毫秒）。来源：Kafka顶层Fields.duration÷1000（微秒→毫秒），来自SQL Server内核XEvent事件的duration字段。与BlockedWaitTimeMs来源不同但通常非常接近（非严格相等，两者为同一事件的两个独立快照）；仅为OrderBy=durationMs排序别名保留。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _durationMs <p>被阻塞方的等待时长（毫秒）。来源：Kafka顶层Fields.duration÷1000（微秒→毫秒），来自SQL Server内核XEvent事件的duration字段。与BlockedWaitTimeMs来源不同但通常非常接近（非严格相等，两者为同一事件的两个独立快照）；仅为OrderBy=durationMs排序别名保留。</p>
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
                     * 获取<p>阻塞发生所在的数据库名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName <p>阻塞发生所在的数据库名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>阻塞发生所在的数据库名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName <p>阻塞发生所在的数据库名称。</p>
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
                     * 获取<p>阻塞发生所在的数据库 ID（Fields.database_id，对应 SQL Server sys.databases.database_id）。可配合 DatabaseName 使用：ID 稳定、Name 易读；Name 在重命名场景下会变化，ID 则不会。采样为空时该字段不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId <p>阻塞发生所在的数据库 ID（Fields.database_id，对应 SQL Server sys.databases.database_id）。可配合 DatabaseName 使用：ID 稳定、Name 易读；Name 在重命名场景下会变化，ID 则不会。采样为空时该字段不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDatabaseId() const;

                    /**
                     * 设置<p>阻塞发生所在的数据库 ID（Fields.database_id，对应 SQL Server sys.databases.database_id）。可配合 DatabaseName 使用：ID 稳定、Name 易读；Name 在重命名场景下会变化，ID 则不会。采样为空时该字段不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseId <p>阻塞发生所在的数据库 ID（Fields.database_id，对应 SQL Server sys.databases.database_id）。可配合 DatabaseName 使用：ID 稳定、Name 易读；Name 在重命名场景下会变化，ID 则不会。采样为空时该字段不返回。</p>
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
                     * 获取<p>阻塞锁资源归属的对象 ID（Fields.object_id，对应 SQL Server sys.objects.object_id）。标识具体的表/视图/存储过程等用户对象；可结合 sys.objects 元数据查询对象名。采样为空时该字段不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectId <p>阻塞锁资源归属的对象 ID（Fields.object_id，对应 SQL Server sys.objects.object_id）。标识具体的表/视图/存储过程等用户对象；可结合 sys.objects 元数据查询对象名。采样为空时该字段不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetObjectId() const;

                    /**
                     * 设置<p>阻塞锁资源归属的对象 ID（Fields.object_id，对应 SQL Server sys.objects.object_id）。标识具体的表/视图/存储过程等用户对象；可结合 sys.objects 元数据查询对象名。采样为空时该字段不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectId <p>阻塞锁资源归属的对象 ID（Fields.object_id，对应 SQL Server sys.objects.object_id）。标识具体的表/视图/存储过程等用户对象；可结合 sys.objects 元数据查询对象名。采样为空时该字段不返回。</p>
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
                     * 获取<p>阻塞锁资源归属的索引 ID（Fields.index_id，对应 SQL Server sys.indexes.index_id）。常见取值：0=堆（无聚集索引）、1=聚集索引、&gt;1=非聚集索引；&gt;250 通常为系统内部索引（如全文/XML/空间索引），诊断时按&quot;是否为用户索引&quot;判断即可。采样为空时该字段不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexId <p>阻塞锁资源归属的索引 ID（Fields.index_id，对应 SQL Server sys.indexes.index_id）。常见取值：0=堆（无聚集索引）、1=聚集索引、&gt;1=非聚集索引；&gt;250 通常为系统内部索引（如全文/XML/空间索引），诊断时按&quot;是否为用户索引&quot;判断即可。采样为空时该字段不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndexId() const;

                    /**
                     * 设置<p>阻塞锁资源归属的索引 ID（Fields.index_id，对应 SQL Server sys.indexes.index_id）。常见取值：0=堆（无聚集索引）、1=聚集索引、&gt;1=非聚集索引；&gt;250 通常为系统内部索引（如全文/XML/空间索引），诊断时按&quot;是否为用户索引&quot;判断即可。采样为空时该字段不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexId <p>阻塞锁资源归属的索引 ID（Fields.index_id，对应 SQL Server sys.indexes.index_id）。常见取值：0=堆（无聚集索引）、1=聚集索引、&gt;1=非聚集索引；&gt;250 通常为系统内部索引（如全文/XML/空间索引），诊断时按&quot;是否为用户索引&quot;判断即可。采样为空时该字段不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexId(const int64_t& _indexId);

                    /**
                     * 判断参数 IndexId 是否已赋值
                     * @return IndexId 是否已赋值
                     * 
                     */
                    bool IndexIdHasBeenSet() const;

                    /**
                     * 获取<p>根因分类（与枚举BlockingRootCause一一对应）。取值：C1_LONG_QUERY=长查询正常运行阻塞；C2_SLEEPING_UNCOMMITTED=休眠会话且存在未提交事务；C3_CLIENT_NOT_FETCHING=客户端未取完结果行；C4_APP_DEADLOCK=应用层分布式死锁；C5_ROLLBACK=会话正在rollback；C6_ORPHAN_TRANSACTION=孤立事务；UNKNOWN=未识别。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootCause <p>根因分类（与枚举BlockingRootCause一一对应）。取值：C1_LONG_QUERY=长查询正常运行阻塞；C2_SLEEPING_UNCOMMITTED=休眠会话且存在未提交事务；C3_CLIENT_NOT_FETCHING=客户端未取完结果行；C4_APP_DEADLOCK=应用层分布式死锁；C5_ROLLBACK=会话正在rollback；C6_ORPHAN_TRANSACTION=孤立事务；UNKNOWN=未识别。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRootCause() const;

                    /**
                     * 设置<p>根因分类（与枚举BlockingRootCause一一对应）。取值：C1_LONG_QUERY=长查询正常运行阻塞；C2_SLEEPING_UNCOMMITTED=休眠会话且存在未提交事务；C3_CLIENT_NOT_FETCHING=客户端未取完结果行；C4_APP_DEADLOCK=应用层分布式死锁；C5_ROLLBACK=会话正在rollback；C6_ORPHAN_TRANSACTION=孤立事务；UNKNOWN=未识别。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rootCause <p>根因分类（与枚举BlockingRootCause一一对应）。取值：C1_LONG_QUERY=长查询正常运行阻塞；C2_SLEEPING_UNCOMMITTED=休眠会话且存在未提交事务；C3_CLIENT_NOT_FETCHING=客户端未取完结果行；C4_APP_DEADLOCK=应用层分布式死锁；C5_ROLLBACK=会话正在rollback；C6_ORPHAN_TRANSACTION=孤立事务；UNKNOWN=未识别。</p>
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
                     * 获取<p>根因分类的可读中文描述（服务端已完成中文化，前端可直接展示；与RootCause代号一一对应，例如C1_LONG_QUERY→&quot;长查询正常运行阻塞，考虑优化SQL/索引&quot;，未识别或空值统一返回&quot;未识别&quot;）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootCauseDesc <p>根因分类的可读中文描述（服务端已完成中文化，前端可直接展示；与RootCause代号一一对应，例如C1_LONG_QUERY→&quot;长查询正常运行阻塞，考虑优化SQL/索引&quot;，未识别或空值统一返回&quot;未识别&quot;）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRootCauseDesc() const;

                    /**
                     * 设置<p>根因分类的可读中文描述（服务端已完成中文化，前端可直接展示；与RootCause代号一一对应，例如C1_LONG_QUERY→&quot;长查询正常运行阻塞，考虑优化SQL/索引&quot;，未识别或空值统一返回&quot;未识别&quot;）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rootCauseDesc <p>根因分类的可读中文描述（服务端已完成中文化，前端可直接展示；与RootCause代号一一对应，例如C1_LONG_QUERY→&quot;长查询正常运行阻塞，考虑优化SQL/索引&quot;，未识别或空值统一返回&quot;未识别&quot;）。</p>
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
                     * 获取<p>头阻塞会话 ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingSessionId <p>头阻塞会话 ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBlockingSessionId() const;

                    /**
                     * 设置<p>头阻塞会话 ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingSessionId <p>头阻塞会话 ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
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
                     * 获取<p>头阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status文本），常见取值：running / sleeping / suspended / background。sleeping+trancount&gt;0是C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingStatus <p>头阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status文本），常见取值：running / sleeping / suspended / background。sleeping+trancount&gt;0是C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockingStatus() const;

                    /**
                     * 设置<p>头阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status文本），常见取值：running / sleeping / suspended / background。sleeping+trancount&gt;0是C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingStatus <p>头阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status文本），常见取值：running / sleeping / suspended / background。sleeping+trancount&gt;0是C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
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
                     * 获取<p>头阻塞会话事务隔离级别（SQL Server原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingIsolationLevel <p>头阻塞会话事务隔离级别（SQL Server原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockingIsolationLevel() const;

                    /**
                     * 设置<p>头阻塞会话事务隔离级别（SQL Server原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingIsolationLevel <p>头阻塞会话事务隔离级别（SQL Server原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
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
                     * 获取<p>头阻塞会话当前显式事务名（XEvent transactionname，如user_transaction / implicit_transaction）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingTransactionName <p>头阻塞会话当前显式事务名（XEvent transactionname，如user_transaction / implicit_transaction）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockingTransactionName() const;

                    /**
                     * 设置<p>头阻塞会话当前显式事务名（XEvent transactionname，如user_transaction / implicit_transaction）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingTransactionName <p>头阻塞会话当前显式事务名（XEvent transactionname，如user_transaction / implicit_transaction）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockingTransactionName(const std::string& _blockingTransactionName);

                    /**
                     * 判断参数 BlockingTransactionName 是否已赋值
                     * @return BlockingTransactionName 是否已赋值
                     * 
                     */
                    bool BlockingTransactionNameHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞会话当前显式事务嵌套层数（XEvent trancount）。&gt;0表示持有显式事务；与BlockingStatus=sleeping组合是C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingTranCount <p>头阻塞会话当前显式事务嵌套层数（XEvent trancount）。&gt;0表示持有显式事务；与BlockingStatus=sleeping组合是C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBlockingTranCount() const;

                    /**
                     * 设置<p>头阻塞会话当前显式事务嵌套层数（XEvent trancount）。&gt;0表示持有显式事务；与BlockingStatus=sleeping组合是C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingTranCount <p>头阻塞会话当前显式事务嵌套层数（XEvent trancount）。&gt;0表示持有显式事务；与BlockingStatus=sleeping组合是C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
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
                     * 获取<p>头阻塞会话显式事务BEGIN TRAN时刻（XEvent lasttranstarted，SQL Server服务端本地时区的ISO 8601字符串，无时区后缀）。该字段代表事务持锁开始时刻：ReportTime-BlockingLastTranStarted≈事务持锁时长，用于C1_LONG_QUERY / C6_ORPHAN_TRANSACTION根因复核；在多语句事务场景下比lastbatchstarted更稳定（不会被每个新batch刷新）。值为空表示XML未提供该属性（blocking-process侧常见）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingLastTranStarted <p>头阻塞会话显式事务BEGIN TRAN时刻（XEvent lasttranstarted，SQL Server服务端本地时区的ISO 8601字符串，无时区后缀）。该字段代表事务持锁开始时刻：ReportTime-BlockingLastTranStarted≈事务持锁时长，用于C1_LONG_QUERY / C6_ORPHAN_TRANSACTION根因复核；在多语句事务场景下比lastbatchstarted更稳定（不会被每个新batch刷新）。值为空表示XML未提供该属性（blocking-process侧常见）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockingLastTranStarted() const;

                    /**
                     * 设置<p>头阻塞会话显式事务BEGIN TRAN时刻（XEvent lasttranstarted，SQL Server服务端本地时区的ISO 8601字符串，无时区后缀）。该字段代表事务持锁开始时刻：ReportTime-BlockingLastTranStarted≈事务持锁时长，用于C1_LONG_QUERY / C6_ORPHAN_TRANSACTION根因复核；在多语句事务场景下比lastbatchstarted更稳定（不会被每个新batch刷新）。值为空表示XML未提供该属性（blocking-process侧常见）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingLastTranStarted <p>头阻塞会话显式事务BEGIN TRAN时刻（XEvent lasttranstarted，SQL Server服务端本地时区的ISO 8601字符串，无时区后缀）。该字段代表事务持锁开始时刻：ReportTime-BlockingLastTranStarted≈事务持锁时长，用于C1_LONG_QUERY / C6_ORPHAN_TRANSACTION根因复核；在多语句事务场景下比lastbatchstarted更稳定（不会被每个新batch刷新）。值为空表示XML未提供该属性（blocking-process侧常见）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockingLastTranStarted(const std::string& _blockingLastTranStarted);

                    /**
                     * 判断参数 BlockingLastTranStarted 是否已赋值
                     * @return BlockingLastTranStarted 是否已赋值
                     * 
                     */
                    bool BlockingLastTranStartedHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞会话正在执行的SQL原文（对应DBCC INPUTBUFFER返回内容，单条最长16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingInputBuffer <p>头阻塞会话正在执行的SQL原文（对应DBCC INPUTBUFFER返回内容，单条最长16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockingInputBuffer() const;

                    /**
                     * 设置<p>头阻塞会话正在执行的SQL原文（对应DBCC INPUTBUFFER返回内容，单条最长16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingInputBuffer <p>头阻塞会话正在执行的SQL原文（对应DBCC INPUTBUFFER返回内容，单条最长16KB，超长截断）。</p>
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
                     * 获取<p>头阻塞会话持有或请求的锁模式（SQL Server原生lock_mode枚举；blocker通常不处于等锁状态，该字段多为空）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingLockMode <p>头阻塞会话持有或请求的锁模式（SQL Server原生lock_mode枚举；blocker通常不处于等锁状态，该字段多为空）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockingLockMode() const;

                    /**
                     * 设置<p>头阻塞会话持有或请求的锁模式（SQL Server原生lock_mode枚举；blocker通常不处于等锁状态，该字段多为空）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingLockMode <p>头阻塞会话持有或请求的锁模式（SQL Server原生lock_mode枚举；blocker通常不处于等锁状态，该字段多为空）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockingLockMode(const std::string& _blockingLockMode);

                    /**
                     * 判断参数 BlockingLockMode 是否已赋值
                     * @return BlockingLockMode 是否已赋值
                     * 
                     */
                    bool BlockingLockModeHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞会话自身的等待时长（毫秒）。多数场景为0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockingWaitTimeMs <p>头阻塞会话自身的等待时长（毫秒）。多数场景为0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBlockingWaitTimeMs() const;

                    /**
                     * 设置<p>头阻塞会话自身的等待时长（毫秒）。多数场景为0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockingWaitTimeMs <p>头阻塞会话自身的等待时长（毫秒）。多数场景为0。</p>
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
                     * 获取<p>被阻塞会话事务ID（SQL Server transaction_id，bigint）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedTransactionId <p>被阻塞会话事务ID（SQL Server transaction_id，bigint）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBlockedTransactionId() const;

                    /**
                     * 设置<p>被阻塞会话事务ID（SQL Server transaction_id，bigint）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedTransactionId <p>被阻塞会话事务ID（SQL Server transaction_id，bigint）。</p>
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
                     * 获取<p>被阻塞会话等待时长（毫秒）。来源：XML &lt;blocked-process&gt;&lt;process waittime&gt;属性（来自ys.dm_os_waiting_tasks.wait_duration_ms在report生成瞬间的快照）。与DurationMs来源不同但通常非常接近；仅为OrderBy=blockedWaitTimeMs排序别名保留。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedWaitTimeMs <p>被阻塞会话等待时长（毫秒）。来源：XML &lt;blocked-process&gt;&lt;process waittime&gt;属性（来自ys.dm_os_waiting_tasks.wait_duration_ms在report生成瞬间的快照）。与DurationMs来源不同但通常非常接近；仅为OrderBy=blockedWaitTimeMs排序别名保留。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBlockedWaitTimeMs() const;

                    /**
                     * 设置<p>被阻塞会话等待时长（毫秒）。来源：XML &lt;blocked-process&gt;&lt;process waittime&gt;属性（来自ys.dm_os_waiting_tasks.wait_duration_ms在report生成瞬间的快照）。与DurationMs来源不同但通常非常接近；仅为OrderBy=blockedWaitTimeMs排序别名保留。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedWaitTimeMs <p>被阻塞会话等待时长（毫秒）。来源：XML &lt;blocked-process&gt;&lt;process waittime&gt;属性（来自ys.dm_os_waiting_tasks.wait_duration_ms在report生成瞬间的快照）。与DurationMs来源不同但通常非常接近；仅为OrderBy=blockedWaitTimeMs排序别名保留。</p>
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
                     * 获取<p>被阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status文本），常见取值：running / sleeping / suspended / background。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedStatus <p>被阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status文本），常见取值：running / sleeping / suspended / background。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedStatus() const;

                    /**
                     * 设置<p>被阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status文本），常见取值：running / sleeping / suspended / background。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedStatus <p>被阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status文本），常见取值：running / sleeping / suspended / background。</p>
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
                     * 获取<p>被阻塞会话事务隔离级别（SQL Server原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedIsolationLevel <p>被阻塞会话事务隔离级别（SQL Server原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedIsolationLevel() const;

                    /**
                     * 设置<p>被阻塞会话事务隔离级别（SQL Server原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedIsolationLevel <p>被阻塞会话事务隔离级别（SQL Server原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
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
                     * 获取<p>被阻塞会话显式事务BEGIN TRAN时刻（XEvent lasttranstarted，SQL Server服务端本地时区的ISO 8601字符串，无时区后缀）。该字段代表事务开始时刻，在多语句事务场景下比lastbatchstarted更稳定。咨视值1900-01-01T00:00:00表示未知。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedLastTranStarted <p>被阻塞会话显式事务BEGIN TRAN时刻（XEvent lasttranstarted，SQL Server服务端本地时区的ISO 8601字符串，无时区后缀）。该字段代表事务开始时刻，在多语句事务场景下比lastbatchstarted更稳定。咨视值1900-01-01T00:00:00表示未知。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedLastTranStarted() const;

                    /**
                     * 设置<p>被阻塞会话显式事务BEGIN TRAN时刻（XEvent lasttranstarted，SQL Server服务端本地时区的ISO 8601字符串，无时区后缀）。该字段代表事务开始时刻，在多语句事务场景下比lastbatchstarted更稳定。咨视值1900-01-01T00:00:00表示未知。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedLastTranStarted <p>被阻塞会话显式事务BEGIN TRAN时刻（XEvent lasttranstarted，SQL Server服务端本地时区的ISO 8601字符串，无时区后缀）。该字段代表事务开始时刻，在多语句事务场景下比lastbatchstarted更稳定。咨视值1900-01-01T00:00:00表示未知。</p>
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
                     * 获取<p>被阻塞会话正在执行的SQL原文（对应DBCC INPUTBUFFER返回内容，单条最长16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedInputBuffer <p>被阻塞会话正在执行的SQL原文（对应DBCC INPUTBUFFER返回内容，单条最长16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedInputBuffer() const;

                    /**
                     * 设置<p>被阻塞会话正在执行的SQL原文（对应DBCC INPUTBUFFER返回内容，单条最长16KB，超长截断）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedInputBuffer <p>被阻塞会话正在执行的SQL原文（对应DBCC INPUTBUFFER返回内容，单条最长16KB，超长截断）。</p>
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
                     * 获取<p>被阻塞方 blocked_process_report 原始 XML 文本（含完整执行计划、等待链、死锁明细等原始现场；字段体积较大，KB 级起步）。仅当请求参数 WithXml=true 时才返回；默认 false 时该字段省略，不出现在响应体中。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedProcessXml <p>被阻塞方 blocked_process_report 原始 XML 文本（含完整执行计划、等待链、死锁明细等原始现场；字段体积较大，KB 级起步）。仅当请求参数 WithXml=true 时才返回；默认 false 时该字段省略，不出现在响应体中。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockedProcessXml() const;

                    /**
                     * 设置<p>被阻塞方 blocked_process_report 原始 XML 文本（含完整执行计划、等待链、死锁明细等原始现场；字段体积较大，KB 级起步）。仅当请求参数 WithXml=true 时才返回；默认 false 时该字段省略，不出现在响应体中。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedProcessXml <p>被阻塞方 blocked_process_report 原始 XML 文本（含完整执行计划、等待链、死锁明细等原始现场；字段体积较大，KB 级起步）。仅当请求参数 WithXml=true 时才返回；默认 false 时该字段省略，不出现在响应体中。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedProcessXml(const std::string& _blockedProcessXml);

                    /**
                     * 判断参数 BlockedProcessXml 是否已赋值
                     * @return BlockedProcessXml 是否已赋值
                     * 
                     */
                    bool BlockedProcessXmlHasBeenSet() const;

                private:

                    /**
                     * <p>本条明细行上报时间（事件时间，__time；时区UTC+8），格式：yyyy-MM-dd HH:mm:ss。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportTime;
                    bool m_reportTimeHasBeenSet;

                    /**
                     * <p>监控轮次ID（同一实例内唯一标识一次采集快照，可透传至DescribeBlockingLockTree下钻查看完整阻塞树）。文本承载数值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_monitorLoop;
                    bool m_monitorLoopHasBeenSet;

                    /**
                     * <p>被阻塞方的等待时长（毫秒）。来源：Kafka顶层Fields.duration÷1000（微秒→毫秒），来自SQL Server内核XEvent事件的duration字段。与BlockedWaitTimeMs来源不同但通常非常接近（非严格相等，两者为同一事件的两个独立快照）；仅为OrderBy=durationMs排序别名保留。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_durationMs;
                    bool m_durationMsHasBeenSet;

                    /**
                     * <p>阻塞发生所在的数据库名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>阻塞发生所在的数据库 ID（Fields.database_id，对应 SQL Server sys.databases.database_id）。可配合 DatabaseName 使用：ID 稳定、Name 易读；Name 在重命名场景下会变化，ID 则不会。采样为空时该字段不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * <p>阻塞锁资源归属的对象 ID（Fields.object_id，对应 SQL Server sys.objects.object_id）。标识具体的表/视图/存储过程等用户对象；可结合 sys.objects 元数据查询对象名。采样为空时该字段不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * <p>阻塞锁资源归属的索引 ID（Fields.index_id，对应 SQL Server sys.indexes.index_id）。常见取值：0=堆（无聚集索引）、1=聚集索引、&gt;1=非聚集索引；&gt;250 通常为系统内部索引（如全文/XML/空间索引），诊断时按&quot;是否为用户索引&quot;判断即可。采样为空时该字段不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_indexId;
                    bool m_indexIdHasBeenSet;

                    /**
                     * <p>根因分类（与枚举BlockingRootCause一一对应）。取值：C1_LONG_QUERY=长查询正常运行阻塞；C2_SLEEPING_UNCOMMITTED=休眠会话且存在未提交事务；C3_CLIENT_NOT_FETCHING=客户端未取完结果行；C4_APP_DEADLOCK=应用层分布式死锁；C5_ROLLBACK=会话正在rollback；C6_ORPHAN_TRANSACTION=孤立事务；UNKNOWN=未识别。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rootCause;
                    bool m_rootCauseHasBeenSet;

                    /**
                     * <p>根因分类的可读中文描述（服务端已完成中文化，前端可直接展示；与RootCause代号一一对应，例如C1_LONG_QUERY→&quot;长查询正常运行阻塞，考虑优化SQL/索引&quot;，未识别或空值统一返回&quot;未识别&quot;）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rootCauseDesc;
                    bool m_rootCauseDescHasBeenSet;

                    /**
                     * <p>头阻塞会话 ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockingSessionId;
                    bool m_blockingSessionIdHasBeenSet;

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
                     * <p>头阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status文本），常见取值：running / sleeping / suspended / background。sleeping+trancount&gt;0是C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockingStatus;
                    bool m_blockingStatusHasBeenSet;

                    /**
                     * <p>头阻塞会话事务隔离级别（SQL Server原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockingIsolationLevel;
                    bool m_blockingIsolationLevelHasBeenSet;

                    /**
                     * <p>头阻塞会话当前显式事务名（XEvent transactionname，如user_transaction / implicit_transaction）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockingTransactionName;
                    bool m_blockingTransactionNameHasBeenSet;

                    /**
                     * <p>头阻塞会话当前显式事务嵌套层数（XEvent trancount）。&gt;0表示持有显式事务；与BlockingStatus=sleeping组合是C2_SLEEPING_UNCOMMITTED（休眠会话持未提交事务）的直接证据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockingTranCount;
                    bool m_blockingTranCountHasBeenSet;

                    /**
                     * <p>头阻塞会话显式事务BEGIN TRAN时刻（XEvent lasttranstarted，SQL Server服务端本地时区的ISO 8601字符串，无时区后缀）。该字段代表事务持锁开始时刻：ReportTime-BlockingLastTranStarted≈事务持锁时长，用于C1_LONG_QUERY / C6_ORPHAN_TRANSACTION根因复核；在多语句事务场景下比lastbatchstarted更稳定（不会被每个新batch刷新）。值为空表示XML未提供该属性（blocking-process侧常见）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockingLastTranStarted;
                    bool m_blockingLastTranStartedHasBeenSet;

                    /**
                     * <p>头阻塞会话正在执行的SQL原文（对应DBCC INPUTBUFFER返回内容，单条最长16KB，超长截断）。</p>
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
                     * <p>头阻塞会话持有或请求的锁模式（SQL Server原生lock_mode枚举；blocker通常不处于等锁状态，该字段多为空）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockingLockMode;
                    bool m_blockingLockModeHasBeenSet;

                    /**
                     * <p>头阻塞会话自身的等待时长（毫秒）。多数场景为0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockingWaitTimeMs;
                    bool m_blockingWaitTimeMsHasBeenSet;

                    /**
                     * <p>被阻塞会话 ID（对应 SQL Server sys.dm_exec_sessions.session_id，即 SPID）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockedSessionId;
                    bool m_blockedSessionIdHasBeenSet;

                    /**
                     * <p>被阻塞会话事务ID（SQL Server transaction_id，bigint）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockedTransactionId;
                    bool m_blockedTransactionIdHasBeenSet;

                    /**
                     * <p>被阻塞会话等待时长（毫秒）。来源：XML &lt;blocked-process&gt;&lt;process waittime&gt;属性（来自ys.dm_os_waiting_tasks.wait_duration_ms在report生成瞬间的快照）。与DurationMs来源不同但通常非常接近；仅为OrderBy=blockedWaitTimeMs排序别名保留。</p>
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
                     * <p>被阻塞会话运行时状态（SQL Server sys.dm_exec_sessions.status文本），常见取值：running / sleeping / suspended / background。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockedStatus;
                    bool m_blockedStatusHasBeenSet;

                    /**
                     * <p>被阻塞会话事务隔离级别（SQL Server原生取值：read uncommitted / read committed / repeatable read / serializable / snapshot）。</p>
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
                     * <p>被阻塞会话显式事务BEGIN TRAN时刻（XEvent lasttranstarted，SQL Server服务端本地时区的ISO 8601字符串，无时区后缀）。该字段代表事务开始时刻，在多语句事务场景下比lastbatchstarted更稳定。咨视值1900-01-01T00:00:00表示未知。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockedLastTranStarted;
                    bool m_blockedLastTranStartedHasBeenSet;

                    /**
                     * <p>被阻塞会话正在执行的SQL原文（对应DBCC INPUTBUFFER返回内容，单条最长16KB，超长截断）。</p>
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
                     * <p>被阻塞方 blocked_process_report 原始 XML 文本（含完整执行计划、等待链、死锁明细等原始现场；字段体积较大，KB 级起步）。仅当请求参数 WithXml=true 时才返回；默认 false 时该字段省略，不出现在响应体中。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockedProcessXml;
                    bool m_blockedProcessXmlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_BLOCKINGLOGITEM_H_
