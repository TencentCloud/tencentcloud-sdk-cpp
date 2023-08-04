/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCEHACONFIGRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCEHACONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDBInstanceHAConfig返回参数结构体
                */
                class DescribeDBInstanceHAConfigResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceHAConfigResponse();
                    ~DescribeDBInstanceHAConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取主从同步方式：
<li>Semi-sync：半同步
<li>Async：异步
                     * @return SyncMode 主从同步方式：
<li>Semi-sync：半同步
<li>Async：异步
                     * 
                     */
                    std::string GetSyncMode() const;

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                    /**
                     * 获取高可用备机最大延迟数据量。备节点延迟数据量小于等于该值，且备节点延迟时间小于等于MaxStandbyLag时，可以切换为主节点。
<li>单位：byte
<li>参数范围：[1073741824, 322122547200]
                     * @return MaxStandbyLatency 高可用备机最大延迟数据量。备节点延迟数据量小于等于该值，且备节点延迟时间小于等于MaxStandbyLag时，可以切换为主节点。
<li>单位：byte
<li>参数范围：[1073741824, 322122547200]
                     * 
                     */
                    uint64_t GetMaxStandbyLatency() const;

                    /**
                     * 判断参数 MaxStandbyLatency 是否已赋值
                     * @return MaxStandbyLatency 是否已赋值
                     * 
                     */
                    bool MaxStandbyLatencyHasBeenSet() const;

                    /**
                     * 获取高可用备机最大延迟时间。备节点延迟时间小于等于该值，且备节点延迟数据量小于等于MaxStandbyLatency时，可以切换为主节点。
<li>单位：s
<li>参数范围：[5, 10]
                     * @return MaxStandbyLag 高可用备机最大延迟时间。备节点延迟时间小于等于该值，且备节点延迟数据量小于等于MaxStandbyLatency时，可以切换为主节点。
<li>单位：s
<li>参数范围：[5, 10]
                     * 
                     */
                    uint64_t GetMaxStandbyLag() const;

                    /**
                     * 判断参数 MaxStandbyLag 是否已赋值
                     * @return MaxStandbyLag 是否已赋值
                     * 
                     */
                    bool MaxStandbyLagHasBeenSet() const;

                    /**
                     * 获取同步备机最大延迟数据量。备机延迟数据量小于等于该值，且该备机延迟时间小于等于MaxSyncStandbyLag时，则该备机采用同步复制；否则，采用异步复制。
该参数值针对SyncMode设置为Semi-sync的实例有效。
异步实例该字段返回null。
半同步实例禁止退化为异步复制时，该字段返回null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxSyncStandbyLatency 同步备机最大延迟数据量。备机延迟数据量小于等于该值，且该备机延迟时间小于等于MaxSyncStandbyLag时，则该备机采用同步复制；否则，采用异步复制。
该参数值针对SyncMode设置为Semi-sync的实例有效。
异步实例该字段返回null。
半同步实例禁止退化为异步复制时，该字段返回null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxSyncStandbyLatency() const;

                    /**
                     * 判断参数 MaxSyncStandbyLatency 是否已赋值
                     * @return MaxSyncStandbyLatency 是否已赋值
                     * 
                     */
                    bool MaxSyncStandbyLatencyHasBeenSet() const;

                    /**
                     * 获取同步备机最大延迟时间。备机延迟时间小于等于该值，且该备机延迟数据量小于等于MaxSyncStandbyLatency时，则该备机采用同步复制；否则，采用异步复制。
该参数值针对SyncMode设置为Semi-sync的实例有效。
异步实例不返回该字段。
半同步实例禁止退化为异步复制时，不返回该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxSyncStandbyLag 同步备机最大延迟时间。备机延迟时间小于等于该值，且该备机延迟数据量小于等于MaxSyncStandbyLatency时，则该备机采用同步复制；否则，采用异步复制。
该参数值针对SyncMode设置为Semi-sync的实例有效。
异步实例不返回该字段。
半同步实例禁止退化为异步复制时，不返回该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxSyncStandbyLag() const;

                    /**
                     * 判断参数 MaxSyncStandbyLag 是否已赋值
                     * @return MaxSyncStandbyLag 是否已赋值
                     * 
                     */
                    bool MaxSyncStandbyLagHasBeenSet() const;

                private:

                    /**
                     * 主从同步方式：
<li>Semi-sync：半同步
<li>Async：异步
                     */
                    std::string m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * 高可用备机最大延迟数据量。备节点延迟数据量小于等于该值，且备节点延迟时间小于等于MaxStandbyLag时，可以切换为主节点。
<li>单位：byte
<li>参数范围：[1073741824, 322122547200]
                     */
                    uint64_t m_maxStandbyLatency;
                    bool m_maxStandbyLatencyHasBeenSet;

                    /**
                     * 高可用备机最大延迟时间。备节点延迟时间小于等于该值，且备节点延迟数据量小于等于MaxStandbyLatency时，可以切换为主节点。
<li>单位：s
<li>参数范围：[5, 10]
                     */
                    uint64_t m_maxStandbyLag;
                    bool m_maxStandbyLagHasBeenSet;

                    /**
                     * 同步备机最大延迟数据量。备机延迟数据量小于等于该值，且该备机延迟时间小于等于MaxSyncStandbyLag时，则该备机采用同步复制；否则，采用异步复制。
该参数值针对SyncMode设置为Semi-sync的实例有效。
异步实例该字段返回null。
半同步实例禁止退化为异步复制时，该字段返回null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxSyncStandbyLatency;
                    bool m_maxSyncStandbyLatencyHasBeenSet;

                    /**
                     * 同步备机最大延迟时间。备机延迟时间小于等于该值，且该备机延迟数据量小于等于MaxSyncStandbyLatency时，则该备机采用同步复制；否则，采用异步复制。
该参数值针对SyncMode设置为Semi-sync的实例有效。
异步实例不返回该字段。
半同步实例禁止退化为异步复制时，不返回该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxSyncStandbyLag;
                    bool m_maxSyncStandbyLagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCEHACONFIGRESPONSE_H_
