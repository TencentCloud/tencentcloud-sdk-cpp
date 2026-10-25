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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_BLOCKINGTRENDPOINT_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_BLOCKINGTRENDPOINT_H_

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
                * 阻塞趋势时序点，表示某个粒度 bucket 的阻塞聚合统计。
                */
                class BlockingTrendPoint : public AbstractModel
                {
                public:
                    BlockingTrendPoint();
                    ~BlockingTrendPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>该 bucket 的实际聚合区间左端（含），格式：yyyy-MM-dd HH:mm:ss。聚合区间为前闭后开 [StartTime, EndTime)。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>该 bucket 的实际聚合区间左端（含），格式：yyyy-MM-dd HH:mm:ss。聚合区间为前闭后开 [StartTime, EndTime)。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>该 bucket 的实际聚合区间左端（含），格式：yyyy-MM-dd HH:mm:ss。聚合区间为前闭后开 [StartTime, EndTime)。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>该 bucket 的实际聚合区间左端（含），格式：yyyy-MM-dd HH:mm:ss。聚合区间为前闭后开 [StartTime, EndTime)。</p>
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
                     * 获取<p>该 bucket 的实际聚合区间右端（不含），格式：yyyy-MM-dd HH:mm:ss。即 StartTime + GranularityMs。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>该 bucket 的实际聚合区间右端（不含），格式：yyyy-MM-dd HH:mm:ss。即 StartTime + GranularityMs。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>该 bucket 的实际聚合区间右端（不含），格式：yyyy-MM-dd HH:mm:ss。即 StartTime + GranularityMs。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>该 bucket 的实际聚合区间右端（不含），格式：yyyy-MM-dd HH:mm:ss。即 StartTime + GranularityMs。</p>
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
                     * 获取<p>该 bucket 内的阻塞 report 行数（底层 blocked_process_report 事件数），无数据 bucket 返回 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockCount <p>该 bucket 内的阻塞 report 行数（底层 blocked_process_report 事件数），无数据 bucket 返回 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLockCount() const;

                    /**
                     * 设置<p>该 bucket 内的阻塞 report 行数（底层 blocked_process_report 事件数），无数据 bucket 返回 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockCount <p>该 bucket 内的阻塞 report 行数（底层 blocked_process_report 事件数），无数据 bucket 返回 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLockCount(const int64_t& _lockCount);

                    /**
                     * 判断参数 LockCount 是否已赋值
                     * @return LockCount 是否已赋值
                     * 
                     */
                    bool LockCountHasBeenSet() const;

                    /**
                     * 获取<p>该 bucket 内观测到的不同 monitorLoop 数量（lock monitor 扫描快照数），无数据 bucket 返回 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorLoopCount <p>该 bucket 内观测到的不同 monitorLoop 数量（lock monitor 扫描快照数），无数据 bucket 返回 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMonitorLoopCount() const;

                    /**
                     * 设置<p>该 bucket 内观测到的不同 monitorLoop 数量（lock monitor 扫描快照数），无数据 bucket 返回 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorLoopCount <p>该 bucket 内观测到的不同 monitorLoop 数量（lock monitor 扫描快照数），无数据 bucket 返回 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorLoopCount(const int64_t& _monitorLoopCount);

                    /**
                     * 判断参数 MonitorLoopCount 是否已赋值
                     * @return MonitorLoopCount 是否已赋值
                     * 
                     */
                    bool MonitorLoopCountHasBeenSet() const;

                private:

                    /**
                     * <p>该 bucket 的实际聚合区间左端（含），格式：yyyy-MM-dd HH:mm:ss。聚合区间为前闭后开 [StartTime, EndTime)。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>该 bucket 的实际聚合区间右端（不含），格式：yyyy-MM-dd HH:mm:ss。即 StartTime + GranularityMs。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>该 bucket 内的阻塞 report 行数（底层 blocked_process_report 事件数），无数据 bucket 返回 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lockCount;
                    bool m_lockCountHasBeenSet;

                    /**
                     * <p>该 bucket 内观测到的不同 monitorLoop 数量（lock monitor 扫描快照数），无数据 bucket 返回 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_monitorLoopCount;
                    bool m_monitorLoopCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_BLOCKINGTRENDPOINT_H_
