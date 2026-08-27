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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONEXECUTION_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONEXECUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 策略执行记录
                */
                class ReplicationExecution : public AbstractModel
                {
                public:
                    ReplicationExecution();
                    ~ReplicationExecution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionID 执行记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExecutionID() const;

                    /**
                     * 设置执行记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionID 执行记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionID(const int64_t& _executionID);

                    /**
                     * 判断参数 ExecutionID 是否已赋值
                     * @return ExecutionID 是否已赋值
                     * 
                     */
                    bool ExecutionIDHasBeenSet() const;

                    /**
                     * 获取策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyID 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPolicyID() const;

                    /**
                     * 设置策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyID 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyID(const int64_t& _policyID);

                    /**
                     * 判断参数 PolicyID 是否已赋值
                     * @return PolicyID 是否已赋值
                     * 
                     */
                    bool PolicyIDHasBeenSet() const;

                    /**
                     * 获取执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取执行任务总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 执行任务总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置执行任务总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 执行任务总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取执行任务成功数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Succeed 执行任务成功数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSucceed() const;

                    /**
                     * 设置执行任务成功数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _succeed 执行任务成功数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSucceed(const int64_t& _succeed);

                    /**
                     * 判断参数 Succeed 是否已赋值
                     * @return Succeed 是否已赋值
                     * 
                     */
                    bool SucceedHasBeenSet() const;

                    /**
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 开始时间
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
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 结束时间
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

                private:

                    /**
                     * 执行记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_executionID;
                    bool m_executionIDHasBeenSet;

                    /**
                     * 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_policyID;
                    bool m_policyIDHasBeenSet;

                    /**
                     * 执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 执行任务总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 执行任务成功数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_succeed;
                    bool m_succeedHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONEXECUTION_H_
