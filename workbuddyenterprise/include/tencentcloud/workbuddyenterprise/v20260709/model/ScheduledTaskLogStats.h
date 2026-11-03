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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SCHEDULEDTASKLOGSTATS_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SCHEDULEDTASKLOGSTATS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 定时任务执行聚合统计
                */
                class ScheduledTaskLogStats : public AbstractModel
                {
                public:
                    ScheduledTaskLogStats();
                    ~ScheduledTaskLogStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>总执行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount <p>总执行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>总执行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount <p>总执行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>成功次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessCount <p>成功次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置<p>成功次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successCount <p>成功次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取<p>失败次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedCount <p>失败次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFailedCount() const;

                    /**
                     * 设置<p>失败次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failedCount <p>失败次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailedCount(const int64_t& _failedCount);

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                    /**
                     * 获取<p>平均执行时长（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvgDurationMs <p>平均执行时长（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAvgDurationMs() const;

                    /**
                     * 设置<p>平均执行时长（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _avgDurationMs <p>平均执行时长（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvgDurationMs(const int64_t& _avgDurationMs);

                    /**
                     * 判断参数 AvgDurationMs 是否已赋值
                     * @return AvgDurationMs 是否已赋值
                     * 
                     */
                    bool AvgDurationMsHasBeenSet() const;

                private:

                    /**
                     * <p>总执行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>成功次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * <p>失败次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                    /**
                     * <p>平均执行时长（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_avgDurationMs;
                    bool m_avgDurationMsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SCHEDULEDTASKLOGSTATS_H_
